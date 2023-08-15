// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
#include <vulkan/vk_enum_string_helper.h>

#include <magic_enum.hpp>

#include <gtest/gtest.h>

TEST(vk_enum_string_helper, string_VkResult) {
    constexpr auto values = magic_enum::enum_values<VkResult>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkResult(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}

TEST(vk_enum_string_helper, string_VkStructureType) {
    constexpr auto values = magic_enum::enum_values<VkStructureType>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkStructureType(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}

TEST(vk_enum_string_helper, string_VkPipelineCacheHeaderVersion) {
    constexpr auto values = magic_enum::enum_values<VkPipelineCacheHeaderVersion>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkPipelineCacheHeaderVersion(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}

TEST(vk_enum_string_helper, string_VkImageLayout) {
    constexpr auto values = magic_enum::enum_values<VkImageLayout>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkImageLayout(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}

TEST(vk_enum_string_helper, string_VkObjectType) {
    constexpr auto values = magic_enum::enum_values<VkObjectType>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkObjectType(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}

TEST(vk_enum_string_helper, string_VkFormat) {
    constexpr auto values = magic_enum::enum_values<VkFormat>();
    for (auto val : values) {
        auto magic_str = magic_enum::enum_name(val);

        auto str = string_VkFormat(val);

        EXPECT_STREQ(magic_str.data(), str);
    }
}