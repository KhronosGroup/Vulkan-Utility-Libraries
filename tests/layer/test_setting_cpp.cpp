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

#include "vulkan/layer/vk_layer_settings.hpp"
#include <vector>

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Bool) {
    VkBool32 input_values{VK_TRUE};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, 1, {&input_values}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    bool value = true;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(true, value);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Bool) {
    std::vector<VkBool32> input_values{VK_TRUE, VK_FALSE};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_BOOL_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<bool> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(true, values[0]);
    EXPECT_EQ(false, values[1]);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Int32) {
    std::vector<std::int32_t> input_values{76};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::int32_t value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(76, value);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Int32) {
    std::vector<std::int32_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<std::int32_t> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Uint32) {
    std::vector<std::uint32_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::uint32_t value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(76, value);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Uint32) {
    std::vector<std::uint32_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT32_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<std::uint32_t> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Int64) {
    std::vector<std::int64_t> input_values{76};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::int64_t value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(76, value);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Int64) {
    std::vector<std::int64_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_INT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<std::int64_t> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Uint64) {
    std::vector<std::uint64_t> input_values{76};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::uint64_t value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(76, value);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Uint64) {
    std::vector<std::uint64_t> input_values{76, 82};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_UINT64_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<std::uint64_t> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(76, values[0]);
    EXPECT_EQ(82, values[1]);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Float) {
    std::vector<float> input_values{-82.5f};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    float value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_TRUE(std::abs(value - -82.5f) <= 0.0001f);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Float) {
    std::vector<float> input_values{76.1f, -82.5f};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FLOAT_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<float> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_TRUE(std::abs(values[0] - 76.1f) <= 0.0001f);
    EXPECT_TRUE(std::abs(values[1] - -82.5f) <= 0.0001f);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Double) {
    std::vector<double> input_values{-82.5};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    double value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_TRUE(std::abs(value - -82.5) <= 0.0001);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Double) {
    std::vector<double> input_values{76.1, -82.5};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_DOUBLE_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<double> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_TRUE(std::abs(values[0] - 76.1) <= 0.0001);
    EXPECT_TRUE(std::abs(values[1] - -82.5) <= 0.0001);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}


TEST(test_layer_setting_cpp, vlGetLayerSettingValue_String) {
    std::vector<const char*> input_values{"VALUE_A"};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, 1, {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    std::string value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);
    EXPECT_STREQ("VALUE_A", value.c_str());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_String) {
    std::vector<const char*> input_values{"VALUE_A", "VALUE_B"};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<std::string> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);
    EXPECT_STREQ("VALUE_A", values[0].c_str());
    EXPECT_STREQ("VALUE_B", values[1].c_str());
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValue_Frameset) {
    std::vector<VkFrameset> input_values{{76, 100, 10}};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    VkFrameset value;
    vlGetLayerSettingValue(layerSettingSet, "my_setting", value);

    EXPECT_EQ(76, value.first);
    EXPECT_EQ(100, value.count);
    EXPECT_EQ(10, value.step);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_Frameset) {
    std::vector<VkFrameset> input_values{
        {76, 100, 10}, {1, 100, 1}
    };

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_FRAMESET_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<VkFrameset> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);

    EXPECT_EQ(76, values[0].first);
    EXPECT_EQ(100, values[0].count);
    EXPECT_EQ(10, values[0].step);
    EXPECT_EQ(1, values[1].first);
    EXPECT_EQ(100, values[1].count);
    EXPECT_EQ(1, values[1].step);
    EXPECT_EQ(2, values.size());

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}

TEST(test_layer_setting_cpp, vlGetLayerSettingValues_VlCustomSTypeInfo) {
    std::vector<const char*> input_values{"0x76", "0X82", "76", "82"};

    std::vector<VkLayerSettingEXT> settings{
        {"VK_LAYER_LUNARG_test", "my_setting", VK_LAYER_SETTING_TYPE_STRING_EXT, static_cast<uint32_t>(input_values.size()), {&input_values[0]}}
    };

    VkLayerSettingsCreateInfoEXT layer_settings_create_info{
        VK_STRUCTURE_TYPE_LAYER_SETTINGS_EXT, nullptr, static_cast<uint32_t>(settings.size()), &settings[0]};

    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", &layer_settings_create_info, nullptr, nullptr, &layerSettingSet);

    EXPECT_TRUE(vlHasLayerSetting(layerSettingSet, "my_setting"));

    std::vector<VlCustomSTypeInfo> values;
    vlGetLayerSettingValues(layerSettingSet, "my_setting", values);
    EXPECT_EQ(0x76, values[0].first);
    EXPECT_EQ(0x82, values[0].second);
    EXPECT_EQ(76, values[1].first);
    EXPECT_EQ(82, values[1].second);

    vlDestroyLayerSettingSet(layerSettingSet, nullptr);
}
