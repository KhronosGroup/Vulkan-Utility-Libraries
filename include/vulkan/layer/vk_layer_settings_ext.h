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
//    This extension provides the VkLayerSettingsEXT struct that can be included in the pNext chain of the
//    VkInstanceCreateInfo structure passed as the pCreateInfo parameter of vkCreateInstance
//        The structure contains an array of VkLayerSettingValueEXT structures that define layer specific settings
//    The extension also provides the vkEnumerateInstanceLayerSettingsEXT and vkEnumerateInstanceLayerSettingOptionEXT
//    commands, useful for enumerating all layer settings and their possible values, respectively.
//
// Note
//    The VK_EXT_layer_settings extension subsumes all the functionality provided in the [VK_EXT_validation_flags] extension
//    and the [VK_EXT_validation_features] extension.
//
// New Commands
//    vkEnumerateInstanceLayerSettingsEXT
//    vkEnumerateInstanceLayerSettingOptionEXT
//
// New Structures
//    array_int32
//    array_int64
//    array_float
//    array_bool
//    array_char
//    VkLayerSettingValueEXT
//    VkLayerSettingDescriptionEXT
//    VkLayerSettingOptionEXT
//    Extending VkInstanceCreateInfo :
//        VkLayerSettingsEXT
//
// New Unions
//    VkLayerSettingValueDataEXT
//
// New Enums
//    VkLayerSettingValueTypeEXT

#define VK_EXT_layer_settings 1
#define VK_EXT_LAYER_SETTINGS_SPEC_VERSION 1
#define VK_EXT_LAYER_SETTINGS_EXTENSION_NAME "VK_EXT_layer_settings"

// This extension is exclusively used by VVL, and is NOT intended as a deliverable.
// The value of the VK_STRUCTURE_TYPE is arbitrary. The only requirement,
// is that it must not conflict with existing sTypes.
//
// NOTE: VK_STRUCTURE_TYPE_MAX_ENUM - 1 is used by the intel driver.
#define VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT ((VkStructureType)(VK_STRUCTURE_TYPE_MAX_ENUM - 43))

typedef enum VkLayerSettingTypeEXT {
    VK_LAYER_SETTING_TYPE_BOOL_EXT = 0,
    VK_LAYER_SETTING_TYPE_INT32_EXT,
    VK_LAYER_SETTING_TYPE_INT64_EXT,
    VK_LAYER_SETTING_TYPE_UINT32_EXT,
    VK_LAYER_SETTING_TYPE_UINT64_EXT,
    VK_LAYER_SETTING_TYPE_FLOAT_EXT,
    VK_LAYER_SETTING_TYPE_DOUBLE_EXT,
    VK_LAYER_SETTING_TYPE_FRAMESET_EXT,
    VK_LAYER_SETTING_TYPE_STRING_EXT
} VkLayerSettingTypeEXT;

typedef struct VkFrameset {
    uint32_t first;
    uint32_t count;
    uint32_t step;
} VkFrameset;

typedef struct VkLayerSettingEXT {
    const char *pLayerName;
    const char *pSettingName;
    VkLayerSettingTypeEXT type;
    uint32_t count;
    union {
        const void *value;
        const VkBool32 *asBool32;
        const int32_t *asInt32;
        const int64_t *asInt64;
        const uint32_t *asUint32;
        const uint64_t *asUint64;
        const float *asFloat;
        const double *asDouble;
        const VkFrameset *asFrameset;
        const char **asString;
    };
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
