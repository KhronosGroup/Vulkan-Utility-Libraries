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

#include <vulkan/utility/vk_safe_struct.h>
#include <vulkan/utility/vk_struct_helper.hpp>
#include <vulkan/utility/concurrent_unordered_map.h>

#include <cassert>
#include <cstring>

namespace vku {
namespace safe {

std::vector<std::pair<uint32_t, uint32_t>> custom_stype_info{};

struct ASGeomKHRExtraData {
    ASGeomKHRExtraData(uint8_t* alloc, uint32_t primOffset, uint32_t primCount)
        : ptr(alloc), primitiveOffset(primOffset), primitiveCount(primCount) {}
    ~ASGeomKHRExtraData() {
        if (ptr) delete[] ptr;
    }
    uint8_t* ptr;
    uint32_t primitiveOffset;
    uint32_t primitiveCount;
};

vku::concurrent_unordered_map<const AccelerationStructureGeometryKHR*, ASGeomKHRExtraData*, 4> as_geom_khr_host_alloc;

AccelerationStructureGeometryKHR::AccelerationStructureGeometryKHR(const VkAccelerationStructureGeometryKHR* in_struct,
                                                                   const bool is_host,
                                                                   const VkAccelerationStructureBuildRangeInfoKHR* build_range_info,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), geometryType(in_struct->geometryType), geometry(in_struct->geometry), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (is_host && geometryType == VK_GEOMETRY_TYPE_INSTANCES_KHR) {
        if (geometry.instances.arrayOfPointers) {
            size_t pp_array_size = build_range_info->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR*);
            size_t p_array_size = build_range_info->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            size_t array_size = build_range_info->primitiveOffset + pp_array_size + p_array_size;
            uint8_t* allocation = new uint8_t[array_size];
            VkAccelerationStructureInstanceKHR** ppInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR**>(allocation + build_range_info->primitiveOffset);
            VkAccelerationStructureInstanceKHR* pInstances = reinterpret_cast<VkAccelerationStructureInstanceKHR*>(
                allocation + build_range_info->primitiveOffset + pp_array_size);
            for (uint32_t i = 0; i < build_range_info->primitiveCount; ++i) {
                const uint8_t* byte_ptr = reinterpret_cast<const uint8_t*>(in_struct->geometry.instances.data.hostAddress);
                pInstances[i] = *(
                    reinterpret_cast<VkAccelerationStructureInstanceKHR* const*>(byte_ptr + build_range_info->primitiveOffset)[i]);
                ppInstances[i] = &pInstances[i];
            }
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, build_range_info->primitiveOffset, build_range_info->primitiveCount));
        } else {
            const auto primitive_offset = build_range_info->primitiveOffset;
            const auto primitive_count = build_range_info->primitiveCount;
            size_t array_size = primitive_offset + primitive_count * sizeof(VkAccelerationStructureInstanceKHR);
            uint8_t* allocation = new uint8_t[array_size];
            auto host_address = static_cast<const uint8_t*>(in_struct->geometry.instances.data.hostAddress);
            memcpy(allocation + primitive_offset, host_address + primitive_offset,
                   primitive_count * sizeof(VkAccelerationStructureInstanceKHR));
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, build_range_info->primitiveOffset, build_range_info->primitiveCount));
        }
    }
}

AccelerationStructureGeometryKHR::AccelerationStructureGeometryKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR), pNext(nullptr), geometryType(), geometry(), flags() {}

AccelerationStructureGeometryKHR::AccelerationStructureGeometryKHR(const AccelerationStructureGeometryKHR& copy_src) {
    sType = copy_src.sType;
    geometryType = copy_src.geometryType;
    geometry = copy_src.geometry;
    flags = copy_src.flags;

    pNext = SafePnextCopy(copy_src.pNext);
    auto src_iter = as_geom_khr_host_alloc.find(&copy_src);
    if (src_iter != as_geom_khr_host_alloc.end()) {
        auto& src_alloc = src_iter->second;
        if (geometry.instances.arrayOfPointers) {
            size_t pp_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR*);
            size_t p_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            size_t array_size = src_alloc->primitiveOffset + pp_array_size + p_array_size;
            uint8_t* allocation = new uint8_t[array_size];
            VkAccelerationStructureInstanceKHR** ppInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR**>(allocation + src_alloc->primitiveOffset);
            VkAccelerationStructureInstanceKHR* pInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR*>(allocation + src_alloc->primitiveOffset + pp_array_size);
            for (uint32_t i = 0; i < src_alloc->primitiveCount; ++i) {
                pInstances[i] =
                    *(reinterpret_cast<VkAccelerationStructureInstanceKHR* const*>(src_alloc->ptr + src_alloc->primitiveOffset)[i]);
                ppInstances[i] = &pInstances[i];
            }
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        } else {
            size_t array_size = src_alloc->primitiveOffset + src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            uint8_t* allocation = new uint8_t[array_size];
            memcpy(allocation, src_alloc->ptr, array_size);
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        }
    }
}

AccelerationStructureGeometryKHR& AccelerationStructureGeometryKHR::operator=(const AccelerationStructureGeometryKHR& copy_src) {
    if (&copy_src == this) return *this;

    auto iter = as_geom_khr_host_alloc.pop(this);
    if (iter != as_geom_khr_host_alloc.end()) {
        delete iter->second;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    geometryType = copy_src.geometryType;
    geometry = copy_src.geometry;
    flags = copy_src.flags;

    pNext = SafePnextCopy(copy_src.pNext);
    auto src_iter = as_geom_khr_host_alloc.find(&copy_src);
    if (src_iter != as_geom_khr_host_alloc.end()) {
        auto& src_alloc = src_iter->second;
        if (geometry.instances.arrayOfPointers) {
            size_t pp_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR*);
            size_t p_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            size_t array_size = src_alloc->primitiveOffset + pp_array_size + p_array_size;
            uint8_t* allocation = new uint8_t[array_size];
            VkAccelerationStructureInstanceKHR** ppInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR**>(allocation + src_alloc->primitiveOffset);
            VkAccelerationStructureInstanceKHR* pInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR*>(allocation + src_alloc->primitiveOffset + pp_array_size);
            for (uint32_t i = 0; i < src_alloc->primitiveCount; ++i) {
                pInstances[i] =
                    *(reinterpret_cast<VkAccelerationStructureInstanceKHR* const*>(src_alloc->ptr + src_alloc->primitiveOffset)[i]);
                ppInstances[i] = &pInstances[i];
            }
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        } else {
            size_t array_size = src_alloc->primitiveOffset + src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            uint8_t* allocation = new uint8_t[array_size];
            memcpy(allocation, src_alloc->ptr, array_size);
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        }
    }

    return *this;
}

