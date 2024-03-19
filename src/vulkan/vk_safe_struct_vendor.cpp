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

#include <vulkan/utility/vk_safe_struct.h>
#include <vulkan/utility/vk_struct_helper.hpp>

#include <cstring>

namespace vku {
namespace safe {

AttachmentSampleCountInfoAMD::AttachmentSampleCountInfoAMD(const VkAttachmentSampleCountInfoAMD* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentSamples(nullptr),
      depthStencilAttachmentSamples(in_struct->depthStencilAttachmentSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentSamples) {
        pColorAttachmentSamples = new VkSampleCountFlagBits[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentSamples, (void*)in_struct->pColorAttachmentSamples,
               sizeof(VkSampleCountFlagBits) * in_struct->colorAttachmentCount);
    }
}

AttachmentSampleCountInfoAMD::AttachmentSampleCountInfoAMD()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD),
      pNext(nullptr),
      colorAttachmentCount(),
      pColorAttachmentSamples(nullptr),
      depthStencilAttachmentSamples() {}

AttachmentSampleCountInfoAMD::AttachmentSampleCountInfoAMD(const AttachmentSampleCountInfoAMD& copy_src) {
    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentSamples = nullptr;
    depthStencilAttachmentSamples = copy_src.depthStencilAttachmentSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentSamples) {
        pColorAttachmentSamples = new VkSampleCountFlagBits[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentSamples, (void*)copy_src.pColorAttachmentSamples,
               sizeof(VkSampleCountFlagBits) * copy_src.colorAttachmentCount);
    }
}

AttachmentSampleCountInfoAMD& AttachmentSampleCountInfoAMD::operator=(const AttachmentSampleCountInfoAMD& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentSamples) delete[] pColorAttachmentSamples;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentSamples = nullptr;
    depthStencilAttachmentSamples = copy_src.depthStencilAttachmentSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentSamples) {
        pColorAttachmentSamples = new VkSampleCountFlagBits[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentSamples, (void*)copy_src.pColorAttachmentSamples,
               sizeof(VkSampleCountFlagBits) * copy_src.colorAttachmentCount);
    }

    return *this;
}

AttachmentSampleCountInfoAMD::~AttachmentSampleCountInfoAMD() {
    if (pColorAttachmentSamples) delete[] pColorAttachmentSamples;
    FreePnextChain(pNext);
}

void AttachmentSampleCountInfoAMD::initialize(const VkAttachmentSampleCountInfoAMD* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentSamples) delete[] pColorAttachmentSamples;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentSamples = nullptr;
    depthStencilAttachmentSamples = in_struct->depthStencilAttachmentSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentSamples) {
        pColorAttachmentSamples = new VkSampleCountFlagBits[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentSamples, (void*)in_struct->pColorAttachmentSamples,
               sizeof(VkSampleCountFlagBits) * in_struct->colorAttachmentCount);
    }
}

void AttachmentSampleCountInfoAMD::initialize(const AttachmentSampleCountInfoAMD* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentSamples = nullptr;
    depthStencilAttachmentSamples = copy_src->depthStencilAttachmentSamples;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentSamples) {
        pColorAttachmentSamples = new VkSampleCountFlagBits[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentSamples, (void*)copy_src->pColorAttachmentSamples,
               sizeof(VkSampleCountFlagBits) * copy_src->colorAttachmentCount);
    }
}

MultiviewPerViewAttributesInfoNVX::MultiviewPerViewAttributesInfoNVX(const VkMultiviewPerViewAttributesInfoNVX* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      perViewAttributes(in_struct->perViewAttributes),
      perViewAttributesPositionXOnly(in_struct->perViewAttributesPositionXOnly) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MultiviewPerViewAttributesInfoNVX::MultiviewPerViewAttributesInfoNVX()
    : sType(VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX),
      pNext(nullptr),
      perViewAttributes(),
      perViewAttributesPositionXOnly() {}

MultiviewPerViewAttributesInfoNVX::MultiviewPerViewAttributesInfoNVX(const MultiviewPerViewAttributesInfoNVX& copy_src) {
    sType = copy_src.sType;
    perViewAttributes = copy_src.perViewAttributes;
    perViewAttributesPositionXOnly = copy_src.perViewAttributesPositionXOnly;
    pNext = SafePnextCopy(copy_src.pNext);
}

MultiviewPerViewAttributesInfoNVX& MultiviewPerViewAttributesInfoNVX::operator=(const MultiviewPerViewAttributesInfoNVX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    perViewAttributes = copy_src.perViewAttributes;
    perViewAttributesPositionXOnly = copy_src.perViewAttributesPositionXOnly;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MultiviewPerViewAttributesInfoNVX::~MultiviewPerViewAttributesInfoNVX() { FreePnextChain(pNext); }

void MultiviewPerViewAttributesInfoNVX::initialize(const VkMultiviewPerViewAttributesInfoNVX* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    perViewAttributes = in_struct->perViewAttributes;
    perViewAttributesPositionXOnly = in_struct->perViewAttributesPositionXOnly;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MultiviewPerViewAttributesInfoNVX::initialize(const MultiviewPerViewAttributesInfoNVX* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    perViewAttributes = copy_src->perViewAttributes;
    perViewAttributesPositionXOnly = copy_src->perViewAttributesPositionXOnly;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyCheckpointProperties2NV::QueueFamilyCheckpointProperties2NV(const VkQueueFamilyCheckpointProperties2NV* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), checkpointExecutionStageMask(in_struct->checkpointExecutionStageMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueueFamilyCheckpointProperties2NV::QueueFamilyCheckpointProperties2NV()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV), pNext(nullptr), checkpointExecutionStageMask() {}

QueueFamilyCheckpointProperties2NV::QueueFamilyCheckpointProperties2NV(const QueueFamilyCheckpointProperties2NV& copy_src) {
    sType = copy_src.sType;
    checkpointExecutionStageMask = copy_src.checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueueFamilyCheckpointProperties2NV& QueueFamilyCheckpointProperties2NV::operator=(
    const QueueFamilyCheckpointProperties2NV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    checkpointExecutionStageMask = copy_src.checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueueFamilyCheckpointProperties2NV::~QueueFamilyCheckpointProperties2NV() { FreePnextChain(pNext); }

void QueueFamilyCheckpointProperties2NV::initialize(const VkQueueFamilyCheckpointProperties2NV* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    checkpointExecutionStageMask = in_struct->checkpointExecutionStageMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueueFamilyCheckpointProperties2NV::initialize(const QueueFamilyCheckpointProperties2NV* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    checkpointExecutionStageMask = copy_src->checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

CheckpointData2NV::CheckpointData2NV(const VkCheckpointData2NV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), stage(in_struct->stage), pCheckpointMarker(in_struct->pCheckpointMarker) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CheckpointData2NV::CheckpointData2NV()
    : sType(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV), pNext(nullptr), stage(), pCheckpointMarker(nullptr) {}

CheckpointData2NV::CheckpointData2NV(const CheckpointData2NV& copy_src) {
    sType = copy_src.sType;
    stage = copy_src.stage;
    pCheckpointMarker = copy_src.pCheckpointMarker;
    pNext = SafePnextCopy(copy_src.pNext);
}

CheckpointData2NV& CheckpointData2NV::operator=(const CheckpointData2NV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stage = copy_src.stage;
    pCheckpointMarker = copy_src.pCheckpointMarker;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CheckpointData2NV::~CheckpointData2NV() { FreePnextChain(pNext); }

void CheckpointData2NV::initialize(const VkCheckpointData2NV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stage = in_struct->stage;
    pCheckpointMarker = in_struct->pCheckpointMarker;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CheckpointData2NV::initialize(const CheckpointData2NV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stage = copy_src->stage;
    pCheckpointMarker = copy_src->pCheckpointMarker;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationStateRasterizationOrderAMD::PipelineRasterizationStateRasterizationOrderAMD(
    const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), rasterizationOrder(in_struct->rasterizationOrder) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationStateRasterizationOrderAMD::PipelineRasterizationStateRasterizationOrderAMD()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD), pNext(nullptr), rasterizationOrder() {}

PipelineRasterizationStateRasterizationOrderAMD::PipelineRasterizationStateRasterizationOrderAMD(
    const PipelineRasterizationStateRasterizationOrderAMD& copy_src) {
    sType = copy_src.sType;
    rasterizationOrder = copy_src.rasterizationOrder;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationStateRasterizationOrderAMD& PipelineRasterizationStateRasterizationOrderAMD::operator=(
    const PipelineRasterizationStateRasterizationOrderAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rasterizationOrder = copy_src.rasterizationOrder;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationStateRasterizationOrderAMD::~PipelineRasterizationStateRasterizationOrderAMD() { FreePnextChain(pNext); }

void PipelineRasterizationStateRasterizationOrderAMD::initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rasterizationOrder = in_struct->rasterizationOrder;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationStateRasterizationOrderAMD::initialize(const PipelineRasterizationStateRasterizationOrderAMD* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rasterizationOrder = copy_src->rasterizationOrder;
    pNext = SafePnextCopy(copy_src->pNext);
}

DedicatedAllocationImageCreateInfoNV::DedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), dedicatedAllocation(in_struct->dedicatedAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DedicatedAllocationImageCreateInfoNV::DedicatedAllocationImageCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV), pNext(nullptr), dedicatedAllocation() {}

DedicatedAllocationImageCreateInfoNV::DedicatedAllocationImageCreateInfoNV(const DedicatedAllocationImageCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    dedicatedAllocation = copy_src.dedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

DedicatedAllocationImageCreateInfoNV& DedicatedAllocationImageCreateInfoNV::operator=(
    const DedicatedAllocationImageCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dedicatedAllocation = copy_src.dedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DedicatedAllocationImageCreateInfoNV::~DedicatedAllocationImageCreateInfoNV() { FreePnextChain(pNext); }

void DedicatedAllocationImageCreateInfoNV::initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dedicatedAllocation = in_struct->dedicatedAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DedicatedAllocationImageCreateInfoNV::initialize(const DedicatedAllocationImageCreateInfoNV* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dedicatedAllocation = copy_src->dedicatedAllocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

DedicatedAllocationBufferCreateInfoNV::DedicatedAllocationBufferCreateInfoNV(
    const VkDedicatedAllocationBufferCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), dedicatedAllocation(in_struct->dedicatedAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DedicatedAllocationBufferCreateInfoNV::DedicatedAllocationBufferCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV), pNext(nullptr), dedicatedAllocation() {}

DedicatedAllocationBufferCreateInfoNV::DedicatedAllocationBufferCreateInfoNV(
    const DedicatedAllocationBufferCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    dedicatedAllocation = copy_src.dedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

DedicatedAllocationBufferCreateInfoNV& DedicatedAllocationBufferCreateInfoNV::operator=(
    const DedicatedAllocationBufferCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dedicatedAllocation = copy_src.dedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DedicatedAllocationBufferCreateInfoNV::~DedicatedAllocationBufferCreateInfoNV() { FreePnextChain(pNext); }

void DedicatedAllocationBufferCreateInfoNV::initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dedicatedAllocation = in_struct->dedicatedAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DedicatedAllocationBufferCreateInfoNV::initialize(const DedicatedAllocationBufferCreateInfoNV* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dedicatedAllocation = copy_src->dedicatedAllocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

DedicatedAllocationMemoryAllocateInfoNV::DedicatedAllocationMemoryAllocateInfoNV(
    const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DedicatedAllocationMemoryAllocateInfoNV::DedicatedAllocationMemoryAllocateInfoNV()
    : sType(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV), pNext(nullptr), image(), buffer() {}

DedicatedAllocationMemoryAllocateInfoNV::DedicatedAllocationMemoryAllocateInfoNV(
    const DedicatedAllocationMemoryAllocateInfoNV& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

DedicatedAllocationMemoryAllocateInfoNV& DedicatedAllocationMemoryAllocateInfoNV::operator=(
    const DedicatedAllocationMemoryAllocateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DedicatedAllocationMemoryAllocateInfoNV::~DedicatedAllocationMemoryAllocateInfoNV() { FreePnextChain(pNext); }

void DedicatedAllocationMemoryAllocateInfoNV::initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DedicatedAllocationMemoryAllocateInfoNV::initialize(const DedicatedAllocationMemoryAllocateInfoNV* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

CuModuleCreateInfoNVX::CuModuleCreateInfoNVX(const VkCuModuleCreateInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), dataSize(in_struct->dataSize), pData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

CuModuleCreateInfoNVX::CuModuleCreateInfoNVX()
    : sType(VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX), pNext(nullptr), dataSize(), pData(nullptr) {}

CuModuleCreateInfoNVX::CuModuleCreateInfoNVX(const CuModuleCreateInfoNVX& copy_src) {
    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

CuModuleCreateInfoNVX& CuModuleCreateInfoNVX::operator=(const CuModuleCreateInfoNVX& copy_src) {
    if (&copy_src == this) return *this;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

CuModuleCreateInfoNVX::~CuModuleCreateInfoNVX() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void CuModuleCreateInfoNVX::initialize(const VkCuModuleCreateInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dataSize = in_struct->dataSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void CuModuleCreateInfoNVX::initialize(const CuModuleCreateInfoNVX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dataSize = copy_src->dataSize;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

CuFunctionCreateInfoNVX::CuFunctionCreateInfoNVX(const VkCuFunctionCreateInfoNVX* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), module(in_struct->module) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
}

CuFunctionCreateInfoNVX::CuFunctionCreateInfoNVX()
    : sType(VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX), pNext(nullptr), module(), pName(nullptr) {}

CuFunctionCreateInfoNVX::CuFunctionCreateInfoNVX(const CuFunctionCreateInfoNVX& copy_src) {
    sType = copy_src.sType;
    module = copy_src.module;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
}

CuFunctionCreateInfoNVX& CuFunctionCreateInfoNVX::operator=(const CuFunctionCreateInfoNVX& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    module = copy_src.module;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);

    return *this;
}

CuFunctionCreateInfoNVX::~CuFunctionCreateInfoNVX() {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
}

void CuFunctionCreateInfoNVX::initialize(const VkCuFunctionCreateInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    module = in_struct->module;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
}

void CuFunctionCreateInfoNVX::initialize(const CuFunctionCreateInfoNVX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    module = copy_src->module;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
}

CuLaunchInfoNVX::CuLaunchInfoNVX(const VkCuLaunchInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      function(in_struct->function),
      gridDimX(in_struct->gridDimX),
      gridDimY(in_struct->gridDimY),
      gridDimZ(in_struct->gridDimZ),
      blockDimX(in_struct->blockDimX),
      blockDimY(in_struct->blockDimY),
      blockDimZ(in_struct->blockDimZ),
      sharedMemBytes(in_struct->sharedMemBytes),
      paramCount(in_struct->paramCount),
      pParams(in_struct->pParams),
      extraCount(in_struct->extraCount),
      pExtras(in_struct->pExtras) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CuLaunchInfoNVX::CuLaunchInfoNVX()
    : sType(VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX),
      pNext(nullptr),
      function(),
      gridDimX(),
      gridDimY(),
      gridDimZ(),
      blockDimX(),
      blockDimY(),
      blockDimZ(),
      sharedMemBytes(),
      paramCount(),
      pParams(nullptr),
      extraCount(),
      pExtras(nullptr) {}

CuLaunchInfoNVX::CuLaunchInfoNVX(const CuLaunchInfoNVX& copy_src) {
    sType = copy_src.sType;
    function = copy_src.function;
    gridDimX = copy_src.gridDimX;
    gridDimY = copy_src.gridDimY;
    gridDimZ = copy_src.gridDimZ;
    blockDimX = copy_src.blockDimX;
    blockDimY = copy_src.blockDimY;
    blockDimZ = copy_src.blockDimZ;
    sharedMemBytes = copy_src.sharedMemBytes;
    paramCount = copy_src.paramCount;
    pParams = copy_src.pParams;
    extraCount = copy_src.extraCount;
    pExtras = copy_src.pExtras;
    pNext = SafePnextCopy(copy_src.pNext);
}

CuLaunchInfoNVX& CuLaunchInfoNVX::operator=(const CuLaunchInfoNVX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    function = copy_src.function;
    gridDimX = copy_src.gridDimX;
    gridDimY = copy_src.gridDimY;
    gridDimZ = copy_src.gridDimZ;
    blockDimX = copy_src.blockDimX;
    blockDimY = copy_src.blockDimY;
    blockDimZ = copy_src.blockDimZ;
    sharedMemBytes = copy_src.sharedMemBytes;
    paramCount = copy_src.paramCount;
    pParams = copy_src.pParams;
    extraCount = copy_src.extraCount;
    pExtras = copy_src.pExtras;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CuLaunchInfoNVX::~CuLaunchInfoNVX() { FreePnextChain(pNext); }

void CuLaunchInfoNVX::initialize(const VkCuLaunchInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    function = in_struct->function;
    gridDimX = in_struct->gridDimX;
    gridDimY = in_struct->gridDimY;
    gridDimZ = in_struct->gridDimZ;
    blockDimX = in_struct->blockDimX;
    blockDimY = in_struct->blockDimY;
    blockDimZ = in_struct->blockDimZ;
    sharedMemBytes = in_struct->sharedMemBytes;
    paramCount = in_struct->paramCount;
    pParams = in_struct->pParams;
    extraCount = in_struct->extraCount;
    pExtras = in_struct->pExtras;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CuLaunchInfoNVX::initialize(const CuLaunchInfoNVX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    function = copy_src->function;
    gridDimX = copy_src->gridDimX;
    gridDimY = copy_src->gridDimY;
    gridDimZ = copy_src->gridDimZ;
    blockDimX = copy_src->blockDimX;
    blockDimY = copy_src->blockDimY;
    blockDimZ = copy_src->blockDimZ;
    sharedMemBytes = copy_src->sharedMemBytes;
    paramCount = copy_src->paramCount;
    pParams = copy_src->pParams;
    extraCount = copy_src->extraCount;
    pExtras = copy_src->pExtras;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewHandleInfoNVX::ImageViewHandleInfoNVX(const VkImageViewHandleInfoNVX* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageView(in_struct->imageView),
      descriptorType(in_struct->descriptorType),
      sampler(in_struct->sampler) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewHandleInfoNVX::ImageViewHandleInfoNVX()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX), pNext(nullptr), imageView(), descriptorType(), sampler() {}

ImageViewHandleInfoNVX::ImageViewHandleInfoNVX(const ImageViewHandleInfoNVX& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    descriptorType = copy_src.descriptorType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewHandleInfoNVX& ImageViewHandleInfoNVX::operator=(const ImageViewHandleInfoNVX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    descriptorType = copy_src.descriptorType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewHandleInfoNVX::~ImageViewHandleInfoNVX() { FreePnextChain(pNext); }

void ImageViewHandleInfoNVX::initialize(const VkImageViewHandleInfoNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    descriptorType = in_struct->descriptorType;
    sampler = in_struct->sampler;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewHandleInfoNVX::initialize(const ImageViewHandleInfoNVX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    descriptorType = copy_src->descriptorType;
    sampler = copy_src->sampler;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewAddressPropertiesNVX::ImageViewAddressPropertiesNVX(const VkImageViewAddressPropertiesNVX* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceAddress(in_struct->deviceAddress), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewAddressPropertiesNVX::ImageViewAddressPropertiesNVX()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX), pNext(nullptr), deviceAddress(), size() {}

ImageViewAddressPropertiesNVX::ImageViewAddressPropertiesNVX(const ImageViewAddressPropertiesNVX& copy_src) {
    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewAddressPropertiesNVX& ImageViewAddressPropertiesNVX::operator=(const ImageViewAddressPropertiesNVX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewAddressPropertiesNVX::~ImageViewAddressPropertiesNVX() { FreePnextChain(pNext); }

void ImageViewAddressPropertiesNVX::initialize(const VkImageViewAddressPropertiesNVX* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceAddress = in_struct->deviceAddress;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewAddressPropertiesNVX::initialize(const ImageViewAddressPropertiesNVX* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceAddress = copy_src->deviceAddress;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

TextureLODGatherFormatPropertiesAMD::TextureLODGatherFormatPropertiesAMD(const VkTextureLODGatherFormatPropertiesAMD* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), supportsTextureGatherLODBiasAMD(in_struct->supportsTextureGatherLODBiasAMD) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

TextureLODGatherFormatPropertiesAMD::TextureLODGatherFormatPropertiesAMD()
    : sType(VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD), pNext(nullptr), supportsTextureGatherLODBiasAMD() {}

TextureLODGatherFormatPropertiesAMD::TextureLODGatherFormatPropertiesAMD(const TextureLODGatherFormatPropertiesAMD& copy_src) {
    sType = copy_src.sType;
    supportsTextureGatherLODBiasAMD = copy_src.supportsTextureGatherLODBiasAMD;
    pNext = SafePnextCopy(copy_src.pNext);
}

TextureLODGatherFormatPropertiesAMD& TextureLODGatherFormatPropertiesAMD::operator=(
    const TextureLODGatherFormatPropertiesAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportsTextureGatherLODBiasAMD = copy_src.supportsTextureGatherLODBiasAMD;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

TextureLODGatherFormatPropertiesAMD::~TextureLODGatherFormatPropertiesAMD() { FreePnextChain(pNext); }

void TextureLODGatherFormatPropertiesAMD::initialize(const VkTextureLODGatherFormatPropertiesAMD* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportsTextureGatherLODBiasAMD = in_struct->supportsTextureGatherLODBiasAMD;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void TextureLODGatherFormatPropertiesAMD::initialize(const TextureLODGatherFormatPropertiesAMD* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportsTextureGatherLODBiasAMD = copy_src->supportsTextureGatherLODBiasAMD;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_GGP

StreamDescriptorSurfaceCreateInfoGGP::StreamDescriptorSurfaceCreateInfoGGP(const VkStreamDescriptorSurfaceCreateInfoGGP* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), streamDescriptor(in_struct->streamDescriptor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

StreamDescriptorSurfaceCreateInfoGGP::StreamDescriptorSurfaceCreateInfoGGP()
    : sType(VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP), pNext(nullptr), flags(), streamDescriptor() {}

StreamDescriptorSurfaceCreateInfoGGP::StreamDescriptorSurfaceCreateInfoGGP(const StreamDescriptorSurfaceCreateInfoGGP& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    streamDescriptor = copy_src.streamDescriptor;
    pNext = SafePnextCopy(copy_src.pNext);
}

StreamDescriptorSurfaceCreateInfoGGP& StreamDescriptorSurfaceCreateInfoGGP::operator=(
    const StreamDescriptorSurfaceCreateInfoGGP& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    streamDescriptor = copy_src.streamDescriptor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

StreamDescriptorSurfaceCreateInfoGGP::~StreamDescriptorSurfaceCreateInfoGGP() { FreePnextChain(pNext); }

void StreamDescriptorSurfaceCreateInfoGGP::initialize(const VkStreamDescriptorSurfaceCreateInfoGGP* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    streamDescriptor = in_struct->streamDescriptor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void StreamDescriptorSurfaceCreateInfoGGP::initialize(const StreamDescriptorSurfaceCreateInfoGGP* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    streamDescriptor = copy_src->streamDescriptor;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_GGP

PhysicalDeviceCornerSampledImageFeaturesNV::PhysicalDeviceCornerSampledImageFeaturesNV(
    const VkPhysicalDeviceCornerSampledImageFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cornerSampledImage(in_struct->cornerSampledImage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCornerSampledImageFeaturesNV::PhysicalDeviceCornerSampledImageFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV), pNext(nullptr), cornerSampledImage() {}

PhysicalDeviceCornerSampledImageFeaturesNV::PhysicalDeviceCornerSampledImageFeaturesNV(
    const PhysicalDeviceCornerSampledImageFeaturesNV& copy_src) {
    sType = copy_src.sType;
    cornerSampledImage = copy_src.cornerSampledImage;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCornerSampledImageFeaturesNV& PhysicalDeviceCornerSampledImageFeaturesNV::operator=(
    const PhysicalDeviceCornerSampledImageFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cornerSampledImage = copy_src.cornerSampledImage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCornerSampledImageFeaturesNV::~PhysicalDeviceCornerSampledImageFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCornerSampledImageFeaturesNV::initialize(const VkPhysicalDeviceCornerSampledImageFeaturesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cornerSampledImage = in_struct->cornerSampledImage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCornerSampledImageFeaturesNV::initialize(const PhysicalDeviceCornerSampledImageFeaturesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cornerSampledImage = copy_src->cornerSampledImage;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalMemoryImageCreateInfoNV::ExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalMemoryImageCreateInfoNV::ExternalMemoryImageCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV), pNext(nullptr), handleTypes() {}

ExternalMemoryImageCreateInfoNV::ExternalMemoryImageCreateInfoNV(const ExternalMemoryImageCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalMemoryImageCreateInfoNV& ExternalMemoryImageCreateInfoNV::operator=(const ExternalMemoryImageCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalMemoryImageCreateInfoNV::~ExternalMemoryImageCreateInfoNV() { FreePnextChain(pNext); }

void ExternalMemoryImageCreateInfoNV::initialize(const VkExternalMemoryImageCreateInfoNV* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalMemoryImageCreateInfoNV::initialize(const ExternalMemoryImageCreateInfoNV* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMemoryAllocateInfoNV::ExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMemoryAllocateInfoNV::ExportMemoryAllocateInfoNV()
    : sType(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV), pNext(nullptr), handleTypes() {}

ExportMemoryAllocateInfoNV::ExportMemoryAllocateInfoNV(const ExportMemoryAllocateInfoNV& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMemoryAllocateInfoNV& ExportMemoryAllocateInfoNV::operator=(const ExportMemoryAllocateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMemoryAllocateInfoNV::~ExportMemoryAllocateInfoNV() { FreePnextChain(pNext); }

void ExportMemoryAllocateInfoNV::initialize(const VkExportMemoryAllocateInfoNV* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMemoryAllocateInfoNV::initialize(const ExportMemoryAllocateInfoNV* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

ImportMemoryWin32HandleInfoNV::ImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), handle(in_struct->handle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryWin32HandleInfoNV::ImportMemoryWin32HandleInfoNV()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV), pNext(nullptr), handleType(), handle() {}

ImportMemoryWin32HandleInfoNV::ImportMemoryWin32HandleInfoNV(const ImportMemoryWin32HandleInfoNV& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryWin32HandleInfoNV& ImportMemoryWin32HandleInfoNV::operator=(const ImportMemoryWin32HandleInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryWin32HandleInfoNV::~ImportMemoryWin32HandleInfoNV() { FreePnextChain(pNext); }

void ImportMemoryWin32HandleInfoNV::initialize(const VkImportMemoryWin32HandleInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryWin32HandleInfoNV::initialize(const ImportMemoryWin32HandleInfoNV* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    handle = copy_src->handle;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMemoryWin32HandleInfoNV::ExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pAttributes(nullptr), dwAccess(in_struct->dwAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

ExportMemoryWin32HandleInfoNV::ExportMemoryWin32HandleInfoNV()
    : sType(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV), pNext(nullptr), pAttributes(nullptr), dwAccess() {}

ExportMemoryWin32HandleInfoNV::ExportMemoryWin32HandleInfoNV(const ExportMemoryWin32HandleInfoNV& copy_src) {
    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }
}

ExportMemoryWin32HandleInfoNV& ExportMemoryWin32HandleInfoNV::operator=(const ExportMemoryWin32HandleInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }

    return *this;
}

ExportMemoryWin32HandleInfoNV::~ExportMemoryWin32HandleInfoNV() {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
}

void ExportMemoryWin32HandleInfoNV::initialize(const VkExportMemoryWin32HandleInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void ExportMemoryWin32HandleInfoNV::initialize(const ExportMemoryWin32HandleInfoNV* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pAttributes = nullptr;
    dwAccess = copy_src->dwAccess;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src->pAttributes);
    }
}

Win32KeyedMutexAcquireReleaseInfoNV::Win32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      acquireCount(in_struct->acquireCount),
      pAcquireSyncs(nullptr),
      pAcquireKeys(nullptr),
      pAcquireTimeoutMilliseconds(nullptr),
      releaseCount(in_struct->releaseCount),
      pReleaseSyncs(nullptr),
      pReleaseKeys(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i = 0; i < acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }

    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy((void*)pAcquireKeys, (void*)in_struct->pAcquireKeys, sizeof(uint64_t) * in_struct->acquireCount);
    }

    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy((void*)pAcquireTimeoutMilliseconds, (void*)in_struct->pAcquireTimeoutMilliseconds,
               sizeof(uint32_t) * in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i = 0; i < releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }

    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy((void*)pReleaseKeys, (void*)in_struct->pReleaseKeys, sizeof(uint64_t) * in_struct->releaseCount);
    }
}

Win32KeyedMutexAcquireReleaseInfoNV::Win32KeyedMutexAcquireReleaseInfoNV()
    : sType(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV),
      pNext(nullptr),
      acquireCount(),
      pAcquireSyncs(nullptr),
      pAcquireKeys(nullptr),
      pAcquireTimeoutMilliseconds(nullptr),
      releaseCount(),
      pReleaseSyncs(nullptr),
      pReleaseKeys(nullptr) {}

Win32KeyedMutexAcquireReleaseInfoNV::Win32KeyedMutexAcquireReleaseInfoNV(const Win32KeyedMutexAcquireReleaseInfoNV& copy_src) {
    sType = copy_src.sType;
    acquireCount = copy_src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = copy_src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (acquireCount && copy_src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i = 0; i < acquireCount; ++i) {
            pAcquireSyncs[i] = copy_src.pAcquireSyncs[i];
        }
    }

    if (copy_src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[copy_src.acquireCount];
        memcpy((void*)pAcquireKeys, (void*)copy_src.pAcquireKeys, sizeof(uint64_t) * copy_src.acquireCount);
    }

    if (copy_src.pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[copy_src.acquireCount];
        memcpy((void*)pAcquireTimeoutMilliseconds, (void*)copy_src.pAcquireTimeoutMilliseconds,
               sizeof(uint32_t) * copy_src.acquireCount);
    }
    if (releaseCount && copy_src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i = 0; i < releaseCount; ++i) {
            pReleaseSyncs[i] = copy_src.pReleaseSyncs[i];
        }
    }

    if (copy_src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[copy_src.releaseCount];
        memcpy((void*)pReleaseKeys, (void*)copy_src.pReleaseKeys, sizeof(uint64_t) * copy_src.releaseCount);
    }
}

Win32KeyedMutexAcquireReleaseInfoNV& Win32KeyedMutexAcquireReleaseInfoNV::operator=(
    const Win32KeyedMutexAcquireReleaseInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds) delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    acquireCount = copy_src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = copy_src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (acquireCount && copy_src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i = 0; i < acquireCount; ++i) {
            pAcquireSyncs[i] = copy_src.pAcquireSyncs[i];
        }
    }

    if (copy_src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[copy_src.acquireCount];
        memcpy((void*)pAcquireKeys, (void*)copy_src.pAcquireKeys, sizeof(uint64_t) * copy_src.acquireCount);
    }

    if (copy_src.pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[copy_src.acquireCount];
        memcpy((void*)pAcquireTimeoutMilliseconds, (void*)copy_src.pAcquireTimeoutMilliseconds,
               sizeof(uint32_t) * copy_src.acquireCount);
    }
    if (releaseCount && copy_src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i = 0; i < releaseCount; ++i) {
            pReleaseSyncs[i] = copy_src.pReleaseSyncs[i];
        }
    }

    if (copy_src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[copy_src.releaseCount];
        memcpy((void*)pReleaseKeys, (void*)copy_src.pReleaseKeys, sizeof(uint64_t) * copy_src.releaseCount);
    }

    return *this;
}

Win32KeyedMutexAcquireReleaseInfoNV::~Win32KeyedMutexAcquireReleaseInfoNV() {
    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds) delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);
}

void Win32KeyedMutexAcquireReleaseInfoNV::initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds) delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = in_struct->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i = 0; i < acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }

    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy((void*)pAcquireKeys, (void*)in_struct->pAcquireKeys, sizeof(uint64_t) * in_struct->acquireCount);
    }

    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy((void*)pAcquireTimeoutMilliseconds, (void*)in_struct->pAcquireTimeoutMilliseconds,
               sizeof(uint32_t) * in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i = 0; i < releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }

    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy((void*)pReleaseKeys, (void*)in_struct->pReleaseKeys, sizeof(uint64_t) * in_struct->releaseCount);
    }
}

void Win32KeyedMutexAcquireReleaseInfoNV::initialize(const Win32KeyedMutexAcquireReleaseInfoNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    acquireCount = copy_src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = copy_src->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (acquireCount && copy_src->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i = 0; i < acquireCount; ++i) {
            pAcquireSyncs[i] = copy_src->pAcquireSyncs[i];
        }
    }

    if (copy_src->pAcquireKeys) {
        pAcquireKeys = new uint64_t[copy_src->acquireCount];
        memcpy((void*)pAcquireKeys, (void*)copy_src->pAcquireKeys, sizeof(uint64_t) * copy_src->acquireCount);
    }

    if (copy_src->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[copy_src->acquireCount];
        memcpy((void*)pAcquireTimeoutMilliseconds, (void*)copy_src->pAcquireTimeoutMilliseconds,
               sizeof(uint32_t) * copy_src->acquireCount);
    }
    if (releaseCount && copy_src->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i = 0; i < releaseCount; ++i) {
            pReleaseSyncs[i] = copy_src->pReleaseSyncs[i];
        }
    }

    if (copy_src->pReleaseKeys) {
        pReleaseKeys = new uint64_t[copy_src->releaseCount];
        memcpy((void*)pReleaseKeys, (void*)copy_src->pReleaseKeys, sizeof(uint64_t) * copy_src->releaseCount);
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN

ViSurfaceCreateInfoNN::ViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), window(in_struct->window) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ViSurfaceCreateInfoNN::ViSurfaceCreateInfoNN()
    : sType(VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN), pNext(nullptr), flags(), window(nullptr) {}

ViSurfaceCreateInfoNN::ViSurfaceCreateInfoNN(const ViSurfaceCreateInfoNN& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    window = copy_src.window;
    pNext = SafePnextCopy(copy_src.pNext);
}

ViSurfaceCreateInfoNN& ViSurfaceCreateInfoNN::operator=(const ViSurfaceCreateInfoNN& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    window = copy_src.window;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ViSurfaceCreateInfoNN::~ViSurfaceCreateInfoNN() { FreePnextChain(pNext); }

void ViSurfaceCreateInfoNN::initialize(const VkViSurfaceCreateInfoNN* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    window = in_struct->window;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ViSurfaceCreateInfoNN::initialize(const ViSurfaceCreateInfoNN* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    window = copy_src->window;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_VI_NN

PipelineViewportWScalingStateCreateInfoNV::PipelineViewportWScalingStateCreateInfoNV(
    const VkPipelineViewportWScalingStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      viewportWScalingEnable(in_struct->viewportWScalingEnable),
      viewportCount(in_struct->viewportCount),
      pViewportWScalings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy((void*)pViewportWScalings, (void*)in_struct->pViewportWScalings,
               sizeof(VkViewportWScalingNV) * in_struct->viewportCount);
    }
}

PipelineViewportWScalingStateCreateInfoNV::PipelineViewportWScalingStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      viewportWScalingEnable(),
      viewportCount(),
      pViewportWScalings(nullptr) {}

PipelineViewportWScalingStateCreateInfoNV::PipelineViewportWScalingStateCreateInfoNV(
    const PipelineViewportWScalingStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    viewportWScalingEnable = copy_src.viewportWScalingEnable;
    viewportCount = copy_src.viewportCount;
    pViewportWScalings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[copy_src.viewportCount];
        memcpy((void*)pViewportWScalings, (void*)copy_src.pViewportWScalings,
               sizeof(VkViewportWScalingNV) * copy_src.viewportCount);
    }
}

PipelineViewportWScalingStateCreateInfoNV& PipelineViewportWScalingStateCreateInfoNV::operator=(
    const PipelineViewportWScalingStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewportWScalings) delete[] pViewportWScalings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewportWScalingEnable = copy_src.viewportWScalingEnable;
    viewportCount = copy_src.viewportCount;
    pViewportWScalings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[copy_src.viewportCount];
        memcpy((void*)pViewportWScalings, (void*)copy_src.pViewportWScalings,
               sizeof(VkViewportWScalingNV) * copy_src.viewportCount);
    }

    return *this;
}

PipelineViewportWScalingStateCreateInfoNV::~PipelineViewportWScalingStateCreateInfoNV() {
    if (pViewportWScalings) delete[] pViewportWScalings;
    FreePnextChain(pNext);
}

void PipelineViewportWScalingStateCreateInfoNV::initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewportWScalings) delete[] pViewportWScalings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewportWScalingEnable = in_struct->viewportWScalingEnable;
    viewportCount = in_struct->viewportCount;
    pViewportWScalings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy((void*)pViewportWScalings, (void*)in_struct->pViewportWScalings,
               sizeof(VkViewportWScalingNV) * in_struct->viewportCount);
    }
}

void PipelineViewportWScalingStateCreateInfoNV::initialize(const PipelineViewportWScalingStateCreateInfoNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewportWScalingEnable = copy_src->viewportWScalingEnable;
    viewportCount = copy_src->viewportCount;
    pViewportWScalings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[copy_src->viewportCount];
        memcpy((void*)pViewportWScalings, (void*)copy_src->pViewportWScalings,
               sizeof(VkViewportWScalingNV) * copy_src->viewportCount);
    }
}

PresentTimesInfoGOOGLE::PresentTimesInfoGOOGLE(const VkPresentTimesInfoGOOGLE* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pTimes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[in_struct->swapchainCount];
        memcpy((void*)pTimes, (void*)in_struct->pTimes, sizeof(VkPresentTimeGOOGLE) * in_struct->swapchainCount);
    }
}

PresentTimesInfoGOOGLE::PresentTimesInfoGOOGLE()
    : sType(VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE), pNext(nullptr), swapchainCount(), pTimes(nullptr) {}

PresentTimesInfoGOOGLE::PresentTimesInfoGOOGLE(const PresentTimesInfoGOOGLE& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pTimes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pTimes) {
        pTimes = new VkPresentTimeGOOGLE[copy_src.swapchainCount];
        memcpy((void*)pTimes, (void*)copy_src.pTimes, sizeof(VkPresentTimeGOOGLE) * copy_src.swapchainCount);
    }
}

PresentTimesInfoGOOGLE& PresentTimesInfoGOOGLE::operator=(const PresentTimesInfoGOOGLE& copy_src) {
    if (&copy_src == this) return *this;

    if (pTimes) delete[] pTimes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pTimes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pTimes) {
        pTimes = new VkPresentTimeGOOGLE[copy_src.swapchainCount];
        memcpy((void*)pTimes, (void*)copy_src.pTimes, sizeof(VkPresentTimeGOOGLE) * copy_src.swapchainCount);
    }

    return *this;
}

PresentTimesInfoGOOGLE::~PresentTimesInfoGOOGLE() {
    if (pTimes) delete[] pTimes;
    FreePnextChain(pNext);
}

void PresentTimesInfoGOOGLE::initialize(const VkPresentTimesInfoGOOGLE* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pTimes) delete[] pTimes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pTimes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[in_struct->swapchainCount];
        memcpy((void*)pTimes, (void*)in_struct->pTimes, sizeof(VkPresentTimeGOOGLE) * in_struct->swapchainCount);
    }
}

void PresentTimesInfoGOOGLE::initialize(const PresentTimesInfoGOOGLE* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pTimes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[copy_src->swapchainCount];
        memcpy((void*)pTimes, (void*)copy_src->pTimes, sizeof(VkPresentTimeGOOGLE) * copy_src->swapchainCount);
    }
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(
    const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), perViewPositionAllComponents(in_struct->perViewPositionAllComponents) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX),
      pNext(nullptr),
      perViewPositionAllComponents() {}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(
    const PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& copy_src) {
    sType = copy_src.sType;
    perViewPositionAllComponents = copy_src.perViewPositionAllComponents;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=(
    const PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    perViewPositionAllComponents = copy_src.perViewPositionAllComponents;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::~PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX() {
    FreePnextChain(pNext);
}

void PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(
    const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    perViewPositionAllComponents = in_struct->perViewPositionAllComponents;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(
    const PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    perViewPositionAllComponents = copy_src->perViewPositionAllComponents;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineViewportSwizzleStateCreateInfoNV::PipelineViewportSwizzleStateCreateInfoNV(
    const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), viewportCount(in_struct->viewportCount), pViewportSwizzles(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy((void*)pViewportSwizzles, (void*)in_struct->pViewportSwizzles,
               sizeof(VkViewportSwizzleNV) * in_struct->viewportCount);
    }
}

PipelineViewportSwizzleStateCreateInfoNV::PipelineViewportSwizzleStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      flags(),
      viewportCount(),
      pViewportSwizzles(nullptr) {}

PipelineViewportSwizzleStateCreateInfoNV::PipelineViewportSwizzleStateCreateInfoNV(
    const PipelineViewportSwizzleStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewportSwizzles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[copy_src.viewportCount];
        memcpy((void*)pViewportSwizzles, (void*)copy_src.pViewportSwizzles, sizeof(VkViewportSwizzleNV) * copy_src.viewportCount);
    }
}

PipelineViewportSwizzleStateCreateInfoNV& PipelineViewportSwizzleStateCreateInfoNV::operator=(
    const PipelineViewportSwizzleStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewportSwizzles) delete[] pViewportSwizzles;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewportSwizzles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[copy_src.viewportCount];
        memcpy((void*)pViewportSwizzles, (void*)copy_src.pViewportSwizzles, sizeof(VkViewportSwizzleNV) * copy_src.viewportCount);
    }

    return *this;
}

PipelineViewportSwizzleStateCreateInfoNV::~PipelineViewportSwizzleStateCreateInfoNV() {
    if (pViewportSwizzles) delete[] pViewportSwizzles;
    FreePnextChain(pNext);
}

void PipelineViewportSwizzleStateCreateInfoNV::initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewportSwizzles) delete[] pViewportSwizzles;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewportSwizzles = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy((void*)pViewportSwizzles, (void*)in_struct->pViewportSwizzles,
               sizeof(VkViewportSwizzleNV) * in_struct->viewportCount);
    }
}

void PipelineViewportSwizzleStateCreateInfoNV::initialize(const PipelineViewportSwizzleStateCreateInfoNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    viewportCount = copy_src->viewportCount;
    pViewportSwizzles = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[copy_src->viewportCount];
        memcpy((void*)pViewportSwizzles, (void*)copy_src->pViewportSwizzles, sizeof(VkViewportSwizzleNV) * copy_src->viewportCount);
    }
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::PhysicalDeviceRelaxedLineRasterizationFeaturesIMG(
    const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), relaxedLineRasterization(in_struct->relaxedLineRasterization) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::PhysicalDeviceRelaxedLineRasterizationFeaturesIMG()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG),
      pNext(nullptr),
      relaxedLineRasterization() {}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::PhysicalDeviceRelaxedLineRasterizationFeaturesIMG(
    const PhysicalDeviceRelaxedLineRasterizationFeaturesIMG& copy_src) {
    sType = copy_src.sType;
    relaxedLineRasterization = copy_src.relaxedLineRasterization;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG& PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::operator=(
    const PhysicalDeviceRelaxedLineRasterizationFeaturesIMG& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    relaxedLineRasterization = copy_src.relaxedLineRasterization;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::~PhysicalDeviceRelaxedLineRasterizationFeaturesIMG() { FreePnextChain(pNext); }

void PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::initialize(
    const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    relaxedLineRasterization = in_struct->relaxedLineRasterization;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::initialize(
    const PhysicalDeviceRelaxedLineRasterizationFeaturesIMG* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    relaxedLineRasterization = copy_src->relaxedLineRasterization;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR

AndroidHardwareBufferUsageANDROID::AndroidHardwareBufferUsageANDROID(const VkAndroidHardwareBufferUsageANDROID* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), androidHardwareBufferUsage(in_struct->androidHardwareBufferUsage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AndroidHardwareBufferUsageANDROID::AndroidHardwareBufferUsageANDROID()
    : sType(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID), pNext(nullptr), androidHardwareBufferUsage() {}

AndroidHardwareBufferUsageANDROID::AndroidHardwareBufferUsageANDROID(const AndroidHardwareBufferUsageANDROID& copy_src) {
    sType = copy_src.sType;
    androidHardwareBufferUsage = copy_src.androidHardwareBufferUsage;
    pNext = SafePnextCopy(copy_src.pNext);
}

AndroidHardwareBufferUsageANDROID& AndroidHardwareBufferUsageANDROID::operator=(const AndroidHardwareBufferUsageANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    androidHardwareBufferUsage = copy_src.androidHardwareBufferUsage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AndroidHardwareBufferUsageANDROID::~AndroidHardwareBufferUsageANDROID() { FreePnextChain(pNext); }

void AndroidHardwareBufferUsageANDROID::initialize(const VkAndroidHardwareBufferUsageANDROID* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    androidHardwareBufferUsage = in_struct->androidHardwareBufferUsage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AndroidHardwareBufferUsageANDROID::initialize(const AndroidHardwareBufferUsageANDROID* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    androidHardwareBufferUsage = copy_src->androidHardwareBufferUsage;
    pNext = SafePnextCopy(copy_src->pNext);
}

AndroidHardwareBufferPropertiesANDROID::AndroidHardwareBufferPropertiesANDROID(
    const VkAndroidHardwareBufferPropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), allocationSize(in_struct->allocationSize), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AndroidHardwareBufferPropertiesANDROID::AndroidHardwareBufferPropertiesANDROID()
    : sType(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID), pNext(nullptr), allocationSize(), memoryTypeBits() {}

AndroidHardwareBufferPropertiesANDROID::AndroidHardwareBufferPropertiesANDROID(
    const AndroidHardwareBufferPropertiesANDROID& copy_src) {
    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

AndroidHardwareBufferPropertiesANDROID& AndroidHardwareBufferPropertiesANDROID::operator=(
    const AndroidHardwareBufferPropertiesANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AndroidHardwareBufferPropertiesANDROID::~AndroidHardwareBufferPropertiesANDROID() { FreePnextChain(pNext); }

void AndroidHardwareBufferPropertiesANDROID::initialize(const VkAndroidHardwareBufferPropertiesANDROID* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    allocationSize = in_struct->allocationSize;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AndroidHardwareBufferPropertiesANDROID::initialize(const AndroidHardwareBufferPropertiesANDROID* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    allocationSize = copy_src->allocationSize;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

AndroidHardwareBufferFormatPropertiesANDROID::AndroidHardwareBufferFormatPropertiesANDROID(
    const VkAndroidHardwareBufferFormatPropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      externalFormat(in_struct->externalFormat),
      formatFeatures(in_struct->formatFeatures),
      samplerYcbcrConversionComponents(in_struct->samplerYcbcrConversionComponents),
      suggestedYcbcrModel(in_struct->suggestedYcbcrModel),
      suggestedYcbcrRange(in_struct->suggestedYcbcrRange),
      suggestedXChromaOffset(in_struct->suggestedXChromaOffset),
      suggestedYChromaOffset(in_struct->suggestedYChromaOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AndroidHardwareBufferFormatPropertiesANDROID::AndroidHardwareBufferFormatPropertiesANDROID()
    : sType(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID),
      pNext(nullptr),
      format(),
      externalFormat(),
      formatFeatures(),
      samplerYcbcrConversionComponents(),
      suggestedYcbcrModel(),
      suggestedYcbcrRange(),
      suggestedXChromaOffset(),
      suggestedYChromaOffset() {}

AndroidHardwareBufferFormatPropertiesANDROID::AndroidHardwareBufferFormatPropertiesANDROID(
    const AndroidHardwareBufferFormatPropertiesANDROID& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

AndroidHardwareBufferFormatPropertiesANDROID& AndroidHardwareBufferFormatPropertiesANDROID::operator=(
    const AndroidHardwareBufferFormatPropertiesANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AndroidHardwareBufferFormatPropertiesANDROID::~AndroidHardwareBufferFormatPropertiesANDROID() { FreePnextChain(pNext); }

void AndroidHardwareBufferFormatPropertiesANDROID::initialize(const VkAndroidHardwareBufferFormatPropertiesANDROID* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    externalFormat = in_struct->externalFormat;
    formatFeatures = in_struct->formatFeatures;
    samplerYcbcrConversionComponents = in_struct->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = in_struct->suggestedYcbcrModel;
    suggestedYcbcrRange = in_struct->suggestedYcbcrRange;
    suggestedXChromaOffset = in_struct->suggestedXChromaOffset;
    suggestedYChromaOffset = in_struct->suggestedYChromaOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AndroidHardwareBufferFormatPropertiesANDROID::initialize(const AndroidHardwareBufferFormatPropertiesANDROID* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    externalFormat = copy_src->externalFormat;
    formatFeatures = copy_src->formatFeatures;
    samplerYcbcrConversionComponents = copy_src->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src->suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src->suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src->suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src->suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportAndroidHardwareBufferInfoANDROID::ImportAndroidHardwareBufferInfoANDROID(
    const VkImportAndroidHardwareBufferInfoANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    buffer = in_struct->buffer;
}

ImportAndroidHardwareBufferInfoANDROID::ImportAndroidHardwareBufferInfoANDROID()
    : sType(VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID), pNext(nullptr), buffer(nullptr) {}

ImportAndroidHardwareBufferInfoANDROID::ImportAndroidHardwareBufferInfoANDROID(
    const ImportAndroidHardwareBufferInfoANDROID& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    buffer = copy_src.buffer;
}

ImportAndroidHardwareBufferInfoANDROID& ImportAndroidHardwareBufferInfoANDROID::operator=(
    const ImportAndroidHardwareBufferInfoANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    buffer = copy_src.buffer;

    return *this;
}

ImportAndroidHardwareBufferInfoANDROID::~ImportAndroidHardwareBufferInfoANDROID() { FreePnextChain(pNext); }

void ImportAndroidHardwareBufferInfoANDROID::initialize(const VkImportAndroidHardwareBufferInfoANDROID* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    buffer = in_struct->buffer;
}

void ImportAndroidHardwareBufferInfoANDROID::initialize(const ImportAndroidHardwareBufferInfoANDROID* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
    buffer = copy_src->buffer;
}

MemoryGetAndroidHardwareBufferInfoANDROID::MemoryGetAndroidHardwareBufferInfoANDROID(
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryGetAndroidHardwareBufferInfoANDROID::MemoryGetAndroidHardwareBufferInfoANDROID()
    : sType(VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID), pNext(nullptr), memory() {}

MemoryGetAndroidHardwareBufferInfoANDROID::MemoryGetAndroidHardwareBufferInfoANDROID(
    const MemoryGetAndroidHardwareBufferInfoANDROID& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryGetAndroidHardwareBufferInfoANDROID& MemoryGetAndroidHardwareBufferInfoANDROID::operator=(
    const MemoryGetAndroidHardwareBufferInfoANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryGetAndroidHardwareBufferInfoANDROID::~MemoryGetAndroidHardwareBufferInfoANDROID() { FreePnextChain(pNext); }

void MemoryGetAndroidHardwareBufferInfoANDROID::initialize(const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryGetAndroidHardwareBufferInfoANDROID::initialize(const MemoryGetAndroidHardwareBufferInfoANDROID* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalFormatANDROID::ExternalFormatANDROID(const VkExternalFormatANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), externalFormat(in_struct->externalFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalFormatANDROID::ExternalFormatANDROID()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID), pNext(nullptr), externalFormat() {}

ExternalFormatANDROID::ExternalFormatANDROID(const ExternalFormatANDROID& copy_src) {
    sType = copy_src.sType;
    externalFormat = copy_src.externalFormat;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalFormatANDROID& ExternalFormatANDROID::operator=(const ExternalFormatANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalFormat = copy_src.externalFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalFormatANDROID::~ExternalFormatANDROID() { FreePnextChain(pNext); }

void ExternalFormatANDROID::initialize(const VkExternalFormatANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalFormat = in_struct->externalFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalFormatANDROID::initialize(const ExternalFormatANDROID* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalFormat = copy_src->externalFormat;
    pNext = SafePnextCopy(copy_src->pNext);
}

AndroidHardwareBufferFormatProperties2ANDROID::AndroidHardwareBufferFormatProperties2ANDROID(
    const VkAndroidHardwareBufferFormatProperties2ANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      externalFormat(in_struct->externalFormat),
      formatFeatures(in_struct->formatFeatures),
      samplerYcbcrConversionComponents(in_struct->samplerYcbcrConversionComponents),
      suggestedYcbcrModel(in_struct->suggestedYcbcrModel),
      suggestedYcbcrRange(in_struct->suggestedYcbcrRange),
      suggestedXChromaOffset(in_struct->suggestedXChromaOffset),
      suggestedYChromaOffset(in_struct->suggestedYChromaOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AndroidHardwareBufferFormatProperties2ANDROID::AndroidHardwareBufferFormatProperties2ANDROID()
    : sType(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID),
      pNext(nullptr),
      format(),
      externalFormat(),
      formatFeatures(),
      samplerYcbcrConversionComponents(),
      suggestedYcbcrModel(),
      suggestedYcbcrRange(),
      suggestedXChromaOffset(),
      suggestedYChromaOffset() {}

AndroidHardwareBufferFormatProperties2ANDROID::AndroidHardwareBufferFormatProperties2ANDROID(
    const AndroidHardwareBufferFormatProperties2ANDROID& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

AndroidHardwareBufferFormatProperties2ANDROID& AndroidHardwareBufferFormatProperties2ANDROID::operator=(
    const AndroidHardwareBufferFormatProperties2ANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AndroidHardwareBufferFormatProperties2ANDROID::~AndroidHardwareBufferFormatProperties2ANDROID() { FreePnextChain(pNext); }

void AndroidHardwareBufferFormatProperties2ANDROID::initialize(const VkAndroidHardwareBufferFormatProperties2ANDROID* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    externalFormat = in_struct->externalFormat;
    formatFeatures = in_struct->formatFeatures;
    samplerYcbcrConversionComponents = in_struct->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = in_struct->suggestedYcbcrModel;
    suggestedYcbcrRange = in_struct->suggestedYcbcrRange;
    suggestedXChromaOffset = in_struct->suggestedXChromaOffset;
    suggestedYChromaOffset = in_struct->suggestedYChromaOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AndroidHardwareBufferFormatProperties2ANDROID::initialize(const AndroidHardwareBufferFormatProperties2ANDROID* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    externalFormat = copy_src->externalFormat;
    formatFeatures = copy_src->formatFeatures;
    samplerYcbcrConversionComponents = copy_src->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src->suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src->suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src->suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src->suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS

PhysicalDeviceShaderEnqueueFeaturesAMDX::PhysicalDeviceShaderEnqueueFeaturesAMDX(
    const VkPhysicalDeviceShaderEnqueueFeaturesAMDX* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderEnqueue(in_struct->shaderEnqueue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderEnqueueFeaturesAMDX::PhysicalDeviceShaderEnqueueFeaturesAMDX()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX), pNext(nullptr), shaderEnqueue() {}

PhysicalDeviceShaderEnqueueFeaturesAMDX::PhysicalDeviceShaderEnqueueFeaturesAMDX(
    const PhysicalDeviceShaderEnqueueFeaturesAMDX& copy_src) {
    sType = copy_src.sType;
    shaderEnqueue = copy_src.shaderEnqueue;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderEnqueueFeaturesAMDX& PhysicalDeviceShaderEnqueueFeaturesAMDX::operator=(
    const PhysicalDeviceShaderEnqueueFeaturesAMDX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderEnqueue = copy_src.shaderEnqueue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderEnqueueFeaturesAMDX::~PhysicalDeviceShaderEnqueueFeaturesAMDX() { FreePnextChain(pNext); }

void PhysicalDeviceShaderEnqueueFeaturesAMDX::initialize(const VkPhysicalDeviceShaderEnqueueFeaturesAMDX* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderEnqueue = in_struct->shaderEnqueue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderEnqueueFeaturesAMDX::initialize(const PhysicalDeviceShaderEnqueueFeaturesAMDX* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderEnqueue = copy_src->shaderEnqueue;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderEnqueuePropertiesAMDX::PhysicalDeviceShaderEnqueuePropertiesAMDX(
    const VkPhysicalDeviceShaderEnqueuePropertiesAMDX* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxExecutionGraphDepth(in_struct->maxExecutionGraphDepth),
      maxExecutionGraphShaderOutputNodes(in_struct->maxExecutionGraphShaderOutputNodes),
      maxExecutionGraphShaderPayloadSize(in_struct->maxExecutionGraphShaderPayloadSize),
      maxExecutionGraphShaderPayloadCount(in_struct->maxExecutionGraphShaderPayloadCount),
      executionGraphDispatchAddressAlignment(in_struct->executionGraphDispatchAddressAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderEnqueuePropertiesAMDX::PhysicalDeviceShaderEnqueuePropertiesAMDX()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX),
      pNext(nullptr),
      maxExecutionGraphDepth(),
      maxExecutionGraphShaderOutputNodes(),
      maxExecutionGraphShaderPayloadSize(),
      maxExecutionGraphShaderPayloadCount(),
      executionGraphDispatchAddressAlignment() {}

PhysicalDeviceShaderEnqueuePropertiesAMDX::PhysicalDeviceShaderEnqueuePropertiesAMDX(
    const PhysicalDeviceShaderEnqueuePropertiesAMDX& copy_src) {
    sType = copy_src.sType;
    maxExecutionGraphDepth = copy_src.maxExecutionGraphDepth;
    maxExecutionGraphShaderOutputNodes = copy_src.maxExecutionGraphShaderOutputNodes;
    maxExecutionGraphShaderPayloadSize = copy_src.maxExecutionGraphShaderPayloadSize;
    maxExecutionGraphShaderPayloadCount = copy_src.maxExecutionGraphShaderPayloadCount;
    executionGraphDispatchAddressAlignment = copy_src.executionGraphDispatchAddressAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderEnqueuePropertiesAMDX& PhysicalDeviceShaderEnqueuePropertiesAMDX::operator=(
    const PhysicalDeviceShaderEnqueuePropertiesAMDX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxExecutionGraphDepth = copy_src.maxExecutionGraphDepth;
    maxExecutionGraphShaderOutputNodes = copy_src.maxExecutionGraphShaderOutputNodes;
    maxExecutionGraphShaderPayloadSize = copy_src.maxExecutionGraphShaderPayloadSize;
    maxExecutionGraphShaderPayloadCount = copy_src.maxExecutionGraphShaderPayloadCount;
    executionGraphDispatchAddressAlignment = copy_src.executionGraphDispatchAddressAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderEnqueuePropertiesAMDX::~PhysicalDeviceShaderEnqueuePropertiesAMDX() { FreePnextChain(pNext); }

void PhysicalDeviceShaderEnqueuePropertiesAMDX::initialize(const VkPhysicalDeviceShaderEnqueuePropertiesAMDX* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxExecutionGraphDepth = in_struct->maxExecutionGraphDepth;
    maxExecutionGraphShaderOutputNodes = in_struct->maxExecutionGraphShaderOutputNodes;
    maxExecutionGraphShaderPayloadSize = in_struct->maxExecutionGraphShaderPayloadSize;
    maxExecutionGraphShaderPayloadCount = in_struct->maxExecutionGraphShaderPayloadCount;
    executionGraphDispatchAddressAlignment = in_struct->executionGraphDispatchAddressAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderEnqueuePropertiesAMDX::initialize(const PhysicalDeviceShaderEnqueuePropertiesAMDX* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxExecutionGraphDepth = copy_src->maxExecutionGraphDepth;
    maxExecutionGraphShaderOutputNodes = copy_src->maxExecutionGraphShaderOutputNodes;
    maxExecutionGraphShaderPayloadSize = copy_src->maxExecutionGraphShaderPayloadSize;
    maxExecutionGraphShaderPayloadCount = copy_src->maxExecutionGraphShaderPayloadCount;
    executionGraphDispatchAddressAlignment = copy_src->executionGraphDispatchAddressAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExecutionGraphPipelineScratchSizeAMDX::ExecutionGraphPipelineScratchSizeAMDX(
    const VkExecutionGraphPipelineScratchSizeAMDX* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExecutionGraphPipelineScratchSizeAMDX::ExecutionGraphPipelineScratchSizeAMDX()
    : sType(VK_STRUCTURE_TYPE_EXECUTION_GRAPH_PIPELINE_SCRATCH_SIZE_AMDX), pNext(nullptr), size() {}

ExecutionGraphPipelineScratchSizeAMDX::ExecutionGraphPipelineScratchSizeAMDX(
    const ExecutionGraphPipelineScratchSizeAMDX& copy_src) {
    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExecutionGraphPipelineScratchSizeAMDX& ExecutionGraphPipelineScratchSizeAMDX::operator=(
    const ExecutionGraphPipelineScratchSizeAMDX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExecutionGraphPipelineScratchSizeAMDX::~ExecutionGraphPipelineScratchSizeAMDX() { FreePnextChain(pNext); }

void ExecutionGraphPipelineScratchSizeAMDX::initialize(const VkExecutionGraphPipelineScratchSizeAMDX* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExecutionGraphPipelineScratchSizeAMDX::initialize(const ExecutionGraphPipelineScratchSizeAMDX* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExecutionGraphPipelineCreateInfoAMDX::ExecutionGraphPipelineCreateInfoAMDX(const VkExecutionGraphPipelineCreateInfoAMDX* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      pLibraryInfo(nullptr),
      layout(in_struct->layout),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(in_struct->pLibraryInfo);
}

ExecutionGraphPipelineCreateInfoAMDX::ExecutionGraphPipelineCreateInfoAMDX()
    : sType(VK_STRUCTURE_TYPE_EXECUTION_GRAPH_PIPELINE_CREATE_INFO_AMDX),
      pNext(nullptr),
      flags(),
      stageCount(),
      pStages(nullptr),
      pLibraryInfo(nullptr),
      layout(),
      basePipelineHandle(),
      basePipelineIndex() {}

ExecutionGraphPipelineCreateInfoAMDX::ExecutionGraphPipelineCreateInfoAMDX(const ExecutionGraphPipelineCreateInfoAMDX& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pLibraryInfo = nullptr;
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src.pLibraryInfo);
}

ExecutionGraphPipelineCreateInfoAMDX& ExecutionGraphPipelineCreateInfoAMDX::operator=(
    const ExecutionGraphPipelineCreateInfoAMDX& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pLibraryInfo) delete pLibraryInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pLibraryInfo = nullptr;
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src.pLibraryInfo);

    return *this;
}

ExecutionGraphPipelineCreateInfoAMDX::~ExecutionGraphPipelineCreateInfoAMDX() {
    if (pStages) delete[] pStages;
    if (pLibraryInfo) delete pLibraryInfo;
    FreePnextChain(pNext);
}

void ExecutionGraphPipelineCreateInfoAMDX::initialize(const VkExecutionGraphPipelineCreateInfoAMDX* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pLibraryInfo) delete pLibraryInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    pLibraryInfo = nullptr;
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(in_struct->pLibraryInfo);
}

void ExecutionGraphPipelineCreateInfoAMDX::initialize(const ExecutionGraphPipelineCreateInfoAMDX* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    pLibraryInfo = nullptr;
    layout = copy_src->layout;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;
    pNext = SafePnextCopy(copy_src->pNext);
    if (stageCount && copy_src->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src->pStages[i]);
        }
    }
    if (copy_src->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src->pLibraryInfo);
}

DeviceOrHostAddressConstAMDX::DeviceOrHostAddressConstAMDX(const VkDeviceOrHostAddressConstAMDX* in_struct, PNextCopyState*) {
    initialize(in_struct);
}

DeviceOrHostAddressConstAMDX::DeviceOrHostAddressConstAMDX() : hostAddress(nullptr) {}

DeviceOrHostAddressConstAMDX::DeviceOrHostAddressConstAMDX(const DeviceOrHostAddressConstAMDX& copy_src) {
    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;
}

DeviceOrHostAddressConstAMDX& DeviceOrHostAddressConstAMDX::operator=(const DeviceOrHostAddressConstAMDX& copy_src) {
    if (&copy_src == this) return *this;

    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;

    return *this;
}

DeviceOrHostAddressConstAMDX::~DeviceOrHostAddressConstAMDX() {}

void DeviceOrHostAddressConstAMDX::initialize(const VkDeviceOrHostAddressConstAMDX* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = in_struct->deviceAddress;
    hostAddress = in_struct->hostAddress;
}

void DeviceOrHostAddressConstAMDX::initialize(const DeviceOrHostAddressConstAMDX* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = copy_src->deviceAddress;
    hostAddress = copy_src->hostAddress;
}

PipelineShaderStageNodeCreateInfoAMDX::PipelineShaderStageNodeCreateInfoAMDX(
    const VkPipelineShaderStageNodeCreateInfoAMDX* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), index(in_struct->index) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
}

PipelineShaderStageNodeCreateInfoAMDX::PipelineShaderStageNodeCreateInfoAMDX()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX), pNext(nullptr), pName(nullptr), index() {}

PipelineShaderStageNodeCreateInfoAMDX::PipelineShaderStageNodeCreateInfoAMDX(
    const PipelineShaderStageNodeCreateInfoAMDX& copy_src) {
    sType = copy_src.sType;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
}

PipelineShaderStageNodeCreateInfoAMDX& PipelineShaderStageNodeCreateInfoAMDX::operator=(
    const PipelineShaderStageNodeCreateInfoAMDX& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);

    return *this;
}

PipelineShaderStageNodeCreateInfoAMDX::~PipelineShaderStageNodeCreateInfoAMDX() {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
}

void PipelineShaderStageNodeCreateInfoAMDX::initialize(const VkPipelineShaderStageNodeCreateInfoAMDX* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    index = in_struct->index;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
}

void PipelineShaderStageNodeCreateInfoAMDX::initialize(const PipelineShaderStageNodeCreateInfoAMDX* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    index = copy_src->index;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

PipelineCoverageToColorStateCreateInfoNV::PipelineCoverageToColorStateCreateInfoNV(
    const VkPipelineCoverageToColorStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      coverageToColorEnable(in_struct->coverageToColorEnable),
      coverageToColorLocation(in_struct->coverageToColorLocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineCoverageToColorStateCreateInfoNV::PipelineCoverageToColorStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      flags(),
      coverageToColorEnable(),
      coverageToColorLocation() {}

PipelineCoverageToColorStateCreateInfoNV::PipelineCoverageToColorStateCreateInfoNV(
    const PipelineCoverageToColorStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageToColorEnable = copy_src.coverageToColorEnable;
    coverageToColorLocation = copy_src.coverageToColorLocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineCoverageToColorStateCreateInfoNV& PipelineCoverageToColorStateCreateInfoNV::operator=(
    const PipelineCoverageToColorStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageToColorEnable = copy_src.coverageToColorEnable;
    coverageToColorLocation = copy_src.coverageToColorLocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineCoverageToColorStateCreateInfoNV::~PipelineCoverageToColorStateCreateInfoNV() { FreePnextChain(pNext); }

void PipelineCoverageToColorStateCreateInfoNV::initialize(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    coverageToColorEnable = in_struct->coverageToColorEnable;
    coverageToColorLocation = in_struct->coverageToColorLocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineCoverageToColorStateCreateInfoNV::initialize(const PipelineCoverageToColorStateCreateInfoNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    coverageToColorEnable = copy_src->coverageToColorEnable;
    coverageToColorLocation = copy_src->coverageToColorLocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineCoverageModulationStateCreateInfoNV::PipelineCoverageModulationStateCreateInfoNV(
    const VkPipelineCoverageModulationStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      coverageModulationMode(in_struct->coverageModulationMode),
      coverageModulationTableEnable(in_struct->coverageModulationTableEnable),
      coverageModulationTableCount(in_struct->coverageModulationTableCount),
      pCoverageModulationTable(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCoverageModulationTable) {
        pCoverageModulationTable = new float[in_struct->coverageModulationTableCount];
        memcpy((void*)pCoverageModulationTable, (void*)in_struct->pCoverageModulationTable,
               sizeof(float) * in_struct->coverageModulationTableCount);
    }
}

PipelineCoverageModulationStateCreateInfoNV::PipelineCoverageModulationStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      flags(),
      coverageModulationMode(),
      coverageModulationTableEnable(),
      coverageModulationTableCount(),
      pCoverageModulationTable(nullptr) {}

PipelineCoverageModulationStateCreateInfoNV::PipelineCoverageModulationStateCreateInfoNV(
    const PipelineCoverageModulationStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageModulationMode = copy_src.coverageModulationMode;
    coverageModulationTableEnable = copy_src.coverageModulationTableEnable;
    coverageModulationTableCount = copy_src.coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCoverageModulationTable) {
        pCoverageModulationTable = new float[copy_src.coverageModulationTableCount];
        memcpy((void*)pCoverageModulationTable, (void*)copy_src.pCoverageModulationTable,
               sizeof(float) * copy_src.coverageModulationTableCount);
    }
}

PipelineCoverageModulationStateCreateInfoNV& PipelineCoverageModulationStateCreateInfoNV::operator=(
    const PipelineCoverageModulationStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pCoverageModulationTable) delete[] pCoverageModulationTable;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageModulationMode = copy_src.coverageModulationMode;
    coverageModulationTableEnable = copy_src.coverageModulationTableEnable;
    coverageModulationTableCount = copy_src.coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCoverageModulationTable) {
        pCoverageModulationTable = new float[copy_src.coverageModulationTableCount];
        memcpy((void*)pCoverageModulationTable, (void*)copy_src.pCoverageModulationTable,
               sizeof(float) * copy_src.coverageModulationTableCount);
    }

    return *this;
}

PipelineCoverageModulationStateCreateInfoNV::~PipelineCoverageModulationStateCreateInfoNV() {
    if (pCoverageModulationTable) delete[] pCoverageModulationTable;
    FreePnextChain(pNext);
}

void PipelineCoverageModulationStateCreateInfoNV::initialize(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCoverageModulationTable) delete[] pCoverageModulationTable;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    coverageModulationMode = in_struct->coverageModulationMode;
    coverageModulationTableEnable = in_struct->coverageModulationTableEnable;
    coverageModulationTableCount = in_struct->coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pCoverageModulationTable) {
        pCoverageModulationTable = new float[in_struct->coverageModulationTableCount];
        memcpy((void*)pCoverageModulationTable, (void*)in_struct->pCoverageModulationTable,
               sizeof(float) * in_struct->coverageModulationTableCount);
    }
}

void PipelineCoverageModulationStateCreateInfoNV::initialize(const PipelineCoverageModulationStateCreateInfoNV* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    coverageModulationMode = copy_src->coverageModulationMode;
    coverageModulationTableEnable = copy_src->coverageModulationTableEnable;
    coverageModulationTableCount = copy_src->coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pCoverageModulationTable) {
        pCoverageModulationTable = new float[copy_src->coverageModulationTableCount];
        memcpy((void*)pCoverageModulationTable, (void*)copy_src->pCoverageModulationTable,
               sizeof(float) * copy_src->coverageModulationTableCount);
    }
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::PhysicalDeviceShaderSMBuiltinsPropertiesNV(
    const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderSMCount(in_struct->shaderSMCount), shaderWarpsPerSM(in_struct->shaderWarpsPerSM) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::PhysicalDeviceShaderSMBuiltinsPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV),
      pNext(nullptr),
      shaderSMCount(),
      shaderWarpsPerSM() {}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::PhysicalDeviceShaderSMBuiltinsPropertiesNV(
    const PhysicalDeviceShaderSMBuiltinsPropertiesNV& copy_src) {
    sType = copy_src.sType;
    shaderSMCount = copy_src.shaderSMCount;
    shaderWarpsPerSM = copy_src.shaderWarpsPerSM;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV& PhysicalDeviceShaderSMBuiltinsPropertiesNV::operator=(
    const PhysicalDeviceShaderSMBuiltinsPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSMCount = copy_src.shaderSMCount;
    shaderWarpsPerSM = copy_src.shaderWarpsPerSM;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::~PhysicalDeviceShaderSMBuiltinsPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShaderSMBuiltinsPropertiesNV::initialize(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSMCount = in_struct->shaderSMCount;
    shaderWarpsPerSM = in_struct->shaderWarpsPerSM;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderSMBuiltinsPropertiesNV::initialize(const PhysicalDeviceShaderSMBuiltinsPropertiesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSMCount = copy_src->shaderSMCount;
    shaderWarpsPerSM = copy_src->shaderWarpsPerSM;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::PhysicalDeviceShaderSMBuiltinsFeaturesNV(
    const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderSMBuiltins(in_struct->shaderSMBuiltins) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::PhysicalDeviceShaderSMBuiltinsFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV), pNext(nullptr), shaderSMBuiltins() {}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::PhysicalDeviceShaderSMBuiltinsFeaturesNV(
    const PhysicalDeviceShaderSMBuiltinsFeaturesNV& copy_src) {
    sType = copy_src.sType;
    shaderSMBuiltins = copy_src.shaderSMBuiltins;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV& PhysicalDeviceShaderSMBuiltinsFeaturesNV::operator=(
    const PhysicalDeviceShaderSMBuiltinsFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSMBuiltins = copy_src.shaderSMBuiltins;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::~PhysicalDeviceShaderSMBuiltinsFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShaderSMBuiltinsFeaturesNV::initialize(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSMBuiltins = in_struct->shaderSMBuiltins;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderSMBuiltinsFeaturesNV::initialize(const PhysicalDeviceShaderSMBuiltinsFeaturesNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSMBuiltins = copy_src->shaderSMBuiltins;
    pNext = SafePnextCopy(copy_src->pNext);
}

ShadingRatePaletteNV::ShadingRatePaletteNV(const VkShadingRatePaletteNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : shadingRatePaletteEntryCount(in_struct->shadingRatePaletteEntryCount), pShadingRatePaletteEntries(nullptr) {
    if (in_struct->pShadingRatePaletteEntries) {
        pShadingRatePaletteEntries = new VkShadingRatePaletteEntryNV[in_struct->shadingRatePaletteEntryCount];
        memcpy((void*)pShadingRatePaletteEntries, (void*)in_struct->pShadingRatePaletteEntries,
               sizeof(VkShadingRatePaletteEntryNV) * in_struct->shadingRatePaletteEntryCount);
    }
}

ShadingRatePaletteNV::ShadingRatePaletteNV() : shadingRatePaletteEntryCount(), pShadingRatePaletteEntries(nullptr) {}

ShadingRatePaletteNV::ShadingRatePaletteNV(const ShadingRatePaletteNV& copy_src) {
    shadingRatePaletteEntryCount = copy_src.shadingRatePaletteEntryCount;
    pShadingRatePaletteEntries = nullptr;

    if (copy_src.pShadingRatePaletteEntries) {
        pShadingRatePaletteEntries = new VkShadingRatePaletteEntryNV[copy_src.shadingRatePaletteEntryCount];
        memcpy((void*)pShadingRatePaletteEntries, (void*)copy_src.pShadingRatePaletteEntries,
               sizeof(VkShadingRatePaletteEntryNV) * copy_src.shadingRatePaletteEntryCount);
    }
}

ShadingRatePaletteNV& ShadingRatePaletteNV::operator=(const ShadingRatePaletteNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pShadingRatePaletteEntries) delete[] pShadingRatePaletteEntries;

    shadingRatePaletteEntryCount = copy_src.shadingRatePaletteEntryCount;
    pShadingRatePaletteEntries = nullptr;

    if (copy_src.pShadingRatePaletteEntries) {
        pShadingRatePaletteEntries = new VkShadingRatePaletteEntryNV[copy_src.shadingRatePaletteEntryCount];
        memcpy((void*)pShadingRatePaletteEntries, (void*)copy_src.pShadingRatePaletteEntries,
               sizeof(VkShadingRatePaletteEntryNV) * copy_src.shadingRatePaletteEntryCount);
    }

    return *this;
}

ShadingRatePaletteNV::~ShadingRatePaletteNV() {
    if (pShadingRatePaletteEntries) delete[] pShadingRatePaletteEntries;
}

void ShadingRatePaletteNV::initialize(const VkShadingRatePaletteNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pShadingRatePaletteEntries) delete[] pShadingRatePaletteEntries;
    shadingRatePaletteEntryCount = in_struct->shadingRatePaletteEntryCount;
    pShadingRatePaletteEntries = nullptr;

    if (in_struct->pShadingRatePaletteEntries) {
        pShadingRatePaletteEntries = new VkShadingRatePaletteEntryNV[in_struct->shadingRatePaletteEntryCount];
        memcpy((void*)pShadingRatePaletteEntries, (void*)in_struct->pShadingRatePaletteEntries,
               sizeof(VkShadingRatePaletteEntryNV) * in_struct->shadingRatePaletteEntryCount);
    }
}

void ShadingRatePaletteNV::initialize(const ShadingRatePaletteNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    shadingRatePaletteEntryCount = copy_src->shadingRatePaletteEntryCount;
    pShadingRatePaletteEntries = nullptr;

    if (copy_src->pShadingRatePaletteEntries) {
        pShadingRatePaletteEntries = new VkShadingRatePaletteEntryNV[copy_src->shadingRatePaletteEntryCount];
        memcpy((void*)pShadingRatePaletteEntries, (void*)copy_src->pShadingRatePaletteEntries,
               sizeof(VkShadingRatePaletteEntryNV) * copy_src->shadingRatePaletteEntryCount);
    }
}

PipelineViewportShadingRateImageStateCreateInfoNV::PipelineViewportShadingRateImageStateCreateInfoNV(
    const VkPipelineViewportShadingRateImageStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      shadingRateImageEnable(in_struct->shadingRateImageEnable),
      viewportCount(in_struct->viewportCount),
      pShadingRatePalettes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (viewportCount && in_struct->pShadingRatePalettes) {
        pShadingRatePalettes = new ShadingRatePaletteNV[viewportCount];
        for (uint32_t i = 0; i < viewportCount; ++i) {
            pShadingRatePalettes[i].initialize(&in_struct->pShadingRatePalettes[i]);
        }
    }
}

PipelineViewportShadingRateImageStateCreateInfoNV::PipelineViewportShadingRateImageStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      shadingRateImageEnable(),
      viewportCount(),
      pShadingRatePalettes(nullptr) {}

PipelineViewportShadingRateImageStateCreateInfoNV::PipelineViewportShadingRateImageStateCreateInfoNV(
    const PipelineViewportShadingRateImageStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    shadingRateImageEnable = copy_src.shadingRateImageEnable;
    viewportCount = copy_src.viewportCount;
    pShadingRatePalettes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (viewportCount && copy_src.pShadingRatePalettes) {
        pShadingRatePalettes = new ShadingRatePaletteNV[viewportCount];
        for (uint32_t i = 0; i < viewportCount; ++i) {
            pShadingRatePalettes[i].initialize(&copy_src.pShadingRatePalettes[i]);
        }
    }
}

PipelineViewportShadingRateImageStateCreateInfoNV& PipelineViewportShadingRateImageStateCreateInfoNV::operator=(
    const PipelineViewportShadingRateImageStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pShadingRatePalettes) delete[] pShadingRatePalettes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    shadingRateImageEnable = copy_src.shadingRateImageEnable;
    viewportCount = copy_src.viewportCount;
    pShadingRatePalettes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (viewportCount && copy_src.pShadingRatePalettes) {
        pShadingRatePalettes = new ShadingRatePaletteNV[viewportCount];
        for (uint32_t i = 0; i < viewportCount; ++i) {
            pShadingRatePalettes[i].initialize(&copy_src.pShadingRatePalettes[i]);
        }
    }

    return *this;
}

PipelineViewportShadingRateImageStateCreateInfoNV::~PipelineViewportShadingRateImageStateCreateInfoNV() {
    if (pShadingRatePalettes) delete[] pShadingRatePalettes;
    FreePnextChain(pNext);
}

void PipelineViewportShadingRateImageStateCreateInfoNV::initialize(
    const VkPipelineViewportShadingRateImageStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pShadingRatePalettes) delete[] pShadingRatePalettes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shadingRateImageEnable = in_struct->shadingRateImageEnable;
    viewportCount = in_struct->viewportCount;
    pShadingRatePalettes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (viewportCount && in_struct->pShadingRatePalettes) {
        pShadingRatePalettes = new ShadingRatePaletteNV[viewportCount];
        for (uint32_t i = 0; i < viewportCount; ++i) {
            pShadingRatePalettes[i].initialize(&in_struct->pShadingRatePalettes[i]);
        }
    }
}

void PipelineViewportShadingRateImageStateCreateInfoNV::initialize(
    const PipelineViewportShadingRateImageStateCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shadingRateImageEnable = copy_src->shadingRateImageEnable;
    viewportCount = copy_src->viewportCount;
    pShadingRatePalettes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (viewportCount && copy_src->pShadingRatePalettes) {
        pShadingRatePalettes = new ShadingRatePaletteNV[viewportCount];
        for (uint32_t i = 0; i < viewportCount; ++i) {
            pShadingRatePalettes[i].initialize(&copy_src->pShadingRatePalettes[i]);
        }
    }
}

PhysicalDeviceShadingRateImageFeaturesNV::PhysicalDeviceShadingRateImageFeaturesNV(
    const VkPhysicalDeviceShadingRateImageFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shadingRateImage(in_struct->shadingRateImage),
      shadingRateCoarseSampleOrder(in_struct->shadingRateCoarseSampleOrder) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShadingRateImageFeaturesNV::PhysicalDeviceShadingRateImageFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV),
      pNext(nullptr),
      shadingRateImage(),
      shadingRateCoarseSampleOrder() {}

PhysicalDeviceShadingRateImageFeaturesNV::PhysicalDeviceShadingRateImageFeaturesNV(
    const PhysicalDeviceShadingRateImageFeaturesNV& copy_src) {
    sType = copy_src.sType;
    shadingRateImage = copy_src.shadingRateImage;
    shadingRateCoarseSampleOrder = copy_src.shadingRateCoarseSampleOrder;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShadingRateImageFeaturesNV& PhysicalDeviceShadingRateImageFeaturesNV::operator=(
    const PhysicalDeviceShadingRateImageFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shadingRateImage = copy_src.shadingRateImage;
    shadingRateCoarseSampleOrder = copy_src.shadingRateCoarseSampleOrder;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShadingRateImageFeaturesNV::~PhysicalDeviceShadingRateImageFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShadingRateImageFeaturesNV::initialize(const VkPhysicalDeviceShadingRateImageFeaturesNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shadingRateImage = in_struct->shadingRateImage;
    shadingRateCoarseSampleOrder = in_struct->shadingRateCoarseSampleOrder;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShadingRateImageFeaturesNV::initialize(const PhysicalDeviceShadingRateImageFeaturesNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shadingRateImage = copy_src->shadingRateImage;
    shadingRateCoarseSampleOrder = copy_src->shadingRateCoarseSampleOrder;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShadingRateImagePropertiesNV::PhysicalDeviceShadingRateImagePropertiesNV(
    const VkPhysicalDeviceShadingRateImagePropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shadingRateTexelSize(in_struct->shadingRateTexelSize),
      shadingRatePaletteSize(in_struct->shadingRatePaletteSize),
      shadingRateMaxCoarseSamples(in_struct->shadingRateMaxCoarseSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShadingRateImagePropertiesNV::PhysicalDeviceShadingRateImagePropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV),
      pNext(nullptr),
      shadingRateTexelSize(),
      shadingRatePaletteSize(),
      shadingRateMaxCoarseSamples() {}

PhysicalDeviceShadingRateImagePropertiesNV::PhysicalDeviceShadingRateImagePropertiesNV(
    const PhysicalDeviceShadingRateImagePropertiesNV& copy_src) {
    sType = copy_src.sType;
    shadingRateTexelSize = copy_src.shadingRateTexelSize;
    shadingRatePaletteSize = copy_src.shadingRatePaletteSize;
    shadingRateMaxCoarseSamples = copy_src.shadingRateMaxCoarseSamples;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShadingRateImagePropertiesNV& PhysicalDeviceShadingRateImagePropertiesNV::operator=(
    const PhysicalDeviceShadingRateImagePropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shadingRateTexelSize = copy_src.shadingRateTexelSize;
    shadingRatePaletteSize = copy_src.shadingRatePaletteSize;
    shadingRateMaxCoarseSamples = copy_src.shadingRateMaxCoarseSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShadingRateImagePropertiesNV::~PhysicalDeviceShadingRateImagePropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShadingRateImagePropertiesNV::initialize(const VkPhysicalDeviceShadingRateImagePropertiesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shadingRateTexelSize = in_struct->shadingRateTexelSize;
    shadingRatePaletteSize = in_struct->shadingRatePaletteSize;
    shadingRateMaxCoarseSamples = in_struct->shadingRateMaxCoarseSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShadingRateImagePropertiesNV::initialize(const PhysicalDeviceShadingRateImagePropertiesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shadingRateTexelSize = copy_src->shadingRateTexelSize;
    shadingRatePaletteSize = copy_src->shadingRatePaletteSize;
    shadingRateMaxCoarseSamples = copy_src->shadingRateMaxCoarseSamples;
    pNext = SafePnextCopy(copy_src->pNext);
}

CoarseSampleOrderCustomNV::CoarseSampleOrderCustomNV(const VkCoarseSampleOrderCustomNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : shadingRate(in_struct->shadingRate),
      sampleCount(in_struct->sampleCount),
      sampleLocationCount(in_struct->sampleLocationCount),
      pSampleLocations(nullptr) {
    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkCoarseSampleLocationNV[in_struct->sampleLocationCount];
        memcpy((void*)pSampleLocations, (void*)in_struct->pSampleLocations,
               sizeof(VkCoarseSampleLocationNV) * in_struct->sampleLocationCount);
    }
}

CoarseSampleOrderCustomNV::CoarseSampleOrderCustomNV()
    : shadingRate(), sampleCount(), sampleLocationCount(), pSampleLocations(nullptr) {}

CoarseSampleOrderCustomNV::CoarseSampleOrderCustomNV(const CoarseSampleOrderCustomNV& copy_src) {
    shadingRate = copy_src.shadingRate;
    sampleCount = copy_src.sampleCount;
    sampleLocationCount = copy_src.sampleLocationCount;
    pSampleLocations = nullptr;

    if (copy_src.pSampleLocations) {
        pSampleLocations = new VkCoarseSampleLocationNV[copy_src.sampleLocationCount];
        memcpy((void*)pSampleLocations, (void*)copy_src.pSampleLocations,
               sizeof(VkCoarseSampleLocationNV) * copy_src.sampleLocationCount);
    }
}

CoarseSampleOrderCustomNV& CoarseSampleOrderCustomNV::operator=(const CoarseSampleOrderCustomNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pSampleLocations) delete[] pSampleLocations;

    shadingRate = copy_src.shadingRate;
    sampleCount = copy_src.sampleCount;
    sampleLocationCount = copy_src.sampleLocationCount;
    pSampleLocations = nullptr;

    if (copy_src.pSampleLocations) {
        pSampleLocations = new VkCoarseSampleLocationNV[copy_src.sampleLocationCount];
        memcpy((void*)pSampleLocations, (void*)copy_src.pSampleLocations,
               sizeof(VkCoarseSampleLocationNV) * copy_src.sampleLocationCount);
    }

    return *this;
}

CoarseSampleOrderCustomNV::~CoarseSampleOrderCustomNV() {
    if (pSampleLocations) delete[] pSampleLocations;
}

void CoarseSampleOrderCustomNV::initialize(const VkCoarseSampleOrderCustomNV* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSampleLocations) delete[] pSampleLocations;
    shadingRate = in_struct->shadingRate;
    sampleCount = in_struct->sampleCount;
    sampleLocationCount = in_struct->sampleLocationCount;
    pSampleLocations = nullptr;

    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkCoarseSampleLocationNV[in_struct->sampleLocationCount];
        memcpy((void*)pSampleLocations, (void*)in_struct->pSampleLocations,
               sizeof(VkCoarseSampleLocationNV) * in_struct->sampleLocationCount);
    }
}

void CoarseSampleOrderCustomNV::initialize(const CoarseSampleOrderCustomNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    shadingRate = copy_src->shadingRate;
    sampleCount = copy_src->sampleCount;
    sampleLocationCount = copy_src->sampleLocationCount;
    pSampleLocations = nullptr;

    if (copy_src->pSampleLocations) {
        pSampleLocations = new VkCoarseSampleLocationNV[copy_src->sampleLocationCount];
        memcpy((void*)pSampleLocations, (void*)copy_src->pSampleLocations,
               sizeof(VkCoarseSampleLocationNV) * copy_src->sampleLocationCount);
    }
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::PipelineViewportCoarseSampleOrderStateCreateInfoNV(
    const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      sampleOrderType(in_struct->sampleOrderType),
      customSampleOrderCount(in_struct->customSampleOrderCount),
      pCustomSampleOrders(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (customSampleOrderCount && in_struct->pCustomSampleOrders) {
        pCustomSampleOrders = new CoarseSampleOrderCustomNV[customSampleOrderCount];
        for (uint32_t i = 0; i < customSampleOrderCount; ++i) {
            pCustomSampleOrders[i].initialize(&in_struct->pCustomSampleOrders[i]);
        }
    }
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::PipelineViewportCoarseSampleOrderStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      sampleOrderType(),
      customSampleOrderCount(),
      pCustomSampleOrders(nullptr) {}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::PipelineViewportCoarseSampleOrderStateCreateInfoNV(
    const PipelineViewportCoarseSampleOrderStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    sampleOrderType = copy_src.sampleOrderType;
    customSampleOrderCount = copy_src.customSampleOrderCount;
    pCustomSampleOrders = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (customSampleOrderCount && copy_src.pCustomSampleOrders) {
        pCustomSampleOrders = new CoarseSampleOrderCustomNV[customSampleOrderCount];
        for (uint32_t i = 0; i < customSampleOrderCount; ++i) {
            pCustomSampleOrders[i].initialize(&copy_src.pCustomSampleOrders[i]);
        }
    }
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV& PipelineViewportCoarseSampleOrderStateCreateInfoNV::operator=(
    const PipelineViewportCoarseSampleOrderStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pCustomSampleOrders) delete[] pCustomSampleOrders;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleOrderType = copy_src.sampleOrderType;
    customSampleOrderCount = copy_src.customSampleOrderCount;
    pCustomSampleOrders = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (customSampleOrderCount && copy_src.pCustomSampleOrders) {
        pCustomSampleOrders = new CoarseSampleOrderCustomNV[customSampleOrderCount];
        for (uint32_t i = 0; i < customSampleOrderCount; ++i) {
            pCustomSampleOrders[i].initialize(&copy_src.pCustomSampleOrders[i]);
        }
    }

    return *this;
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::~PipelineViewportCoarseSampleOrderStateCreateInfoNV() {
    if (pCustomSampleOrders) delete[] pCustomSampleOrders;
    FreePnextChain(pNext);
}

void PipelineViewportCoarseSampleOrderStateCreateInfoNV::initialize(
    const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCustomSampleOrders) delete[] pCustomSampleOrders;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleOrderType = in_struct->sampleOrderType;
    customSampleOrderCount = in_struct->customSampleOrderCount;
    pCustomSampleOrders = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (customSampleOrderCount && in_struct->pCustomSampleOrders) {
        pCustomSampleOrders = new CoarseSampleOrderCustomNV[customSampleOrderCount];
        for (uint32_t i = 0; i < customSampleOrderCount; ++i) {
            pCustomSampleOrders[i].initialize(&in_struct->pCustomSampleOrders[i]);
        }
    }
}

void PipelineViewportCoarseSampleOrderStateCreateInfoNV::initialize(
    const PipelineViewportCoarseSampleOrderStateCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleOrderType = copy_src->sampleOrderType;
    customSampleOrderCount = copy_src->customSampleOrderCount;
    pCustomSampleOrders = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (customSampleOrderCount && copy_src->pCustomSampleOrders) {
        pCustomSampleOrders = new CoarseSampleOrderCustomNV[customSampleOrderCount];
        for (uint32_t i = 0; i < customSampleOrderCount; ++i) {
            pCustomSampleOrders[i].initialize(&copy_src->pCustomSampleOrders[i]);
        }
    }
}

RayTracingShaderGroupCreateInfoNV::RayTracingShaderGroupCreateInfoNV(const VkRayTracingShaderGroupCreateInfoNV* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      type(in_struct->type),
      generalShader(in_struct->generalShader),
      closestHitShader(in_struct->closestHitShader),
      anyHitShader(in_struct->anyHitShader),
      intersectionShader(in_struct->intersectionShader) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RayTracingShaderGroupCreateInfoNV::RayTracingShaderGroupCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV),
      pNext(nullptr),
      type(),
      generalShader(),
      closestHitShader(),
      anyHitShader(),
      intersectionShader() {}

RayTracingShaderGroupCreateInfoNV::RayTracingShaderGroupCreateInfoNV(const RayTracingShaderGroupCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    generalShader = copy_src.generalShader;
    closestHitShader = copy_src.closestHitShader;
    anyHitShader = copy_src.anyHitShader;
    intersectionShader = copy_src.intersectionShader;
    pNext = SafePnextCopy(copy_src.pNext);
}

RayTracingShaderGroupCreateInfoNV& RayTracingShaderGroupCreateInfoNV::operator=(const RayTracingShaderGroupCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    generalShader = copy_src.generalShader;
    closestHitShader = copy_src.closestHitShader;
    anyHitShader = copy_src.anyHitShader;
    intersectionShader = copy_src.intersectionShader;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RayTracingShaderGroupCreateInfoNV::~RayTracingShaderGroupCreateInfoNV() { FreePnextChain(pNext); }

void RayTracingShaderGroupCreateInfoNV::initialize(const VkRayTracingShaderGroupCreateInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    generalShader = in_struct->generalShader;
    closestHitShader = in_struct->closestHitShader;
    anyHitShader = in_struct->anyHitShader;
    intersectionShader = in_struct->intersectionShader;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RayTracingShaderGroupCreateInfoNV::initialize(const RayTracingShaderGroupCreateInfoNV* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    generalShader = copy_src->generalShader;
    closestHitShader = copy_src->closestHitShader;
    anyHitShader = copy_src->anyHitShader;
    intersectionShader = copy_src->intersectionShader;
    pNext = SafePnextCopy(copy_src->pNext);
}

RayTracingPipelineCreateInfoNV::RayTracingPipelineCreateInfoNV(const VkRayTracingPipelineCreateInfoNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      groupCount(in_struct->groupCount),
      pGroups(nullptr),
      maxRecursionDepth(in_struct->maxRecursionDepth),
      layout(in_struct->layout),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (groupCount && in_struct->pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
}

RayTracingPipelineCreateInfoNV::RayTracingPipelineCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV),
      pNext(nullptr),
      flags(),
      stageCount(),
      pStages(nullptr),
      groupCount(),
      pGroups(nullptr),
      maxRecursionDepth(),
      layout(),
      basePipelineHandle(),
      basePipelineIndex() {}

RayTracingPipelineCreateInfoNV::RayTracingPipelineCreateInfoNV(const RayTracingPipelineCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    maxRecursionDepth = copy_src.maxRecursionDepth;
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (groupCount && copy_src.pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }
}

RayTracingPipelineCreateInfoNV& RayTracingPipelineCreateInfoNV::operator=(const RayTracingPipelineCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    maxRecursionDepth = copy_src.maxRecursionDepth;
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (groupCount && copy_src.pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }

    return *this;
}

RayTracingPipelineCreateInfoNV::~RayTracingPipelineCreateInfoNV() {
    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    FreePnextChain(pNext);
}

void RayTracingPipelineCreateInfoNV::initialize(const VkRayTracingPipelineCreateInfoNV* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    groupCount = in_struct->groupCount;
    pGroups = nullptr;
    maxRecursionDepth = in_struct->maxRecursionDepth;
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (groupCount && in_struct->pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
}

void RayTracingPipelineCreateInfoNV::initialize(const RayTracingPipelineCreateInfoNV* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    groupCount = copy_src->groupCount;
    pGroups = nullptr;
    maxRecursionDepth = copy_src->maxRecursionDepth;
    layout = copy_src->layout;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;
    pNext = SafePnextCopy(copy_src->pNext);
    if (stageCount && copy_src->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src->pStages[i]);
        }
    }
    if (groupCount && copy_src->pGroups) {
        pGroups = new RayTracingShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src->pGroups[i]);
        }
    }
}

GeometryTrianglesNV::GeometryTrianglesNV(const VkGeometryTrianglesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      vertexData(in_struct->vertexData),
      vertexOffset(in_struct->vertexOffset),
      vertexCount(in_struct->vertexCount),
      vertexStride(in_struct->vertexStride),
      vertexFormat(in_struct->vertexFormat),
      indexData(in_struct->indexData),
      indexOffset(in_struct->indexOffset),
      indexCount(in_struct->indexCount),
      indexType(in_struct->indexType),
      transformData(in_struct->transformData),
      transformOffset(in_struct->transformOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

GeometryTrianglesNV::GeometryTrianglesNV()
    : sType(VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV),
      pNext(nullptr),
      vertexData(),
      vertexOffset(),
      vertexCount(),
      vertexStride(),
      vertexFormat(),
      indexData(),
      indexOffset(),
      indexCount(),
      indexType(),
      transformData(),
      transformOffset() {}

GeometryTrianglesNV::GeometryTrianglesNV(const GeometryTrianglesNV& copy_src) {
    sType = copy_src.sType;
    vertexData = copy_src.vertexData;
    vertexOffset = copy_src.vertexOffset;
    vertexCount = copy_src.vertexCount;
    vertexStride = copy_src.vertexStride;
    vertexFormat = copy_src.vertexFormat;
    indexData = copy_src.indexData;
    indexOffset = copy_src.indexOffset;
    indexCount = copy_src.indexCount;
    indexType = copy_src.indexType;
    transformData = copy_src.transformData;
    transformOffset = copy_src.transformOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

GeometryTrianglesNV& GeometryTrianglesNV::operator=(const GeometryTrianglesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexData = copy_src.vertexData;
    vertexOffset = copy_src.vertexOffset;
    vertexCount = copy_src.vertexCount;
    vertexStride = copy_src.vertexStride;
    vertexFormat = copy_src.vertexFormat;
    indexData = copy_src.indexData;
    indexOffset = copy_src.indexOffset;
    indexCount = copy_src.indexCount;
    indexType = copy_src.indexType;
    transformData = copy_src.transformData;
    transformOffset = copy_src.transformOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

GeometryTrianglesNV::~GeometryTrianglesNV() { FreePnextChain(pNext); }

void GeometryTrianglesNV::initialize(const VkGeometryTrianglesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexData = in_struct->vertexData;
    vertexOffset = in_struct->vertexOffset;
    vertexCount = in_struct->vertexCount;
    vertexStride = in_struct->vertexStride;
    vertexFormat = in_struct->vertexFormat;
    indexData = in_struct->indexData;
    indexOffset = in_struct->indexOffset;
    indexCount = in_struct->indexCount;
    indexType = in_struct->indexType;
    transformData = in_struct->transformData;
    transformOffset = in_struct->transformOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void GeometryTrianglesNV::initialize(const GeometryTrianglesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexData = copy_src->vertexData;
    vertexOffset = copy_src->vertexOffset;
    vertexCount = copy_src->vertexCount;
    vertexStride = copy_src->vertexStride;
    vertexFormat = copy_src->vertexFormat;
    indexData = copy_src->indexData;
    indexOffset = copy_src->indexOffset;
    indexCount = copy_src->indexCount;
    indexType = copy_src->indexType;
    transformData = copy_src->transformData;
    transformOffset = copy_src->transformOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

GeometryAABBNV::GeometryAABBNV(const VkGeometryAABBNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      aabbData(in_struct->aabbData),
      numAABBs(in_struct->numAABBs),
      stride(in_struct->stride),
      offset(in_struct->offset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

GeometryAABBNV::GeometryAABBNV()
    : sType(VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV), pNext(nullptr), aabbData(), numAABBs(), stride(), offset() {}

GeometryAABBNV::GeometryAABBNV(const GeometryAABBNV& copy_src) {
    sType = copy_src.sType;
    aabbData = copy_src.aabbData;
    numAABBs = copy_src.numAABBs;
    stride = copy_src.stride;
    offset = copy_src.offset;
    pNext = SafePnextCopy(copy_src.pNext);
}

GeometryAABBNV& GeometryAABBNV::operator=(const GeometryAABBNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    aabbData = copy_src.aabbData;
    numAABBs = copy_src.numAABBs;
    stride = copy_src.stride;
    offset = copy_src.offset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

GeometryAABBNV::~GeometryAABBNV() { FreePnextChain(pNext); }

void GeometryAABBNV::initialize(const VkGeometryAABBNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    aabbData = in_struct->aabbData;
    numAABBs = in_struct->numAABBs;
    stride = in_struct->stride;
    offset = in_struct->offset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void GeometryAABBNV::initialize(const GeometryAABBNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    aabbData = copy_src->aabbData;
    numAABBs = copy_src->numAABBs;
    stride = copy_src->stride;
    offset = copy_src->offset;
    pNext = SafePnextCopy(copy_src->pNext);
}

GeometryNV::GeometryNV(const VkGeometryNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), geometryType(in_struct->geometryType), geometry(in_struct->geometry), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

GeometryNV::GeometryNV() : sType(VK_STRUCTURE_TYPE_GEOMETRY_NV), pNext(nullptr), geometryType(), geometry(), flags() {}

GeometryNV::GeometryNV(const GeometryNV& copy_src) {
    sType = copy_src.sType;
    geometryType = copy_src.geometryType;
    geometry = copy_src.geometry;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

GeometryNV& GeometryNV::operator=(const GeometryNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    geometryType = copy_src.geometryType;
    geometry = copy_src.geometry;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

GeometryNV::~GeometryNV() { FreePnextChain(pNext); }

void GeometryNV::initialize(const VkGeometryNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    geometryType = in_struct->geometryType;
    geometry = in_struct->geometry;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void GeometryNV::initialize(const GeometryNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    geometryType = copy_src->geometryType;
    geometry = copy_src->geometry;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureInfoNV::AccelerationStructureInfoNV(const VkAccelerationStructureInfoNV* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      type(in_struct->type),
      flags(in_struct->flags),
      instanceCount(in_struct->instanceCount),
      geometryCount(in_struct->geometryCount),
      pGeometries(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (geometryCount && in_struct->pGeometries) {
        pGeometries = new GeometryNV[geometryCount];
        for (uint32_t i = 0; i < geometryCount; ++i) {
            pGeometries[i].initialize(&in_struct->pGeometries[i]);
        }
    }
}

AccelerationStructureInfoNV::AccelerationStructureInfoNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV),
      pNext(nullptr),
      type(),
      flags(),
      instanceCount(),
      geometryCount(),
      pGeometries(nullptr) {}

AccelerationStructureInfoNV::AccelerationStructureInfoNV(const AccelerationStructureInfoNV& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    instanceCount = copy_src.instanceCount;
    geometryCount = copy_src.geometryCount;
    pGeometries = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (geometryCount && copy_src.pGeometries) {
        pGeometries = new GeometryNV[geometryCount];
        for (uint32_t i = 0; i < geometryCount; ++i) {
            pGeometries[i].initialize(&copy_src.pGeometries[i]);
        }
    }
}

AccelerationStructureInfoNV& AccelerationStructureInfoNV::operator=(const AccelerationStructureInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pGeometries) delete[] pGeometries;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    flags = copy_src.flags;
    instanceCount = copy_src.instanceCount;
    geometryCount = copy_src.geometryCount;
    pGeometries = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (geometryCount && copy_src.pGeometries) {
        pGeometries = new GeometryNV[geometryCount];
        for (uint32_t i = 0; i < geometryCount; ++i) {
            pGeometries[i].initialize(&copy_src.pGeometries[i]);
        }
    }

    return *this;
}

AccelerationStructureInfoNV::~AccelerationStructureInfoNV() {
    if (pGeometries) delete[] pGeometries;
    FreePnextChain(pNext);
}

void AccelerationStructureInfoNV::initialize(const VkAccelerationStructureInfoNV* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pGeometries) delete[] pGeometries;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    flags = in_struct->flags;
    instanceCount = in_struct->instanceCount;
    geometryCount = in_struct->geometryCount;
    pGeometries = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (geometryCount && in_struct->pGeometries) {
        pGeometries = new GeometryNV[geometryCount];
        for (uint32_t i = 0; i < geometryCount; ++i) {
            pGeometries[i].initialize(&in_struct->pGeometries[i]);
        }
    }
}

void AccelerationStructureInfoNV::initialize(const AccelerationStructureInfoNV* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    flags = copy_src->flags;
    instanceCount = copy_src->instanceCount;
    geometryCount = copy_src->geometryCount;
    pGeometries = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (geometryCount && copy_src->pGeometries) {
        pGeometries = new GeometryNV[geometryCount];
        for (uint32_t i = 0; i < geometryCount; ++i) {
            pGeometries[i].initialize(&copy_src->pGeometries[i]);
        }
    }
}

AccelerationStructureCreateInfoNV::AccelerationStructureCreateInfoNV(const VkAccelerationStructureCreateInfoNV* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), compactedSize(in_struct->compactedSize), info(&in_struct->info) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureCreateInfoNV::AccelerationStructureCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV), pNext(nullptr), compactedSize() {}

AccelerationStructureCreateInfoNV::AccelerationStructureCreateInfoNV(const AccelerationStructureCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    compactedSize = copy_src.compactedSize;
    info.initialize(&copy_src.info);
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureCreateInfoNV& AccelerationStructureCreateInfoNV::operator=(const AccelerationStructureCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    compactedSize = copy_src.compactedSize;
    info.initialize(&copy_src.info);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureCreateInfoNV::~AccelerationStructureCreateInfoNV() { FreePnextChain(pNext); }

void AccelerationStructureCreateInfoNV::initialize(const VkAccelerationStructureCreateInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    compactedSize = in_struct->compactedSize;
    info.initialize(&in_struct->info);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureCreateInfoNV::initialize(const AccelerationStructureCreateInfoNV* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    compactedSize = copy_src->compactedSize;
    info.initialize(&copy_src->info);
    pNext = SafePnextCopy(copy_src->pNext);
}

BindAccelerationStructureMemoryInfoNV::BindAccelerationStructureMemoryInfoNV(
    const VkBindAccelerationStructureMemoryInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      accelerationStructure(in_struct->accelerationStructure),
      memory(in_struct->memory),
      memoryOffset(in_struct->memoryOffset),
      deviceIndexCount(in_struct->deviceIndexCount),
      pDeviceIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

BindAccelerationStructureMemoryInfoNV::BindAccelerationStructureMemoryInfoNV()
    : sType(VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV),
      pNext(nullptr),
      accelerationStructure(),
      memory(),
      memoryOffset(),
      deviceIndexCount(),
      pDeviceIndices(nullptr) {}

BindAccelerationStructureMemoryInfoNV::BindAccelerationStructureMemoryInfoNV(
    const BindAccelerationStructureMemoryInfoNV& copy_src) {
    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }
}

BindAccelerationStructureMemoryInfoNV& BindAccelerationStructureMemoryInfoNV::operator=(
    const BindAccelerationStructureMemoryInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    return *this;
}

BindAccelerationStructureMemoryInfoNV::~BindAccelerationStructureMemoryInfoNV() {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
}

void BindAccelerationStructureMemoryInfoNV::initialize(const VkBindAccelerationStructureMemoryInfoNV* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructure = in_struct->accelerationStructure;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

void BindAccelerationStructureMemoryInfoNV::initialize(const BindAccelerationStructureMemoryInfoNV* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructure = copy_src->accelerationStructure;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    deviceIndexCount = copy_src->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src->pDeviceIndices, sizeof(uint32_t) * copy_src->deviceIndexCount);
    }
}

WriteDescriptorSetAccelerationStructureNV::WriteDescriptorSetAccelerationStructureNV(
    const VkWriteDescriptorSetAccelerationStructureNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), accelerationStructureCount(in_struct->accelerationStructureCount), pAccelerationStructures(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (accelerationStructureCount && in_struct->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureNV[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = in_struct->pAccelerationStructures[i];
        }
    }
}

WriteDescriptorSetAccelerationStructureNV::WriteDescriptorSetAccelerationStructureNV()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV),
      pNext(nullptr),
      accelerationStructureCount(),
      pAccelerationStructures(nullptr) {}

WriteDescriptorSetAccelerationStructureNV::WriteDescriptorSetAccelerationStructureNV(
    const WriteDescriptorSetAccelerationStructureNV& copy_src) {
    sType = copy_src.sType;
    accelerationStructureCount = copy_src.accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (accelerationStructureCount && copy_src.pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureNV[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src.pAccelerationStructures[i];
        }
    }
}

WriteDescriptorSetAccelerationStructureNV& WriteDescriptorSetAccelerationStructureNV::operator=(
    const WriteDescriptorSetAccelerationStructureNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructureCount = copy_src.accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (accelerationStructureCount && copy_src.pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureNV[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src.pAccelerationStructures[i];
        }
    }

    return *this;
}

WriteDescriptorSetAccelerationStructureNV::~WriteDescriptorSetAccelerationStructureNV() {
    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);
}

void WriteDescriptorSetAccelerationStructureNV::initialize(const VkWriteDescriptorSetAccelerationStructureNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructureCount = in_struct->accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (accelerationStructureCount && in_struct->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureNV[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = in_struct->pAccelerationStructures[i];
        }
    }
}

void WriteDescriptorSetAccelerationStructureNV::initialize(const WriteDescriptorSetAccelerationStructureNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructureCount = copy_src->accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (accelerationStructureCount && copy_src->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureNV[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src->pAccelerationStructures[i];
        }
    }
}

AccelerationStructureMemoryRequirementsInfoNV::AccelerationStructureMemoryRequirementsInfoNV(
    const VkAccelerationStructureMemoryRequirementsInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), type(in_struct->type), accelerationStructure(in_struct->accelerationStructure) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureMemoryRequirementsInfoNV::AccelerationStructureMemoryRequirementsInfoNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV),
      pNext(nullptr),
      type(),
      accelerationStructure() {}

AccelerationStructureMemoryRequirementsInfoNV::AccelerationStructureMemoryRequirementsInfoNV(
    const AccelerationStructureMemoryRequirementsInfoNV& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    accelerationStructure = copy_src.accelerationStructure;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureMemoryRequirementsInfoNV& AccelerationStructureMemoryRequirementsInfoNV::operator=(
    const AccelerationStructureMemoryRequirementsInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    accelerationStructure = copy_src.accelerationStructure;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureMemoryRequirementsInfoNV::~AccelerationStructureMemoryRequirementsInfoNV() { FreePnextChain(pNext); }

void AccelerationStructureMemoryRequirementsInfoNV::initialize(const VkAccelerationStructureMemoryRequirementsInfoNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    accelerationStructure = in_struct->accelerationStructure;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureMemoryRequirementsInfoNV::initialize(const AccelerationStructureMemoryRequirementsInfoNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    accelerationStructure = copy_src->accelerationStructure;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingPropertiesNV::PhysicalDeviceRayTracingPropertiesNV(const VkPhysicalDeviceRayTracingPropertiesNV* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      shaderGroupHandleSize(in_struct->shaderGroupHandleSize),
      maxRecursionDepth(in_struct->maxRecursionDepth),
      maxShaderGroupStride(in_struct->maxShaderGroupStride),
      shaderGroupBaseAlignment(in_struct->shaderGroupBaseAlignment),
      maxGeometryCount(in_struct->maxGeometryCount),
      maxInstanceCount(in_struct->maxInstanceCount),
      maxTriangleCount(in_struct->maxTriangleCount),
      maxDescriptorSetAccelerationStructures(in_struct->maxDescriptorSetAccelerationStructures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingPropertiesNV::PhysicalDeviceRayTracingPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV),
      pNext(nullptr),
      shaderGroupHandleSize(),
      maxRecursionDepth(),
      maxShaderGroupStride(),
      shaderGroupBaseAlignment(),
      maxGeometryCount(),
      maxInstanceCount(),
      maxTriangleCount(),
      maxDescriptorSetAccelerationStructures() {}

PhysicalDeviceRayTracingPropertiesNV::PhysicalDeviceRayTracingPropertiesNV(const PhysicalDeviceRayTracingPropertiesNV& copy_src) {
    sType = copy_src.sType;
    shaderGroupHandleSize = copy_src.shaderGroupHandleSize;
    maxRecursionDepth = copy_src.maxRecursionDepth;
    maxShaderGroupStride = copy_src.maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src.shaderGroupBaseAlignment;
    maxGeometryCount = copy_src.maxGeometryCount;
    maxInstanceCount = copy_src.maxInstanceCount;
    maxTriangleCount = copy_src.maxTriangleCount;
    maxDescriptorSetAccelerationStructures = copy_src.maxDescriptorSetAccelerationStructures;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingPropertiesNV& PhysicalDeviceRayTracingPropertiesNV::operator=(
    const PhysicalDeviceRayTracingPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderGroupHandleSize = copy_src.shaderGroupHandleSize;
    maxRecursionDepth = copy_src.maxRecursionDepth;
    maxShaderGroupStride = copy_src.maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src.shaderGroupBaseAlignment;
    maxGeometryCount = copy_src.maxGeometryCount;
    maxInstanceCount = copy_src.maxInstanceCount;
    maxTriangleCount = copy_src.maxTriangleCount;
    maxDescriptorSetAccelerationStructures = copy_src.maxDescriptorSetAccelerationStructures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingPropertiesNV::~PhysicalDeviceRayTracingPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingPropertiesNV::initialize(const VkPhysicalDeviceRayTracingPropertiesNV* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderGroupHandleSize = in_struct->shaderGroupHandleSize;
    maxRecursionDepth = in_struct->maxRecursionDepth;
    maxShaderGroupStride = in_struct->maxShaderGroupStride;
    shaderGroupBaseAlignment = in_struct->shaderGroupBaseAlignment;
    maxGeometryCount = in_struct->maxGeometryCount;
    maxInstanceCount = in_struct->maxInstanceCount;
    maxTriangleCount = in_struct->maxTriangleCount;
    maxDescriptorSetAccelerationStructures = in_struct->maxDescriptorSetAccelerationStructures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingPropertiesNV::initialize(const PhysicalDeviceRayTracingPropertiesNV* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderGroupHandleSize = copy_src->shaderGroupHandleSize;
    maxRecursionDepth = copy_src->maxRecursionDepth;
    maxShaderGroupStride = copy_src->maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src->shaderGroupBaseAlignment;
    maxGeometryCount = copy_src->maxGeometryCount;
    maxInstanceCount = copy_src->maxInstanceCount;
    maxTriangleCount = copy_src->maxTriangleCount;
    maxDescriptorSetAccelerationStructures = copy_src->maxDescriptorSetAccelerationStructures;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::PhysicalDeviceRepresentativeFragmentTestFeaturesNV(
    const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), representativeFragmentTest(in_struct->representativeFragmentTest) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::PhysicalDeviceRepresentativeFragmentTestFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV),
      pNext(nullptr),
      representativeFragmentTest() {}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::PhysicalDeviceRepresentativeFragmentTestFeaturesNV(
    const PhysicalDeviceRepresentativeFragmentTestFeaturesNV& copy_src) {
    sType = copy_src.sType;
    representativeFragmentTest = copy_src.representativeFragmentTest;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV& PhysicalDeviceRepresentativeFragmentTestFeaturesNV::operator=(
    const PhysicalDeviceRepresentativeFragmentTestFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    representativeFragmentTest = copy_src.representativeFragmentTest;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::~PhysicalDeviceRepresentativeFragmentTestFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceRepresentativeFragmentTestFeaturesNV::initialize(
    const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    representativeFragmentTest = in_struct->representativeFragmentTest;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRepresentativeFragmentTestFeaturesNV::initialize(
    const PhysicalDeviceRepresentativeFragmentTestFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    representativeFragmentTest = copy_src->representativeFragmentTest;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::PipelineRepresentativeFragmentTestStateCreateInfoNV(
    const VkPipelineRepresentativeFragmentTestStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), representativeFragmentTestEnable(in_struct->representativeFragmentTestEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::PipelineRepresentativeFragmentTestStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      representativeFragmentTestEnable() {}

PipelineRepresentativeFragmentTestStateCreateInfoNV::PipelineRepresentativeFragmentTestStateCreateInfoNV(
    const PipelineRepresentativeFragmentTestStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    representativeFragmentTestEnable = copy_src.representativeFragmentTestEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV& PipelineRepresentativeFragmentTestStateCreateInfoNV::operator=(
    const PipelineRepresentativeFragmentTestStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    representativeFragmentTestEnable = copy_src.representativeFragmentTestEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::~PipelineRepresentativeFragmentTestStateCreateInfoNV() {
    FreePnextChain(pNext);
}

void PipelineRepresentativeFragmentTestStateCreateInfoNV::initialize(
    const VkPipelineRepresentativeFragmentTestStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    representativeFragmentTestEnable = in_struct->representativeFragmentTestEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRepresentativeFragmentTestStateCreateInfoNV::initialize(
    const PipelineRepresentativeFragmentTestStateCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    representativeFragmentTestEnable = copy_src->representativeFragmentTestEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineCompilerControlCreateInfoAMD::PipelineCompilerControlCreateInfoAMD(const VkPipelineCompilerControlCreateInfoAMD* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), compilerControlFlags(in_struct->compilerControlFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineCompilerControlCreateInfoAMD::PipelineCompilerControlCreateInfoAMD()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD), pNext(nullptr), compilerControlFlags() {}

PipelineCompilerControlCreateInfoAMD::PipelineCompilerControlCreateInfoAMD(const PipelineCompilerControlCreateInfoAMD& copy_src) {
    sType = copy_src.sType;
    compilerControlFlags = copy_src.compilerControlFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineCompilerControlCreateInfoAMD& PipelineCompilerControlCreateInfoAMD::operator=(
    const PipelineCompilerControlCreateInfoAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    compilerControlFlags = copy_src.compilerControlFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineCompilerControlCreateInfoAMD::~PipelineCompilerControlCreateInfoAMD() { FreePnextChain(pNext); }

void PipelineCompilerControlCreateInfoAMD::initialize(const VkPipelineCompilerControlCreateInfoAMD* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    compilerControlFlags = in_struct->compilerControlFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineCompilerControlCreateInfoAMD::initialize(const PipelineCompilerControlCreateInfoAMD* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    compilerControlFlags = copy_src->compilerControlFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderCorePropertiesAMD::PhysicalDeviceShaderCorePropertiesAMD(
    const VkPhysicalDeviceShaderCorePropertiesAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderEngineCount(in_struct->shaderEngineCount),
      shaderArraysPerEngineCount(in_struct->shaderArraysPerEngineCount),
      computeUnitsPerShaderArray(in_struct->computeUnitsPerShaderArray),
      simdPerComputeUnit(in_struct->simdPerComputeUnit),
      wavefrontsPerSimd(in_struct->wavefrontsPerSimd),
      wavefrontSize(in_struct->wavefrontSize),
      sgprsPerSimd(in_struct->sgprsPerSimd),
      minSgprAllocation(in_struct->minSgprAllocation),
      maxSgprAllocation(in_struct->maxSgprAllocation),
      sgprAllocationGranularity(in_struct->sgprAllocationGranularity),
      vgprsPerSimd(in_struct->vgprsPerSimd),
      minVgprAllocation(in_struct->minVgprAllocation),
      maxVgprAllocation(in_struct->maxVgprAllocation),
      vgprAllocationGranularity(in_struct->vgprAllocationGranularity) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderCorePropertiesAMD::PhysicalDeviceShaderCorePropertiesAMD()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD),
      pNext(nullptr),
      shaderEngineCount(),
      shaderArraysPerEngineCount(),
      computeUnitsPerShaderArray(),
      simdPerComputeUnit(),
      wavefrontsPerSimd(),
      wavefrontSize(),
      sgprsPerSimd(),
      minSgprAllocation(),
      maxSgprAllocation(),
      sgprAllocationGranularity(),
      vgprsPerSimd(),
      minVgprAllocation(),
      maxVgprAllocation(),
      vgprAllocationGranularity() {}

PhysicalDeviceShaderCorePropertiesAMD::PhysicalDeviceShaderCorePropertiesAMD(
    const PhysicalDeviceShaderCorePropertiesAMD& copy_src) {
    sType = copy_src.sType;
    shaderEngineCount = copy_src.shaderEngineCount;
    shaderArraysPerEngineCount = copy_src.shaderArraysPerEngineCount;
    computeUnitsPerShaderArray = copy_src.computeUnitsPerShaderArray;
    simdPerComputeUnit = copy_src.simdPerComputeUnit;
    wavefrontsPerSimd = copy_src.wavefrontsPerSimd;
    wavefrontSize = copy_src.wavefrontSize;
    sgprsPerSimd = copy_src.sgprsPerSimd;
    minSgprAllocation = copy_src.minSgprAllocation;
    maxSgprAllocation = copy_src.maxSgprAllocation;
    sgprAllocationGranularity = copy_src.sgprAllocationGranularity;
    vgprsPerSimd = copy_src.vgprsPerSimd;
    minVgprAllocation = copy_src.minVgprAllocation;
    maxVgprAllocation = copy_src.maxVgprAllocation;
    vgprAllocationGranularity = copy_src.vgprAllocationGranularity;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderCorePropertiesAMD& PhysicalDeviceShaderCorePropertiesAMD::operator=(
    const PhysicalDeviceShaderCorePropertiesAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderEngineCount = copy_src.shaderEngineCount;
    shaderArraysPerEngineCount = copy_src.shaderArraysPerEngineCount;
    computeUnitsPerShaderArray = copy_src.computeUnitsPerShaderArray;
    simdPerComputeUnit = copy_src.simdPerComputeUnit;
    wavefrontsPerSimd = copy_src.wavefrontsPerSimd;
    wavefrontSize = copy_src.wavefrontSize;
    sgprsPerSimd = copy_src.sgprsPerSimd;
    minSgprAllocation = copy_src.minSgprAllocation;
    maxSgprAllocation = copy_src.maxSgprAllocation;
    sgprAllocationGranularity = copy_src.sgprAllocationGranularity;
    vgprsPerSimd = copy_src.vgprsPerSimd;
    minVgprAllocation = copy_src.minVgprAllocation;
    maxVgprAllocation = copy_src.maxVgprAllocation;
    vgprAllocationGranularity = copy_src.vgprAllocationGranularity;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderCorePropertiesAMD::~PhysicalDeviceShaderCorePropertiesAMD() { FreePnextChain(pNext); }

void PhysicalDeviceShaderCorePropertiesAMD::initialize(const VkPhysicalDeviceShaderCorePropertiesAMD* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderEngineCount = in_struct->shaderEngineCount;
    shaderArraysPerEngineCount = in_struct->shaderArraysPerEngineCount;
    computeUnitsPerShaderArray = in_struct->computeUnitsPerShaderArray;
    simdPerComputeUnit = in_struct->simdPerComputeUnit;
    wavefrontsPerSimd = in_struct->wavefrontsPerSimd;
    wavefrontSize = in_struct->wavefrontSize;
    sgprsPerSimd = in_struct->sgprsPerSimd;
    minSgprAllocation = in_struct->minSgprAllocation;
    maxSgprAllocation = in_struct->maxSgprAllocation;
    sgprAllocationGranularity = in_struct->sgprAllocationGranularity;
    vgprsPerSimd = in_struct->vgprsPerSimd;
    minVgprAllocation = in_struct->minVgprAllocation;
    maxVgprAllocation = in_struct->maxVgprAllocation;
    vgprAllocationGranularity = in_struct->vgprAllocationGranularity;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderCorePropertiesAMD::initialize(const PhysicalDeviceShaderCorePropertiesAMD* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderEngineCount = copy_src->shaderEngineCount;
    shaderArraysPerEngineCount = copy_src->shaderArraysPerEngineCount;
    computeUnitsPerShaderArray = copy_src->computeUnitsPerShaderArray;
    simdPerComputeUnit = copy_src->simdPerComputeUnit;
    wavefrontsPerSimd = copy_src->wavefrontsPerSimd;
    wavefrontSize = copy_src->wavefrontSize;
    sgprsPerSimd = copy_src->sgprsPerSimd;
    minSgprAllocation = copy_src->minSgprAllocation;
    maxSgprAllocation = copy_src->maxSgprAllocation;
    sgprAllocationGranularity = copy_src->sgprAllocationGranularity;
    vgprsPerSimd = copy_src->vgprsPerSimd;
    minVgprAllocation = copy_src->minVgprAllocation;
    maxVgprAllocation = copy_src->maxVgprAllocation;
    vgprAllocationGranularity = copy_src->vgprAllocationGranularity;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceMemoryOverallocationCreateInfoAMD::DeviceMemoryOverallocationCreateInfoAMD(
    const VkDeviceMemoryOverallocationCreateInfoAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), overallocationBehavior(in_struct->overallocationBehavior) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceMemoryOverallocationCreateInfoAMD::DeviceMemoryOverallocationCreateInfoAMD()
    : sType(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD), pNext(nullptr), overallocationBehavior() {}

DeviceMemoryOverallocationCreateInfoAMD::DeviceMemoryOverallocationCreateInfoAMD(
    const DeviceMemoryOverallocationCreateInfoAMD& copy_src) {
    sType = copy_src.sType;
    overallocationBehavior = copy_src.overallocationBehavior;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceMemoryOverallocationCreateInfoAMD& DeviceMemoryOverallocationCreateInfoAMD::operator=(
    const DeviceMemoryOverallocationCreateInfoAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    overallocationBehavior = copy_src.overallocationBehavior;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceMemoryOverallocationCreateInfoAMD::~DeviceMemoryOverallocationCreateInfoAMD() { FreePnextChain(pNext); }

void DeviceMemoryOverallocationCreateInfoAMD::initialize(const VkDeviceMemoryOverallocationCreateInfoAMD* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    overallocationBehavior = in_struct->overallocationBehavior;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceMemoryOverallocationCreateInfoAMD::initialize(const DeviceMemoryOverallocationCreateInfoAMD* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    overallocationBehavior = copy_src->overallocationBehavior;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_GGP

PresentFrameTokenGGP::PresentFrameTokenGGP(const VkPresentFrameTokenGGP* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), frameToken(in_struct->frameToken) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PresentFrameTokenGGP::PresentFrameTokenGGP() : sType(VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP), pNext(nullptr), frameToken() {}

PresentFrameTokenGGP::PresentFrameTokenGGP(const PresentFrameTokenGGP& copy_src) {
    sType = copy_src.sType;
    frameToken = copy_src.frameToken;
    pNext = SafePnextCopy(copy_src.pNext);
}

PresentFrameTokenGGP& PresentFrameTokenGGP::operator=(const PresentFrameTokenGGP& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    frameToken = copy_src.frameToken;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PresentFrameTokenGGP::~PresentFrameTokenGGP() { FreePnextChain(pNext); }

void PresentFrameTokenGGP::initialize(const VkPresentFrameTokenGGP* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    frameToken = in_struct->frameToken;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PresentFrameTokenGGP::initialize(const PresentFrameTokenGGP* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    frameToken = copy_src->frameToken;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_GGP

PhysicalDeviceComputeShaderDerivativesFeaturesNV::PhysicalDeviceComputeShaderDerivativesFeaturesNV(
    const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      computeDerivativeGroupQuads(in_struct->computeDerivativeGroupQuads),
      computeDerivativeGroupLinear(in_struct->computeDerivativeGroupLinear) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::PhysicalDeviceComputeShaderDerivativesFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV),
      pNext(nullptr),
      computeDerivativeGroupQuads(),
      computeDerivativeGroupLinear() {}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::PhysicalDeviceComputeShaderDerivativesFeaturesNV(
    const PhysicalDeviceComputeShaderDerivativesFeaturesNV& copy_src) {
    sType = copy_src.sType;
    computeDerivativeGroupQuads = copy_src.computeDerivativeGroupQuads;
    computeDerivativeGroupLinear = copy_src.computeDerivativeGroupLinear;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV& PhysicalDeviceComputeShaderDerivativesFeaturesNV::operator=(
    const PhysicalDeviceComputeShaderDerivativesFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    computeDerivativeGroupQuads = copy_src.computeDerivativeGroupQuads;
    computeDerivativeGroupLinear = copy_src.computeDerivativeGroupLinear;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::~PhysicalDeviceComputeShaderDerivativesFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceComputeShaderDerivativesFeaturesNV::initialize(
    const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    computeDerivativeGroupQuads = in_struct->computeDerivativeGroupQuads;
    computeDerivativeGroupLinear = in_struct->computeDerivativeGroupLinear;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceComputeShaderDerivativesFeaturesNV::initialize(const PhysicalDeviceComputeShaderDerivativesFeaturesNV* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    computeDerivativeGroupQuads = copy_src->computeDerivativeGroupQuads;
    computeDerivativeGroupLinear = copy_src->computeDerivativeGroupLinear;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMeshShaderFeaturesNV::PhysicalDeviceMeshShaderFeaturesNV(const VkPhysicalDeviceMeshShaderFeaturesNV* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), taskShader(in_struct->taskShader), meshShader(in_struct->meshShader) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMeshShaderFeaturesNV::PhysicalDeviceMeshShaderFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV), pNext(nullptr), taskShader(), meshShader() {}

PhysicalDeviceMeshShaderFeaturesNV::PhysicalDeviceMeshShaderFeaturesNV(const PhysicalDeviceMeshShaderFeaturesNV& copy_src) {
    sType = copy_src.sType;
    taskShader = copy_src.taskShader;
    meshShader = copy_src.meshShader;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMeshShaderFeaturesNV& PhysicalDeviceMeshShaderFeaturesNV::operator=(
    const PhysicalDeviceMeshShaderFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    taskShader = copy_src.taskShader;
    meshShader = copy_src.meshShader;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMeshShaderFeaturesNV::~PhysicalDeviceMeshShaderFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceMeshShaderFeaturesNV::initialize(const VkPhysicalDeviceMeshShaderFeaturesNV* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    taskShader = in_struct->taskShader;
    meshShader = in_struct->meshShader;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMeshShaderFeaturesNV::initialize(const PhysicalDeviceMeshShaderFeaturesNV* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    taskShader = copy_src->taskShader;
    meshShader = copy_src->meshShader;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMeshShaderPropertiesNV::PhysicalDeviceMeshShaderPropertiesNV(const VkPhysicalDeviceMeshShaderPropertiesNV* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      maxDrawMeshTasksCount(in_struct->maxDrawMeshTasksCount),
      maxTaskWorkGroupInvocations(in_struct->maxTaskWorkGroupInvocations),
      maxTaskTotalMemorySize(in_struct->maxTaskTotalMemorySize),
      maxTaskOutputCount(in_struct->maxTaskOutputCount),
      maxMeshWorkGroupInvocations(in_struct->maxMeshWorkGroupInvocations),
      maxMeshTotalMemorySize(in_struct->maxMeshTotalMemorySize),
      maxMeshOutputVertices(in_struct->maxMeshOutputVertices),
      maxMeshOutputPrimitives(in_struct->maxMeshOutputPrimitives),
      maxMeshMultiviewViewCount(in_struct->maxMeshMultiviewViewCount),
      meshOutputPerVertexGranularity(in_struct->meshOutputPerVertexGranularity),
      meshOutputPerPrimitiveGranularity(in_struct->meshOutputPerPrimitiveGranularity) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = in_struct->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = in_struct->maxMeshWorkGroupSize[i];
    }
}

PhysicalDeviceMeshShaderPropertiesNV::PhysicalDeviceMeshShaderPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV),
      pNext(nullptr),
      maxDrawMeshTasksCount(),
      maxTaskWorkGroupInvocations(),
      maxTaskTotalMemorySize(),
      maxTaskOutputCount(),
      maxMeshWorkGroupInvocations(),
      maxMeshTotalMemorySize(),
      maxMeshOutputVertices(),
      maxMeshOutputPrimitives(),
      maxMeshMultiviewViewCount(),
      meshOutputPerVertexGranularity(),
      meshOutputPerPrimitiveGranularity() {}

PhysicalDeviceMeshShaderPropertiesNV::PhysicalDeviceMeshShaderPropertiesNV(const PhysicalDeviceMeshShaderPropertiesNV& copy_src) {
    sType = copy_src.sType;
    maxDrawMeshTasksCount = copy_src.maxDrawMeshTasksCount;
    maxTaskWorkGroupInvocations = copy_src.maxTaskWorkGroupInvocations;
    maxTaskTotalMemorySize = copy_src.maxTaskTotalMemorySize;
    maxTaskOutputCount = copy_src.maxTaskOutputCount;
    maxMeshWorkGroupInvocations = copy_src.maxMeshWorkGroupInvocations;
    maxMeshTotalMemorySize = copy_src.maxMeshTotalMemorySize;
    maxMeshOutputVertices = copy_src.maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src.maxMeshOutputPrimitives;
    maxMeshMultiviewViewCount = copy_src.maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src.meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src.meshOutputPerPrimitiveGranularity;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src.maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src.maxMeshWorkGroupSize[i];
    }
}

PhysicalDeviceMeshShaderPropertiesNV& PhysicalDeviceMeshShaderPropertiesNV::operator=(
    const PhysicalDeviceMeshShaderPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxDrawMeshTasksCount = copy_src.maxDrawMeshTasksCount;
    maxTaskWorkGroupInvocations = copy_src.maxTaskWorkGroupInvocations;
    maxTaskTotalMemorySize = copy_src.maxTaskTotalMemorySize;
    maxTaskOutputCount = copy_src.maxTaskOutputCount;
    maxMeshWorkGroupInvocations = copy_src.maxMeshWorkGroupInvocations;
    maxMeshTotalMemorySize = copy_src.maxMeshTotalMemorySize;
    maxMeshOutputVertices = copy_src.maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src.maxMeshOutputPrimitives;
    maxMeshMultiviewViewCount = copy_src.maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src.meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src.meshOutputPerPrimitiveGranularity;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src.maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src.maxMeshWorkGroupSize[i];
    }

    return *this;
}

PhysicalDeviceMeshShaderPropertiesNV::~PhysicalDeviceMeshShaderPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceMeshShaderPropertiesNV::initialize(const VkPhysicalDeviceMeshShaderPropertiesNV* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxDrawMeshTasksCount = in_struct->maxDrawMeshTasksCount;
    maxTaskWorkGroupInvocations = in_struct->maxTaskWorkGroupInvocations;
    maxTaskTotalMemorySize = in_struct->maxTaskTotalMemorySize;
    maxTaskOutputCount = in_struct->maxTaskOutputCount;
    maxMeshWorkGroupInvocations = in_struct->maxMeshWorkGroupInvocations;
    maxMeshTotalMemorySize = in_struct->maxMeshTotalMemorySize;
    maxMeshOutputVertices = in_struct->maxMeshOutputVertices;
    maxMeshOutputPrimitives = in_struct->maxMeshOutputPrimitives;
    maxMeshMultiviewViewCount = in_struct->maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = in_struct->meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = in_struct->meshOutputPerPrimitiveGranularity;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = in_struct->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = in_struct->maxMeshWorkGroupSize[i];
    }
}

void PhysicalDeviceMeshShaderPropertiesNV::initialize(const PhysicalDeviceMeshShaderPropertiesNV* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxDrawMeshTasksCount = copy_src->maxDrawMeshTasksCount;
    maxTaskWorkGroupInvocations = copy_src->maxTaskWorkGroupInvocations;
    maxTaskTotalMemorySize = copy_src->maxTaskTotalMemorySize;
    maxTaskOutputCount = copy_src->maxTaskOutputCount;
    maxMeshWorkGroupInvocations = copy_src->maxMeshWorkGroupInvocations;
    maxMeshTotalMemorySize = copy_src->maxMeshTotalMemorySize;
    maxMeshOutputVertices = copy_src->maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src->maxMeshOutputPrimitives;
    maxMeshMultiviewViewCount = copy_src->maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src->meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src->meshOutputPerPrimitiveGranularity;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src->maxMeshWorkGroupSize[i];
    }
}

PhysicalDeviceShaderImageFootprintFeaturesNV::PhysicalDeviceShaderImageFootprintFeaturesNV(
    const VkPhysicalDeviceShaderImageFootprintFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageFootprint(in_struct->imageFootprint) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderImageFootprintFeaturesNV::PhysicalDeviceShaderImageFootprintFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV), pNext(nullptr), imageFootprint() {}

PhysicalDeviceShaderImageFootprintFeaturesNV::PhysicalDeviceShaderImageFootprintFeaturesNV(
    const PhysicalDeviceShaderImageFootprintFeaturesNV& copy_src) {
    sType = copy_src.sType;
    imageFootprint = copy_src.imageFootprint;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderImageFootprintFeaturesNV& PhysicalDeviceShaderImageFootprintFeaturesNV::operator=(
    const PhysicalDeviceShaderImageFootprintFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageFootprint = copy_src.imageFootprint;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderImageFootprintFeaturesNV::~PhysicalDeviceShaderImageFootprintFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShaderImageFootprintFeaturesNV::initialize(const VkPhysicalDeviceShaderImageFootprintFeaturesNV* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageFootprint = in_struct->imageFootprint;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderImageFootprintFeaturesNV::initialize(const PhysicalDeviceShaderImageFootprintFeaturesNV* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageFootprint = copy_src->imageFootprint;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineViewportExclusiveScissorStateCreateInfoNV::PipelineViewportExclusiveScissorStateCreateInfoNV(
    const VkPipelineViewportExclusiveScissorStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), exclusiveScissorCount(in_struct->exclusiveScissorCount), pExclusiveScissors(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pExclusiveScissors) {
        pExclusiveScissors = new VkRect2D[in_struct->exclusiveScissorCount];
        memcpy((void*)pExclusiveScissors, (void*)in_struct->pExclusiveScissors,
               sizeof(VkRect2D) * in_struct->exclusiveScissorCount);
    }
}

PipelineViewportExclusiveScissorStateCreateInfoNV::PipelineViewportExclusiveScissorStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      exclusiveScissorCount(),
      pExclusiveScissors(nullptr) {}

PipelineViewportExclusiveScissorStateCreateInfoNV::PipelineViewportExclusiveScissorStateCreateInfoNV(
    const PipelineViewportExclusiveScissorStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    exclusiveScissorCount = copy_src.exclusiveScissorCount;
    pExclusiveScissors = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pExclusiveScissors) {
        pExclusiveScissors = new VkRect2D[copy_src.exclusiveScissorCount];
        memcpy((void*)pExclusiveScissors, (void*)copy_src.pExclusiveScissors, sizeof(VkRect2D) * copy_src.exclusiveScissorCount);
    }
}

PipelineViewportExclusiveScissorStateCreateInfoNV& PipelineViewportExclusiveScissorStateCreateInfoNV::operator=(
    const PipelineViewportExclusiveScissorStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pExclusiveScissors) delete[] pExclusiveScissors;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    exclusiveScissorCount = copy_src.exclusiveScissorCount;
    pExclusiveScissors = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pExclusiveScissors) {
        pExclusiveScissors = new VkRect2D[copy_src.exclusiveScissorCount];
        memcpy((void*)pExclusiveScissors, (void*)copy_src.pExclusiveScissors, sizeof(VkRect2D) * copy_src.exclusiveScissorCount);
    }

    return *this;
}

PipelineViewportExclusiveScissorStateCreateInfoNV::~PipelineViewportExclusiveScissorStateCreateInfoNV() {
    if (pExclusiveScissors) delete[] pExclusiveScissors;
    FreePnextChain(pNext);
}

void PipelineViewportExclusiveScissorStateCreateInfoNV::initialize(
    const VkPipelineViewportExclusiveScissorStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pExclusiveScissors) delete[] pExclusiveScissors;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exclusiveScissorCount = in_struct->exclusiveScissorCount;
    pExclusiveScissors = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pExclusiveScissors) {
        pExclusiveScissors = new VkRect2D[in_struct->exclusiveScissorCount];
        memcpy((void*)pExclusiveScissors, (void*)in_struct->pExclusiveScissors,
               sizeof(VkRect2D) * in_struct->exclusiveScissorCount);
    }
}

void PipelineViewportExclusiveScissorStateCreateInfoNV::initialize(
    const PipelineViewportExclusiveScissorStateCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exclusiveScissorCount = copy_src->exclusiveScissorCount;
    pExclusiveScissors = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pExclusiveScissors) {
        pExclusiveScissors = new VkRect2D[copy_src->exclusiveScissorCount];
        memcpy((void*)pExclusiveScissors, (void*)copy_src->pExclusiveScissors, sizeof(VkRect2D) * copy_src->exclusiveScissorCount);
    }
}

PhysicalDeviceExclusiveScissorFeaturesNV::PhysicalDeviceExclusiveScissorFeaturesNV(
    const VkPhysicalDeviceExclusiveScissorFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), exclusiveScissor(in_struct->exclusiveScissor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExclusiveScissorFeaturesNV::PhysicalDeviceExclusiveScissorFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV), pNext(nullptr), exclusiveScissor() {}

PhysicalDeviceExclusiveScissorFeaturesNV::PhysicalDeviceExclusiveScissorFeaturesNV(
    const PhysicalDeviceExclusiveScissorFeaturesNV& copy_src) {
    sType = copy_src.sType;
    exclusiveScissor = copy_src.exclusiveScissor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExclusiveScissorFeaturesNV& PhysicalDeviceExclusiveScissorFeaturesNV::operator=(
    const PhysicalDeviceExclusiveScissorFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exclusiveScissor = copy_src.exclusiveScissor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExclusiveScissorFeaturesNV::~PhysicalDeviceExclusiveScissorFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceExclusiveScissorFeaturesNV::initialize(const VkPhysicalDeviceExclusiveScissorFeaturesNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exclusiveScissor = in_struct->exclusiveScissor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExclusiveScissorFeaturesNV::initialize(const PhysicalDeviceExclusiveScissorFeaturesNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exclusiveScissor = copy_src->exclusiveScissor;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyCheckpointPropertiesNV::QueueFamilyCheckpointPropertiesNV(const VkQueueFamilyCheckpointPropertiesNV* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), checkpointExecutionStageMask(in_struct->checkpointExecutionStageMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueueFamilyCheckpointPropertiesNV::QueueFamilyCheckpointPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV), pNext(nullptr), checkpointExecutionStageMask() {}

QueueFamilyCheckpointPropertiesNV::QueueFamilyCheckpointPropertiesNV(const QueueFamilyCheckpointPropertiesNV& copy_src) {
    sType = copy_src.sType;
    checkpointExecutionStageMask = copy_src.checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueueFamilyCheckpointPropertiesNV& QueueFamilyCheckpointPropertiesNV::operator=(const QueueFamilyCheckpointPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    checkpointExecutionStageMask = copy_src.checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueueFamilyCheckpointPropertiesNV::~QueueFamilyCheckpointPropertiesNV() { FreePnextChain(pNext); }

void QueueFamilyCheckpointPropertiesNV::initialize(const VkQueueFamilyCheckpointPropertiesNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    checkpointExecutionStageMask = in_struct->checkpointExecutionStageMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueueFamilyCheckpointPropertiesNV::initialize(const QueueFamilyCheckpointPropertiesNV* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    checkpointExecutionStageMask = copy_src->checkpointExecutionStageMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

CheckpointDataNV::CheckpointDataNV(const VkCheckpointDataNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType), stage(in_struct->stage), pCheckpointMarker(in_struct->pCheckpointMarker) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CheckpointDataNV::CheckpointDataNV()
    : sType(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV), pNext(nullptr), stage(), pCheckpointMarker(nullptr) {}

CheckpointDataNV::CheckpointDataNV(const CheckpointDataNV& copy_src) {
    sType = copy_src.sType;
    stage = copy_src.stage;
    pCheckpointMarker = copy_src.pCheckpointMarker;
    pNext = SafePnextCopy(copy_src.pNext);
}

CheckpointDataNV& CheckpointDataNV::operator=(const CheckpointDataNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stage = copy_src.stage;
    pCheckpointMarker = copy_src.pCheckpointMarker;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CheckpointDataNV::~CheckpointDataNV() { FreePnextChain(pNext); }

void CheckpointDataNV::initialize(const VkCheckpointDataNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stage = in_struct->stage;
    pCheckpointMarker = in_struct->pCheckpointMarker;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CheckpointDataNV::initialize(const CheckpointDataNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stage = copy_src->stage;
    pCheckpointMarker = copy_src->pCheckpointMarker;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(
    const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderIntegerFunctions2(in_struct->shaderIntegerFunctions2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL),
      pNext(nullptr),
      shaderIntegerFunctions2() {}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(
    const PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& copy_src) {
    sType = copy_src.sType;
    shaderIntegerFunctions2 = copy_src.shaderIntegerFunctions2;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::operator=(
    const PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderIntegerFunctions2 = copy_src.shaderIntegerFunctions2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::~PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL() { FreePnextChain(pNext); }

void PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::initialize(
    const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderIntegerFunctions2 = in_struct->shaderIntegerFunctions2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::initialize(
    const PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderIntegerFunctions2 = copy_src->shaderIntegerFunctions2;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceValueDataINTEL::PerformanceValueDataINTEL(const VkPerformanceValueDataINTEL* in_struct, PNextCopyState*) {
    initialize(in_struct);
}

PerformanceValueDataINTEL::PerformanceValueDataINTEL() : valueString(nullptr) {}

PerformanceValueDataINTEL::PerformanceValueDataINTEL(const PerformanceValueDataINTEL& copy_src) {
    value32 = copy_src.value32;
    value64 = copy_src.value64;
    valueFloat = copy_src.valueFloat;
    valueBool = copy_src.valueBool;
    valueString = SafeStringCopy(copy_src.valueString);
}

PerformanceValueDataINTEL& PerformanceValueDataINTEL::operator=(const PerformanceValueDataINTEL& copy_src) {
    if (&copy_src == this) return *this;

    if (valueString) delete[] valueString;

    value32 = copy_src.value32;
    value64 = copy_src.value64;
    valueFloat = copy_src.valueFloat;
    valueBool = copy_src.valueBool;
    valueString = SafeStringCopy(copy_src.valueString);

    return *this;
}

PerformanceValueDataINTEL::~PerformanceValueDataINTEL() {
    if (valueString) delete[] valueString;
}

void PerformanceValueDataINTEL::initialize(const VkPerformanceValueDataINTEL* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (valueString) delete[] valueString;
    value32 = in_struct->value32;
    value64 = in_struct->value64;
    valueFloat = in_struct->valueFloat;
    valueBool = in_struct->valueBool;
    valueString = SafeStringCopy(in_struct->valueString);
}

void PerformanceValueDataINTEL::initialize(const PerformanceValueDataINTEL* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    value32 = copy_src->value32;
    value64 = copy_src->value64;
    valueFloat = copy_src->valueFloat;
    valueBool = copy_src->valueBool;
    valueString = SafeStringCopy(copy_src->valueString);
}

InitializePerformanceApiInfoINTEL::InitializePerformanceApiInfoINTEL(const VkInitializePerformanceApiInfoINTEL* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

InitializePerformanceApiInfoINTEL::InitializePerformanceApiInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL), pNext(nullptr), pUserData(nullptr) {}

InitializePerformanceApiInfoINTEL::InitializePerformanceApiInfoINTEL(const InitializePerformanceApiInfoINTEL& copy_src) {
    sType = copy_src.sType;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

InitializePerformanceApiInfoINTEL& InitializePerformanceApiInfoINTEL::operator=(const InitializePerformanceApiInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

InitializePerformanceApiInfoINTEL::~InitializePerformanceApiInfoINTEL() { FreePnextChain(pNext); }

void InitializePerformanceApiInfoINTEL::initialize(const VkInitializePerformanceApiInfoINTEL* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void InitializePerformanceApiInfoINTEL::initialize(const InitializePerformanceApiInfoINTEL* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueryPoolPerformanceQueryCreateInfoINTEL::QueryPoolPerformanceQueryCreateInfoINTEL(
    const VkQueryPoolPerformanceQueryCreateInfoINTEL* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), performanceCountersSampling(in_struct->performanceCountersSampling) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueryPoolPerformanceQueryCreateInfoINTEL::QueryPoolPerformanceQueryCreateInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL), pNext(nullptr), performanceCountersSampling() {}

QueryPoolPerformanceQueryCreateInfoINTEL::QueryPoolPerformanceQueryCreateInfoINTEL(
    const QueryPoolPerformanceQueryCreateInfoINTEL& copy_src) {
    sType = copy_src.sType;
    performanceCountersSampling = copy_src.performanceCountersSampling;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueryPoolPerformanceQueryCreateInfoINTEL& QueryPoolPerformanceQueryCreateInfoINTEL::operator=(
    const QueryPoolPerformanceQueryCreateInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    performanceCountersSampling = copy_src.performanceCountersSampling;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueryPoolPerformanceQueryCreateInfoINTEL::~QueryPoolPerformanceQueryCreateInfoINTEL() { FreePnextChain(pNext); }

void QueryPoolPerformanceQueryCreateInfoINTEL::initialize(const VkQueryPoolPerformanceQueryCreateInfoINTEL* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    performanceCountersSampling = in_struct->performanceCountersSampling;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueryPoolPerformanceQueryCreateInfoINTEL::initialize(const QueryPoolPerformanceQueryCreateInfoINTEL* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    performanceCountersSampling = copy_src->performanceCountersSampling;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceMarkerInfoINTEL::PerformanceMarkerInfoINTEL(const VkPerformanceMarkerInfoINTEL* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), marker(in_struct->marker) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PerformanceMarkerInfoINTEL::PerformanceMarkerInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL), pNext(nullptr), marker() {}

PerformanceMarkerInfoINTEL::PerformanceMarkerInfoINTEL(const PerformanceMarkerInfoINTEL& copy_src) {
    sType = copy_src.sType;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);
}

PerformanceMarkerInfoINTEL& PerformanceMarkerInfoINTEL::operator=(const PerformanceMarkerInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PerformanceMarkerInfoINTEL::~PerformanceMarkerInfoINTEL() { FreePnextChain(pNext); }

void PerformanceMarkerInfoINTEL::initialize(const VkPerformanceMarkerInfoINTEL* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    marker = in_struct->marker;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PerformanceMarkerInfoINTEL::initialize(const PerformanceMarkerInfoINTEL* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    marker = copy_src->marker;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceStreamMarkerInfoINTEL::PerformanceStreamMarkerInfoINTEL(const VkPerformanceStreamMarkerInfoINTEL* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), marker(in_struct->marker) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PerformanceStreamMarkerInfoINTEL::PerformanceStreamMarkerInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL), pNext(nullptr), marker() {}

PerformanceStreamMarkerInfoINTEL::PerformanceStreamMarkerInfoINTEL(const PerformanceStreamMarkerInfoINTEL& copy_src) {
    sType = copy_src.sType;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);
}

PerformanceStreamMarkerInfoINTEL& PerformanceStreamMarkerInfoINTEL::operator=(const PerformanceStreamMarkerInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PerformanceStreamMarkerInfoINTEL::~PerformanceStreamMarkerInfoINTEL() { FreePnextChain(pNext); }

void PerformanceStreamMarkerInfoINTEL::initialize(const VkPerformanceStreamMarkerInfoINTEL* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    marker = in_struct->marker;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PerformanceStreamMarkerInfoINTEL::initialize(const PerformanceStreamMarkerInfoINTEL* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    marker = copy_src->marker;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceOverrideInfoINTEL::PerformanceOverrideInfoINTEL(const VkPerformanceOverrideInfoINTEL* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), type(in_struct->type), enable(in_struct->enable), parameter(in_struct->parameter) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PerformanceOverrideInfoINTEL::PerformanceOverrideInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL), pNext(nullptr), type(), enable(), parameter() {}

PerformanceOverrideInfoINTEL::PerformanceOverrideInfoINTEL(const PerformanceOverrideInfoINTEL& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    enable = copy_src.enable;
    parameter = copy_src.parameter;
    pNext = SafePnextCopy(copy_src.pNext);
}

PerformanceOverrideInfoINTEL& PerformanceOverrideInfoINTEL::operator=(const PerformanceOverrideInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    enable = copy_src.enable;
    parameter = copy_src.parameter;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PerformanceOverrideInfoINTEL::~PerformanceOverrideInfoINTEL() { FreePnextChain(pNext); }

void PerformanceOverrideInfoINTEL::initialize(const VkPerformanceOverrideInfoINTEL* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    enable = in_struct->enable;
    parameter = in_struct->parameter;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PerformanceOverrideInfoINTEL::initialize(const PerformanceOverrideInfoINTEL* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    enable = copy_src->enable;
    parameter = copy_src->parameter;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceConfigurationAcquireInfoINTEL::PerformanceConfigurationAcquireInfoINTEL(
    const VkPerformanceConfigurationAcquireInfoINTEL* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), type(in_struct->type) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PerformanceConfigurationAcquireInfoINTEL::PerformanceConfigurationAcquireInfoINTEL()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL), pNext(nullptr), type() {}

PerformanceConfigurationAcquireInfoINTEL::PerformanceConfigurationAcquireInfoINTEL(
    const PerformanceConfigurationAcquireInfoINTEL& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    pNext = SafePnextCopy(copy_src.pNext);
}

PerformanceConfigurationAcquireInfoINTEL& PerformanceConfigurationAcquireInfoINTEL::operator=(
    const PerformanceConfigurationAcquireInfoINTEL& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PerformanceConfigurationAcquireInfoINTEL::~PerformanceConfigurationAcquireInfoINTEL() { FreePnextChain(pNext); }

void PerformanceConfigurationAcquireInfoINTEL::initialize(const VkPerformanceConfigurationAcquireInfoINTEL* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PerformanceConfigurationAcquireInfoINTEL::initialize(const PerformanceConfigurationAcquireInfoINTEL* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayNativeHdrSurfaceCapabilitiesAMD::DisplayNativeHdrSurfaceCapabilitiesAMD(
    const VkDisplayNativeHdrSurfaceCapabilitiesAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), localDimmingSupport(in_struct->localDimmingSupport) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayNativeHdrSurfaceCapabilitiesAMD::DisplayNativeHdrSurfaceCapabilitiesAMD()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD), pNext(nullptr), localDimmingSupport() {}

DisplayNativeHdrSurfaceCapabilitiesAMD::DisplayNativeHdrSurfaceCapabilitiesAMD(
    const DisplayNativeHdrSurfaceCapabilitiesAMD& copy_src) {
    sType = copy_src.sType;
    localDimmingSupport = copy_src.localDimmingSupport;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayNativeHdrSurfaceCapabilitiesAMD& DisplayNativeHdrSurfaceCapabilitiesAMD::operator=(
    const DisplayNativeHdrSurfaceCapabilitiesAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    localDimmingSupport = copy_src.localDimmingSupport;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayNativeHdrSurfaceCapabilitiesAMD::~DisplayNativeHdrSurfaceCapabilitiesAMD() { FreePnextChain(pNext); }

void DisplayNativeHdrSurfaceCapabilitiesAMD::initialize(const VkDisplayNativeHdrSurfaceCapabilitiesAMD* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    localDimmingSupport = in_struct->localDimmingSupport;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayNativeHdrSurfaceCapabilitiesAMD::initialize(const DisplayNativeHdrSurfaceCapabilitiesAMD* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    localDimmingSupport = copy_src->localDimmingSupport;
    pNext = SafePnextCopy(copy_src->pNext);
}

SwapchainDisplayNativeHdrCreateInfoAMD::SwapchainDisplayNativeHdrCreateInfoAMD(
    const VkSwapchainDisplayNativeHdrCreateInfoAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), localDimmingEnable(in_struct->localDimmingEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SwapchainDisplayNativeHdrCreateInfoAMD::SwapchainDisplayNativeHdrCreateInfoAMD()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD), pNext(nullptr), localDimmingEnable() {}

SwapchainDisplayNativeHdrCreateInfoAMD::SwapchainDisplayNativeHdrCreateInfoAMD(
    const SwapchainDisplayNativeHdrCreateInfoAMD& copy_src) {
    sType = copy_src.sType;
    localDimmingEnable = copy_src.localDimmingEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

SwapchainDisplayNativeHdrCreateInfoAMD& SwapchainDisplayNativeHdrCreateInfoAMD::operator=(
    const SwapchainDisplayNativeHdrCreateInfoAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    localDimmingEnable = copy_src.localDimmingEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SwapchainDisplayNativeHdrCreateInfoAMD::~SwapchainDisplayNativeHdrCreateInfoAMD() { FreePnextChain(pNext); }

void SwapchainDisplayNativeHdrCreateInfoAMD::initialize(const VkSwapchainDisplayNativeHdrCreateInfoAMD* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    localDimmingEnable = in_struct->localDimmingEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SwapchainDisplayNativeHdrCreateInfoAMD::initialize(const SwapchainDisplayNativeHdrCreateInfoAMD* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    localDimmingEnable = copy_src->localDimmingEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_FUCHSIA

ImagePipeSurfaceCreateInfoFUCHSIA::ImagePipeSurfaceCreateInfoFUCHSIA(const VkImagePipeSurfaceCreateInfoFUCHSIA* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), imagePipeHandle(in_struct->imagePipeHandle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImagePipeSurfaceCreateInfoFUCHSIA::ImagePipeSurfaceCreateInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA), pNext(nullptr), flags(), imagePipeHandle() {}

ImagePipeSurfaceCreateInfoFUCHSIA::ImagePipeSurfaceCreateInfoFUCHSIA(const ImagePipeSurfaceCreateInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    imagePipeHandle = copy_src.imagePipeHandle;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImagePipeSurfaceCreateInfoFUCHSIA& ImagePipeSurfaceCreateInfoFUCHSIA::operator=(const ImagePipeSurfaceCreateInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    imagePipeHandle = copy_src.imagePipeHandle;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImagePipeSurfaceCreateInfoFUCHSIA::~ImagePipeSurfaceCreateInfoFUCHSIA() { FreePnextChain(pNext); }

void ImagePipeSurfaceCreateInfoFUCHSIA::initialize(const VkImagePipeSurfaceCreateInfoFUCHSIA* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    imagePipeHandle = in_struct->imagePipeHandle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImagePipeSurfaceCreateInfoFUCHSIA::initialize(const ImagePipeSurfaceCreateInfoFUCHSIA* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    imagePipeHandle = copy_src->imagePipeHandle;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_FUCHSIA

PhysicalDeviceShaderCoreProperties2AMD::PhysicalDeviceShaderCoreProperties2AMD(
    const VkPhysicalDeviceShaderCoreProperties2AMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderCoreFeatures(in_struct->shaderCoreFeatures),
      activeComputeUnitCount(in_struct->activeComputeUnitCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderCoreProperties2AMD::PhysicalDeviceShaderCoreProperties2AMD()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD),
      pNext(nullptr),
      shaderCoreFeatures(),
      activeComputeUnitCount() {}

PhysicalDeviceShaderCoreProperties2AMD::PhysicalDeviceShaderCoreProperties2AMD(
    const PhysicalDeviceShaderCoreProperties2AMD& copy_src) {
    sType = copy_src.sType;
    shaderCoreFeatures = copy_src.shaderCoreFeatures;
    activeComputeUnitCount = copy_src.activeComputeUnitCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderCoreProperties2AMD& PhysicalDeviceShaderCoreProperties2AMD::operator=(
    const PhysicalDeviceShaderCoreProperties2AMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderCoreFeatures = copy_src.shaderCoreFeatures;
    activeComputeUnitCount = copy_src.activeComputeUnitCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderCoreProperties2AMD::~PhysicalDeviceShaderCoreProperties2AMD() { FreePnextChain(pNext); }

void PhysicalDeviceShaderCoreProperties2AMD::initialize(const VkPhysicalDeviceShaderCoreProperties2AMD* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderCoreFeatures = in_struct->shaderCoreFeatures;
    activeComputeUnitCount = in_struct->activeComputeUnitCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderCoreProperties2AMD::initialize(const PhysicalDeviceShaderCoreProperties2AMD* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderCoreFeatures = copy_src->shaderCoreFeatures;
    activeComputeUnitCount = copy_src->activeComputeUnitCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCoherentMemoryFeaturesAMD::PhysicalDeviceCoherentMemoryFeaturesAMD(
    const VkPhysicalDeviceCoherentMemoryFeaturesAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceCoherentMemory(in_struct->deviceCoherentMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCoherentMemoryFeaturesAMD::PhysicalDeviceCoherentMemoryFeaturesAMD()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD), pNext(nullptr), deviceCoherentMemory() {}

PhysicalDeviceCoherentMemoryFeaturesAMD::PhysicalDeviceCoherentMemoryFeaturesAMD(
    const PhysicalDeviceCoherentMemoryFeaturesAMD& copy_src) {
    sType = copy_src.sType;
    deviceCoherentMemory = copy_src.deviceCoherentMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCoherentMemoryFeaturesAMD& PhysicalDeviceCoherentMemoryFeaturesAMD::operator=(
    const PhysicalDeviceCoherentMemoryFeaturesAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceCoherentMemory = copy_src.deviceCoherentMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCoherentMemoryFeaturesAMD::~PhysicalDeviceCoherentMemoryFeaturesAMD() { FreePnextChain(pNext); }

void PhysicalDeviceCoherentMemoryFeaturesAMD::initialize(const VkPhysicalDeviceCoherentMemoryFeaturesAMD* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceCoherentMemory = in_struct->deviceCoherentMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCoherentMemoryFeaturesAMD::initialize(const PhysicalDeviceCoherentMemoryFeaturesAMD* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceCoherentMemory = copy_src->deviceCoherentMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(
    const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), dedicatedAllocationImageAliasing(in_struct->dedicatedAllocationImageAliasing) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV),
      pNext(nullptr),
      dedicatedAllocationImageAliasing() {}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(
    const PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& copy_src) {
    sType = copy_src.sType;
    dedicatedAllocationImageAliasing = copy_src.dedicatedAllocationImageAliasing;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::operator=(
    const PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dedicatedAllocationImageAliasing = copy_src.dedicatedAllocationImageAliasing;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::~PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::initialize(
    const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dedicatedAllocationImageAliasing = in_struct->dedicatedAllocationImageAliasing;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::initialize(
    const PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dedicatedAllocationImageAliasing = copy_src->dedicatedAllocationImageAliasing;
    pNext = SafePnextCopy(copy_src->pNext);
}

CooperativeMatrixPropertiesNV::CooperativeMatrixPropertiesNV(const VkCooperativeMatrixPropertiesNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      MSize(in_struct->MSize),
      NSize(in_struct->NSize),
      KSize(in_struct->KSize),
      AType(in_struct->AType),
      BType(in_struct->BType),
      CType(in_struct->CType),
      DType(in_struct->DType),
      scope(in_struct->scope) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CooperativeMatrixPropertiesNV::CooperativeMatrixPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV),
      pNext(nullptr),
      MSize(),
      NSize(),
      KSize(),
      AType(),
      BType(),
      CType(),
      DType(),
      scope() {}

CooperativeMatrixPropertiesNV::CooperativeMatrixPropertiesNV(const CooperativeMatrixPropertiesNV& copy_src) {
    sType = copy_src.sType;
    MSize = copy_src.MSize;
    NSize = copy_src.NSize;
    KSize = copy_src.KSize;
    AType = copy_src.AType;
    BType = copy_src.BType;
    CType = copy_src.CType;
    DType = copy_src.DType;
    scope = copy_src.scope;
    pNext = SafePnextCopy(copy_src.pNext);
}

CooperativeMatrixPropertiesNV& CooperativeMatrixPropertiesNV::operator=(const CooperativeMatrixPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    MSize = copy_src.MSize;
    NSize = copy_src.NSize;
    KSize = copy_src.KSize;
    AType = copy_src.AType;
    BType = copy_src.BType;
    CType = copy_src.CType;
    DType = copy_src.DType;
    scope = copy_src.scope;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CooperativeMatrixPropertiesNV::~CooperativeMatrixPropertiesNV() { FreePnextChain(pNext); }

void CooperativeMatrixPropertiesNV::initialize(const VkCooperativeMatrixPropertiesNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    MSize = in_struct->MSize;
    NSize = in_struct->NSize;
    KSize = in_struct->KSize;
    AType = in_struct->AType;
    BType = in_struct->BType;
    CType = in_struct->CType;
    DType = in_struct->DType;
    scope = in_struct->scope;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CooperativeMatrixPropertiesNV::initialize(const CooperativeMatrixPropertiesNV* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    MSize = copy_src->MSize;
    NSize = copy_src->NSize;
    KSize = copy_src->KSize;
    AType = copy_src->AType;
    BType = copy_src->BType;
    CType = copy_src->CType;
    DType = copy_src->DType;
    scope = copy_src->scope;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCooperativeMatrixFeaturesNV::PhysicalDeviceCooperativeMatrixFeaturesNV(
    const VkPhysicalDeviceCooperativeMatrixFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      cooperativeMatrix(in_struct->cooperativeMatrix),
      cooperativeMatrixRobustBufferAccess(in_struct->cooperativeMatrixRobustBufferAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCooperativeMatrixFeaturesNV::PhysicalDeviceCooperativeMatrixFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV),
      pNext(nullptr),
      cooperativeMatrix(),
      cooperativeMatrixRobustBufferAccess() {}

PhysicalDeviceCooperativeMatrixFeaturesNV::PhysicalDeviceCooperativeMatrixFeaturesNV(
    const PhysicalDeviceCooperativeMatrixFeaturesNV& copy_src) {
    sType = copy_src.sType;
    cooperativeMatrix = copy_src.cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src.cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCooperativeMatrixFeaturesNV& PhysicalDeviceCooperativeMatrixFeaturesNV::operator=(
    const PhysicalDeviceCooperativeMatrixFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cooperativeMatrix = copy_src.cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src.cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCooperativeMatrixFeaturesNV::~PhysicalDeviceCooperativeMatrixFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCooperativeMatrixFeaturesNV::initialize(const VkPhysicalDeviceCooperativeMatrixFeaturesNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cooperativeMatrix = in_struct->cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = in_struct->cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCooperativeMatrixFeaturesNV::initialize(const PhysicalDeviceCooperativeMatrixFeaturesNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cooperativeMatrix = copy_src->cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src->cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCooperativeMatrixPropertiesNV::PhysicalDeviceCooperativeMatrixPropertiesNV(
    const VkPhysicalDeviceCooperativeMatrixPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cooperativeMatrixSupportedStages(in_struct->cooperativeMatrixSupportedStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCooperativeMatrixPropertiesNV::PhysicalDeviceCooperativeMatrixPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV),
      pNext(nullptr),
      cooperativeMatrixSupportedStages() {}

PhysicalDeviceCooperativeMatrixPropertiesNV::PhysicalDeviceCooperativeMatrixPropertiesNV(
    const PhysicalDeviceCooperativeMatrixPropertiesNV& copy_src) {
    sType = copy_src.sType;
    cooperativeMatrixSupportedStages = copy_src.cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCooperativeMatrixPropertiesNV& PhysicalDeviceCooperativeMatrixPropertiesNV::operator=(
    const PhysicalDeviceCooperativeMatrixPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cooperativeMatrixSupportedStages = copy_src.cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCooperativeMatrixPropertiesNV::~PhysicalDeviceCooperativeMatrixPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCooperativeMatrixPropertiesNV::initialize(const VkPhysicalDeviceCooperativeMatrixPropertiesNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cooperativeMatrixSupportedStages = in_struct->cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCooperativeMatrixPropertiesNV::initialize(const PhysicalDeviceCooperativeMatrixPropertiesNV* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cooperativeMatrixSupportedStages = copy_src->cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCoverageReductionModeFeaturesNV::PhysicalDeviceCoverageReductionModeFeaturesNV(
    const VkPhysicalDeviceCoverageReductionModeFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), coverageReductionMode(in_struct->coverageReductionMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCoverageReductionModeFeaturesNV::PhysicalDeviceCoverageReductionModeFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV), pNext(nullptr), coverageReductionMode() {}

PhysicalDeviceCoverageReductionModeFeaturesNV::PhysicalDeviceCoverageReductionModeFeaturesNV(
    const PhysicalDeviceCoverageReductionModeFeaturesNV& copy_src) {
    sType = copy_src.sType;
    coverageReductionMode = copy_src.coverageReductionMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCoverageReductionModeFeaturesNV& PhysicalDeviceCoverageReductionModeFeaturesNV::operator=(
    const PhysicalDeviceCoverageReductionModeFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    coverageReductionMode = copy_src.coverageReductionMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCoverageReductionModeFeaturesNV::~PhysicalDeviceCoverageReductionModeFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCoverageReductionModeFeaturesNV::initialize(const VkPhysicalDeviceCoverageReductionModeFeaturesNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    coverageReductionMode = in_struct->coverageReductionMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCoverageReductionModeFeaturesNV::initialize(const PhysicalDeviceCoverageReductionModeFeaturesNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    coverageReductionMode = copy_src->coverageReductionMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineCoverageReductionStateCreateInfoNV::PipelineCoverageReductionStateCreateInfoNV(
    const VkPipelineCoverageReductionStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), coverageReductionMode(in_struct->coverageReductionMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineCoverageReductionStateCreateInfoNV::PipelineCoverageReductionStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV), pNext(nullptr), flags(), coverageReductionMode() {}

PipelineCoverageReductionStateCreateInfoNV::PipelineCoverageReductionStateCreateInfoNV(
    const PipelineCoverageReductionStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageReductionMode = copy_src.coverageReductionMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineCoverageReductionStateCreateInfoNV& PipelineCoverageReductionStateCreateInfoNV::operator=(
    const PipelineCoverageReductionStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    coverageReductionMode = copy_src.coverageReductionMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineCoverageReductionStateCreateInfoNV::~PipelineCoverageReductionStateCreateInfoNV() { FreePnextChain(pNext); }

void PipelineCoverageReductionStateCreateInfoNV::initialize(const VkPipelineCoverageReductionStateCreateInfoNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    coverageReductionMode = in_struct->coverageReductionMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineCoverageReductionStateCreateInfoNV::initialize(const PipelineCoverageReductionStateCreateInfoNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    coverageReductionMode = copy_src->coverageReductionMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

FramebufferMixedSamplesCombinationNV::FramebufferMixedSamplesCombinationNV(const VkFramebufferMixedSamplesCombinationNV* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      coverageReductionMode(in_struct->coverageReductionMode),
      rasterizationSamples(in_struct->rasterizationSamples),
      depthStencilSamples(in_struct->depthStencilSamples),
      colorSamples(in_struct->colorSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FramebufferMixedSamplesCombinationNV::FramebufferMixedSamplesCombinationNV()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV),
      pNext(nullptr),
      coverageReductionMode(),
      rasterizationSamples(),
      depthStencilSamples(),
      colorSamples() {}

FramebufferMixedSamplesCombinationNV::FramebufferMixedSamplesCombinationNV(const FramebufferMixedSamplesCombinationNV& copy_src) {
    sType = copy_src.sType;
    coverageReductionMode = copy_src.coverageReductionMode;
    rasterizationSamples = copy_src.rasterizationSamples;
    depthStencilSamples = copy_src.depthStencilSamples;
    colorSamples = copy_src.colorSamples;
    pNext = SafePnextCopy(copy_src.pNext);
}

FramebufferMixedSamplesCombinationNV& FramebufferMixedSamplesCombinationNV::operator=(
    const FramebufferMixedSamplesCombinationNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    coverageReductionMode = copy_src.coverageReductionMode;
    rasterizationSamples = copy_src.rasterizationSamples;
    depthStencilSamples = copy_src.depthStencilSamples;
    colorSamples = copy_src.colorSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FramebufferMixedSamplesCombinationNV::~FramebufferMixedSamplesCombinationNV() { FreePnextChain(pNext); }

void FramebufferMixedSamplesCombinationNV::initialize(const VkFramebufferMixedSamplesCombinationNV* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    coverageReductionMode = in_struct->coverageReductionMode;
    rasterizationSamples = in_struct->rasterizationSamples;
    depthStencilSamples = in_struct->depthStencilSamples;
    colorSamples = in_struct->colorSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FramebufferMixedSamplesCombinationNV::initialize(const FramebufferMixedSamplesCombinationNV* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    coverageReductionMode = copy_src->coverageReductionMode;
    rasterizationSamples = copy_src->rasterizationSamples;
    depthStencilSamples = copy_src->depthStencilSamples;
    colorSamples = copy_src->colorSamples;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::PhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
    const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      maxGraphicsShaderGroupCount(in_struct->maxGraphicsShaderGroupCount),
      maxIndirectSequenceCount(in_struct->maxIndirectSequenceCount),
      maxIndirectCommandsTokenCount(in_struct->maxIndirectCommandsTokenCount),
      maxIndirectCommandsStreamCount(in_struct->maxIndirectCommandsStreamCount),
      maxIndirectCommandsTokenOffset(in_struct->maxIndirectCommandsTokenOffset),
      maxIndirectCommandsStreamStride(in_struct->maxIndirectCommandsStreamStride),
      minSequencesCountBufferOffsetAlignment(in_struct->minSequencesCountBufferOffsetAlignment),
      minSequencesIndexBufferOffsetAlignment(in_struct->minSequencesIndexBufferOffsetAlignment),
      minIndirectCommandsBufferOffsetAlignment(in_struct->minIndirectCommandsBufferOffsetAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::PhysicalDeviceDeviceGeneratedCommandsPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV),
      pNext(nullptr),
      maxGraphicsShaderGroupCount(),
      maxIndirectSequenceCount(),
      maxIndirectCommandsTokenCount(),
      maxIndirectCommandsStreamCount(),
      maxIndirectCommandsTokenOffset(),
      maxIndirectCommandsStreamStride(),
      minSequencesCountBufferOffsetAlignment(),
      minSequencesIndexBufferOffsetAlignment(),
      minIndirectCommandsBufferOffsetAlignment() {}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::PhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
    const PhysicalDeviceDeviceGeneratedCommandsPropertiesNV& copy_src) {
    sType = copy_src.sType;
    maxGraphicsShaderGroupCount = copy_src.maxGraphicsShaderGroupCount;
    maxIndirectSequenceCount = copy_src.maxIndirectSequenceCount;
    maxIndirectCommandsTokenCount = copy_src.maxIndirectCommandsTokenCount;
    maxIndirectCommandsStreamCount = copy_src.maxIndirectCommandsStreamCount;
    maxIndirectCommandsTokenOffset = copy_src.maxIndirectCommandsTokenOffset;
    maxIndirectCommandsStreamStride = copy_src.maxIndirectCommandsStreamStride;
    minSequencesCountBufferOffsetAlignment = copy_src.minSequencesCountBufferOffsetAlignment;
    minSequencesIndexBufferOffsetAlignment = copy_src.minSequencesIndexBufferOffsetAlignment;
    minIndirectCommandsBufferOffsetAlignment = copy_src.minIndirectCommandsBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV& PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::operator=(
    const PhysicalDeviceDeviceGeneratedCommandsPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxGraphicsShaderGroupCount = copy_src.maxGraphicsShaderGroupCount;
    maxIndirectSequenceCount = copy_src.maxIndirectSequenceCount;
    maxIndirectCommandsTokenCount = copy_src.maxIndirectCommandsTokenCount;
    maxIndirectCommandsStreamCount = copy_src.maxIndirectCommandsStreamCount;
    maxIndirectCommandsTokenOffset = copy_src.maxIndirectCommandsTokenOffset;
    maxIndirectCommandsStreamStride = copy_src.maxIndirectCommandsStreamStride;
    minSequencesCountBufferOffsetAlignment = copy_src.minSequencesCountBufferOffsetAlignment;
    minSequencesIndexBufferOffsetAlignment = copy_src.minSequencesIndexBufferOffsetAlignment;
    minIndirectCommandsBufferOffsetAlignment = copy_src.minIndirectCommandsBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::~PhysicalDeviceDeviceGeneratedCommandsPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::initialize(
    const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxGraphicsShaderGroupCount = in_struct->maxGraphicsShaderGroupCount;
    maxIndirectSequenceCount = in_struct->maxIndirectSequenceCount;
    maxIndirectCommandsTokenCount = in_struct->maxIndirectCommandsTokenCount;
    maxIndirectCommandsStreamCount = in_struct->maxIndirectCommandsStreamCount;
    maxIndirectCommandsTokenOffset = in_struct->maxIndirectCommandsTokenOffset;
    maxIndirectCommandsStreamStride = in_struct->maxIndirectCommandsStreamStride;
    minSequencesCountBufferOffsetAlignment = in_struct->minSequencesCountBufferOffsetAlignment;
    minSequencesIndexBufferOffsetAlignment = in_struct->minSequencesIndexBufferOffsetAlignment;
    minIndirectCommandsBufferOffsetAlignment = in_struct->minIndirectCommandsBufferOffsetAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::initialize(
    const PhysicalDeviceDeviceGeneratedCommandsPropertiesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxGraphicsShaderGroupCount = copy_src->maxGraphicsShaderGroupCount;
    maxIndirectSequenceCount = copy_src->maxIndirectSequenceCount;
    maxIndirectCommandsTokenCount = copy_src->maxIndirectCommandsTokenCount;
    maxIndirectCommandsStreamCount = copy_src->maxIndirectCommandsStreamCount;
    maxIndirectCommandsTokenOffset = copy_src->maxIndirectCommandsTokenOffset;
    maxIndirectCommandsStreamStride = copy_src->maxIndirectCommandsStreamStride;
    minSequencesCountBufferOffsetAlignment = copy_src->minSequencesCountBufferOffsetAlignment;
    minSequencesIndexBufferOffsetAlignment = copy_src->minSequencesIndexBufferOffsetAlignment;
    minIndirectCommandsBufferOffsetAlignment = copy_src->minIndirectCommandsBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(
    const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), deviceGeneratedCommands(in_struct->deviceGeneratedCommands) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV), pNext(nullptr), deviceGeneratedCommands() {}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(
    const PhysicalDeviceDeviceGeneratedCommandsFeaturesNV& copy_src) {
    sType = copy_src.sType;
    deviceGeneratedCommands = copy_src.deviceGeneratedCommands;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV& PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::operator=(
    const PhysicalDeviceDeviceGeneratedCommandsFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceGeneratedCommands = copy_src.deviceGeneratedCommands;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::~PhysicalDeviceDeviceGeneratedCommandsFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::initialize(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceGeneratedCommands = in_struct->deviceGeneratedCommands;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::initialize(const PhysicalDeviceDeviceGeneratedCommandsFeaturesNV* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceGeneratedCommands = copy_src->deviceGeneratedCommands;
    pNext = SafePnextCopy(copy_src->pNext);
}

GraphicsShaderGroupCreateInfoNV::GraphicsShaderGroupCreateInfoNV(const VkGraphicsShaderGroupCreateInfoNV* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pTessellationState(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState) pVertexInputState = new PipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    if (in_struct->pTessellationState) pTessellationState = new PipelineTessellationStateCreateInfo(in_struct->pTessellationState);
}

GraphicsShaderGroupCreateInfoNV::GraphicsShaderGroupCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV),
      pNext(nullptr),
      stageCount(),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pTessellationState(nullptr) {}

GraphicsShaderGroupCreateInfoNV::GraphicsShaderGroupCreateInfoNV(const GraphicsShaderGroupCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pTessellationState = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState) pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    if (copy_src.pTessellationState) pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src.pTessellationState);
}

GraphicsShaderGroupCreateInfoNV& GraphicsShaderGroupCreateInfoNV::operator=(const GraphicsShaderGroupCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pTessellationState) delete pTessellationState;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pTessellationState = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState) pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    if (copy_src.pTessellationState) pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src.pTessellationState);

    return *this;
}

GraphicsShaderGroupCreateInfoNV::~GraphicsShaderGroupCreateInfoNV() {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pTessellationState) delete pTessellationState;
    FreePnextChain(pNext);
}

void GraphicsShaderGroupCreateInfoNV::initialize(const VkGraphicsShaderGroupCreateInfoNV* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pTessellationState) delete pTessellationState;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pTessellationState = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (stageCount && in_struct->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState) pVertexInputState = new PipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    if (in_struct->pTessellationState) pTessellationState = new PipelineTessellationStateCreateInfo(in_struct->pTessellationState);
}

void GraphicsShaderGroupCreateInfoNV::initialize(const GraphicsShaderGroupCreateInfoNV* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pTessellationState = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (stageCount && copy_src->pStages) {
        pStages = new PipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src->pStages[i]);
        }
    }
    if (copy_src->pVertexInputState) pVertexInputState = new PipelineVertexInputStateCreateInfo(*copy_src->pVertexInputState);
    if (copy_src->pTessellationState) pTessellationState = new PipelineTessellationStateCreateInfo(*copy_src->pTessellationState);
}

GraphicsPipelineShaderGroupsCreateInfoNV::GraphicsPipelineShaderGroupsCreateInfoNV(
    const VkGraphicsPipelineShaderGroupsCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      groupCount(in_struct->groupCount),
      pGroups(nullptr),
      pipelineCount(in_struct->pipelineCount),
      pPipelines(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (groupCount && in_struct->pGroups) {
        pGroups = new GraphicsShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
    if (pipelineCount && in_struct->pPipelines) {
        pPipelines = new VkPipeline[pipelineCount];
        for (uint32_t i = 0; i < pipelineCount; ++i) {
            pPipelines[i] = in_struct->pPipelines[i];
        }
    }
}

GraphicsPipelineShaderGroupsCreateInfoNV::GraphicsPipelineShaderGroupsCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV),
      pNext(nullptr),
      groupCount(),
      pGroups(nullptr),
      pipelineCount(),
      pPipelines(nullptr) {}

GraphicsPipelineShaderGroupsCreateInfoNV::GraphicsPipelineShaderGroupsCreateInfoNV(
    const GraphicsPipelineShaderGroupsCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    pipelineCount = copy_src.pipelineCount;
    pPipelines = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (groupCount && copy_src.pGroups) {
        pGroups = new GraphicsShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }
    if (pipelineCount && copy_src.pPipelines) {
        pPipelines = new VkPipeline[pipelineCount];
        for (uint32_t i = 0; i < pipelineCount; ++i) {
            pPipelines[i] = copy_src.pPipelines[i];
        }
    }
}

GraphicsPipelineShaderGroupsCreateInfoNV& GraphicsPipelineShaderGroupsCreateInfoNV::operator=(
    const GraphicsPipelineShaderGroupsCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pGroups) delete[] pGroups;
    if (pPipelines) delete[] pPipelines;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    pipelineCount = copy_src.pipelineCount;
    pPipelines = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (groupCount && copy_src.pGroups) {
        pGroups = new GraphicsShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }
    if (pipelineCount && copy_src.pPipelines) {
        pPipelines = new VkPipeline[pipelineCount];
        for (uint32_t i = 0; i < pipelineCount; ++i) {
            pPipelines[i] = copy_src.pPipelines[i];
        }
    }

    return *this;
}

GraphicsPipelineShaderGroupsCreateInfoNV::~GraphicsPipelineShaderGroupsCreateInfoNV() {
    if (pGroups) delete[] pGroups;
    if (pPipelines) delete[] pPipelines;
    FreePnextChain(pNext);
}

void GraphicsPipelineShaderGroupsCreateInfoNV::initialize(const VkGraphicsPipelineShaderGroupsCreateInfoNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pGroups) delete[] pGroups;
    if (pPipelines) delete[] pPipelines;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    groupCount = in_struct->groupCount;
    pGroups = nullptr;
    pipelineCount = in_struct->pipelineCount;
    pPipelines = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (groupCount && in_struct->pGroups) {
        pGroups = new GraphicsShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
    if (pipelineCount && in_struct->pPipelines) {
        pPipelines = new VkPipeline[pipelineCount];
        for (uint32_t i = 0; i < pipelineCount; ++i) {
            pPipelines[i] = in_struct->pPipelines[i];
        }
    }
}

void GraphicsPipelineShaderGroupsCreateInfoNV::initialize(const GraphicsPipelineShaderGroupsCreateInfoNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    groupCount = copy_src->groupCount;
    pGroups = nullptr;
    pipelineCount = copy_src->pipelineCount;
    pPipelines = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (groupCount && copy_src->pGroups) {
        pGroups = new GraphicsShaderGroupCreateInfoNV[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src->pGroups[i]);
        }
    }
    if (pipelineCount && copy_src->pPipelines) {
        pPipelines = new VkPipeline[pipelineCount];
        for (uint32_t i = 0; i < pipelineCount; ++i) {
            pPipelines[i] = copy_src->pPipelines[i];
        }
    }
}

IndirectCommandsLayoutTokenNV::IndirectCommandsLayoutTokenNV(const VkIndirectCommandsLayoutTokenNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      tokenType(in_struct->tokenType),
      stream(in_struct->stream),
      offset(in_struct->offset),
      vertexBindingUnit(in_struct->vertexBindingUnit),
      vertexDynamicStride(in_struct->vertexDynamicStride),
      pushconstantPipelineLayout(in_struct->pushconstantPipelineLayout),
      pushconstantShaderStageFlags(in_struct->pushconstantShaderStageFlags),
      pushconstantOffset(in_struct->pushconstantOffset),
      pushconstantSize(in_struct->pushconstantSize),
      indirectStateFlags(in_struct->indirectStateFlags),
      indexTypeCount(in_struct->indexTypeCount),
      pIndexTypes(nullptr),
      pIndexTypeValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pIndexTypes) {
        pIndexTypes = new VkIndexType[in_struct->indexTypeCount];
        memcpy((void*)pIndexTypes, (void*)in_struct->pIndexTypes, sizeof(VkIndexType) * in_struct->indexTypeCount);
    }

    if (in_struct->pIndexTypeValues) {
        pIndexTypeValues = new uint32_t[in_struct->indexTypeCount];
        memcpy((void*)pIndexTypeValues, (void*)in_struct->pIndexTypeValues, sizeof(uint32_t) * in_struct->indexTypeCount);
    }
}

IndirectCommandsLayoutTokenNV::IndirectCommandsLayoutTokenNV()
    : sType(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV),
      pNext(nullptr),
      tokenType(),
      stream(),
      offset(),
      vertexBindingUnit(),
      vertexDynamicStride(),
      pushconstantPipelineLayout(),
      pushconstantShaderStageFlags(),
      pushconstantOffset(),
      pushconstantSize(),
      indirectStateFlags(),
      indexTypeCount(),
      pIndexTypes(nullptr),
      pIndexTypeValues(nullptr) {}

IndirectCommandsLayoutTokenNV::IndirectCommandsLayoutTokenNV(const IndirectCommandsLayoutTokenNV& copy_src) {
    sType = copy_src.sType;
    tokenType = copy_src.tokenType;
    stream = copy_src.stream;
    offset = copy_src.offset;
    vertexBindingUnit = copy_src.vertexBindingUnit;
    vertexDynamicStride = copy_src.vertexDynamicStride;
    pushconstantPipelineLayout = copy_src.pushconstantPipelineLayout;
    pushconstantShaderStageFlags = copy_src.pushconstantShaderStageFlags;
    pushconstantOffset = copy_src.pushconstantOffset;
    pushconstantSize = copy_src.pushconstantSize;
    indirectStateFlags = copy_src.indirectStateFlags;
    indexTypeCount = copy_src.indexTypeCount;
    pIndexTypes = nullptr;
    pIndexTypeValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pIndexTypes) {
        pIndexTypes = new VkIndexType[copy_src.indexTypeCount];
        memcpy((void*)pIndexTypes, (void*)copy_src.pIndexTypes, sizeof(VkIndexType) * copy_src.indexTypeCount);
    }

    if (copy_src.pIndexTypeValues) {
        pIndexTypeValues = new uint32_t[copy_src.indexTypeCount];
        memcpy((void*)pIndexTypeValues, (void*)copy_src.pIndexTypeValues, sizeof(uint32_t) * copy_src.indexTypeCount);
    }
}

IndirectCommandsLayoutTokenNV& IndirectCommandsLayoutTokenNV::operator=(const IndirectCommandsLayoutTokenNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pIndexTypes) delete[] pIndexTypes;
    if (pIndexTypeValues) delete[] pIndexTypeValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    tokenType = copy_src.tokenType;
    stream = copy_src.stream;
    offset = copy_src.offset;
    vertexBindingUnit = copy_src.vertexBindingUnit;
    vertexDynamicStride = copy_src.vertexDynamicStride;
    pushconstantPipelineLayout = copy_src.pushconstantPipelineLayout;
    pushconstantShaderStageFlags = copy_src.pushconstantShaderStageFlags;
    pushconstantOffset = copy_src.pushconstantOffset;
    pushconstantSize = copy_src.pushconstantSize;
    indirectStateFlags = copy_src.indirectStateFlags;
    indexTypeCount = copy_src.indexTypeCount;
    pIndexTypes = nullptr;
    pIndexTypeValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pIndexTypes) {
        pIndexTypes = new VkIndexType[copy_src.indexTypeCount];
        memcpy((void*)pIndexTypes, (void*)copy_src.pIndexTypes, sizeof(VkIndexType) * copy_src.indexTypeCount);
    }

    if (copy_src.pIndexTypeValues) {
        pIndexTypeValues = new uint32_t[copy_src.indexTypeCount];
        memcpy((void*)pIndexTypeValues, (void*)copy_src.pIndexTypeValues, sizeof(uint32_t) * copy_src.indexTypeCount);
    }

    return *this;
}

IndirectCommandsLayoutTokenNV::~IndirectCommandsLayoutTokenNV() {
    if (pIndexTypes) delete[] pIndexTypes;
    if (pIndexTypeValues) delete[] pIndexTypeValues;
    FreePnextChain(pNext);
}

void IndirectCommandsLayoutTokenNV::initialize(const VkIndirectCommandsLayoutTokenNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pIndexTypes) delete[] pIndexTypes;
    if (pIndexTypeValues) delete[] pIndexTypeValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    tokenType = in_struct->tokenType;
    stream = in_struct->stream;
    offset = in_struct->offset;
    vertexBindingUnit = in_struct->vertexBindingUnit;
    vertexDynamicStride = in_struct->vertexDynamicStride;
    pushconstantPipelineLayout = in_struct->pushconstantPipelineLayout;
    pushconstantShaderStageFlags = in_struct->pushconstantShaderStageFlags;
    pushconstantOffset = in_struct->pushconstantOffset;
    pushconstantSize = in_struct->pushconstantSize;
    indirectStateFlags = in_struct->indirectStateFlags;
    indexTypeCount = in_struct->indexTypeCount;
    pIndexTypes = nullptr;
    pIndexTypeValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pIndexTypes) {
        pIndexTypes = new VkIndexType[in_struct->indexTypeCount];
        memcpy((void*)pIndexTypes, (void*)in_struct->pIndexTypes, sizeof(VkIndexType) * in_struct->indexTypeCount);
    }

    if (in_struct->pIndexTypeValues) {
        pIndexTypeValues = new uint32_t[in_struct->indexTypeCount];
        memcpy((void*)pIndexTypeValues, (void*)in_struct->pIndexTypeValues, sizeof(uint32_t) * in_struct->indexTypeCount);
    }
}

void IndirectCommandsLayoutTokenNV::initialize(const IndirectCommandsLayoutTokenNV* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    tokenType = copy_src->tokenType;
    stream = copy_src->stream;
    offset = copy_src->offset;
    vertexBindingUnit = copy_src->vertexBindingUnit;
    vertexDynamicStride = copy_src->vertexDynamicStride;
    pushconstantPipelineLayout = copy_src->pushconstantPipelineLayout;
    pushconstantShaderStageFlags = copy_src->pushconstantShaderStageFlags;
    pushconstantOffset = copy_src->pushconstantOffset;
    pushconstantSize = copy_src->pushconstantSize;
    indirectStateFlags = copy_src->indirectStateFlags;
    indexTypeCount = copy_src->indexTypeCount;
    pIndexTypes = nullptr;
    pIndexTypeValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pIndexTypes) {
        pIndexTypes = new VkIndexType[copy_src->indexTypeCount];
        memcpy((void*)pIndexTypes, (void*)copy_src->pIndexTypes, sizeof(VkIndexType) * copy_src->indexTypeCount);
    }

    if (copy_src->pIndexTypeValues) {
        pIndexTypeValues = new uint32_t[copy_src->indexTypeCount];
        memcpy((void*)pIndexTypeValues, (void*)copy_src->pIndexTypeValues, sizeof(uint32_t) * copy_src->indexTypeCount);
    }
}

IndirectCommandsLayoutCreateInfoNV::IndirectCommandsLayoutCreateInfoNV(const VkIndirectCommandsLayoutCreateInfoNV* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      tokenCount(in_struct->tokenCount),
      pTokens(nullptr),
      streamCount(in_struct->streamCount),
      pStreamStrides(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (tokenCount && in_struct->pTokens) {
        pTokens = new IndirectCommandsLayoutTokenNV[tokenCount];
        for (uint32_t i = 0; i < tokenCount; ++i) {
            pTokens[i].initialize(&in_struct->pTokens[i]);
        }
    }

    if (in_struct->pStreamStrides) {
        pStreamStrides = new uint32_t[in_struct->streamCount];
        memcpy((void*)pStreamStrides, (void*)in_struct->pStreamStrides, sizeof(uint32_t) * in_struct->streamCount);
    }
}

IndirectCommandsLayoutCreateInfoNV::IndirectCommandsLayoutCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV),
      pNext(nullptr),
      flags(),
      pipelineBindPoint(),
      tokenCount(),
      pTokens(nullptr),
      streamCount(),
      pStreamStrides(nullptr) {}

IndirectCommandsLayoutCreateInfoNV::IndirectCommandsLayoutCreateInfoNV(const IndirectCommandsLayoutCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    tokenCount = copy_src.tokenCount;
    pTokens = nullptr;
    streamCount = copy_src.streamCount;
    pStreamStrides = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (tokenCount && copy_src.pTokens) {
        pTokens = new IndirectCommandsLayoutTokenNV[tokenCount];
        for (uint32_t i = 0; i < tokenCount; ++i) {
            pTokens[i].initialize(&copy_src.pTokens[i]);
        }
    }

    if (copy_src.pStreamStrides) {
        pStreamStrides = new uint32_t[copy_src.streamCount];
        memcpy((void*)pStreamStrides, (void*)copy_src.pStreamStrides, sizeof(uint32_t) * copy_src.streamCount);
    }
}

IndirectCommandsLayoutCreateInfoNV& IndirectCommandsLayoutCreateInfoNV::operator=(
    const IndirectCommandsLayoutCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pTokens) delete[] pTokens;
    if (pStreamStrides) delete[] pStreamStrides;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    tokenCount = copy_src.tokenCount;
    pTokens = nullptr;
    streamCount = copy_src.streamCount;
    pStreamStrides = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (tokenCount && copy_src.pTokens) {
        pTokens = new IndirectCommandsLayoutTokenNV[tokenCount];
        for (uint32_t i = 0; i < tokenCount; ++i) {
            pTokens[i].initialize(&copy_src.pTokens[i]);
        }
    }

    if (copy_src.pStreamStrides) {
        pStreamStrides = new uint32_t[copy_src.streamCount];
        memcpy((void*)pStreamStrides, (void*)copy_src.pStreamStrides, sizeof(uint32_t) * copy_src.streamCount);
    }

    return *this;
}

IndirectCommandsLayoutCreateInfoNV::~IndirectCommandsLayoutCreateInfoNV() {
    if (pTokens) delete[] pTokens;
    if (pStreamStrides) delete[] pStreamStrides;
    FreePnextChain(pNext);
}

void IndirectCommandsLayoutCreateInfoNV::initialize(const VkIndirectCommandsLayoutCreateInfoNV* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pTokens) delete[] pTokens;
    if (pStreamStrides) delete[] pStreamStrides;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    tokenCount = in_struct->tokenCount;
    pTokens = nullptr;
    streamCount = in_struct->streamCount;
    pStreamStrides = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (tokenCount && in_struct->pTokens) {
        pTokens = new IndirectCommandsLayoutTokenNV[tokenCount];
        for (uint32_t i = 0; i < tokenCount; ++i) {
            pTokens[i].initialize(&in_struct->pTokens[i]);
        }
    }

    if (in_struct->pStreamStrides) {
        pStreamStrides = new uint32_t[in_struct->streamCount];
        memcpy((void*)pStreamStrides, (void*)in_struct->pStreamStrides, sizeof(uint32_t) * in_struct->streamCount);
    }
}

void IndirectCommandsLayoutCreateInfoNV::initialize(const IndirectCommandsLayoutCreateInfoNV* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    tokenCount = copy_src->tokenCount;
    pTokens = nullptr;
    streamCount = copy_src->streamCount;
    pStreamStrides = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (tokenCount && copy_src->pTokens) {
        pTokens = new IndirectCommandsLayoutTokenNV[tokenCount];
        for (uint32_t i = 0; i < tokenCount; ++i) {
            pTokens[i].initialize(&copy_src->pTokens[i]);
        }
    }

    if (copy_src->pStreamStrides) {
        pStreamStrides = new uint32_t[copy_src->streamCount];
        memcpy((void*)pStreamStrides, (void*)copy_src->pStreamStrides, sizeof(uint32_t) * copy_src->streamCount);
    }
}

GeneratedCommandsInfoNV::GeneratedCommandsInfoNV(const VkGeneratedCommandsInfoNV* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      pipeline(in_struct->pipeline),
      indirectCommandsLayout(in_struct->indirectCommandsLayout),
      streamCount(in_struct->streamCount),
      pStreams(nullptr),
      sequencesCount(in_struct->sequencesCount),
      preprocessBuffer(in_struct->preprocessBuffer),
      preprocessOffset(in_struct->preprocessOffset),
      preprocessSize(in_struct->preprocessSize),
      sequencesCountBuffer(in_struct->sequencesCountBuffer),
      sequencesCountOffset(in_struct->sequencesCountOffset),
      sequencesIndexBuffer(in_struct->sequencesIndexBuffer),
      sequencesIndexOffset(in_struct->sequencesIndexOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (streamCount && in_struct->pStreams) {
        pStreams = new VkIndirectCommandsStreamNV[streamCount];
        for (uint32_t i = 0; i < streamCount; ++i) {
            pStreams[i] = in_struct->pStreams[i];
        }
    }
}

GeneratedCommandsInfoNV::GeneratedCommandsInfoNV()
    : sType(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV),
      pNext(nullptr),
      pipelineBindPoint(),
      pipeline(),
      indirectCommandsLayout(),
      streamCount(),
      pStreams(nullptr),
      sequencesCount(),
      preprocessBuffer(),
      preprocessOffset(),
      preprocessSize(),
      sequencesCountBuffer(),
      sequencesCountOffset(),
      sequencesIndexBuffer(),
      sequencesIndexOffset() {}

GeneratedCommandsInfoNV::GeneratedCommandsInfoNV(const GeneratedCommandsInfoNV& copy_src) {
    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    indirectCommandsLayout = copy_src.indirectCommandsLayout;
    streamCount = copy_src.streamCount;
    pStreams = nullptr;
    sequencesCount = copy_src.sequencesCount;
    preprocessBuffer = copy_src.preprocessBuffer;
    preprocessOffset = copy_src.preprocessOffset;
    preprocessSize = copy_src.preprocessSize;
    sequencesCountBuffer = copy_src.sequencesCountBuffer;
    sequencesCountOffset = copy_src.sequencesCountOffset;
    sequencesIndexBuffer = copy_src.sequencesIndexBuffer;
    sequencesIndexOffset = copy_src.sequencesIndexOffset;
    pNext = SafePnextCopy(copy_src.pNext);
    if (streamCount && copy_src.pStreams) {
        pStreams = new VkIndirectCommandsStreamNV[streamCount];
        for (uint32_t i = 0; i < streamCount; ++i) {
            pStreams[i] = copy_src.pStreams[i];
        }
    }
}

GeneratedCommandsInfoNV& GeneratedCommandsInfoNV::operator=(const GeneratedCommandsInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pStreams) delete[] pStreams;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    indirectCommandsLayout = copy_src.indirectCommandsLayout;
    streamCount = copy_src.streamCount;
    pStreams = nullptr;
    sequencesCount = copy_src.sequencesCount;
    preprocessBuffer = copy_src.preprocessBuffer;
    preprocessOffset = copy_src.preprocessOffset;
    preprocessSize = copy_src.preprocessSize;
    sequencesCountBuffer = copy_src.sequencesCountBuffer;
    sequencesCountOffset = copy_src.sequencesCountOffset;
    sequencesIndexBuffer = copy_src.sequencesIndexBuffer;
    sequencesIndexOffset = copy_src.sequencesIndexOffset;
    pNext = SafePnextCopy(copy_src.pNext);
    if (streamCount && copy_src.pStreams) {
        pStreams = new VkIndirectCommandsStreamNV[streamCount];
        for (uint32_t i = 0; i < streamCount; ++i) {
            pStreams[i] = copy_src.pStreams[i];
        }
    }

    return *this;
}

GeneratedCommandsInfoNV::~GeneratedCommandsInfoNV() {
    if (pStreams) delete[] pStreams;
    FreePnextChain(pNext);
}

void GeneratedCommandsInfoNV::initialize(const VkGeneratedCommandsInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStreams) delete[] pStreams;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipeline = in_struct->pipeline;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    streamCount = in_struct->streamCount;
    pStreams = nullptr;
    sequencesCount = in_struct->sequencesCount;
    preprocessBuffer = in_struct->preprocessBuffer;
    preprocessOffset = in_struct->preprocessOffset;
    preprocessSize = in_struct->preprocessSize;
    sequencesCountBuffer = in_struct->sequencesCountBuffer;
    sequencesCountOffset = in_struct->sequencesCountOffset;
    sequencesIndexBuffer = in_struct->sequencesIndexBuffer;
    sequencesIndexOffset = in_struct->sequencesIndexOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (streamCount && in_struct->pStreams) {
        pStreams = new VkIndirectCommandsStreamNV[streamCount];
        for (uint32_t i = 0; i < streamCount; ++i) {
            pStreams[i] = in_struct->pStreams[i];
        }
    }
}

void GeneratedCommandsInfoNV::initialize(const GeneratedCommandsInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    pipeline = copy_src->pipeline;
    indirectCommandsLayout = copy_src->indirectCommandsLayout;
    streamCount = copy_src->streamCount;
    pStreams = nullptr;
    sequencesCount = copy_src->sequencesCount;
    preprocessBuffer = copy_src->preprocessBuffer;
    preprocessOffset = copy_src->preprocessOffset;
    preprocessSize = copy_src->preprocessSize;
    sequencesCountBuffer = copy_src->sequencesCountBuffer;
    sequencesCountOffset = copy_src->sequencesCountOffset;
    sequencesIndexBuffer = copy_src->sequencesIndexBuffer;
    sequencesIndexOffset = copy_src->sequencesIndexOffset;
    pNext = SafePnextCopy(copy_src->pNext);
    if (streamCount && copy_src->pStreams) {
        pStreams = new VkIndirectCommandsStreamNV[streamCount];
        for (uint32_t i = 0; i < streamCount; ++i) {
            pStreams[i] = copy_src->pStreams[i];
        }
    }
}

GeneratedCommandsMemoryRequirementsInfoNV::GeneratedCommandsMemoryRequirementsInfoNV(
    const VkGeneratedCommandsMemoryRequirementsInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      pipeline(in_struct->pipeline),
      indirectCommandsLayout(in_struct->indirectCommandsLayout),
      maxSequencesCount(in_struct->maxSequencesCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

GeneratedCommandsMemoryRequirementsInfoNV::GeneratedCommandsMemoryRequirementsInfoNV()
    : sType(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV),
      pNext(nullptr),
      pipelineBindPoint(),
      pipeline(),
      indirectCommandsLayout(),
      maxSequencesCount() {}

GeneratedCommandsMemoryRequirementsInfoNV::GeneratedCommandsMemoryRequirementsInfoNV(
    const GeneratedCommandsMemoryRequirementsInfoNV& copy_src) {
    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    indirectCommandsLayout = copy_src.indirectCommandsLayout;
    maxSequencesCount = copy_src.maxSequencesCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

GeneratedCommandsMemoryRequirementsInfoNV& GeneratedCommandsMemoryRequirementsInfoNV::operator=(
    const GeneratedCommandsMemoryRequirementsInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    indirectCommandsLayout = copy_src.indirectCommandsLayout;
    maxSequencesCount = copy_src.maxSequencesCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

GeneratedCommandsMemoryRequirementsInfoNV::~GeneratedCommandsMemoryRequirementsInfoNV() { FreePnextChain(pNext); }

void GeneratedCommandsMemoryRequirementsInfoNV::initialize(const VkGeneratedCommandsMemoryRequirementsInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipeline = in_struct->pipeline;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    maxSequencesCount = in_struct->maxSequencesCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void GeneratedCommandsMemoryRequirementsInfoNV::initialize(const GeneratedCommandsMemoryRequirementsInfoNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    pipeline = copy_src->pipeline;
    indirectCommandsLayout = copy_src->indirectCommandsLayout;
    maxSequencesCount = copy_src->maxSequencesCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::PhysicalDeviceInheritedViewportScissorFeaturesNV(
    const VkPhysicalDeviceInheritedViewportScissorFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), inheritedViewportScissor2D(in_struct->inheritedViewportScissor2D) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::PhysicalDeviceInheritedViewportScissorFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV),
      pNext(nullptr),
      inheritedViewportScissor2D() {}

PhysicalDeviceInheritedViewportScissorFeaturesNV::PhysicalDeviceInheritedViewportScissorFeaturesNV(
    const PhysicalDeviceInheritedViewportScissorFeaturesNV& copy_src) {
    sType = copy_src.sType;
    inheritedViewportScissor2D = copy_src.inheritedViewportScissor2D;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV& PhysicalDeviceInheritedViewportScissorFeaturesNV::operator=(
    const PhysicalDeviceInheritedViewportScissorFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    inheritedViewportScissor2D = copy_src.inheritedViewportScissor2D;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::~PhysicalDeviceInheritedViewportScissorFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceInheritedViewportScissorFeaturesNV::initialize(
    const VkPhysicalDeviceInheritedViewportScissorFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    inheritedViewportScissor2D = in_struct->inheritedViewportScissor2D;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceInheritedViewportScissorFeaturesNV::initialize(const PhysicalDeviceInheritedViewportScissorFeaturesNV* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    inheritedViewportScissor2D = copy_src->inheritedViewportScissor2D;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferInheritanceViewportScissorInfoNV::CommandBufferInheritanceViewportScissorInfoNV(
    const VkCommandBufferInheritanceViewportScissorInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      viewportScissor2D(in_struct->viewportScissor2D),
      viewportDepthCount(in_struct->viewportDepthCount),
      pViewportDepths(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewportDepths) {
        pViewportDepths = new VkViewport(*in_struct->pViewportDepths);
    }
}

CommandBufferInheritanceViewportScissorInfoNV::CommandBufferInheritanceViewportScissorInfoNV()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV),
      pNext(nullptr),
      viewportScissor2D(),
      viewportDepthCount(),
      pViewportDepths(nullptr) {}

CommandBufferInheritanceViewportScissorInfoNV::CommandBufferInheritanceViewportScissorInfoNV(
    const CommandBufferInheritanceViewportScissorInfoNV& copy_src) {
    sType = copy_src.sType;
    viewportScissor2D = copy_src.viewportScissor2D;
    viewportDepthCount = copy_src.viewportDepthCount;
    pViewportDepths = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportDepths) {
        pViewportDepths = new VkViewport(*copy_src.pViewportDepths);
    }
}

CommandBufferInheritanceViewportScissorInfoNV& CommandBufferInheritanceViewportScissorInfoNV::operator=(
    const CommandBufferInheritanceViewportScissorInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewportDepths) delete pViewportDepths;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewportScissor2D = copy_src.viewportScissor2D;
    viewportDepthCount = copy_src.viewportDepthCount;
    pViewportDepths = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewportDepths) {
        pViewportDepths = new VkViewport(*copy_src.pViewportDepths);
    }

    return *this;
}

CommandBufferInheritanceViewportScissorInfoNV::~CommandBufferInheritanceViewportScissorInfoNV() {
    if (pViewportDepths) delete pViewportDepths;
    FreePnextChain(pNext);
}

void CommandBufferInheritanceViewportScissorInfoNV::initialize(const VkCommandBufferInheritanceViewportScissorInfoNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewportDepths) delete pViewportDepths;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewportScissor2D = in_struct->viewportScissor2D;
    viewportDepthCount = in_struct->viewportDepthCount;
    pViewportDepths = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewportDepths) {
        pViewportDepths = new VkViewport(*in_struct->pViewportDepths);
    }
}

void CommandBufferInheritanceViewportScissorInfoNV::initialize(const CommandBufferInheritanceViewportScissorInfoNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewportScissor2D = copy_src->viewportScissor2D;
    viewportDepthCount = copy_src->viewportDepthCount;
    pViewportDepths = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewportDepths) {
        pViewportDepths = new VkViewport(*copy_src->pViewportDepths);
    }
}

RenderPassTransformBeginInfoQCOM::RenderPassTransformBeginInfoQCOM(const VkRenderPassTransformBeginInfoQCOM* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), transform(in_struct->transform) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderPassTransformBeginInfoQCOM::RenderPassTransformBeginInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM), pNext(nullptr), transform() {}

RenderPassTransformBeginInfoQCOM::RenderPassTransformBeginInfoQCOM(const RenderPassTransformBeginInfoQCOM& copy_src) {
    sType = copy_src.sType;
    transform = copy_src.transform;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderPassTransformBeginInfoQCOM& RenderPassTransformBeginInfoQCOM::operator=(const RenderPassTransformBeginInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    transform = copy_src.transform;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderPassTransformBeginInfoQCOM::~RenderPassTransformBeginInfoQCOM() { FreePnextChain(pNext); }

void RenderPassTransformBeginInfoQCOM::initialize(const VkRenderPassTransformBeginInfoQCOM* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    transform = in_struct->transform;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderPassTransformBeginInfoQCOM::initialize(const RenderPassTransformBeginInfoQCOM* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    transform = copy_src->transform;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::CommandBufferInheritanceRenderPassTransformInfoQCOM(
    const VkCommandBufferInheritanceRenderPassTransformInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), transform(in_struct->transform), renderArea(in_struct->renderArea) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::CommandBufferInheritanceRenderPassTransformInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM),
      pNext(nullptr),
      transform(),
      renderArea() {}

CommandBufferInheritanceRenderPassTransformInfoQCOM::CommandBufferInheritanceRenderPassTransformInfoQCOM(
    const CommandBufferInheritanceRenderPassTransformInfoQCOM& copy_src) {
    sType = copy_src.sType;
    transform = copy_src.transform;
    renderArea = copy_src.renderArea;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM& CommandBufferInheritanceRenderPassTransformInfoQCOM::operator=(
    const CommandBufferInheritanceRenderPassTransformInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    transform = copy_src.transform;
    renderArea = copy_src.renderArea;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::~CommandBufferInheritanceRenderPassTransformInfoQCOM() {
    FreePnextChain(pNext);
}

void CommandBufferInheritanceRenderPassTransformInfoQCOM::initialize(
    const VkCommandBufferInheritanceRenderPassTransformInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    transform = in_struct->transform;
    renderArea = in_struct->renderArea;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandBufferInheritanceRenderPassTransformInfoQCOM::initialize(
    const CommandBufferInheritanceRenderPassTransformInfoQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    transform = copy_src->transform;
    renderArea = copy_src->renderArea;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePresentBarrierFeaturesNV::PhysicalDevicePresentBarrierFeaturesNV(
    const VkPhysicalDevicePresentBarrierFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentBarrier(in_struct->presentBarrier) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePresentBarrierFeaturesNV::PhysicalDevicePresentBarrierFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV), pNext(nullptr), presentBarrier() {}

PhysicalDevicePresentBarrierFeaturesNV::PhysicalDevicePresentBarrierFeaturesNV(
    const PhysicalDevicePresentBarrierFeaturesNV& copy_src) {
    sType = copy_src.sType;
    presentBarrier = copy_src.presentBarrier;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePresentBarrierFeaturesNV& PhysicalDevicePresentBarrierFeaturesNV::operator=(
    const PhysicalDevicePresentBarrierFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentBarrier = copy_src.presentBarrier;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePresentBarrierFeaturesNV::~PhysicalDevicePresentBarrierFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDevicePresentBarrierFeaturesNV::initialize(const VkPhysicalDevicePresentBarrierFeaturesNV* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentBarrier = in_struct->presentBarrier;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePresentBarrierFeaturesNV::initialize(const PhysicalDevicePresentBarrierFeaturesNV* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentBarrier = copy_src->presentBarrier;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceCapabilitiesPresentBarrierNV::SurfaceCapabilitiesPresentBarrierNV(const VkSurfaceCapabilitiesPresentBarrierNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), presentBarrierSupported(in_struct->presentBarrierSupported) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceCapabilitiesPresentBarrierNV::SurfaceCapabilitiesPresentBarrierNV()
    : sType(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV), pNext(nullptr), presentBarrierSupported() {}

SurfaceCapabilitiesPresentBarrierNV::SurfaceCapabilitiesPresentBarrierNV(const SurfaceCapabilitiesPresentBarrierNV& copy_src) {
    sType = copy_src.sType;
    presentBarrierSupported = copy_src.presentBarrierSupported;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceCapabilitiesPresentBarrierNV& SurfaceCapabilitiesPresentBarrierNV::operator=(
    const SurfaceCapabilitiesPresentBarrierNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentBarrierSupported = copy_src.presentBarrierSupported;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceCapabilitiesPresentBarrierNV::~SurfaceCapabilitiesPresentBarrierNV() { FreePnextChain(pNext); }

void SurfaceCapabilitiesPresentBarrierNV::initialize(const VkSurfaceCapabilitiesPresentBarrierNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentBarrierSupported = in_struct->presentBarrierSupported;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceCapabilitiesPresentBarrierNV::initialize(const SurfaceCapabilitiesPresentBarrierNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentBarrierSupported = copy_src->presentBarrierSupported;
    pNext = SafePnextCopy(copy_src->pNext);
}

SwapchainPresentBarrierCreateInfoNV::SwapchainPresentBarrierCreateInfoNV(const VkSwapchainPresentBarrierCreateInfoNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), presentBarrierEnable(in_struct->presentBarrierEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SwapchainPresentBarrierCreateInfoNV::SwapchainPresentBarrierCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV), pNext(nullptr), presentBarrierEnable() {}

SwapchainPresentBarrierCreateInfoNV::SwapchainPresentBarrierCreateInfoNV(const SwapchainPresentBarrierCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    presentBarrierEnable = copy_src.presentBarrierEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

SwapchainPresentBarrierCreateInfoNV& SwapchainPresentBarrierCreateInfoNV::operator=(
    const SwapchainPresentBarrierCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentBarrierEnable = copy_src.presentBarrierEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SwapchainPresentBarrierCreateInfoNV::~SwapchainPresentBarrierCreateInfoNV() { FreePnextChain(pNext); }

void SwapchainPresentBarrierCreateInfoNV::initialize(const VkSwapchainPresentBarrierCreateInfoNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentBarrierEnable = in_struct->presentBarrierEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SwapchainPresentBarrierCreateInfoNV::initialize(const SwapchainPresentBarrierCreateInfoNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentBarrierEnable = copy_src->presentBarrierEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::PhysicalDeviceDiagnosticsConfigFeaturesNV(
    const VkPhysicalDeviceDiagnosticsConfigFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), diagnosticsConfig(in_struct->diagnosticsConfig) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::PhysicalDeviceDiagnosticsConfigFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV), pNext(nullptr), diagnosticsConfig() {}

PhysicalDeviceDiagnosticsConfigFeaturesNV::PhysicalDeviceDiagnosticsConfigFeaturesNV(
    const PhysicalDeviceDiagnosticsConfigFeaturesNV& copy_src) {
    sType = copy_src.sType;
    diagnosticsConfig = copy_src.diagnosticsConfig;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV& PhysicalDeviceDiagnosticsConfigFeaturesNV::operator=(
    const PhysicalDeviceDiagnosticsConfigFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    diagnosticsConfig = copy_src.diagnosticsConfig;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::~PhysicalDeviceDiagnosticsConfigFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceDiagnosticsConfigFeaturesNV::initialize(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    diagnosticsConfig = in_struct->diagnosticsConfig;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDiagnosticsConfigFeaturesNV::initialize(const PhysicalDeviceDiagnosticsConfigFeaturesNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    diagnosticsConfig = copy_src->diagnosticsConfig;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceDiagnosticsConfigCreateInfoNV::DeviceDiagnosticsConfigCreateInfoNV(const VkDeviceDiagnosticsConfigCreateInfoNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceDiagnosticsConfigCreateInfoNV::DeviceDiagnosticsConfigCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV), pNext(nullptr), flags() {}

DeviceDiagnosticsConfigCreateInfoNV::DeviceDiagnosticsConfigCreateInfoNV(const DeviceDiagnosticsConfigCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceDiagnosticsConfigCreateInfoNV& DeviceDiagnosticsConfigCreateInfoNV::operator=(
    const DeviceDiagnosticsConfigCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceDiagnosticsConfigCreateInfoNV::~DeviceDiagnosticsConfigCreateInfoNV() { FreePnextChain(pNext); }

void DeviceDiagnosticsConfigCreateInfoNV::initialize(const VkDeviceDiagnosticsConfigCreateInfoNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceDiagnosticsConfigCreateInfoNV::initialize(const DeviceDiagnosticsConfigCreateInfoNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

CudaModuleCreateInfoNV::CudaModuleCreateInfoNV(const VkCudaModuleCreateInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), dataSize(in_struct->dataSize), pData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

CudaModuleCreateInfoNV::CudaModuleCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_CUDA_MODULE_CREATE_INFO_NV), pNext(nullptr), dataSize(), pData(nullptr) {}

CudaModuleCreateInfoNV::CudaModuleCreateInfoNV(const CudaModuleCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

CudaModuleCreateInfoNV& CudaModuleCreateInfoNV::operator=(const CudaModuleCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

CudaModuleCreateInfoNV::~CudaModuleCreateInfoNV() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void CudaModuleCreateInfoNV::initialize(const VkCudaModuleCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dataSize = in_struct->dataSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void CudaModuleCreateInfoNV::initialize(const CudaModuleCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dataSize = copy_src->dataSize;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

CudaFunctionCreateInfoNV::CudaFunctionCreateInfoNV(const VkCudaFunctionCreateInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), module(in_struct->module) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
}

CudaFunctionCreateInfoNV::CudaFunctionCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_CUDA_FUNCTION_CREATE_INFO_NV), pNext(nullptr), module(), pName(nullptr) {}

CudaFunctionCreateInfoNV::CudaFunctionCreateInfoNV(const CudaFunctionCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    module = copy_src.module;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
}

CudaFunctionCreateInfoNV& CudaFunctionCreateInfoNV::operator=(const CudaFunctionCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    module = copy_src.module;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);

    return *this;
}

CudaFunctionCreateInfoNV::~CudaFunctionCreateInfoNV() {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
}

void CudaFunctionCreateInfoNV::initialize(const VkCudaFunctionCreateInfoNV* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    module = in_struct->module;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
}

void CudaFunctionCreateInfoNV::initialize(const CudaFunctionCreateInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    module = copy_src->module;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
}

CudaLaunchInfoNV::CudaLaunchInfoNV(const VkCudaLaunchInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      function(in_struct->function),
      gridDimX(in_struct->gridDimX),
      gridDimY(in_struct->gridDimY),
      gridDimZ(in_struct->gridDimZ),
      blockDimX(in_struct->blockDimX),
      blockDimY(in_struct->blockDimY),
      blockDimZ(in_struct->blockDimZ),
      sharedMemBytes(in_struct->sharedMemBytes),
      paramCount(in_struct->paramCount),
      pParams(in_struct->pParams),
      extraCount(in_struct->extraCount),
      pExtras(in_struct->pExtras) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CudaLaunchInfoNV::CudaLaunchInfoNV()
    : sType(VK_STRUCTURE_TYPE_CUDA_LAUNCH_INFO_NV),
      pNext(nullptr),
      function(),
      gridDimX(),
      gridDimY(),
      gridDimZ(),
      blockDimX(),
      blockDimY(),
      blockDimZ(),
      sharedMemBytes(),
      paramCount(),
      pParams(nullptr),
      extraCount(),
      pExtras(nullptr) {}

CudaLaunchInfoNV::CudaLaunchInfoNV(const CudaLaunchInfoNV& copy_src) {
    sType = copy_src.sType;
    function = copy_src.function;
    gridDimX = copy_src.gridDimX;
    gridDimY = copy_src.gridDimY;
    gridDimZ = copy_src.gridDimZ;
    blockDimX = copy_src.blockDimX;
    blockDimY = copy_src.blockDimY;
    blockDimZ = copy_src.blockDimZ;
    sharedMemBytes = copy_src.sharedMemBytes;
    paramCount = copy_src.paramCount;
    pParams = copy_src.pParams;
    extraCount = copy_src.extraCount;
    pExtras = copy_src.pExtras;
    pNext = SafePnextCopy(copy_src.pNext);
}

CudaLaunchInfoNV& CudaLaunchInfoNV::operator=(const CudaLaunchInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    function = copy_src.function;
    gridDimX = copy_src.gridDimX;
    gridDimY = copy_src.gridDimY;
    gridDimZ = copy_src.gridDimZ;
    blockDimX = copy_src.blockDimX;
    blockDimY = copy_src.blockDimY;
    blockDimZ = copy_src.blockDimZ;
    sharedMemBytes = copy_src.sharedMemBytes;
    paramCount = copy_src.paramCount;
    pParams = copy_src.pParams;
    extraCount = copy_src.extraCount;
    pExtras = copy_src.pExtras;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CudaLaunchInfoNV::~CudaLaunchInfoNV() { FreePnextChain(pNext); }

void CudaLaunchInfoNV::initialize(const VkCudaLaunchInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    function = in_struct->function;
    gridDimX = in_struct->gridDimX;
    gridDimY = in_struct->gridDimY;
    gridDimZ = in_struct->gridDimZ;
    blockDimX = in_struct->blockDimX;
    blockDimY = in_struct->blockDimY;
    blockDimZ = in_struct->blockDimZ;
    sharedMemBytes = in_struct->sharedMemBytes;
    paramCount = in_struct->paramCount;
    pParams = in_struct->pParams;
    extraCount = in_struct->extraCount;
    pExtras = in_struct->pExtras;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CudaLaunchInfoNV::initialize(const CudaLaunchInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    function = copy_src->function;
    gridDimX = copy_src->gridDimX;
    gridDimY = copy_src->gridDimY;
    gridDimZ = copy_src->gridDimZ;
    blockDimX = copy_src->blockDimX;
    blockDimY = copy_src->blockDimY;
    blockDimZ = copy_src->blockDimZ;
    sharedMemBytes = copy_src->sharedMemBytes;
    paramCount = copy_src->paramCount;
    pParams = copy_src->pParams;
    extraCount = copy_src->extraCount;
    pExtras = copy_src->pExtras;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::PhysicalDeviceCudaKernelLaunchFeaturesNV(
    const VkPhysicalDeviceCudaKernelLaunchFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cudaKernelLaunchFeatures(in_struct->cudaKernelLaunchFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::PhysicalDeviceCudaKernelLaunchFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV), pNext(nullptr), cudaKernelLaunchFeatures() {}

PhysicalDeviceCudaKernelLaunchFeaturesNV::PhysicalDeviceCudaKernelLaunchFeaturesNV(
    const PhysicalDeviceCudaKernelLaunchFeaturesNV& copy_src) {
    sType = copy_src.sType;
    cudaKernelLaunchFeatures = copy_src.cudaKernelLaunchFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV& PhysicalDeviceCudaKernelLaunchFeaturesNV::operator=(
    const PhysicalDeviceCudaKernelLaunchFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cudaKernelLaunchFeatures = copy_src.cudaKernelLaunchFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::~PhysicalDeviceCudaKernelLaunchFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCudaKernelLaunchFeaturesNV::initialize(const VkPhysicalDeviceCudaKernelLaunchFeaturesNV* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cudaKernelLaunchFeatures = in_struct->cudaKernelLaunchFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCudaKernelLaunchFeaturesNV::initialize(const PhysicalDeviceCudaKernelLaunchFeaturesNV* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cudaKernelLaunchFeatures = copy_src->cudaKernelLaunchFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::PhysicalDeviceCudaKernelLaunchPropertiesNV(
    const VkPhysicalDeviceCudaKernelLaunchPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      computeCapabilityMinor(in_struct->computeCapabilityMinor),
      computeCapabilityMajor(in_struct->computeCapabilityMajor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::PhysicalDeviceCudaKernelLaunchPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV),
      pNext(nullptr),
      computeCapabilityMinor(),
      computeCapabilityMajor() {}

PhysicalDeviceCudaKernelLaunchPropertiesNV::PhysicalDeviceCudaKernelLaunchPropertiesNV(
    const PhysicalDeviceCudaKernelLaunchPropertiesNV& copy_src) {
    sType = copy_src.sType;
    computeCapabilityMinor = copy_src.computeCapabilityMinor;
    computeCapabilityMajor = copy_src.computeCapabilityMajor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV& PhysicalDeviceCudaKernelLaunchPropertiesNV::operator=(
    const PhysicalDeviceCudaKernelLaunchPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    computeCapabilityMinor = copy_src.computeCapabilityMinor;
    computeCapabilityMajor = copy_src.computeCapabilityMajor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::~PhysicalDeviceCudaKernelLaunchPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCudaKernelLaunchPropertiesNV::initialize(const VkPhysicalDeviceCudaKernelLaunchPropertiesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    computeCapabilityMinor = in_struct->computeCapabilityMinor;
    computeCapabilityMajor = in_struct->computeCapabilityMajor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCudaKernelLaunchPropertiesNV::initialize(const PhysicalDeviceCudaKernelLaunchPropertiesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    computeCapabilityMinor = copy_src->computeCapabilityMinor;
    computeCapabilityMajor = copy_src->computeCapabilityMajor;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueryLowLatencySupportNV::QueryLowLatencySupportNV(const VkQueryLowLatencySupportNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pQueriedLowLatencyData(in_struct->pQueriedLowLatencyData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueryLowLatencySupportNV::QueryLowLatencySupportNV()
    : sType(VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV), pNext(nullptr), pQueriedLowLatencyData(nullptr) {}

QueryLowLatencySupportNV::QueryLowLatencySupportNV(const QueryLowLatencySupportNV& copy_src) {
    sType = copy_src.sType;
    pQueriedLowLatencyData = copy_src.pQueriedLowLatencyData;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueryLowLatencySupportNV& QueryLowLatencySupportNV::operator=(const QueryLowLatencySupportNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pQueriedLowLatencyData = copy_src.pQueriedLowLatencyData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueryLowLatencySupportNV::~QueryLowLatencySupportNV() { FreePnextChain(pNext); }

void QueryLowLatencySupportNV::initialize(const VkQueryLowLatencySupportNV* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pQueriedLowLatencyData = in_struct->pQueriedLowLatencyData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueryLowLatencySupportNV::initialize(const QueryLowLatencySupportNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pQueriedLowLatencyData = copy_src->pQueriedLowLatencyData;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(
    const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderEarlyAndLateFragmentTests(in_struct->shaderEarlyAndLateFragmentTests) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD),
      pNext(nullptr),
      shaderEarlyAndLateFragmentTests() {}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(
    const PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& copy_src) {
    sType = copy_src.sType;
    shaderEarlyAndLateFragmentTests = copy_src.shaderEarlyAndLateFragmentTests;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::operator=(
    const PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderEarlyAndLateFragmentTests = copy_src.shaderEarlyAndLateFragmentTests;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::~PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD() {
    FreePnextChain(pNext);
}

void PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::initialize(
    const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderEarlyAndLateFragmentTests = in_struct->shaderEarlyAndLateFragmentTests;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::initialize(
    const PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderEarlyAndLateFragmentTests = copy_src->shaderEarlyAndLateFragmentTests;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(
    const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      fragmentShadingRateEnums(in_struct->fragmentShadingRateEnums),
      supersampleFragmentShadingRates(in_struct->supersampleFragmentShadingRates),
      noInvocationFragmentShadingRates(in_struct->noInvocationFragmentShadingRates) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::PhysicalDeviceFragmentShadingRateEnumsFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV),
      pNext(nullptr),
      fragmentShadingRateEnums(),
      supersampleFragmentShadingRates(),
      noInvocationFragmentShadingRates() {}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(
    const PhysicalDeviceFragmentShadingRateEnumsFeaturesNV& copy_src) {
    sType = copy_src.sType;
    fragmentShadingRateEnums = copy_src.fragmentShadingRateEnums;
    supersampleFragmentShadingRates = copy_src.supersampleFragmentShadingRates;
    noInvocationFragmentShadingRates = copy_src.noInvocationFragmentShadingRates;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV& PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::operator=(
    const PhysicalDeviceFragmentShadingRateEnumsFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentShadingRateEnums = copy_src.fragmentShadingRateEnums;
    supersampleFragmentShadingRates = copy_src.supersampleFragmentShadingRates;
    noInvocationFragmentShadingRates = copy_src.noInvocationFragmentShadingRates;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::~PhysicalDeviceFragmentShadingRateEnumsFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::initialize(
    const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentShadingRateEnums = in_struct->fragmentShadingRateEnums;
    supersampleFragmentShadingRates = in_struct->supersampleFragmentShadingRates;
    noInvocationFragmentShadingRates = in_struct->noInvocationFragmentShadingRates;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::initialize(const PhysicalDeviceFragmentShadingRateEnumsFeaturesNV* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentShadingRateEnums = copy_src->fragmentShadingRateEnums;
    supersampleFragmentShadingRates = copy_src->supersampleFragmentShadingRates;
    noInvocationFragmentShadingRates = copy_src->noInvocationFragmentShadingRates;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(
    const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), maxFragmentShadingRateInvocationCount(in_struct->maxFragmentShadingRateInvocationCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::PhysicalDeviceFragmentShadingRateEnumsPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV),
      pNext(nullptr),
      maxFragmentShadingRateInvocationCount() {}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(
    const PhysicalDeviceFragmentShadingRateEnumsPropertiesNV& copy_src) {
    sType = copy_src.sType;
    maxFragmentShadingRateInvocationCount = copy_src.maxFragmentShadingRateInvocationCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV& PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::operator=(
    const PhysicalDeviceFragmentShadingRateEnumsPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxFragmentShadingRateInvocationCount = copy_src.maxFragmentShadingRateInvocationCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::~PhysicalDeviceFragmentShadingRateEnumsPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::initialize(
    const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxFragmentShadingRateInvocationCount = in_struct->maxFragmentShadingRateInvocationCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::initialize(
    const PhysicalDeviceFragmentShadingRateEnumsPropertiesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxFragmentShadingRateInvocationCount = copy_src->maxFragmentShadingRateInvocationCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::PipelineFragmentShadingRateEnumStateCreateInfoNV(
    const VkPipelineFragmentShadingRateEnumStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shadingRateType(in_struct->shadingRateType), shadingRate(in_struct->shadingRate) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = in_struct->combinerOps[i];
    }
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::PipelineFragmentShadingRateEnumStateCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV),
      pNext(nullptr),
      shadingRateType(),
      shadingRate() {}

PipelineFragmentShadingRateEnumStateCreateInfoNV::PipelineFragmentShadingRateEnumStateCreateInfoNV(
    const PipelineFragmentShadingRateEnumStateCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    shadingRateType = copy_src.shadingRateType;
    shadingRate = copy_src.shadingRate;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src.combinerOps[i];
    }
}

PipelineFragmentShadingRateEnumStateCreateInfoNV& PipelineFragmentShadingRateEnumStateCreateInfoNV::operator=(
    const PipelineFragmentShadingRateEnumStateCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shadingRateType = copy_src.shadingRateType;
    shadingRate = copy_src.shadingRate;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src.combinerOps[i];
    }

    return *this;
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::~PipelineFragmentShadingRateEnumStateCreateInfoNV() { FreePnextChain(pNext); }

void PipelineFragmentShadingRateEnumStateCreateInfoNV::initialize(
    const VkPipelineFragmentShadingRateEnumStateCreateInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shadingRateType = in_struct->shadingRateType;
    shadingRate = in_struct->shadingRate;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = in_struct->combinerOps[i];
    }
}

void PipelineFragmentShadingRateEnumStateCreateInfoNV::initialize(const PipelineFragmentShadingRateEnumStateCreateInfoNV* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shadingRateType = copy_src->shadingRateType;
    shadingRate = copy_src->shadingRate;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src->combinerOps[i];
    }
}

AccelerationStructureGeometryMotionTrianglesDataNV::AccelerationStructureGeometryMotionTrianglesDataNV(
    const VkAccelerationStructureGeometryMotionTrianglesDataNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), vertexData(&in_struct->vertexData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureGeometryMotionTrianglesDataNV::AccelerationStructureGeometryMotionTrianglesDataNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV), pNext(nullptr) {}

AccelerationStructureGeometryMotionTrianglesDataNV::AccelerationStructureGeometryMotionTrianglesDataNV(
    const AccelerationStructureGeometryMotionTrianglesDataNV& copy_src) {
    sType = copy_src.sType;
    vertexData.initialize(&copy_src.vertexData);
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureGeometryMotionTrianglesDataNV& AccelerationStructureGeometryMotionTrianglesDataNV::operator=(
    const AccelerationStructureGeometryMotionTrianglesDataNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexData.initialize(&copy_src.vertexData);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureGeometryMotionTrianglesDataNV::~AccelerationStructureGeometryMotionTrianglesDataNV() { FreePnextChain(pNext); }

void AccelerationStructureGeometryMotionTrianglesDataNV::initialize(
    const VkAccelerationStructureGeometryMotionTrianglesDataNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexData.initialize(&in_struct->vertexData);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureGeometryMotionTrianglesDataNV::initialize(
    const AccelerationStructureGeometryMotionTrianglesDataNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexData.initialize(&copy_src->vertexData);
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureMotionInfoNV::AccelerationStructureMotionInfoNV(const VkAccelerationStructureMotionInfoNV* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxInstances(in_struct->maxInstances), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureMotionInfoNV::AccelerationStructureMotionInfoNV()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV), pNext(nullptr), maxInstances(), flags() {}

AccelerationStructureMotionInfoNV::AccelerationStructureMotionInfoNV(const AccelerationStructureMotionInfoNV& copy_src) {
    sType = copy_src.sType;
    maxInstances = copy_src.maxInstances;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureMotionInfoNV& AccelerationStructureMotionInfoNV::operator=(const AccelerationStructureMotionInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxInstances = copy_src.maxInstances;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureMotionInfoNV::~AccelerationStructureMotionInfoNV() { FreePnextChain(pNext); }

void AccelerationStructureMotionInfoNV::initialize(const VkAccelerationStructureMotionInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxInstances = in_struct->maxInstances;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureMotionInfoNV::initialize(const AccelerationStructureMotionInfoNV* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxInstances = copy_src->maxInstances;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::PhysicalDeviceRayTracingMotionBlurFeaturesNV(
    const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      rayTracingMotionBlur(in_struct->rayTracingMotionBlur),
      rayTracingMotionBlurPipelineTraceRaysIndirect(in_struct->rayTracingMotionBlurPipelineTraceRaysIndirect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::PhysicalDeviceRayTracingMotionBlurFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV),
      pNext(nullptr),
      rayTracingMotionBlur(),
      rayTracingMotionBlurPipelineTraceRaysIndirect() {}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::PhysicalDeviceRayTracingMotionBlurFeaturesNV(
    const PhysicalDeviceRayTracingMotionBlurFeaturesNV& copy_src) {
    sType = copy_src.sType;
    rayTracingMotionBlur = copy_src.rayTracingMotionBlur;
    rayTracingMotionBlurPipelineTraceRaysIndirect = copy_src.rayTracingMotionBlurPipelineTraceRaysIndirect;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV& PhysicalDeviceRayTracingMotionBlurFeaturesNV::operator=(
    const PhysicalDeviceRayTracingMotionBlurFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingMotionBlur = copy_src.rayTracingMotionBlur;
    rayTracingMotionBlurPipelineTraceRaysIndirect = copy_src.rayTracingMotionBlurPipelineTraceRaysIndirect;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::~PhysicalDeviceRayTracingMotionBlurFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingMotionBlurFeaturesNV::initialize(const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingMotionBlur = in_struct->rayTracingMotionBlur;
    rayTracingMotionBlurPipelineTraceRaysIndirect = in_struct->rayTracingMotionBlurPipelineTraceRaysIndirect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingMotionBlurFeaturesNV::initialize(const PhysicalDeviceRayTracingMotionBlurFeaturesNV* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingMotionBlur = copy_src->rayTracingMotionBlur;
    rayTracingMotionBlurPipelineTraceRaysIndirect = copy_src->rayTracingMotionBlurPipelineTraceRaysIndirect;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyCommandTransformInfoQCOM::CopyCommandTransformInfoQCOM(const VkCopyCommandTransformInfoQCOM* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), transform(in_struct->transform) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyCommandTransformInfoQCOM::CopyCommandTransformInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM), pNext(nullptr), transform() {}

CopyCommandTransformInfoQCOM::CopyCommandTransformInfoQCOM(const CopyCommandTransformInfoQCOM& copy_src) {
    sType = copy_src.sType;
    transform = copy_src.transform;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyCommandTransformInfoQCOM& CopyCommandTransformInfoQCOM::operator=(const CopyCommandTransformInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    transform = copy_src.transform;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyCommandTransformInfoQCOM::~CopyCommandTransformInfoQCOM() { FreePnextChain(pNext); }

void CopyCommandTransformInfoQCOM::initialize(const VkCopyCommandTransformInfoQCOM* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    transform = in_struct->transform;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyCommandTransformInfoQCOM::initialize(const CopyCommandTransformInfoQCOM* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    transform = copy_src->transform;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_FUCHSIA

ImportMemoryZirconHandleInfoFUCHSIA::ImportMemoryZirconHandleInfoFUCHSIA(const VkImportMemoryZirconHandleInfoFUCHSIA* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), handle(in_struct->handle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryZirconHandleInfoFUCHSIA::ImportMemoryZirconHandleInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA), pNext(nullptr), handleType(), handle() {}

ImportMemoryZirconHandleInfoFUCHSIA::ImportMemoryZirconHandleInfoFUCHSIA(const ImportMemoryZirconHandleInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryZirconHandleInfoFUCHSIA& ImportMemoryZirconHandleInfoFUCHSIA::operator=(
    const ImportMemoryZirconHandleInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryZirconHandleInfoFUCHSIA::~ImportMemoryZirconHandleInfoFUCHSIA() { FreePnextChain(pNext); }

void ImportMemoryZirconHandleInfoFUCHSIA::initialize(const VkImportMemoryZirconHandleInfoFUCHSIA* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryZirconHandleInfoFUCHSIA::initialize(const ImportMemoryZirconHandleInfoFUCHSIA* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    handle = copy_src->handle;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryZirconHandlePropertiesFUCHSIA::MemoryZirconHandlePropertiesFUCHSIA(const VkMemoryZirconHandlePropertiesFUCHSIA* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryZirconHandlePropertiesFUCHSIA::MemoryZirconHandlePropertiesFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA), pNext(nullptr), memoryTypeBits() {}

MemoryZirconHandlePropertiesFUCHSIA::MemoryZirconHandlePropertiesFUCHSIA(const MemoryZirconHandlePropertiesFUCHSIA& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryZirconHandlePropertiesFUCHSIA& MemoryZirconHandlePropertiesFUCHSIA::operator=(
    const MemoryZirconHandlePropertiesFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryZirconHandlePropertiesFUCHSIA::~MemoryZirconHandlePropertiesFUCHSIA() { FreePnextChain(pNext); }

void MemoryZirconHandlePropertiesFUCHSIA::initialize(const VkMemoryZirconHandlePropertiesFUCHSIA* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryZirconHandlePropertiesFUCHSIA::initialize(const MemoryZirconHandlePropertiesFUCHSIA* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryGetZirconHandleInfoFUCHSIA::MemoryGetZirconHandleInfoFUCHSIA(const VkMemoryGetZirconHandleInfoFUCHSIA* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryGetZirconHandleInfoFUCHSIA::MemoryGetZirconHandleInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA), pNext(nullptr), memory(), handleType() {}

MemoryGetZirconHandleInfoFUCHSIA::MemoryGetZirconHandleInfoFUCHSIA(const MemoryGetZirconHandleInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryGetZirconHandleInfoFUCHSIA& MemoryGetZirconHandleInfoFUCHSIA::operator=(const MemoryGetZirconHandleInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryGetZirconHandleInfoFUCHSIA::~MemoryGetZirconHandleInfoFUCHSIA() { FreePnextChain(pNext); }

void MemoryGetZirconHandleInfoFUCHSIA::initialize(const VkMemoryGetZirconHandleInfoFUCHSIA* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryGetZirconHandleInfoFUCHSIA::initialize(const MemoryGetZirconHandleInfoFUCHSIA* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportSemaphoreZirconHandleInfoFUCHSIA::ImportSemaphoreZirconHandleInfoFUCHSIA(
    const VkImportSemaphoreZirconHandleInfoFUCHSIA* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      semaphore(in_struct->semaphore),
      flags(in_struct->flags),
      handleType(in_struct->handleType),
      zirconHandle(in_struct->zirconHandle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportSemaphoreZirconHandleInfoFUCHSIA::ImportSemaphoreZirconHandleInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA),
      pNext(nullptr),
      semaphore(),
      flags(),
      handleType(),
      zirconHandle() {}

ImportSemaphoreZirconHandleInfoFUCHSIA::ImportSemaphoreZirconHandleInfoFUCHSIA(
    const ImportSemaphoreZirconHandleInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    zirconHandle = copy_src.zirconHandle;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportSemaphoreZirconHandleInfoFUCHSIA& ImportSemaphoreZirconHandleInfoFUCHSIA::operator=(
    const ImportSemaphoreZirconHandleInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    zirconHandle = copy_src.zirconHandle;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportSemaphoreZirconHandleInfoFUCHSIA::~ImportSemaphoreZirconHandleInfoFUCHSIA() { FreePnextChain(pNext); }

void ImportSemaphoreZirconHandleInfoFUCHSIA::initialize(const VkImportSemaphoreZirconHandleInfoFUCHSIA* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    zirconHandle = in_struct->zirconHandle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportSemaphoreZirconHandleInfoFUCHSIA::initialize(const ImportSemaphoreZirconHandleInfoFUCHSIA* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    flags = copy_src->flags;
    handleType = copy_src->handleType;
    zirconHandle = copy_src->zirconHandle;
    pNext = SafePnextCopy(copy_src->pNext);
}

SemaphoreGetZirconHandleInfoFUCHSIA::SemaphoreGetZirconHandleInfoFUCHSIA(const VkSemaphoreGetZirconHandleInfoFUCHSIA* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreGetZirconHandleInfoFUCHSIA::SemaphoreGetZirconHandleInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA), pNext(nullptr), semaphore(), handleType() {}

SemaphoreGetZirconHandleInfoFUCHSIA::SemaphoreGetZirconHandleInfoFUCHSIA(const SemaphoreGetZirconHandleInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreGetZirconHandleInfoFUCHSIA& SemaphoreGetZirconHandleInfoFUCHSIA::operator=(
    const SemaphoreGetZirconHandleInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreGetZirconHandleInfoFUCHSIA::~SemaphoreGetZirconHandleInfoFUCHSIA() { FreePnextChain(pNext); }

void SemaphoreGetZirconHandleInfoFUCHSIA::initialize(const VkSemaphoreGetZirconHandleInfoFUCHSIA* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreGetZirconHandleInfoFUCHSIA::initialize(const SemaphoreGetZirconHandleInfoFUCHSIA* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCollectionCreateInfoFUCHSIA::BufferCollectionCreateInfoFUCHSIA(const VkBufferCollectionCreateInfoFUCHSIA* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), collectionToken(in_struct->collectionToken) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCollectionCreateInfoFUCHSIA::BufferCollectionCreateInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CREATE_INFO_FUCHSIA), pNext(nullptr), collectionToken() {}

BufferCollectionCreateInfoFUCHSIA::BufferCollectionCreateInfoFUCHSIA(const BufferCollectionCreateInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    collectionToken = copy_src.collectionToken;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCollectionCreateInfoFUCHSIA& BufferCollectionCreateInfoFUCHSIA::operator=(const BufferCollectionCreateInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    collectionToken = copy_src.collectionToken;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCollectionCreateInfoFUCHSIA::~BufferCollectionCreateInfoFUCHSIA() { FreePnextChain(pNext); }

void BufferCollectionCreateInfoFUCHSIA::initialize(const VkBufferCollectionCreateInfoFUCHSIA* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    collectionToken = in_struct->collectionToken;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCollectionCreateInfoFUCHSIA::initialize(const BufferCollectionCreateInfoFUCHSIA* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    collectionToken = copy_src->collectionToken;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMemoryBufferCollectionFUCHSIA::ImportMemoryBufferCollectionFUCHSIA(const VkImportMemoryBufferCollectionFUCHSIA* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), collection(in_struct->collection), index(in_struct->index) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryBufferCollectionFUCHSIA::ImportMemoryBufferCollectionFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA), pNext(nullptr), collection(), index() {}

ImportMemoryBufferCollectionFUCHSIA::ImportMemoryBufferCollectionFUCHSIA(const ImportMemoryBufferCollectionFUCHSIA& copy_src) {
    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryBufferCollectionFUCHSIA& ImportMemoryBufferCollectionFUCHSIA::operator=(
    const ImportMemoryBufferCollectionFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryBufferCollectionFUCHSIA::~ImportMemoryBufferCollectionFUCHSIA() { FreePnextChain(pNext); }

void ImportMemoryBufferCollectionFUCHSIA::initialize(const VkImportMemoryBufferCollectionFUCHSIA* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    collection = in_struct->collection;
    index = in_struct->index;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryBufferCollectionFUCHSIA::initialize(const ImportMemoryBufferCollectionFUCHSIA* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    collection = copy_src->collection;
    index = copy_src->index;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCollectionImageCreateInfoFUCHSIA::BufferCollectionImageCreateInfoFUCHSIA(
    const VkBufferCollectionImageCreateInfoFUCHSIA* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), collection(in_struct->collection), index(in_struct->index) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCollectionImageCreateInfoFUCHSIA::BufferCollectionImageCreateInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA), pNext(nullptr), collection(), index() {}

BufferCollectionImageCreateInfoFUCHSIA::BufferCollectionImageCreateInfoFUCHSIA(
    const BufferCollectionImageCreateInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCollectionImageCreateInfoFUCHSIA& BufferCollectionImageCreateInfoFUCHSIA::operator=(
    const BufferCollectionImageCreateInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCollectionImageCreateInfoFUCHSIA::~BufferCollectionImageCreateInfoFUCHSIA() { FreePnextChain(pNext); }

void BufferCollectionImageCreateInfoFUCHSIA::initialize(const VkBufferCollectionImageCreateInfoFUCHSIA* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    collection = in_struct->collection;
    index = in_struct->index;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCollectionImageCreateInfoFUCHSIA::initialize(const BufferCollectionImageCreateInfoFUCHSIA* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    collection = copy_src->collection;
    index = copy_src->index;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCollectionConstraintsInfoFUCHSIA::BufferCollectionConstraintsInfoFUCHSIA(
    const VkBufferCollectionConstraintsInfoFUCHSIA* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minBufferCount(in_struct->minBufferCount),
      maxBufferCount(in_struct->maxBufferCount),
      minBufferCountForCamping(in_struct->minBufferCountForCamping),
      minBufferCountForDedicatedSlack(in_struct->minBufferCountForDedicatedSlack),
      minBufferCountForSharedSlack(in_struct->minBufferCountForSharedSlack) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCollectionConstraintsInfoFUCHSIA::BufferCollectionConstraintsInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA),
      pNext(nullptr),
      minBufferCount(),
      maxBufferCount(),
      minBufferCountForCamping(),
      minBufferCountForDedicatedSlack(),
      minBufferCountForSharedSlack() {}

BufferCollectionConstraintsInfoFUCHSIA::BufferCollectionConstraintsInfoFUCHSIA(
    const BufferCollectionConstraintsInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    minBufferCount = copy_src.minBufferCount;
    maxBufferCount = copy_src.maxBufferCount;
    minBufferCountForCamping = copy_src.minBufferCountForCamping;
    minBufferCountForDedicatedSlack = copy_src.minBufferCountForDedicatedSlack;
    minBufferCountForSharedSlack = copy_src.minBufferCountForSharedSlack;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCollectionConstraintsInfoFUCHSIA& BufferCollectionConstraintsInfoFUCHSIA::operator=(
    const BufferCollectionConstraintsInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minBufferCount = copy_src.minBufferCount;
    maxBufferCount = copy_src.maxBufferCount;
    minBufferCountForCamping = copy_src.minBufferCountForCamping;
    minBufferCountForDedicatedSlack = copy_src.minBufferCountForDedicatedSlack;
    minBufferCountForSharedSlack = copy_src.minBufferCountForSharedSlack;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCollectionConstraintsInfoFUCHSIA::~BufferCollectionConstraintsInfoFUCHSIA() { FreePnextChain(pNext); }

void BufferCollectionConstraintsInfoFUCHSIA::initialize(const VkBufferCollectionConstraintsInfoFUCHSIA* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minBufferCount = in_struct->minBufferCount;
    maxBufferCount = in_struct->maxBufferCount;
    minBufferCountForCamping = in_struct->minBufferCountForCamping;
    minBufferCountForDedicatedSlack = in_struct->minBufferCountForDedicatedSlack;
    minBufferCountForSharedSlack = in_struct->minBufferCountForSharedSlack;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCollectionConstraintsInfoFUCHSIA::initialize(const BufferCollectionConstraintsInfoFUCHSIA* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minBufferCount = copy_src->minBufferCount;
    maxBufferCount = copy_src->maxBufferCount;
    minBufferCountForCamping = copy_src->minBufferCountForCamping;
    minBufferCountForDedicatedSlack = copy_src->minBufferCountForDedicatedSlack;
    minBufferCountForSharedSlack = copy_src->minBufferCountForSharedSlack;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferConstraintsInfoFUCHSIA::BufferConstraintsInfoFUCHSIA(const VkBufferConstraintsInfoFUCHSIA* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      createInfo(&in_struct->createInfo),
      requiredFormatFeatures(in_struct->requiredFormatFeatures),
      bufferCollectionConstraints(&in_struct->bufferCollectionConstraints) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferConstraintsInfoFUCHSIA::BufferConstraintsInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_CONSTRAINTS_INFO_FUCHSIA), pNext(nullptr), requiredFormatFeatures() {}

BufferConstraintsInfoFUCHSIA::BufferConstraintsInfoFUCHSIA(const BufferConstraintsInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    createInfo.initialize(&copy_src.createInfo);
    requiredFormatFeatures = copy_src.requiredFormatFeatures;
    bufferCollectionConstraints.initialize(&copy_src.bufferCollectionConstraints);
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferConstraintsInfoFUCHSIA& BufferConstraintsInfoFUCHSIA::operator=(const BufferConstraintsInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    createInfo.initialize(&copy_src.createInfo);
    requiredFormatFeatures = copy_src.requiredFormatFeatures;
    bufferCollectionConstraints.initialize(&copy_src.bufferCollectionConstraints);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferConstraintsInfoFUCHSIA::~BufferConstraintsInfoFUCHSIA() { FreePnextChain(pNext); }

void BufferConstraintsInfoFUCHSIA::initialize(const VkBufferConstraintsInfoFUCHSIA* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    createInfo.initialize(&in_struct->createInfo);
    requiredFormatFeatures = in_struct->requiredFormatFeatures;
    bufferCollectionConstraints.initialize(&in_struct->bufferCollectionConstraints);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferConstraintsInfoFUCHSIA::initialize(const BufferConstraintsInfoFUCHSIA* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    createInfo.initialize(&copy_src->createInfo);
    requiredFormatFeatures = copy_src->requiredFormatFeatures;
    bufferCollectionConstraints.initialize(&copy_src->bufferCollectionConstraints);
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCollectionBufferCreateInfoFUCHSIA::BufferCollectionBufferCreateInfoFUCHSIA(
    const VkBufferCollectionBufferCreateInfoFUCHSIA* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), collection(in_struct->collection), index(in_struct->index) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCollectionBufferCreateInfoFUCHSIA::BufferCollectionBufferCreateInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA), pNext(nullptr), collection(), index() {}

BufferCollectionBufferCreateInfoFUCHSIA::BufferCollectionBufferCreateInfoFUCHSIA(
    const BufferCollectionBufferCreateInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCollectionBufferCreateInfoFUCHSIA& BufferCollectionBufferCreateInfoFUCHSIA::operator=(
    const BufferCollectionBufferCreateInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    collection = copy_src.collection;
    index = copy_src.index;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCollectionBufferCreateInfoFUCHSIA::~BufferCollectionBufferCreateInfoFUCHSIA() { FreePnextChain(pNext); }

void BufferCollectionBufferCreateInfoFUCHSIA::initialize(const VkBufferCollectionBufferCreateInfoFUCHSIA* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    collection = in_struct->collection;
    index = in_struct->index;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCollectionBufferCreateInfoFUCHSIA::initialize(const BufferCollectionBufferCreateInfoFUCHSIA* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    collection = copy_src->collection;
    index = copy_src->index;
    pNext = SafePnextCopy(copy_src->pNext);
}

SysmemColorSpaceFUCHSIA::SysmemColorSpaceFUCHSIA(const VkSysmemColorSpaceFUCHSIA* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), colorSpace(in_struct->colorSpace) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SysmemColorSpaceFUCHSIA::SysmemColorSpaceFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_SYSMEM_COLOR_SPACE_FUCHSIA), pNext(nullptr), colorSpace() {}

SysmemColorSpaceFUCHSIA::SysmemColorSpaceFUCHSIA(const SysmemColorSpaceFUCHSIA& copy_src) {
    sType = copy_src.sType;
    colorSpace = copy_src.colorSpace;
    pNext = SafePnextCopy(copy_src.pNext);
}

SysmemColorSpaceFUCHSIA& SysmemColorSpaceFUCHSIA::operator=(const SysmemColorSpaceFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorSpace = copy_src.colorSpace;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SysmemColorSpaceFUCHSIA::~SysmemColorSpaceFUCHSIA() { FreePnextChain(pNext); }

void SysmemColorSpaceFUCHSIA::initialize(const VkSysmemColorSpaceFUCHSIA* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorSpace = in_struct->colorSpace;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SysmemColorSpaceFUCHSIA::initialize(const SysmemColorSpaceFUCHSIA* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorSpace = copy_src->colorSpace;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCollectionPropertiesFUCHSIA::BufferCollectionPropertiesFUCHSIA(const VkBufferCollectionPropertiesFUCHSIA* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      memoryTypeBits(in_struct->memoryTypeBits),
      bufferCount(in_struct->bufferCount),
      createInfoIndex(in_struct->createInfoIndex),
      sysmemPixelFormat(in_struct->sysmemPixelFormat),
      formatFeatures(in_struct->formatFeatures),
      sysmemColorSpaceIndex(&in_struct->sysmemColorSpaceIndex),
      samplerYcbcrConversionComponents(in_struct->samplerYcbcrConversionComponents),
      suggestedYcbcrModel(in_struct->suggestedYcbcrModel),
      suggestedYcbcrRange(in_struct->suggestedYcbcrRange),
      suggestedXChromaOffset(in_struct->suggestedXChromaOffset),
      suggestedYChromaOffset(in_struct->suggestedYChromaOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCollectionPropertiesFUCHSIA::BufferCollectionPropertiesFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_PROPERTIES_FUCHSIA),
      pNext(nullptr),
      memoryTypeBits(),
      bufferCount(),
      createInfoIndex(),
      sysmemPixelFormat(),
      formatFeatures(),
      samplerYcbcrConversionComponents(),
      suggestedYcbcrModel(),
      suggestedYcbcrRange(),
      suggestedXChromaOffset(),
      suggestedYChromaOffset() {}

BufferCollectionPropertiesFUCHSIA::BufferCollectionPropertiesFUCHSIA(const BufferCollectionPropertiesFUCHSIA& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    bufferCount = copy_src.bufferCount;
    createInfoIndex = copy_src.createInfoIndex;
    sysmemPixelFormat = copy_src.sysmemPixelFormat;
    formatFeatures = copy_src.formatFeatures;
    sysmemColorSpaceIndex.initialize(&copy_src.sysmemColorSpaceIndex);
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCollectionPropertiesFUCHSIA& BufferCollectionPropertiesFUCHSIA::operator=(const BufferCollectionPropertiesFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    bufferCount = copy_src.bufferCount;
    createInfoIndex = copy_src.createInfoIndex;
    sysmemPixelFormat = copy_src.sysmemPixelFormat;
    formatFeatures = copy_src.formatFeatures;
    sysmemColorSpaceIndex.initialize(&copy_src.sysmemColorSpaceIndex);
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCollectionPropertiesFUCHSIA::~BufferCollectionPropertiesFUCHSIA() { FreePnextChain(pNext); }

void BufferCollectionPropertiesFUCHSIA::initialize(const VkBufferCollectionPropertiesFUCHSIA* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    bufferCount = in_struct->bufferCount;
    createInfoIndex = in_struct->createInfoIndex;
    sysmemPixelFormat = in_struct->sysmemPixelFormat;
    formatFeatures = in_struct->formatFeatures;
    sysmemColorSpaceIndex.initialize(&in_struct->sysmemColorSpaceIndex);
    samplerYcbcrConversionComponents = in_struct->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = in_struct->suggestedYcbcrModel;
    suggestedYcbcrRange = in_struct->suggestedYcbcrRange;
    suggestedXChromaOffset = in_struct->suggestedXChromaOffset;
    suggestedYChromaOffset = in_struct->suggestedYChromaOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCollectionPropertiesFUCHSIA::initialize(const BufferCollectionPropertiesFUCHSIA* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    bufferCount = copy_src->bufferCount;
    createInfoIndex = copy_src->createInfoIndex;
    sysmemPixelFormat = copy_src->sysmemPixelFormat;
    formatFeatures = copy_src->formatFeatures;
    sysmemColorSpaceIndex.initialize(&copy_src->sysmemColorSpaceIndex);
    samplerYcbcrConversionComponents = copy_src->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src->suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src->suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src->suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src->suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageFormatConstraintsInfoFUCHSIA::ImageFormatConstraintsInfoFUCHSIA(const VkImageFormatConstraintsInfoFUCHSIA* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageCreateInfo(&in_struct->imageCreateInfo),
      requiredFormatFeatures(in_struct->requiredFormatFeatures),
      flags(in_struct->flags),
      sysmemPixelFormat(in_struct->sysmemPixelFormat),
      colorSpaceCount(in_struct->colorSpaceCount),
      pColorSpaces(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (colorSpaceCount && in_struct->pColorSpaces) {
        pColorSpaces = new SysmemColorSpaceFUCHSIA[colorSpaceCount];
        for (uint32_t i = 0; i < colorSpaceCount; ++i) {
            pColorSpaces[i].initialize(&in_struct->pColorSpaces[i]);
        }
    }
}

ImageFormatConstraintsInfoFUCHSIA::ImageFormatConstraintsInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA),
      pNext(nullptr),
      requiredFormatFeatures(),
      flags(),
      sysmemPixelFormat(),
      colorSpaceCount(),
      pColorSpaces(nullptr) {}

ImageFormatConstraintsInfoFUCHSIA::ImageFormatConstraintsInfoFUCHSIA(const ImageFormatConstraintsInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    imageCreateInfo.initialize(&copy_src.imageCreateInfo);
    requiredFormatFeatures = copy_src.requiredFormatFeatures;
    flags = copy_src.flags;
    sysmemPixelFormat = copy_src.sysmemPixelFormat;
    colorSpaceCount = copy_src.colorSpaceCount;
    pColorSpaces = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorSpaceCount && copy_src.pColorSpaces) {
        pColorSpaces = new SysmemColorSpaceFUCHSIA[colorSpaceCount];
        for (uint32_t i = 0; i < colorSpaceCount; ++i) {
            pColorSpaces[i].initialize(&copy_src.pColorSpaces[i]);
        }
    }
}

ImageFormatConstraintsInfoFUCHSIA& ImageFormatConstraintsInfoFUCHSIA::operator=(const ImageFormatConstraintsInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorSpaces) delete[] pColorSpaces;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageCreateInfo.initialize(&copy_src.imageCreateInfo);
    requiredFormatFeatures = copy_src.requiredFormatFeatures;
    flags = copy_src.flags;
    sysmemPixelFormat = copy_src.sysmemPixelFormat;
    colorSpaceCount = copy_src.colorSpaceCount;
    pColorSpaces = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorSpaceCount && copy_src.pColorSpaces) {
        pColorSpaces = new SysmemColorSpaceFUCHSIA[colorSpaceCount];
        for (uint32_t i = 0; i < colorSpaceCount; ++i) {
            pColorSpaces[i].initialize(&copy_src.pColorSpaces[i]);
        }
    }

    return *this;
}

ImageFormatConstraintsInfoFUCHSIA::~ImageFormatConstraintsInfoFUCHSIA() {
    if (pColorSpaces) delete[] pColorSpaces;
    FreePnextChain(pNext);
}

void ImageFormatConstraintsInfoFUCHSIA::initialize(const VkImageFormatConstraintsInfoFUCHSIA* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorSpaces) delete[] pColorSpaces;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageCreateInfo.initialize(&in_struct->imageCreateInfo);
    requiredFormatFeatures = in_struct->requiredFormatFeatures;
    flags = in_struct->flags;
    sysmemPixelFormat = in_struct->sysmemPixelFormat;
    colorSpaceCount = in_struct->colorSpaceCount;
    pColorSpaces = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (colorSpaceCount && in_struct->pColorSpaces) {
        pColorSpaces = new SysmemColorSpaceFUCHSIA[colorSpaceCount];
        for (uint32_t i = 0; i < colorSpaceCount; ++i) {
            pColorSpaces[i].initialize(&in_struct->pColorSpaces[i]);
        }
    }
}

void ImageFormatConstraintsInfoFUCHSIA::initialize(const ImageFormatConstraintsInfoFUCHSIA* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageCreateInfo.initialize(&copy_src->imageCreateInfo);
    requiredFormatFeatures = copy_src->requiredFormatFeatures;
    flags = copy_src->flags;
    sysmemPixelFormat = copy_src->sysmemPixelFormat;
    colorSpaceCount = copy_src->colorSpaceCount;
    pColorSpaces = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (colorSpaceCount && copy_src->pColorSpaces) {
        pColorSpaces = new SysmemColorSpaceFUCHSIA[colorSpaceCount];
        for (uint32_t i = 0; i < colorSpaceCount; ++i) {
            pColorSpaces[i].initialize(&copy_src->pColorSpaces[i]);
        }
    }
}

ImageConstraintsInfoFUCHSIA::ImageConstraintsInfoFUCHSIA(const VkImageConstraintsInfoFUCHSIA* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      formatConstraintsCount(in_struct->formatConstraintsCount),
      pFormatConstraints(nullptr),
      bufferCollectionConstraints(&in_struct->bufferCollectionConstraints),
      flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (formatConstraintsCount && in_struct->pFormatConstraints) {
        pFormatConstraints = new ImageFormatConstraintsInfoFUCHSIA[formatConstraintsCount];
        for (uint32_t i = 0; i < formatConstraintsCount; ++i) {
            pFormatConstraints[i].initialize(&in_struct->pFormatConstraints[i]);
        }
    }
}

ImageConstraintsInfoFUCHSIA::ImageConstraintsInfoFUCHSIA()
    : sType(VK_STRUCTURE_TYPE_IMAGE_CONSTRAINTS_INFO_FUCHSIA),
      pNext(nullptr),
      formatConstraintsCount(),
      pFormatConstraints(nullptr),
      flags() {}

ImageConstraintsInfoFUCHSIA::ImageConstraintsInfoFUCHSIA(const ImageConstraintsInfoFUCHSIA& copy_src) {
    sType = copy_src.sType;
    formatConstraintsCount = copy_src.formatConstraintsCount;
    pFormatConstraints = nullptr;
    bufferCollectionConstraints.initialize(&copy_src.bufferCollectionConstraints);
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
    if (formatConstraintsCount && copy_src.pFormatConstraints) {
        pFormatConstraints = new ImageFormatConstraintsInfoFUCHSIA[formatConstraintsCount];
        for (uint32_t i = 0; i < formatConstraintsCount; ++i) {
            pFormatConstraints[i].initialize(&copy_src.pFormatConstraints[i]);
        }
    }
}

ImageConstraintsInfoFUCHSIA& ImageConstraintsInfoFUCHSIA::operator=(const ImageConstraintsInfoFUCHSIA& copy_src) {
    if (&copy_src == this) return *this;

    if (pFormatConstraints) delete[] pFormatConstraints;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    formatConstraintsCount = copy_src.formatConstraintsCount;
    pFormatConstraints = nullptr;
    bufferCollectionConstraints.initialize(&copy_src.bufferCollectionConstraints);
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
    if (formatConstraintsCount && copy_src.pFormatConstraints) {
        pFormatConstraints = new ImageFormatConstraintsInfoFUCHSIA[formatConstraintsCount];
        for (uint32_t i = 0; i < formatConstraintsCount; ++i) {
            pFormatConstraints[i].initialize(&copy_src.pFormatConstraints[i]);
        }
    }

    return *this;
}

ImageConstraintsInfoFUCHSIA::~ImageConstraintsInfoFUCHSIA() {
    if (pFormatConstraints) delete[] pFormatConstraints;
    FreePnextChain(pNext);
}

void ImageConstraintsInfoFUCHSIA::initialize(const VkImageConstraintsInfoFUCHSIA* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pFormatConstraints) delete[] pFormatConstraints;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    formatConstraintsCount = in_struct->formatConstraintsCount;
    pFormatConstraints = nullptr;
    bufferCollectionConstraints.initialize(&in_struct->bufferCollectionConstraints);
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (formatConstraintsCount && in_struct->pFormatConstraints) {
        pFormatConstraints = new ImageFormatConstraintsInfoFUCHSIA[formatConstraintsCount];
        for (uint32_t i = 0; i < formatConstraintsCount; ++i) {
            pFormatConstraints[i].initialize(&in_struct->pFormatConstraints[i]);
        }
    }
}

void ImageConstraintsInfoFUCHSIA::initialize(const ImageConstraintsInfoFUCHSIA* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    formatConstraintsCount = copy_src->formatConstraintsCount;
    pFormatConstraints = nullptr;
    bufferCollectionConstraints.initialize(&copy_src->bufferCollectionConstraints);
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
    if (formatConstraintsCount && copy_src->pFormatConstraints) {
        pFormatConstraints = new ImageFormatConstraintsInfoFUCHSIA[formatConstraintsCount];
        for (uint32_t i = 0; i < formatConstraintsCount; ++i) {
            pFormatConstraints[i].initialize(&copy_src->pFormatConstraints[i]);
        }
    }
}
#endif  // VK_USE_PLATFORM_FUCHSIA

SubpassShadingPipelineCreateInfoHUAWEI::SubpassShadingPipelineCreateInfoHUAWEI(
    const VkSubpassShadingPipelineCreateInfoHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), renderPass(in_struct->renderPass), subpass(in_struct->subpass) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubpassShadingPipelineCreateInfoHUAWEI::SubpassShadingPipelineCreateInfoHUAWEI()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI), pNext(nullptr), renderPass(), subpass() {}

SubpassShadingPipelineCreateInfoHUAWEI::SubpassShadingPipelineCreateInfoHUAWEI(
    const SubpassShadingPipelineCreateInfoHUAWEI& copy_src) {
    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubpassShadingPipelineCreateInfoHUAWEI& SubpassShadingPipelineCreateInfoHUAWEI::operator=(
    const SubpassShadingPipelineCreateInfoHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubpassShadingPipelineCreateInfoHUAWEI::~SubpassShadingPipelineCreateInfoHUAWEI() { FreePnextChain(pNext); }

void SubpassShadingPipelineCreateInfoHUAWEI::initialize(const VkSubpassShadingPipelineCreateInfoHUAWEI* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubpassShadingPipelineCreateInfoHUAWEI::initialize(const SubpassShadingPipelineCreateInfoHUAWEI* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPass = copy_src->renderPass;
    subpass = copy_src->subpass;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::PhysicalDeviceSubpassShadingFeaturesHUAWEI(
    const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), subpassShading(in_struct->subpassShading) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::PhysicalDeviceSubpassShadingFeaturesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI), pNext(nullptr), subpassShading() {}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::PhysicalDeviceSubpassShadingFeaturesHUAWEI(
    const PhysicalDeviceSubpassShadingFeaturesHUAWEI& copy_src) {
    sType = copy_src.sType;
    subpassShading = copy_src.subpassShading;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI& PhysicalDeviceSubpassShadingFeaturesHUAWEI::operator=(
    const PhysicalDeviceSubpassShadingFeaturesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subpassShading = copy_src.subpassShading;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::~PhysicalDeviceSubpassShadingFeaturesHUAWEI() { FreePnextChain(pNext); }

void PhysicalDeviceSubpassShadingFeaturesHUAWEI::initialize(const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subpassShading = in_struct->subpassShading;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubpassShadingFeaturesHUAWEI::initialize(const PhysicalDeviceSubpassShadingFeaturesHUAWEI* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subpassShading = copy_src->subpassShading;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::PhysicalDeviceSubpassShadingPropertiesHUAWEI(
    const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxSubpassShadingWorkgroupSizeAspectRatio(in_struct->maxSubpassShadingWorkgroupSizeAspectRatio) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::PhysicalDeviceSubpassShadingPropertiesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI),
      pNext(nullptr),
      maxSubpassShadingWorkgroupSizeAspectRatio() {}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::PhysicalDeviceSubpassShadingPropertiesHUAWEI(
    const PhysicalDeviceSubpassShadingPropertiesHUAWEI& copy_src) {
    sType = copy_src.sType;
    maxSubpassShadingWorkgroupSizeAspectRatio = copy_src.maxSubpassShadingWorkgroupSizeAspectRatio;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI& PhysicalDeviceSubpassShadingPropertiesHUAWEI::operator=(
    const PhysicalDeviceSubpassShadingPropertiesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxSubpassShadingWorkgroupSizeAspectRatio = copy_src.maxSubpassShadingWorkgroupSizeAspectRatio;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::~PhysicalDeviceSubpassShadingPropertiesHUAWEI() { FreePnextChain(pNext); }

void PhysicalDeviceSubpassShadingPropertiesHUAWEI::initialize(const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxSubpassShadingWorkgroupSizeAspectRatio = in_struct->maxSubpassShadingWorkgroupSizeAspectRatio;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubpassShadingPropertiesHUAWEI::initialize(const PhysicalDeviceSubpassShadingPropertiesHUAWEI* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxSubpassShadingWorkgroupSizeAspectRatio = copy_src->maxSubpassShadingWorkgroupSizeAspectRatio;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::PhysicalDeviceInvocationMaskFeaturesHUAWEI(
    const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), invocationMask(in_struct->invocationMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::PhysicalDeviceInvocationMaskFeaturesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI), pNext(nullptr), invocationMask() {}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::PhysicalDeviceInvocationMaskFeaturesHUAWEI(
    const PhysicalDeviceInvocationMaskFeaturesHUAWEI& copy_src) {
    sType = copy_src.sType;
    invocationMask = copy_src.invocationMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI& PhysicalDeviceInvocationMaskFeaturesHUAWEI::operator=(
    const PhysicalDeviceInvocationMaskFeaturesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    invocationMask = copy_src.invocationMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::~PhysicalDeviceInvocationMaskFeaturesHUAWEI() { FreePnextChain(pNext); }

void PhysicalDeviceInvocationMaskFeaturesHUAWEI::initialize(const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    invocationMask = in_struct->invocationMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceInvocationMaskFeaturesHUAWEI::initialize(const PhysicalDeviceInvocationMaskFeaturesHUAWEI* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    invocationMask = copy_src->invocationMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryGetRemoteAddressInfoNV::MemoryGetRemoteAddressInfoNV(const VkMemoryGetRemoteAddressInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryGetRemoteAddressInfoNV::MemoryGetRemoteAddressInfoNV()
    : sType(VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV), pNext(nullptr), memory(), handleType() {}

MemoryGetRemoteAddressInfoNV::MemoryGetRemoteAddressInfoNV(const MemoryGetRemoteAddressInfoNV& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryGetRemoteAddressInfoNV& MemoryGetRemoteAddressInfoNV::operator=(const MemoryGetRemoteAddressInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryGetRemoteAddressInfoNV::~MemoryGetRemoteAddressInfoNV() { FreePnextChain(pNext); }

void MemoryGetRemoteAddressInfoNV::initialize(const VkMemoryGetRemoteAddressInfoNV* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryGetRemoteAddressInfoNV::initialize(const MemoryGetRemoteAddressInfoNV* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::PhysicalDeviceExternalMemoryRDMAFeaturesNV(
    const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), externalMemoryRDMA(in_struct->externalMemoryRDMA) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::PhysicalDeviceExternalMemoryRDMAFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV), pNext(nullptr), externalMemoryRDMA() {}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::PhysicalDeviceExternalMemoryRDMAFeaturesNV(
    const PhysicalDeviceExternalMemoryRDMAFeaturesNV& copy_src) {
    sType = copy_src.sType;
    externalMemoryRDMA = copy_src.externalMemoryRDMA;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV& PhysicalDeviceExternalMemoryRDMAFeaturesNV::operator=(
    const PhysicalDeviceExternalMemoryRDMAFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalMemoryRDMA = copy_src.externalMemoryRDMA;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::~PhysicalDeviceExternalMemoryRDMAFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceExternalMemoryRDMAFeaturesNV::initialize(const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalMemoryRDMA = in_struct->externalMemoryRDMA;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalMemoryRDMAFeaturesNV::initialize(const PhysicalDeviceExternalMemoryRDMAFeaturesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalMemoryRDMA = copy_src->externalMemoryRDMA;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX

ScreenSurfaceCreateInfoQNX::ScreenSurfaceCreateInfoQNX(const VkScreenSurfaceCreateInfoQNX* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), context(nullptr), window(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->context) {
        context = new _screen_context(*in_struct->context);
    }

    if (in_struct->window) {
        window = new _screen_window(*in_struct->window);
    }
}

ScreenSurfaceCreateInfoQNX::ScreenSurfaceCreateInfoQNX()
    : sType(VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX), pNext(nullptr), flags(), context(nullptr), window(nullptr) {}

ScreenSurfaceCreateInfoQNX::ScreenSurfaceCreateInfoQNX(const ScreenSurfaceCreateInfoQNX& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    context = nullptr;
    window = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.context) {
        context = new _screen_context(*copy_src.context);
    }

    if (copy_src.window) {
        window = new _screen_window(*copy_src.window);
    }
}

ScreenSurfaceCreateInfoQNX& ScreenSurfaceCreateInfoQNX::operator=(const ScreenSurfaceCreateInfoQNX& copy_src) {
    if (&copy_src == this) return *this;

    if (context) delete context;
    if (window) delete window;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    context = nullptr;
    window = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.context) {
        context = new _screen_context(*copy_src.context);
    }

    if (copy_src.window) {
        window = new _screen_window(*copy_src.window);
    }

    return *this;
}

ScreenSurfaceCreateInfoQNX::~ScreenSurfaceCreateInfoQNX() {
    if (context) delete context;
    if (window) delete window;
    FreePnextChain(pNext);
}

void ScreenSurfaceCreateInfoQNX::initialize(const VkScreenSurfaceCreateInfoQNX* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (context) delete context;
    if (window) delete window;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    context = nullptr;
    window = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->context) {
        context = new _screen_context(*in_struct->context);
    }

    if (in_struct->window) {
        window = new _screen_window(*in_struct->window);
    }
}

void ScreenSurfaceCreateInfoQNX::initialize(const ScreenSurfaceCreateInfoQNX* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    context = nullptr;
    window = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->context) {
        context = new _screen_context(*copy_src->context);
    }

    if (copy_src->window) {
        window = new _screen_window(*copy_src->window);
    }
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_ENABLE_BETA_EXTENSIONS

PhysicalDeviceDisplacementMicromapFeaturesNV::PhysicalDeviceDisplacementMicromapFeaturesNV(
    const VkPhysicalDeviceDisplacementMicromapFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), displacementMicromap(in_struct->displacementMicromap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDisplacementMicromapFeaturesNV::PhysicalDeviceDisplacementMicromapFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV), pNext(nullptr), displacementMicromap() {}

PhysicalDeviceDisplacementMicromapFeaturesNV::PhysicalDeviceDisplacementMicromapFeaturesNV(
    const PhysicalDeviceDisplacementMicromapFeaturesNV& copy_src) {
    sType = copy_src.sType;
    displacementMicromap = copy_src.displacementMicromap;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDisplacementMicromapFeaturesNV& PhysicalDeviceDisplacementMicromapFeaturesNV::operator=(
    const PhysicalDeviceDisplacementMicromapFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displacementMicromap = copy_src.displacementMicromap;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDisplacementMicromapFeaturesNV::~PhysicalDeviceDisplacementMicromapFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceDisplacementMicromapFeaturesNV::initialize(const VkPhysicalDeviceDisplacementMicromapFeaturesNV* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displacementMicromap = in_struct->displacementMicromap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDisplacementMicromapFeaturesNV::initialize(const PhysicalDeviceDisplacementMicromapFeaturesNV* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displacementMicromap = copy_src->displacementMicromap;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDisplacementMicromapPropertiesNV::PhysicalDeviceDisplacementMicromapPropertiesNV(
    const VkPhysicalDeviceDisplacementMicromapPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxDisplacementMicromapSubdivisionLevel(in_struct->maxDisplacementMicromapSubdivisionLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDisplacementMicromapPropertiesNV::PhysicalDeviceDisplacementMicromapPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV),
      pNext(nullptr),
      maxDisplacementMicromapSubdivisionLevel() {}

PhysicalDeviceDisplacementMicromapPropertiesNV::PhysicalDeviceDisplacementMicromapPropertiesNV(
    const PhysicalDeviceDisplacementMicromapPropertiesNV& copy_src) {
    sType = copy_src.sType;
    maxDisplacementMicromapSubdivisionLevel = copy_src.maxDisplacementMicromapSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDisplacementMicromapPropertiesNV& PhysicalDeviceDisplacementMicromapPropertiesNV::operator=(
    const PhysicalDeviceDisplacementMicromapPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxDisplacementMicromapSubdivisionLevel = copy_src.maxDisplacementMicromapSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDisplacementMicromapPropertiesNV::~PhysicalDeviceDisplacementMicromapPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceDisplacementMicromapPropertiesNV::initialize(const VkPhysicalDeviceDisplacementMicromapPropertiesNV* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxDisplacementMicromapSubdivisionLevel = in_struct->maxDisplacementMicromapSubdivisionLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDisplacementMicromapPropertiesNV::initialize(const PhysicalDeviceDisplacementMicromapPropertiesNV* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxDisplacementMicromapSubdivisionLevel = copy_src->maxDisplacementMicromapSubdivisionLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderFeaturesHUAWEI(
    const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      clustercullingShader(in_struct->clustercullingShader),
      multiviewClusterCullingShader(in_struct->multiviewClusterCullingShader) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderFeaturesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI),
      pNext(nullptr),
      clustercullingShader(),
      multiviewClusterCullingShader() {}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderFeaturesHUAWEI(
    const PhysicalDeviceClusterCullingShaderFeaturesHUAWEI& copy_src) {
    sType = copy_src.sType;
    clustercullingShader = copy_src.clustercullingShader;
    multiviewClusterCullingShader = copy_src.multiviewClusterCullingShader;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI& PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::operator=(
    const PhysicalDeviceClusterCullingShaderFeaturesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    clustercullingShader = copy_src.clustercullingShader;
    multiviewClusterCullingShader = copy_src.multiviewClusterCullingShader;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::~PhysicalDeviceClusterCullingShaderFeaturesHUAWEI() { FreePnextChain(pNext); }

void PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::initialize(
    const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    clustercullingShader = in_struct->clustercullingShader;
    multiviewClusterCullingShader = in_struct->multiviewClusterCullingShader;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::initialize(const PhysicalDeviceClusterCullingShaderFeaturesHUAWEI* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    clustercullingShader = copy_src->clustercullingShader;
    multiviewClusterCullingShader = copy_src->multiviewClusterCullingShader;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::PhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
    const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      maxOutputClusterCount(in_struct->maxOutputClusterCount),
      indirectBufferOffsetAlignment(in_struct->indirectBufferOffsetAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupCount[i] = in_struct->maxWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupSize[i] = in_struct->maxWorkGroupSize[i];
    }
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::PhysicalDeviceClusterCullingShaderPropertiesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI),
      pNext(nullptr),
      maxOutputClusterCount(),
      indirectBufferOffsetAlignment() {}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::PhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
    const PhysicalDeviceClusterCullingShaderPropertiesHUAWEI& copy_src) {
    sType = copy_src.sType;
    maxOutputClusterCount = copy_src.maxOutputClusterCount;
    indirectBufferOffsetAlignment = copy_src.indirectBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupCount[i] = copy_src.maxWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupSize[i] = copy_src.maxWorkGroupSize[i];
    }
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI& PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::operator=(
    const PhysicalDeviceClusterCullingShaderPropertiesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxOutputClusterCount = copy_src.maxOutputClusterCount;
    indirectBufferOffsetAlignment = copy_src.indirectBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupCount[i] = copy_src.maxWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupSize[i] = copy_src.maxWorkGroupSize[i];
    }

    return *this;
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::~PhysicalDeviceClusterCullingShaderPropertiesHUAWEI() { FreePnextChain(pNext); }

void PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::initialize(
    const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxOutputClusterCount = in_struct->maxOutputClusterCount;
    indirectBufferOffsetAlignment = in_struct->indirectBufferOffsetAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupCount[i] = in_struct->maxWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupSize[i] = in_struct->maxWorkGroupSize[i];
    }
}

void PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::initialize(
    const PhysicalDeviceClusterCullingShaderPropertiesHUAWEI* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxOutputClusterCount = copy_src->maxOutputClusterCount;
    indirectBufferOffsetAlignment = copy_src->indirectBufferOffsetAlignment;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupCount[i] = copy_src->maxWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxWorkGroupSize[i] = copy_src->maxWorkGroupSize[i];
    }
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(
    const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), clusterShadingRate(in_struct->clusterShadingRate) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI), pNext(nullptr), clusterShadingRate() {}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(
    const PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& copy_src) {
    sType = copy_src.sType;
    clusterShadingRate = copy_src.clusterShadingRate;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::operator=(
    const PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    clusterShadingRate = copy_src.clusterShadingRate;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::~PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI() {
    FreePnextChain(pNext);
}

void PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::initialize(
    const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    clusterShadingRate = in_struct->clusterShadingRate;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::initialize(
    const PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    clusterShadingRate = copy_src->clusterShadingRate;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderCorePropertiesARM::PhysicalDeviceShaderCorePropertiesARM(
    const VkPhysicalDeviceShaderCorePropertiesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pixelRate(in_struct->pixelRate), texelRate(in_struct->texelRate), fmaRate(in_struct->fmaRate) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderCorePropertiesARM::PhysicalDeviceShaderCorePropertiesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM), pNext(nullptr), pixelRate(), texelRate(), fmaRate() {}

PhysicalDeviceShaderCorePropertiesARM::PhysicalDeviceShaderCorePropertiesARM(
    const PhysicalDeviceShaderCorePropertiesARM& copy_src) {
    sType = copy_src.sType;
    pixelRate = copy_src.pixelRate;
    texelRate = copy_src.texelRate;
    fmaRate = copy_src.fmaRate;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderCorePropertiesARM& PhysicalDeviceShaderCorePropertiesARM::operator=(
    const PhysicalDeviceShaderCorePropertiesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pixelRate = copy_src.pixelRate;
    texelRate = copy_src.texelRate;
    fmaRate = copy_src.fmaRate;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderCorePropertiesARM::~PhysicalDeviceShaderCorePropertiesARM() { FreePnextChain(pNext); }

void PhysicalDeviceShaderCorePropertiesARM::initialize(const VkPhysicalDeviceShaderCorePropertiesARM* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pixelRate = in_struct->pixelRate;
    texelRate = in_struct->texelRate;
    fmaRate = in_struct->fmaRate;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderCorePropertiesARM::initialize(const PhysicalDeviceShaderCorePropertiesARM* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pixelRate = copy_src->pixelRate;
    texelRate = copy_src->texelRate;
    fmaRate = copy_src->fmaRate;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceQueueShaderCoreControlCreateInfoARM::DeviceQueueShaderCoreControlCreateInfoARM(
    const VkDeviceQueueShaderCoreControlCreateInfoARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderCoreCount(in_struct->shaderCoreCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceQueueShaderCoreControlCreateInfoARM::DeviceQueueShaderCoreControlCreateInfoARM()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM), pNext(nullptr), shaderCoreCount() {}

DeviceQueueShaderCoreControlCreateInfoARM::DeviceQueueShaderCoreControlCreateInfoARM(
    const DeviceQueueShaderCoreControlCreateInfoARM& copy_src) {
    sType = copy_src.sType;
    shaderCoreCount = copy_src.shaderCoreCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceQueueShaderCoreControlCreateInfoARM& DeviceQueueShaderCoreControlCreateInfoARM::operator=(
    const DeviceQueueShaderCoreControlCreateInfoARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderCoreCount = copy_src.shaderCoreCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceQueueShaderCoreControlCreateInfoARM::~DeviceQueueShaderCoreControlCreateInfoARM() { FreePnextChain(pNext); }

void DeviceQueueShaderCoreControlCreateInfoARM::initialize(const VkDeviceQueueShaderCoreControlCreateInfoARM* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderCoreCount = in_struct->shaderCoreCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceQueueShaderCoreControlCreateInfoARM::initialize(const DeviceQueueShaderCoreControlCreateInfoARM* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderCoreCount = copy_src->shaderCoreCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSchedulingControlsFeaturesARM::PhysicalDeviceSchedulingControlsFeaturesARM(
    const VkPhysicalDeviceSchedulingControlsFeaturesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), schedulingControls(in_struct->schedulingControls) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSchedulingControlsFeaturesARM::PhysicalDeviceSchedulingControlsFeaturesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM), pNext(nullptr), schedulingControls() {}

PhysicalDeviceSchedulingControlsFeaturesARM::PhysicalDeviceSchedulingControlsFeaturesARM(
    const PhysicalDeviceSchedulingControlsFeaturesARM& copy_src) {
    sType = copy_src.sType;
    schedulingControls = copy_src.schedulingControls;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSchedulingControlsFeaturesARM& PhysicalDeviceSchedulingControlsFeaturesARM::operator=(
    const PhysicalDeviceSchedulingControlsFeaturesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    schedulingControls = copy_src.schedulingControls;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSchedulingControlsFeaturesARM::~PhysicalDeviceSchedulingControlsFeaturesARM() { FreePnextChain(pNext); }

void PhysicalDeviceSchedulingControlsFeaturesARM::initialize(const VkPhysicalDeviceSchedulingControlsFeaturesARM* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    schedulingControls = in_struct->schedulingControls;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSchedulingControlsFeaturesARM::initialize(const PhysicalDeviceSchedulingControlsFeaturesARM* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    schedulingControls = copy_src->schedulingControls;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSchedulingControlsPropertiesARM::PhysicalDeviceSchedulingControlsPropertiesARM(
    const VkPhysicalDeviceSchedulingControlsPropertiesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), schedulingControlsFlags(in_struct->schedulingControlsFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSchedulingControlsPropertiesARM::PhysicalDeviceSchedulingControlsPropertiesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM), pNext(nullptr), schedulingControlsFlags() {}

PhysicalDeviceSchedulingControlsPropertiesARM::PhysicalDeviceSchedulingControlsPropertiesARM(
    const PhysicalDeviceSchedulingControlsPropertiesARM& copy_src) {
    sType = copy_src.sType;
    schedulingControlsFlags = copy_src.schedulingControlsFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSchedulingControlsPropertiesARM& PhysicalDeviceSchedulingControlsPropertiesARM::operator=(
    const PhysicalDeviceSchedulingControlsPropertiesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    schedulingControlsFlags = copy_src.schedulingControlsFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSchedulingControlsPropertiesARM::~PhysicalDeviceSchedulingControlsPropertiesARM() { FreePnextChain(pNext); }

void PhysicalDeviceSchedulingControlsPropertiesARM::initialize(const VkPhysicalDeviceSchedulingControlsPropertiesARM* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    schedulingControlsFlags = in_struct->schedulingControlsFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSchedulingControlsPropertiesARM::initialize(const PhysicalDeviceSchedulingControlsPropertiesARM* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    schedulingControlsFlags = copy_src->schedulingControlsFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(
    const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), descriptorSetHostMapping(in_struct->descriptorSetHostMapping) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE),
      pNext(nullptr),
      descriptorSetHostMapping() {}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(
    const PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& copy_src) {
    sType = copy_src.sType;
    descriptorSetHostMapping = copy_src.descriptorSetHostMapping;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::operator=(
    const PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorSetHostMapping = copy_src.descriptorSetHostMapping;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::~PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::initialize(
    const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorSetHostMapping = in_struct->descriptorSetHostMapping;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::initialize(
    const PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorSetHostMapping = copy_src->descriptorSetHostMapping;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorSetBindingReferenceVALVE::DescriptorSetBindingReferenceVALVE(const VkDescriptorSetBindingReferenceVALVE* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), descriptorSetLayout(in_struct->descriptorSetLayout), binding(in_struct->binding) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorSetBindingReferenceVALVE::DescriptorSetBindingReferenceVALVE()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE), pNext(nullptr), descriptorSetLayout(), binding() {}

DescriptorSetBindingReferenceVALVE::DescriptorSetBindingReferenceVALVE(const DescriptorSetBindingReferenceVALVE& copy_src) {
    sType = copy_src.sType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    binding = copy_src.binding;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorSetBindingReferenceVALVE& DescriptorSetBindingReferenceVALVE::operator=(
    const DescriptorSetBindingReferenceVALVE& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    binding = copy_src.binding;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorSetBindingReferenceVALVE::~DescriptorSetBindingReferenceVALVE() { FreePnextChain(pNext); }

void DescriptorSetBindingReferenceVALVE::initialize(const VkDescriptorSetBindingReferenceVALVE* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorSetLayout = in_struct->descriptorSetLayout;
    binding = in_struct->binding;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorSetBindingReferenceVALVE::initialize(const DescriptorSetBindingReferenceVALVE* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorSetLayout = copy_src->descriptorSetLayout;
    binding = copy_src->binding;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorSetLayoutHostMappingInfoVALVE::DescriptorSetLayoutHostMappingInfoVALVE(
    const VkDescriptorSetLayoutHostMappingInfoVALVE* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), descriptorOffset(in_struct->descriptorOffset), descriptorSize(in_struct->descriptorSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorSetLayoutHostMappingInfoVALVE::DescriptorSetLayoutHostMappingInfoVALVE()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE),
      pNext(nullptr),
      descriptorOffset(),
      descriptorSize() {}

DescriptorSetLayoutHostMappingInfoVALVE::DescriptorSetLayoutHostMappingInfoVALVE(
    const DescriptorSetLayoutHostMappingInfoVALVE& copy_src) {
    sType = copy_src.sType;
    descriptorOffset = copy_src.descriptorOffset;
    descriptorSize = copy_src.descriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorSetLayoutHostMappingInfoVALVE& DescriptorSetLayoutHostMappingInfoVALVE::operator=(
    const DescriptorSetLayoutHostMappingInfoVALVE& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorOffset = copy_src.descriptorOffset;
    descriptorSize = copy_src.descriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorSetLayoutHostMappingInfoVALVE::~DescriptorSetLayoutHostMappingInfoVALVE() { FreePnextChain(pNext); }

void DescriptorSetLayoutHostMappingInfoVALVE::initialize(const VkDescriptorSetLayoutHostMappingInfoVALVE* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorOffset = in_struct->descriptorOffset;
    descriptorSize = in_struct->descriptorSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorSetLayoutHostMappingInfoVALVE::initialize(const DescriptorSetLayoutHostMappingInfoVALVE* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorOffset = copy_src->descriptorOffset;
    descriptorSize = copy_src->descriptorSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRenderPassStripedFeaturesARM::PhysicalDeviceRenderPassStripedFeaturesARM(
    const VkPhysicalDeviceRenderPassStripedFeaturesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), renderPassStriped(in_struct->renderPassStriped) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRenderPassStripedFeaturesARM::PhysicalDeviceRenderPassStripedFeaturesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM), pNext(nullptr), renderPassStriped() {}

PhysicalDeviceRenderPassStripedFeaturesARM::PhysicalDeviceRenderPassStripedFeaturesARM(
    const PhysicalDeviceRenderPassStripedFeaturesARM& copy_src) {
    sType = copy_src.sType;
    renderPassStriped = copy_src.renderPassStriped;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRenderPassStripedFeaturesARM& PhysicalDeviceRenderPassStripedFeaturesARM::operator=(
    const PhysicalDeviceRenderPassStripedFeaturesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPassStriped = copy_src.renderPassStriped;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRenderPassStripedFeaturesARM::~PhysicalDeviceRenderPassStripedFeaturesARM() { FreePnextChain(pNext); }

void PhysicalDeviceRenderPassStripedFeaturesARM::initialize(const VkPhysicalDeviceRenderPassStripedFeaturesARM* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPassStriped = in_struct->renderPassStriped;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRenderPassStripedFeaturesARM::initialize(const PhysicalDeviceRenderPassStripedFeaturesARM* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPassStriped = copy_src->renderPassStriped;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRenderPassStripedPropertiesARM::PhysicalDeviceRenderPassStripedPropertiesARM(
    const VkPhysicalDeviceRenderPassStripedPropertiesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      renderPassStripeGranularity(in_struct->renderPassStripeGranularity),
      maxRenderPassStripes(in_struct->maxRenderPassStripes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRenderPassStripedPropertiesARM::PhysicalDeviceRenderPassStripedPropertiesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM),
      pNext(nullptr),
      renderPassStripeGranularity(),
      maxRenderPassStripes() {}

PhysicalDeviceRenderPassStripedPropertiesARM::PhysicalDeviceRenderPassStripedPropertiesARM(
    const PhysicalDeviceRenderPassStripedPropertiesARM& copy_src) {
    sType = copy_src.sType;
    renderPassStripeGranularity = copy_src.renderPassStripeGranularity;
    maxRenderPassStripes = copy_src.maxRenderPassStripes;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRenderPassStripedPropertiesARM& PhysicalDeviceRenderPassStripedPropertiesARM::operator=(
    const PhysicalDeviceRenderPassStripedPropertiesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPassStripeGranularity = copy_src.renderPassStripeGranularity;
    maxRenderPassStripes = copy_src.maxRenderPassStripes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRenderPassStripedPropertiesARM::~PhysicalDeviceRenderPassStripedPropertiesARM() { FreePnextChain(pNext); }

void PhysicalDeviceRenderPassStripedPropertiesARM::initialize(const VkPhysicalDeviceRenderPassStripedPropertiesARM* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPassStripeGranularity = in_struct->renderPassStripeGranularity;
    maxRenderPassStripes = in_struct->maxRenderPassStripes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRenderPassStripedPropertiesARM::initialize(const PhysicalDeviceRenderPassStripedPropertiesARM* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPassStripeGranularity = copy_src->renderPassStripeGranularity;
    maxRenderPassStripes = copy_src->maxRenderPassStripes;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassStripeInfoARM::RenderPassStripeInfoARM(const VkRenderPassStripeInfoARM* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stripeArea(in_struct->stripeArea) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderPassStripeInfoARM::RenderPassStripeInfoARM()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_INFO_ARM), pNext(nullptr), stripeArea() {}

RenderPassStripeInfoARM::RenderPassStripeInfoARM(const RenderPassStripeInfoARM& copy_src) {
    sType = copy_src.sType;
    stripeArea = copy_src.stripeArea;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderPassStripeInfoARM& RenderPassStripeInfoARM::operator=(const RenderPassStripeInfoARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stripeArea = copy_src.stripeArea;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderPassStripeInfoARM::~RenderPassStripeInfoARM() { FreePnextChain(pNext); }

void RenderPassStripeInfoARM::initialize(const VkRenderPassStripeInfoARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stripeArea = in_struct->stripeArea;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderPassStripeInfoARM::initialize(const RenderPassStripeInfoARM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stripeArea = copy_src->stripeArea;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassStripeBeginInfoARM::RenderPassStripeBeginInfoARM(const VkRenderPassStripeBeginInfoARM* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stripeInfoCount(in_struct->stripeInfoCount), pStripeInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (stripeInfoCount && in_struct->pStripeInfos) {
        pStripeInfos = new RenderPassStripeInfoARM[stripeInfoCount];
        for (uint32_t i = 0; i < stripeInfoCount; ++i) {
            pStripeInfos[i].initialize(&in_struct->pStripeInfos[i]);
        }
    }
}

RenderPassStripeBeginInfoARM::RenderPassStripeBeginInfoARM()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM), pNext(nullptr), stripeInfoCount(), pStripeInfos(nullptr) {}

RenderPassStripeBeginInfoARM::RenderPassStripeBeginInfoARM(const RenderPassStripeBeginInfoARM& copy_src) {
    sType = copy_src.sType;
    stripeInfoCount = copy_src.stripeInfoCount;
    pStripeInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stripeInfoCount && copy_src.pStripeInfos) {
        pStripeInfos = new RenderPassStripeInfoARM[stripeInfoCount];
        for (uint32_t i = 0; i < stripeInfoCount; ++i) {
            pStripeInfos[i].initialize(&copy_src.pStripeInfos[i]);
        }
    }
}

RenderPassStripeBeginInfoARM& RenderPassStripeBeginInfoARM::operator=(const RenderPassStripeBeginInfoARM& copy_src) {
    if (&copy_src == this) return *this;

    if (pStripeInfos) delete[] pStripeInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stripeInfoCount = copy_src.stripeInfoCount;
    pStripeInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stripeInfoCount && copy_src.pStripeInfos) {
        pStripeInfos = new RenderPassStripeInfoARM[stripeInfoCount];
        for (uint32_t i = 0; i < stripeInfoCount; ++i) {
            pStripeInfos[i].initialize(&copy_src.pStripeInfos[i]);
        }
    }

    return *this;
}

RenderPassStripeBeginInfoARM::~RenderPassStripeBeginInfoARM() {
    if (pStripeInfos) delete[] pStripeInfos;
    FreePnextChain(pNext);
}

void RenderPassStripeBeginInfoARM::initialize(const VkRenderPassStripeBeginInfoARM* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStripeInfos) delete[] pStripeInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stripeInfoCount = in_struct->stripeInfoCount;
    pStripeInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (stripeInfoCount && in_struct->pStripeInfos) {
        pStripeInfos = new RenderPassStripeInfoARM[stripeInfoCount];
        for (uint32_t i = 0; i < stripeInfoCount; ++i) {
            pStripeInfos[i].initialize(&in_struct->pStripeInfos[i]);
        }
    }
}

void RenderPassStripeBeginInfoARM::initialize(const RenderPassStripeBeginInfoARM* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stripeInfoCount = copy_src->stripeInfoCount;
    pStripeInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (stripeInfoCount && copy_src->pStripeInfos) {
        pStripeInfos = new RenderPassStripeInfoARM[stripeInfoCount];
        for (uint32_t i = 0; i < stripeInfoCount; ++i) {
            pStripeInfos[i].initialize(&copy_src->pStripeInfos[i]);
        }
    }
}

RenderPassStripeSubmitInfoARM::RenderPassStripeSubmitInfoARM(const VkRenderPassStripeSubmitInfoARM* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stripeSemaphoreInfoCount(in_struct->stripeSemaphoreInfoCount), pStripeSemaphoreInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (stripeSemaphoreInfoCount && in_struct->pStripeSemaphoreInfos) {
        pStripeSemaphoreInfos = new SemaphoreSubmitInfo[stripeSemaphoreInfoCount];
        for (uint32_t i = 0; i < stripeSemaphoreInfoCount; ++i) {
            pStripeSemaphoreInfos[i].initialize(&in_struct->pStripeSemaphoreInfos[i]);
        }
    }
}

RenderPassStripeSubmitInfoARM::RenderPassStripeSubmitInfoARM()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM),
      pNext(nullptr),
      stripeSemaphoreInfoCount(),
      pStripeSemaphoreInfos(nullptr) {}

RenderPassStripeSubmitInfoARM::RenderPassStripeSubmitInfoARM(const RenderPassStripeSubmitInfoARM& copy_src) {
    sType = copy_src.sType;
    stripeSemaphoreInfoCount = copy_src.stripeSemaphoreInfoCount;
    pStripeSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stripeSemaphoreInfoCount && copy_src.pStripeSemaphoreInfos) {
        pStripeSemaphoreInfos = new SemaphoreSubmitInfo[stripeSemaphoreInfoCount];
        for (uint32_t i = 0; i < stripeSemaphoreInfoCount; ++i) {
            pStripeSemaphoreInfos[i].initialize(&copy_src.pStripeSemaphoreInfos[i]);
        }
    }
}

RenderPassStripeSubmitInfoARM& RenderPassStripeSubmitInfoARM::operator=(const RenderPassStripeSubmitInfoARM& copy_src) {
    if (&copy_src == this) return *this;

    if (pStripeSemaphoreInfos) delete[] pStripeSemaphoreInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stripeSemaphoreInfoCount = copy_src.stripeSemaphoreInfoCount;
    pStripeSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (stripeSemaphoreInfoCount && copy_src.pStripeSemaphoreInfos) {
        pStripeSemaphoreInfos = new SemaphoreSubmitInfo[stripeSemaphoreInfoCount];
        for (uint32_t i = 0; i < stripeSemaphoreInfoCount; ++i) {
            pStripeSemaphoreInfos[i].initialize(&copy_src.pStripeSemaphoreInfos[i]);
        }
    }

    return *this;
}

RenderPassStripeSubmitInfoARM::~RenderPassStripeSubmitInfoARM() {
    if (pStripeSemaphoreInfos) delete[] pStripeSemaphoreInfos;
    FreePnextChain(pNext);
}

void RenderPassStripeSubmitInfoARM::initialize(const VkRenderPassStripeSubmitInfoARM* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStripeSemaphoreInfos) delete[] pStripeSemaphoreInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stripeSemaphoreInfoCount = in_struct->stripeSemaphoreInfoCount;
    pStripeSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (stripeSemaphoreInfoCount && in_struct->pStripeSemaphoreInfos) {
        pStripeSemaphoreInfos = new SemaphoreSubmitInfo[stripeSemaphoreInfoCount];
        for (uint32_t i = 0; i < stripeSemaphoreInfoCount; ++i) {
            pStripeSemaphoreInfos[i].initialize(&in_struct->pStripeSemaphoreInfos[i]);
        }
    }
}

void RenderPassStripeSubmitInfoARM::initialize(const RenderPassStripeSubmitInfoARM* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stripeSemaphoreInfoCount = copy_src->stripeSemaphoreInfoCount;
    pStripeSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (stripeSemaphoreInfoCount && copy_src->pStripeSemaphoreInfos) {
        pStripeSemaphoreInfos = new SemaphoreSubmitInfo[stripeSemaphoreInfoCount];
        for (uint32_t i = 0; i < stripeSemaphoreInfoCount; ++i) {
            pStripeSemaphoreInfos[i].initialize(&copy_src->pStripeSemaphoreInfos[i]);
        }
    }
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(
    const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityMapOffset(in_struct->fragmentDensityMapOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM),
      pNext(nullptr),
      fragmentDensityMapOffset() {}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(
    const PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    fragmentDensityMapOffset = copy_src.fragmentDensityMapOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::operator=(
    const PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityMapOffset = copy_src.fragmentDensityMapOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::~PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::initialize(
    const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityMapOffset = in_struct->fragmentDensityMapOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::initialize(
    const PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityMapOffset = copy_src->fragmentDensityMapOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(
    const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityOffsetGranularity(in_struct->fragmentDensityOffsetGranularity) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM),
      pNext(nullptr),
      fragmentDensityOffsetGranularity() {}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(
    const PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& copy_src) {
    sType = copy_src.sType;
    fragmentDensityOffsetGranularity = copy_src.fragmentDensityOffsetGranularity;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::operator=(
    const PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityOffsetGranularity = copy_src.fragmentDensityOffsetGranularity;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::~PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM() {
    FreePnextChain(pNext);
}

void PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::initialize(
    const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityOffsetGranularity = in_struct->fragmentDensityOffsetGranularity;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::initialize(
    const PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityOffsetGranularity = copy_src->fragmentDensityOffsetGranularity;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::SubpassFragmentDensityMapOffsetEndInfoQCOM(
    const VkSubpassFragmentDensityMapOffsetEndInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityOffsetCount(in_struct->fragmentDensityOffsetCount), pFragmentDensityOffsets(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pFragmentDensityOffsets) {
        pFragmentDensityOffsets = new VkOffset2D[in_struct->fragmentDensityOffsetCount];
        memcpy((void*)pFragmentDensityOffsets, (void*)in_struct->pFragmentDensityOffsets,
               sizeof(VkOffset2D) * in_struct->fragmentDensityOffsetCount);
    }
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::SubpassFragmentDensityMapOffsetEndInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM),
      pNext(nullptr),
      fragmentDensityOffsetCount(),
      pFragmentDensityOffsets(nullptr) {}

SubpassFragmentDensityMapOffsetEndInfoQCOM::SubpassFragmentDensityMapOffsetEndInfoQCOM(
    const SubpassFragmentDensityMapOffsetEndInfoQCOM& copy_src) {
    sType = copy_src.sType;
    fragmentDensityOffsetCount = copy_src.fragmentDensityOffsetCount;
    pFragmentDensityOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pFragmentDensityOffsets) {
        pFragmentDensityOffsets = new VkOffset2D[copy_src.fragmentDensityOffsetCount];
        memcpy((void*)pFragmentDensityOffsets, (void*)copy_src.pFragmentDensityOffsets,
               sizeof(VkOffset2D) * copy_src.fragmentDensityOffsetCount);
    }
}

SubpassFragmentDensityMapOffsetEndInfoQCOM& SubpassFragmentDensityMapOffsetEndInfoQCOM::operator=(
    const SubpassFragmentDensityMapOffsetEndInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    if (pFragmentDensityOffsets) delete[] pFragmentDensityOffsets;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityOffsetCount = copy_src.fragmentDensityOffsetCount;
    pFragmentDensityOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pFragmentDensityOffsets) {
        pFragmentDensityOffsets = new VkOffset2D[copy_src.fragmentDensityOffsetCount];
        memcpy((void*)pFragmentDensityOffsets, (void*)copy_src.pFragmentDensityOffsets,
               sizeof(VkOffset2D) * copy_src.fragmentDensityOffsetCount);
    }

    return *this;
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::~SubpassFragmentDensityMapOffsetEndInfoQCOM() {
    if (pFragmentDensityOffsets) delete[] pFragmentDensityOffsets;
    FreePnextChain(pNext);
}

void SubpassFragmentDensityMapOffsetEndInfoQCOM::initialize(const VkSubpassFragmentDensityMapOffsetEndInfoQCOM* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pFragmentDensityOffsets) delete[] pFragmentDensityOffsets;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityOffsetCount = in_struct->fragmentDensityOffsetCount;
    pFragmentDensityOffsets = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pFragmentDensityOffsets) {
        pFragmentDensityOffsets = new VkOffset2D[in_struct->fragmentDensityOffsetCount];
        memcpy((void*)pFragmentDensityOffsets, (void*)in_struct->pFragmentDensityOffsets,
               sizeof(VkOffset2D) * in_struct->fragmentDensityOffsetCount);
    }
}

void SubpassFragmentDensityMapOffsetEndInfoQCOM::initialize(const SubpassFragmentDensityMapOffsetEndInfoQCOM* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityOffsetCount = copy_src->fragmentDensityOffsetCount;
    pFragmentDensityOffsets = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pFragmentDensityOffsets) {
        pFragmentDensityOffsets = new VkOffset2D[copy_src->fragmentDensityOffsetCount];
        memcpy((void*)pFragmentDensityOffsets, (void*)copy_src->pFragmentDensityOffsets,
               sizeof(VkOffset2D) * copy_src->fragmentDensityOffsetCount);
    }
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::PhysicalDeviceCopyMemoryIndirectFeaturesNV(
    const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), indirectCopy(in_struct->indirectCopy) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::PhysicalDeviceCopyMemoryIndirectFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV), pNext(nullptr), indirectCopy() {}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::PhysicalDeviceCopyMemoryIndirectFeaturesNV(
    const PhysicalDeviceCopyMemoryIndirectFeaturesNV& copy_src) {
    sType = copy_src.sType;
    indirectCopy = copy_src.indirectCopy;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV& PhysicalDeviceCopyMemoryIndirectFeaturesNV::operator=(
    const PhysicalDeviceCopyMemoryIndirectFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    indirectCopy = copy_src.indirectCopy;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::~PhysicalDeviceCopyMemoryIndirectFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCopyMemoryIndirectFeaturesNV::initialize(const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    indirectCopy = in_struct->indirectCopy;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCopyMemoryIndirectFeaturesNV::initialize(const PhysicalDeviceCopyMemoryIndirectFeaturesNV* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    indirectCopy = copy_src->indirectCopy;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::PhysicalDeviceCopyMemoryIndirectPropertiesNV(
    const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), supportedQueues(in_struct->supportedQueues) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::PhysicalDeviceCopyMemoryIndirectPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV), pNext(nullptr), supportedQueues() {}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::PhysicalDeviceCopyMemoryIndirectPropertiesNV(
    const PhysicalDeviceCopyMemoryIndirectPropertiesNV& copy_src) {
    sType = copy_src.sType;
    supportedQueues = copy_src.supportedQueues;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV& PhysicalDeviceCopyMemoryIndirectPropertiesNV::operator=(
    const PhysicalDeviceCopyMemoryIndirectPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportedQueues = copy_src.supportedQueues;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::~PhysicalDeviceCopyMemoryIndirectPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceCopyMemoryIndirectPropertiesNV::initialize(const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportedQueues = in_struct->supportedQueues;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCopyMemoryIndirectPropertiesNV::initialize(const PhysicalDeviceCopyMemoryIndirectPropertiesNV* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedQueues = copy_src->supportedQueues;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMemoryDecompressionFeaturesNV::PhysicalDeviceMemoryDecompressionFeaturesNV(
    const VkPhysicalDeviceMemoryDecompressionFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryDecompression(in_struct->memoryDecompression) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMemoryDecompressionFeaturesNV::PhysicalDeviceMemoryDecompressionFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV), pNext(nullptr), memoryDecompression() {}

PhysicalDeviceMemoryDecompressionFeaturesNV::PhysicalDeviceMemoryDecompressionFeaturesNV(
    const PhysicalDeviceMemoryDecompressionFeaturesNV& copy_src) {
    sType = copy_src.sType;
    memoryDecompression = copy_src.memoryDecompression;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMemoryDecompressionFeaturesNV& PhysicalDeviceMemoryDecompressionFeaturesNV::operator=(
    const PhysicalDeviceMemoryDecompressionFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryDecompression = copy_src.memoryDecompression;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMemoryDecompressionFeaturesNV::~PhysicalDeviceMemoryDecompressionFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceMemoryDecompressionFeaturesNV::initialize(const VkPhysicalDeviceMemoryDecompressionFeaturesNV* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryDecompression = in_struct->memoryDecompression;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMemoryDecompressionFeaturesNV::initialize(const PhysicalDeviceMemoryDecompressionFeaturesNV* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryDecompression = copy_src->memoryDecompression;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMemoryDecompressionPropertiesNV::PhysicalDeviceMemoryDecompressionPropertiesNV(
    const VkPhysicalDeviceMemoryDecompressionPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      decompressionMethods(in_struct->decompressionMethods),
      maxDecompressionIndirectCount(in_struct->maxDecompressionIndirectCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMemoryDecompressionPropertiesNV::PhysicalDeviceMemoryDecompressionPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV),
      pNext(nullptr),
      decompressionMethods(),
      maxDecompressionIndirectCount() {}

PhysicalDeviceMemoryDecompressionPropertiesNV::PhysicalDeviceMemoryDecompressionPropertiesNV(
    const PhysicalDeviceMemoryDecompressionPropertiesNV& copy_src) {
    sType = copy_src.sType;
    decompressionMethods = copy_src.decompressionMethods;
    maxDecompressionIndirectCount = copy_src.maxDecompressionIndirectCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMemoryDecompressionPropertiesNV& PhysicalDeviceMemoryDecompressionPropertiesNV::operator=(
    const PhysicalDeviceMemoryDecompressionPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    decompressionMethods = copy_src.decompressionMethods;
    maxDecompressionIndirectCount = copy_src.maxDecompressionIndirectCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMemoryDecompressionPropertiesNV::~PhysicalDeviceMemoryDecompressionPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceMemoryDecompressionPropertiesNV::initialize(const VkPhysicalDeviceMemoryDecompressionPropertiesNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    decompressionMethods = in_struct->decompressionMethods;
    maxDecompressionIndirectCount = in_struct->maxDecompressionIndirectCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMemoryDecompressionPropertiesNV::initialize(const PhysicalDeviceMemoryDecompressionPropertiesNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    decompressionMethods = copy_src->decompressionMethods;
    maxDecompressionIndirectCount = copy_src->maxDecompressionIndirectCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(
    const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      deviceGeneratedCompute(in_struct->deviceGeneratedCompute),
      deviceGeneratedComputePipelines(in_struct->deviceGeneratedComputePipelines),
      deviceGeneratedComputeCaptureReplay(in_struct->deviceGeneratedComputeCaptureReplay) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV),
      pNext(nullptr),
      deviceGeneratedCompute(),
      deviceGeneratedComputePipelines(),
      deviceGeneratedComputeCaptureReplay() {}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(
    const PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV& copy_src) {
    sType = copy_src.sType;
    deviceGeneratedCompute = copy_src.deviceGeneratedCompute;
    deviceGeneratedComputePipelines = copy_src.deviceGeneratedComputePipelines;
    deviceGeneratedComputeCaptureReplay = copy_src.deviceGeneratedComputeCaptureReplay;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV& PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::operator=(
    const PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceGeneratedCompute = copy_src.deviceGeneratedCompute;
    deviceGeneratedComputePipelines = copy_src.deviceGeneratedComputePipelines;
    deviceGeneratedComputeCaptureReplay = copy_src.deviceGeneratedComputeCaptureReplay;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::~PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::initialize(
    const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceGeneratedCompute = in_struct->deviceGeneratedCompute;
    deviceGeneratedComputePipelines = in_struct->deviceGeneratedComputePipelines;
    deviceGeneratedComputeCaptureReplay = in_struct->deviceGeneratedComputeCaptureReplay;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::initialize(
    const PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceGeneratedCompute = copy_src->deviceGeneratedCompute;
    deviceGeneratedComputePipelines = copy_src->deviceGeneratedComputePipelines;
    deviceGeneratedComputeCaptureReplay = copy_src->deviceGeneratedComputeCaptureReplay;
    pNext = SafePnextCopy(copy_src->pNext);
}

ComputePipelineIndirectBufferInfoNV::ComputePipelineIndirectBufferInfoNV(const VkComputePipelineIndirectBufferInfoNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      deviceAddress(in_struct->deviceAddress),
      size(in_struct->size),
      pipelineDeviceAddressCaptureReplay(in_struct->pipelineDeviceAddressCaptureReplay) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ComputePipelineIndirectBufferInfoNV::ComputePipelineIndirectBufferInfoNV()
    : sType(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV),
      pNext(nullptr),
      deviceAddress(),
      size(),
      pipelineDeviceAddressCaptureReplay() {}

ComputePipelineIndirectBufferInfoNV::ComputePipelineIndirectBufferInfoNV(const ComputePipelineIndirectBufferInfoNV& copy_src) {
    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    size = copy_src.size;
    pipelineDeviceAddressCaptureReplay = copy_src.pipelineDeviceAddressCaptureReplay;
    pNext = SafePnextCopy(copy_src.pNext);
}

ComputePipelineIndirectBufferInfoNV& ComputePipelineIndirectBufferInfoNV::operator=(
    const ComputePipelineIndirectBufferInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    size = copy_src.size;
    pipelineDeviceAddressCaptureReplay = copy_src.pipelineDeviceAddressCaptureReplay;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ComputePipelineIndirectBufferInfoNV::~ComputePipelineIndirectBufferInfoNV() { FreePnextChain(pNext); }

void ComputePipelineIndirectBufferInfoNV::initialize(const VkComputePipelineIndirectBufferInfoNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceAddress = in_struct->deviceAddress;
    size = in_struct->size;
    pipelineDeviceAddressCaptureReplay = in_struct->pipelineDeviceAddressCaptureReplay;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ComputePipelineIndirectBufferInfoNV::initialize(const ComputePipelineIndirectBufferInfoNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceAddress = copy_src->deviceAddress;
    size = copy_src->size;
    pipelineDeviceAddressCaptureReplay = copy_src->pipelineDeviceAddressCaptureReplay;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineIndirectDeviceAddressInfoNV::PipelineIndirectDeviceAddressInfoNV(const VkPipelineIndirectDeviceAddressInfoNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), pipelineBindPoint(in_struct->pipelineBindPoint), pipeline(in_struct->pipeline) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineIndirectDeviceAddressInfoNV::PipelineIndirectDeviceAddressInfoNV()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV), pNext(nullptr), pipelineBindPoint(), pipeline() {}

PipelineIndirectDeviceAddressInfoNV::PipelineIndirectDeviceAddressInfoNV(const PipelineIndirectDeviceAddressInfoNV& copy_src) {
    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineIndirectDeviceAddressInfoNV& PipelineIndirectDeviceAddressInfoNV::operator=(
    const PipelineIndirectDeviceAddressInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipeline = copy_src.pipeline;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineIndirectDeviceAddressInfoNV::~PipelineIndirectDeviceAddressInfoNV() { FreePnextChain(pNext); }

void PipelineIndirectDeviceAddressInfoNV::initialize(const VkPipelineIndirectDeviceAddressInfoNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipeline = in_struct->pipeline;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineIndirectDeviceAddressInfoNV::initialize(const PipelineIndirectDeviceAddressInfoNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    pipeline = copy_src->pipeline;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::PhysicalDeviceLinearColorAttachmentFeaturesNV(
    const VkPhysicalDeviceLinearColorAttachmentFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), linearColorAttachment(in_struct->linearColorAttachment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::PhysicalDeviceLinearColorAttachmentFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV), pNext(nullptr), linearColorAttachment() {}

PhysicalDeviceLinearColorAttachmentFeaturesNV::PhysicalDeviceLinearColorAttachmentFeaturesNV(
    const PhysicalDeviceLinearColorAttachmentFeaturesNV& copy_src) {
    sType = copy_src.sType;
    linearColorAttachment = copy_src.linearColorAttachment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV& PhysicalDeviceLinearColorAttachmentFeaturesNV::operator=(
    const PhysicalDeviceLinearColorAttachmentFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    linearColorAttachment = copy_src.linearColorAttachment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::~PhysicalDeviceLinearColorAttachmentFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceLinearColorAttachmentFeaturesNV::initialize(const VkPhysicalDeviceLinearColorAttachmentFeaturesNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    linearColorAttachment = in_struct->linearColorAttachment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceLinearColorAttachmentFeaturesNV::initialize(const PhysicalDeviceLinearColorAttachmentFeaturesNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    linearColorAttachment = copy_src->linearColorAttachment;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewSampleWeightCreateInfoQCOM::ImageViewSampleWeightCreateInfoQCOM(const VkImageViewSampleWeightCreateInfoQCOM* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      filterCenter(in_struct->filterCenter),
      filterSize(in_struct->filterSize),
      numPhases(in_struct->numPhases) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewSampleWeightCreateInfoQCOM::ImageViewSampleWeightCreateInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM),
      pNext(nullptr),
      filterCenter(),
      filterSize(),
      numPhases() {}

ImageViewSampleWeightCreateInfoQCOM::ImageViewSampleWeightCreateInfoQCOM(const ImageViewSampleWeightCreateInfoQCOM& copy_src) {
    sType = copy_src.sType;
    filterCenter = copy_src.filterCenter;
    filterSize = copy_src.filterSize;
    numPhases = copy_src.numPhases;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewSampleWeightCreateInfoQCOM& ImageViewSampleWeightCreateInfoQCOM::operator=(
    const ImageViewSampleWeightCreateInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    filterCenter = copy_src.filterCenter;
    filterSize = copy_src.filterSize;
    numPhases = copy_src.numPhases;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewSampleWeightCreateInfoQCOM::~ImageViewSampleWeightCreateInfoQCOM() { FreePnextChain(pNext); }

void ImageViewSampleWeightCreateInfoQCOM::initialize(const VkImageViewSampleWeightCreateInfoQCOM* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    filterCenter = in_struct->filterCenter;
    filterSize = in_struct->filterSize;
    numPhases = in_struct->numPhases;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewSampleWeightCreateInfoQCOM::initialize(const ImageViewSampleWeightCreateInfoQCOM* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    filterCenter = copy_src->filterCenter;
    filterSize = copy_src->filterSize;
    numPhases = copy_src->numPhases;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageProcessingFeaturesQCOM::PhysicalDeviceImageProcessingFeaturesQCOM(
    const VkPhysicalDeviceImageProcessingFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      textureSampleWeighted(in_struct->textureSampleWeighted),
      textureBoxFilter(in_struct->textureBoxFilter),
      textureBlockMatch(in_struct->textureBlockMatch) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageProcessingFeaturesQCOM::PhysicalDeviceImageProcessingFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM),
      pNext(nullptr),
      textureSampleWeighted(),
      textureBoxFilter(),
      textureBlockMatch() {}

PhysicalDeviceImageProcessingFeaturesQCOM::PhysicalDeviceImageProcessingFeaturesQCOM(
    const PhysicalDeviceImageProcessingFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    textureSampleWeighted = copy_src.textureSampleWeighted;
    textureBoxFilter = copy_src.textureBoxFilter;
    textureBlockMatch = copy_src.textureBlockMatch;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageProcessingFeaturesQCOM& PhysicalDeviceImageProcessingFeaturesQCOM::operator=(
    const PhysicalDeviceImageProcessingFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    textureSampleWeighted = copy_src.textureSampleWeighted;
    textureBoxFilter = copy_src.textureBoxFilter;
    textureBlockMatch = copy_src.textureBlockMatch;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageProcessingFeaturesQCOM::~PhysicalDeviceImageProcessingFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceImageProcessingFeaturesQCOM::initialize(const VkPhysicalDeviceImageProcessingFeaturesQCOM* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    textureSampleWeighted = in_struct->textureSampleWeighted;
    textureBoxFilter = in_struct->textureBoxFilter;
    textureBlockMatch = in_struct->textureBlockMatch;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageProcessingFeaturesQCOM::initialize(const PhysicalDeviceImageProcessingFeaturesQCOM* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    textureSampleWeighted = copy_src->textureSampleWeighted;
    textureBoxFilter = copy_src->textureBoxFilter;
    textureBlockMatch = copy_src->textureBlockMatch;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageProcessingPropertiesQCOM::PhysicalDeviceImageProcessingPropertiesQCOM(
    const VkPhysicalDeviceImageProcessingPropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxWeightFilterPhases(in_struct->maxWeightFilterPhases),
      maxWeightFilterDimension(in_struct->maxWeightFilterDimension),
      maxBlockMatchRegion(in_struct->maxBlockMatchRegion),
      maxBoxFilterBlockSize(in_struct->maxBoxFilterBlockSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageProcessingPropertiesQCOM::PhysicalDeviceImageProcessingPropertiesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM),
      pNext(nullptr),
      maxWeightFilterPhases(),
      maxWeightFilterDimension(),
      maxBlockMatchRegion(),
      maxBoxFilterBlockSize() {}

PhysicalDeviceImageProcessingPropertiesQCOM::PhysicalDeviceImageProcessingPropertiesQCOM(
    const PhysicalDeviceImageProcessingPropertiesQCOM& copy_src) {
    sType = copy_src.sType;
    maxWeightFilterPhases = copy_src.maxWeightFilterPhases;
    maxWeightFilterDimension = copy_src.maxWeightFilterDimension;
    maxBlockMatchRegion = copy_src.maxBlockMatchRegion;
    maxBoxFilterBlockSize = copy_src.maxBoxFilterBlockSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageProcessingPropertiesQCOM& PhysicalDeviceImageProcessingPropertiesQCOM::operator=(
    const PhysicalDeviceImageProcessingPropertiesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxWeightFilterPhases = copy_src.maxWeightFilterPhases;
    maxWeightFilterDimension = copy_src.maxWeightFilterDimension;
    maxBlockMatchRegion = copy_src.maxBlockMatchRegion;
    maxBoxFilterBlockSize = copy_src.maxBoxFilterBlockSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageProcessingPropertiesQCOM::~PhysicalDeviceImageProcessingPropertiesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceImageProcessingPropertiesQCOM::initialize(const VkPhysicalDeviceImageProcessingPropertiesQCOM* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxWeightFilterPhases = in_struct->maxWeightFilterPhases;
    maxWeightFilterDimension = in_struct->maxWeightFilterDimension;
    maxBlockMatchRegion = in_struct->maxBlockMatchRegion;
    maxBoxFilterBlockSize = in_struct->maxBoxFilterBlockSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageProcessingPropertiesQCOM::initialize(const PhysicalDeviceImageProcessingPropertiesQCOM* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxWeightFilterPhases = copy_src->maxWeightFilterPhases;
    maxWeightFilterDimension = copy_src->maxWeightFilterDimension;
    maxBlockMatchRegion = copy_src->maxBlockMatchRegion;
    maxBoxFilterBlockSize = copy_src->maxBoxFilterBlockSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

DirectDriverLoadingInfoLUNARG::DirectDriverLoadingInfoLUNARG(const VkDirectDriverLoadingInfoLUNARG* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), pfnGetInstanceProcAddr(in_struct->pfnGetInstanceProcAddr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DirectDriverLoadingInfoLUNARG::DirectDriverLoadingInfoLUNARG()
    : sType(VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG), pNext(nullptr), flags(), pfnGetInstanceProcAddr() {}

DirectDriverLoadingInfoLUNARG::DirectDriverLoadingInfoLUNARG(const DirectDriverLoadingInfoLUNARG& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnGetInstanceProcAddr = copy_src.pfnGetInstanceProcAddr;
    pNext = SafePnextCopy(copy_src.pNext);
}

DirectDriverLoadingInfoLUNARG& DirectDriverLoadingInfoLUNARG::operator=(const DirectDriverLoadingInfoLUNARG& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnGetInstanceProcAddr = copy_src.pfnGetInstanceProcAddr;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DirectDriverLoadingInfoLUNARG::~DirectDriverLoadingInfoLUNARG() { FreePnextChain(pNext); }

void DirectDriverLoadingInfoLUNARG::initialize(const VkDirectDriverLoadingInfoLUNARG* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pfnGetInstanceProcAddr = in_struct->pfnGetInstanceProcAddr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DirectDriverLoadingInfoLUNARG::initialize(const DirectDriverLoadingInfoLUNARG* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pfnGetInstanceProcAddr = copy_src->pfnGetInstanceProcAddr;
    pNext = SafePnextCopy(copy_src->pNext);
}

DirectDriverLoadingListLUNARG::DirectDriverLoadingListLUNARG(const VkDirectDriverLoadingListLUNARG* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mode(in_struct->mode), driverCount(in_struct->driverCount), pDrivers(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (driverCount && in_struct->pDrivers) {
        pDrivers = new DirectDriverLoadingInfoLUNARG[driverCount];
        for (uint32_t i = 0; i < driverCount; ++i) {
            pDrivers[i].initialize(&in_struct->pDrivers[i]);
        }
    }
}

DirectDriverLoadingListLUNARG::DirectDriverLoadingListLUNARG()
    : sType(VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG), pNext(nullptr), mode(), driverCount(), pDrivers(nullptr) {}

DirectDriverLoadingListLUNARG::DirectDriverLoadingListLUNARG(const DirectDriverLoadingListLUNARG& copy_src) {
    sType = copy_src.sType;
    mode = copy_src.mode;
    driverCount = copy_src.driverCount;
    pDrivers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (driverCount && copy_src.pDrivers) {
        pDrivers = new DirectDriverLoadingInfoLUNARG[driverCount];
        for (uint32_t i = 0; i < driverCount; ++i) {
            pDrivers[i].initialize(&copy_src.pDrivers[i]);
        }
    }
}

DirectDriverLoadingListLUNARG& DirectDriverLoadingListLUNARG::operator=(const DirectDriverLoadingListLUNARG& copy_src) {
    if (&copy_src == this) return *this;

    if (pDrivers) delete[] pDrivers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    mode = copy_src.mode;
    driverCount = copy_src.driverCount;
    pDrivers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (driverCount && copy_src.pDrivers) {
        pDrivers = new DirectDriverLoadingInfoLUNARG[driverCount];
        for (uint32_t i = 0; i < driverCount; ++i) {
            pDrivers[i].initialize(&copy_src.pDrivers[i]);
        }
    }

    return *this;
}

DirectDriverLoadingListLUNARG::~DirectDriverLoadingListLUNARG() {
    if (pDrivers) delete[] pDrivers;
    FreePnextChain(pNext);
}

void DirectDriverLoadingListLUNARG::initialize(const VkDirectDriverLoadingListLUNARG* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDrivers) delete[] pDrivers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mode = in_struct->mode;
    driverCount = in_struct->driverCount;
    pDrivers = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (driverCount && in_struct->pDrivers) {
        pDrivers = new DirectDriverLoadingInfoLUNARG[driverCount];
        for (uint32_t i = 0; i < driverCount; ++i) {
            pDrivers[i].initialize(&in_struct->pDrivers[i]);
        }
    }
}

void DirectDriverLoadingListLUNARG::initialize(const DirectDriverLoadingListLUNARG* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mode = copy_src->mode;
    driverCount = copy_src->driverCount;
    pDrivers = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (driverCount && copy_src->pDrivers) {
        pDrivers = new DirectDriverLoadingInfoLUNARG[driverCount];
        for (uint32_t i = 0; i < driverCount; ++i) {
            pDrivers[i].initialize(&copy_src->pDrivers[i]);
        }
    }
}

PhysicalDeviceOpticalFlowFeaturesNV::PhysicalDeviceOpticalFlowFeaturesNV(const VkPhysicalDeviceOpticalFlowFeaturesNV* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), opticalFlow(in_struct->opticalFlow) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceOpticalFlowFeaturesNV::PhysicalDeviceOpticalFlowFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV), pNext(nullptr), opticalFlow() {}

PhysicalDeviceOpticalFlowFeaturesNV::PhysicalDeviceOpticalFlowFeaturesNV(const PhysicalDeviceOpticalFlowFeaturesNV& copy_src) {
    sType = copy_src.sType;
    opticalFlow = copy_src.opticalFlow;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceOpticalFlowFeaturesNV& PhysicalDeviceOpticalFlowFeaturesNV::operator=(
    const PhysicalDeviceOpticalFlowFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opticalFlow = copy_src.opticalFlow;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceOpticalFlowFeaturesNV::~PhysicalDeviceOpticalFlowFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceOpticalFlowFeaturesNV::initialize(const VkPhysicalDeviceOpticalFlowFeaturesNV* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opticalFlow = in_struct->opticalFlow;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceOpticalFlowFeaturesNV::initialize(const PhysicalDeviceOpticalFlowFeaturesNV* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opticalFlow = copy_src->opticalFlow;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceOpticalFlowPropertiesNV::PhysicalDeviceOpticalFlowPropertiesNV(
    const VkPhysicalDeviceOpticalFlowPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      supportedOutputGridSizes(in_struct->supportedOutputGridSizes),
      supportedHintGridSizes(in_struct->supportedHintGridSizes),
      hintSupported(in_struct->hintSupported),
      costSupported(in_struct->costSupported),
      bidirectionalFlowSupported(in_struct->bidirectionalFlowSupported),
      globalFlowSupported(in_struct->globalFlowSupported),
      minWidth(in_struct->minWidth),
      minHeight(in_struct->minHeight),
      maxWidth(in_struct->maxWidth),
      maxHeight(in_struct->maxHeight),
      maxNumRegionsOfInterest(in_struct->maxNumRegionsOfInterest) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceOpticalFlowPropertiesNV::PhysicalDeviceOpticalFlowPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV),
      pNext(nullptr),
      supportedOutputGridSizes(),
      supportedHintGridSizes(),
      hintSupported(),
      costSupported(),
      bidirectionalFlowSupported(),
      globalFlowSupported(),
      minWidth(),
      minHeight(),
      maxWidth(),
      maxHeight(),
      maxNumRegionsOfInterest() {}

PhysicalDeviceOpticalFlowPropertiesNV::PhysicalDeviceOpticalFlowPropertiesNV(
    const PhysicalDeviceOpticalFlowPropertiesNV& copy_src) {
    sType = copy_src.sType;
    supportedOutputGridSizes = copy_src.supportedOutputGridSizes;
    supportedHintGridSizes = copy_src.supportedHintGridSizes;
    hintSupported = copy_src.hintSupported;
    costSupported = copy_src.costSupported;
    bidirectionalFlowSupported = copy_src.bidirectionalFlowSupported;
    globalFlowSupported = copy_src.globalFlowSupported;
    minWidth = copy_src.minWidth;
    minHeight = copy_src.minHeight;
    maxWidth = copy_src.maxWidth;
    maxHeight = copy_src.maxHeight;
    maxNumRegionsOfInterest = copy_src.maxNumRegionsOfInterest;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceOpticalFlowPropertiesNV& PhysicalDeviceOpticalFlowPropertiesNV::operator=(
    const PhysicalDeviceOpticalFlowPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportedOutputGridSizes = copy_src.supportedOutputGridSizes;
    supportedHintGridSizes = copy_src.supportedHintGridSizes;
    hintSupported = copy_src.hintSupported;
    costSupported = copy_src.costSupported;
    bidirectionalFlowSupported = copy_src.bidirectionalFlowSupported;
    globalFlowSupported = copy_src.globalFlowSupported;
    minWidth = copy_src.minWidth;
    minHeight = copy_src.minHeight;
    maxWidth = copy_src.maxWidth;
    maxHeight = copy_src.maxHeight;
    maxNumRegionsOfInterest = copy_src.maxNumRegionsOfInterest;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceOpticalFlowPropertiesNV::~PhysicalDeviceOpticalFlowPropertiesNV() { FreePnextChain(pNext); }

void PhysicalDeviceOpticalFlowPropertiesNV::initialize(const VkPhysicalDeviceOpticalFlowPropertiesNV* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportedOutputGridSizes = in_struct->supportedOutputGridSizes;
    supportedHintGridSizes = in_struct->supportedHintGridSizes;
    hintSupported = in_struct->hintSupported;
    costSupported = in_struct->costSupported;
    bidirectionalFlowSupported = in_struct->bidirectionalFlowSupported;
    globalFlowSupported = in_struct->globalFlowSupported;
    minWidth = in_struct->minWidth;
    minHeight = in_struct->minHeight;
    maxWidth = in_struct->maxWidth;
    maxHeight = in_struct->maxHeight;
    maxNumRegionsOfInterest = in_struct->maxNumRegionsOfInterest;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceOpticalFlowPropertiesNV::initialize(const PhysicalDeviceOpticalFlowPropertiesNV* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedOutputGridSizes = copy_src->supportedOutputGridSizes;
    supportedHintGridSizes = copy_src->supportedHintGridSizes;
    hintSupported = copy_src->hintSupported;
    costSupported = copy_src->costSupported;
    bidirectionalFlowSupported = copy_src->bidirectionalFlowSupported;
    globalFlowSupported = copy_src->globalFlowSupported;
    minWidth = copy_src->minWidth;
    minHeight = copy_src->minHeight;
    maxWidth = copy_src->maxWidth;
    maxHeight = copy_src->maxHeight;
    maxNumRegionsOfInterest = copy_src->maxNumRegionsOfInterest;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpticalFlowImageFormatInfoNV::OpticalFlowImageFormatInfoNV(const VkOpticalFlowImageFormatInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OpticalFlowImageFormatInfoNV::OpticalFlowImageFormatInfoNV()
    : sType(VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV), pNext(nullptr), usage() {}

OpticalFlowImageFormatInfoNV::OpticalFlowImageFormatInfoNV(const OpticalFlowImageFormatInfoNV& copy_src) {
    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

OpticalFlowImageFormatInfoNV& OpticalFlowImageFormatInfoNV::operator=(const OpticalFlowImageFormatInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OpticalFlowImageFormatInfoNV::~OpticalFlowImageFormatInfoNV() { FreePnextChain(pNext); }

void OpticalFlowImageFormatInfoNV::initialize(const VkOpticalFlowImageFormatInfoNV* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OpticalFlowImageFormatInfoNV::initialize(const OpticalFlowImageFormatInfoNV* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpticalFlowImageFormatPropertiesNV::OpticalFlowImageFormatPropertiesNV(const VkOpticalFlowImageFormatPropertiesNV* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), format(in_struct->format) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OpticalFlowImageFormatPropertiesNV::OpticalFlowImageFormatPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV), pNext(nullptr), format() {}

OpticalFlowImageFormatPropertiesNV::OpticalFlowImageFormatPropertiesNV(const OpticalFlowImageFormatPropertiesNV& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);
}

OpticalFlowImageFormatPropertiesNV& OpticalFlowImageFormatPropertiesNV::operator=(
    const OpticalFlowImageFormatPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OpticalFlowImageFormatPropertiesNV::~OpticalFlowImageFormatPropertiesNV() { FreePnextChain(pNext); }

void OpticalFlowImageFormatPropertiesNV::initialize(const VkOpticalFlowImageFormatPropertiesNV* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OpticalFlowImageFormatPropertiesNV::initialize(const OpticalFlowImageFormatPropertiesNV* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpticalFlowSessionCreateInfoNV::OpticalFlowSessionCreateInfoNV(const VkOpticalFlowSessionCreateInfoNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      width(in_struct->width),
      height(in_struct->height),
      imageFormat(in_struct->imageFormat),
      flowVectorFormat(in_struct->flowVectorFormat),
      costFormat(in_struct->costFormat),
      outputGridSize(in_struct->outputGridSize),
      hintGridSize(in_struct->hintGridSize),
      performanceLevel(in_struct->performanceLevel),
      flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OpticalFlowSessionCreateInfoNV::OpticalFlowSessionCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV),
      pNext(nullptr),
      width(),
      height(),
      imageFormat(),
      flowVectorFormat(),
      costFormat(),
      outputGridSize(),
      hintGridSize(),
      performanceLevel(),
      flags() {}

OpticalFlowSessionCreateInfoNV::OpticalFlowSessionCreateInfoNV(const OpticalFlowSessionCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    width = copy_src.width;
    height = copy_src.height;
    imageFormat = copy_src.imageFormat;
    flowVectorFormat = copy_src.flowVectorFormat;
    costFormat = copy_src.costFormat;
    outputGridSize = copy_src.outputGridSize;
    hintGridSize = copy_src.hintGridSize;
    performanceLevel = copy_src.performanceLevel;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

OpticalFlowSessionCreateInfoNV& OpticalFlowSessionCreateInfoNV::operator=(const OpticalFlowSessionCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    width = copy_src.width;
    height = copy_src.height;
    imageFormat = copy_src.imageFormat;
    flowVectorFormat = copy_src.flowVectorFormat;
    costFormat = copy_src.costFormat;
    outputGridSize = copy_src.outputGridSize;
    hintGridSize = copy_src.hintGridSize;
    performanceLevel = copy_src.performanceLevel;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OpticalFlowSessionCreateInfoNV::~OpticalFlowSessionCreateInfoNV() { FreePnextChain(pNext); }

void OpticalFlowSessionCreateInfoNV::initialize(const VkOpticalFlowSessionCreateInfoNV* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    width = in_struct->width;
    height = in_struct->height;
    imageFormat = in_struct->imageFormat;
    flowVectorFormat = in_struct->flowVectorFormat;
    costFormat = in_struct->costFormat;
    outputGridSize = in_struct->outputGridSize;
    hintGridSize = in_struct->hintGridSize;
    performanceLevel = in_struct->performanceLevel;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OpticalFlowSessionCreateInfoNV::initialize(const OpticalFlowSessionCreateInfoNV* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    width = copy_src->width;
    height = copy_src->height;
    imageFormat = copy_src->imageFormat;
    flowVectorFormat = copy_src->flowVectorFormat;
    costFormat = copy_src->costFormat;
    outputGridSize = copy_src->outputGridSize;
    hintGridSize = copy_src->hintGridSize;
    performanceLevel = copy_src->performanceLevel;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpticalFlowSessionCreatePrivateDataInfoNV::OpticalFlowSessionCreatePrivateDataInfoNV(
    const VkOpticalFlowSessionCreatePrivateDataInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), id(in_struct->id), size(in_struct->size), pPrivateData(in_struct->pPrivateData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OpticalFlowSessionCreatePrivateDataInfoNV::OpticalFlowSessionCreatePrivateDataInfoNV()
    : sType(VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV),
      pNext(nullptr),
      id(),
      size(),
      pPrivateData(nullptr) {}

OpticalFlowSessionCreatePrivateDataInfoNV::OpticalFlowSessionCreatePrivateDataInfoNV(
    const OpticalFlowSessionCreatePrivateDataInfoNV& copy_src) {
    sType = copy_src.sType;
    id = copy_src.id;
    size = copy_src.size;
    pPrivateData = copy_src.pPrivateData;
    pNext = SafePnextCopy(copy_src.pNext);
}

OpticalFlowSessionCreatePrivateDataInfoNV& OpticalFlowSessionCreatePrivateDataInfoNV::operator=(
    const OpticalFlowSessionCreatePrivateDataInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    id = copy_src.id;
    size = copy_src.size;
    pPrivateData = copy_src.pPrivateData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OpticalFlowSessionCreatePrivateDataInfoNV::~OpticalFlowSessionCreatePrivateDataInfoNV() { FreePnextChain(pNext); }

void OpticalFlowSessionCreatePrivateDataInfoNV::initialize(const VkOpticalFlowSessionCreatePrivateDataInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    id = in_struct->id;
    size = in_struct->size;
    pPrivateData = in_struct->pPrivateData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OpticalFlowSessionCreatePrivateDataInfoNV::initialize(const OpticalFlowSessionCreatePrivateDataInfoNV* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    id = copy_src->id;
    size = copy_src->size;
    pPrivateData = copy_src->pPrivateData;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpticalFlowExecuteInfoNV::OpticalFlowExecuteInfoNV(const VkOpticalFlowExecuteInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), regionCount(in_struct->regionCount), pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pRegions) {
        pRegions = new VkRect2D[in_struct->regionCount];
        memcpy((void*)pRegions, (void*)in_struct->pRegions, sizeof(VkRect2D) * in_struct->regionCount);
    }
}

OpticalFlowExecuteInfoNV::OpticalFlowExecuteInfoNV()
    : sType(VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV), pNext(nullptr), flags(), regionCount(), pRegions(nullptr) {}

OpticalFlowExecuteInfoNV::OpticalFlowExecuteInfoNV(const OpticalFlowExecuteInfoNV& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pRegions) {
        pRegions = new VkRect2D[copy_src.regionCount];
        memcpy((void*)pRegions, (void*)copy_src.pRegions, sizeof(VkRect2D) * copy_src.regionCount);
    }
}

OpticalFlowExecuteInfoNV& OpticalFlowExecuteInfoNV::operator=(const OpticalFlowExecuteInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pRegions) {
        pRegions = new VkRect2D[copy_src.regionCount];
        memcpy((void*)pRegions, (void*)copy_src.pRegions, sizeof(VkRect2D) * copy_src.regionCount);
    }

    return *this;
}

OpticalFlowExecuteInfoNV::~OpticalFlowExecuteInfoNV() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void OpticalFlowExecuteInfoNV::initialize(const VkOpticalFlowExecuteInfoNV* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pRegions) {
        pRegions = new VkRect2D[in_struct->regionCount];
        memcpy((void*)pRegions, (void*)in_struct->pRegions, sizeof(VkRect2D) * in_struct->regionCount);
    }
}

void OpticalFlowExecuteInfoNV::initialize(const OpticalFlowExecuteInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pRegions) {
        pRegions = new VkRect2D[copy_src->regionCount];
        memcpy((void*)pRegions, (void*)copy_src->pRegions, sizeof(VkRect2D) * copy_src->regionCount);
    }
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR

PhysicalDeviceExternalFormatResolveFeaturesANDROID::PhysicalDeviceExternalFormatResolveFeaturesANDROID(
    const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), externalFormatResolve(in_struct->externalFormatResolve) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalFormatResolveFeaturesANDROID::PhysicalDeviceExternalFormatResolveFeaturesANDROID()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID), pNext(nullptr), externalFormatResolve() {}

PhysicalDeviceExternalFormatResolveFeaturesANDROID::PhysicalDeviceExternalFormatResolveFeaturesANDROID(
    const PhysicalDeviceExternalFormatResolveFeaturesANDROID& copy_src) {
    sType = copy_src.sType;
    externalFormatResolve = copy_src.externalFormatResolve;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalFormatResolveFeaturesANDROID& PhysicalDeviceExternalFormatResolveFeaturesANDROID::operator=(
    const PhysicalDeviceExternalFormatResolveFeaturesANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalFormatResolve = copy_src.externalFormatResolve;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalFormatResolveFeaturesANDROID::~PhysicalDeviceExternalFormatResolveFeaturesANDROID() { FreePnextChain(pNext); }

void PhysicalDeviceExternalFormatResolveFeaturesANDROID::initialize(
    const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalFormatResolve = in_struct->externalFormatResolve;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalFormatResolveFeaturesANDROID::initialize(
    const PhysicalDeviceExternalFormatResolveFeaturesANDROID* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalFormatResolve = copy_src->externalFormatResolve;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalFormatResolvePropertiesANDROID::PhysicalDeviceExternalFormatResolvePropertiesANDROID(
    const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      nullColorAttachmentWithExternalFormatResolve(in_struct->nullColorAttachmentWithExternalFormatResolve),
      externalFormatResolveChromaOffsetX(in_struct->externalFormatResolveChromaOffsetX),
      externalFormatResolveChromaOffsetY(in_struct->externalFormatResolveChromaOffsetY) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalFormatResolvePropertiesANDROID::PhysicalDeviceExternalFormatResolvePropertiesANDROID()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID),
      pNext(nullptr),
      nullColorAttachmentWithExternalFormatResolve(),
      externalFormatResolveChromaOffsetX(),
      externalFormatResolveChromaOffsetY() {}

PhysicalDeviceExternalFormatResolvePropertiesANDROID::PhysicalDeviceExternalFormatResolvePropertiesANDROID(
    const PhysicalDeviceExternalFormatResolvePropertiesANDROID& copy_src) {
    sType = copy_src.sType;
    nullColorAttachmentWithExternalFormatResolve = copy_src.nullColorAttachmentWithExternalFormatResolve;
    externalFormatResolveChromaOffsetX = copy_src.externalFormatResolveChromaOffsetX;
    externalFormatResolveChromaOffsetY = copy_src.externalFormatResolveChromaOffsetY;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalFormatResolvePropertiesANDROID& PhysicalDeviceExternalFormatResolvePropertiesANDROID::operator=(
    const PhysicalDeviceExternalFormatResolvePropertiesANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    nullColorAttachmentWithExternalFormatResolve = copy_src.nullColorAttachmentWithExternalFormatResolve;
    externalFormatResolveChromaOffsetX = copy_src.externalFormatResolveChromaOffsetX;
    externalFormatResolveChromaOffsetY = copy_src.externalFormatResolveChromaOffsetY;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalFormatResolvePropertiesANDROID::~PhysicalDeviceExternalFormatResolvePropertiesANDROID() {
    FreePnextChain(pNext);
}

void PhysicalDeviceExternalFormatResolvePropertiesANDROID::initialize(
    const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    nullColorAttachmentWithExternalFormatResolve = in_struct->nullColorAttachmentWithExternalFormatResolve;
    externalFormatResolveChromaOffsetX = in_struct->externalFormatResolveChromaOffsetX;
    externalFormatResolveChromaOffsetY = in_struct->externalFormatResolveChromaOffsetY;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalFormatResolvePropertiesANDROID::initialize(
    const PhysicalDeviceExternalFormatResolvePropertiesANDROID* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    nullColorAttachmentWithExternalFormatResolve = copy_src->nullColorAttachmentWithExternalFormatResolve;
    externalFormatResolveChromaOffsetX = copy_src->externalFormatResolveChromaOffsetX;
    externalFormatResolveChromaOffsetY = copy_src->externalFormatResolveChromaOffsetY;
    pNext = SafePnextCopy(copy_src->pNext);
}

AndroidHardwareBufferFormatResolvePropertiesANDROID::AndroidHardwareBufferFormatResolvePropertiesANDROID(
    const VkAndroidHardwareBufferFormatResolvePropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), colorAttachmentFormat(in_struct->colorAttachmentFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AndroidHardwareBufferFormatResolvePropertiesANDROID::AndroidHardwareBufferFormatResolvePropertiesANDROID()
    : sType(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID), pNext(nullptr), colorAttachmentFormat() {}

AndroidHardwareBufferFormatResolvePropertiesANDROID::AndroidHardwareBufferFormatResolvePropertiesANDROID(
    const AndroidHardwareBufferFormatResolvePropertiesANDROID& copy_src) {
    sType = copy_src.sType;
    colorAttachmentFormat = copy_src.colorAttachmentFormat;
    pNext = SafePnextCopy(copy_src.pNext);
}

AndroidHardwareBufferFormatResolvePropertiesANDROID& AndroidHardwareBufferFormatResolvePropertiesANDROID::operator=(
    const AndroidHardwareBufferFormatResolvePropertiesANDROID& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorAttachmentFormat = copy_src.colorAttachmentFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AndroidHardwareBufferFormatResolvePropertiesANDROID::~AndroidHardwareBufferFormatResolvePropertiesANDROID() {
    FreePnextChain(pNext);
}

void AndroidHardwareBufferFormatResolvePropertiesANDROID::initialize(
    const VkAndroidHardwareBufferFormatResolvePropertiesANDROID* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorAttachmentFormat = in_struct->colorAttachmentFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AndroidHardwareBufferFormatResolvePropertiesANDROID::initialize(
    const AndroidHardwareBufferFormatResolvePropertiesANDROID* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorAttachmentFormat = copy_src->colorAttachmentFormat;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR

PhysicalDeviceTilePropertiesFeaturesQCOM::PhysicalDeviceTilePropertiesFeaturesQCOM(
    const VkPhysicalDeviceTilePropertiesFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), tileProperties(in_struct->tileProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTilePropertiesFeaturesQCOM::PhysicalDeviceTilePropertiesFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM), pNext(nullptr), tileProperties() {}

PhysicalDeviceTilePropertiesFeaturesQCOM::PhysicalDeviceTilePropertiesFeaturesQCOM(
    const PhysicalDeviceTilePropertiesFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    tileProperties = copy_src.tileProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTilePropertiesFeaturesQCOM& PhysicalDeviceTilePropertiesFeaturesQCOM::operator=(
    const PhysicalDeviceTilePropertiesFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    tileProperties = copy_src.tileProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTilePropertiesFeaturesQCOM::~PhysicalDeviceTilePropertiesFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceTilePropertiesFeaturesQCOM::initialize(const VkPhysicalDeviceTilePropertiesFeaturesQCOM* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    tileProperties = in_struct->tileProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTilePropertiesFeaturesQCOM::initialize(const PhysicalDeviceTilePropertiesFeaturesQCOM* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    tileProperties = copy_src->tileProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

TilePropertiesQCOM::TilePropertiesQCOM(const VkTilePropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), tileSize(in_struct->tileSize), apronSize(in_struct->apronSize), origin(in_struct->origin) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

TilePropertiesQCOM::TilePropertiesQCOM()
    : sType(VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM), pNext(nullptr), tileSize(), apronSize(), origin() {}

TilePropertiesQCOM::TilePropertiesQCOM(const TilePropertiesQCOM& copy_src) {
    sType = copy_src.sType;
    tileSize = copy_src.tileSize;
    apronSize = copy_src.apronSize;
    origin = copy_src.origin;
    pNext = SafePnextCopy(copy_src.pNext);
}

TilePropertiesQCOM& TilePropertiesQCOM::operator=(const TilePropertiesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    tileSize = copy_src.tileSize;
    apronSize = copy_src.apronSize;
    origin = copy_src.origin;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

TilePropertiesQCOM::~TilePropertiesQCOM() { FreePnextChain(pNext); }

void TilePropertiesQCOM::initialize(const VkTilePropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    tileSize = in_struct->tileSize;
    apronSize = in_struct->apronSize;
    origin = in_struct->origin;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void TilePropertiesQCOM::initialize(const TilePropertiesQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    tileSize = copy_src->tileSize;
    apronSize = copy_src->apronSize;
    origin = copy_src->origin;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceAmigoProfilingFeaturesSEC::PhysicalDeviceAmigoProfilingFeaturesSEC(
    const VkPhysicalDeviceAmigoProfilingFeaturesSEC* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), amigoProfiling(in_struct->amigoProfiling) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAmigoProfilingFeaturesSEC::PhysicalDeviceAmigoProfilingFeaturesSEC()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC), pNext(nullptr), amigoProfiling() {}

PhysicalDeviceAmigoProfilingFeaturesSEC::PhysicalDeviceAmigoProfilingFeaturesSEC(
    const PhysicalDeviceAmigoProfilingFeaturesSEC& copy_src) {
    sType = copy_src.sType;
    amigoProfiling = copy_src.amigoProfiling;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAmigoProfilingFeaturesSEC& PhysicalDeviceAmigoProfilingFeaturesSEC::operator=(
    const PhysicalDeviceAmigoProfilingFeaturesSEC& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    amigoProfiling = copy_src.amigoProfiling;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAmigoProfilingFeaturesSEC::~PhysicalDeviceAmigoProfilingFeaturesSEC() { FreePnextChain(pNext); }

void PhysicalDeviceAmigoProfilingFeaturesSEC::initialize(const VkPhysicalDeviceAmigoProfilingFeaturesSEC* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    amigoProfiling = in_struct->amigoProfiling;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAmigoProfilingFeaturesSEC::initialize(const PhysicalDeviceAmigoProfilingFeaturesSEC* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    amigoProfiling = copy_src->amigoProfiling;
    pNext = SafePnextCopy(copy_src->pNext);
}

AmigoProfilingSubmitInfoSEC::AmigoProfilingSubmitInfoSEC(const VkAmigoProfilingSubmitInfoSEC* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      firstDrawTimestamp(in_struct->firstDrawTimestamp),
      swapBufferTimestamp(in_struct->swapBufferTimestamp) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AmigoProfilingSubmitInfoSEC::AmigoProfilingSubmitInfoSEC()
    : sType(VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC), pNext(nullptr), firstDrawTimestamp(), swapBufferTimestamp() {}

AmigoProfilingSubmitInfoSEC::AmigoProfilingSubmitInfoSEC(const AmigoProfilingSubmitInfoSEC& copy_src) {
    sType = copy_src.sType;
    firstDrawTimestamp = copy_src.firstDrawTimestamp;
    swapBufferTimestamp = copy_src.swapBufferTimestamp;
    pNext = SafePnextCopy(copy_src.pNext);
}

AmigoProfilingSubmitInfoSEC& AmigoProfilingSubmitInfoSEC::operator=(const AmigoProfilingSubmitInfoSEC& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    firstDrawTimestamp = copy_src.firstDrawTimestamp;
    swapBufferTimestamp = copy_src.swapBufferTimestamp;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AmigoProfilingSubmitInfoSEC::~AmigoProfilingSubmitInfoSEC() { FreePnextChain(pNext); }

void AmigoProfilingSubmitInfoSEC::initialize(const VkAmigoProfilingSubmitInfoSEC* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    firstDrawTimestamp = in_struct->firstDrawTimestamp;
    swapBufferTimestamp = in_struct->swapBufferTimestamp;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AmigoProfilingSubmitInfoSEC::initialize(const AmigoProfilingSubmitInfoSEC* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    firstDrawTimestamp = copy_src->firstDrawTimestamp;
    swapBufferTimestamp = copy_src->swapBufferTimestamp;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(
    const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), multiviewPerViewViewports(in_struct->multiviewPerViewViewports) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM),
      pNext(nullptr),
      multiviewPerViewViewports() {}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(
    const PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    multiviewPerViewViewports = copy_src.multiviewPerViewViewports;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM& PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::operator=(
    const PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multiviewPerViewViewports = copy_src.multiviewPerViewViewports;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::~PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM() {
    FreePnextChain(pNext);
}

void PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::initialize(
    const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multiviewPerViewViewports = in_struct->multiviewPerViewViewports;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::initialize(
    const PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multiviewPerViewViewports = copy_src->multiviewPerViewViewports;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::PhysicalDeviceRayTracingInvocationReorderPropertiesNV(
    const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), rayTracingInvocationReorderReorderingHint(in_struct->rayTracingInvocationReorderReorderingHint) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::PhysicalDeviceRayTracingInvocationReorderPropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV),
      pNext(nullptr),
      rayTracingInvocationReorderReorderingHint() {}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::PhysicalDeviceRayTracingInvocationReorderPropertiesNV(
    const PhysicalDeviceRayTracingInvocationReorderPropertiesNV& copy_src) {
    sType = copy_src.sType;
    rayTracingInvocationReorderReorderingHint = copy_src.rayTracingInvocationReorderReorderingHint;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV& PhysicalDeviceRayTracingInvocationReorderPropertiesNV::operator=(
    const PhysicalDeviceRayTracingInvocationReorderPropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingInvocationReorderReorderingHint = copy_src.rayTracingInvocationReorderReorderingHint;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::~PhysicalDeviceRayTracingInvocationReorderPropertiesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceRayTracingInvocationReorderPropertiesNV::initialize(
    const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingInvocationReorderReorderingHint = in_struct->rayTracingInvocationReorderReorderingHint;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingInvocationReorderPropertiesNV::initialize(
    const PhysicalDeviceRayTracingInvocationReorderPropertiesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingInvocationReorderReorderingHint = copy_src->rayTracingInvocationReorderReorderingHint;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::PhysicalDeviceRayTracingInvocationReorderFeaturesNV(
    const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), rayTracingInvocationReorder(in_struct->rayTracingInvocationReorder) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::PhysicalDeviceRayTracingInvocationReorderFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV),
      pNext(nullptr),
      rayTracingInvocationReorder() {}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::PhysicalDeviceRayTracingInvocationReorderFeaturesNV(
    const PhysicalDeviceRayTracingInvocationReorderFeaturesNV& copy_src) {
    sType = copy_src.sType;
    rayTracingInvocationReorder = copy_src.rayTracingInvocationReorder;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV& PhysicalDeviceRayTracingInvocationReorderFeaturesNV::operator=(
    const PhysicalDeviceRayTracingInvocationReorderFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingInvocationReorder = copy_src.rayTracingInvocationReorder;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::~PhysicalDeviceRayTracingInvocationReorderFeaturesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceRayTracingInvocationReorderFeaturesNV::initialize(
    const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingInvocationReorder = in_struct->rayTracingInvocationReorder;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingInvocationReorderFeaturesNV::initialize(
    const PhysicalDeviceRayTracingInvocationReorderFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingInvocationReorder = copy_src->rayTracingInvocationReorder;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(
    const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), extendedSparseAddressSpace(in_struct->extendedSparseAddressSpace) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV),
      pNext(nullptr),
      extendedSparseAddressSpace() {}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(
    const PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV& copy_src) {
    sType = copy_src.sType;
    extendedSparseAddressSpace = copy_src.extendedSparseAddressSpace;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV& PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::operator=(
    const PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    extendedSparseAddressSpace = copy_src.extendedSparseAddressSpace;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::~PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::initialize(
    const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    extendedSparseAddressSpace = in_struct->extendedSparseAddressSpace;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::initialize(
    const PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    extendedSparseAddressSpace = copy_src->extendedSparseAddressSpace;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::PhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
    const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      extendedSparseAddressSpaceSize(in_struct->extendedSparseAddressSpaceSize),
      extendedSparseImageUsageFlags(in_struct->extendedSparseImageUsageFlags),
      extendedSparseBufferUsageFlags(in_struct->extendedSparseBufferUsageFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::PhysicalDeviceExtendedSparseAddressSpacePropertiesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV),
      pNext(nullptr),
      extendedSparseAddressSpaceSize(),
      extendedSparseImageUsageFlags(),
      extendedSparseBufferUsageFlags() {}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::PhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
    const PhysicalDeviceExtendedSparseAddressSpacePropertiesNV& copy_src) {
    sType = copy_src.sType;
    extendedSparseAddressSpaceSize = copy_src.extendedSparseAddressSpaceSize;
    extendedSparseImageUsageFlags = copy_src.extendedSparseImageUsageFlags;
    extendedSparseBufferUsageFlags = copy_src.extendedSparseBufferUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV& PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::operator=(
    const PhysicalDeviceExtendedSparseAddressSpacePropertiesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    extendedSparseAddressSpaceSize = copy_src.extendedSparseAddressSpaceSize;
    extendedSparseImageUsageFlags = copy_src.extendedSparseImageUsageFlags;
    extendedSparseBufferUsageFlags = copy_src.extendedSparseBufferUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::~PhysicalDeviceExtendedSparseAddressSpacePropertiesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::initialize(
    const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    extendedSparseAddressSpaceSize = in_struct->extendedSparseAddressSpaceSize;
    extendedSparseImageUsageFlags = in_struct->extendedSparseImageUsageFlags;
    extendedSparseBufferUsageFlags = in_struct->extendedSparseBufferUsageFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::initialize(
    const PhysicalDeviceExtendedSparseAddressSpacePropertiesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    extendedSparseAddressSpaceSize = copy_src->extendedSparseAddressSpaceSize;
    extendedSparseImageUsageFlags = copy_src->extendedSparseImageUsageFlags;
    extendedSparseBufferUsageFlags = copy_src->extendedSparseBufferUsageFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::PhysicalDeviceShaderCoreBuiltinsFeaturesARM(
    const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderCoreBuiltins(in_struct->shaderCoreBuiltins) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::PhysicalDeviceShaderCoreBuiltinsFeaturesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM), pNext(nullptr), shaderCoreBuiltins() {}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::PhysicalDeviceShaderCoreBuiltinsFeaturesARM(
    const PhysicalDeviceShaderCoreBuiltinsFeaturesARM& copy_src) {
    sType = copy_src.sType;
    shaderCoreBuiltins = copy_src.shaderCoreBuiltins;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM& PhysicalDeviceShaderCoreBuiltinsFeaturesARM::operator=(
    const PhysicalDeviceShaderCoreBuiltinsFeaturesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderCoreBuiltins = copy_src.shaderCoreBuiltins;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::~PhysicalDeviceShaderCoreBuiltinsFeaturesARM() { FreePnextChain(pNext); }

void PhysicalDeviceShaderCoreBuiltinsFeaturesARM::initialize(const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderCoreBuiltins = in_struct->shaderCoreBuiltins;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderCoreBuiltinsFeaturesARM::initialize(const PhysicalDeviceShaderCoreBuiltinsFeaturesARM* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderCoreBuiltins = copy_src->shaderCoreBuiltins;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::PhysicalDeviceShaderCoreBuiltinsPropertiesARM(
    const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderCoreMask(in_struct->shaderCoreMask),
      shaderCoreCount(in_struct->shaderCoreCount),
      shaderWarpsPerCore(in_struct->shaderWarpsPerCore) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::PhysicalDeviceShaderCoreBuiltinsPropertiesARM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM),
      pNext(nullptr),
      shaderCoreMask(),
      shaderCoreCount(),
      shaderWarpsPerCore() {}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::PhysicalDeviceShaderCoreBuiltinsPropertiesARM(
    const PhysicalDeviceShaderCoreBuiltinsPropertiesARM& copy_src) {
    sType = copy_src.sType;
    shaderCoreMask = copy_src.shaderCoreMask;
    shaderCoreCount = copy_src.shaderCoreCount;
    shaderWarpsPerCore = copy_src.shaderWarpsPerCore;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM& PhysicalDeviceShaderCoreBuiltinsPropertiesARM::operator=(
    const PhysicalDeviceShaderCoreBuiltinsPropertiesARM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderCoreMask = copy_src.shaderCoreMask;
    shaderCoreCount = copy_src.shaderCoreCount;
    shaderWarpsPerCore = copy_src.shaderWarpsPerCore;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::~PhysicalDeviceShaderCoreBuiltinsPropertiesARM() { FreePnextChain(pNext); }

void PhysicalDeviceShaderCoreBuiltinsPropertiesARM::initialize(const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderCoreMask = in_struct->shaderCoreMask;
    shaderCoreCount = in_struct->shaderCoreCount;
    shaderWarpsPerCore = in_struct->shaderWarpsPerCore;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderCoreBuiltinsPropertiesARM::initialize(const PhysicalDeviceShaderCoreBuiltinsPropertiesARM* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderCoreMask = copy_src->shaderCoreMask;
    shaderCoreCount = copy_src->shaderCoreCount;
    shaderWarpsPerCore = copy_src->shaderWarpsPerCore;
    pNext = SafePnextCopy(copy_src->pNext);
}

LatencySleepModeInfoNV::LatencySleepModeInfoNV(const VkLatencySleepModeInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      lowLatencyMode(in_struct->lowLatencyMode),
      lowLatencyBoost(in_struct->lowLatencyBoost),
      minimumIntervalUs(in_struct->minimumIntervalUs) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

LatencySleepModeInfoNV::LatencySleepModeInfoNV()
    : sType(VK_STRUCTURE_TYPE_LATENCY_SLEEP_MODE_INFO_NV),
      pNext(nullptr),
      lowLatencyMode(),
      lowLatencyBoost(),
      minimumIntervalUs() {}

LatencySleepModeInfoNV::LatencySleepModeInfoNV(const LatencySleepModeInfoNV& copy_src) {
    sType = copy_src.sType;
    lowLatencyMode = copy_src.lowLatencyMode;
    lowLatencyBoost = copy_src.lowLatencyBoost;
    minimumIntervalUs = copy_src.minimumIntervalUs;
    pNext = SafePnextCopy(copy_src.pNext);
}

LatencySleepModeInfoNV& LatencySleepModeInfoNV::operator=(const LatencySleepModeInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    lowLatencyMode = copy_src.lowLatencyMode;
    lowLatencyBoost = copy_src.lowLatencyBoost;
    minimumIntervalUs = copy_src.minimumIntervalUs;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

LatencySleepModeInfoNV::~LatencySleepModeInfoNV() { FreePnextChain(pNext); }

void LatencySleepModeInfoNV::initialize(const VkLatencySleepModeInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    lowLatencyMode = in_struct->lowLatencyMode;
    lowLatencyBoost = in_struct->lowLatencyBoost;
    minimumIntervalUs = in_struct->minimumIntervalUs;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void LatencySleepModeInfoNV::initialize(const LatencySleepModeInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    lowLatencyMode = copy_src->lowLatencyMode;
    lowLatencyBoost = copy_src->lowLatencyBoost;
    minimumIntervalUs = copy_src->minimumIntervalUs;
    pNext = SafePnextCopy(copy_src->pNext);
}

LatencySleepInfoNV::LatencySleepInfoNV(const VkLatencySleepInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), signalSemaphore(in_struct->signalSemaphore), value(in_struct->value) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

LatencySleepInfoNV::LatencySleepInfoNV()
    : sType(VK_STRUCTURE_TYPE_LATENCY_SLEEP_INFO_NV), pNext(nullptr), signalSemaphore(), value() {}

LatencySleepInfoNV::LatencySleepInfoNV(const LatencySleepInfoNV& copy_src) {
    sType = copy_src.sType;
    signalSemaphore = copy_src.signalSemaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);
}

LatencySleepInfoNV& LatencySleepInfoNV::operator=(const LatencySleepInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    signalSemaphore = copy_src.signalSemaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

LatencySleepInfoNV::~LatencySleepInfoNV() { FreePnextChain(pNext); }

void LatencySleepInfoNV::initialize(const VkLatencySleepInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    signalSemaphore = in_struct->signalSemaphore;
    value = in_struct->value;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void LatencySleepInfoNV::initialize(const LatencySleepInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    signalSemaphore = copy_src->signalSemaphore;
    value = copy_src->value;
    pNext = SafePnextCopy(copy_src->pNext);
}

SetLatencyMarkerInfoNV::SetLatencyMarkerInfoNV(const VkSetLatencyMarkerInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentID(in_struct->presentID), marker(in_struct->marker) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SetLatencyMarkerInfoNV::SetLatencyMarkerInfoNV()
    : sType(VK_STRUCTURE_TYPE_SET_LATENCY_MARKER_INFO_NV), pNext(nullptr), presentID(), marker() {}

SetLatencyMarkerInfoNV::SetLatencyMarkerInfoNV(const SetLatencyMarkerInfoNV& copy_src) {
    sType = copy_src.sType;
    presentID = copy_src.presentID;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);
}

SetLatencyMarkerInfoNV& SetLatencyMarkerInfoNV::operator=(const SetLatencyMarkerInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentID = copy_src.presentID;
    marker = copy_src.marker;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SetLatencyMarkerInfoNV::~SetLatencyMarkerInfoNV() { FreePnextChain(pNext); }

void SetLatencyMarkerInfoNV::initialize(const VkSetLatencyMarkerInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentID = in_struct->presentID;
    marker = in_struct->marker;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SetLatencyMarkerInfoNV::initialize(const SetLatencyMarkerInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentID = copy_src->presentID;
    marker = copy_src->marker;
    pNext = SafePnextCopy(copy_src->pNext);
}

LatencyTimingsFrameReportNV::LatencyTimingsFrameReportNV(const VkLatencyTimingsFrameReportNV* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      presentID(in_struct->presentID),
      inputSampleTimeUs(in_struct->inputSampleTimeUs),
      simStartTimeUs(in_struct->simStartTimeUs),
      simEndTimeUs(in_struct->simEndTimeUs),
      renderSubmitStartTimeUs(in_struct->renderSubmitStartTimeUs),
      renderSubmitEndTimeUs(in_struct->renderSubmitEndTimeUs),
      presentStartTimeUs(in_struct->presentStartTimeUs),
      presentEndTimeUs(in_struct->presentEndTimeUs),
      driverStartTimeUs(in_struct->driverStartTimeUs),
      driverEndTimeUs(in_struct->driverEndTimeUs),
      osRenderQueueStartTimeUs(in_struct->osRenderQueueStartTimeUs),
      osRenderQueueEndTimeUs(in_struct->osRenderQueueEndTimeUs),
      gpuRenderStartTimeUs(in_struct->gpuRenderStartTimeUs),
      gpuRenderEndTimeUs(in_struct->gpuRenderEndTimeUs) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

LatencyTimingsFrameReportNV::LatencyTimingsFrameReportNV()
    : sType(VK_STRUCTURE_TYPE_LATENCY_TIMINGS_FRAME_REPORT_NV),
      pNext(nullptr),
      presentID(),
      inputSampleTimeUs(),
      simStartTimeUs(),
      simEndTimeUs(),
      renderSubmitStartTimeUs(),
      renderSubmitEndTimeUs(),
      presentStartTimeUs(),
      presentEndTimeUs(),
      driverStartTimeUs(),
      driverEndTimeUs(),
      osRenderQueueStartTimeUs(),
      osRenderQueueEndTimeUs(),
      gpuRenderStartTimeUs(),
      gpuRenderEndTimeUs() {}

LatencyTimingsFrameReportNV::LatencyTimingsFrameReportNV(const LatencyTimingsFrameReportNV& copy_src) {
    sType = copy_src.sType;
    presentID = copy_src.presentID;
    inputSampleTimeUs = copy_src.inputSampleTimeUs;
    simStartTimeUs = copy_src.simStartTimeUs;
    simEndTimeUs = copy_src.simEndTimeUs;
    renderSubmitStartTimeUs = copy_src.renderSubmitStartTimeUs;
    renderSubmitEndTimeUs = copy_src.renderSubmitEndTimeUs;
    presentStartTimeUs = copy_src.presentStartTimeUs;
    presentEndTimeUs = copy_src.presentEndTimeUs;
    driverStartTimeUs = copy_src.driverStartTimeUs;
    driverEndTimeUs = copy_src.driverEndTimeUs;
    osRenderQueueStartTimeUs = copy_src.osRenderQueueStartTimeUs;
    osRenderQueueEndTimeUs = copy_src.osRenderQueueEndTimeUs;
    gpuRenderStartTimeUs = copy_src.gpuRenderStartTimeUs;
    gpuRenderEndTimeUs = copy_src.gpuRenderEndTimeUs;
    pNext = SafePnextCopy(copy_src.pNext);
}

LatencyTimingsFrameReportNV& LatencyTimingsFrameReportNV::operator=(const LatencyTimingsFrameReportNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentID = copy_src.presentID;
    inputSampleTimeUs = copy_src.inputSampleTimeUs;
    simStartTimeUs = copy_src.simStartTimeUs;
    simEndTimeUs = copy_src.simEndTimeUs;
    renderSubmitStartTimeUs = copy_src.renderSubmitStartTimeUs;
    renderSubmitEndTimeUs = copy_src.renderSubmitEndTimeUs;
    presentStartTimeUs = copy_src.presentStartTimeUs;
    presentEndTimeUs = copy_src.presentEndTimeUs;
    driverStartTimeUs = copy_src.driverStartTimeUs;
    driverEndTimeUs = copy_src.driverEndTimeUs;
    osRenderQueueStartTimeUs = copy_src.osRenderQueueStartTimeUs;
    osRenderQueueEndTimeUs = copy_src.osRenderQueueEndTimeUs;
    gpuRenderStartTimeUs = copy_src.gpuRenderStartTimeUs;
    gpuRenderEndTimeUs = copy_src.gpuRenderEndTimeUs;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

LatencyTimingsFrameReportNV::~LatencyTimingsFrameReportNV() { FreePnextChain(pNext); }

void LatencyTimingsFrameReportNV::initialize(const VkLatencyTimingsFrameReportNV* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentID = in_struct->presentID;
    inputSampleTimeUs = in_struct->inputSampleTimeUs;
    simStartTimeUs = in_struct->simStartTimeUs;
    simEndTimeUs = in_struct->simEndTimeUs;
    renderSubmitStartTimeUs = in_struct->renderSubmitStartTimeUs;
    renderSubmitEndTimeUs = in_struct->renderSubmitEndTimeUs;
    presentStartTimeUs = in_struct->presentStartTimeUs;
    presentEndTimeUs = in_struct->presentEndTimeUs;
    driverStartTimeUs = in_struct->driverStartTimeUs;
    driverEndTimeUs = in_struct->driverEndTimeUs;
    osRenderQueueStartTimeUs = in_struct->osRenderQueueStartTimeUs;
    osRenderQueueEndTimeUs = in_struct->osRenderQueueEndTimeUs;
    gpuRenderStartTimeUs = in_struct->gpuRenderStartTimeUs;
    gpuRenderEndTimeUs = in_struct->gpuRenderEndTimeUs;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void LatencyTimingsFrameReportNV::initialize(const LatencyTimingsFrameReportNV* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentID = copy_src->presentID;
    inputSampleTimeUs = copy_src->inputSampleTimeUs;
    simStartTimeUs = copy_src->simStartTimeUs;
    simEndTimeUs = copy_src->simEndTimeUs;
    renderSubmitStartTimeUs = copy_src->renderSubmitStartTimeUs;
    renderSubmitEndTimeUs = copy_src->renderSubmitEndTimeUs;
    presentStartTimeUs = copy_src->presentStartTimeUs;
    presentEndTimeUs = copy_src->presentEndTimeUs;
    driverStartTimeUs = copy_src->driverStartTimeUs;
    driverEndTimeUs = copy_src->driverEndTimeUs;
    osRenderQueueStartTimeUs = copy_src->osRenderQueueStartTimeUs;
    osRenderQueueEndTimeUs = copy_src->osRenderQueueEndTimeUs;
    gpuRenderStartTimeUs = copy_src->gpuRenderStartTimeUs;
    gpuRenderEndTimeUs = copy_src->gpuRenderEndTimeUs;
    pNext = SafePnextCopy(copy_src->pNext);
}

GetLatencyMarkerInfoNV::GetLatencyMarkerInfoNV(const VkGetLatencyMarkerInfoNV* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), timingCount(in_struct->timingCount), pTimings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (timingCount && in_struct->pTimings) {
        pTimings = new LatencyTimingsFrameReportNV[timingCount];
        for (uint32_t i = 0; i < timingCount; ++i) {
            pTimings[i].initialize(&in_struct->pTimings[i]);
        }
    }
}

GetLatencyMarkerInfoNV::GetLatencyMarkerInfoNV()
    : sType(VK_STRUCTURE_TYPE_GET_LATENCY_MARKER_INFO_NV), pNext(nullptr), timingCount(), pTimings(nullptr) {}

GetLatencyMarkerInfoNV::GetLatencyMarkerInfoNV(const GetLatencyMarkerInfoNV& copy_src) {
    sType = copy_src.sType;
    timingCount = copy_src.timingCount;
    pTimings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (timingCount && copy_src.pTimings) {
        pTimings = new LatencyTimingsFrameReportNV[timingCount];
        for (uint32_t i = 0; i < timingCount; ++i) {
            pTimings[i].initialize(&copy_src.pTimings[i]);
        }
    }
}

GetLatencyMarkerInfoNV& GetLatencyMarkerInfoNV::operator=(const GetLatencyMarkerInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pTimings) delete[] pTimings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    timingCount = copy_src.timingCount;
    pTimings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (timingCount && copy_src.pTimings) {
        pTimings = new LatencyTimingsFrameReportNV[timingCount];
        for (uint32_t i = 0; i < timingCount; ++i) {
            pTimings[i].initialize(&copy_src.pTimings[i]);
        }
    }

    return *this;
}

GetLatencyMarkerInfoNV::~GetLatencyMarkerInfoNV() {
    if (pTimings) delete[] pTimings;
    FreePnextChain(pNext);
}

void GetLatencyMarkerInfoNV::initialize(const VkGetLatencyMarkerInfoNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pTimings) delete[] pTimings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    timingCount = in_struct->timingCount;
    pTimings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (timingCount && in_struct->pTimings) {
        pTimings = new LatencyTimingsFrameReportNV[timingCount];
        for (uint32_t i = 0; i < timingCount; ++i) {
            pTimings[i].initialize(&in_struct->pTimings[i]);
        }
    }
}

void GetLatencyMarkerInfoNV::initialize(const GetLatencyMarkerInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    timingCount = copy_src->timingCount;
    pTimings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (timingCount && copy_src->pTimings) {
        pTimings = new LatencyTimingsFrameReportNV[timingCount];
        for (uint32_t i = 0; i < timingCount; ++i) {
            pTimings[i].initialize(&copy_src->pTimings[i]);
        }
    }
}

LatencySubmissionPresentIdNV::LatencySubmissionPresentIdNV(const VkLatencySubmissionPresentIdNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentID(in_struct->presentID) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

LatencySubmissionPresentIdNV::LatencySubmissionPresentIdNV()
    : sType(VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV), pNext(nullptr), presentID() {}

LatencySubmissionPresentIdNV::LatencySubmissionPresentIdNV(const LatencySubmissionPresentIdNV& copy_src) {
    sType = copy_src.sType;
    presentID = copy_src.presentID;
    pNext = SafePnextCopy(copy_src.pNext);
}

LatencySubmissionPresentIdNV& LatencySubmissionPresentIdNV::operator=(const LatencySubmissionPresentIdNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentID = copy_src.presentID;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

LatencySubmissionPresentIdNV::~LatencySubmissionPresentIdNV() { FreePnextChain(pNext); }

void LatencySubmissionPresentIdNV::initialize(const VkLatencySubmissionPresentIdNV* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentID = in_struct->presentID;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void LatencySubmissionPresentIdNV::initialize(const LatencySubmissionPresentIdNV* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentID = copy_src->presentID;
    pNext = SafePnextCopy(copy_src->pNext);
}

SwapchainLatencyCreateInfoNV::SwapchainLatencyCreateInfoNV(const VkSwapchainLatencyCreateInfoNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), latencyModeEnable(in_struct->latencyModeEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SwapchainLatencyCreateInfoNV::SwapchainLatencyCreateInfoNV()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV), pNext(nullptr), latencyModeEnable() {}

SwapchainLatencyCreateInfoNV::SwapchainLatencyCreateInfoNV(const SwapchainLatencyCreateInfoNV& copy_src) {
    sType = copy_src.sType;
    latencyModeEnable = copy_src.latencyModeEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

SwapchainLatencyCreateInfoNV& SwapchainLatencyCreateInfoNV::operator=(const SwapchainLatencyCreateInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    latencyModeEnable = copy_src.latencyModeEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SwapchainLatencyCreateInfoNV::~SwapchainLatencyCreateInfoNV() { FreePnextChain(pNext); }

void SwapchainLatencyCreateInfoNV::initialize(const VkSwapchainLatencyCreateInfoNV* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    latencyModeEnable = in_struct->latencyModeEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SwapchainLatencyCreateInfoNV::initialize(const SwapchainLatencyCreateInfoNV* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    latencyModeEnable = copy_src->latencyModeEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

OutOfBandQueueTypeInfoNV::OutOfBandQueueTypeInfoNV(const VkOutOfBandQueueTypeInfoNV* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), queueType(in_struct->queueType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OutOfBandQueueTypeInfoNV::OutOfBandQueueTypeInfoNV()
    : sType(VK_STRUCTURE_TYPE_OUT_OF_BAND_QUEUE_TYPE_INFO_NV), pNext(nullptr), queueType() {}

OutOfBandQueueTypeInfoNV::OutOfBandQueueTypeInfoNV(const OutOfBandQueueTypeInfoNV& copy_src) {
    sType = copy_src.sType;
    queueType = copy_src.queueType;
    pNext = SafePnextCopy(copy_src.pNext);
}

OutOfBandQueueTypeInfoNV& OutOfBandQueueTypeInfoNV::operator=(const OutOfBandQueueTypeInfoNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queueType = copy_src.queueType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OutOfBandQueueTypeInfoNV::~OutOfBandQueueTypeInfoNV() { FreePnextChain(pNext); }

void OutOfBandQueueTypeInfoNV::initialize(const VkOutOfBandQueueTypeInfoNV* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queueType = in_struct->queueType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OutOfBandQueueTypeInfoNV::initialize(const OutOfBandQueueTypeInfoNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queueType = copy_src->queueType;
    pNext = SafePnextCopy(copy_src->pNext);
}

LatencySurfaceCapabilitiesNV::LatencySurfaceCapabilitiesNV(const VkLatencySurfaceCapabilitiesNV* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentModeCount(in_struct->presentModeCount), pPresentModes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->presentModeCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->presentModeCount);
    }
}

LatencySurfaceCapabilitiesNV::LatencySurfaceCapabilitiesNV()
    : sType(VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV), pNext(nullptr), presentModeCount(), pPresentModes(nullptr) {}

LatencySurfaceCapabilitiesNV::LatencySurfaceCapabilitiesNV(const LatencySurfaceCapabilitiesNV& copy_src) {
    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }
}

LatencySurfaceCapabilitiesNV& LatencySurfaceCapabilitiesNV::operator=(const LatencySurfaceCapabilitiesNV& copy_src) {
    if (&copy_src == this) return *this;

    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }

    return *this;
}

LatencySurfaceCapabilitiesNV::~LatencySurfaceCapabilitiesNV() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void LatencySurfaceCapabilitiesNV::initialize(const VkLatencySurfaceCapabilitiesNV* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentModeCount = in_struct->presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->presentModeCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->presentModeCount);
    }
}

void LatencySurfaceCapabilitiesNV::initialize(const LatencySurfaceCapabilitiesNV* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentModeCount = copy_src->presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src->presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src->pPresentModes, sizeof(VkPresentModeKHR) * copy_src->presentModeCount);
    }
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(
    const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), multiviewPerViewRenderAreas(in_struct->multiviewPerViewRenderAreas) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM),
      pNext(nullptr),
      multiviewPerViewRenderAreas() {}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(
    const PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    multiviewPerViewRenderAreas = copy_src.multiviewPerViewRenderAreas;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM& PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::operator=(
    const PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multiviewPerViewRenderAreas = copy_src.multiviewPerViewRenderAreas;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::~PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM() {
    FreePnextChain(pNext);
}

void PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::initialize(
    const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multiviewPerViewRenderAreas = in_struct->multiviewPerViewRenderAreas;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::initialize(
    const PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multiviewPerViewRenderAreas = copy_src->multiviewPerViewRenderAreas;
    pNext = SafePnextCopy(copy_src->pNext);
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(
    const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), perViewRenderAreaCount(in_struct->perViewRenderAreaCount), pPerViewRenderAreas(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPerViewRenderAreas) {
        pPerViewRenderAreas = new VkRect2D[in_struct->perViewRenderAreaCount];
        memcpy((void*)pPerViewRenderAreas, (void*)in_struct->pPerViewRenderAreas,
               sizeof(VkRect2D) * in_struct->perViewRenderAreaCount);
    }
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM),
      pNext(nullptr),
      perViewRenderAreaCount(),
      pPerViewRenderAreas(nullptr) {}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(
    const MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& copy_src) {
    sType = copy_src.sType;
    perViewRenderAreaCount = copy_src.perViewRenderAreaCount;
    pPerViewRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPerViewRenderAreas) {
        pPerViewRenderAreas = new VkRect2D[copy_src.perViewRenderAreaCount];
        memcpy((void*)pPerViewRenderAreas, (void*)copy_src.pPerViewRenderAreas, sizeof(VkRect2D) * copy_src.perViewRenderAreaCount);
    }
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::operator=(
    const MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    if (pPerViewRenderAreas) delete[] pPerViewRenderAreas;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    perViewRenderAreaCount = copy_src.perViewRenderAreaCount;
    pPerViewRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPerViewRenderAreas) {
        pPerViewRenderAreas = new VkRect2D[copy_src.perViewRenderAreaCount];
        memcpy((void*)pPerViewRenderAreas, (void*)copy_src.pPerViewRenderAreas, sizeof(VkRect2D) * copy_src.perViewRenderAreaCount);
    }

    return *this;
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::~MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM() {
    if (pPerViewRenderAreas) delete[] pPerViewRenderAreas;
    FreePnextChain(pNext);
}

void MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::initialize(
    const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPerViewRenderAreas) delete[] pPerViewRenderAreas;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    perViewRenderAreaCount = in_struct->perViewRenderAreaCount;
    pPerViewRenderAreas = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPerViewRenderAreas) {
        pPerViewRenderAreas = new VkRect2D[in_struct->perViewRenderAreaCount];
        memcpy((void*)pPerViewRenderAreas, (void*)in_struct->pPerViewRenderAreas,
               sizeof(VkRect2D) * in_struct->perViewRenderAreaCount);
    }
}

void MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::initialize(
    const MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    perViewRenderAreaCount = copy_src->perViewRenderAreaCount;
    pPerViewRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPerViewRenderAreas) {
        pPerViewRenderAreas = new VkRect2D[copy_src->perViewRenderAreaCount];
        memcpy((void*)pPerViewRenderAreas, (void*)copy_src->pPerViewRenderAreas,
               sizeof(VkRect2D) * copy_src->perViewRenderAreaCount);
    }
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::PhysicalDevicePerStageDescriptorSetFeaturesNV(
    const VkPhysicalDevicePerStageDescriptorSetFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      perStageDescriptorSet(in_struct->perStageDescriptorSet),
      dynamicPipelineLayout(in_struct->dynamicPipelineLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::PhysicalDevicePerStageDescriptorSetFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV),
      pNext(nullptr),
      perStageDescriptorSet(),
      dynamicPipelineLayout() {}

PhysicalDevicePerStageDescriptorSetFeaturesNV::PhysicalDevicePerStageDescriptorSetFeaturesNV(
    const PhysicalDevicePerStageDescriptorSetFeaturesNV& copy_src) {
    sType = copy_src.sType;
    perStageDescriptorSet = copy_src.perStageDescriptorSet;
    dynamicPipelineLayout = copy_src.dynamicPipelineLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePerStageDescriptorSetFeaturesNV& PhysicalDevicePerStageDescriptorSetFeaturesNV::operator=(
    const PhysicalDevicePerStageDescriptorSetFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    perStageDescriptorSet = copy_src.perStageDescriptorSet;
    dynamicPipelineLayout = copy_src.dynamicPipelineLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::~PhysicalDevicePerStageDescriptorSetFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDevicePerStageDescriptorSetFeaturesNV::initialize(const VkPhysicalDevicePerStageDescriptorSetFeaturesNV* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    perStageDescriptorSet = in_struct->perStageDescriptorSet;
    dynamicPipelineLayout = in_struct->dynamicPipelineLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePerStageDescriptorSetFeaturesNV::initialize(const PhysicalDevicePerStageDescriptorSetFeaturesNV* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    perStageDescriptorSet = copy_src->perStageDescriptorSet;
    dynamicPipelineLayout = copy_src->dynamicPipelineLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageProcessing2FeaturesQCOM::PhysicalDeviceImageProcessing2FeaturesQCOM(
    const VkPhysicalDeviceImageProcessing2FeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), textureBlockMatch2(in_struct->textureBlockMatch2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageProcessing2FeaturesQCOM::PhysicalDeviceImageProcessing2FeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM), pNext(nullptr), textureBlockMatch2() {}

PhysicalDeviceImageProcessing2FeaturesQCOM::PhysicalDeviceImageProcessing2FeaturesQCOM(
    const PhysicalDeviceImageProcessing2FeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    textureBlockMatch2 = copy_src.textureBlockMatch2;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageProcessing2FeaturesQCOM& PhysicalDeviceImageProcessing2FeaturesQCOM::operator=(
    const PhysicalDeviceImageProcessing2FeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    textureBlockMatch2 = copy_src.textureBlockMatch2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageProcessing2FeaturesQCOM::~PhysicalDeviceImageProcessing2FeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceImageProcessing2FeaturesQCOM::initialize(const VkPhysicalDeviceImageProcessing2FeaturesQCOM* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    textureBlockMatch2 = in_struct->textureBlockMatch2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageProcessing2FeaturesQCOM::initialize(const PhysicalDeviceImageProcessing2FeaturesQCOM* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    textureBlockMatch2 = copy_src->textureBlockMatch2;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageProcessing2PropertiesQCOM::PhysicalDeviceImageProcessing2PropertiesQCOM(
    const VkPhysicalDeviceImageProcessing2PropertiesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxBlockMatchWindow(in_struct->maxBlockMatchWindow) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageProcessing2PropertiesQCOM::PhysicalDeviceImageProcessing2PropertiesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM), pNext(nullptr), maxBlockMatchWindow() {}

PhysicalDeviceImageProcessing2PropertiesQCOM::PhysicalDeviceImageProcessing2PropertiesQCOM(
    const PhysicalDeviceImageProcessing2PropertiesQCOM& copy_src) {
    sType = copy_src.sType;
    maxBlockMatchWindow = copy_src.maxBlockMatchWindow;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageProcessing2PropertiesQCOM& PhysicalDeviceImageProcessing2PropertiesQCOM::operator=(
    const PhysicalDeviceImageProcessing2PropertiesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxBlockMatchWindow = copy_src.maxBlockMatchWindow;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageProcessing2PropertiesQCOM::~PhysicalDeviceImageProcessing2PropertiesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceImageProcessing2PropertiesQCOM::initialize(const VkPhysicalDeviceImageProcessing2PropertiesQCOM* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxBlockMatchWindow = in_struct->maxBlockMatchWindow;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageProcessing2PropertiesQCOM::initialize(const PhysicalDeviceImageProcessing2PropertiesQCOM* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxBlockMatchWindow = copy_src->maxBlockMatchWindow;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerBlockMatchWindowCreateInfoQCOM::SamplerBlockMatchWindowCreateInfoQCOM(
    const VkSamplerBlockMatchWindowCreateInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), windowExtent(in_struct->windowExtent), windowCompareMode(in_struct->windowCompareMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerBlockMatchWindowCreateInfoQCOM::SamplerBlockMatchWindowCreateInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM), pNext(nullptr), windowExtent(), windowCompareMode() {}

SamplerBlockMatchWindowCreateInfoQCOM::SamplerBlockMatchWindowCreateInfoQCOM(
    const SamplerBlockMatchWindowCreateInfoQCOM& copy_src) {
    sType = copy_src.sType;
    windowExtent = copy_src.windowExtent;
    windowCompareMode = copy_src.windowCompareMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerBlockMatchWindowCreateInfoQCOM& SamplerBlockMatchWindowCreateInfoQCOM::operator=(
    const SamplerBlockMatchWindowCreateInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    windowExtent = copy_src.windowExtent;
    windowCompareMode = copy_src.windowCompareMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerBlockMatchWindowCreateInfoQCOM::~SamplerBlockMatchWindowCreateInfoQCOM() { FreePnextChain(pNext); }

void SamplerBlockMatchWindowCreateInfoQCOM::initialize(const VkSamplerBlockMatchWindowCreateInfoQCOM* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    windowExtent = in_struct->windowExtent;
    windowCompareMode = in_struct->windowCompareMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerBlockMatchWindowCreateInfoQCOM::initialize(const SamplerBlockMatchWindowCreateInfoQCOM* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    windowExtent = copy_src->windowExtent;
    windowCompareMode = copy_src->windowCompareMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCubicWeightsFeaturesQCOM::PhysicalDeviceCubicWeightsFeaturesQCOM(
    const VkPhysicalDeviceCubicWeightsFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), selectableCubicWeights(in_struct->selectableCubicWeights) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCubicWeightsFeaturesQCOM::PhysicalDeviceCubicWeightsFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM), pNext(nullptr), selectableCubicWeights() {}

PhysicalDeviceCubicWeightsFeaturesQCOM::PhysicalDeviceCubicWeightsFeaturesQCOM(
    const PhysicalDeviceCubicWeightsFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    selectableCubicWeights = copy_src.selectableCubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCubicWeightsFeaturesQCOM& PhysicalDeviceCubicWeightsFeaturesQCOM::operator=(
    const PhysicalDeviceCubicWeightsFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    selectableCubicWeights = copy_src.selectableCubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCubicWeightsFeaturesQCOM::~PhysicalDeviceCubicWeightsFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceCubicWeightsFeaturesQCOM::initialize(const VkPhysicalDeviceCubicWeightsFeaturesQCOM* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    selectableCubicWeights = in_struct->selectableCubicWeights;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCubicWeightsFeaturesQCOM::initialize(const PhysicalDeviceCubicWeightsFeaturesQCOM* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    selectableCubicWeights = copy_src->selectableCubicWeights;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerCubicWeightsCreateInfoQCOM::SamplerCubicWeightsCreateInfoQCOM(const VkSamplerCubicWeightsCreateInfoQCOM* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cubicWeights(in_struct->cubicWeights) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerCubicWeightsCreateInfoQCOM::SamplerCubicWeightsCreateInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM), pNext(nullptr), cubicWeights() {}

SamplerCubicWeightsCreateInfoQCOM::SamplerCubicWeightsCreateInfoQCOM(const SamplerCubicWeightsCreateInfoQCOM& copy_src) {
    sType = copy_src.sType;
    cubicWeights = copy_src.cubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerCubicWeightsCreateInfoQCOM& SamplerCubicWeightsCreateInfoQCOM::operator=(const SamplerCubicWeightsCreateInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cubicWeights = copy_src.cubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerCubicWeightsCreateInfoQCOM::~SamplerCubicWeightsCreateInfoQCOM() { FreePnextChain(pNext); }

void SamplerCubicWeightsCreateInfoQCOM::initialize(const VkSamplerCubicWeightsCreateInfoQCOM* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cubicWeights = in_struct->cubicWeights;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerCubicWeightsCreateInfoQCOM::initialize(const SamplerCubicWeightsCreateInfoQCOM* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cubicWeights = copy_src->cubicWeights;
    pNext = SafePnextCopy(copy_src->pNext);
}

BlitImageCubicWeightsInfoQCOM::BlitImageCubicWeightsInfoQCOM(const VkBlitImageCubicWeightsInfoQCOM* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cubicWeights(in_struct->cubicWeights) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BlitImageCubicWeightsInfoQCOM::BlitImageCubicWeightsInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM), pNext(nullptr), cubicWeights() {}

BlitImageCubicWeightsInfoQCOM::BlitImageCubicWeightsInfoQCOM(const BlitImageCubicWeightsInfoQCOM& copy_src) {
    sType = copy_src.sType;
    cubicWeights = copy_src.cubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);
}

BlitImageCubicWeightsInfoQCOM& BlitImageCubicWeightsInfoQCOM::operator=(const BlitImageCubicWeightsInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cubicWeights = copy_src.cubicWeights;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BlitImageCubicWeightsInfoQCOM::~BlitImageCubicWeightsInfoQCOM() { FreePnextChain(pNext); }

void BlitImageCubicWeightsInfoQCOM::initialize(const VkBlitImageCubicWeightsInfoQCOM* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cubicWeights = in_struct->cubicWeights;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BlitImageCubicWeightsInfoQCOM::initialize(const BlitImageCubicWeightsInfoQCOM* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cubicWeights = copy_src->cubicWeights;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::PhysicalDeviceYcbcrDegammaFeaturesQCOM(
    const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), ycbcrDegamma(in_struct->ycbcrDegamma) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::PhysicalDeviceYcbcrDegammaFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM), pNext(nullptr), ycbcrDegamma() {}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::PhysicalDeviceYcbcrDegammaFeaturesQCOM(
    const PhysicalDeviceYcbcrDegammaFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    ycbcrDegamma = copy_src.ycbcrDegamma;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM& PhysicalDeviceYcbcrDegammaFeaturesQCOM::operator=(
    const PhysicalDeviceYcbcrDegammaFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    ycbcrDegamma = copy_src.ycbcrDegamma;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::~PhysicalDeviceYcbcrDegammaFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceYcbcrDegammaFeaturesQCOM::initialize(const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    ycbcrDegamma = in_struct->ycbcrDegamma;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceYcbcrDegammaFeaturesQCOM::initialize(const PhysicalDeviceYcbcrDegammaFeaturesQCOM* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    ycbcrDegamma = copy_src->ycbcrDegamma;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(
    const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), enableYDegamma(in_struct->enableYDegamma), enableCbCrDegamma(in_struct->enableCbCrDegamma) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM),
      pNext(nullptr),
      enableYDegamma(),
      enableCbCrDegamma() {}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(
    const SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& copy_src) {
    sType = copy_src.sType;
    enableYDegamma = copy_src.enableYDegamma;
    enableCbCrDegamma = copy_src.enableCbCrDegamma;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::operator=(
    const SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    enableYDegamma = copy_src.enableYDegamma;
    enableCbCrDegamma = copy_src.enableCbCrDegamma;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::~SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM() { FreePnextChain(pNext); }

void SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::initialize(
    const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    enableYDegamma = in_struct->enableYDegamma;
    enableCbCrDegamma = in_struct->enableCbCrDegamma;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::initialize(const SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    enableYDegamma = copy_src->enableYDegamma;
    enableCbCrDegamma = copy_src->enableCbCrDegamma;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCubicClampFeaturesQCOM::PhysicalDeviceCubicClampFeaturesQCOM(const VkPhysicalDeviceCubicClampFeaturesQCOM* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), cubicRangeClamp(in_struct->cubicRangeClamp) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCubicClampFeaturesQCOM::PhysicalDeviceCubicClampFeaturesQCOM()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM), pNext(nullptr), cubicRangeClamp() {}

PhysicalDeviceCubicClampFeaturesQCOM::PhysicalDeviceCubicClampFeaturesQCOM(const PhysicalDeviceCubicClampFeaturesQCOM& copy_src) {
    sType = copy_src.sType;
    cubicRangeClamp = copy_src.cubicRangeClamp;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCubicClampFeaturesQCOM& PhysicalDeviceCubicClampFeaturesQCOM::operator=(
    const PhysicalDeviceCubicClampFeaturesQCOM& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cubicRangeClamp = copy_src.cubicRangeClamp;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCubicClampFeaturesQCOM::~PhysicalDeviceCubicClampFeaturesQCOM() { FreePnextChain(pNext); }

void PhysicalDeviceCubicClampFeaturesQCOM::initialize(const VkPhysicalDeviceCubicClampFeaturesQCOM* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cubicRangeClamp = in_struct->cubicRangeClamp;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCubicClampFeaturesQCOM::initialize(const PhysicalDeviceCubicClampFeaturesQCOM* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cubicRangeClamp = copy_src->cubicRangeClamp;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX

ScreenBufferPropertiesQNX::ScreenBufferPropertiesQNX(const VkScreenBufferPropertiesQNX* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), allocationSize(in_struct->allocationSize), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ScreenBufferPropertiesQNX::ScreenBufferPropertiesQNX()
    : sType(VK_STRUCTURE_TYPE_SCREEN_BUFFER_PROPERTIES_QNX), pNext(nullptr), allocationSize(), memoryTypeBits() {}

ScreenBufferPropertiesQNX::ScreenBufferPropertiesQNX(const ScreenBufferPropertiesQNX& copy_src) {
    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

ScreenBufferPropertiesQNX& ScreenBufferPropertiesQNX::operator=(const ScreenBufferPropertiesQNX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ScreenBufferPropertiesQNX::~ScreenBufferPropertiesQNX() { FreePnextChain(pNext); }

void ScreenBufferPropertiesQNX::initialize(const VkScreenBufferPropertiesQNX* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    allocationSize = in_struct->allocationSize;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ScreenBufferPropertiesQNX::initialize(const ScreenBufferPropertiesQNX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    allocationSize = copy_src->allocationSize;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

ScreenBufferFormatPropertiesQNX::ScreenBufferFormatPropertiesQNX(const VkScreenBufferFormatPropertiesQNX* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      externalFormat(in_struct->externalFormat),
      screenUsage(in_struct->screenUsage),
      formatFeatures(in_struct->formatFeatures),
      samplerYcbcrConversionComponents(in_struct->samplerYcbcrConversionComponents),
      suggestedYcbcrModel(in_struct->suggestedYcbcrModel),
      suggestedYcbcrRange(in_struct->suggestedYcbcrRange),
      suggestedXChromaOffset(in_struct->suggestedXChromaOffset),
      suggestedYChromaOffset(in_struct->suggestedYChromaOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ScreenBufferFormatPropertiesQNX::ScreenBufferFormatPropertiesQNX()
    : sType(VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX),
      pNext(nullptr),
      format(),
      externalFormat(),
      screenUsage(),
      formatFeatures(),
      samplerYcbcrConversionComponents(),
      suggestedYcbcrModel(),
      suggestedYcbcrRange(),
      suggestedXChromaOffset(),
      suggestedYChromaOffset() {}

ScreenBufferFormatPropertiesQNX::ScreenBufferFormatPropertiesQNX(const ScreenBufferFormatPropertiesQNX& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    screenUsage = copy_src.screenUsage;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

ScreenBufferFormatPropertiesQNX& ScreenBufferFormatPropertiesQNX::operator=(const ScreenBufferFormatPropertiesQNX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    externalFormat = copy_src.externalFormat;
    screenUsage = copy_src.screenUsage;
    formatFeatures = copy_src.formatFeatures;
    samplerYcbcrConversionComponents = copy_src.samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src.suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src.suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src.suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src.suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ScreenBufferFormatPropertiesQNX::~ScreenBufferFormatPropertiesQNX() { FreePnextChain(pNext); }

void ScreenBufferFormatPropertiesQNX::initialize(const VkScreenBufferFormatPropertiesQNX* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    externalFormat = in_struct->externalFormat;
    screenUsage = in_struct->screenUsage;
    formatFeatures = in_struct->formatFeatures;
    samplerYcbcrConversionComponents = in_struct->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = in_struct->suggestedYcbcrModel;
    suggestedYcbcrRange = in_struct->suggestedYcbcrRange;
    suggestedXChromaOffset = in_struct->suggestedXChromaOffset;
    suggestedYChromaOffset = in_struct->suggestedYChromaOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ScreenBufferFormatPropertiesQNX::initialize(const ScreenBufferFormatPropertiesQNX* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    externalFormat = copy_src->externalFormat;
    screenUsage = copy_src->screenUsage;
    formatFeatures = copy_src->formatFeatures;
    samplerYcbcrConversionComponents = copy_src->samplerYcbcrConversionComponents;
    suggestedYcbcrModel = copy_src->suggestedYcbcrModel;
    suggestedYcbcrRange = copy_src->suggestedYcbcrRange;
    suggestedXChromaOffset = copy_src->suggestedXChromaOffset;
    suggestedYChromaOffset = copy_src->suggestedYChromaOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportScreenBufferInfoQNX::ImportScreenBufferInfoQNX(const VkImportScreenBufferInfoQNX* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->buffer) {
        buffer = new _screen_buffer(*in_struct->buffer);
    }
}

ImportScreenBufferInfoQNX::ImportScreenBufferInfoQNX()
    : sType(VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX), pNext(nullptr), buffer(nullptr) {}

ImportScreenBufferInfoQNX::ImportScreenBufferInfoQNX(const ImportScreenBufferInfoQNX& copy_src) {
    sType = copy_src.sType;
    buffer = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.buffer) {
        buffer = new _screen_buffer(*copy_src.buffer);
    }
}

ImportScreenBufferInfoQNX& ImportScreenBufferInfoQNX::operator=(const ImportScreenBufferInfoQNX& copy_src) {
    if (&copy_src == this) return *this;

    if (buffer) delete buffer;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.buffer) {
        buffer = new _screen_buffer(*copy_src.buffer);
    }

    return *this;
}

ImportScreenBufferInfoQNX::~ImportScreenBufferInfoQNX() {
    if (buffer) delete buffer;
    FreePnextChain(pNext);
}

void ImportScreenBufferInfoQNX::initialize(const VkImportScreenBufferInfoQNX* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (buffer) delete buffer;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->buffer) {
        buffer = new _screen_buffer(*in_struct->buffer);
    }
}

void ImportScreenBufferInfoQNX::initialize(const ImportScreenBufferInfoQNX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->buffer) {
        buffer = new _screen_buffer(*copy_src->buffer);
    }
}

ExternalFormatQNX::ExternalFormatQNX(const VkExternalFormatQNX* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), externalFormat(in_struct->externalFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalFormatQNX::ExternalFormatQNX() : sType(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX), pNext(nullptr), externalFormat() {}

ExternalFormatQNX::ExternalFormatQNX(const ExternalFormatQNX& copy_src) {
    sType = copy_src.sType;
    externalFormat = copy_src.externalFormat;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalFormatQNX& ExternalFormatQNX::operator=(const ExternalFormatQNX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalFormat = copy_src.externalFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalFormatQNX::~ExternalFormatQNX() { FreePnextChain(pNext); }

void ExternalFormatQNX::initialize(const VkExternalFormatQNX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalFormat = in_struct->externalFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalFormatQNX::initialize(const ExternalFormatQNX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalFormat = copy_src->externalFormat;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(
    const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), screenBufferImport(in_struct->screenBufferImport) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX), pNext(nullptr), screenBufferImport() {}

PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(
    const PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX& copy_src) {
    sType = copy_src.sType;
    screenBufferImport = copy_src.screenBufferImport;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX& PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::operator=(
    const PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    screenBufferImport = copy_src.screenBufferImport;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::~PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX() {
    FreePnextChain(pNext);
}

void PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::initialize(
    const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    screenBufferImport = in_struct->screenBufferImport;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX::initialize(
    const PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    screenBufferImport = copy_src->screenBufferImport;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

PhysicalDeviceLayeredDriverPropertiesMSFT::PhysicalDeviceLayeredDriverPropertiesMSFT(
    const VkPhysicalDeviceLayeredDriverPropertiesMSFT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), underlyingAPI(in_struct->underlyingAPI) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceLayeredDriverPropertiesMSFT::PhysicalDeviceLayeredDriverPropertiesMSFT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT), pNext(nullptr), underlyingAPI() {}

PhysicalDeviceLayeredDriverPropertiesMSFT::PhysicalDeviceLayeredDriverPropertiesMSFT(
    const PhysicalDeviceLayeredDriverPropertiesMSFT& copy_src) {
    sType = copy_src.sType;
    underlyingAPI = copy_src.underlyingAPI;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceLayeredDriverPropertiesMSFT& PhysicalDeviceLayeredDriverPropertiesMSFT::operator=(
    const PhysicalDeviceLayeredDriverPropertiesMSFT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    underlyingAPI = copy_src.underlyingAPI;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceLayeredDriverPropertiesMSFT::~PhysicalDeviceLayeredDriverPropertiesMSFT() { FreePnextChain(pNext); }

void PhysicalDeviceLayeredDriverPropertiesMSFT::initialize(const VkPhysicalDeviceLayeredDriverPropertiesMSFT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    underlyingAPI = in_struct->underlyingAPI;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceLayeredDriverPropertiesMSFT::initialize(const PhysicalDeviceLayeredDriverPropertiesMSFT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    underlyingAPI = copy_src->underlyingAPI;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::PhysicalDeviceDescriptorPoolOverallocationFeaturesNV(
    const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), descriptorPoolOverallocation(in_struct->descriptorPoolOverallocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::PhysicalDeviceDescriptorPoolOverallocationFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV),
      pNext(nullptr),
      descriptorPoolOverallocation() {}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::PhysicalDeviceDescriptorPoolOverallocationFeaturesNV(
    const PhysicalDeviceDescriptorPoolOverallocationFeaturesNV& copy_src) {
    sType = copy_src.sType;
    descriptorPoolOverallocation = copy_src.descriptorPoolOverallocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV& PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::operator=(
    const PhysicalDeviceDescriptorPoolOverallocationFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorPoolOverallocation = copy_src.descriptorPoolOverallocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::~PhysicalDeviceDescriptorPoolOverallocationFeaturesNV() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::initialize(
    const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorPoolOverallocation = in_struct->descriptorPoolOverallocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::initialize(
    const PhysicalDeviceDescriptorPoolOverallocationFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorPoolOverallocation = copy_src->descriptorPoolOverallocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRawAccessChainsFeaturesNV::PhysicalDeviceRawAccessChainsFeaturesNV(
    const VkPhysicalDeviceRawAccessChainsFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderRawAccessChains(in_struct->shaderRawAccessChains) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRawAccessChainsFeaturesNV::PhysicalDeviceRawAccessChainsFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV), pNext(nullptr), shaderRawAccessChains() {}

PhysicalDeviceRawAccessChainsFeaturesNV::PhysicalDeviceRawAccessChainsFeaturesNV(
    const PhysicalDeviceRawAccessChainsFeaturesNV& copy_src) {
    sType = copy_src.sType;
    shaderRawAccessChains = copy_src.shaderRawAccessChains;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRawAccessChainsFeaturesNV& PhysicalDeviceRawAccessChainsFeaturesNV::operator=(
    const PhysicalDeviceRawAccessChainsFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderRawAccessChains = copy_src.shaderRawAccessChains;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRawAccessChainsFeaturesNV::~PhysicalDeviceRawAccessChainsFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceRawAccessChainsFeaturesNV::initialize(const VkPhysicalDeviceRawAccessChainsFeaturesNV* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderRawAccessChains = in_struct->shaderRawAccessChains;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRawAccessChainsFeaturesNV::initialize(const PhysicalDeviceRawAccessChainsFeaturesNV* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderRawAccessChains = copy_src->shaderRawAccessChains;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(
    const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderFloat16VectorAtomics(in_struct->shaderFloat16VectorAtomics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV),
      pNext(nullptr),
      shaderFloat16VectorAtomics() {}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(
    const PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV& copy_src) {
    sType = copy_src.sType;
    shaderFloat16VectorAtomics = copy_src.shaderFloat16VectorAtomics;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV& PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::operator=(
    const PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderFloat16VectorAtomics = copy_src.shaderFloat16VectorAtomics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::~PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::initialize(
    const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderFloat16VectorAtomics = in_struct->shaderFloat16VectorAtomics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::initialize(
    const PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderFloat16VectorAtomics = copy_src->shaderFloat16VectorAtomics;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingValidationFeaturesNV::PhysicalDeviceRayTracingValidationFeaturesNV(
    const VkPhysicalDeviceRayTracingValidationFeaturesNV* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), rayTracingValidation(in_struct->rayTracingValidation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingValidationFeaturesNV::PhysicalDeviceRayTracingValidationFeaturesNV()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV), pNext(nullptr), rayTracingValidation() {}

PhysicalDeviceRayTracingValidationFeaturesNV::PhysicalDeviceRayTracingValidationFeaturesNV(
    const PhysicalDeviceRayTracingValidationFeaturesNV& copy_src) {
    sType = copy_src.sType;
    rayTracingValidation = copy_src.rayTracingValidation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingValidationFeaturesNV& PhysicalDeviceRayTracingValidationFeaturesNV::operator=(
    const PhysicalDeviceRayTracingValidationFeaturesNV& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingValidation = copy_src.rayTracingValidation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingValidationFeaturesNV::~PhysicalDeviceRayTracingValidationFeaturesNV() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingValidationFeaturesNV::initialize(const VkPhysicalDeviceRayTracingValidationFeaturesNV* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingValidation = in_struct->rayTracingValidation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingValidationFeaturesNV::initialize(const PhysicalDeviceRayTracingValidationFeaturesNV* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingValidation = copy_src->rayTracingValidation;
    pNext = SafePnextCopy(copy_src->pNext);
}

}  // namespace safe
}  // namespace vku

// NOLINTEND
