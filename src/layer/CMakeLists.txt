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

set(CMAKE_FOLDER "${CMAKE_FOLDER}/VulkanLayerSettings")

add_library(VulkanLayerSettings STATIC)
add_library(Vulkan::LayerSettings ALIAS VulkanLayerSettings)

target_compile_features(VulkanLayerSettings PRIVATE cxx_std_17)

target_sources(VulkanLayerSettings PRIVATE
   vk_layer_settings.cpp
   layer_settings_manager.cpp
   layer_settings_manager.hpp
   layer_settings_util.cpp
   layer_settings_util.hpp
)

# NOTE: Because Vulkan::Headers header files are exposed in the public facing interface
# we must expose this library as public to users.
target_link_Libraries(VulkanLayerSettings PUBLIC Vulkan::Headers)

if(WIN32)
   target_compile_definitions(VulkanLayerSettings PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
