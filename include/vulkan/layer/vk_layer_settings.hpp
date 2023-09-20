// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
// Author(s):
// - Christophe Riccio <christophe@lunarg.com>

#pragma once

#include "vk_layer_settings.h"
#include <vector>
#include <string>

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, bool &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<bool> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, int32_t &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<int32_t> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, int64_t &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<int64_t> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, uint32_t &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<uint32_t> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, uint64_t &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<uint64_t> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, float &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<float> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, double &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::vector<double> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, std::string &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName,
                              std::vector<std::string> &settingValues);

void vkuGetLayerSettingValue(VkuLayerSettingSet layerSettingSet, const char *pSettingName, VkuFrameset &settingValue);

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName,
                              std::vector<VkuFrameset> &settingValues);

// Required by vk_safe_struct
typedef std::pair<uint32_t, uint32_t> VkuCustomSTypeInfo;

void vkuGetLayerSettingValues(VkuLayerSettingSet layerSettingSet, const char *pSettingName,
                              std::vector<VkuCustomSTypeInfo> &settingValues);

// Return the list of Unknown setting in all VkLayerSettingsCreateInfoEXT
VkResult vkuGetUnknownSettings(const VkLayerSettingsCreateInfoEXT *pFirstCreateInfo, uint32_t settingsCount, const char **pSettings,
                               std::vector<const char *> &unknownSettings);

