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

find_package(GTest REQUIRED CONFIG)
include(GoogleTest)

add_executable(tests_util)

target_sources(tests_util PRIVATE
    test_util.cpp
)

target_link_libraries(tests_util PRIVATE 
    GTest::gtest
    GTest::gtest_main
    Vulkan::Headers
    VulkanLayerUtils
)

set_target_properties(tests_util PROPERTIES FOLDER "VulkanLayerUtils-tests")

gtest_discover_tests(tests_util)
