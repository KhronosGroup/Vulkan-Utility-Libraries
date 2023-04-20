# Copyright (c) 2023 Valve Corporation
# Copyright (c) 2023 LunarG, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
set(CMAKE_FOLDER "${CMAKE_FOLDER}/VulkanLayerSettings/tests")

find_package(GTest REQUIRED CONFIG)

# test_layer_setting_util
add_executable(test_layer_settings_util)

target_include_directories(test_layer_settings_util PRIVATE
    ${CMAKE_SOURCE_DIR}/src/layer
)

target_sources(test_layer_settings_util PRIVATE
    test_setting_util.cpp
)

target_link_libraries(test_layer_settings_util PRIVATE 
    GTest::gtest
    GTest::gtest_main
    Vulkan::Headers
    Vulkan::LayerSettings
)

include(GoogleTest)

gtest_discover_tests(test_layer_settings_util)

# test_layer_setting_api
add_executable(test_layer_settings_api)

target_include_directories(test_layer_settings_api PRIVATE
    ${CMAKE_SOURCE_DIR}/src/layer
)

target_sources(test_layer_settings_api PRIVATE
    test_setting_api.cpp
)

target_link_libraries(test_layer_settings_api PRIVATE 
    GTest::gtest
    GTest::gtest_main
    Vulkan::Headers
    Vulkan::LayerSettings
)

include(GoogleTest)

gtest_discover_tests(test_layer_settings_api)

# test_layer_setting_file
add_executable(test_layer_setting_file)

target_include_directories(test_layer_setting_file PRIVATE
    ${CMAKE_SOURCE_DIR}/src/layer
)

target_sources(test_layer_setting_file PRIVATE
    test_setting_file.cpp
)

target_link_libraries(test_layer_setting_file PRIVATE 
    GTest::gtest
    GTest::gtest_main
    Vulkan::Headers
    Vulkan::LayerSettings
)

include(GoogleTest)

gtest_discover_tests(test_layer_setting_file)