AccelerationStructureGeometryKHR::~AccelerationStructureGeometryKHR() {
    auto iter = as_geom_khr_host_alloc.pop(this);
    if (iter != as_geom_khr_host_alloc.end()) {
        delete iter->second;
    }
    FreePnextChain(pNext);
}

void AccelerationStructureGeometryKHR::initialize(const VkAccelerationStructureGeometryKHR* in_struct, const bool is_host,
                                                  const VkAccelerationStructureBuildRangeInfoKHR* build_range_info,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    auto iter = as_geom_khr_host_alloc.pop(this);
    if (iter != as_geom_khr_host_alloc.end()) {
        delete iter->second;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    geometryType = in_struct->geometryType;
    geometry = in_struct->geometry;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (is_host && geometryType == VK_GEOMETRY_TYPE_INSTANCES_KHR) {
        if (geometry.instances.arrayOfPointers) {
            size_t pp_array_size = build_range_info->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR*);
            size_t p_array_size = build_range_info->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            size_t array_size = build_range_info->primitiveOffset + pp_array_size + p_array_size;
            uint8_t* allocation = new uint8_t[array_size];
            VkAccelerationStructureInstanceKHR** ppInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR**>(allocation + build_range_info->primitiveOffset);
            VkAccelerationStructureInstanceKHR* pInstances = reinterpret_cast<VkAccelerationStructureInstanceKHR*>(
                allocation + build_range_info->primitiveOffset + pp_array_size);
            for (uint32_t i = 0; i < build_range_info->primitiveCount; ++i) {
                const uint8_t* byte_ptr = reinterpret_cast<const uint8_t*>(in_struct->geometry.instances.data.hostAddress);
                pInstances[i] = *(
                    reinterpret_cast<VkAccelerationStructureInstanceKHR* const*>(byte_ptr + build_range_info->primitiveOffset)[i]);
                ppInstances[i] = &pInstances[i];
            }
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, build_range_info->primitiveOffset, build_range_info->primitiveCount));
        } else {
            const auto primitive_offset = build_range_info->primitiveOffset;
            const auto primitive_count = build_range_info->primitiveCount;
            size_t array_size = primitive_offset + primitive_count * sizeof(VkAccelerationStructureInstanceKHR);
            uint8_t* allocation = new uint8_t[array_size];
            auto host_address = static_cast<const uint8_t*>(in_struct->geometry.instances.data.hostAddress);
            memcpy(allocation + primitive_offset, host_address + primitive_offset,
                   primitive_count * sizeof(VkAccelerationStructureInstanceKHR));
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, build_range_info->primitiveOffset, build_range_info->primitiveCount));
        }
    }
}

void AccelerationStructureGeometryKHR::initialize(const AccelerationStructureGeometryKHR* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    geometryType = copy_src->geometryType;
    geometry = copy_src->geometry;
    flags = copy_src->flags;

    pNext = SafePnextCopy(copy_src->pNext);
    auto src_iter = as_geom_khr_host_alloc.find(copy_src);
    if (src_iter != as_geom_khr_host_alloc.end()) {
        auto& src_alloc = src_iter->second;
        if (geometry.instances.arrayOfPointers) {
            size_t pp_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR*);
            size_t p_array_size = src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            size_t array_size = src_alloc->primitiveOffset + pp_array_size + p_array_size;
            uint8_t* allocation = new uint8_t[array_size];
            VkAccelerationStructureInstanceKHR** ppInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR**>(allocation + src_alloc->primitiveOffset);
            VkAccelerationStructureInstanceKHR* pInstances =
                reinterpret_cast<VkAccelerationStructureInstanceKHR*>(allocation + src_alloc->primitiveOffset + pp_array_size);
            for (uint32_t i = 0; i < src_alloc->primitiveCount; ++i) {
                pInstances[i] =
                    *(reinterpret_cast<VkAccelerationStructureInstanceKHR* const*>(src_alloc->ptr + src_alloc->primitiveOffset)[i]);
                ppInstances[i] = &pInstances[i];
            }
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        } else {
            size_t array_size = src_alloc->primitiveOffset + src_alloc->primitiveCount * sizeof(VkAccelerationStructureInstanceKHR);
            uint8_t* allocation = new uint8_t[array_size];
            memcpy(allocation, src_alloc->ptr, array_size);
            geometry.instances.data.hostAddress = allocation;
            as_geom_khr_host_alloc.insert(
                this, new ASGeomKHRExtraData(allocation, src_alloc->primitiveOffset, src_alloc->primitiveCount));
        }
    }
}

void RayTracingPipelineCreateInfoCommon::initialize(const VkRayTracingPipelineCreateInfoNV* pCreateInfo) {
    RayTracingPipelineCreateInfoNV nvStruct;
    nvStruct.initialize(pCreateInfo);

    sType = nvStruct.sType;

    // Take ownership of the pointer and null it out in nvStruct
    pNext = nvStruct.pNext;
    nvStruct.pNext = nullptr;

    flags = nvStruct.flags;
    stageCount = nvStruct.stageCount;

    pStages = nvStruct.pStages;
    nvStruct.pStages = nullptr;

    groupCount = nvStruct.groupCount;
    maxRecursionDepth = nvStruct.maxRecursionDepth;
    layout = nvStruct.layout;
    basePipelineHandle = nvStruct.basePipelineHandle;
    basePipelineIndex = nvStruct.basePipelineIndex;

    assert(pGroups == nullptr);
    if (nvStruct.groupCount && nvStruct.pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].sType = nvStruct.pGroups[i].sType;
            pGroups[i].pNext = nvStruct.pGroups[i].pNext;
            pGroups[i].type = nvStruct.pGroups[i].type;
            pGroups[i].generalShader = nvStruct.pGroups[i].generalShader;
            pGroups[i].closestHitShader = nvStruct.pGroups[i].closestHitShader;
            pGroups[i].anyHitShader = nvStruct.pGroups[i].anyHitShader;
            pGroups[i].intersectionShader = nvStruct.pGroups[i].intersectionShader;
            pGroups[i].intersectionShader = nvStruct.pGroups[i].intersectionShader;
            pGroups[i].pShaderGroupCaptureReplayHandle = nullptr;
        }
    }
}

void RayTracingPipelineCreateInfoCommon::initialize(const VkRayTracingPipelineCreateInfoKHR* pCreateInfo) {
    RayTracingPipelineCreateInfoKHR::initialize(pCreateInfo);
}

