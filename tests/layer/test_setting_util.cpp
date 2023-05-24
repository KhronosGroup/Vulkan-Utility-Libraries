/*
 * Copyright (c) 2023-2023 Valve Corporation
 * Copyright (c) 2023-2023 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
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

#include "layer_settings_util.hpp"

#include <gtest/gtest.h>
#include <vulkan/vulkan.h>

TEST(test_layer_settings_util, FindSettingsInChain_found_first) {
    VkDebugReportCallbackCreateInfoEXT debugReportCallbackCreateInfo{};
    debugReportCallbackCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;

    VkLayerSettingsCreateInfoEXT layerSettingsCreateInfo{};
    layerSettingsCreateInfo.sType = VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT;
    layerSettingsCreateInfo.pNext = &debugReportCallbackCreateInfo;

    VkInstanceCreateInfo instanceCreateInfo{};
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.pNext = &layerSettingsCreateInfo;

    EXPECT_EQ(&layerSettingsCreateInfo, vl::FindSettingsInChain(&instanceCreateInfo));
}

TEST(test_layer_settings_util, FindSettingsInChain_found_last) {
    VkLayerSettingsCreateInfoEXT layerSettingsCreateInfo{};
    layerSettingsCreateInfo.sType = VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT;

    VkDebugReportCallbackCreateInfoEXT debugReportCallbackCreateInfo{};
    debugReportCallbackCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
    debugReportCallbackCreateInfo.pNext = &layerSettingsCreateInfo;

    VkInstanceCreateInfo instanceCreateInfo{};
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.pNext = &debugReportCallbackCreateInfo;

    EXPECT_EQ(&layerSettingsCreateInfo, vl::FindSettingsInChain(&instanceCreateInfo));
}

TEST(test_layer_settings_util, FindSettingsInChain_found_not) {
    VkDebugReportCallbackCreateInfoEXT debugReportCallbackCreateInfo{};
    debugReportCallbackCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;

    VkInstanceCreateInfo instanceCreateInfo{};
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.pNext = &debugReportCallbackCreateInfo;

    EXPECT_EQ(nullptr, vl::FindSettingsInChain(&instanceCreateInfo));
}

TEST(test_layer_settings_util, FindDelimiter) {
    char A = vl::FindDelimiter("VALUE_A,VALUE_B");
    EXPECT_EQ(',', A);

    char B = vl::FindDelimiter("VALUE_A;VALUE_B");
    EXPECT_EQ(';', B);

    char C = vl::FindDelimiter("VALUE_A:VALUE_B");
    EXPECT_EQ(':', C);

    EXPECT_EQ(',', vl::FindDelimiter("VALUE_A"));

    EXPECT_EQ(',', vl::FindDelimiter("VALUE_A,"));

    EXPECT_EQ(',', vl::FindDelimiter(""));
}

TEST(test_layer_settings_util, Split_1Value) {
    std::string value("VALUE_A");
    std::vector<std::string> reault = vl::Split(value, ',');

    EXPECT_EQ(1, reault.size());
    EXPECT_STREQ("VALUE_A", reault[0].c_str());
}

TEST(test_layer_settings_util, Split_1Value_ExtraComma) {
    std::string value("VALUE_A,");
    std::vector<std::string> reault = vl::Split(value, ',');

    EXPECT_EQ(1, reault.size());
    EXPECT_STREQ("VALUE_A", reault[0].c_str());
}

TEST(test_layer_settings_util, Split_2Values) {
    std::string value("VALUE_A,VALUE_B");
    std::vector<std::string> reault = vl::Split(value, ',');

    EXPECT_EQ(2, reault.size());
    EXPECT_STREQ("VALUE_A", reault[0].c_str());
    EXPECT_STREQ("VALUE_B", reault[1].c_str());
}

TEST(test_layer_settings_util, Split_2Values_ExtraComma) {
    std::string value("VALUE_A,VALUE_B,");
    std::vector<std::string> reault = vl::Split(value, ',');

    EXPECT_EQ(2, reault.size());
    EXPECT_STREQ("VALUE_A", reault[0].c_str());
    EXPECT_STREQ("VALUE_B", reault[1].c_str());
}

TEST(test_layer_settings_util, Split_2Values_WrongSeparator) {
    std::string value("VALUE_A,VALUE_B");
    std::vector<std::string> reault = vl::Split(value, ';');

    EXPECT_EQ(1, reault.size());
    EXPECT_STREQ("VALUE_A,VALUE_B", reault[0].c_str());
}

TEST(test_layer_settings_util, Split_0Value) {
    std::string value("");
    std::vector<std::string> result = vl::Split(value, ',');

    EXPECT_EQ(0, result.size());
}

TEST(test_layer_settings_util, TrimWhitespace_NoWhitespace) {
    std::string value("VALUE_A-VALUE_B");
    std::string result = vl::TrimWhitespace(value);

    EXPECT_STREQ("VALUE_A-VALUE_B", result.c_str());
}

TEST(test_layer_settings_util, TrimWhitespace_space) {
    {
        const std::string value("VALUE_A ");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value(" VALUE_A");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value(" VALUE_A ");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value("VALUE A");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE A", result.c_str());
    }

    {
        const std::string value(" VALUE A ");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE A", result.c_str());
    }
}

TEST(test_layer_settings_util, TrimWhitespace_Whitespace) {
    {
        const std::string value("VALUE_A\n");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value("\f\tVALUE_A");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value("\t\vVALUE_A\n\r");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE_A", result.c_str());
    }

    {
        const std::string value("VALUE\tA\f");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE\tA", result.c_str());
    }

    {
        const std::string value("\f\tVALUE\tA\t\f");
        const std::string result = vl::TrimWhitespace(value);

        EXPECT_STREQ("VALUE\tA", result.c_str());
    }
}

TEST(test_layer_settings_util, TrimPrefix) {
    {
        const std::string value("VK_LAYER_LUNARG_test");
        const std::string result = vl::TrimPrefix(value);

        EXPECT_STREQ("LUNARG_test", result.c_str());
    }

    {
        const std::string value("VK_LAYER_LUNARG_test_pouet");
        const std::string result = vl::TrimPrefix(value);

        EXPECT_STREQ("LUNARG_test_pouet", result.c_str());
    }

    {
        const std::string value("VK_LAYER_LUNARG_test_POUET");
        const std::string result = vl::TrimPrefix(value);

        EXPECT_STREQ("LUNARG_test_POUET", result.c_str());
    }

    {
        const std::string value("VK_LAYER_lunarg_test_POUET");
        const std::string result = vl::TrimPrefix(value);

        EXPECT_STREQ("lunarg_test_POUET", result.c_str());
    }
}

TEST(test_layer_settings_util, TrimVendor) {
    {
        const std::string value("VK_LAYER_LUNARG_test");
        const std::string result = vl::TrimVendor(value);

        EXPECT_STREQ("test", result.c_str());
    }

    {
        const std::string value("VK_LAYER_LUNARG_test_pouet");
        const std::string result = vl::TrimVendor(value);

        EXPECT_STREQ("test_pouet", result.c_str());
    }

    {
        const std::string value("VK_LAYER_LUNARG_test_POUET");
        const std::string result = vl::TrimVendor(value);

        EXPECT_STREQ("test_POUET", result.c_str());
    }

    {
        const std::string value("VK_LAYER_lunarg_test_POUET");
        const std::string result = vl::TrimVendor(value);

        EXPECT_STREQ("test_POUET", result.c_str());
    }
}

TEST(test_layer_settings_util, GetEnvSettingName_TrimNone) {
    {
        const std::string result = vl::GetEnvSettingName("VK_LAYER_LUNARG_test", "log_mode", vl::TRIM_NONE);

        EXPECT_STREQ("VK_LUNARG_TEST_LOG_MODE", result.c_str());
    }
}

TEST(test_layer_settings_util, GetEnvSettingName_TrimVendor) {
    {
        const std::string result = vl::GetEnvSettingName("VK_LAYER_LUNARG_test", "log_mode", vl::TRIM_VENDOR);

        EXPECT_STREQ("VK_TEST_LOG_MODE", result.c_str());
    }
}

TEST(test_layer_settings_util, GetEnvSettingName_TrimNamespace) {
    {
        const std::string result = vl::GetEnvSettingName("VK_LAYER_LUNARG_test", "log_mode", vl::TRIM_NAMESPACE);

        EXPECT_STREQ("VK_LOG_MODE", result.c_str());
    }
}

TEST(test_layer_settings_util, GetFileSettingName) {
    {
        const std::string result = vl::GetFileSettingName("VK_LAYER_LUNARG_test", "log_mode");

        EXPECT_STREQ("lunarg_test.log_mode", result.c_str());
    }
}

TEST(test_layer_settings_util, is_number) {
    EXPECT_EQ(true, vl::IsInteger("0123456789"));
    EXPECT_EQ(true, vl::IsInteger("0x1F"));
    EXPECT_EQ(true, vl::IsInteger("-0x1F"));
    EXPECT_EQ(true, vl::IsInteger("0x1adf"));
    EXPECT_EQ(true, vl::IsInteger("-0x48e"));
    EXPECT_EQ(true, vl::IsInteger("-0x3AC7e"));

    EXPECT_EQ(false, vl::IsInteger("01234c56789"));
    EXPECT_EQ(false, vl::IsInteger("$%#&@()-_[]{}"));
}

TEST(test_layer_settings_util, is_float) {
    EXPECT_EQ(true, vl::IsFloat("1.0"));
    EXPECT_EQ(true, vl::IsFloat("-1.0"));
    EXPECT_EQ(true, vl::IsFloat("1"));
    EXPECT_EQ(true, vl::IsFloat("-1"));
    EXPECT_EQ(true, vl::IsFloat("1."));
    EXPECT_EQ(true, vl::IsFloat("-1."));
    EXPECT_EQ(true, vl::IsFloat("1.0f"));
    EXPECT_EQ(true, vl::IsFloat("-1.0f"));
    EXPECT_EQ(true, vl::IsFloat("1"));

    EXPECT_EQ(false, vl::IsFloat("A"));
}

TEST(test_layer_settings_util, is_framesets) {
    EXPECT_EQ(true, vl::IsFrameSets("0"));
    EXPECT_EQ(true, vl::IsFrameSets("0-2"));
    EXPECT_EQ(true, vl::IsFrameSets("0,2"));
    EXPECT_EQ(true, vl::IsFrameSets("0-2,6,7"));
    EXPECT_EQ(true, vl::IsFrameSets("0-2,6-7"));
    EXPECT_EQ(true, vl::IsFrameSets("0,2,6,7"));
    EXPECT_EQ(true, vl::IsFrameSets("1-2,60,70"));
    EXPECT_EQ(true, vl::IsFrameSets("10-20,60,70"));
    EXPECT_EQ(true, vl::IsFrameSets("1-8-2"));
    EXPECT_EQ(true, vl::IsFrameSets("1-8-2,0"));
    EXPECT_EQ(true, vl::IsFrameSets("1-8-2,10-20-5"));
    EXPECT_EQ(true, vl::IsFrameSets("1-8,10-20-5"));
    EXPECT_EQ(true, vl::IsFrameSets("1-8-2,10-20-1"));
    EXPECT_EQ(true, vl::IsFrameSets("1,2,3,4"));

    EXPECT_EQ(false, vl::IsFrameSets("1,"));
    EXPECT_EQ(false, vl::IsFrameSets("-1"));
    EXPECT_EQ(false, vl::IsFrameSets("1-"));
    EXPECT_EQ(false, vl::IsFrameSets("1--4"));
    EXPECT_EQ(false, vl::IsFrameSets("1-4-"));
    EXPECT_EQ(false, vl::IsFrameSets("1,,4"));
    EXPECT_EQ(false, vl::IsFrameSets("1,-4"));
    EXPECT_EQ(false, vl::IsFrameSets(",-76"));
    EXPECT_EQ(false, vl::IsFrameSets("76,-"));
    EXPECT_EQ(false, vl::IsFrameSets("76,-82"));
    EXPECT_EQ(false, vl::IsFrameSets("1-8-2-1"));
}

TEST(test_layer_settings_util, to_framesets) {
    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("0");
        EXPECT_EQ(1, framesets.size());

        EXPECT_EQ(0, framesets[0].first);
        EXPECT_EQ(1, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("76");
        EXPECT_EQ(1, framesets.size());

        EXPECT_EQ(76, framesets[0].first);
        EXPECT_EQ(1, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("0-2");
        EXPECT_EQ(1, framesets.size());

        EXPECT_EQ(0, framesets[0].first);
        EXPECT_EQ(2, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("0-2,6,7");
        EXPECT_EQ(3, framesets.size());

        EXPECT_EQ(0, framesets[0].first);
        EXPECT_EQ(2, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(6, framesets[1].first);
        EXPECT_EQ(1, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);

        EXPECT_EQ(7, framesets[2].first);
        EXPECT_EQ(1, framesets[2].count);
        EXPECT_EQ(1, framesets[2].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("0-2,6-7");
        EXPECT_EQ(2, framesets.size());

        EXPECT_EQ(0, framesets[0].first);
        EXPECT_EQ(2, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(6, framesets[1].first);
        EXPECT_EQ(7, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-2,60,70");
        EXPECT_EQ(3, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(2, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(60, framesets[1].first);
        EXPECT_EQ(1, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);

        EXPECT_EQ(70, framesets[2].first);
        EXPECT_EQ(1, framesets[2].count);
        EXPECT_EQ(1, framesets[2].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("10-20,60,70");
        EXPECT_EQ(3, framesets.size());

        EXPECT_EQ(10, framesets[0].first);
        EXPECT_EQ(20, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(60, framesets[1].first);
        EXPECT_EQ(1, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);

        EXPECT_EQ(70, framesets[2].first);
        EXPECT_EQ(1, framesets[2].count);
        EXPECT_EQ(1, framesets[2].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-8-2");
        EXPECT_EQ(1, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(8, framesets[0].count);
        EXPECT_EQ(2, framesets[0].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-8-2,0");
        EXPECT_EQ(2, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(8, framesets[0].count);
        EXPECT_EQ(2, framesets[0].step);

        EXPECT_EQ(0, framesets[1].first);
        EXPECT_EQ(1, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-8-2,10-20-5");
        EXPECT_EQ(2, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(8, framesets[0].count);
        EXPECT_EQ(2, framesets[0].step);

        EXPECT_EQ(10, framesets[1].first);
        EXPECT_EQ(20, framesets[1].count);
        EXPECT_EQ(5, framesets[1].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-8,10-20-5");
        EXPECT_EQ(2, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(8, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(10, framesets[1].first);
        EXPECT_EQ(20, framesets[1].count);
        EXPECT_EQ(5, framesets[1].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1-8-2,10-20-1");
        EXPECT_EQ(2, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(8, framesets[0].count);
        EXPECT_EQ(2, framesets[0].step);

        EXPECT_EQ(10, framesets[1].first);
        EXPECT_EQ(20, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);
    }

    {
        std::vector<VkFrameset> framesets = vl::ToFrameSets("1,2,3,4");
        EXPECT_EQ(4, framesets.size());

        EXPECT_EQ(1, framesets[0].first);
        EXPECT_EQ(1, framesets[0].count);
        EXPECT_EQ(1, framesets[0].step);

        EXPECT_EQ(2, framesets[1].first);
        EXPECT_EQ(1, framesets[1].count);
        EXPECT_EQ(1, framesets[1].step);

        EXPECT_EQ(3, framesets[2].first);
        EXPECT_EQ(1, framesets[2].count);
        EXPECT_EQ(1, framesets[2].step);

        EXPECT_EQ(4, framesets[3].first);
        EXPECT_EQ(1, framesets[3].count);
        EXPECT_EQ(1, framesets[3].step);
    }
}
