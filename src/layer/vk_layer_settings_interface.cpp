// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
// Author(s):
// - Christophe Riccio <christophe@lunarg.com>

#include "vulkan/layer/vk_layer_settings_ext.h"
#include <cassert>
#include <cstring>
#include <string>
#include <unordered_map>

#ifdef ENABLE_REGISTER_LAYER_SETTINGS
#if defined(__GNUC__) && __GNUC__ >= 4
#define LAYER_EXPORT __attribute__((visibility("default")))
#else
#define LAYER_EXPORT
#endif

extern std::unordered_map<std::string, std::pair<uint32_t, VkLayerSettingPropertiesEXT*> > layer_settings_properties;

// Keep synchronized with VkLayer_khronos_profiles.def / VkLayer_khronos_profiles.map
extern "C" {

LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerSettingsEXT(
    const char* pLayerName, uint32_t* pPropertyCount, VkLayerSettingPropertiesEXT* pProperties) {

    assert(pPropertyCount != nullptr);

    if (*pPropertyCount > 0 && pProperties != nullptr) {
        *pPropertyCount = std::min(*pPropertyCount, layer_settings_properties[pLayerName].first);
        memcpy(pProperties, layer_settings_properties[pLayerName].second, sizeof(VkLayerSettingPropertiesEXT) * *pPropertyCount);
    } else {
        *pPropertyCount = layer_settings_properties[pLayerName].first;
    }

    return VK_SUCCESS;
}

}  // extern "C"
#endif  // ENABLE_REGISTER_LAYER_SETTINGS
