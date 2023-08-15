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
        LayerSettings(const char *pLayerName, uint32_t settingCount, VkLayerSettingPropertiesEXT *pSettings,
                      const VkAllocationCallbacks *pAllocator);
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
        LayerSettings(const LayerSettings &) = delete;
        LayerSettings& operator=(const LayerSettings &) = delete;

        const VkLayerSettingEXT *FindLayerSettingValue(const char *pSettingName);

        std::vector<VkLayerSettingPropertiesEXT> settings;

        std::map<std::string, std::string> setting_file_values;
        std::map<std::string, std::vector<std::string>> string_setting_cache;

        std::string last_log_setting;
        std::string last_log_message;

        std::string FindSettingsFile();
        void ParseSettingsFile(const char *filename);

        std::string layer_name;
    };
}// namespace vl

