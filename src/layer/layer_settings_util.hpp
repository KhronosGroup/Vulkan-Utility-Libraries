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

#include <vector>
#include <string>
#include <cstring>
#include <cstdarg>

namespace vl {
    const VkLayerSettingsCreateInfoEXT *FindSettingsInChain(
        const void *next);

    std::vector<std::string> Split(
        const std::string &value, char delimiter);

    enum TrimMode {
        TRIM_NONE,
        TRIM_VENDOR,
        TRIM_NAMESPACE,

        TRIM_FIRST = TRIM_NONE,
        TRIM_LAST = TRIM_NAMESPACE,
    };

    std::string GetEnvSettingName(const char *layer_key, const char *setting_key, TrimMode trim_mode);

    std::string GetFileSettingName(const char *layer_key, const char *setting_key);

    // Find the delimiter (, ; :) in a string made of tokens. Return ',' by default
    char FindDelimiter(const std::string &s);

    // Remove whitespaces at the beginning of the end
    std::string TrimWhitespace(const std::string &s);

    std::string TrimPrefix(const std::string &layer_name);

    std::string TrimVendor(const std::string &layer_name);

    std::string ToLower(const std::string &s);

    std::string ToUpper(const std::string &s);

    bool IsFrameSets(const std::string &s);

    VkFrameset ToFrameSet(const std::string &s);

    std::vector<VkFrameset> ToFrameSets(const std::string &s);

    bool IsInteger(const std::string &s);

    bool IsFloat(const std::string &s);

    std::string Format(const char *message, ...);
} // namespace vl

