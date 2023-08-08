// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//
// Author(s):
// - Christophe Riccio <christophe@lunarg.com>
#pragma once

#include "vulkan/layer/vk_layer_settings.h"

#include <string>
#include <vector>
#include <map>

namespace vl {
    class LayerSettings {
      public:
        LayerSettings(const char *pLayerName, const VkLayerSettingsCreateInfoEXT *pCreateInfo,
                      const VkAllocationCallbacks *pAllocator, VL_LAYER_SETTING_LOG_CALLBACK callback);
        ~LayerSettings();

	    bool HasEnvSetting(const char *pSettingName);

        bool HasFileSetting(const char *pSettingName);

        bool HasAPISetting(const char *pSettingName);

        std::string GetEnvSetting(const char *pSettingName);

        std::string GetFileSetting(const char *pSettingName);

        void SetFileSetting(const char *pSettingName, const std::string& pValues);

        const VkLayerSettingEXT *GetAPISetting(const char *pSettingName);

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
        const VkLayerSettingsCreateInfoEXT *create_info{nullptr};
        VL_LAYER_SETTING_LOG_CALLBACK callback{nullptr};
    };
}// namespace vl

