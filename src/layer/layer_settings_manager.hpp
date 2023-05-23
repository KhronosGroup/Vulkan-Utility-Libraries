/*
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

#include "vulkan/layer/vk_layer_settings.h"

#include <string>
#include <vector>
#include <map>

namespace vl {
    struct LayerSetting {
        const char *pLayerName;
        const char *pSettingName;
        VkLayerSettingTypeEXT type;
        uint32_t count;
        union {
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
    };

    class LayerSettings {
      public:
        LayerSettings(const char *pLayerName, const void *pNext, VL_LAYER_SETTING_LOG_CALLBACK callback);
        ~LayerSettings();

	    bool HasEnvSetting(const char *pSettingName);

        bool HasFileSetting(const char *pSettingName);

        bool HasAPISetting(const char *pSettingName);

        std::string GetEnvSetting(const char *pSettingName);

        std::string GetFileSetting(const char *pSettingName);

        void SetFileSetting(const char *pSettingName, const std::string& value);

        const LayerSetting *GetAPISetting(const char *pSettingName);

        void Log(const char *pSettingName, const char *pMessage);

        std::vector<std::string> &GetSettingCache(const std::string &pSettingName);

      private:
        const VkLayerSettingEXT *FindLayerSettingValue(const char *pSettingName);

        std::map<std::string, std::string> setting_file_values;
        std::map<std::string, std::vector<std::string>> string_setting_cache;

        std::string last_log_setting;
        std::string last_log_message;

        std::string FindSettingsFile();
        void ParseSettingsFile(const char *filename);

        std::string layer_name;
        const VkLayerSettingsCreateInfoEXT *create_info;
        VL_LAYER_SETTING_LOG_CALLBACK callback{nullptr};
    };
}// namespace vl

