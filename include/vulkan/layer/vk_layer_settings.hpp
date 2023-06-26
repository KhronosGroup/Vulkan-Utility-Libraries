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

#include "vk_layer_settings.h"
#include <vector>
#include <string>

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, bool &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector <bool> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, int32_t &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<int32_t> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, int64_t &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<int64_t> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, uint32_t &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<uint32_t> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, uint64_t &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<uint64_t> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, float &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<float> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, double &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<double> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::string &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<std::string> &settingValues);

void vlGetLayerSettingValue(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, VkFrameset &settingValue);

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName, std::vector<VkFrameset> &settingValues);

// Required by vk_safe_struct
typedef std::pair<uint32_t, uint32_t> VlCustomSTypeInfo;

void vlGetLayerSettingValues(VlLayerSettingSet layerSettingSet,
    const char *pSettingName,
    std::vector<VlCustomSTypeInfo> &settingValues);
