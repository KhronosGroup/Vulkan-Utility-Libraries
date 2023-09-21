# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0
set(CMAKE_FOLDER "${CMAKE_FOLDER}/VulkanUtilityHeaders/tests")

find_package(GTest REQUIRED CONFIG)

include(GoogleTest)

add_executable(test_vk_dispatch_table test_interface.cpp)

target_link_libraries(test_vk_dispatch_table PRIVATE
    GTest::gtest
    GTest::gtest_main
    Vulkan::UtilityHeaders
    Vulkan::CompilerConfiguration
)

target_include_directories(test_vk_dispatch_table PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

gtest_discover_tests(test_vk_dispatch_table)
