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

#include <gtest/gtest.h>

#include "vulkan/layer/vk_layer_settings.h"
#include <vector>

TEST(test_layer_setting_api, vlHasLayerSetting_NotFound) {
    vlInitLayerSettings("VK_LAYER_LUNARG_test", nullptr, nullptr);

    EXPECT_FALSE(vlHasLayerSetting("setting_key"));
}

TEST(test_layer_setting_api, vlHasLayerSetting_Found) {
    std::int32_t value = 76;

    VkLayerSettingEXT my_setting;
    my_setting.pLayerName = "VK_LAYER_LUNARG_test";
    my_setting.pSettingName = "my_setting";
    my_setting.type = VK_LAYER_SETTING_TYPE_INT32_EXT;
    my_setting.count = 1;
    my_setting.asInt32 = &value;

    std::vector<VkLayerSettingEXT> settings;
    settings.push_back(my_setting);

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));
}

TEST(test_layer_setting_api, vlHasLayerSetting) {
    // The expected application code side:
    std::vector<VkLayerSettingEXT> settings;

    VkBool32 value_bool = VK_TRUE;
    VkLayerSettingEXT setting_bool_value{};
    setting_bool_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_bool_value.pSettingName = "bool_value";
    setting_bool_value.type = VK_LAYER_SETTING_TYPE_BOOL_EXT;
    setting_bool_value.asBool32 = &value_bool;
    setting_bool_value.count = 1;
    settings.push_back(setting_bool_value);

    std::int32_t value_int32 = 76;
    VkLayerSettingEXT setting_int32_value{};
    setting_int32_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_int32_value.pSettingName = "int32_value";
    setting_int32_value.type = VK_LAYER_SETTING_TYPE_INT32_EXT;
    setting_int32_value.asInt32 = &value_int32;
    setting_int32_value.count = 1;
    settings.push_back(setting_int32_value);

    std::int64_t value_int64 = static_cast<int64_t>(1) << static_cast<int64_t>(40);
    VkLayerSettingEXT setting_int64_value{};
    setting_int64_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_int64_value.pSettingName = "int64_value";
    setting_int64_value.type = VK_LAYER_SETTING_TYPE_INT64_EXT;
    setting_int64_value.asInt64 = &value_int64;
    setting_int64_value.count = 1;
    settings.push_back(setting_int64_value);

    std::uint32_t value_uint32 = 76u;
    VkLayerSettingEXT setting_uint32_value{};
    setting_uint32_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_uint32_value.pSettingName = "uint32_value";
    setting_uint32_value.type = VK_LAYER_SETTING_TYPE_UINT32_EXT;
    setting_uint32_value.asUint32 = &value_uint32;
    setting_uint32_value.count = 1;
    settings.push_back(setting_uint32_value);

    std::uint64_t value_uint64 = static_cast<uint64_t>(1) << static_cast<uint64_t>(40);
    VkLayerSettingEXT setting_uint64_value{};
    setting_uint64_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_uint64_value.pSettingName = "uint64_value";
    setting_uint64_value.type = VK_LAYER_SETTING_TYPE_UINT64_EXT;
    setting_uint64_value.asUint64 = &value_uint64;
    setting_uint64_value.count = 1;
    settings.push_back(setting_uint64_value);

    float value_float = 76.1f;
    VkLayerSettingEXT setting_float_value{};
    setting_float_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_float_value.pSettingName = "float_value";
    setting_float_value.type = VK_LAYER_SETTING_TYPE_FLOAT_EXT;
    setting_float_value.asFloat = &value_float;
    setting_float_value.count = 1;
    settings.push_back(setting_float_value);

    double value_double = 76.1;
    VkLayerSettingEXT setting_double_value{};
    setting_double_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_double_value.pSettingName = "double_value";
    setting_double_value.type = VK_LAYER_SETTING_TYPE_DOUBLE_EXT;
    setting_double_value.asDouble = &value_double;
    setting_double_value.count = 1;
    settings.push_back(setting_double_value);

    VkFrameset value_frameset{76, 100, 10};
    VkLayerSettingEXT setting_frameset_value{};
    setting_frameset_value.pLayerName = "VK_LAYER_LUNARG_test";
    setting_frameset_value.pSettingName = "frameset_value";
    setting_frameset_value.type = VK_LAYER_SETTING_TYPE_FRAMESET_EXT;
    setting_frameset_value.asFrameset = &value_frameset;
    setting_frameset_value.count = 1;
    settings.push_back(setting_frameset_value);

    VkLayerSettingsCreateInfoEXT layer_settings_create_info;
    layer_settings_create_info.sType = VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT;
    layer_settings_create_info.pNext = nullptr;
    layer_settings_create_info.settingCount = static_cast<uint32_t>(settings.size());
    layer_settings_create_info.pSettings = &settings[0];

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    // The expected layer code side:
    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_FALSE(vlHasLayerSetting("setting0"));
    EXPECT_TRUE(vlHasLayerSetting("bool_value"));
    EXPECT_TRUE(vlHasLayerSetting("int32_value"));
    EXPECT_TRUE(vlHasLayerSetting("int64_value"));
    EXPECT_TRUE(vlHasLayerSetting("uint32_value"));
    EXPECT_TRUE(vlHasLayerSetting("uint64_value"));
    EXPECT_TRUE(vlHasLayerSetting("float_value"));
    EXPECT_TRUE(vlHasLayerSetting("double_value"));
    EXPECT_TRUE(vlHasLayerSetting("frameset_value"));
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Bool) {
    std::vector<VkBool32> input_values{VK_TRUE, VK_FALSE};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}};

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<VkBool32> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(VK_TRUE, values[0]);
    EXPECT_EQ(VK_FALSE, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(VK_TRUE, values[0]);
    EXPECT_EQ(VK_FALSE, values[1]);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Int32) {
    std::vector<std::int32_t> input_values{76, -82};

    std::vector<VkLayerSettingEXT> settings{
        VkLayerSettingEXT{"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}};

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 2;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<std::int32_t> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(0, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(-82, values[1]);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Int64) {
    std::vector<std::int64_t> input_values{76, -82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}};

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 2;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<std::int64_t> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(0, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(-82, values[1]);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Uint32) {
    std::vector<std::uint32_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<std::uint32_t> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(0, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Uint64) {
    std::vector<std::uint64_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT64_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<std::uint64_t> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(0, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_UINT64_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Float) {
    std::vector<float> input_values{76.1f, -82.5f};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<float> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_TRUE(std::abs(values[0] - 76.1f) <= 0.0001f);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_TRUE(std::abs(values[0] - 76.1f) <= 0.0001f);
    EXPECT_TRUE(std::abs(values[1] - -82.5f) <= 0.0001f);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Double) {
    std::vector<double> input_values{76.1, -82.5};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<double> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_TRUE(std::abs(values[0] - 76.1) <= 0.0001);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_TRUE(std::abs(values[0] - 76.1) <= 0.0001);
    EXPECT_TRUE(std::abs(values[1] - -82.5) <= 0.0001);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_Frameset) {
    std::vector<VkFrameset> input_values{
        {76, 100, 10}, {1, 100, 1}
    };

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<VkFrameset> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_EQ(76, values[0].first);
    EXPECT_EQ(100, values[0].count);
    EXPECT_EQ(10, values[0].step);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_EQ(76, values[0].first);
    EXPECT_EQ(100, values[0].count);
    EXPECT_EQ(10, values[0].step);
    EXPECT_EQ(1, values[1].first);
    EXPECT_EQ(100, values[1].count);
    EXPECT_EQ(1, values[1].step);
    EXPECT_EQ(2, value_count);
}

TEST(test_layer_setting_api, vlGetLayerSettingValues_String) {
    std::vector<const char*> input_values{"VALUE_A", "VALUE_B"};
    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VkInstanceCreateInfo instance_create_info{};
    instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.pNext = &layer_settings_create_info;

    vlInitLayerSettings("VK_LAYER_LUNARG_test", &instance_create_info, nullptr);

    EXPECT_TRUE(vlHasLayerSetting("my_setting"));

    uint32_t value_count = 0;
    VkResult result_count = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, nullptr);
    EXPECT_EQ(VK_SUCCESS, result_count);
    EXPECT_EQ(2, value_count);

    std::vector<const char*> values(static_cast<uint32_t>(value_count));

    value_count = 1;
    VkResult result_incomplete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_INCOMPLETE, result_incomplete);
    EXPECT_STREQ("VALUE_A", values[0]);
    EXPECT_STREQ(nullptr, values[1]);
    EXPECT_EQ(1, value_count);

    value_count = 2;
    VkResult result_complete = vlGetLayerSettingValues("my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, &value_count, &values[0]);
    EXPECT_EQ(VK_SUCCESS, result_complete);
    EXPECT_STREQ("VALUE_A", values[0]);
    EXPECT_STREQ("VALUE_B", values[1]);
    EXPECT_EQ(2, value_count);
}