DescriptorDataEXT::DescriptorDataEXT(const VkDescriptorDataEXT* in_struct, const VkDescriptorType type,
                                     [[maybe_unused]] PNextCopyState* copy_state) {
    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (type) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            pSampler = new VkSampler(*in_struct->pSampler);
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            pCombinedImageSampler = new VkDescriptorImageInfo(*in_struct->pCombinedImageSampler);
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            pSampledImage = in_struct->pSampledImage ? new VkDescriptorImageInfo(*in_struct->pSampledImage) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            pStorageImage = in_struct->pStorageImage ? new VkDescriptorImageInfo(*in_struct->pStorageImage) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            pInputAttachmentImage = new VkDescriptorImageInfo(*in_struct->pInputAttachmentImage);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            pUniformTexelBuffer =
                in_struct->pUniformTexelBuffer ? new DescriptorAddressInfoEXT(in_struct->pUniformTexelBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            pStorageTexelBuffer =
                in_struct->pStorageTexelBuffer ? new DescriptorAddressInfoEXT(in_struct->pStorageTexelBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            pUniformBuffer = in_struct->pUniformBuffer ? new DescriptorAddressInfoEXT(in_struct->pUniformBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            pStorageBuffer = in_struct->pStorageBuffer ? new DescriptorAddressInfoEXT(in_struct->pStorageBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = in_struct->accelerationStructure;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = in_struct->accelerationStructure;
            break;
        default:
            break;
    }

    *pType = type;
}

DescriptorDataEXT::DescriptorDataEXT() : type_at_end{0} {
    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];
    *pType = VK_DESCRIPTOR_TYPE_MAX_ENUM;
}

DescriptorDataEXT::DescriptorDataEXT(const DescriptorDataEXT& copy_src) {
    pSampler = nullptr;
    pCombinedImageSampler = nullptr;
    pInputAttachmentImage = nullptr;
    pSampledImage = nullptr;
    pStorageImage = nullptr;
    pUniformTexelBuffer = nullptr;
    pStorageTexelBuffer = nullptr;
    pUniformBuffer = nullptr;
    pStorageBuffer = nullptr;
    accelerationStructure = copy_src.accelerationStructure;

    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];
    VkDescriptorType type = *(VkDescriptorType*)&copy_src.type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (type) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            pSampler = new VkSampler(*copy_src.pSampler);
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            pCombinedImageSampler = new VkDescriptorImageInfo(*copy_src.pCombinedImageSampler);
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            pSampledImage = new VkDescriptorImageInfo(*copy_src.pSampledImage);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            pStorageImage = new VkDescriptorImageInfo(*copy_src.pStorageImage);
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            pInputAttachmentImage = new VkDescriptorImageInfo(*copy_src.pInputAttachmentImage);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            pUniformTexelBuffer = new DescriptorAddressInfoEXT(*copy_src.pUniformTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            pStorageTexelBuffer = new DescriptorAddressInfoEXT(*copy_src.pStorageTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            pUniformBuffer = new DescriptorAddressInfoEXT(*copy_src.pUniformBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            pStorageBuffer = new DescriptorAddressInfoEXT(*copy_src.pStorageBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = copy_src.accelerationStructure;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = copy_src.accelerationStructure;
            break;
        default:
            break;
    }

    *pType = type;
}

DescriptorDataEXT& DescriptorDataEXT::operator=(const DescriptorDataEXT& copy_src) {
    if (&copy_src == this) return *this;

    VkDescriptorType& thisType = *(VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (thisType) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            delete pSampler;
            pSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            delete pCombinedImageSampler;
            pCombinedImageSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            delete pSampledImage;
            pSampledImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            delete pStorageImage;
            pStorageImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            delete pInputAttachmentImage;
            pInputAttachmentImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            delete pUniformTexelBuffer;
            pUniformTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            delete pStorageTexelBuffer;
            pStorageTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            delete pUniformBuffer;
            pUniformBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            delete pStorageBuffer;
            pStorageBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = 0ull;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = 0ull;
            break;
        default:
            break;
    }

    thisType = VK_DESCRIPTOR_TYPE_MAX_ENUM;

    pSampler = nullptr;
    pCombinedImageSampler = nullptr;
    pInputAttachmentImage = nullptr;
    pSampledImage = nullptr;
    pStorageImage = nullptr;
    pUniformTexelBuffer = nullptr;
    pStorageTexelBuffer = nullptr;
    pUniformBuffer = nullptr;
    pStorageBuffer = nullptr;
    accelerationStructure = copy_src.accelerationStructure;

    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];
    VkDescriptorType type = *(VkDescriptorType*)&copy_src.type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (type) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            pSampler = new VkSampler(*copy_src.pSampler);
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            pCombinedImageSampler = new VkDescriptorImageInfo(*copy_src.pCombinedImageSampler);
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            pSampledImage = new VkDescriptorImageInfo(*copy_src.pSampledImage);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            pStorageImage = new VkDescriptorImageInfo(*copy_src.pStorageImage);
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            pInputAttachmentImage = new VkDescriptorImageInfo(*copy_src.pInputAttachmentImage);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            pUniformTexelBuffer = new DescriptorAddressInfoEXT(*copy_src.pUniformTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            pStorageTexelBuffer = new DescriptorAddressInfoEXT(*copy_src.pStorageTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            pUniformBuffer = new DescriptorAddressInfoEXT(*copy_src.pUniformBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            pStorageBuffer = new DescriptorAddressInfoEXT(*copy_src.pStorageBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = copy_src.accelerationStructure;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = copy_src.accelerationStructure;
            break;
        default:
            break;
    }

    *pType = type;

    return *this;
}

DescriptorDataEXT::~DescriptorDataEXT() {
    VkDescriptorType& thisType = *(VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (thisType) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            delete pSampler;
            pSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            delete pCombinedImageSampler;
            pCombinedImageSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            delete pSampledImage;
            pSampledImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            delete pStorageImage;
            pStorageImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            delete pInputAttachmentImage;
            pInputAttachmentImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            delete pUniformTexelBuffer;
            pUniformTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            delete pStorageTexelBuffer;
            pStorageTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            delete pUniformBuffer;
            pUniformBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            delete pStorageBuffer;
            pStorageBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = 0ull;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = 0ull;
            break;
        default:
            break;
    }

    thisType = VK_DESCRIPTOR_TYPE_MAX_ENUM;
}

void DescriptorDataEXT::initialize(const VkDescriptorDataEXT* in_struct, const VkDescriptorType type,
                                   [[maybe_unused]] PNextCopyState* copy_state) {
    VkDescriptorType& thisType = *(VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (thisType) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            delete pSampler;
            pSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            delete pCombinedImageSampler;
            pCombinedImageSampler = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            delete pSampledImage;
            pSampledImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            delete pStorageImage;
            pStorageImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            delete pInputAttachmentImage;
            pInputAttachmentImage = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            delete pUniformTexelBuffer;
            pUniformTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            delete pStorageTexelBuffer;
            pStorageTexelBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            delete pUniformBuffer;
            pUniformBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            delete pStorageBuffer;
            pStorageBuffer = nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = 0ull;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = 0ull;
            break;
        default:
            break;
    }

    thisType = VK_DESCRIPTOR_TYPE_MAX_ENUM;
    pSampler = nullptr;
    pCombinedImageSampler = nullptr;
    pInputAttachmentImage = nullptr;
    pSampledImage = nullptr;
    pStorageImage = nullptr;
    pUniformTexelBuffer = nullptr;
    pStorageTexelBuffer = nullptr;
    pUniformBuffer = nullptr;
    pStorageBuffer = nullptr;
    accelerationStructure = in_struct->accelerationStructure;

    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (type) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            pSampler = new VkSampler(*in_struct->pSampler);
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            pCombinedImageSampler = new VkDescriptorImageInfo(*in_struct->pCombinedImageSampler);
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            pSampledImage = in_struct->pSampledImage ? new VkDescriptorImageInfo(*in_struct->pSampledImage) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            pStorageImage = in_struct->pStorageImage ? new VkDescriptorImageInfo(*in_struct->pStorageImage) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            pInputAttachmentImage = new VkDescriptorImageInfo(*in_struct->pInputAttachmentImage);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            pUniformTexelBuffer =
                in_struct->pUniformTexelBuffer ? new DescriptorAddressInfoEXT(in_struct->pUniformTexelBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            pStorageTexelBuffer =
                in_struct->pStorageTexelBuffer ? new DescriptorAddressInfoEXT(in_struct->pStorageTexelBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            pUniformBuffer = in_struct->pUniformBuffer ? new DescriptorAddressInfoEXT(in_struct->pUniformBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            pStorageBuffer = in_struct->pStorageBuffer ? new DescriptorAddressInfoEXT(in_struct->pStorageBuffer) : nullptr;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = in_struct->accelerationStructure;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = in_struct->accelerationStructure;
            break;
        default:
            break;
    }

    *pType = type;
}

void DescriptorDataEXT::initialize(const DescriptorDataEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    pSampler = nullptr;
    pCombinedImageSampler = nullptr;
    pInputAttachmentImage = nullptr;
    pSampledImage = nullptr;
    pStorageImage = nullptr;
    pUniformTexelBuffer = nullptr;
    pStorageTexelBuffer = nullptr;
    pUniformBuffer = nullptr;
    pStorageBuffer = nullptr;
    accelerationStructure = copy_src->accelerationStructure;

    VkDescriptorType* pType = (VkDescriptorType*)&type_at_end[sizeof(VkDescriptorDataEXT)];
    VkDescriptorType type = *(VkDescriptorType*)&copy_src->type_at_end[sizeof(VkDescriptorDataEXT)];

    switch (type) {
        case VK_DESCRIPTOR_TYPE_MAX_ENUM:
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLER:
            pSampler = new VkSampler(*copy_src->pSampler);
            break;
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
            pCombinedImageSampler = new VkDescriptorImageInfo(*copy_src->pCombinedImageSampler);
            break;
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
            pSampledImage = new VkDescriptorImageInfo(*copy_src->pSampledImage);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
            pStorageImage = new VkDescriptorImageInfo(*copy_src->pStorageImage);
            break;
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
            pInputAttachmentImage = new VkDescriptorImageInfo(*copy_src->pInputAttachmentImage);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
            pUniformTexelBuffer = new DescriptorAddressInfoEXT(*copy_src->pUniformTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            pStorageTexelBuffer = new DescriptorAddressInfoEXT(*copy_src->pStorageTexelBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
            pUniformBuffer = new DescriptorAddressInfoEXT(*copy_src->pUniformBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
            pStorageBuffer = new DescriptorAddressInfoEXT(*copy_src->pStorageBuffer);
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR:
            accelerationStructure = copy_src->accelerationStructure;
            break;
        case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV:
            accelerationStructure = copy_src->accelerationStructure;
            break;
        default:
            break;
    }

    *pType = type;
}

GraphicsPipelineCreateInfo::GraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct,
                                                       const bool uses_color_attachment, const bool uses_depthstencil_attachment,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pInputAssemblyState(nullptr),
      pTessellationState(nullptr),
      pViewportState(nullptr),
      pRasterizationState(nullptr),
      pMultisampleState(nullptr),
      pDepthStencilState(nullptr),
      pColorBlendState(nullptr),
      pDynamicState(nullptr),
      layout(in_struct->layout),
      renderPass(in_struct->renderPass),
      subpass(in_struct->subpass),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    const bool is_graphics_library =
        vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(in_struct->pNext) != nullptr;
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new PipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new PipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new PipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = in_struct->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !in_struct->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (in_struct->pViewportState && (has_rasterization || is_graphics_library)) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT) is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR) is_dynamic_scissors = true;
        }
        pViewportState = new PipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new PipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (in_struct->pMultisampleState && (renderPass != VK_NULL_HANDLE || has_rasterization || is_graphics_library))
        pMultisampleState = new PipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && ((has_rasterization && uses_depthstencil_attachment) || is_graphics_library))
        pDepthStencilState = new PipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && ((has_rasterization && uses_color_attachment) || is_graphics_library))
        pColorBlendState = new PipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new PipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = nullptr;
}

GraphicsPipelineCreateInfo::GraphicsPipelineCreateInfo()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      stageCount(),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pInputAssemblyState(nullptr),
      pTessellationState(nullptr),
      pViewportState(nullptr),
      pRasterizationState(nullptr),
      pMultisampleState(nullptr),
      pDepthStencilState(nullptr),
      pColorBlendState(nullptr),
      pDynamicState(nullptr),
      layout(),
      renderPass(),
      subpass(),
      basePipelineHandle(),
      basePipelineIndex() {}

GraphicsPipelineCreateInfo::GraphicsPipelineCreateInfo(const GraphicsPipelineCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src.layout;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;

    pNext = SafePnextCopy(copy_src.pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState)
        pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src.pInputAssemblyState)
        pInputAssemblyState = new PipelineInputAssemblyStateCreateInfo(*copy_src.pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src.pTessellationState && has_tessellation_stage)
        pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src.pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src.pDynamicState && copy_src.pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src.pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src.pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src.pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src.pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src.pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new PipelineViewportStateCreateInfo(*copy_src.pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src.pRasterizationState)
        pRasterizationState = new PipelineRasterizationStateCreateInfo(*copy_src.pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src.pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new PipelineMultisampleStateCreateInfo(*copy_src.pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src.pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new PipelineDepthStencilStateCreateInfo(*copy_src.pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src.pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new PipelineColorBlendStateCreateInfo(*copy_src.pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src.pDynamicState)
        pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src.pDynamicState);
    else
        pDynamicState = nullptr;
}

GraphicsPipelineCreateInfo& GraphicsPipelineCreateInfo::operator=(const GraphicsPipelineCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src.layout;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;

    pNext = SafePnextCopy(copy_src.pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState)
        pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src.pInputAssemblyState)
        pInputAssemblyState = new PipelineInputAssemblyStateCreateInfo(*copy_src.pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src.pTessellationState && has_tessellation_stage)
        pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src.pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src.pDynamicState && copy_src.pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src.pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src.pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src.pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src.pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src.pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new PipelineViewportStateCreateInfo(*copy_src.pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src.pRasterizationState)
        pRasterizationState = new PipelineRasterizationStateCreateInfo(*copy_src.pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src.pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new PipelineMultisampleStateCreateInfo(*copy_src.pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src.pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new PipelineDepthStencilStateCreateInfo(*copy_src.pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src.pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new PipelineColorBlendStateCreateInfo(*copy_src.pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src.pDynamicState)
        pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src.pDynamicState);
    else
        pDynamicState = nullptr;

    return *this;
}

GraphicsPipelineCreateInfo::~GraphicsPipelineCreateInfo() {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
}

void GraphicsPipelineCreateInfo::initialize(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment,
                                            const bool uses_depthstencil_attachment, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = in_struct->layout;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    const bool is_graphics_library =
        vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(in_struct->pNext) != nullptr;
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new PipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new PipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new PipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = in_struct->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !in_struct->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (in_struct->pViewportState && (has_rasterization || is_graphics_library)) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT) is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR) is_dynamic_scissors = true;
        }
        pViewportState = new PipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new PipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (in_struct->pMultisampleState && (renderPass != VK_NULL_HANDLE || has_rasterization || is_graphics_library))
        pMultisampleState = new PipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && ((has_rasterization && uses_depthstencil_attachment) || is_graphics_library))
        pDepthStencilState = new PipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && ((has_rasterization && uses_color_attachment) || is_graphics_library))
        pColorBlendState = new PipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new PipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = nullptr;
}

void GraphicsPipelineCreateInfo::initialize(const GraphicsPipelineCreateInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src->layout;
    renderPass = copy_src->renderPass;
    subpass = copy_src->subpass;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;

    pNext = SafePnextCopy(copy_src->pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src->pNext);
    if (stageCount && copy_src->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src->pStages[i]);
        }
    }
    if (copy_src->pVertexInputState)
        pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src->pInputAssemblyState)
        pInputAssemblyState = new PipelineInputAssemblyStateCreateInfo(*copy_src->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src->pTessellationState && has_tessellation_stage)
        pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src->pDynamicState && copy_src->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src->pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new PipelineViewportStateCreateInfo(*copy_src->pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src->pRasterizationState)
        pRasterizationState = new PipelineRasterizationStateCreateInfo(*copy_src->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src->pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new PipelineMultisampleStateCreateInfo(*copy_src->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src->pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new PipelineDepthStencilStateCreateInfo(*copy_src->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src->pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new PipelineColorBlendStateCreateInfo(*copy_src->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src->pDynamicState)
        pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src->pDynamicState);
    else
        pDynamicState = nullptr;
}

PipelineViewportStateCreateInfo::PipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct,
                                                                 const bool is_dynamic_viewports, const bool is_dynamic_scissors,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      viewportCount(in_struct->viewportCount),
      pViewports(nullptr),
      scissorCount(in_struct->scissorCount),
      pScissors(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy((void*)pViewports, (void*)in_struct->pViewports, sizeof(VkViewport) * in_struct->viewportCount);
    } else
        pViewports = nullptr;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy((void*)pScissors, (void*)in_struct->pScissors, sizeof(VkRect2D) * in_struct->scissorCount);
    } else
        pScissors = nullptr;
}

