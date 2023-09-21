# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

find_package(GTest REQUIRED CONFIG)
find_package(magic_enum REQUIRED CONFIG)

include(GoogleTest)

add_executable(test_format_utils test_formats.cpp)

target_link_libraries(test_format_utils PRIVATE
    GTest::gtest
    GTest::gtest_main
    magic_enum::magic_enum
    Vulkan::UtilityHeaders
)

if(${CMAKE_C_COMPILER_ID} MATCHES "(GNU|Clang)")
    add_compile_options(-Wpedantic -Wall -Wextra -Werror)
endif()

gtest_discover_tests(test_format_utils DISCOVERY_TIMEOUT 100)
