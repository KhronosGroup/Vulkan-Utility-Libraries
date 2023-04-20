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

project(TEST_ADD_SUBDIRECTORY LANGUAGES C)

add_library(add_subdirectory_example STATIC)

# Test c99 support as well as find_package support
target_compile_features(add_subdirectory_example PRIVATE c_std_99)

target_sources(add_subdirectory_example PRIVATE client.c)

# NOTE: Because VulkanHeaders is a PUBLIC dependency it needs to be found prior to VulkanUtilityLibraries
add_subdirectory(${GITHUB_VULKAN_HEADER_SOURCE_DIR} ${PROJECT_BINARY_DIR}/headers)

add_subdirectory(${PROJECT_SOURCE_DIR}/../../ ${PROJECT_BINARY_DIR}/vul)

if (NOT TARGET Vulkan::LayerSettings)
    message(FATAL_ERROR "Vulkan::LayerSettings target not defined!")
endif()

target_link_libraries(add_subdirectory_example PRIVATE Vulkan::LayerSettings)
