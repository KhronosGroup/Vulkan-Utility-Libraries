# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0
set(CMAKE_FOLDER "${CMAKE_FOLDER}/VulkanLayerSettings")

add_library(VulkanLayerSettings STATIC)
add_library(Vulkan::LayerSettings ALIAS VulkanLayerSettings)

lunarg_target_compiler_configurations(VulkanLayerSettings VUL_WERROR)

target_sources(VulkanLayerSettings PRIVATE
   vk_layer_settings.cpp
   vk_layer_settings_helper.cpp
   layer_settings_manager.cpp
   layer_settings_manager.hpp
   layer_settings_util.cpp
   layer_settings_util.hpp
)

# NOTE: Because Vulkan::Headers header files are exposed in the public facing interface
# we must expose this library as public to users.
target_link_Libraries(VulkanLayerSettings PUBLIC Vulkan::Headers)
