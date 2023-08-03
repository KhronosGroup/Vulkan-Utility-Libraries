// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
// Author(s):
// - Christophe Riccio <christophe@lunarg.com>
#include "vulkan/layer/vk_layer_settings.h"
#include "layer_settings_util.hpp"
#include "layer_settings_manager.hpp"

#include <memory>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <cctype>
#include <cstring>
#include <cstdint>

// This is used only for unit tests in test_layer_setting_file
void test_helper_SetLayerSetting(VlLayerSettingSet layerSettingSet, const char *pSettingName, const char *pValue) {
    assert(layerSettingSet != VK_NULL_HANDLE);
    assert(pSettingName != nullptr);
    assert(pValue != nullptr);

    vl::LayerSettings *layer_setting_set = (vl::LayerSettings *)layerSettingSet;

    layer_setting_set->SetFileSetting(pSettingName, pValue);
}

VkResult vlCreateLayerSettingSet(const char *pLayerName, const VkLayerSettingsCreateInfoEXT *pCreateInfo,
    const VkAllocationCallbacks *pAllocator, VL_LAYER_SETTING_LOG_CALLBACK pCallback,
    VlLayerSettingSet *pLayerSettingSet) {
    (void)pAllocator;

    vl::LayerSettings* layer_setting_set = new vl::LayerSettings(pLayerName, pCreateInfo, pAllocator, pCallback);
    *pLayerSettingSet = (VlLayerSettingSet)layer_setting_set;

    return VK_SUCCESS;
}

void vlDestroyLayerSettingSet(VlLayerSettingSet layerSettingSet, const VkAllocationCallbacks *pAllocator) {
    (void)pAllocator;

    vl::LayerSettings *layer_setting_set = (vl::LayerSettings*)layerSettingSet;
    delete layer_setting_set;
}

VkBool32 vlHasLayerSetting(VlLayerSettingSet layerSettingSet, const char *pSettingName) {
    assert(layerSettingSet != VK_NULL_HANDLE);
    assert(pSettingName);
    assert(!std::string(pSettingName).empty());

    vl::LayerSettings *layer_setting_set = (vl::LayerSettings *)layerSettingSet;

    const bool has_env_setting = layer_setting_set->HasEnvSetting(pSettingName);
    const bool has_file_setting = layer_setting_set->HasFileSetting(pSettingName);
    const bool has_api_setting = layer_setting_set->HasAPISetting(pSettingName);

    return (has_env_setting || has_file_setting || has_api_setting) ? VK_TRUE : VK_FALSE;
}

