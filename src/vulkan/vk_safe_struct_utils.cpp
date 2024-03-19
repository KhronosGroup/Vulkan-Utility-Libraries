// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See safe_struct_generator.py for modifications

/***************************************************************************
 *
 * Copyright (c) 2015-2024 The Khronos Group Inc.
 * Copyright (c) 2015-2024 Valve Corporation
 * Copyright (c) 2015-2024 LunarG, Inc.
 * Copyright (c) 2015-2024 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

// NOLINTBEGIN

#include <vulkan/vk_layer.h>
#include <vulkan/utility/vk_safe_struct.h>

#include <vector>
#include <cstring>

extern std::vector<std::pair<uint32_t, uint32_t>> custom_stype_info;

namespace vku {
namespace safe {
char *SafeStringCopy(const char *in_string) {
    if (nullptr == in_string) return nullptr;
    char *dest = new char[std::strlen(in_string) + 1];
    return std::strcpy(dest, in_string);
}

// clang-format off
void *SafePnextCopy(const void *pNext, PNextCopyState* copy_state) {
    void *first_pNext{};
    VkBaseOutStructure *prev_pNext{};
    void *safe_pNext{};

    while (pNext) {
        const VkBaseOutStructure *header = reinterpret_cast<const VkBaseOutStructure *>(pNext);

        switch (header->sType) {
            // Add special-case code to copy beloved secret loader structs
            // Special-case Loader Instance Struct passed to/from layer in pNext chain
            case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: {
                VkLayerInstanceCreateInfo *struct_copy = new VkLayerInstanceCreateInfo;
                // TODO: Uses original VkLayerInstanceLink* chain, which should be okay for our uses
                memcpy(struct_copy, pNext, sizeof(VkLayerInstanceCreateInfo));
                safe_pNext = struct_copy;
                break;
            }
            // Special-case Loader Device Struct passed to/from layer in pNext chain
            case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: {
                VkLayerDeviceCreateInfo *struct_copy = new VkLayerDeviceCreateInfo;
                // TODO: Uses original VkLayerDeviceLink*, which should be okay for our uses
                memcpy(struct_copy, pNext, sizeof(VkLayerDeviceCreateInfo));
                safe_pNext = struct_copy;
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
                safe_pNext = new ShaderModuleCreateInfo(reinterpret_cast<const VkShaderModuleCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
                safe_pNext = new PipelineLayoutCreateInfo(reinterpret_cast<const VkPipelineLayoutCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
                safe_pNext = new PhysicalDeviceSubgroupProperties(reinterpret_cast<const VkPhysicalDeviceSubgroupProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
                safe_pNext = new PhysicalDevice16BitStorageFeatures(reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
                safe_pNext = new MemoryDedicatedRequirements(reinterpret_cast<const VkMemoryDedicatedRequirements *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
                safe_pNext = new MemoryDedicatedAllocateInfo(reinterpret_cast<const VkMemoryDedicatedAllocateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
                safe_pNext = new MemoryAllocateFlagsInfo(reinterpret_cast<const VkMemoryAllocateFlagsInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
                safe_pNext = new DeviceGroupRenderPassBeginInfo(reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
                safe_pNext = new DeviceGroupCommandBufferBeginInfo(reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
                safe_pNext = new DeviceGroupSubmitInfo(reinterpret_cast<const VkDeviceGroupSubmitInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
                safe_pNext = new DeviceGroupBindSparseInfo(reinterpret_cast<const VkDeviceGroupBindSparseInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
                safe_pNext = new BindBufferMemoryDeviceGroupInfo(reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
                safe_pNext = new BindImageMemoryDeviceGroupInfo(reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
                safe_pNext = new DeviceGroupDeviceCreateInfo(reinterpret_cast<const VkDeviceGroupDeviceCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
                safe_pNext = new PhysicalDeviceFeatures2(reinterpret_cast<const VkPhysicalDeviceFeatures2 *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
                safe_pNext = new PhysicalDevicePointClippingProperties(reinterpret_cast<const VkPhysicalDevicePointClippingProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
                safe_pNext = new RenderPassInputAttachmentAspectCreateInfo(reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
                safe_pNext = new ImageViewUsageCreateInfo(reinterpret_cast<const VkImageViewUsageCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
                safe_pNext = new PipelineTessellationDomainOriginStateCreateInfo(reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
                safe_pNext = new RenderPassMultiviewCreateInfo(reinterpret_cast<const VkRenderPassMultiviewCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
                safe_pNext = new PhysicalDeviceMultiviewFeatures(reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
                safe_pNext = new PhysicalDeviceMultiviewProperties(reinterpret_cast<const VkPhysicalDeviceMultiviewProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
                safe_pNext = new PhysicalDeviceVariablePointersFeatures(reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
                safe_pNext = new PhysicalDeviceProtectedMemoryFeatures(reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
                safe_pNext = new PhysicalDeviceProtectedMemoryProperties(reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
                safe_pNext = new ProtectedSubmitInfo(reinterpret_cast<const VkProtectedSubmitInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
                safe_pNext = new SamplerYcbcrConversionInfo(reinterpret_cast<const VkSamplerYcbcrConversionInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
                safe_pNext = new BindImagePlaneMemoryInfo(reinterpret_cast<const VkBindImagePlaneMemoryInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
                safe_pNext = new ImagePlaneMemoryRequirementsInfo(reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
                safe_pNext = new PhysicalDeviceSamplerYcbcrConversionFeatures(reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
                safe_pNext = new SamplerYcbcrConversionImageFormatProperties(reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
                safe_pNext = new PhysicalDeviceExternalImageFormatInfo(reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
                safe_pNext = new ExternalImageFormatProperties(reinterpret_cast<const VkExternalImageFormatProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
                safe_pNext = new PhysicalDeviceIDProperties(reinterpret_cast<const VkPhysicalDeviceIDProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
                safe_pNext = new ExternalMemoryImageCreateInfo(reinterpret_cast<const VkExternalMemoryImageCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
                safe_pNext = new ExternalMemoryBufferCreateInfo(reinterpret_cast<const VkExternalMemoryBufferCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
                safe_pNext = new ExportMemoryAllocateInfo(reinterpret_cast<const VkExportMemoryAllocateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
                safe_pNext = new ExportFenceCreateInfo(reinterpret_cast<const VkExportFenceCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
                safe_pNext = new ExportSemaphoreCreateInfo(reinterpret_cast<const VkExportSemaphoreCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
                safe_pNext = new PhysicalDeviceMaintenance3Properties(reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
                safe_pNext = new PhysicalDeviceShaderDrawParametersFeatures(reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
                safe_pNext = new PhysicalDeviceVulkan11Features(reinterpret_cast<const VkPhysicalDeviceVulkan11Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
                safe_pNext = new PhysicalDeviceVulkan11Properties(reinterpret_cast<const VkPhysicalDeviceVulkan11Properties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
                safe_pNext = new PhysicalDeviceVulkan12Features(reinterpret_cast<const VkPhysicalDeviceVulkan12Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
                safe_pNext = new PhysicalDeviceVulkan12Properties(reinterpret_cast<const VkPhysicalDeviceVulkan12Properties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
                safe_pNext = new ImageFormatListCreateInfo(reinterpret_cast<const VkImageFormatListCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
                safe_pNext = new PhysicalDevice8BitStorageFeatures(reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
                safe_pNext = new PhysicalDeviceDriverProperties(reinterpret_cast<const VkPhysicalDeviceDriverProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
                safe_pNext = new PhysicalDeviceShaderAtomicInt64Features(reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
                safe_pNext = new PhysicalDeviceShaderFloat16Int8Features(reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
                safe_pNext = new PhysicalDeviceFloatControlsProperties(reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
                safe_pNext = new DescriptorSetLayoutBindingFlagsCreateInfo(reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
                safe_pNext = new PhysicalDeviceDescriptorIndexingFeatures(reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
                safe_pNext = new PhysicalDeviceDescriptorIndexingProperties(reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
                safe_pNext = new DescriptorSetVariableDescriptorCountAllocateInfo(reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
                safe_pNext = new DescriptorSetVariableDescriptorCountLayoutSupport(reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
                safe_pNext = new SubpassDescriptionDepthStencilResolve(reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
                safe_pNext = new PhysicalDeviceDepthStencilResolveProperties(reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
                safe_pNext = new PhysicalDeviceScalarBlockLayoutFeatures(reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
                safe_pNext = new ImageStencilUsageCreateInfo(reinterpret_cast<const VkImageStencilUsageCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO:
                safe_pNext = new SamplerReductionModeCreateInfo(reinterpret_cast<const VkSamplerReductionModeCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
                safe_pNext = new PhysicalDeviceSamplerFilterMinmaxProperties(reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
                safe_pNext = new PhysicalDeviceVulkanMemoryModelFeatures(reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
                safe_pNext = new PhysicalDeviceImagelessFramebufferFeatures(reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
                safe_pNext = new FramebufferAttachmentsCreateInfo(reinterpret_cast<const VkFramebufferAttachmentsCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
                safe_pNext = new RenderPassAttachmentBeginInfo(reinterpret_cast<const VkRenderPassAttachmentBeginInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
                safe_pNext = new PhysicalDeviceUniformBufferStandardLayoutFeatures(reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
                safe_pNext = new PhysicalDeviceShaderSubgroupExtendedTypesFeatures(reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
                safe_pNext = new PhysicalDeviceSeparateDepthStencilLayoutsFeatures(reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
                safe_pNext = new AttachmentReferenceStencilLayout(reinterpret_cast<const VkAttachmentReferenceStencilLayout *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
                safe_pNext = new AttachmentDescriptionStencilLayout(reinterpret_cast<const VkAttachmentDescriptionStencilLayout *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
                safe_pNext = new PhysicalDeviceHostQueryResetFeatures(reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
                safe_pNext = new PhysicalDeviceTimelineSemaphoreFeatures(reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
                safe_pNext = new PhysicalDeviceTimelineSemaphoreProperties(reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
                safe_pNext = new SemaphoreTypeCreateInfo(reinterpret_cast<const VkSemaphoreTypeCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
                safe_pNext = new TimelineSemaphoreSubmitInfo(reinterpret_cast<const VkTimelineSemaphoreSubmitInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
                safe_pNext = new PhysicalDeviceBufferDeviceAddressFeatures(reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
                safe_pNext = new BufferOpaqueCaptureAddressCreateInfo(reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
                safe_pNext = new MemoryOpaqueCaptureAddressAllocateInfo(reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
                safe_pNext = new PhysicalDeviceVulkan13Features(reinterpret_cast<const VkPhysicalDeviceVulkan13Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
                safe_pNext = new PhysicalDeviceVulkan13Properties(reinterpret_cast<const VkPhysicalDeviceVulkan13Properties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
                safe_pNext = new PipelineCreationFeedbackCreateInfo(reinterpret_cast<const VkPipelineCreationFeedbackCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
                safe_pNext = new PhysicalDeviceShaderTerminateInvocationFeatures(reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
                safe_pNext = new PhysicalDeviceShaderDemoteToHelperInvocationFeatures(reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
                safe_pNext = new PhysicalDevicePrivateDataFeatures(reinterpret_cast<const VkPhysicalDevicePrivateDataFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
                safe_pNext = new DevicePrivateDataCreateInfo(reinterpret_cast<const VkDevicePrivateDataCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
                safe_pNext = new PhysicalDevicePipelineCreationCacheControlFeatures(reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
                safe_pNext = new MemoryBarrier2(reinterpret_cast<const VkMemoryBarrier2 *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
                safe_pNext = new PhysicalDeviceSynchronization2Features(reinterpret_cast<const VkPhysicalDeviceSynchronization2Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
                safe_pNext = new PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
                safe_pNext = new PhysicalDeviceImageRobustnessFeatures(reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
                safe_pNext = new PhysicalDeviceSubgroupSizeControlFeatures(reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
                safe_pNext = new PhysicalDeviceSubgroupSizeControlProperties(reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
                safe_pNext = new PipelineShaderStageRequiredSubgroupSizeCreateInfo(reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
                safe_pNext = new PhysicalDeviceInlineUniformBlockFeatures(reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
                safe_pNext = new PhysicalDeviceInlineUniformBlockProperties(reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
                safe_pNext = new WriteDescriptorSetInlineUniformBlock(reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlock *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
                safe_pNext = new DescriptorPoolInlineUniformBlockCreateInfo(reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
                safe_pNext = new PhysicalDeviceTextureCompressionASTCHDRFeatures(reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
                safe_pNext = new PipelineRenderingCreateInfo(reinterpret_cast<const VkPipelineRenderingCreateInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
                safe_pNext = new PhysicalDeviceDynamicRenderingFeatures(reinterpret_cast<const VkPhysicalDeviceDynamicRenderingFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
                safe_pNext = new CommandBufferInheritanceRenderingInfo(reinterpret_cast<const VkCommandBufferInheritanceRenderingInfo *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
                safe_pNext = new PhysicalDeviceShaderIntegerDotProductFeatures(reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
                safe_pNext = new PhysicalDeviceShaderIntegerDotProductProperties(reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
                safe_pNext = new PhysicalDeviceTexelBufferAlignmentProperties(reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentProperties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
                safe_pNext = new FormatProperties3(reinterpret_cast<const VkFormatProperties3 *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
                safe_pNext = new PhysicalDeviceMaintenance4Features(reinterpret_cast<const VkPhysicalDeviceMaintenance4Features *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
                safe_pNext = new PhysicalDeviceMaintenance4Properties(reinterpret_cast<const VkPhysicalDeviceMaintenance4Properties *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
                safe_pNext = new ImageSwapchainCreateInfoKHR(reinterpret_cast<const VkImageSwapchainCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
                safe_pNext = new BindImageMemorySwapchainInfoKHR(reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
                safe_pNext = new DeviceGroupPresentInfoKHR(reinterpret_cast<const VkDeviceGroupPresentInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
                safe_pNext = new DeviceGroupSwapchainCreateInfoKHR(reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
                safe_pNext = new DisplayPresentInfoKHR(reinterpret_cast<const VkDisplayPresentInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
                safe_pNext = new QueueFamilyQueryResultStatusPropertiesKHR(reinterpret_cast<const VkQueueFamilyQueryResultStatusPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
                safe_pNext = new QueueFamilyVideoPropertiesKHR(reinterpret_cast<const VkQueueFamilyVideoPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR:
                safe_pNext = new VideoProfileInfoKHR(reinterpret_cast<const VkVideoProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
                safe_pNext = new VideoProfileListInfoKHR(reinterpret_cast<const VkVideoProfileListInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR:
                safe_pNext = new VideoDecodeCapabilitiesKHR(reinterpret_cast<const VkVideoDecodeCapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
                safe_pNext = new VideoDecodeUsageInfoKHR(reinterpret_cast<const VkVideoDecodeUsageInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR:
                safe_pNext = new VideoEncodeH264CapabilitiesKHR(reinterpret_cast<const VkVideoEncodeH264CapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR:
                safe_pNext = new VideoEncodeH264QualityLevelPropertiesKHR(reinterpret_cast<const VkVideoEncodeH264QualityLevelPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR:
                safe_pNext = new VideoEncodeH264SessionCreateInfoKHR(reinterpret_cast<const VkVideoEncodeH264SessionCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
                safe_pNext = new VideoEncodeH264SessionParametersAddInfoKHR(reinterpret_cast<const VkVideoEncodeH264SessionParametersAddInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
                safe_pNext = new VideoEncodeH264SessionParametersCreateInfoKHR(reinterpret_cast<const VkVideoEncodeH264SessionParametersCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR:
                safe_pNext = new VideoEncodeH264SessionParametersGetInfoKHR(reinterpret_cast<const VkVideoEncodeH264SessionParametersGetInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
                safe_pNext = new VideoEncodeH264SessionParametersFeedbackInfoKHR(reinterpret_cast<const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR:
                safe_pNext = new VideoEncodeH264PictureInfoKHR(reinterpret_cast<const VkVideoEncodeH264PictureInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR:
                safe_pNext = new VideoEncodeH264DpbSlotInfoKHR(reinterpret_cast<const VkVideoEncodeH264DpbSlotInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
                safe_pNext = new VideoEncodeH264ProfileInfoKHR(reinterpret_cast<const VkVideoEncodeH264ProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR:
                safe_pNext = new VideoEncodeH264RateControlInfoKHR(reinterpret_cast<const VkVideoEncodeH264RateControlInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR:
                safe_pNext = new VideoEncodeH264RateControlLayerInfoKHR(reinterpret_cast<const VkVideoEncodeH264RateControlLayerInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR:
                safe_pNext = new VideoEncodeH264GopRemainingFrameInfoKHR(reinterpret_cast<const VkVideoEncodeH264GopRemainingFrameInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR:
                safe_pNext = new VideoEncodeH265CapabilitiesKHR(reinterpret_cast<const VkVideoEncodeH265CapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR:
                safe_pNext = new VideoEncodeH265SessionCreateInfoKHR(reinterpret_cast<const VkVideoEncodeH265SessionCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR:
                safe_pNext = new VideoEncodeH265QualityLevelPropertiesKHR(reinterpret_cast<const VkVideoEncodeH265QualityLevelPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
                safe_pNext = new VideoEncodeH265SessionParametersAddInfoKHR(reinterpret_cast<const VkVideoEncodeH265SessionParametersAddInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
                safe_pNext = new VideoEncodeH265SessionParametersCreateInfoKHR(reinterpret_cast<const VkVideoEncodeH265SessionParametersCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR:
                safe_pNext = new VideoEncodeH265SessionParametersGetInfoKHR(reinterpret_cast<const VkVideoEncodeH265SessionParametersGetInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
                safe_pNext = new VideoEncodeH265SessionParametersFeedbackInfoKHR(reinterpret_cast<const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR:
                safe_pNext = new VideoEncodeH265PictureInfoKHR(reinterpret_cast<const VkVideoEncodeH265PictureInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR:
                safe_pNext = new VideoEncodeH265DpbSlotInfoKHR(reinterpret_cast<const VkVideoEncodeH265DpbSlotInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
                safe_pNext = new VideoEncodeH265ProfileInfoKHR(reinterpret_cast<const VkVideoEncodeH265ProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR:
                safe_pNext = new VideoEncodeH265RateControlInfoKHR(reinterpret_cast<const VkVideoEncodeH265RateControlInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR:
                safe_pNext = new VideoEncodeH265RateControlLayerInfoKHR(reinterpret_cast<const VkVideoEncodeH265RateControlLayerInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR:
                safe_pNext = new VideoEncodeH265GopRemainingFrameInfoKHR(reinterpret_cast<const VkVideoEncodeH265GopRemainingFrameInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
                safe_pNext = new VideoDecodeH264ProfileInfoKHR(reinterpret_cast<const VkVideoDecodeH264ProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR:
                safe_pNext = new VideoDecodeH264CapabilitiesKHR(reinterpret_cast<const VkVideoDecodeH264CapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
                safe_pNext = new VideoDecodeH264SessionParametersAddInfoKHR(reinterpret_cast<const VkVideoDecodeH264SessionParametersAddInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
                safe_pNext = new VideoDecodeH264SessionParametersCreateInfoKHR(reinterpret_cast<const VkVideoDecodeH264SessionParametersCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
                safe_pNext = new VideoDecodeH264PictureInfoKHR(reinterpret_cast<const VkVideoDecodeH264PictureInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
                safe_pNext = new VideoDecodeH264DpbSlotInfoKHR(reinterpret_cast<const VkVideoDecodeH264DpbSlotInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
                safe_pNext = new RenderingFragmentShadingRateAttachmentInfoKHR(reinterpret_cast<const VkRenderingFragmentShadingRateAttachmentInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
                safe_pNext = new RenderingFragmentDensityMapAttachmentInfoEXT(reinterpret_cast<const VkRenderingFragmentDensityMapAttachmentInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
                safe_pNext = new AttachmentSampleCountInfoAMD(reinterpret_cast<const VkAttachmentSampleCountInfoAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
                safe_pNext = new MultiviewPerViewAttributesInfoNVX(reinterpret_cast<const VkMultiviewPerViewAttributesInfoNVX *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
                safe_pNext = new ImportMemoryWin32HandleInfoKHR(reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
                safe_pNext = new ExportMemoryWin32HandleInfoKHR(reinterpret_cast<const VkExportMemoryWin32HandleInfoKHR *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
                safe_pNext = new ImportMemoryFdInfoKHR(reinterpret_cast<const VkImportMemoryFdInfoKHR *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
                safe_pNext = new Win32KeyedMutexAcquireReleaseInfoKHR(reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
                safe_pNext = new ExportSemaphoreWin32HandleInfoKHR(reinterpret_cast<const VkExportSemaphoreWin32HandleInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
                safe_pNext = new D3D12FenceSubmitInfoKHR(reinterpret_cast<const VkD3D12FenceSubmitInfoKHR *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
                safe_pNext = new PhysicalDevicePushDescriptorPropertiesKHR(reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
                safe_pNext = new PresentRegionsKHR(reinterpret_cast<const VkPresentRegionsKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
                safe_pNext = new SharedPresentSurfaceCapabilitiesKHR(reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
                safe_pNext = new ExportFenceWin32HandleInfoKHR(reinterpret_cast<const VkExportFenceWin32HandleInfoKHR *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
                safe_pNext = new PhysicalDevicePerformanceQueryFeaturesKHR(reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
                safe_pNext = new PhysicalDevicePerformanceQueryPropertiesKHR(reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
                safe_pNext = new QueryPoolPerformanceCreateInfoKHR(reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
                safe_pNext = new PerformanceQuerySubmitInfoKHR(reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR *>(pNext), copy_state, false);
                break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR:
                safe_pNext = new PhysicalDevicePortabilitySubsetFeaturesKHR(reinterpret_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR:
                safe_pNext = new PhysicalDevicePortabilitySubsetPropertiesKHR(reinterpret_cast<const VkPhysicalDevicePortabilitySubsetPropertiesKHR *>(pNext), copy_state, false);
                break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderClockFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
                safe_pNext = new VideoDecodeH265ProfileInfoKHR(reinterpret_cast<const VkVideoDecodeH265ProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR:
                safe_pNext = new VideoDecodeH265CapabilitiesKHR(reinterpret_cast<const VkVideoDecodeH265CapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
                safe_pNext = new VideoDecodeH265SessionParametersAddInfoKHR(reinterpret_cast<const VkVideoDecodeH265SessionParametersAddInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
                safe_pNext = new VideoDecodeH265SessionParametersCreateInfoKHR(reinterpret_cast<const VkVideoDecodeH265SessionParametersCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
                safe_pNext = new VideoDecodeH265PictureInfoKHR(reinterpret_cast<const VkVideoDecodeH265PictureInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
                safe_pNext = new VideoDecodeH265DpbSlotInfoKHR(reinterpret_cast<const VkVideoDecodeH265DpbSlotInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR:
                safe_pNext = new DeviceQueueGlobalPriorityCreateInfoKHR(reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceGlobalPriorityQueryFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
                safe_pNext = new QueueFamilyGlobalPriorityPropertiesKHR(reinterpret_cast<const VkQueueFamilyGlobalPriorityPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
                safe_pNext = new FragmentShadingRateAttachmentInfoKHR(reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
                safe_pNext = new PipelineFragmentShadingRateStateCreateInfoKHR(reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceFragmentShadingRateFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceFragmentShadingRatePropertiesKHR(reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO_KHR:
                safe_pNext = new RenderingAttachmentLocationInfoKHR(reinterpret_cast<const VkRenderingAttachmentLocationInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR:
                safe_pNext = new RenderingInputAttachmentIndexInfoKHR(reinterpret_cast<const VkRenderingInputAttachmentIndexInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderQuadControlFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderQuadControlFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
                safe_pNext = new SurfaceProtectedCapabilitiesKHR(reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
                safe_pNext = new PhysicalDevicePresentWaitFeaturesKHR(reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
                safe_pNext = new PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR:
                safe_pNext = new PipelineLibraryCreateInfoKHR(reinterpret_cast<const VkPipelineLibraryCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PRESENT_ID_KHR:
                safe_pNext = new PresentIdKHR(reinterpret_cast<const VkPresentIdKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
                safe_pNext = new PhysicalDevicePresentIdFeaturesKHR(reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR:
                safe_pNext = new VideoEncodeCapabilitiesKHR(reinterpret_cast<const VkVideoEncodeCapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR:
                safe_pNext = new QueryPoolVideoEncodeFeedbackCreateInfoKHR(reinterpret_cast<const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
                safe_pNext = new VideoEncodeUsageInfoKHR(reinterpret_cast<const VkVideoEncodeUsageInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
                safe_pNext = new VideoEncodeRateControlInfoKHR(reinterpret_cast<const VkVideoEncodeRateControlInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
                safe_pNext = new VideoEncodeQualityLevelInfoKHR(reinterpret_cast<const VkVideoEncodeQualityLevelInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
                safe_pNext = new QueueFamilyCheckpointProperties2NV(reinterpret_cast<const VkQueueFamilyCheckpointProperties2NV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceFragmentShaderBarycentricFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceFragmentShaderBarycentricPropertiesKHR(reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceRayTracingMaintenance1FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderSubgroupRotateFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceMaintenance5FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceMaintenance5PropertiesKHR(reinterpret_cast<const VkPhysicalDeviceMaintenance5PropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR:
                safe_pNext = new PipelineCreateFlags2CreateInfoKHR(reinterpret_cast<const VkPipelineCreateFlags2CreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR:
                safe_pNext = new BufferUsageFlags2CreateInfoKHR(reinterpret_cast<const VkBufferUsageFlags2CreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceRayTracingPositionFetchFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceCooperativeMatrixFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceCooperativeMatrixPropertiesKHR(reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR:
                safe_pNext = new VideoDecodeAV1ProfileInfoKHR(reinterpret_cast<const VkVideoDecodeAV1ProfileInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR:
                safe_pNext = new VideoDecodeAV1CapabilitiesKHR(reinterpret_cast<const VkVideoDecodeAV1CapabilitiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR:
                safe_pNext = new VideoDecodeAV1SessionParametersCreateInfoKHR(reinterpret_cast<const VkVideoDecodeAV1SessionParametersCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR:
                safe_pNext = new VideoDecodeAV1PictureInfoKHR(reinterpret_cast<const VkVideoDecodeAV1PictureInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR:
                safe_pNext = new VideoDecodeAV1DpbSlotInfoKHR(reinterpret_cast<const VkVideoDecodeAV1DpbSlotInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceVideoMaintenance1FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR:
                safe_pNext = new VideoInlineQueryInfoKHR(reinterpret_cast<const VkVideoInlineQueryInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceVertexAttributeDivisorPropertiesKHR(reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR:
                safe_pNext = new PipelineVertexInputDivisorStateCreateInfoKHR(reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceVertexAttributeDivisorFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderFloatControls2FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceIndexTypeUint8FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceLineRasterizationFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceLineRasterizationPropertiesKHR(reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR:
                safe_pNext = new PipelineRasterizationLineStateCreateInfoKHR(reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceShaderExpectAssumeFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceMaintenance6FeaturesKHR(reinterpret_cast<const VkPhysicalDeviceMaintenance6FeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceMaintenance6PropertiesKHR(reinterpret_cast<const VkPhysicalDeviceMaintenance6PropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS_KHR:
                safe_pNext = new BindMemoryStatusKHR(reinterpret_cast<const VkBindMemoryStatusKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
                safe_pNext = new DebugReportCallbackCreateInfoEXT(reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
                safe_pNext = new PipelineRasterizationStateRasterizationOrderAMD(reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
                safe_pNext = new DedicatedAllocationImageCreateInfoNV(reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
                safe_pNext = new DedicatedAllocationBufferCreateInfoNV(reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
                safe_pNext = new DedicatedAllocationMemoryAllocateInfoNV(reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceTransformFeedbackFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceTransformFeedbackPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
                safe_pNext = new PipelineRasterizationStateStreamCreateInfoEXT(reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
                safe_pNext = new TextureLODGatherFormatPropertiesAMD(reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
                safe_pNext = new PhysicalDeviceCornerSampledImageFeaturesNV(reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
                safe_pNext = new ExternalMemoryImageCreateInfoNV(reinterpret_cast<const VkExternalMemoryImageCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
                safe_pNext = new ExportMemoryAllocateInfoNV(reinterpret_cast<const VkExportMemoryAllocateInfoNV *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
                safe_pNext = new ImportMemoryWin32HandleInfoNV(reinterpret_cast<const VkImportMemoryWin32HandleInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
                safe_pNext = new ExportMemoryWin32HandleInfoNV(reinterpret_cast<const VkExportMemoryWin32HandleInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
                safe_pNext = new Win32KeyedMutexAcquireReleaseInfoNV(reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
                safe_pNext = new ValidationFlagsEXT(reinterpret_cast<const VkValidationFlagsEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
                safe_pNext = new ImageViewASTCDecodeModeEXT(reinterpret_cast<const VkImageViewASTCDecodeModeEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceASTCDecodeFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePipelineRobustnessFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT:
                safe_pNext = new PhysicalDevicePipelineRobustnessPropertiesEXT(reinterpret_cast<const VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT:
                safe_pNext = new PipelineRobustnessCreateInfoEXT(reinterpret_cast<const VkPipelineRobustnessCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceConditionalRenderingFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
                safe_pNext = new CommandBufferInheritanceConditionalRenderingInfoEXT(reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineViewportWScalingStateCreateInfoNV(reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
                safe_pNext = new SwapchainCounterCreateInfoEXT(reinterpret_cast<const VkSwapchainCounterCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
                safe_pNext = new PresentTimesInfoGOOGLE(reinterpret_cast<const VkPresentTimesInfoGOOGLE *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
                safe_pNext = new PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineViewportSwizzleStateCreateInfoNV(reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceDiscardRectanglePropertiesEXT(reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineDiscardRectangleStateCreateInfoEXT(reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceConservativeRasterizationPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineRasterizationConservativeStateCreateInfoEXT(reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDepthClipEnableFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineRasterizationDepthClipStateCreateInfoEXT(reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
                safe_pNext = new PhysicalDeviceRelaxedLineRasterizationFeaturesIMG(reinterpret_cast<const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
                safe_pNext = new DebugUtilsObjectNameInfoEXT(reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
                safe_pNext = new DebugUtilsMessengerCreateInfoEXT(reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
                safe_pNext = new AndroidHardwareBufferUsageANDROID(reinterpret_cast<const VkAndroidHardwareBufferUsageANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
                safe_pNext = new AndroidHardwareBufferFormatPropertiesANDROID(reinterpret_cast<const VkAndroidHardwareBufferFormatPropertiesANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
                safe_pNext = new ImportAndroidHardwareBufferInfoANDROID(reinterpret_cast<const VkImportAndroidHardwareBufferInfoANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
                safe_pNext = new ExternalFormatANDROID(reinterpret_cast<const VkExternalFormatANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID:
                safe_pNext = new AndroidHardwareBufferFormatProperties2ANDROID(reinterpret_cast<const VkAndroidHardwareBufferFormatProperties2ANDROID *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX:
                safe_pNext = new PhysicalDeviceShaderEnqueueFeaturesAMDX(reinterpret_cast<const VkPhysicalDeviceShaderEnqueueFeaturesAMDX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX:
                safe_pNext = new PhysicalDeviceShaderEnqueuePropertiesAMDX(reinterpret_cast<const VkPhysicalDeviceShaderEnqueuePropertiesAMDX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX:
                safe_pNext = new PipelineShaderStageNodeCreateInfoAMDX(reinterpret_cast<const VkPipelineShaderStageNodeCreateInfoAMDX *>(pNext), copy_state, false);
                break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
                safe_pNext = new SampleLocationsInfoEXT(reinterpret_cast<const VkSampleLocationsInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
                safe_pNext = new RenderPassSampleLocationsBeginInfoEXT(reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineSampleLocationsStateCreateInfoEXT(reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceSampleLocationsPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceBlendOperationAdvancedFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceBlendOperationAdvancedPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineColorBlendAdvancedStateCreateInfoEXT(reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineCoverageToColorStateCreateInfoNV(reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineCoverageModulationStateCreateInfoNV(reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceShaderSMBuiltinsPropertiesNV(reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
                safe_pNext = new PhysicalDeviceShaderSMBuiltinsFeaturesNV(reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
                safe_pNext = new DrmFormatModifierPropertiesListEXT(reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
                safe_pNext = new PhysicalDeviceImageDrmFormatModifierInfoEXT(reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
                safe_pNext = new ImageDrmFormatModifierListCreateInfoEXT(reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
                safe_pNext = new ImageDrmFormatModifierExplicitCreateInfoEXT(reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
                safe_pNext = new DrmFormatModifierPropertiesList2EXT(reinterpret_cast<const VkDrmFormatModifierPropertiesList2EXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
                safe_pNext = new ShaderModuleValidationCacheCreateInfoEXT(reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineViewportShadingRateImageStateCreateInfoNV(reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
                safe_pNext = new PhysicalDeviceShadingRateImageFeaturesNV(reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceShadingRateImagePropertiesNV(reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineViewportCoarseSampleOrderStateCreateInfoNV(reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
                safe_pNext = new WriteDescriptorSetAccelerationStructureNV(reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceRayTracingPropertiesNV(reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
                safe_pNext = new PhysicalDeviceRepresentativeFragmentTestFeaturesNV(reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineRepresentativeFragmentTestStateCreateInfoNV(reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
                safe_pNext = new PhysicalDeviceImageViewImageFormatInfoEXT(reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
                safe_pNext = new FilterCubicImageViewImageFormatPropertiesEXT(reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
                safe_pNext = new ImportMemoryHostPointerInfoEXT(reinterpret_cast<const VkImportMemoryHostPointerInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceExternalMemoryHostPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
                safe_pNext = new PipelineCompilerControlCreateInfoAMD(reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
                safe_pNext = new PhysicalDeviceShaderCorePropertiesAMD(reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
                safe_pNext = new DeviceMemoryOverallocationCreateInfoAMD(reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceVertexAttributeDivisorPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
                safe_pNext = new PresentFrameTokenGGP(reinterpret_cast<const VkPresentFrameTokenGGP *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
                safe_pNext = new PhysicalDeviceComputeShaderDerivativesFeaturesNV(reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
                safe_pNext = new PhysicalDeviceMeshShaderFeaturesNV(reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceMeshShaderPropertiesNV(reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
                safe_pNext = new PhysicalDeviceShaderImageFootprintFeaturesNV(reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineViewportExclusiveScissorStateCreateInfoNV(reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
                safe_pNext = new PhysicalDeviceExclusiveScissorFeaturesNV(reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
                safe_pNext = new QueueFamilyCheckpointPropertiesNV(reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
                safe_pNext = new PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
                safe_pNext = new QueryPoolPerformanceQueryCreateInfoINTEL(reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
                safe_pNext = new PhysicalDevicePCIBusInfoPropertiesEXT(reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
                safe_pNext = new DisplayNativeHdrSurfaceCapabilitiesAMD(reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
                safe_pNext = new SwapchainDisplayNativeHdrCreateInfoAMD(reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceFragmentDensityMapFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceFragmentDensityMapPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
                safe_pNext = new RenderPassFragmentDensityMapCreateInfoEXT(reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
                safe_pNext = new PhysicalDeviceShaderCoreProperties2AMD(reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
                safe_pNext = new PhysicalDeviceCoherentMemoryFeaturesAMD(reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceMemoryBudgetPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMemoryPriorityFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
                safe_pNext = new MemoryPriorityAllocateInfoEXT(reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceBufferDeviceAddressFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
                safe_pNext = new BufferDeviceAddressCreateInfoEXT(reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
                safe_pNext = new ValidationFeaturesEXT(reinterpret_cast<const VkValidationFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
                safe_pNext = new PhysicalDeviceCooperativeMatrixFeaturesNV(reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceCooperativeMatrixPropertiesNV(reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
                safe_pNext = new PhysicalDeviceCoverageReductionModeFeaturesNV(reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineCoverageReductionStateCreateInfoNV(reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceFragmentShaderInterlockFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceYcbcrImageArraysFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceProvokingVertexFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceProvokingVertexPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceProvokingVertexPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
                safe_pNext = new PipelineRasterizationProvokingVertexStateCreateInfoEXT(reinterpret_cast<const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
                safe_pNext = new SurfaceFullScreenExclusiveInfoEXT(reinterpret_cast<const VkSurfaceFullScreenExclusiveInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
                safe_pNext = new SurfaceCapabilitiesFullScreenExclusiveEXT(reinterpret_cast<const VkSurfaceCapabilitiesFullScreenExclusiveEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
                safe_pNext = new SurfaceFullScreenExclusiveWin32InfoEXT(reinterpret_cast<const VkSurfaceFullScreenExclusiveWin32InfoEXT *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderAtomicFloatFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceExtendedDynamicStateFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceHostImageCopyFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceHostImageCopyPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceHostImageCopyPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT:
                safe_pNext = new SubresourceHostMemcpySizeEXT(reinterpret_cast<const VkSubresourceHostMemcpySizeEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT:
                safe_pNext = new HostImageCopyDevicePerformanceQueryEXT(reinterpret_cast<const VkHostImageCopyDevicePerformanceQueryEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMapMemoryPlacedFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceMapMemoryPlacedPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT:
                safe_pNext = new MemoryMapPlacedInfoEXT(reinterpret_cast<const VkMemoryMapPlacedInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderAtomicFloat2FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT:
                safe_pNext = new SurfacePresentModeEXT(reinterpret_cast<const VkSurfacePresentModeEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
                safe_pNext = new SurfacePresentScalingCapabilitiesEXT(reinterpret_cast<const VkSurfacePresentScalingCapabilitiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
                safe_pNext = new SurfacePresentModeCompatibilityEXT(reinterpret_cast<const VkSurfacePresentModeCompatibilityEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceSwapchainMaintenance1FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
                safe_pNext = new SwapchainPresentFenceInfoEXT(reinterpret_cast<const VkSwapchainPresentFenceInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
                safe_pNext = new SwapchainPresentModesCreateInfoEXT(reinterpret_cast<const VkSwapchainPresentModesCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
                safe_pNext = new SwapchainPresentModeInfoEXT(reinterpret_cast<const VkSwapchainPresentModeInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
                safe_pNext = new SwapchainPresentScalingCreateInfoEXT(reinterpret_cast<const VkSwapchainPresentScalingCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceDeviceGeneratedCommandsPropertiesNV(reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
                safe_pNext = new GraphicsPipelineShaderGroupsCreateInfoNV(reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
                safe_pNext = new PhysicalDeviceInheritedViewportScissorFeaturesNV(reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
                safe_pNext = new CommandBufferInheritanceViewportScissorInfoNV(reinterpret_cast<const VkCommandBufferInheritanceViewportScissorInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceTexelBufferAlignmentFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
                safe_pNext = new RenderPassTransformBeginInfoQCOM(reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
                safe_pNext = new CommandBufferInheritanceRenderPassTransformInfoQCOM(reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDepthBiasControlFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
                safe_pNext = new DepthBiasRepresentationInfoEXT(reinterpret_cast<const VkDepthBiasRepresentationInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDeviceMemoryReportFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
                safe_pNext = new DeviceDeviceMemoryReportCreateInfoEXT(reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceRobustness2FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceRobustness2PropertiesEXT(reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
                safe_pNext = new SamplerCustomBorderColorCreateInfoEXT(reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceCustomBorderColorPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceCustomBorderColorFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
                safe_pNext = new PhysicalDevicePresentBarrierFeaturesNV(reinterpret_cast<const VkPhysicalDevicePresentBarrierFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
                safe_pNext = new SurfaceCapabilitiesPresentBarrierNV(reinterpret_cast<const VkSurfaceCapabilitiesPresentBarrierNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
                safe_pNext = new SwapchainPresentBarrierCreateInfoNV(reinterpret_cast<const VkSwapchainPresentBarrierCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDiagnosticsConfigFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
                safe_pNext = new DeviceDiagnosticsConfigCreateInfoNV(reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV:
                safe_pNext = new PhysicalDeviceCudaKernelLaunchFeaturesNV(reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceCudaKernelLaunchPropertiesNV(reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV:
                safe_pNext = new QueryLowLatencySupportNV(reinterpret_cast<const VkQueryLowLatencySupportNV *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
                safe_pNext = new ExportMetalObjectCreateInfoEXT(reinterpret_cast<const VkExportMetalObjectCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT:
                safe_pNext = new ExportMetalDeviceInfoEXT(reinterpret_cast<const VkExportMetalDeviceInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT:
                safe_pNext = new ExportMetalCommandQueueInfoEXT(reinterpret_cast<const VkExportMetalCommandQueueInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT:
                safe_pNext = new ExportMetalBufferInfoEXT(reinterpret_cast<const VkExportMetalBufferInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT:
                safe_pNext = new ImportMetalBufferInfoEXT(reinterpret_cast<const VkImportMetalBufferInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT:
                safe_pNext = new ExportMetalTextureInfoEXT(reinterpret_cast<const VkExportMetalTextureInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT:
                safe_pNext = new ImportMetalTextureInfoEXT(reinterpret_cast<const VkImportMetalTextureInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT:
                safe_pNext = new ExportMetalIOSurfaceInfoEXT(reinterpret_cast<const VkExportMetalIOSurfaceInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT:
                safe_pNext = new ImportMetalIOSurfaceInfoEXT(reinterpret_cast<const VkImportMetalIOSurfaceInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT:
                safe_pNext = new ExportMetalSharedEventInfoEXT(reinterpret_cast<const VkExportMetalSharedEventInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT:
                safe_pNext = new ImportMetalSharedEventInfoEXT(reinterpret_cast<const VkImportMetalSharedEventInfoEXT *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceDescriptorBufferPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDescriptorBufferFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT:
                safe_pNext = new DescriptorBufferBindingPushDescriptorBufferHandleEXT(reinterpret_cast<const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
                safe_pNext = new OpaqueCaptureDescriptorDataCreateInfoEXT(reinterpret_cast<const VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
                safe_pNext = new GraphicsPipelineLibraryCreateInfoEXT(reinterpret_cast<const VkGraphicsPipelineLibraryCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
                safe_pNext = new PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(reinterpret_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
                safe_pNext = new PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
                safe_pNext = new PipelineFragmentShadingRateEnumStateCreateInfoNV(reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
                safe_pNext = new AccelerationStructureGeometryMotionTrianglesDataNV(reinterpret_cast<const VkAccelerationStructureGeometryMotionTrianglesDataNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
                safe_pNext = new AccelerationStructureMotionInfoNV(reinterpret_cast<const VkAccelerationStructureMotionInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
                safe_pNext = new PhysicalDeviceRayTracingMotionBlurFeaturesNV(reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceFragmentDensityMap2FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceFragmentDensityMap2PropertiesEXT(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
                safe_pNext = new CopyCommandTransformInfoQCOM(reinterpret_cast<const VkCopyCommandTransformInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceImageCompressionControlFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
                safe_pNext = new ImageCompressionControlEXT(reinterpret_cast<const VkImageCompressionControlEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
                safe_pNext = new ImageCompressionPropertiesEXT(reinterpret_cast<const VkImageCompressionPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
                safe_pNext = new PhysicalDevice4444FormatsFeaturesEXT(reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceFaultFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceFaultFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceRGBA10X6FormatsFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMutableDescriptorTypeFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
                safe_pNext = new MutableDescriptorTypeCreateInfoEXT(reinterpret_cast<const VkMutableDescriptorTypeCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceVertexInputDynamicStateFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceDrmPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceDrmPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceAddressBindingReportFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
                safe_pNext = new DeviceAddressBindingCallbackDataEXT(reinterpret_cast<const VkDeviceAddressBindingCallbackDataEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDepthClipControlFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
                safe_pNext = new PipelineViewportDepthClipControlCreateInfoEXT(reinterpret_cast<const VkPipelineViewportDepthClipControlCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA:
                safe_pNext = new ImportMemoryZirconHandleInfoFUCHSIA(reinterpret_cast<const VkImportMemoryZirconHandleInfoFUCHSIA *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA:
                safe_pNext = new ImportMemoryBufferCollectionFUCHSIA(reinterpret_cast<const VkImportMemoryBufferCollectionFUCHSIA *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA:
                safe_pNext = new BufferCollectionImageCreateInfoFUCHSIA(reinterpret_cast<const VkBufferCollectionImageCreateInfoFUCHSIA *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA:
                safe_pNext = new BufferCollectionBufferCreateInfoFUCHSIA(reinterpret_cast<const VkBufferCollectionBufferCreateInfoFUCHSIA *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI:
                safe_pNext = new SubpassShadingPipelineCreateInfoHUAWEI(reinterpret_cast<const VkSubpassShadingPipelineCreateInfoHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
                safe_pNext = new PhysicalDeviceSubpassShadingFeaturesHUAWEI(reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI:
                safe_pNext = new PhysicalDeviceSubpassShadingPropertiesHUAWEI(reinterpret_cast<const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
                safe_pNext = new PhysicalDeviceInvocationMaskFeaturesHUAWEI(reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
                safe_pNext = new PhysicalDeviceExternalMemoryRDMAFeaturesNV(reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePipelinePropertiesFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceFrameBoundaryFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
                safe_pNext = new FrameBoundaryEXT(reinterpret_cast<const VkFrameBoundaryEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
                safe_pNext = new SubpassResolvePerformanceQueryEXT(reinterpret_cast<const VkSubpassResolvePerformanceQueryEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
                safe_pNext = new MultisampledRenderToSingleSampledInfoEXT(reinterpret_cast<const VkMultisampledRenderToSingleSampledInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceExtendedDynamicState2FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceColorWriteEnableFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
                safe_pNext = new PipelineColorWriteCreateInfoEXT(reinterpret_cast<const VkPipelineColorWriteCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceImageViewMinLodFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
                safe_pNext = new ImageViewMinLodCreateInfoEXT(reinterpret_cast<const VkImageViewMinLodCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMultiDrawFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceMultiDrawPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceMultiDrawPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceImage2DViewOf3DFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderTileImageFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceShaderTileImagePropertiesEXT(reinterpret_cast<const VkPhysicalDeviceShaderTileImagePropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceOpacityMicromapFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceOpacityMicromapPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
                safe_pNext = new AccelerationStructureTrianglesOpacityMicromapEXT(reinterpret_cast<const VkAccelerationStructureTrianglesOpacityMicromapEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDisplacementMicromapFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceDisplacementMicromapPropertiesNV(reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV:
                safe_pNext = new AccelerationStructureTrianglesDisplacementMicromapNV(reinterpret_cast<const VkAccelerationStructureTrianglesDisplacementMicromapNV *>(pNext), copy_state, false);
                break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
                safe_pNext = new PhysicalDeviceClusterCullingShaderFeaturesHUAWEI(reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
                safe_pNext = new PhysicalDeviceClusterCullingShaderPropertiesHUAWEI(reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI:
                safe_pNext = new PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceBorderColorSwizzleFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
                safe_pNext = new SamplerBorderColorComponentMappingCreateInfoEXT(reinterpret_cast<const VkSamplerBorderColorComponentMappingCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
                safe_pNext = new PhysicalDeviceShaderCorePropertiesARM(reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM:
                safe_pNext = new DeviceQueueShaderCoreControlCreateInfoARM(reinterpret_cast<const VkDeviceQueueShaderCoreControlCreateInfoARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
                safe_pNext = new PhysicalDeviceSchedulingControlsFeaturesARM(reinterpret_cast<const VkPhysicalDeviceSchedulingControlsFeaturesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM:
                safe_pNext = new PhysicalDeviceSchedulingControlsPropertiesARM(reinterpret_cast<const VkPhysicalDeviceSchedulingControlsPropertiesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceImageSlicedViewOf3DFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
                safe_pNext = new ImageViewSlicedCreateInfoEXT(reinterpret_cast<const VkImageViewSlicedCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
                safe_pNext = new PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(reinterpret_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDepthClampZeroOneFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceNonSeamlessCubeMapFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
                safe_pNext = new PhysicalDeviceRenderPassStripedFeaturesARM(reinterpret_cast<const VkPhysicalDeviceRenderPassStripedFeaturesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM:
                safe_pNext = new PhysicalDeviceRenderPassStripedPropertiesARM(reinterpret_cast<const VkPhysicalDeviceRenderPassStripedPropertiesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM:
                safe_pNext = new RenderPassStripeBeginInfoARM(reinterpret_cast<const VkRenderPassStripeBeginInfoARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM:
                safe_pNext = new RenderPassStripeSubmitInfoARM(reinterpret_cast<const VkRenderPassStripeSubmitInfoARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
                safe_pNext = new PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
                safe_pNext = new SubpassFragmentDensityMapOffsetEndInfoQCOM(reinterpret_cast<const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
                safe_pNext = new PhysicalDeviceCopyMemoryIndirectFeaturesNV(reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceCopyMemoryIndirectPropertiesNV(reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
                safe_pNext = new PhysicalDeviceMemoryDecompressionFeaturesNV(reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceMemoryDecompressionPropertiesNV(reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
                safe_pNext = new ComputePipelineIndirectBufferInfoNV(reinterpret_cast<const VkComputePipelineIndirectBufferInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
                safe_pNext = new PhysicalDeviceLinearColorAttachmentFeaturesNV(reinterpret_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
                safe_pNext = new ImageViewSampleWeightCreateInfoQCOM(reinterpret_cast<const VkImageViewSampleWeightCreateInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceImageProcessingFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
                safe_pNext = new PhysicalDeviceImageProcessingPropertiesQCOM(reinterpret_cast<const VkPhysicalDeviceImageProcessingPropertiesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceNestedCommandBufferFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceNestedCommandBufferPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
                safe_pNext = new ExternalMemoryAcquireUnmodifiedEXT(reinterpret_cast<const VkExternalMemoryAcquireUnmodifiedEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceExtendedDynamicState3FeaturesEXT(reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceExtendedDynamicState3PropertiesEXT(reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceSubpassMergeFeedbackFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
                safe_pNext = new RenderPassCreationControlEXT(reinterpret_cast<const VkRenderPassCreationControlEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
                safe_pNext = new RenderPassCreationFeedbackCreateInfoEXT(reinterpret_cast<const VkRenderPassCreationFeedbackCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
                safe_pNext = new RenderPassSubpassFeedbackCreateInfoEXT(reinterpret_cast<const VkRenderPassSubpassFeedbackCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG:
                safe_pNext = new DirectDriverLoadingListLUNARG(reinterpret_cast<const VkDirectDriverLoadingListLUNARG *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderModuleIdentifierFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceShaderModuleIdentifierPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
                safe_pNext = new PipelineShaderStageModuleIdentifierCreateInfoEXT(reinterpret_cast<const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
                safe_pNext = new PhysicalDeviceOpticalFlowFeaturesNV(reinterpret_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceOpticalFlowPropertiesNV(reinterpret_cast<const VkPhysicalDeviceOpticalFlowPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
                safe_pNext = new OpticalFlowImageFormatInfoNV(reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
                safe_pNext = new OpticalFlowSessionCreatePrivateDataInfoNV(reinterpret_cast<const VkOpticalFlowSessionCreatePrivateDataInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceLegacyDitheringFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePipelineProtectedAccessFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
                safe_pNext = new PhysicalDeviceExternalFormatResolveFeaturesANDROID(reinterpret_cast<const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID:
                safe_pNext = new PhysicalDeviceExternalFormatResolvePropertiesANDROID(reinterpret_cast<const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID:
                safe_pNext = new AndroidHardwareBufferFormatResolvePropertiesANDROID(reinterpret_cast<const VkAndroidHardwareBufferFormatResolvePropertiesANDROID *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceShaderObjectFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceShaderObjectPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceShaderObjectPropertiesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceTilePropertiesFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
                safe_pNext = new PhysicalDeviceAmigoProfilingFeaturesSEC(reinterpret_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC:
                safe_pNext = new AmigoProfilingSubmitInfoSEC(reinterpret_cast<const VkAmigoProfilingSubmitInfoSEC *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceRayTracingInvocationReorderPropertiesNV(reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
                safe_pNext = new PhysicalDeviceRayTracingInvocationReorderFeaturesNV(reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
                safe_pNext = new PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV:
                safe_pNext = new PhysicalDeviceExtendedSparseAddressSpacePropertiesNV(reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT:
                safe_pNext = new LayerSettingsCreateInfoEXT(reinterpret_cast<const VkLayerSettingsCreateInfoEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
                safe_pNext = new PhysicalDeviceShaderCoreBuiltinsFeaturesARM(reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
                safe_pNext = new PhysicalDeviceShaderCoreBuiltinsPropertiesARM(reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
                safe_pNext = new PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(reinterpret_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV:
                safe_pNext = new LatencySubmissionPresentIdNV(reinterpret_cast<const VkLatencySubmissionPresentIdNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV:
                safe_pNext = new SwapchainLatencyCreateInfoNV(reinterpret_cast<const VkSwapchainLatencyCreateInfoNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV:
                safe_pNext = new LatencySurfaceCapabilitiesNV(reinterpret_cast<const VkLatencySurfaceCapabilitiesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
                safe_pNext = new MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(reinterpret_cast<const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
                safe_pNext = new PhysicalDevicePerStageDescriptorSetFeaturesNV(reinterpret_cast<const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceImageProcessing2FeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
                safe_pNext = new PhysicalDeviceImageProcessing2PropertiesQCOM(reinterpret_cast<const VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
                safe_pNext = new SamplerBlockMatchWindowCreateInfoQCOM(reinterpret_cast<const VkSamplerBlockMatchWindowCreateInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceCubicWeightsFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
                safe_pNext = new SamplerCubicWeightsCreateInfoQCOM(reinterpret_cast<const VkSamplerCubicWeightsCreateInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
                safe_pNext = new BlitImageCubicWeightsInfoQCOM(reinterpret_cast<const VkBlitImageCubicWeightsInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceYcbcrDegammaFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
                safe_pNext = new SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(reinterpret_cast<const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
                safe_pNext = new PhysicalDeviceCubicClampFeaturesQCOM(reinterpret_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(pNext), copy_state, false);
                break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX:
                safe_pNext = new ScreenBufferFormatPropertiesQNX(reinterpret_cast<const VkScreenBufferFormatPropertiesQNX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX:
                safe_pNext = new ImportScreenBufferInfoQNX(reinterpret_cast<const VkImportScreenBufferInfoQNX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
                safe_pNext = new ExternalFormatQNX(reinterpret_cast<const VkExternalFormatQNX *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
                safe_pNext = new PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(reinterpret_cast<const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *>(pNext), copy_state, false);
                break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
                safe_pNext = new PhysicalDeviceLayeredDriverPropertiesMSFT(reinterpret_cast<const VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
                safe_pNext = new PhysicalDeviceDescriptorPoolOverallocationFeaturesNV(reinterpret_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
                safe_pNext = new PhysicalDeviceRawAccessChainsFeaturesNV(reinterpret_cast<const VkPhysicalDeviceRawAccessChainsFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
                safe_pNext = new PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
                safe_pNext = new PhysicalDeviceRayTracingValidationFeaturesNV(reinterpret_cast<const VkPhysicalDeviceRayTracingValidationFeaturesNV *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
                safe_pNext = new WriteDescriptorSetAccelerationStructureKHR(reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceAccelerationStructureFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceAccelerationStructurePropertiesKHR(reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceRayTracingPipelineFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
                safe_pNext = new PhysicalDeviceRayTracingPipelinePropertiesKHR(reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
                safe_pNext = new PhysicalDeviceRayQueryFeaturesKHR(reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
                safe_pNext = new PhysicalDeviceMeshShaderFeaturesEXT(reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT *>(pNext), copy_state, false);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
                safe_pNext = new PhysicalDeviceMeshShaderPropertiesEXT(reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesEXT *>(pNext), copy_state, false);
                break;

            default: // Encountered an unknown sType -- skip (do not copy) this entry in the chain
                // If sType is in custom list, construct blind copy
                for (auto item : custom_stype_info) {
                    if (item.first == header->sType) {
                        safe_pNext = malloc(item.second);
                        memcpy(safe_pNext, header, item.second);
                    }
                }
                break;
        }
        if (!first_pNext) {
            first_pNext = safe_pNext;
        }
        pNext = header->pNext;
        if (prev_pNext && safe_pNext) {
            prev_pNext->pNext = (VkBaseOutStructure*)safe_pNext;
        }
        if (safe_pNext) {
            prev_pNext = (VkBaseOutStructure*)safe_pNext;
        }
        safe_pNext = nullptr;
    }

    return first_pNext;
}

void FreePnextChain(const void *pNext) {
    if (!pNext) return;

    auto header = reinterpret_cast<const VkBaseOutStructure *>(pNext);

    switch (header->sType) {
        // Special-case Loader Instance Struct passed to/from layer in pNext chain
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            FreePnextChain(header->pNext);
            delete reinterpret_cast<const VkLayerInstanceCreateInfo *>(pNext);
            break;
        // Special-case Loader Device Struct passed to/from layer in pNext chain
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            FreePnextChain(header->pNext);
            delete reinterpret_cast<const VkLayerDeviceCreateInfo *>(pNext);
            break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            delete reinterpret_cast<const ShaderModuleCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            delete reinterpret_cast<const PipelineLayoutCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceSubgroupProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            delete reinterpret_cast<const PhysicalDevice16BitStorageFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            delete reinterpret_cast<const MemoryDedicatedRequirements *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            delete reinterpret_cast<const MemoryDedicatedAllocateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            delete reinterpret_cast<const MemoryAllocateFlagsInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            delete reinterpret_cast<const DeviceGroupRenderPassBeginInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            delete reinterpret_cast<const DeviceGroupCommandBufferBeginInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            delete reinterpret_cast<const DeviceGroupSubmitInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            delete reinterpret_cast<const DeviceGroupBindSparseInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            delete reinterpret_cast<const BindBufferMemoryDeviceGroupInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            delete reinterpret_cast<const BindImageMemoryDeviceGroupInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            delete reinterpret_cast<const DeviceGroupDeviceCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            delete reinterpret_cast<const PhysicalDeviceFeatures2 *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            delete reinterpret_cast<const PhysicalDevicePointClippingProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            delete reinterpret_cast<const RenderPassInputAttachmentAspectCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            delete reinterpret_cast<const ImageViewUsageCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            delete reinterpret_cast<const PipelineTessellationDomainOriginStateCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            delete reinterpret_cast<const RenderPassMultiviewCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceMultiviewFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceMultiviewProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceVariablePointersFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceProtectedMemoryFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceProtectedMemoryProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            delete reinterpret_cast<const ProtectedSubmitInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            delete reinterpret_cast<const SamplerYcbcrConversionInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            delete reinterpret_cast<const BindImagePlaneMemoryInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            delete reinterpret_cast<const ImagePlaneMemoryRequirementsInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceSamplerYcbcrConversionFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            delete reinterpret_cast<const SamplerYcbcrConversionImageFormatProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            delete reinterpret_cast<const PhysicalDeviceExternalImageFormatInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            delete reinterpret_cast<const ExternalImageFormatProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceIDProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            delete reinterpret_cast<const ExternalMemoryImageCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            delete reinterpret_cast<const ExternalMemoryBufferCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            delete reinterpret_cast<const ExportMemoryAllocateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            delete reinterpret_cast<const ExportFenceCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            delete reinterpret_cast<const ExportSemaphoreCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceMaintenance3Properties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderDrawParametersFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceVulkan11Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceVulkan11Properties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceVulkan12Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceVulkan12Properties *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            delete reinterpret_cast<const ImageFormatListCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
            delete reinterpret_cast<const PhysicalDevice8BitStorageFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceDriverProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderAtomicInt64Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderFloat16Int8Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceFloatControlsProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
            delete reinterpret_cast<const DescriptorSetLayoutBindingFlagsCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceDescriptorIndexingFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceDescriptorIndexingProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
            delete reinterpret_cast<const DescriptorSetVariableDescriptorCountAllocateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
            delete reinterpret_cast<const DescriptorSetVariableDescriptorCountLayoutSupport *>(header);
            break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
            delete reinterpret_cast<const SubpassDescriptionDepthStencilResolve *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceDepthStencilResolveProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceScalarBlockLayoutFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            delete reinterpret_cast<const ImageStencilUsageCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO:
            delete reinterpret_cast<const SamplerReductionModeCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceSamplerFilterMinmaxProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceVulkanMemoryModelFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceImagelessFramebufferFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
            delete reinterpret_cast<const FramebufferAttachmentsCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
            delete reinterpret_cast<const RenderPassAttachmentBeginInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceUniformBufferStandardLayoutFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
            delete reinterpret_cast<const AttachmentReferenceStencilLayout *>(header);
            break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
            delete reinterpret_cast<const AttachmentDescriptionStencilLayout *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceHostQueryResetFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceTimelineSemaphoreFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceTimelineSemaphoreProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            delete reinterpret_cast<const SemaphoreTypeCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            delete reinterpret_cast<const TimelineSemaphoreSubmitInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceBufferDeviceAddressFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            delete reinterpret_cast<const BufferOpaqueCaptureAddressCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
            delete reinterpret_cast<const MemoryOpaqueCaptureAddressAllocateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceVulkan13Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceVulkan13Properties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            delete reinterpret_cast<const PipelineCreationFeedbackCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderTerminateInvocationFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            delete reinterpret_cast<const PhysicalDevicePrivateDataFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
            delete reinterpret_cast<const DevicePrivateDataCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            delete reinterpret_cast<const PhysicalDevicePipelineCreationCacheControlFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
            delete reinterpret_cast<const MemoryBarrier2 *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceSynchronization2Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceImageRobustnessFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceSubgroupSizeControlFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceSubgroupSizeControlProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
            delete reinterpret_cast<const PipelineShaderStageRequiredSubgroupSizeCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceInlineUniformBlockFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceInlineUniformBlockProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
            delete reinterpret_cast<const WriteDescriptorSetInlineUniformBlock *>(header);
            break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
            delete reinterpret_cast<const DescriptorPoolInlineUniformBlockCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceTextureCompressionASTCHDRFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
            delete reinterpret_cast<const PipelineRenderingCreateInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceDynamicRenderingFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
            delete reinterpret_cast<const CommandBufferInheritanceRenderingInfo *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceShaderIntegerDotProductFeatures *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceShaderIntegerDotProductProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceTexelBufferAlignmentProperties *>(header);
            break;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
            delete reinterpret_cast<const FormatProperties3 *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            delete reinterpret_cast<const PhysicalDeviceMaintenance4Features *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
            delete reinterpret_cast<const PhysicalDeviceMaintenance4Properties *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            delete reinterpret_cast<const ImageSwapchainCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            delete reinterpret_cast<const BindImageMemorySwapchainInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            delete reinterpret_cast<const DeviceGroupPresentInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            delete reinterpret_cast<const DeviceGroupSwapchainCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            delete reinterpret_cast<const DisplayPresentInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
            delete reinterpret_cast<const QueueFamilyQueryResultStatusPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
            delete reinterpret_cast<const QueueFamilyVideoPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            delete reinterpret_cast<const VideoProfileListInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoDecodeCapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeUsageInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoEncodeH264CapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR:
            delete reinterpret_cast<const VideoEncodeH264QualityLevelPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264SessionCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264SessionParametersAddInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264SessionParametersCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264SessionParametersGetInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264SessionParametersFeedbackInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264PictureInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264DpbSlotInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264ProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264RateControlInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264RateControlLayerInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH264GopRemainingFrameInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoEncodeH265CapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265SessionCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR:
            delete reinterpret_cast<const VideoEncodeH265QualityLevelPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265SessionParametersAddInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265SessionParametersCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265SessionParametersGetInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265SessionParametersFeedbackInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265PictureInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265DpbSlotInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265ProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265RateControlInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265RateControlLayerInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeH265GopRemainingFrameInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH264ProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoDecodeH264CapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH264SessionParametersAddInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH264SessionParametersCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH264PictureInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH264DpbSlotInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            delete reinterpret_cast<const RenderingFragmentShadingRateAttachmentInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
            delete reinterpret_cast<const RenderingFragmentDensityMapAttachmentInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
            delete reinterpret_cast<const AttachmentSampleCountInfoAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
            delete reinterpret_cast<const MultiviewPerViewAttributesInfoNVX *>(header);
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            delete reinterpret_cast<const ImportMemoryWin32HandleInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            delete reinterpret_cast<const ExportMemoryWin32HandleInfoKHR *>(header);
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            delete reinterpret_cast<const ImportMemoryFdInfoKHR *>(header);
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            delete reinterpret_cast<const Win32KeyedMutexAcquireReleaseInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            delete reinterpret_cast<const ExportSemaphoreWin32HandleInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            delete reinterpret_cast<const D3D12FenceSubmitInfoKHR *>(header);
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDevicePushDescriptorPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            delete reinterpret_cast<const PresentRegionsKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            delete reinterpret_cast<const SharedPresentSurfaceCapabilitiesKHR *>(header);
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            delete reinterpret_cast<const ExportFenceWin32HandleInfoKHR *>(header);
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDevicePerformanceQueryFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDevicePerformanceQueryPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
            delete reinterpret_cast<const QueryPoolPerformanceCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            delete reinterpret_cast<const PerformanceQuerySubmitInfoKHR *>(header);
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDevicePortabilitySubsetFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDevicePortabilitySubsetPropertiesKHR *>(header);
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderClockFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH265ProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoDecodeH265CapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH265SessionParametersAddInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH265SessionParametersCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH265PictureInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeH265DpbSlotInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR:
            delete reinterpret_cast<const DeviceQueueGlobalPriorityCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
            delete reinterpret_cast<const QueueFamilyGlobalPriorityPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            delete reinterpret_cast<const FragmentShadingRateAttachmentInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
            delete reinterpret_cast<const PipelineFragmentShadingRateStateCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceFragmentShadingRateFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceFragmentShadingRatePropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO_KHR:
            delete reinterpret_cast<const RenderingAttachmentLocationInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR:
            delete reinterpret_cast<const RenderingInputAttachmentIndexInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderQuadControlFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            delete reinterpret_cast<const SurfaceProtectedCapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDevicePresentWaitFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR:
            delete reinterpret_cast<const PipelineLibraryCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PRESENT_ID_KHR:
            delete reinterpret_cast<const PresentIdKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDevicePresentIdFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoEncodeCapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR:
            delete reinterpret_cast<const QueryPoolVideoEncodeFeedbackCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeUsageInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeRateControlInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
            delete reinterpret_cast<const VideoEncodeQualityLevelInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
            delete reinterpret_cast<const QueueFamilyCheckpointProperties2NV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceMaintenance5FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceMaintenance5PropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR:
            delete reinterpret_cast<const PipelineCreateFlags2CreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR:
            delete reinterpret_cast<const BufferUsageFlags2CreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceCooperativeMatrixFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceCooperativeMatrixPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeAV1ProfileInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR:
            delete reinterpret_cast<const VideoDecodeAV1CapabilitiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeAV1SessionParametersCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeAV1PictureInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR:
            delete reinterpret_cast<const VideoDecodeAV1DpbSlotInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceVideoMaintenance1FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR:
            delete reinterpret_cast<const VideoInlineQueryInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR:
            delete reinterpret_cast<const PipelineVertexInputDivisorStateCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderFloatControls2FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceIndexTypeUint8FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceLineRasterizationFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceLineRasterizationPropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR:
            delete reinterpret_cast<const PipelineRasterizationLineStateCreateInfoKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceShaderExpectAssumeFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceMaintenance6FeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceMaintenance6PropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS_KHR:
            delete reinterpret_cast<const BindMemoryStatusKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            delete reinterpret_cast<const DebugReportCallbackCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            delete reinterpret_cast<const PipelineRasterizationStateRasterizationOrderAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            delete reinterpret_cast<const DedicatedAllocationImageCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            delete reinterpret_cast<const DedicatedAllocationBufferCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            delete reinterpret_cast<const DedicatedAllocationMemoryAllocateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceTransformFeedbackFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceTransformFeedbackPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineRasterizationStateStreamCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            delete reinterpret_cast<const TextureLODGatherFormatPropertiesAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceCornerSampledImageFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            delete reinterpret_cast<const ExternalMemoryImageCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            delete reinterpret_cast<const ExportMemoryAllocateInfoNV *>(header);
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            delete reinterpret_cast<const ImportMemoryWin32HandleInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            delete reinterpret_cast<const ExportMemoryWin32HandleInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            delete reinterpret_cast<const Win32KeyedMutexAcquireReleaseInfoNV *>(header);
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            delete reinterpret_cast<const ValidationFlagsEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            delete reinterpret_cast<const ImageViewASTCDecodeModeEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceASTCDecodeFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePipelineRobustnessFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDevicePipelineRobustnessPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineRobustnessCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceConditionalRenderingFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            delete reinterpret_cast<const CommandBufferInheritanceConditionalRenderingInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineViewportWScalingStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            delete reinterpret_cast<const SwapchainCounterCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            delete reinterpret_cast<const PresentTimesInfoGOOGLE *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            delete reinterpret_cast<const PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineViewportSwizzleStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDiscardRectanglePropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineDiscardRectangleStateCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceConservativeRasterizationPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineRasterizationConservativeStateCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDepthClipEnableFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineRasterizationDepthClipStateCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
            delete reinterpret_cast<const PhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            delete reinterpret_cast<const DebugUtilsObjectNameInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            delete reinterpret_cast<const DebugUtilsMessengerCreateInfoEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            delete reinterpret_cast<const AndroidHardwareBufferUsageANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            delete reinterpret_cast<const AndroidHardwareBufferFormatPropertiesANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            delete reinterpret_cast<const ImportAndroidHardwareBufferInfoANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            delete reinterpret_cast<const ExternalFormatANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID:
            delete reinterpret_cast<const AndroidHardwareBufferFormatProperties2ANDROID *>(header);
            break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX:
            delete reinterpret_cast<const PhysicalDeviceShaderEnqueueFeaturesAMDX *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX:
            delete reinterpret_cast<const PhysicalDeviceShaderEnqueuePropertiesAMDX *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX:
            delete reinterpret_cast<const PipelineShaderStageNodeCreateInfoAMDX *>(header);
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            delete reinterpret_cast<const SampleLocationsInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            delete reinterpret_cast<const RenderPassSampleLocationsBeginInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineSampleLocationsStateCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceSampleLocationsPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineColorBlendAdvancedStateCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineCoverageToColorStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineCoverageModulationStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceShaderSMBuiltinsPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceShaderSMBuiltinsFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            delete reinterpret_cast<const DrmFormatModifierPropertiesListEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageDrmFormatModifierInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            delete reinterpret_cast<const ImageDrmFormatModifierListCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            delete reinterpret_cast<const ImageDrmFormatModifierExplicitCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
            delete reinterpret_cast<const DrmFormatModifierPropertiesList2EXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            delete reinterpret_cast<const ShaderModuleValidationCacheCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineViewportShadingRateImageStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceShadingRateImageFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceShadingRateImagePropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineViewportCoarseSampleOrderStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            delete reinterpret_cast<const WriteDescriptorSetAccelerationStructureNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceRayTracingPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineRepresentativeFragmentTestStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageViewImageFormatInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            delete reinterpret_cast<const FilterCubicImageViewImageFormatPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            delete reinterpret_cast<const ImportMemoryHostPointerInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceExternalMemoryHostPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            delete reinterpret_cast<const PipelineCompilerControlCreateInfoAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            delete reinterpret_cast<const PhysicalDeviceShaderCorePropertiesAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            delete reinterpret_cast<const DeviceMemoryOverallocationCreateInfoAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            delete reinterpret_cast<const PresentFrameTokenGGP *>(header);
            break;
#endif  // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceComputeShaderDerivativesFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceMeshShaderFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceMeshShaderPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceShaderImageFootprintFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineViewportExclusiveScissorStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceExclusiveScissorFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            delete reinterpret_cast<const QueueFamilyCheckpointPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            delete reinterpret_cast<const PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
            delete reinterpret_cast<const QueryPoolPerformanceQueryCreateInfoINTEL *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDevicePCIBusInfoPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            delete reinterpret_cast<const DisplayNativeHdrSurfaceCapabilitiesAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            delete reinterpret_cast<const SwapchainDisplayNativeHdrCreateInfoAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMapFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMapPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            delete reinterpret_cast<const RenderPassFragmentDensityMapCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            delete reinterpret_cast<const PhysicalDeviceShaderCoreProperties2AMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            delete reinterpret_cast<const PhysicalDeviceCoherentMemoryFeaturesAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMemoryBudgetPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMemoryPriorityFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            delete reinterpret_cast<const MemoryPriorityAllocateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceBufferDeviceAddressFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            delete reinterpret_cast<const BufferDeviceAddressCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            delete reinterpret_cast<const ValidationFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceCooperativeMatrixFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceCooperativeMatrixPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceCoverageReductionModeFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineCoverageReductionStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceYcbcrImageArraysFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceProvokingVertexFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceProvokingVertexPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineRasterizationProvokingVertexStateCreateInfoEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            delete reinterpret_cast<const SurfaceFullScreenExclusiveInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            delete reinterpret_cast<const SurfaceCapabilitiesFullScreenExclusiveEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            delete reinterpret_cast<const SurfaceFullScreenExclusiveWin32InfoEXT *>(header);
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderAtomicFloatFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceExtendedDynamicStateFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceHostImageCopyFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceHostImageCopyPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT:
            delete reinterpret_cast<const SubresourceHostMemcpySizeEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT:
            delete reinterpret_cast<const HostImageCopyDevicePerformanceQueryEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMapMemoryPlacedFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMapMemoryPlacedPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT:
            delete reinterpret_cast<const MemoryMapPlacedInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT:
            delete reinterpret_cast<const SurfacePresentModeEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
            delete reinterpret_cast<const SurfacePresentScalingCapabilitiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
            delete reinterpret_cast<const SurfacePresentModeCompatibilityEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
            delete reinterpret_cast<const SwapchainPresentFenceInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
            delete reinterpret_cast<const SwapchainPresentModesCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
            delete reinterpret_cast<const SwapchainPresentModeInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
            delete reinterpret_cast<const SwapchainPresentScalingCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
            delete reinterpret_cast<const GraphicsPipelineShaderGroupsCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceInheritedViewportScissorFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
            delete reinterpret_cast<const CommandBufferInheritanceViewportScissorInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
            delete reinterpret_cast<const RenderPassTransformBeginInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
            delete reinterpret_cast<const CommandBufferInheritanceRenderPassTransformInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDepthBiasControlFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
            delete reinterpret_cast<const DepthBiasRepresentationInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDeviceMemoryReportFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
            delete reinterpret_cast<const DeviceDeviceMemoryReportCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceRobustness2FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceRobustness2PropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
            delete reinterpret_cast<const SamplerCustomBorderColorCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceCustomBorderColorPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceCustomBorderColorFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDevicePresentBarrierFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
            delete reinterpret_cast<const SurfaceCapabilitiesPresentBarrierNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
            delete reinterpret_cast<const SwapchainPresentBarrierCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDiagnosticsConfigFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
            delete reinterpret_cast<const DeviceDiagnosticsConfigCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceCudaKernelLaunchFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceCudaKernelLaunchPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV:
            delete reinterpret_cast<const QueryLowLatencySupportNV *>(header);
            break;
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            delete reinterpret_cast<const ExportMetalObjectCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT:
            delete reinterpret_cast<const ExportMetalDeviceInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT:
            delete reinterpret_cast<const ExportMetalCommandQueueInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT:
            delete reinterpret_cast<const ExportMetalBufferInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT:
            delete reinterpret_cast<const ImportMetalBufferInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT:
            delete reinterpret_cast<const ExportMetalTextureInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT:
            delete reinterpret_cast<const ImportMetalTextureInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT:
            delete reinterpret_cast<const ExportMetalIOSurfaceInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT:
            delete reinterpret_cast<const ImportMetalIOSurfaceInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT:
            delete reinterpret_cast<const ExportMetalSharedEventInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT:
            delete reinterpret_cast<const ImportMetalSharedEventInfoEXT *>(header);
            break;
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDescriptorBufferPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDescriptorBufferFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT:
            delete reinterpret_cast<const DescriptorBufferBindingPushDescriptorBufferHandleEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            delete reinterpret_cast<const OpaqueCaptureDescriptorDataCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
            delete reinterpret_cast<const GraphicsPipelineLibraryCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
            delete reinterpret_cast<const PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
            delete reinterpret_cast<const PipelineFragmentShadingRateEnumStateCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
            delete reinterpret_cast<const AccelerationStructureGeometryMotionTrianglesDataNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
            delete reinterpret_cast<const AccelerationStructureMotionInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceRayTracingMotionBlurFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMap2FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMap2PropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
            delete reinterpret_cast<const CopyCommandTransformInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageCompressionControlFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
            delete reinterpret_cast<const ImageCompressionControlEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
            delete reinterpret_cast<const ImageCompressionPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevice4444FormatsFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFaultFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
            delete reinterpret_cast<const MutableDescriptorTypeCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDrmPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceAddressBindingReportFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
            delete reinterpret_cast<const DeviceAddressBindingCallbackDataEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDepthClipControlFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineViewportDepthClipControlCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA:
            delete reinterpret_cast<const ImportMemoryZirconHandleInfoFUCHSIA *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA:
            delete reinterpret_cast<const ImportMemoryBufferCollectionFUCHSIA *>(header);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA:
            delete reinterpret_cast<const BufferCollectionImageCreateInfoFUCHSIA *>(header);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA:
            delete reinterpret_cast<const BufferCollectionBufferCreateInfoFUCHSIA *>(header);
            break;
#endif  // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI:
            delete reinterpret_cast<const SubpassShadingPipelineCreateInfoHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceSubpassShadingFeaturesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceSubpassShadingPropertiesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceInvocationMaskFeaturesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceExternalMemoryRDMAFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePipelinePropertiesFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceFrameBoundaryFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            delete reinterpret_cast<const FrameBoundaryEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
            delete reinterpret_cast<const SubpassResolvePerformanceQueryEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
            delete reinterpret_cast<const MultisampledRenderToSingleSampledInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceExtendedDynamicState2FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceColorWriteEnableFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineColorWriteCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageViewMinLodFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
            delete reinterpret_cast<const ImageViewMinLodCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMultiDrawFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMultiDrawPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceImage2DViewOf3DFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderTileImageFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderTileImagePropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceOpacityMicromapFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceOpacityMicromapPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
            delete reinterpret_cast<const AccelerationStructureTrianglesOpacityMicromapEXT *>(header);
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDisplacementMicromapFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceDisplacementMicromapPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV:
            delete reinterpret_cast<const AccelerationStructureTrianglesDisplacementMicromapNV *>(header);
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI:
            delete reinterpret_cast<const PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceBorderColorSwizzleFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
            delete reinterpret_cast<const SamplerBorderColorComponentMappingCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
            delete reinterpret_cast<const PhysicalDeviceShaderCorePropertiesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM:
            delete reinterpret_cast<const DeviceQueueShaderCoreControlCreateInfoARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
            delete reinterpret_cast<const PhysicalDeviceSchedulingControlsFeaturesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM:
            delete reinterpret_cast<const PhysicalDeviceSchedulingControlsPropertiesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
            delete reinterpret_cast<const ImageViewSlicedCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
            delete reinterpret_cast<const PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDepthClampZeroOneFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
            delete reinterpret_cast<const PhysicalDeviceRenderPassStripedFeaturesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM:
            delete reinterpret_cast<const PhysicalDeviceRenderPassStripedPropertiesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM:
            delete reinterpret_cast<const RenderPassStripeBeginInfoARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM:
            delete reinterpret_cast<const RenderPassStripeSubmitInfoARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
            delete reinterpret_cast<const SubpassFragmentDensityMapOffsetEndInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceCopyMemoryIndirectFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceCopyMemoryIndirectPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceMemoryDecompressionFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceMemoryDecompressionPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
            delete reinterpret_cast<const ComputePipelineIndirectBufferInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceLinearColorAttachmentFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
            delete reinterpret_cast<const ImageViewSampleWeightCreateInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceImageProcessingFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceImageProcessingPropertiesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceNestedCommandBufferFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceNestedCommandBufferPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            delete reinterpret_cast<const ExternalMemoryAcquireUnmodifiedEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceExtendedDynamicState3FeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceExtendedDynamicState3PropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
            delete reinterpret_cast<const RenderPassCreationControlEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
            delete reinterpret_cast<const RenderPassCreationFeedbackCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
            delete reinterpret_cast<const RenderPassSubpassFeedbackCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG:
            delete reinterpret_cast<const DirectDriverLoadingListLUNARG *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
            delete reinterpret_cast<const PipelineShaderStageModuleIdentifierCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceOpticalFlowFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceOpticalFlowPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
            delete reinterpret_cast<const OpticalFlowImageFormatInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
            delete reinterpret_cast<const OpticalFlowSessionCreatePrivateDataInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceLegacyDitheringFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePipelineProtectedAccessFeaturesEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
            delete reinterpret_cast<const PhysicalDeviceExternalFormatResolveFeaturesANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            delete reinterpret_cast<const PhysicalDeviceExternalFormatResolvePropertiesANDROID *>(header);
            break;
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            delete reinterpret_cast<const AndroidHardwareBufferFormatResolvePropertiesANDROID *>(header);
            break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderObjectFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceShaderObjectPropertiesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceTilePropertiesFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
            delete reinterpret_cast<const PhysicalDeviceAmigoProfilingFeaturesSEC *>(header);
            break;
        case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC:
            delete reinterpret_cast<const AmigoProfilingSubmitInfoSEC *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV:
            delete reinterpret_cast<const PhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT:
            delete reinterpret_cast<const LayerSettingsCreateInfoEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
            delete reinterpret_cast<const PhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
            delete reinterpret_cast<const PhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV:
            delete reinterpret_cast<const LatencySubmissionPresentIdNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV:
            delete reinterpret_cast<const SwapchainLatencyCreateInfoNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV:
            delete reinterpret_cast<const LatencySurfaceCapabilitiesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
            delete reinterpret_cast<const MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDevicePerStageDescriptorSetFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceImageProcessing2FeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceImageProcessing2PropertiesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
            delete reinterpret_cast<const SamplerBlockMatchWindowCreateInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceCubicWeightsFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
            delete reinterpret_cast<const SamplerCubicWeightsCreateInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
            delete reinterpret_cast<const BlitImageCubicWeightsInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceYcbcrDegammaFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
            delete reinterpret_cast<const SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
            delete reinterpret_cast<const PhysicalDeviceCubicClampFeaturesQCOM *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(header);
            break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX:
            delete reinterpret_cast<const ScreenBufferFormatPropertiesQNX *>(header);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX:
            delete reinterpret_cast<const ImportScreenBufferInfoQNX *>(header);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
            delete reinterpret_cast<const ExternalFormatQNX *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
            delete reinterpret_cast<const PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *>(header);
            break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
            delete reinterpret_cast<const PhysicalDeviceLayeredDriverPropertiesMSFT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceRawAccessChainsFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
            delete reinterpret_cast<const PhysicalDeviceRayTracingValidationFeaturesNV *>(header);
            break;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
            delete reinterpret_cast<const WriteDescriptorSetAccelerationStructureKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceAccelerationStructureFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceAccelerationStructurePropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceRayTracingPipelineFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
            delete reinterpret_cast<const PhysicalDeviceRayTracingPipelinePropertiesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
            delete reinterpret_cast<const PhysicalDeviceRayQueryFeaturesKHR *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMeshShaderFeaturesEXT *>(header);
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
            delete reinterpret_cast<const PhysicalDeviceMeshShaderPropertiesEXT *>(header);
            break;

        default: // Encountered an unknown sType
            // If sType is in custom list, free custom struct memory and clean up
            for (auto item : custom_stype_info) {
                if (item.first == header->sType) {
                    if (header->pNext) {
                        FreePnextChain(header->pNext);
                    }
                    free(const_cast<void *>(pNext));
                    pNext = nullptr;
                    break;
                }
            }
            if (pNext) {
                FreePnextChain(header->pNext);
            }
            break;
    }
}  // clang-format on

}  // namespace safe
}  // namespace vku

// NOLINTEND
