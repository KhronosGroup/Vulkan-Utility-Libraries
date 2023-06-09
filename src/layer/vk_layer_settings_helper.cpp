/*
 * Copyright (c) 2023 The Khronos Group Inc.
 * Copyright (c) 2023 Valve Corporation
 * Copyright (c) 2023 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authors:
 * - Christophe Riccio <christophe@lunarg.com>
 */

#include "vulkan/layer/vk_layer_settings.hpp"

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, bool &settingValue) {
    uint32_t value_count = 1;
    VkBool32 value;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, &value);
    settingValue = value == VK_TRUE;
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<bool> &settingValues) {
    uint32_t value_count = 0;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, nullptr);
    if (value_count > 0) {
        std::vector<VkBool32> values(value_count);
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, &values[0]);
        for (std::size_t i = 0, n = values.size(); i < n; ++i) {
            settingValues.push_back(values[i] == VK_TRUE);
        }
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, int32_t &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<int32_t> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, int64_t &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<int64_t> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, uint32_t &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<uint32_t> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, uint64_t &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT64_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<uint64_t> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT64_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_UINT64_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, float &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<float> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, double &settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<double> &settingValues) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, &settingValues[0]);
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::string &settingValue) {
    uint32_t value_count = 1;
    const char *value;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, &value);
    settingValue = value;
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<std::string> &settingValues) {
    uint32_t value_count = 0;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, nullptr);
    if (value_count > 0) {
        std::vector<const char *> values(value_count);
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, &values[0]);
        settingValues.assign(values.begin(), values.end());
    }
}

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet, const char* pSettingName, VkFrameset& settingValue) {
    uint32_t value_count = 1;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, &settingValue);
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char* pSettingName, std::vector<VkFrameset>& settingValues) {
    uint32_t value_count = 0;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, nullptr);
    if (value_count > 0) {
        settingValues.resize(static_cast<std::size_t>(value_count));
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, &settingValues[0]);
    }
}

static uint32_t TokenToUint(const std::string &token) {
    uint32_t int_id = 0;
    if ((token.find("0x") == 0) || token.find("0X") == 0) {  // Handle hex format
        int_id = static_cast<uint32_t>(std::strtoul(token.c_str(), nullptr, 16));
    } else {
        int_id = static_cast<uint32_t>(std::strtoul(token.c_str(), nullptr, 10));  // Decimal format
    }
    return int_id;
}

static void SetCustomStypeInfo(std::vector<const char *> raw_id_list, std::vector<VlCustomSTypeInfo>& custom_stype_info) {
    // List format is a list of integer pairs
    for (std::size_t i = 0, n = raw_id_list.size(); i < n; i += 2) {
        uint32_t stype_id = TokenToUint(raw_id_list[i + 0]);
        uint32_t struct_size_in_bytes = TokenToUint(raw_id_list[i + 1]);

        bool found = false;
        // Prevent duplicate entries
        for (auto item : custom_stype_info) {
            if (item.first == stype_id) {
                found = true;
                break;
            }
        }
        if (!found) {
            custom_stype_info.push_back(std::make_pair(stype_id, struct_size_in_bytes));
        }
    }
}

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<VlCustomSTypeInfo> &settingValues) {
    uint32_t value_count = 0;
    vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, nullptr);
    if (value_count > 0) {
        std::vector<const char *> values(value_count);
        vlGetLayerSettingValues(layerSettingSet, pSettingName, VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, &values[0]);
        SetCustomStypeInfo(values, settingValues);
    }
}