PipelineViewportStateCreateInfo::PipelineViewportStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      viewportCount(),
      pViewports(nullptr),
      scissorCount(),
      pScissors(nullptr) {}

PipelineViewportStateCreateInfo::PipelineViewportStateCreateInfo(const PipelineViewportStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src.scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pViewports) {
        pViewports = new VkViewport[copy_src.viewportCount];
        memcpy((void*)pViewports, (void*)copy_src.pViewports, sizeof(VkViewport) * copy_src.viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src.pScissors) {
        pScissors = new VkRect2D[copy_src.scissorCount];
        memcpy((void*)pScissors, (void*)copy_src.pScissors, sizeof(VkRect2D) * copy_src.scissorCount);
    } else
        pScissors = nullptr;
}

PipelineViewportStateCreateInfo& PipelineViewportStateCreateInfo::operator=(const PipelineViewportStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src.scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pViewports) {
        pViewports = new VkViewport[copy_src.viewportCount];
        memcpy((void*)pViewports, (void*)copy_src.pViewports, sizeof(VkViewport) * copy_src.viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src.pScissors) {
        pScissors = new VkRect2D[copy_src.scissorCount];
        memcpy((void*)pScissors, (void*)copy_src.pScissors, sizeof(VkRect2D) * copy_src.scissorCount);
    } else
        pScissors = nullptr;

    return *this;
}