VkResult vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, VkLayerSettingTypeEXT type,
                                 uint32_t *pValueCount, void *pValues) {
    assert(pValueCount != nullptr);

    if (layerSettingSet == VK_NULL_HANDLE) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    if (!vlHasLayerSetting(layerSettingSet, pSettingName)) {
        *pValueCount = 0;
        return VK_SUCCESS;
    }

    if (*pValueCount == 0 && pValues != nullptr) {
        return VK_ERROR_UNKNOWN;
    }

    vl::LayerSettings *layer_setting_set = (vl::LayerSettings *)layerSettingSet;

    // First: search in the environment variables
    const std::string &env_setting_list = layer_setting_set->GetEnvSetting(pSettingName);

    // Second: search in vk_layer_settings.txt
    const std::string &file_setting_list = layer_setting_set->GetFileSetting(pSettingName);

    // Third: search from VK_EXT_layer_settings usage
    const vl::LayerSetting *api_setting = layer_setting_set->GetAPISetting(pSettingName);

    // Environment variables overrides the values set by vk_layer_settings
    const std::string setting_list = env_setting_list.empty() ? file_setting_list : env_setting_list;

    if (setting_list.empty() && api_setting == nullptr) {
        return VK_INCOMPLETE;
    }

    const char deliminater = vl::FindDelimiter(setting_list);
    const std::vector<std::string> &settings(vl::Split(setting_list, deliminater));

    const bool copy_values = *pValueCount > 0 && pValues != nullptr;

    switch (type) {
        default: {
            const std::string& message = vl::Format("Unknown VkLayerSettingTypeEXT `type` value: %d.", type);
            layer_setting_set->Log(pSettingName, message.c_str());
            return VK_ERROR_UNKNOWN;
        }
        case VK_LAYER_SETTING_TYPE_BOOL_EXT: {
            std::vector<VkBool32> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsInteger(setting_value)) {
                            values[i] = (std::atoi(setting_value.c_str()) != 0) ? VK_TRUE : VK_FALSE;
                        } else if (setting_value == "true" || setting_value == "false") {
                            values[i] = (setting_value == "true") ? VK_TRUE : VK_FALSE;
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not a boolean value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) { // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asBool32, api_setting->asBool32 + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<VkBool32 *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_INT32_EXT: {
            std::vector<std::int32_t> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsInteger(setting_value)) {
                            values[i] = std::atoi(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not an integer value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asInt32, api_setting->asInt32 + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<std::int32_t *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_INT64_EXT: {
            std::vector<std::int64_t> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsInteger(setting_value)) {
                            values[i] = std::atoll(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not an integer value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asInt64, api_setting->asInt64 + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<std::int64_t *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_UINT32_EXT: {
            std::vector<std::uint32_t> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsInteger(setting_value)) {
                            values[i] = std::atoi(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not an integer value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asUint32, api_setting->asUint32 + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<std::uint32_t *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_UINT64_EXT: {
            std::vector<std::uint64_t> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsInteger(setting_value)) {
                            values[i] = std::atoll(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not an integer value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asUint64, api_setting->asUint64 + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<std::uint64_t *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_FLOAT_EXT: {
            std::vector<float> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsFloat(setting_value)) {
                            values[i] = std::atof(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not a floating-point value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asFloat, api_setting->asFloat + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<float *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_DOUBLE_EXT: {
            std::vector<double> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsFloat(setting_value)) {
                            values[i] = std::atof(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not a floating-point value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asDouble, api_setting->asDouble + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<double *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_FRAMESET_EXT: {
            std::vector<VkFrameset> values;
            VkResult result = VK_SUCCESS;

            if (!settings.empty()) {  // From env variable or setting file
                if (copy_values) {
                    if (static_cast<std::size_t>(*pValueCount) < settings.size()) {
                        result = VK_INCOMPLETE;
                    }
                    values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings.size()));

                    for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                        const std::string &setting_value = vl::ToLower(settings[i]);
                        if (vl::IsFrameSets(setting_value)) {
                            values[i] = vl::ToFrameSet(setting_value.c_str());
                        } else {
                            const std::string &message =
                                vl::Format("The data provided (%s) is not a FrameSet value.", setting_value.c_str());
                            layer_setting_set->Log(pSettingName, message.c_str());
                        }
                    }
                } else {
                    *pValueCount = static_cast<std::uint32_t>(settings.size());
                }
            } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                if (api_setting->type != type) {
                    result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                } else if (copy_values) {
                    if (*pValueCount < api_setting->count) {
                        result = VK_INCOMPLETE;
                    }
                    const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                    values.assign(api_setting->asFrameset, api_setting->asFrameset + size);
                } else {
                    *pValueCount = api_setting->count;
                }
            }

            if (copy_values) {
                std::copy(values.begin(), values.end(), reinterpret_cast<VkFrameset *>(pValues));
            }

            return result;
        }
        case VK_LAYER_SETTING_TYPE_STRING_EXT: {
                std::vector<const char*> values;
                VkResult result = VK_SUCCESS;

                if (!settings.empty()) {  // From env variable or setting file
                    std::vector<std::string> &settings_cache = layer_setting_set->GetSettingCache(pSettingName);
                    settings_cache = settings;

                    if (copy_values) {
                        if (static_cast<std::size_t>(*pValueCount) < settings_cache.size()) {
                            result = VK_INCOMPLETE;
                        }
                        values.resize(std::min(static_cast<std::size_t>(*pValueCount), settings_cache.size()));

                        for (std::size_t i = 0, n = values.size(); i < n; ++i) {
                            values[i] = settings_cache[i].c_str();
                        }
                    } else {
                        *pValueCount = static_cast<std::uint32_t>(settings_cache.size());
                    }
                } else if (api_setting != nullptr) {  // From Vulkan Layer Setting API
                    if (api_setting->type != type) {
                        result = VK_ERROR_FORMAT_NOT_SUPPORTED;
                    } else if (copy_values) {
                        if (*pValueCount < api_setting->count) {
                            result = VK_INCOMPLETE;
                        }
                        const std::uint32_t size = std::min(*pValueCount, api_setting->count);
                        values.assign(api_setting->asString, api_setting->asString + size);
                    } else {
                        *pValueCount = api_setting->count;
                    }
                }

                if (copy_values) {
                    std::copy(values.begin(), values.end(), reinterpret_cast<const char **>(pValues));
                }

                return result;
            }
    }

    return VK_ERROR_UNKNOWN;
}

const VkLayerSettingsCreateInfoEXT *vlFindLayerSettingsCreateInfo(const VkInstanceCreateInfo *pCreateInfo) {
    const VkBaseOutStructure *current = reinterpret_cast<const VkBaseOutStructure *>(pCreateInfo);
    const VkLayerSettingsCreateInfoEXT *found = nullptr;
    while (current) {
        if (VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT == current->sType) {
            found = reinterpret_cast<const VkLayerSettingsCreateInfoEXT *>(current);
            current = nullptr;
        } else {
            current = current->pNext;
        }
    }
    return found;
}
