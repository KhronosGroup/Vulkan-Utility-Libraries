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

#if defined(__GNUC__) && __GNUC__ >= 4
#define LAYER_EXPORT __attribute__((visibility("default")))
#else
#define LAYER_EXPORT
#endif

// Keep synchronized with VkLayer_khronos_profiles.def / VkLayer_khronos_profiles.map
extern "C" {

LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerSettingsEXT(
    VkInstance instance, const char* pLayerName,
    uint32_t* pSettingCount,
    VkLayerSettingPropertiesEXT* pSettings) {

    assert(pSettingCount != nullptr);

    if (strcmp(pLayerName, VK_EXT_LAYER_SETTINGS_EXTENSION_NAME) != 0) {
        return VK_SUCCESS;
    }

    if (*pSettingCount > 0 && pSettings != nullptr) {
        
    } else {

    }

    return VK_SUCCESS;
}

}  // extern "C"
