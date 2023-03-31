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
target_include_directories(VulkanLayerUtils PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

target_compile_features(VulkanLayerUtils PUBLIC cxx_std_17)

target_sources(VulkanLayerUtils PRIVATE vulkan/layer/vk_layer_settings.h)