PipelineViewportStateCreateInfo::~PipelineViewportStateCreateInfo() {
    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);
}

void PipelineViewportStateCreateInfo::initialize(const VkPipelineViewportStateCreateInfo* in_struct,
                                                 const bool is_dynamic_viewports, const bool is_dynamic_scissors,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewports = nullptr;
    scissorCount = in_struct->scissorCount;
    pScissors = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy((void*)pViewports, (void*)in_struct->pViewports, sizeof(VkViewport) * in_struct->viewportCount);
    } else
        pViewports = nullptr;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy((void*)pScissors, (void*)in_struct->pScissors, sizeof(VkRect2D) * in_struct->scissorCount);
    } else
        pScissors = nullptr;
}

void PipelineViewportStateCreateInfo::initialize(const PipelineViewportStateCreateInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    viewportCount = copy_src->viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src->scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pViewports) {
        pViewports = new VkViewport[copy_src->viewportCount];
        memcpy((void*)pViewports, (void*)copy_src->pViewports, sizeof(VkViewport) * copy_src->viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src->pScissors) {
        pScissors = new VkRect2D[copy_src->scissorCount];
        memcpy((void*)pScissors, (void*)copy_src->pScissors, sizeof(VkRect2D) * copy_src->scissorCount);
    } else
        pScissors = nullptr;
}

