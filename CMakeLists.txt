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
cmake_minimum_required(VERSION 3.17.2)

project(VUL LANGUAGES CXX)

include(GNUInstallDirs)

set_property(GLOBAL PROPERTY USE_FOLDERS ON) # Remove when min is 3.26, see CMP0143

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET "hidden")
set(CMAKE_VISIBILITY_INLINES_HIDDEN "YES")

# NOTE: The idiom for open source projects is to not enable warnings as errors.
# This reduces problems for users who simply want to build the repository.
option(VUL_WERROR "Treat compiler warnings as errors")
if (VUL_WERROR)
    add_compile_options("$<IF:$<CXX_COMPILER_ID:MSVC>,/WX,-Werror>")
    if (MSVC)
        add_link_options(/WX)
    endif()
endif()

find_package(PythonInterp 3.7.2 REQUIRED)

add_subdirectory(scripts)

find_package(VulkanHeaders REQUIRED CONFIG QUIET)

add_library(VulkanLayerUtils STATIC)
add_library(Vulkan::LayerUtils ALIAS VulkanLayerUtils)

add_subdirectory(include)
add_subdirectory(src)

option(VUL_BUILD_TESTS "Build tests")
if(VUL_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
