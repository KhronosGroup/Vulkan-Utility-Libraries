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

#include "vk_layer_settings_ext.h"

typedef void *(*VL_LAYER_SETTING_LOG_CALLBACK)(const char *pSettingName, const char *pMessage);

// Initialize the layer settings. If 'pCallback' is set to NULL, the messages are outputed to stderr.
void vlInitLayerSettings(const char *pLayerName, const void *pNext, VL_LAYER_SETTING_LOG_CALLBACK pCallback);

// Check whether a setting was set either programmatically, from vk_layer_settings.txt or an environment variable
VkBool32 vlHasLayerSetting(const char *pSettingName);

// Query setting values
VkResult vlGetLayerSettingValues(const char *pSettingName, VkLayerSettingTypeEXT type, uint32_t *pValueCount, void *pValues);

#ifdef __cplusplus
}
#endif
