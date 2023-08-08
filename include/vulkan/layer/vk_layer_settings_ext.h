// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
// Author(s):
// - Christophe Riccio <christophe@lunarg.com>

#pragma once

#ifdef __cplusplus
extern "C" {
#endif 

#include <vulkan/vk_layer.h>

// VK_EXT_layer_settings
//
// Name String
//   VK_EXT_layer_settings
//
// Extension Type
//   Instance extension
//
// Revision
//    1
//
// Extension and Version Dependencies
//    Requires Vulkan 1.0
//
// Contact
//    Christophe Riccio christophe-lunarg
//
// Contributors
//    Christophe Riccio
//    Mark Lobodzinski
//
// Description
// This extension provides a mechanism for configuring programmatically through
// the Vulkan API the behavior of layers.
// 
// This extension provides the [VkLayerSettingsCreateInfoEXT] struct that can be
// included in the [pNext] chain of the [VkInstanceCreateInfo]
// structure passed as the [pCreateInfo] parameter of [vkCreateInstance].
// 
// The structure contains an array of [VkLayerSettingEXT] structure
// values that configure specific features of layers.
//
// Note
//    The [VK_EXT_layer_settings] extension subsumes all the functionality provided in the [VK_EXT_validation_flags] extension
//    and the [VK_EXT_validation_features] extension.

#define VK_EXT_layer_settings 1
#define VK_EXT_LAYER_SETTINGS_SPEC_VERSION 1
#define VK_EXT_LAYER_SETTINGS_EXTENSION_NAME "VK_EXT_layer_settings"

// This extension is exclusively used by VVL, and is NOT intended as a deliverable.
// The value of the VK_STRUCTURE_TYPE is arbitrary. The only requirement,
// is that it must not conflict with existing sTypes.
//
// NOTE: VK_STRUCTURE_TYPE_MAX_ENUM - 1 is used by the intel driver.
// NOTE: VK_STRUCTURE_TYPE_MAX_ENUM - 42 is used by the validation layers
#define VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT ((VkStructureType)(VK_STRUCTURE_TYPE_MAX_ENUM - 43))

typedef enum VkLayerSettingTypeEXT {
    VK_LAYER_SETTING_TYPE_BOOL32_EXT = 0,
    VK_LAYER_SETTING_TYPE_INT32_EXT,
    VK_LAYER_SETTING_TYPE_INT64_EXT,
    VK_LAYER_SETTING_TYPE_UINT32_EXT,
    VK_LAYER_SETTING_TYPE_UINT64_EXT,
    VK_LAYER_SETTING_TYPE_FLOAT32_EXT,
    VK_LAYER_SETTING_TYPE_FLOAT64_EXT,
    VK_LAYER_SETTING_TYPE_STRING_EXT,
    VK_LAYER_SETTING_TYPE_FRAMESET_EXT
} VkLayerSettingTypeEXT;

typedef struct VkFramesetEXT {
    uint32_t first;
    uint32_t count;
    uint32_t step;
} VkFramesetEXT;

typedef struct VkLayerSettingEXT {
    const char *pLayerName;
    const char *pSettingName;
    VkLayerSettingTypeEXT type;
    uint32_t count;
    const void *pValues;
} VkLayerSettingEXT;

typedef struct VkLayerSettingsCreateInfoEXT {
    VkStructureType sType;
    const void *pNext;
    uint32_t settingCount;
    const VkLayerSettingEXT *pSettings;
} VkLayerSettingsCreateInfoEXT;

#ifdef __cplusplus
}
#endif
