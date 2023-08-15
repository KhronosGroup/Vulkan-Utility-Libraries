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

#include "vk_layer_settings_ext.h"

// Configure layer settings. If 'pCallback' is set to NULL, the messages are outputed to stderr.
VkResult vlRegisterLayerSettings(VkInstance instance, const char *pLayerName,
    uint32_t settingCount, VkLayerSettingPropertiesEXT *pSettings, const VkAllocationCallbacks *pAllocator);

// Check whether a setting was set either programmatically, from vk_layer_settings.txt or an environment variable
VkBool32 vlHasLayerSetting(VkInstance instance, const char *pLayerName, const char *pSettingName);

// Query setting values
VkResult vlGetLayerSettingValues(VkInstance instance, const char *pLayerName, const char *pSettingName, VkLayerSettingTypeEXT type,
                                 uint32_t *pValueCount, void *pValues);

const VkLayerSettingsCreateInfoEXT *vlFindLayerSettingsCreateInfo(const VkInstanceCreateInfo *pCreateInfo);

#ifdef __cplusplus
}
#endif
