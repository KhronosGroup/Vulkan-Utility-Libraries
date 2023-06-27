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

string(COMPARE EQUAL ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_SOURCE_DIR} VUL_IS_TOP_LEVEL) # Remove when min is 3.21

set_property(GLOBAL PROPERTY USE_FOLDERS ON) # Remove when min is 3.26, see CMP0143

set(PROFILES_CPP_STANDARD 17 CACHE STRING "Set the C++ standard to build against.")
set(CMAKE_CXX_STANDARD ${PROFILES_CPP_STANDARD})
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET "hidden")
set(CMAKE_C_VISIBILITY_PRESET "hidden")
set(CMAKE_VISIBILITY_INLINES_HIDDEN "YES")

add_subdirectory(scripts)

find_package(VulkanHeaders CONFIG QUIET)

option(VUL_WERROR "Treat compiler warnings as errors")
if (VUL_WERROR)
    add_compile_options("$<IF:$<CXX_COMPILER_ID:MSVC>,/WX,-Werror>")
    if (MSVC)
        add_link_options(/WX)
    endif()
endif()

if(${CMAKE_CXX_COMPILER_ID} MATCHES "(GNU|Clang)")
    add_compile_options(
        -Wall
        -Wextra
    )
endif()

add_subdirectory(src)
add_subdirectory(include)

if (VUL_IS_TOP_LEVEL)
    option(BUILD_TESTS "Build tests")
    if (BUILD_TESTS)
        enable_testing()
        add_subdirectory(tests)
    endif()

    include(GNUInstallDirs)
    
    install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/vulkan" DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    set_target_properties(VulkanLayerSettings PROPERTIES EXPORT_NAME "LayerSettings")
    install(TARGETS VulkanLayerSettings EXPORT VulkanUtilityLibrariesConfig INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    install(EXPORT VulkanUtilityLibrariesConfig DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/VulkanUtilityLibraries NAMESPACE Vulkan::)
endif()
