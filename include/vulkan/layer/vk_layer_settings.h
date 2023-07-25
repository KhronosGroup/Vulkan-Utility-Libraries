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

VK_DEFINE_HANDLE(VlLayerSettingSet)

typedef void *(*VL_LAYER_SETTING_LOG_CALLBACK)(const char *pSettingName, const char *pMessage);

// Create a layer setting set. If 'pCallback' is set to NULL, the messages are outputed to stderr.
VkResult vlCreateLayerSettingSet(const char *pLayerName, const VkLayerSettingsCreateInfoEXT *pCreateInfo,
                             const VkAllocationCallbacks *pAllocator,
                           VL_LAYER_SETTING_LOG_CALLBACK pCallback, VlLayerSettingSet *pLayerSettingSet);

void vlDestroyLayerSettingSet(VlLayerSettingSet layerSettingSet, const VkAllocationCallbacks *pAllocator);

// Check whether a setting was set either programmatically, from vk_layer_settings.txt or an environment variable
VkBool32 vlHasLayerSetting(VlLayerSettingSet layerSettingSet, const char *pSettingName);

// Query setting values
VkResult vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet, const char *pSettingName, VkLayerSettingTypeEXT type,
                                 uint32_t *pValueCount, void *pValues);

const VkLayerSettingsCreateInfoEXT *vlFindLayerSettingsCreateInfo(const VkInstanceCreateInfo *pCreateInfo);

#ifdef __cplusplus
}
#endif