AccelerationStructureBuildGeometryInfoKHR::AccelerationStructureBuildGeometryInfoKHR(
    const VkAccelerationStructureBuildGeometryInfoKHR* in_struct, const bool is_host,
    const VkAccelerationStructureBuildRangeInfoKHR* build_range_infos, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      type(in_struct->type),
      flags(in_struct->flags),
      mode(in_struct->mode),
      srcAccelerationStructure(in_struct->srcAccelerationStructure),
      dstAccelerationStructure(in_struct->dstAccelerationStructure),
      geometryCount(in_struct->geometryCount),
      pGeometries(nullptr),
      ppGeometries(nullptr),
      scratchData(&in_struct->scratchData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (geometryCount) {
        if (in_struct->ppGeometries) {
            ppGeometries = new AccelerationStructureGeometryKHR*[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                ppGeometries[i] = new AccelerationStructureGeometryKHR(in_struct->ppGeometries[i], is_host, &build_range_infos[i]);
            }
        } else {
            pGeometries = new AccelerationStructureGeometryKHR[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                (pGeometries)[i] = AccelerationStructureGeometryKHR(&(in_struct->pGeometries)[i], is_host, &build_range_infos[i]);
            }
        }
    }
}

AccelerationStructureBuildGeometryInfoKHR::AccelerationStructureBuildGeometryInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR),
      pNext(nullptr),
      type(),
      flags(),
      mode(),
      srcAccelerationStructure(),
      dstAccelerationStructure(),
      geometryCount(),
      pGeometries(nullptr),
      ppGeometries(nullptr) {}

AccelerationStructureBuildGeometryInfoKHR::AccelerationStructureBuildGeometryInfoKHR(
    const AccelerationStructureBuildGeometryInfoKHR& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    mode = copy_src.mode;
    srcAccelerationStructure = copy_src.srcAccelerationStructure;
    dstAccelerationStructure = copy_src.dstAccelerationStructure;
    geometryCount = copy_src.geometryCount;
    pGeometries = nullptr;
    ppGeometries = nullptr;
    scratchData.initialize(&copy_src.scratchData);

    if (geometryCount) {
        if (copy_src.ppGeometries) {
            ppGeometries = new AccelerationStructureGeometryKHR*[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                ppGeometries[i] = new AccelerationStructureGeometryKHR(*copy_src.ppGeometries[i]);
            }
        } else {
            pGeometries = new AccelerationStructureGeometryKHR[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                pGeometries[i] = AccelerationStructureGeometryKHR(copy_src.pGeometries[i]);
            }
        }
    }
}

