# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

find_package(GTest REQUIRED CONFIG)
find_package(magic_enum REQUIRED CONFIG)

include(GoogleTest)

add_subdirectory(layer)
add_subdirectory(generated)
add_subdirectory(vk_dispatch_table)
add_subdirectory(format_utils)
add_subdirectory(struct_helper)
