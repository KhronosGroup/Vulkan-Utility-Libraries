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

cmake_minimum_required(VERSION 3.17)

project(TEST_FIND_PACKAGE LANGUAGES C)

add_library(find_package_example STATIC)

# Test c99 support as well as find_package support
target_compile_features(find_package_example PRIVATE c_std_99)

target_sources(find_package_example PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/../add_subdirectory/client.c
)

# NOTE: Because VulkanHeaders is a PUBLIC dependency it needs to be found prior to VulkanUtilityLibraries
find_package(VulkanHeaders REQUIRED CONFIG)

find_package(VulkanUtilityLibraries REQUIRED CONFIG)

if (NOT TARGET Vulkan::LayerSettings)
    message(FATAL_ERROR "Vulkan::LayerSettings target not defined!")
endif()

target_link_libraries(find_package_example PRIVATE Vulkan::LayerSettings)
