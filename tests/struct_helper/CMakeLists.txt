# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

add_executable(test_struct_helper struct_helper.cpp)

target_link_libraries(test_struct_helper PRIVATE
    GTest::gtest
    GTest::gtest_main
    Vulkan::UtilityHeaders
)

if(${CMAKE_C_COMPILER_ID} MATCHES "(GNU|Clang)")
    add_compile_options(-Wpedantic -Wall -Wextra -Werror)
endif()

gtest_discover_tests(test_struct_helper)
