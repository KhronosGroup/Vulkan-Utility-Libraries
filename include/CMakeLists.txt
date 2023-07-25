# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0
target_include_directories(VulkanLayerSettings PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

target_sources(VulkanLayerSettings PRIVATE
	vulkan/layer/vk_layer_settings.h
	vulkan/layer/vk_layer_settings_ext.h
)