AccelerationStructureBuildGeometryInfoKHR& AccelerationStructureBuildGeometryInfoKHR::operator=(
    const AccelerationStructureBuildGeometryInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (ppGeometries) {
        for (uint32_t i = 0; i < geometryCount; ++i) {
            delete ppGeometries[i];
        }
        delete[] ppGeometries;
    } else if (pGeometries) {
        delete[] pGeometries;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    mode = copy_src.mode;
    srcAccelerationStructure = copy_src.srcAccelerationStructure;
    dstAccelerationStructure = copy_src.dstAccelerationStructure;
    geometryCount = copy_src.geometryCount;
    pGeometries = nullptr;
    ppGeometries = nullptr;
    scratchData.initialize(&copy_src.scratchData);

    if (geometryCount) {
        if (copy_src.ppGeometries) {
            ppGeometries = new AccelerationStructureGeometryKHR*[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                ppGeometries[i] = new AccelerationStructureGeometryKHR(*copy_src.ppGeometries[i]);
            }
        } else {
            pGeometries = new AccelerationStructureGeometryKHR[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                pGeometries[i] = AccelerationStructureGeometryKHR(copy_src.pGeometries[i]);
            }
        }
    }

    return *this;
}

AccelerationStructureBuildGeometryInfoKHR::~AccelerationStructureBuildGeometryInfoKHR() {
    if (ppGeometries) {
        for (uint32_t i = 0; i < geometryCount; ++i) {
            delete ppGeometries[i];
        }
        delete[] ppGeometries;
    } else if (pGeometries) {
        delete[] pGeometries;
    }
    FreePnextChain(pNext);
}

void AccelerationStructureBuildGeometryInfoKHR::initialize(const VkAccelerationStructureBuildGeometryInfoKHR* in_struct,
                                                           const bool is_host,
                                                           const VkAccelerationStructureBuildRangeInfoKHR* build_range_infos,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (ppGeometries) {
        for (uint32_t i = 0; i < geometryCount; ++i) {
            delete ppGeometries[i];
        }
        delete[] ppGeometries;
    } else if (pGeometries) {
        delete[] pGeometries;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    flags = in_struct->flags;
    mode = in_struct->mode;
    srcAccelerationStructure = in_struct->srcAccelerationStructure;
    dstAccelerationStructure = in_struct->dstAccelerationStructure;
    geometryCount = in_struct->geometryCount;
    pGeometries = nullptr;
    ppGeometries = nullptr;
    scratchData.initialize(&in_struct->scratchData);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (geometryCount) {
        if (in_struct->ppGeometries) {
            ppGeometries = new AccelerationStructureGeometryKHR*[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                ppGeometries[i] = new AccelerationStructureGeometryKHR(in_struct->ppGeometries[i], is_host, &build_range_infos[i]);
            }
        } else {
            pGeometries = new AccelerationStructureGeometryKHR[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                (pGeometries)[i] = AccelerationStructureGeometryKHR(&(in_struct->pGeometries)[i], is_host, &build_range_infos[i]);
            }
        }
    }
}

void AccelerationStructureBuildGeometryInfoKHR::initialize(const AccelerationStructureBuildGeometryInfoKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    flags = copy_src->flags;
    mode = copy_src->mode;
    srcAccelerationStructure = copy_src->srcAccelerationStructure;
    dstAccelerationStructure = copy_src->dstAccelerationStructure;
    geometryCount = copy_src->geometryCount;
    pGeometries = nullptr;
    ppGeometries = nullptr;
    scratchData.initialize(&copy_src->scratchData);

    if (geometryCount) {
        if (copy_src->ppGeometries) {
            ppGeometries = new AccelerationStructureGeometryKHR*[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                ppGeometries[i] = new AccelerationStructureGeometryKHR(*copy_src->ppGeometries[i]);
            }
        } else {
            pGeometries = new AccelerationStructureGeometryKHR[geometryCount];
            for (uint32_t i = 0; i < geometryCount; ++i) {
                pGeometries[i] = AccelerationStructureGeometryKHR(copy_src->pGeometries[i]);
            }
        }
    }
}

MicromapBuildInfoEXT::MicromapBuildInfoEXT(const VkMicromapBuildInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      type(in_struct->type),
      flags(in_struct->flags),
      mode(in_struct->mode),
      dstMicromap(in_struct->dstMicromap),
      usageCountsCount(in_struct->usageCountsCount),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      data(&in_struct->data),
      scratchData(&in_struct->scratchData),
      triangleArray(&in_struct->triangleArray),
      triangleArrayStride(in_struct->triangleArrayStride) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

MicromapBuildInfoEXT::MicromapBuildInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT),
      pNext(nullptr),
      type(),
      flags(),
      mode(),
      dstMicromap(),
      usageCountsCount(),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      triangleArrayStride() {}

MicromapBuildInfoEXT::MicromapBuildInfoEXT(const MicromapBuildInfoEXT& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    mode = copy_src.mode;
    dstMicromap = copy_src.dstMicromap;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    data.initialize(&copy_src.data);
    scratchData.initialize(&copy_src.scratchData);
    triangleArray.initialize(&copy_src.triangleArray);
    triangleArrayStride = copy_src.triangleArrayStride;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

MicromapBuildInfoEXT& MicromapBuildInfoEXT::operator=(const MicromapBuildInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    mode = copy_src.mode;
    dstMicromap = copy_src.dstMicromap;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    data.initialize(&copy_src.data);
    scratchData.initialize(&copy_src.scratchData);
    triangleArray.initialize(&copy_src.triangleArray);
    triangleArrayStride = copy_src.triangleArrayStride;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }

    return *this;
}

MicromapBuildInfoEXT::~MicromapBuildInfoEXT() {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
}

void MicromapBuildInfoEXT::initialize(const VkMicromapBuildInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    flags = in_struct->flags;
    mode = in_struct->mode;
    dstMicromap = in_struct->dstMicromap;
    usageCountsCount = in_struct->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    data.initialize(&in_struct->data);
    scratchData.initialize(&in_struct->scratchData);
    triangleArray.initialize(&in_struct->triangleArray);
    triangleArrayStride = in_struct->triangleArrayStride;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

void MicromapBuildInfoEXT::initialize(const MicromapBuildInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    flags = copy_src->flags;
    mode = copy_src->mode;
    dstMicromap = copy_src->dstMicromap;
    usageCountsCount = copy_src->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    data.initialize(&copy_src->data);
    scratchData.initialize(&copy_src->scratchData);
    triangleArray.initialize(&copy_src->triangleArray);
    triangleArrayStride = copy_src->triangleArrayStride;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src->pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src->usageCountsCount);
    }
    if (copy_src->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src->usageCountsCount];
        for (uint32_t i = 0; i < copy_src->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

AccelerationStructureTrianglesOpacityMicromapEXT::AccelerationStructureTrianglesOpacityMicromapEXT(
    const VkAccelerationStructureTrianglesOpacityMicromapEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      indexType(in_struct->indexType),
      indexBuffer(&in_struct->indexBuffer),
      indexStride(in_struct->indexStride),
      baseTriangle(in_struct->baseTriangle),
      usageCountsCount(in_struct->usageCountsCount),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      micromap(in_struct->micromap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

AccelerationStructureTrianglesOpacityMicromapEXT::AccelerationStructureTrianglesOpacityMicromapEXT()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT),
      pNext(nullptr),
      indexType(),
      indexStride(),
      baseTriangle(),
      usageCountsCount(),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      micromap() {}

AccelerationStructureTrianglesOpacityMicromapEXT::AccelerationStructureTrianglesOpacityMicromapEXT(
    const AccelerationStructureTrianglesOpacityMicromapEXT& copy_src) {
    sType = copy_src.sType;
    indexType = copy_src.indexType;
    indexBuffer.initialize(&copy_src.indexBuffer);
    indexStride = copy_src.indexStride;
    baseTriangle = copy_src.baseTriangle;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src.micromap;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

AccelerationStructureTrianglesOpacityMicromapEXT& AccelerationStructureTrianglesOpacityMicromapEXT::operator=(
    const AccelerationStructureTrianglesOpacityMicromapEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    indexType = copy_src.indexType;
    indexBuffer.initialize(&copy_src.indexBuffer);
    indexStride = copy_src.indexStride;
    baseTriangle = copy_src.baseTriangle;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src.micromap;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }

    return *this;
}

AccelerationStructureTrianglesOpacityMicromapEXT::~AccelerationStructureTrianglesOpacityMicromapEXT() {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
}

void AccelerationStructureTrianglesOpacityMicromapEXT::initialize(
    const VkAccelerationStructureTrianglesOpacityMicromapEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    indexType = in_struct->indexType;
    indexBuffer.initialize(&in_struct->indexBuffer);
    indexStride = in_struct->indexStride;
    baseTriangle = in_struct->baseTriangle;
    usageCountsCount = in_struct->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = in_struct->micromap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

void AccelerationStructureTrianglesOpacityMicromapEXT::initialize(const AccelerationStructureTrianglesOpacityMicromapEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    indexType = copy_src->indexType;
    indexBuffer.initialize(&copy_src->indexBuffer);
    indexStride = copy_src->indexStride;
    baseTriangle = copy_src->baseTriangle;
    usageCountsCount = copy_src->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src->micromap;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src->pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src->usageCountsCount);
    }
    if (copy_src->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src->usageCountsCount];
        for (uint32_t i = 0; i < copy_src->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
AccelerationStructureTrianglesDisplacementMicromapNV::AccelerationStructureTrianglesDisplacementMicromapNV(
    const VkAccelerationStructureTrianglesDisplacementMicromapNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      displacementBiasAndScaleFormat(in_struct->displacementBiasAndScaleFormat),
      displacementVectorFormat(in_struct->displacementVectorFormat),
      displacementBiasAndScaleBuffer(&in_struct->displacementBiasAndScaleBuffer),
      displacementBiasAndScaleStride(in_struct->displacementBiasAndScaleStride),
      displacementVectorBuffer(&in_struct->displacementVectorBuffer),
      displacementVectorStride(in_struct->displacementVectorStride),
      displacedMicromapPrimitiveFlags(&in_struct->displacedMicromapPrimitiveFlags),
      displacedMicromapPrimitiveFlagsStride(in_struct->displacedMicromapPrimitiveFlagsStride),
      indexType(in_struct->indexType),
      indexBuffer(&in_struct->indexBuffer),
      indexStride(in_struct->indexStride),
      baseTriangle(in_struct->baseTriangle),
      usageCountsCount(in_struct->usageCountsCount),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      micromap(in_struct->micromap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

AccelerationStructureTrianglesDisplacementMicromapNV::AccelerationStructureTrianglesDisplacementMicromapNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV),
      pNext(nullptr),
      displacementBiasAndScaleFormat(),
      displacementVectorFormat(),
      displacementBiasAndScaleStride(),
      displacementVectorStride(),
      displacedMicromapPrimitiveFlagsStride(),
      indexType(),
      indexStride(),
      baseTriangle(),
      usageCountsCount(),
      pUsageCounts(nullptr),
      ppUsageCounts(nullptr),
      micromap() {}

AccelerationStructureTrianglesDisplacementMicromapNV::AccelerationStructureTrianglesDisplacementMicromapNV(
    const AccelerationStructureTrianglesDisplacementMicromapNV& copy_src) {
    sType = copy_src.sType;
    displacementBiasAndScaleFormat = copy_src.displacementBiasAndScaleFormat;
    displacementVectorFormat = copy_src.displacementVectorFormat;
    displacementBiasAndScaleBuffer.initialize(&copy_src.displacementBiasAndScaleBuffer);
    displacementBiasAndScaleStride = copy_src.displacementBiasAndScaleStride;
    displacementVectorBuffer.initialize(&copy_src.displacementVectorBuffer);
    displacementVectorStride = copy_src.displacementVectorStride;
    displacedMicromapPrimitiveFlags.initialize(&copy_src.displacedMicromapPrimitiveFlags);
    displacedMicromapPrimitiveFlagsStride = copy_src.displacedMicromapPrimitiveFlagsStride;
    indexType = copy_src.indexType;
    indexBuffer.initialize(&copy_src.indexBuffer);
    indexStride = copy_src.indexStride;
    baseTriangle = copy_src.baseTriangle;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src.micromap;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

AccelerationStructureTrianglesDisplacementMicromapNV& AccelerationStructureTrianglesDisplacementMicromapNV::operator=(
    const AccelerationStructureTrianglesDisplacementMicromapNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    displacementBiasAndScaleFormat = copy_src.displacementBiasAndScaleFormat;
    displacementVectorFormat = copy_src.displacementVectorFormat;
    displacementBiasAndScaleBuffer.initialize(&copy_src.displacementBiasAndScaleBuffer);
    displacementBiasAndScaleStride = copy_src.displacementBiasAndScaleStride;
    displacementVectorBuffer.initialize(&copy_src.displacementVectorBuffer);
    displacementVectorStride = copy_src.displacementVectorStride;
    displacedMicromapPrimitiveFlags.initialize(&copy_src.displacedMicromapPrimitiveFlags);
    displacedMicromapPrimitiveFlagsStride = copy_src.displacedMicromapPrimitiveFlagsStride;
    indexType = copy_src.indexType;
    indexBuffer.initialize(&copy_src.indexBuffer);
    indexStride = copy_src.indexStride;
    baseTriangle = copy_src.baseTriangle;
    usageCountsCount = copy_src.usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src.micromap;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src.usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src.pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src.usageCountsCount);
    }
    if (copy_src.ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src.usageCountsCount];
        for (uint32_t i = 0; i < copy_src.usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src.ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }

    return *this;
}

AccelerationStructureTrianglesDisplacementMicromapNV::~AccelerationStructureTrianglesDisplacementMicromapNV() {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
}

void AccelerationStructureTrianglesDisplacementMicromapNV::initialize(
    const VkAccelerationStructureTrianglesDisplacementMicromapNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pUsageCounts) delete[] pUsageCounts;
    if (ppUsageCounts) {
        for (uint32_t i = 0; i < usageCountsCount; ++i) {
            delete ppUsageCounts[i];
        }
        delete[] ppUsageCounts;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displacementBiasAndScaleFormat = in_struct->displacementBiasAndScaleFormat;
    displacementVectorFormat = in_struct->displacementVectorFormat;
    displacementBiasAndScaleBuffer.initialize(&in_struct->displacementBiasAndScaleBuffer);
    displacementBiasAndScaleStride = in_struct->displacementBiasAndScaleStride;
    displacementVectorBuffer.initialize(&in_struct->displacementVectorBuffer);
    displacementVectorStride = in_struct->displacementVectorStride;
    displacedMicromapPrimitiveFlags.initialize(&in_struct->displacedMicromapPrimitiveFlags);
    displacedMicromapPrimitiveFlagsStride = in_struct->displacedMicromapPrimitiveFlagsStride;
    indexType = in_struct->indexType;
    indexBuffer.initialize(&in_struct->indexBuffer);
    indexStride = in_struct->indexStride;
    baseTriangle = in_struct->baseTriangle;
    usageCountsCount = in_struct->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = in_struct->micromap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[in_struct->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)in_struct->pUsageCounts, sizeof(VkMicromapUsageEXT) * in_struct->usageCountsCount);
    }
    if (in_struct->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[in_struct->usageCountsCount];
        for (uint32_t i = 0; i < in_struct->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*in_struct->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}

void AccelerationStructureTrianglesDisplacementMicromapNV::initialize(
    const AccelerationStructureTrianglesDisplacementMicromapNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displacementBiasAndScaleFormat = copy_src->displacementBiasAndScaleFormat;
    displacementVectorFormat = copy_src->displacementVectorFormat;
    displacementBiasAndScaleBuffer.initialize(&copy_src->displacementBiasAndScaleBuffer);
    displacementBiasAndScaleStride = copy_src->displacementBiasAndScaleStride;
    displacementVectorBuffer.initialize(&copy_src->displacementVectorBuffer);
    displacementVectorStride = copy_src->displacementVectorStride;
    displacedMicromapPrimitiveFlags.initialize(&copy_src->displacedMicromapPrimitiveFlags);
    displacedMicromapPrimitiveFlagsStride = copy_src->displacedMicromapPrimitiveFlagsStride;
    indexType = copy_src->indexType;
    indexBuffer.initialize(&copy_src->indexBuffer);
    indexStride = copy_src->indexStride;
    baseTriangle = copy_src->baseTriangle;
    usageCountsCount = copy_src->usageCountsCount;
    pUsageCounts = nullptr;
    ppUsageCounts = nullptr;
    micromap = copy_src->micromap;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pUsageCounts) {
        pUsageCounts = new VkMicromapUsageEXT[copy_src->usageCountsCount];
        memcpy((void*)pUsageCounts, (void*)copy_src->pUsageCounts, sizeof(VkMicromapUsageEXT) * copy_src->usageCountsCount);
    }
    if (copy_src->ppUsageCounts) {
        VkMicromapUsageEXT** pointer_array = new VkMicromapUsageEXT*[copy_src->usageCountsCount];
        for (uint32_t i = 0; i < copy_src->usageCountsCount; ++i) {
            pointer_array[i] = new VkMicromapUsageEXT(*copy_src->ppUsageCounts[i]);
        }
        ppUsageCounts = pointer_array;
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
}  // namespace safe
}  // namespace vku
