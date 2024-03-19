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

RenderingFragmentDensityMapAttachmentInfoEXT::RenderingFragmentDensityMapAttachmentInfoEXT(
    const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageView(in_struct->imageView), imageLayout(in_struct->imageLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderingFragmentDensityMapAttachmentInfoEXT::RenderingFragmentDensityMapAttachmentInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT), pNext(nullptr), imageView(), imageLayout() {}

RenderingFragmentDensityMapAttachmentInfoEXT::RenderingFragmentDensityMapAttachmentInfoEXT(
    const RenderingFragmentDensityMapAttachmentInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderingFragmentDensityMapAttachmentInfoEXT& RenderingFragmentDensityMapAttachmentInfoEXT::operator=(
    const RenderingFragmentDensityMapAttachmentInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderingFragmentDensityMapAttachmentInfoEXT::~RenderingFragmentDensityMapAttachmentInfoEXT() { FreePnextChain(pNext); }

void RenderingFragmentDensityMapAttachmentInfoEXT::initialize(const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    imageLayout = in_struct->imageLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderingFragmentDensityMapAttachmentInfoEXT::initialize(const RenderingFragmentDensityMapAttachmentInfoEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    imageLayout = copy_src->imageLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

SetDescriptorBufferOffsetsInfoEXT::SetDescriptorBufferOffsetsInfoEXT(const VkSetDescriptorBufferOffsetsInfoEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stageFlags(in_struct->stageFlags),
      layout(in_struct->layout),
      firstSet(in_struct->firstSet),
      setCount(in_struct->setCount),
      pBufferIndices(nullptr),
      pOffsets(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pBufferIndices) {
        pBufferIndices = new uint32_t[in_struct->setCount];
        memcpy((void*)pBufferIndices, (void*)in_struct->pBufferIndices, sizeof(uint32_t) * in_struct->setCount);
    }

    if (in_struct->pOffsets) {
        pOffsets = new VkDeviceSize[in_struct->setCount];
        memcpy((void*)pOffsets, (void*)in_struct->pOffsets, sizeof(VkDeviceSize) * in_struct->setCount);
    }
}

SetDescriptorBufferOffsetsInfoEXT::SetDescriptorBufferOffsetsInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT),
      pNext(nullptr),
      stageFlags(),
      layout(),
      firstSet(),
      setCount(),
      pBufferIndices(nullptr),
      pOffsets(nullptr) {}

SetDescriptorBufferOffsetsInfoEXT::SetDescriptorBufferOffsetsInfoEXT(const SetDescriptorBufferOffsetsInfoEXT& copy_src) {
    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    firstSet = copy_src.firstSet;
    setCount = copy_src.setCount;
    pBufferIndices = nullptr;
    pOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBufferIndices) {
        pBufferIndices = new uint32_t[copy_src.setCount];
        memcpy((void*)pBufferIndices, (void*)copy_src.pBufferIndices, sizeof(uint32_t) * copy_src.setCount);
    }

    if (copy_src.pOffsets) {
        pOffsets = new VkDeviceSize[copy_src.setCount];
        memcpy((void*)pOffsets, (void*)copy_src.pOffsets, sizeof(VkDeviceSize) * copy_src.setCount);
    }
}

SetDescriptorBufferOffsetsInfoEXT& SetDescriptorBufferOffsetsInfoEXT::operator=(const SetDescriptorBufferOffsetsInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pBufferIndices) delete[] pBufferIndices;
    if (pOffsets) delete[] pOffsets;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    firstSet = copy_src.firstSet;
    setCount = copy_src.setCount;
    pBufferIndices = nullptr;
    pOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBufferIndices) {
        pBufferIndices = new uint32_t[copy_src.setCount];
        memcpy((void*)pBufferIndices, (void*)copy_src.pBufferIndices, sizeof(uint32_t) * copy_src.setCount);
    }

    if (copy_src.pOffsets) {
        pOffsets = new VkDeviceSize[copy_src.setCount];
        memcpy((void*)pOffsets, (void*)copy_src.pOffsets, sizeof(VkDeviceSize) * copy_src.setCount);
    }

    return *this;
}

SetDescriptorBufferOffsetsInfoEXT::~SetDescriptorBufferOffsetsInfoEXT() {
    if (pBufferIndices) delete[] pBufferIndices;
    if (pOffsets) delete[] pOffsets;
    FreePnextChain(pNext);
}

void SetDescriptorBufferOffsetsInfoEXT::initialize(const VkSetDescriptorBufferOffsetsInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBufferIndices) delete[] pBufferIndices;
    if (pOffsets) delete[] pOffsets;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageFlags = in_struct->stageFlags;
    layout = in_struct->layout;
    firstSet = in_struct->firstSet;
    setCount = in_struct->setCount;
    pBufferIndices = nullptr;
    pOffsets = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pBufferIndices) {
        pBufferIndices = new uint32_t[in_struct->setCount];
        memcpy((void*)pBufferIndices, (void*)in_struct->pBufferIndices, sizeof(uint32_t) * in_struct->setCount);
    }

    if (in_struct->pOffsets) {
        pOffsets = new VkDeviceSize[in_struct->setCount];
        memcpy((void*)pOffsets, (void*)in_struct->pOffsets, sizeof(VkDeviceSize) * in_struct->setCount);
    }
}

void SetDescriptorBufferOffsetsInfoEXT::initialize(const SetDescriptorBufferOffsetsInfoEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageFlags = copy_src->stageFlags;
    layout = copy_src->layout;
    firstSet = copy_src->firstSet;
    setCount = copy_src->setCount;
    pBufferIndices = nullptr;
    pOffsets = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pBufferIndices) {
        pBufferIndices = new uint32_t[copy_src->setCount];
        memcpy((void*)pBufferIndices, (void*)copy_src->pBufferIndices, sizeof(uint32_t) * copy_src->setCount);
    }

    if (copy_src->pOffsets) {
        pOffsets = new VkDeviceSize[copy_src->setCount];
        memcpy((void*)pOffsets, (void*)copy_src->pOffsets, sizeof(VkDeviceSize) * copy_src->setCount);
    }
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::BindDescriptorBufferEmbeddedSamplersInfoEXT(
    const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stageFlags(in_struct->stageFlags), layout(in_struct->layout), set(in_struct->set) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::BindDescriptorBufferEmbeddedSamplersInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT), pNext(nullptr), stageFlags(), layout(), set() {}

BindDescriptorBufferEmbeddedSamplersInfoEXT::BindDescriptorBufferEmbeddedSamplersInfoEXT(
    const BindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src) {
    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindDescriptorBufferEmbeddedSamplersInfoEXT& BindDescriptorBufferEmbeddedSamplersInfoEXT::operator=(
    const BindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::~BindDescriptorBufferEmbeddedSamplersInfoEXT() { FreePnextChain(pNext); }

void BindDescriptorBufferEmbeddedSamplersInfoEXT::initialize(const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageFlags = in_struct->stageFlags;
    layout = in_struct->layout;
    set = in_struct->set;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindDescriptorBufferEmbeddedSamplersInfoEXT::initialize(const BindDescriptorBufferEmbeddedSamplersInfoEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageFlags = copy_src->stageFlags;
    layout = copy_src->layout;
    set = copy_src->set;
    pNext = SafePnextCopy(copy_src->pNext);
}

DebugReportCallbackCreateInfoEXT::DebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), pfnCallback(in_struct->pfnCallback), pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DebugReportCallbackCreateInfoEXT::DebugReportCallbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT), pNext(nullptr), flags(), pfnCallback(), pUserData(nullptr) {}

DebugReportCallbackCreateInfoEXT::DebugReportCallbackCreateInfoEXT(const DebugReportCallbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnCallback = copy_src.pfnCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

DebugReportCallbackCreateInfoEXT& DebugReportCallbackCreateInfoEXT::operator=(const DebugReportCallbackCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnCallback = copy_src.pfnCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DebugReportCallbackCreateInfoEXT::~DebugReportCallbackCreateInfoEXT() { FreePnextChain(pNext); }

void DebugReportCallbackCreateInfoEXT::initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pfnCallback = in_struct->pfnCallback;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DebugReportCallbackCreateInfoEXT::initialize(const DebugReportCallbackCreateInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pfnCallback = copy_src->pfnCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

DebugMarkerObjectNameInfoEXT::DebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), objectType(in_struct->objectType), object(in_struct->object) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

DebugMarkerObjectNameInfoEXT::DebugMarkerObjectNameInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT), pNext(nullptr), objectType(), object(), pObjectName(nullptr) {}

DebugMarkerObjectNameInfoEXT::DebugMarkerObjectNameInfoEXT(const DebugMarkerObjectNameInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);
}

DebugMarkerObjectNameInfoEXT& DebugMarkerObjectNameInfoEXT::operator=(const DebugMarkerObjectNameInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);

    return *this;
}

DebugMarkerObjectNameInfoEXT::~DebugMarkerObjectNameInfoEXT() {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
}

void DebugMarkerObjectNameInfoEXT::initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    object = in_struct->object;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

void DebugMarkerObjectNameInfoEXT::initialize(const DebugMarkerObjectNameInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    object = copy_src->object;
    pNext = SafePnextCopy(copy_src->pNext);
    pObjectName = SafeStringCopy(copy_src->pObjectName);
}

DebugMarkerObjectTagInfoEXT::DebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      objectType(in_struct->objectType),
      object(in_struct->object),
      tagName(in_struct->tagName),
      tagSize(in_struct->tagSize),
      pTag(in_struct->pTag) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DebugMarkerObjectTagInfoEXT::DebugMarkerObjectTagInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT),
      pNext(nullptr),
      objectType(),
      object(),
      tagName(),
      tagSize(),
      pTag(nullptr) {}

DebugMarkerObjectTagInfoEXT::DebugMarkerObjectTagInfoEXT(const DebugMarkerObjectTagInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
}

DebugMarkerObjectTagInfoEXT& DebugMarkerObjectTagInfoEXT::operator=(const DebugMarkerObjectTagInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DebugMarkerObjectTagInfoEXT::~DebugMarkerObjectTagInfoEXT() { FreePnextChain(pNext); }

void DebugMarkerObjectTagInfoEXT::initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    object = in_struct->object;
    tagName = in_struct->tagName;
    tagSize = in_struct->tagSize;
    pTag = in_struct->pTag;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DebugMarkerObjectTagInfoEXT::initialize(const DebugMarkerObjectTagInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    object = copy_src->object;
    tagName = copy_src->tagName;
    tagSize = copy_src->tagSize;
    pTag = copy_src->pTag;
    pNext = SafePnextCopy(copy_src->pNext);
}

DebugMarkerMarkerInfoEXT::DebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pMarkerName = SafeStringCopy(in_struct->pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

DebugMarkerMarkerInfoEXT::DebugMarkerMarkerInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT), pNext(nullptr), pMarkerName(nullptr) {}

DebugMarkerMarkerInfoEXT::DebugMarkerMarkerInfoEXT(const DebugMarkerMarkerInfoEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pMarkerName = SafeStringCopy(copy_src.pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }
}

DebugMarkerMarkerInfoEXT& DebugMarkerMarkerInfoEXT::operator=(const DebugMarkerMarkerInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pMarkerName) delete[] pMarkerName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pMarkerName = SafeStringCopy(copy_src.pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }

    return *this;
}

DebugMarkerMarkerInfoEXT::~DebugMarkerMarkerInfoEXT() {
    if (pMarkerName) delete[] pMarkerName;
    FreePnextChain(pNext);
}

void DebugMarkerMarkerInfoEXT::initialize(const VkDebugMarkerMarkerInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMarkerName) delete[] pMarkerName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pMarkerName = SafeStringCopy(in_struct->pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

void DebugMarkerMarkerInfoEXT::initialize(const DebugMarkerMarkerInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
    pMarkerName = SafeStringCopy(copy_src->pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src->color[i];
    }
}

PhysicalDeviceTransformFeedbackFeaturesEXT::PhysicalDeviceTransformFeedbackFeaturesEXT(
    const VkPhysicalDeviceTransformFeedbackFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), transformFeedback(in_struct->transformFeedback), geometryStreams(in_struct->geometryStreams) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTransformFeedbackFeaturesEXT::PhysicalDeviceTransformFeedbackFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT),
      pNext(nullptr),
      transformFeedback(),
      geometryStreams() {}

PhysicalDeviceTransformFeedbackFeaturesEXT::PhysicalDeviceTransformFeedbackFeaturesEXT(
    const PhysicalDeviceTransformFeedbackFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    transformFeedback = copy_src.transformFeedback;
    geometryStreams = copy_src.geometryStreams;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTransformFeedbackFeaturesEXT& PhysicalDeviceTransformFeedbackFeaturesEXT::operator=(
    const PhysicalDeviceTransformFeedbackFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    transformFeedback = copy_src.transformFeedback;
    geometryStreams = copy_src.geometryStreams;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTransformFeedbackFeaturesEXT::~PhysicalDeviceTransformFeedbackFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceTransformFeedbackFeaturesEXT::initialize(const VkPhysicalDeviceTransformFeedbackFeaturesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    transformFeedback = in_struct->transformFeedback;
    geometryStreams = in_struct->geometryStreams;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTransformFeedbackFeaturesEXT::initialize(const PhysicalDeviceTransformFeedbackFeaturesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    transformFeedback = copy_src->transformFeedback;
    geometryStreams = copy_src->geometryStreams;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceTransformFeedbackPropertiesEXT::PhysicalDeviceTransformFeedbackPropertiesEXT(
    const VkPhysicalDeviceTransformFeedbackPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxTransformFeedbackStreams(in_struct->maxTransformFeedbackStreams),
      maxTransformFeedbackBuffers(in_struct->maxTransformFeedbackBuffers),
      maxTransformFeedbackBufferSize(in_struct->maxTransformFeedbackBufferSize),
      maxTransformFeedbackStreamDataSize(in_struct->maxTransformFeedbackStreamDataSize),
      maxTransformFeedbackBufferDataSize(in_struct->maxTransformFeedbackBufferDataSize),
      maxTransformFeedbackBufferDataStride(in_struct->maxTransformFeedbackBufferDataStride),
      transformFeedbackQueries(in_struct->transformFeedbackQueries),
      transformFeedbackStreamsLinesTriangles(in_struct->transformFeedbackStreamsLinesTriangles),
      transformFeedbackRasterizationStreamSelect(in_struct->transformFeedbackRasterizationStreamSelect),
      transformFeedbackDraw(in_struct->transformFeedbackDraw) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTransformFeedbackPropertiesEXT::PhysicalDeviceTransformFeedbackPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT),
      pNext(nullptr),
      maxTransformFeedbackStreams(),
      maxTransformFeedbackBuffers(),
      maxTransformFeedbackBufferSize(),
      maxTransformFeedbackStreamDataSize(),
      maxTransformFeedbackBufferDataSize(),
      maxTransformFeedbackBufferDataStride(),
      transformFeedbackQueries(),
      transformFeedbackStreamsLinesTriangles(),
      transformFeedbackRasterizationStreamSelect(),
      transformFeedbackDraw() {}

PhysicalDeviceTransformFeedbackPropertiesEXT::PhysicalDeviceTransformFeedbackPropertiesEXT(
    const PhysicalDeviceTransformFeedbackPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxTransformFeedbackStreams = copy_src.maxTransformFeedbackStreams;
    maxTransformFeedbackBuffers = copy_src.maxTransformFeedbackBuffers;
    maxTransformFeedbackBufferSize = copy_src.maxTransformFeedbackBufferSize;
    maxTransformFeedbackStreamDataSize = copy_src.maxTransformFeedbackStreamDataSize;
    maxTransformFeedbackBufferDataSize = copy_src.maxTransformFeedbackBufferDataSize;
    maxTransformFeedbackBufferDataStride = copy_src.maxTransformFeedbackBufferDataStride;
    transformFeedbackQueries = copy_src.transformFeedbackQueries;
    transformFeedbackStreamsLinesTriangles = copy_src.transformFeedbackStreamsLinesTriangles;
    transformFeedbackRasterizationStreamSelect = copy_src.transformFeedbackRasterizationStreamSelect;
    transformFeedbackDraw = copy_src.transformFeedbackDraw;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTransformFeedbackPropertiesEXT& PhysicalDeviceTransformFeedbackPropertiesEXT::operator=(
    const PhysicalDeviceTransformFeedbackPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxTransformFeedbackStreams = copy_src.maxTransformFeedbackStreams;
    maxTransformFeedbackBuffers = copy_src.maxTransformFeedbackBuffers;
    maxTransformFeedbackBufferSize = copy_src.maxTransformFeedbackBufferSize;
    maxTransformFeedbackStreamDataSize = copy_src.maxTransformFeedbackStreamDataSize;
    maxTransformFeedbackBufferDataSize = copy_src.maxTransformFeedbackBufferDataSize;
    maxTransformFeedbackBufferDataStride = copy_src.maxTransformFeedbackBufferDataStride;
    transformFeedbackQueries = copy_src.transformFeedbackQueries;
    transformFeedbackStreamsLinesTriangles = copy_src.transformFeedbackStreamsLinesTriangles;
    transformFeedbackRasterizationStreamSelect = copy_src.transformFeedbackRasterizationStreamSelect;
    transformFeedbackDraw = copy_src.transformFeedbackDraw;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTransformFeedbackPropertiesEXT::~PhysicalDeviceTransformFeedbackPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceTransformFeedbackPropertiesEXT::initialize(const VkPhysicalDeviceTransformFeedbackPropertiesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxTransformFeedbackStreams = in_struct->maxTransformFeedbackStreams;
    maxTransformFeedbackBuffers = in_struct->maxTransformFeedbackBuffers;
    maxTransformFeedbackBufferSize = in_struct->maxTransformFeedbackBufferSize;
    maxTransformFeedbackStreamDataSize = in_struct->maxTransformFeedbackStreamDataSize;
    maxTransformFeedbackBufferDataSize = in_struct->maxTransformFeedbackBufferDataSize;
    maxTransformFeedbackBufferDataStride = in_struct->maxTransformFeedbackBufferDataStride;
    transformFeedbackQueries = in_struct->transformFeedbackQueries;
    transformFeedbackStreamsLinesTriangles = in_struct->transformFeedbackStreamsLinesTriangles;
    transformFeedbackRasterizationStreamSelect = in_struct->transformFeedbackRasterizationStreamSelect;
    transformFeedbackDraw = in_struct->transformFeedbackDraw;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTransformFeedbackPropertiesEXT::initialize(const PhysicalDeviceTransformFeedbackPropertiesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxTransformFeedbackStreams = copy_src->maxTransformFeedbackStreams;
    maxTransformFeedbackBuffers = copy_src->maxTransformFeedbackBuffers;
    maxTransformFeedbackBufferSize = copy_src->maxTransformFeedbackBufferSize;
    maxTransformFeedbackStreamDataSize = copy_src->maxTransformFeedbackStreamDataSize;
    maxTransformFeedbackBufferDataSize = copy_src->maxTransformFeedbackBufferDataSize;
    maxTransformFeedbackBufferDataStride = copy_src->maxTransformFeedbackBufferDataStride;
    transformFeedbackQueries = copy_src->transformFeedbackQueries;
    transformFeedbackStreamsLinesTriangles = copy_src->transformFeedbackStreamsLinesTriangles;
    transformFeedbackRasterizationStreamSelect = copy_src->transformFeedbackRasterizationStreamSelect;
    transformFeedbackDraw = copy_src->transformFeedbackDraw;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationStateStreamCreateInfoEXT::PipelineRasterizationStateStreamCreateInfoEXT(
    const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), rasterizationStream(in_struct->rasterizationStream) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationStateStreamCreateInfoEXT::PipelineRasterizationStateStreamCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      rasterizationStream() {}

PipelineRasterizationStateStreamCreateInfoEXT::PipelineRasterizationStateStreamCreateInfoEXT(
    const PipelineRasterizationStateStreamCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationStream = copy_src.rasterizationStream;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationStateStreamCreateInfoEXT& PipelineRasterizationStateStreamCreateInfoEXT::operator=(
    const PipelineRasterizationStateStreamCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationStream = copy_src.rasterizationStream;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationStateStreamCreateInfoEXT::~PipelineRasterizationStateStreamCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineRasterizationStateStreamCreateInfoEXT::initialize(const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rasterizationStream = in_struct->rasterizationStream;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationStateStreamCreateInfoEXT::initialize(const PipelineRasterizationStateStreamCreateInfoEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rasterizationStream = copy_src->rasterizationStream;
    pNext = SafePnextCopy(copy_src->pNext);
}

ValidationFlagsEXT::ValidationFlagsEXT(const VkValidationFlagsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      disabledValidationCheckCount(in_struct->disabledValidationCheckCount),
      pDisabledValidationChecks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy((void*)pDisabledValidationChecks, (void*)in_struct->pDisabledValidationChecks,
               sizeof(VkValidationCheckEXT) * in_struct->disabledValidationCheckCount);
    }
}

ValidationFlagsEXT::ValidationFlagsEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT),
      pNext(nullptr),
      disabledValidationCheckCount(),
      pDisabledValidationChecks(nullptr) {}

ValidationFlagsEXT::ValidationFlagsEXT(const ValidationFlagsEXT& copy_src) {
    sType = copy_src.sType;
    disabledValidationCheckCount = copy_src.disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[copy_src.disabledValidationCheckCount];
        memcpy((void*)pDisabledValidationChecks, (void*)copy_src.pDisabledValidationChecks,
               sizeof(VkValidationCheckEXT) * copy_src.disabledValidationCheckCount);
    }
}

ValidationFlagsEXT& ValidationFlagsEXT::operator=(const ValidationFlagsEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDisabledValidationChecks) delete[] pDisabledValidationChecks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    disabledValidationCheckCount = copy_src.disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[copy_src.disabledValidationCheckCount];
        memcpy((void*)pDisabledValidationChecks, (void*)copy_src.pDisabledValidationChecks,
               sizeof(VkValidationCheckEXT) * copy_src.disabledValidationCheckCount);
    }

    return *this;
}

ValidationFlagsEXT::~ValidationFlagsEXT() {
    if (pDisabledValidationChecks) delete[] pDisabledValidationChecks;
    FreePnextChain(pNext);
}

void ValidationFlagsEXT::initialize(const VkValidationFlagsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDisabledValidationChecks) delete[] pDisabledValidationChecks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    disabledValidationCheckCount = in_struct->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy((void*)pDisabledValidationChecks, (void*)in_struct->pDisabledValidationChecks,
               sizeof(VkValidationCheckEXT) * in_struct->disabledValidationCheckCount);
    }
}

void ValidationFlagsEXT::initialize(const ValidationFlagsEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    disabledValidationCheckCount = copy_src->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[copy_src->disabledValidationCheckCount];
        memcpy((void*)pDisabledValidationChecks, (void*)copy_src->pDisabledValidationChecks,
               sizeof(VkValidationCheckEXT) * copy_src->disabledValidationCheckCount);
    }
}

ImageViewASTCDecodeModeEXT::ImageViewASTCDecodeModeEXT(const VkImageViewASTCDecodeModeEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), decodeMode(in_struct->decodeMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewASTCDecodeModeEXT::ImageViewASTCDecodeModeEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT), pNext(nullptr), decodeMode() {}

ImageViewASTCDecodeModeEXT::ImageViewASTCDecodeModeEXT(const ImageViewASTCDecodeModeEXT& copy_src) {
    sType = copy_src.sType;
    decodeMode = copy_src.decodeMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewASTCDecodeModeEXT& ImageViewASTCDecodeModeEXT::operator=(const ImageViewASTCDecodeModeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    decodeMode = copy_src.decodeMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewASTCDecodeModeEXT::~ImageViewASTCDecodeModeEXT() { FreePnextChain(pNext); }

void ImageViewASTCDecodeModeEXT::initialize(const VkImageViewASTCDecodeModeEXT* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    decodeMode = in_struct->decodeMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewASTCDecodeModeEXT::initialize(const ImageViewASTCDecodeModeEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    decodeMode = copy_src->decodeMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceASTCDecodeFeaturesEXT::PhysicalDeviceASTCDecodeFeaturesEXT(const VkPhysicalDeviceASTCDecodeFeaturesEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), decodeModeSharedExponent(in_struct->decodeModeSharedExponent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceASTCDecodeFeaturesEXT::PhysicalDeviceASTCDecodeFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT), pNext(nullptr), decodeModeSharedExponent() {}

PhysicalDeviceASTCDecodeFeaturesEXT::PhysicalDeviceASTCDecodeFeaturesEXT(const PhysicalDeviceASTCDecodeFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    decodeModeSharedExponent = copy_src.decodeModeSharedExponent;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceASTCDecodeFeaturesEXT& PhysicalDeviceASTCDecodeFeaturesEXT::operator=(
    const PhysicalDeviceASTCDecodeFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    decodeModeSharedExponent = copy_src.decodeModeSharedExponent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceASTCDecodeFeaturesEXT::~PhysicalDeviceASTCDecodeFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceASTCDecodeFeaturesEXT::initialize(const VkPhysicalDeviceASTCDecodeFeaturesEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    decodeModeSharedExponent = in_struct->decodeModeSharedExponent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceASTCDecodeFeaturesEXT::initialize(const PhysicalDeviceASTCDecodeFeaturesEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    decodeModeSharedExponent = copy_src->decodeModeSharedExponent;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePipelineRobustnessFeaturesEXT::PhysicalDevicePipelineRobustnessFeaturesEXT(
    const VkPhysicalDevicePipelineRobustnessFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pipelineRobustness(in_struct->pipelineRobustness) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineRobustnessFeaturesEXT::PhysicalDevicePipelineRobustnessFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT), pNext(nullptr), pipelineRobustness() {}

PhysicalDevicePipelineRobustnessFeaturesEXT::PhysicalDevicePipelineRobustnessFeaturesEXT(
    const PhysicalDevicePipelineRobustnessFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    pipelineRobustness = copy_src.pipelineRobustness;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineRobustnessFeaturesEXT& PhysicalDevicePipelineRobustnessFeaturesEXT::operator=(
    const PhysicalDevicePipelineRobustnessFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineRobustness = copy_src.pipelineRobustness;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineRobustnessFeaturesEXT::~PhysicalDevicePipelineRobustnessFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePipelineRobustnessFeaturesEXT::initialize(const VkPhysicalDevicePipelineRobustnessFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineRobustness = in_struct->pipelineRobustness;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineRobustnessFeaturesEXT::initialize(const PhysicalDevicePipelineRobustnessFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineRobustness = copy_src->pipelineRobustness;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePipelineRobustnessPropertiesEXT::PhysicalDevicePipelineRobustnessPropertiesEXT(
    const VkPhysicalDevicePipelineRobustnessPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      defaultRobustnessStorageBuffers(in_struct->defaultRobustnessStorageBuffers),
      defaultRobustnessUniformBuffers(in_struct->defaultRobustnessUniformBuffers),
      defaultRobustnessVertexInputs(in_struct->defaultRobustnessVertexInputs),
      defaultRobustnessImages(in_struct->defaultRobustnessImages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineRobustnessPropertiesEXT::PhysicalDevicePipelineRobustnessPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT),
      pNext(nullptr),
      defaultRobustnessStorageBuffers(),
      defaultRobustnessUniformBuffers(),
      defaultRobustnessVertexInputs(),
      defaultRobustnessImages() {}

PhysicalDevicePipelineRobustnessPropertiesEXT::PhysicalDevicePipelineRobustnessPropertiesEXT(
    const PhysicalDevicePipelineRobustnessPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    defaultRobustnessStorageBuffers = copy_src.defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = copy_src.defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = copy_src.defaultRobustnessVertexInputs;
    defaultRobustnessImages = copy_src.defaultRobustnessImages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineRobustnessPropertiesEXT& PhysicalDevicePipelineRobustnessPropertiesEXT::operator=(
    const PhysicalDevicePipelineRobustnessPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    defaultRobustnessStorageBuffers = copy_src.defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = copy_src.defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = copy_src.defaultRobustnessVertexInputs;
    defaultRobustnessImages = copy_src.defaultRobustnessImages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineRobustnessPropertiesEXT::~PhysicalDevicePipelineRobustnessPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePipelineRobustnessPropertiesEXT::initialize(const VkPhysicalDevicePipelineRobustnessPropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    defaultRobustnessStorageBuffers = in_struct->defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = in_struct->defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = in_struct->defaultRobustnessVertexInputs;
    defaultRobustnessImages = in_struct->defaultRobustnessImages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineRobustnessPropertiesEXT::initialize(const PhysicalDevicePipelineRobustnessPropertiesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    defaultRobustnessStorageBuffers = copy_src->defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = copy_src->defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = copy_src->defaultRobustnessVertexInputs;
    defaultRobustnessImages = copy_src->defaultRobustnessImages;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRobustnessCreateInfoEXT::PipelineRobustnessCreateInfoEXT(const VkPipelineRobustnessCreateInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffers(in_struct->storageBuffers),
      uniformBuffers(in_struct->uniformBuffers),
      vertexInputs(in_struct->vertexInputs),
      images(in_struct->images) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRobustnessCreateInfoEXT::PipelineRobustnessCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT),
      pNext(nullptr),
      storageBuffers(),
      uniformBuffers(),
      vertexInputs(),
      images() {}

PipelineRobustnessCreateInfoEXT::PipelineRobustnessCreateInfoEXT(const PipelineRobustnessCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    storageBuffers = copy_src.storageBuffers;
    uniformBuffers = copy_src.uniformBuffers;
    vertexInputs = copy_src.vertexInputs;
    images = copy_src.images;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRobustnessCreateInfoEXT& PipelineRobustnessCreateInfoEXT::operator=(const PipelineRobustnessCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffers = copy_src.storageBuffers;
    uniformBuffers = copy_src.uniformBuffers;
    vertexInputs = copy_src.vertexInputs;
    images = copy_src.images;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRobustnessCreateInfoEXT::~PipelineRobustnessCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineRobustnessCreateInfoEXT::initialize(const VkPipelineRobustnessCreateInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffers = in_struct->storageBuffers;
    uniformBuffers = in_struct->uniformBuffers;
    vertexInputs = in_struct->vertexInputs;
    images = in_struct->images;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRobustnessCreateInfoEXT::initialize(const PipelineRobustnessCreateInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffers = copy_src->storageBuffers;
    uniformBuffers = copy_src->uniformBuffers;
    vertexInputs = copy_src->vertexInputs;
    images = copy_src->images;
    pNext = SafePnextCopy(copy_src->pNext);
}

ConditionalRenderingBeginInfoEXT::ConditionalRenderingBeginInfoEXT(const VkConditionalRenderingBeginInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer), offset(in_struct->offset), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ConditionalRenderingBeginInfoEXT::ConditionalRenderingBeginInfoEXT()
    : sType(VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT), pNext(nullptr), buffer(), offset(), flags() {}

ConditionalRenderingBeginInfoEXT::ConditionalRenderingBeginInfoEXT(const ConditionalRenderingBeginInfoEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

ConditionalRenderingBeginInfoEXT& ConditionalRenderingBeginInfoEXT::operator=(const ConditionalRenderingBeginInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ConditionalRenderingBeginInfoEXT::~ConditionalRenderingBeginInfoEXT() { FreePnextChain(pNext); }

void ConditionalRenderingBeginInfoEXT::initialize(const VkConditionalRenderingBeginInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ConditionalRenderingBeginInfoEXT::initialize(const ConditionalRenderingBeginInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceConditionalRenderingFeaturesEXT::PhysicalDeviceConditionalRenderingFeaturesEXT(
    const VkPhysicalDeviceConditionalRenderingFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      conditionalRendering(in_struct->conditionalRendering),
      inheritedConditionalRendering(in_struct->inheritedConditionalRendering) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceConditionalRenderingFeaturesEXT::PhysicalDeviceConditionalRenderingFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT),
      pNext(nullptr),
      conditionalRendering(),
      inheritedConditionalRendering() {}

PhysicalDeviceConditionalRenderingFeaturesEXT::PhysicalDeviceConditionalRenderingFeaturesEXT(
    const PhysicalDeviceConditionalRenderingFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    conditionalRendering = copy_src.conditionalRendering;
    inheritedConditionalRendering = copy_src.inheritedConditionalRendering;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceConditionalRenderingFeaturesEXT& PhysicalDeviceConditionalRenderingFeaturesEXT::operator=(
    const PhysicalDeviceConditionalRenderingFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    conditionalRendering = copy_src.conditionalRendering;
    inheritedConditionalRendering = copy_src.inheritedConditionalRendering;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceConditionalRenderingFeaturesEXT::~PhysicalDeviceConditionalRenderingFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceConditionalRenderingFeaturesEXT::initialize(const VkPhysicalDeviceConditionalRenderingFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    conditionalRendering = in_struct->conditionalRendering;
    inheritedConditionalRendering = in_struct->inheritedConditionalRendering;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceConditionalRenderingFeaturesEXT::initialize(const PhysicalDeviceConditionalRenderingFeaturesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    conditionalRendering = copy_src->conditionalRendering;
    inheritedConditionalRendering = copy_src->inheritedConditionalRendering;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferInheritanceConditionalRenderingInfoEXT::CommandBufferInheritanceConditionalRenderingInfoEXT(
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), conditionalRenderingEnable(in_struct->conditionalRenderingEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandBufferInheritanceConditionalRenderingInfoEXT::CommandBufferInheritanceConditionalRenderingInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT),
      pNext(nullptr),
      conditionalRenderingEnable() {}

CommandBufferInheritanceConditionalRenderingInfoEXT::CommandBufferInheritanceConditionalRenderingInfoEXT(
    const CommandBufferInheritanceConditionalRenderingInfoEXT& copy_src) {
    sType = copy_src.sType;
    conditionalRenderingEnable = copy_src.conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandBufferInheritanceConditionalRenderingInfoEXT& CommandBufferInheritanceConditionalRenderingInfoEXT::operator=(
    const CommandBufferInheritanceConditionalRenderingInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    conditionalRenderingEnable = copy_src.conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandBufferInheritanceConditionalRenderingInfoEXT::~CommandBufferInheritanceConditionalRenderingInfoEXT() {
    FreePnextChain(pNext);
}

void CommandBufferInheritanceConditionalRenderingInfoEXT::initialize(
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    conditionalRenderingEnable = in_struct->conditionalRenderingEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandBufferInheritanceConditionalRenderingInfoEXT::initialize(
    const CommandBufferInheritanceConditionalRenderingInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    conditionalRenderingEnable = copy_src->conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceCapabilities2EXT::SurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minImageCount(in_struct->minImageCount),
      maxImageCount(in_struct->maxImageCount),
      currentExtent(in_struct->currentExtent),
      minImageExtent(in_struct->minImageExtent),
      maxImageExtent(in_struct->maxImageExtent),
      maxImageArrayLayers(in_struct->maxImageArrayLayers),
      supportedTransforms(in_struct->supportedTransforms),
      currentTransform(in_struct->currentTransform),
      supportedCompositeAlpha(in_struct->supportedCompositeAlpha),
      supportedUsageFlags(in_struct->supportedUsageFlags),
      supportedSurfaceCounters(in_struct->supportedSurfaceCounters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceCapabilities2EXT::SurfaceCapabilities2EXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT),
      pNext(nullptr),
      minImageCount(),
      maxImageCount(),
      currentExtent(),
      minImageExtent(),
      maxImageExtent(),
      maxImageArrayLayers(),
      supportedTransforms(),
      currentTransform(),
      supportedCompositeAlpha(),
      supportedUsageFlags(),
      supportedSurfaceCounters() {}

SurfaceCapabilities2EXT::SurfaceCapabilities2EXT(const SurfaceCapabilities2EXT& copy_src) {
    sType = copy_src.sType;
    minImageCount = copy_src.minImageCount;
    maxImageCount = copy_src.maxImageCount;
    currentExtent = copy_src.currentExtent;
    minImageExtent = copy_src.minImageExtent;
    maxImageExtent = copy_src.maxImageExtent;
    maxImageArrayLayers = copy_src.maxImageArrayLayers;
    supportedTransforms = copy_src.supportedTransforms;
    currentTransform = copy_src.currentTransform;
    supportedCompositeAlpha = copy_src.supportedCompositeAlpha;
    supportedUsageFlags = copy_src.supportedUsageFlags;
    supportedSurfaceCounters = copy_src.supportedSurfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceCapabilities2EXT& SurfaceCapabilities2EXT::operator=(const SurfaceCapabilities2EXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minImageCount = copy_src.minImageCount;
    maxImageCount = copy_src.maxImageCount;
    currentExtent = copy_src.currentExtent;
    minImageExtent = copy_src.minImageExtent;
    maxImageExtent = copy_src.maxImageExtent;
    maxImageArrayLayers = copy_src.maxImageArrayLayers;
    supportedTransforms = copy_src.supportedTransforms;
    currentTransform = copy_src.currentTransform;
    supportedCompositeAlpha = copy_src.supportedCompositeAlpha;
    supportedUsageFlags = copy_src.supportedUsageFlags;
    supportedSurfaceCounters = copy_src.supportedSurfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceCapabilities2EXT::~SurfaceCapabilities2EXT() { FreePnextChain(pNext); }

void SurfaceCapabilities2EXT::initialize(const VkSurfaceCapabilities2EXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minImageCount = in_struct->minImageCount;
    maxImageCount = in_struct->maxImageCount;
    currentExtent = in_struct->currentExtent;
    minImageExtent = in_struct->minImageExtent;
    maxImageExtent = in_struct->maxImageExtent;
    maxImageArrayLayers = in_struct->maxImageArrayLayers;
    supportedTransforms = in_struct->supportedTransforms;
    currentTransform = in_struct->currentTransform;
    supportedCompositeAlpha = in_struct->supportedCompositeAlpha;
    supportedUsageFlags = in_struct->supportedUsageFlags;
    supportedSurfaceCounters = in_struct->supportedSurfaceCounters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceCapabilities2EXT::initialize(const SurfaceCapabilities2EXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minImageCount = copy_src->minImageCount;
    maxImageCount = copy_src->maxImageCount;
    currentExtent = copy_src->currentExtent;
    minImageExtent = copy_src->minImageExtent;
    maxImageExtent = copy_src->maxImageExtent;
    maxImageArrayLayers = copy_src->maxImageArrayLayers;
    supportedTransforms = copy_src->supportedTransforms;
    currentTransform = copy_src->currentTransform;
    supportedCompositeAlpha = copy_src->supportedCompositeAlpha;
    supportedUsageFlags = copy_src->supportedUsageFlags;
    supportedSurfaceCounters = copy_src->supportedSurfaceCounters;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPowerInfoEXT::DisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), powerState(in_struct->powerState) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayPowerInfoEXT::DisplayPowerInfoEXT() : sType(VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT), pNext(nullptr), powerState() {}

DisplayPowerInfoEXT::DisplayPowerInfoEXT(const DisplayPowerInfoEXT& copy_src) {
    sType = copy_src.sType;
    powerState = copy_src.powerState;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayPowerInfoEXT& DisplayPowerInfoEXT::operator=(const DisplayPowerInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    powerState = copy_src.powerState;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayPowerInfoEXT::~DisplayPowerInfoEXT() { FreePnextChain(pNext); }

void DisplayPowerInfoEXT::initialize(const VkDisplayPowerInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    powerState = in_struct->powerState;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayPowerInfoEXT::initialize(const DisplayPowerInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    powerState = copy_src->powerState;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceEventInfoEXT::DeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), deviceEvent(in_struct->deviceEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceEventInfoEXT::DeviceEventInfoEXT() : sType(VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT), pNext(nullptr), deviceEvent() {}

DeviceEventInfoEXT::DeviceEventInfoEXT(const DeviceEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    deviceEvent = copy_src.deviceEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceEventInfoEXT& DeviceEventInfoEXT::operator=(const DeviceEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceEvent = copy_src.deviceEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceEventInfoEXT::~DeviceEventInfoEXT() { FreePnextChain(pNext); }

void DeviceEventInfoEXT::initialize(const VkDeviceEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceEvent = in_struct->deviceEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceEventInfoEXT::initialize(const DeviceEventInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceEvent = copy_src->deviceEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayEventInfoEXT::DisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), displayEvent(in_struct->displayEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayEventInfoEXT::DisplayEventInfoEXT() : sType(VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT), pNext(nullptr), displayEvent() {}

DisplayEventInfoEXT::DisplayEventInfoEXT(const DisplayEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    displayEvent = copy_src.displayEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayEventInfoEXT& DisplayEventInfoEXT::operator=(const DisplayEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayEvent = copy_src.displayEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayEventInfoEXT::~DisplayEventInfoEXT() { FreePnextChain(pNext); }

void DisplayEventInfoEXT::initialize(const VkDisplayEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayEvent = in_struct->displayEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayEventInfoEXT::initialize(const DisplayEventInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayEvent = copy_src->displayEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

SwapchainCounterCreateInfoEXT::SwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), surfaceCounters(in_struct->surfaceCounters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SwapchainCounterCreateInfoEXT::SwapchainCounterCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT), pNext(nullptr), surfaceCounters() {}

SwapchainCounterCreateInfoEXT::SwapchainCounterCreateInfoEXT(const SwapchainCounterCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    surfaceCounters = copy_src.surfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);
}

SwapchainCounterCreateInfoEXT& SwapchainCounterCreateInfoEXT::operator=(const SwapchainCounterCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    surfaceCounters = copy_src.surfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SwapchainCounterCreateInfoEXT::~SwapchainCounterCreateInfoEXT() { FreePnextChain(pNext); }

void SwapchainCounterCreateInfoEXT::initialize(const VkSwapchainCounterCreateInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    surfaceCounters = in_struct->surfaceCounters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SwapchainCounterCreateInfoEXT::initialize(const SwapchainCounterCreateInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    surfaceCounters = copy_src->surfaceCounters;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDiscardRectanglePropertiesEXT::PhysicalDeviceDiscardRectanglePropertiesEXT(
    const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxDiscardRectangles(in_struct->maxDiscardRectangles) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDiscardRectanglePropertiesEXT::PhysicalDeviceDiscardRectanglePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT), pNext(nullptr), maxDiscardRectangles() {}

PhysicalDeviceDiscardRectanglePropertiesEXT::PhysicalDeviceDiscardRectanglePropertiesEXT(
    const PhysicalDeviceDiscardRectanglePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxDiscardRectangles = copy_src.maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDiscardRectanglePropertiesEXT& PhysicalDeviceDiscardRectanglePropertiesEXT::operator=(
    const PhysicalDeviceDiscardRectanglePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxDiscardRectangles = copy_src.maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDiscardRectanglePropertiesEXT::~PhysicalDeviceDiscardRectanglePropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxDiscardRectangles = in_struct->maxDiscardRectangles;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const PhysicalDeviceDiscardRectanglePropertiesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxDiscardRectangles = copy_src->maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineDiscardRectangleStateCreateInfoEXT::PipelineDiscardRectangleStateCreateInfoEXT(
    const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      discardRectangleMode(in_struct->discardRectangleMode),
      discardRectangleCount(in_struct->discardRectangleCount),
      pDiscardRectangles(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy((void*)pDiscardRectangles, (void*)in_struct->pDiscardRectangles,
               sizeof(VkRect2D) * in_struct->discardRectangleCount);
    }
}

PipelineDiscardRectangleStateCreateInfoEXT::PipelineDiscardRectangleStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      discardRectangleMode(),
      discardRectangleCount(),
      pDiscardRectangles(nullptr) {}

PipelineDiscardRectangleStateCreateInfoEXT::PipelineDiscardRectangleStateCreateInfoEXT(
    const PipelineDiscardRectangleStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    discardRectangleMode = copy_src.discardRectangleMode;
    discardRectangleCount = copy_src.discardRectangleCount;
    pDiscardRectangles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[copy_src.discardRectangleCount];
        memcpy((void*)pDiscardRectangles, (void*)copy_src.pDiscardRectangles, sizeof(VkRect2D) * copy_src.discardRectangleCount);
    }
}

PipelineDiscardRectangleStateCreateInfoEXT& PipelineDiscardRectangleStateCreateInfoEXT::operator=(
    const PipelineDiscardRectangleStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDiscardRectangles) delete[] pDiscardRectangles;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    discardRectangleMode = copy_src.discardRectangleMode;
    discardRectangleCount = copy_src.discardRectangleCount;
    pDiscardRectangles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[copy_src.discardRectangleCount];
        memcpy((void*)pDiscardRectangles, (void*)copy_src.pDiscardRectangles, sizeof(VkRect2D) * copy_src.discardRectangleCount);
    }

    return *this;
}

PipelineDiscardRectangleStateCreateInfoEXT::~PipelineDiscardRectangleStateCreateInfoEXT() {
    if (pDiscardRectangles) delete[] pDiscardRectangles;
    FreePnextChain(pNext);
}

void PipelineDiscardRectangleStateCreateInfoEXT::initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDiscardRectangles) delete[] pDiscardRectangles;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    discardRectangleMode = in_struct->discardRectangleMode;
    discardRectangleCount = in_struct->discardRectangleCount;
    pDiscardRectangles = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy((void*)pDiscardRectangles, (void*)in_struct->pDiscardRectangles,
               sizeof(VkRect2D) * in_struct->discardRectangleCount);
    }
}

void PipelineDiscardRectangleStateCreateInfoEXT::initialize(const PipelineDiscardRectangleStateCreateInfoEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    discardRectangleMode = copy_src->discardRectangleMode;
    discardRectangleCount = copy_src->discardRectangleCount;
    pDiscardRectangles = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[copy_src->discardRectangleCount];
        memcpy((void*)pDiscardRectangles, (void*)copy_src->pDiscardRectangles, sizeof(VkRect2D) * copy_src->discardRectangleCount);
    }
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::PhysicalDeviceConservativeRasterizationPropertiesEXT(
    const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      primitiveOverestimationSize(in_struct->primitiveOverestimationSize),
      maxExtraPrimitiveOverestimationSize(in_struct->maxExtraPrimitiveOverestimationSize),
      extraPrimitiveOverestimationSizeGranularity(in_struct->extraPrimitiveOverestimationSizeGranularity),
      primitiveUnderestimation(in_struct->primitiveUnderestimation),
      conservativePointAndLineRasterization(in_struct->conservativePointAndLineRasterization),
      degenerateTrianglesRasterized(in_struct->degenerateTrianglesRasterized),
      degenerateLinesRasterized(in_struct->degenerateLinesRasterized),
      fullyCoveredFragmentShaderInputVariable(in_struct->fullyCoveredFragmentShaderInputVariable),
      conservativeRasterizationPostDepthCoverage(in_struct->conservativeRasterizationPostDepthCoverage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::PhysicalDeviceConservativeRasterizationPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT),
      pNext(nullptr),
      primitiveOverestimationSize(),
      maxExtraPrimitiveOverestimationSize(),
      extraPrimitiveOverestimationSizeGranularity(),
      primitiveUnderestimation(),
      conservativePointAndLineRasterization(),
      degenerateTrianglesRasterized(),
      degenerateLinesRasterized(),
      fullyCoveredFragmentShaderInputVariable(),
      conservativeRasterizationPostDepthCoverage() {}

PhysicalDeviceConservativeRasterizationPropertiesEXT::PhysicalDeviceConservativeRasterizationPropertiesEXT(
    const PhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    primitiveOverestimationSize = copy_src.primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = copy_src.maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = copy_src.extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = copy_src.primitiveUnderestimation;
    conservativePointAndLineRasterization = copy_src.conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = copy_src.degenerateTrianglesRasterized;
    degenerateLinesRasterized = copy_src.degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = copy_src.fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = copy_src.conservativeRasterizationPostDepthCoverage;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceConservativeRasterizationPropertiesEXT& PhysicalDeviceConservativeRasterizationPropertiesEXT::operator=(
    const PhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    primitiveOverestimationSize = copy_src.primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = copy_src.maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = copy_src.extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = copy_src.primitiveUnderestimation;
    conservativePointAndLineRasterization = copy_src.conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = copy_src.degenerateTrianglesRasterized;
    degenerateLinesRasterized = copy_src.degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = copy_src.fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = copy_src.conservativeRasterizationPostDepthCoverage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::~PhysicalDeviceConservativeRasterizationPropertiesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(
    const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    primitiveOverestimationSize = in_struct->primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = in_struct->maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = in_struct->extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = in_struct->primitiveUnderestimation;
    conservativePointAndLineRasterization = in_struct->conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = in_struct->degenerateTrianglesRasterized;
    degenerateLinesRasterized = in_struct->degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = in_struct->fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = in_struct->conservativeRasterizationPostDepthCoverage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(
    const PhysicalDeviceConservativeRasterizationPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    primitiveOverestimationSize = copy_src->primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = copy_src->maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = copy_src->extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = copy_src->primitiveUnderestimation;
    conservativePointAndLineRasterization = copy_src->conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = copy_src->degenerateTrianglesRasterized;
    degenerateLinesRasterized = copy_src->degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = copy_src->fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = copy_src->conservativeRasterizationPostDepthCoverage;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationConservativeStateCreateInfoEXT::PipelineRasterizationConservativeStateCreateInfoEXT(
    const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      conservativeRasterizationMode(in_struct->conservativeRasterizationMode),
      extraPrimitiveOverestimationSize(in_struct->extraPrimitiveOverestimationSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationConservativeStateCreateInfoEXT::PipelineRasterizationConservativeStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      conservativeRasterizationMode(),
      extraPrimitiveOverestimationSize() {}

PipelineRasterizationConservativeStateCreateInfoEXT::PipelineRasterizationConservativeStateCreateInfoEXT(
    const PipelineRasterizationConservativeStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    conservativeRasterizationMode = copy_src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src.extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationConservativeStateCreateInfoEXT& PipelineRasterizationConservativeStateCreateInfoEXT::operator=(
    const PipelineRasterizationConservativeStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    conservativeRasterizationMode = copy_src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src.extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationConservativeStateCreateInfoEXT::~PipelineRasterizationConservativeStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void PipelineRasterizationConservativeStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    conservativeRasterizationMode = in_struct->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = in_struct->extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationConservativeStateCreateInfoEXT::initialize(
    const PipelineRasterizationConservativeStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    conservativeRasterizationMode = copy_src->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src->extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDepthClipEnableFeaturesEXT::PhysicalDeviceDepthClipEnableFeaturesEXT(
    const VkPhysicalDeviceDepthClipEnableFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), depthClipEnable(in_struct->depthClipEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDepthClipEnableFeaturesEXT::PhysicalDeviceDepthClipEnableFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT), pNext(nullptr), depthClipEnable() {}

PhysicalDeviceDepthClipEnableFeaturesEXT::PhysicalDeviceDepthClipEnableFeaturesEXT(
    const PhysicalDeviceDepthClipEnableFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDepthClipEnableFeaturesEXT& PhysicalDeviceDepthClipEnableFeaturesEXT::operator=(
    const PhysicalDeviceDepthClipEnableFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDepthClipEnableFeaturesEXT::~PhysicalDeviceDepthClipEnableFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDepthClipEnableFeaturesEXT::initialize(const VkPhysicalDeviceDepthClipEnableFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthClipEnable = in_struct->depthClipEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDepthClipEnableFeaturesEXT::initialize(const PhysicalDeviceDepthClipEnableFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthClipEnable = copy_src->depthClipEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationDepthClipStateCreateInfoEXT::PipelineRasterizationDepthClipStateCreateInfoEXT(
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), depthClipEnable(in_struct->depthClipEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationDepthClipStateCreateInfoEXT::PipelineRasterizationDepthClipStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      depthClipEnable() {}

PipelineRasterizationDepthClipStateCreateInfoEXT::PipelineRasterizationDepthClipStateCreateInfoEXT(
    const PipelineRasterizationDepthClipStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationDepthClipStateCreateInfoEXT& PipelineRasterizationDepthClipStateCreateInfoEXT::operator=(
    const PipelineRasterizationDepthClipStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationDepthClipStateCreateInfoEXT::~PipelineRasterizationDepthClipStateCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineRasterizationDepthClipStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthClipEnable = in_struct->depthClipEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationDepthClipStateCreateInfoEXT::initialize(const PipelineRasterizationDepthClipStateCreateInfoEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthClipEnable = copy_src->depthClipEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

HdrMetadataEXT::HdrMetadataEXT(const VkHdrMetadataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      displayPrimaryRed(in_struct->displayPrimaryRed),
      displayPrimaryGreen(in_struct->displayPrimaryGreen),
      displayPrimaryBlue(in_struct->displayPrimaryBlue),
      whitePoint(in_struct->whitePoint),
      maxLuminance(in_struct->maxLuminance),
      minLuminance(in_struct->minLuminance),
      maxContentLightLevel(in_struct->maxContentLightLevel),
      maxFrameAverageLightLevel(in_struct->maxFrameAverageLightLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

HdrMetadataEXT::HdrMetadataEXT()
    : sType(VK_STRUCTURE_TYPE_HDR_METADATA_EXT),
      pNext(nullptr),
      displayPrimaryRed(),
      displayPrimaryGreen(),
      displayPrimaryBlue(),
      whitePoint(),
      maxLuminance(),
      minLuminance(),
      maxContentLightLevel(),
      maxFrameAverageLightLevel() {}

HdrMetadataEXT::HdrMetadataEXT(const HdrMetadataEXT& copy_src) {
    sType = copy_src.sType;
    displayPrimaryRed = copy_src.displayPrimaryRed;
    displayPrimaryGreen = copy_src.displayPrimaryGreen;
    displayPrimaryBlue = copy_src.displayPrimaryBlue;
    whitePoint = copy_src.whitePoint;
    maxLuminance = copy_src.maxLuminance;
    minLuminance = copy_src.minLuminance;
    maxContentLightLevel = copy_src.maxContentLightLevel;
    maxFrameAverageLightLevel = copy_src.maxFrameAverageLightLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

HdrMetadataEXT& HdrMetadataEXT::operator=(const HdrMetadataEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayPrimaryRed = copy_src.displayPrimaryRed;
    displayPrimaryGreen = copy_src.displayPrimaryGreen;
    displayPrimaryBlue = copy_src.displayPrimaryBlue;
    whitePoint = copy_src.whitePoint;
    maxLuminance = copy_src.maxLuminance;
    minLuminance = copy_src.minLuminance;
    maxContentLightLevel = copy_src.maxContentLightLevel;
    maxFrameAverageLightLevel = copy_src.maxFrameAverageLightLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

HdrMetadataEXT::~HdrMetadataEXT() { FreePnextChain(pNext); }

void HdrMetadataEXT::initialize(const VkHdrMetadataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayPrimaryRed = in_struct->displayPrimaryRed;
    displayPrimaryGreen = in_struct->displayPrimaryGreen;
    displayPrimaryBlue = in_struct->displayPrimaryBlue;
    whitePoint = in_struct->whitePoint;
    maxLuminance = in_struct->maxLuminance;
    minLuminance = in_struct->minLuminance;
    maxContentLightLevel = in_struct->maxContentLightLevel;
    maxFrameAverageLightLevel = in_struct->maxFrameAverageLightLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void HdrMetadataEXT::initialize(const HdrMetadataEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayPrimaryRed = copy_src->displayPrimaryRed;
    displayPrimaryGreen = copy_src->displayPrimaryGreen;
    displayPrimaryBlue = copy_src->displayPrimaryBlue;
    whitePoint = copy_src->whitePoint;
    maxLuminance = copy_src->maxLuminance;
    minLuminance = copy_src->minLuminance;
    maxContentLightLevel = copy_src->maxContentLightLevel;
    maxFrameAverageLightLevel = copy_src->maxFrameAverageLightLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

DebugUtilsLabelEXT::DebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pLabelName = SafeStringCopy(in_struct->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

DebugUtilsLabelEXT::DebugUtilsLabelEXT() : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT), pNext(nullptr), pLabelName(nullptr) {}

DebugUtilsLabelEXT::DebugUtilsLabelEXT(const DebugUtilsLabelEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pLabelName = SafeStringCopy(copy_src.pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }
}

DebugUtilsLabelEXT& DebugUtilsLabelEXT::operator=(const DebugUtilsLabelEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pLabelName) delete[] pLabelName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pLabelName = SafeStringCopy(copy_src.pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }

    return *this;
}

DebugUtilsLabelEXT::~DebugUtilsLabelEXT() {
    if (pLabelName) delete[] pLabelName;
    FreePnextChain(pNext);
}

void DebugUtilsLabelEXT::initialize(const VkDebugUtilsLabelEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLabelName) delete[] pLabelName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pLabelName = SafeStringCopy(in_struct->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

void DebugUtilsLabelEXT::initialize(const DebugUtilsLabelEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
    pLabelName = SafeStringCopy(copy_src->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src->color[i];
    }
}

DebugUtilsObjectNameInfoEXT::DebugUtilsObjectNameInfoEXT(const VkDebugUtilsObjectNameInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), objectType(in_struct->objectType), objectHandle(in_struct->objectHandle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

DebugUtilsObjectNameInfoEXT::DebugUtilsObjectNameInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT),
      pNext(nullptr),
      objectType(),
      objectHandle(),
      pObjectName(nullptr) {}

DebugUtilsObjectNameInfoEXT::DebugUtilsObjectNameInfoEXT(const DebugUtilsObjectNameInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);
}

DebugUtilsObjectNameInfoEXT& DebugUtilsObjectNameInfoEXT::operator=(const DebugUtilsObjectNameInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);

    return *this;
}

DebugUtilsObjectNameInfoEXT::~DebugUtilsObjectNameInfoEXT() {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
}

void DebugUtilsObjectNameInfoEXT::initialize(const VkDebugUtilsObjectNameInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    objectHandle = in_struct->objectHandle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

void DebugUtilsObjectNameInfoEXT::initialize(const DebugUtilsObjectNameInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    objectHandle = copy_src->objectHandle;
    pNext = SafePnextCopy(copy_src->pNext);
    pObjectName = SafeStringCopy(copy_src->pObjectName);
}

DebugUtilsMessengerCallbackDataEXT::DebugUtilsMessengerCallbackDataEXT(const VkDebugUtilsMessengerCallbackDataEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      messageIdNumber(in_struct->messageIdNumber),
      queueLabelCount(in_struct->queueLabelCount),
      pQueueLabels(nullptr),
      cmdBufLabelCount(in_struct->cmdBufLabelCount),
      pCmdBufLabels(nullptr),
      objectCount(in_struct->objectCount),
      pObjects(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pMessageIdName = SafeStringCopy(in_struct->pMessageIdName);
    pMessage = SafeStringCopy(in_struct->pMessage);
    if (queueLabelCount && in_struct->pQueueLabels) {
        pQueueLabels = new DebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&in_struct->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && in_struct->pCmdBufLabels) {
        pCmdBufLabels = new DebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&in_struct->pCmdBufLabels[i]);
        }
    }
    if (objectCount && in_struct->pObjects) {
        pObjects = new DebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&in_struct->pObjects[i]);
        }
    }
}

DebugUtilsMessengerCallbackDataEXT::DebugUtilsMessengerCallbackDataEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT),
      pNext(nullptr),
      flags(),
      pMessageIdName(nullptr),
      messageIdNumber(),
      pMessage(nullptr),
      queueLabelCount(),
      pQueueLabels(nullptr),
      cmdBufLabelCount(),
      pCmdBufLabels(nullptr),
      objectCount(),
      pObjects(nullptr) {}

DebugUtilsMessengerCallbackDataEXT::DebugUtilsMessengerCallbackDataEXT(const DebugUtilsMessengerCallbackDataEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    messageIdNumber = copy_src.messageIdNumber;
    queueLabelCount = copy_src.queueLabelCount;
    pQueueLabels = nullptr;
    cmdBufLabelCount = copy_src.cmdBufLabelCount;
    pCmdBufLabels = nullptr;
    objectCount = copy_src.objectCount;
    pObjects = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pMessageIdName = SafeStringCopy(copy_src.pMessageIdName);
    pMessage = SafeStringCopy(copy_src.pMessage);
    if (queueLabelCount && copy_src.pQueueLabels) {
        pQueueLabels = new DebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src.pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src.pCmdBufLabels) {
        pCmdBufLabels = new DebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src.pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src.pObjects) {
        pObjects = new DebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src.pObjects[i]);
        }
    }
}

DebugUtilsMessengerCallbackDataEXT& DebugUtilsMessengerCallbackDataEXT::operator=(
    const DebugUtilsMessengerCallbackDataEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pMessageIdName) delete[] pMessageIdName;
    if (pMessage) delete[] pMessage;
    if (pQueueLabels) delete[] pQueueLabels;
    if (pCmdBufLabels) delete[] pCmdBufLabels;
    if (pObjects) delete[] pObjects;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    messageIdNumber = copy_src.messageIdNumber;
    queueLabelCount = copy_src.queueLabelCount;
    pQueueLabels = nullptr;
    cmdBufLabelCount = copy_src.cmdBufLabelCount;
    pCmdBufLabels = nullptr;
    objectCount = copy_src.objectCount;
    pObjects = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pMessageIdName = SafeStringCopy(copy_src.pMessageIdName);
    pMessage = SafeStringCopy(copy_src.pMessage);
    if (queueLabelCount && copy_src.pQueueLabels) {
        pQueueLabels = new DebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src.pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src.pCmdBufLabels) {
        pCmdBufLabels = new DebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src.pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src.pObjects) {
        pObjects = new DebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src.pObjects[i]);
        }
    }

    return *this;
}

DebugUtilsMessengerCallbackDataEXT::~DebugUtilsMessengerCallbackDataEXT() {
    if (pMessageIdName) delete[] pMessageIdName;
    if (pMessage) delete[] pMessage;
    if (pQueueLabels) delete[] pQueueLabels;
    if (pCmdBufLabels) delete[] pCmdBufLabels;
    if (pObjects) delete[] pObjects;
    FreePnextChain(pNext);
}

void DebugUtilsMessengerCallbackDataEXT::initialize(const VkDebugUtilsMessengerCallbackDataEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMessageIdName) delete[] pMessageIdName;
    if (pMessage) delete[] pMessage;
    if (pQueueLabels) delete[] pQueueLabels;
    if (pCmdBufLabels) delete[] pCmdBufLabels;
    if (pObjects) delete[] pObjects;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    messageIdNumber = in_struct->messageIdNumber;
    queueLabelCount = in_struct->queueLabelCount;
    pQueueLabels = nullptr;
    cmdBufLabelCount = in_struct->cmdBufLabelCount;
    pCmdBufLabels = nullptr;
    objectCount = in_struct->objectCount;
    pObjects = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pMessageIdName = SafeStringCopy(in_struct->pMessageIdName);
    pMessage = SafeStringCopy(in_struct->pMessage);
    if (queueLabelCount && in_struct->pQueueLabels) {
        pQueueLabels = new DebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&in_struct->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && in_struct->pCmdBufLabels) {
        pCmdBufLabels = new DebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&in_struct->pCmdBufLabels[i]);
        }
    }
    if (objectCount && in_struct->pObjects) {
        pObjects = new DebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&in_struct->pObjects[i]);
        }
    }
}

void DebugUtilsMessengerCallbackDataEXT::initialize(const DebugUtilsMessengerCallbackDataEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    messageIdNumber = copy_src->messageIdNumber;
    queueLabelCount = copy_src->queueLabelCount;
    pQueueLabels = nullptr;
    cmdBufLabelCount = copy_src->cmdBufLabelCount;
    pCmdBufLabels = nullptr;
    objectCount = copy_src->objectCount;
    pObjects = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    pMessageIdName = SafeStringCopy(copy_src->pMessageIdName);
    pMessage = SafeStringCopy(copy_src->pMessage);
    if (queueLabelCount && copy_src->pQueueLabels) {
        pQueueLabels = new DebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src->pCmdBufLabels) {
        pCmdBufLabels = new DebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src->pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src->pObjects) {
        pObjects = new DebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src->pObjects[i]);
        }
    }
}

DebugUtilsMessengerCreateInfoEXT::DebugUtilsMessengerCreateInfoEXT(const VkDebugUtilsMessengerCreateInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      messageSeverity(in_struct->messageSeverity),
      messageType(in_struct->messageType),
      pfnUserCallback(in_struct->pfnUserCallback),
      pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DebugUtilsMessengerCreateInfoEXT::DebugUtilsMessengerCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      messageSeverity(),
      messageType(),
      pfnUserCallback(),
      pUserData(nullptr) {}

DebugUtilsMessengerCreateInfoEXT::DebugUtilsMessengerCreateInfoEXT(const DebugUtilsMessengerCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    messageSeverity = copy_src.messageSeverity;
    messageType = copy_src.messageType;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

DebugUtilsMessengerCreateInfoEXT& DebugUtilsMessengerCreateInfoEXT::operator=(const DebugUtilsMessengerCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    messageSeverity = copy_src.messageSeverity;
    messageType = copy_src.messageType;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DebugUtilsMessengerCreateInfoEXT::~DebugUtilsMessengerCreateInfoEXT() { FreePnextChain(pNext); }

void DebugUtilsMessengerCreateInfoEXT::initialize(const VkDebugUtilsMessengerCreateInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    messageSeverity = in_struct->messageSeverity;
    messageType = in_struct->messageType;
    pfnUserCallback = in_struct->pfnUserCallback;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DebugUtilsMessengerCreateInfoEXT::initialize(const DebugUtilsMessengerCreateInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    messageSeverity = copy_src->messageSeverity;
    messageType = copy_src->messageType;
    pfnUserCallback = copy_src->pfnUserCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

DebugUtilsObjectTagInfoEXT::DebugUtilsObjectTagInfoEXT(const VkDebugUtilsObjectTagInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      objectType(in_struct->objectType),
      objectHandle(in_struct->objectHandle),
      tagName(in_struct->tagName),
      tagSize(in_struct->tagSize),
      pTag(in_struct->pTag) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DebugUtilsObjectTagInfoEXT::DebugUtilsObjectTagInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT),
      pNext(nullptr),
      objectType(),
      objectHandle(),
      tagName(),
      tagSize(),
      pTag(nullptr) {}

DebugUtilsObjectTagInfoEXT::DebugUtilsObjectTagInfoEXT(const DebugUtilsObjectTagInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
}

DebugUtilsObjectTagInfoEXT& DebugUtilsObjectTagInfoEXT::operator=(const DebugUtilsObjectTagInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DebugUtilsObjectTagInfoEXT::~DebugUtilsObjectTagInfoEXT() { FreePnextChain(pNext); }

void DebugUtilsObjectTagInfoEXT::initialize(const VkDebugUtilsObjectTagInfoEXT* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    objectHandle = in_struct->objectHandle;
    tagName = in_struct->tagName;
    tagSize = in_struct->tagSize;
    pTag = in_struct->pTag;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DebugUtilsObjectTagInfoEXT::initialize(const DebugUtilsObjectTagInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    objectHandle = copy_src->objectHandle;
    tagName = copy_src->tagName;
    tagSize = copy_src->tagSize;
    pTag = copy_src->pTag;
    pNext = SafePnextCopy(copy_src->pNext);
}

SampleLocationsInfoEXT::SampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      sampleLocationsPerPixel(in_struct->sampleLocationsPerPixel),
      sampleLocationGridSize(in_struct->sampleLocationGridSize),
      sampleLocationsCount(in_struct->sampleLocationsCount),
      pSampleLocations(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[in_struct->sampleLocationsCount];
        memcpy((void*)pSampleLocations, (void*)in_struct->pSampleLocations,
               sizeof(VkSampleLocationEXT) * in_struct->sampleLocationsCount);
    }
}

SampleLocationsInfoEXT::SampleLocationsInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT),
      pNext(nullptr),
      sampleLocationsPerPixel(),
      sampleLocationGridSize(),
      sampleLocationsCount(),
      pSampleLocations(nullptr) {}

SampleLocationsInfoEXT::SampleLocationsInfoEXT(const SampleLocationsInfoEXT& copy_src) {
    sType = copy_src.sType;
    sampleLocationsPerPixel = copy_src.sampleLocationsPerPixel;
    sampleLocationGridSize = copy_src.sampleLocationGridSize;
    sampleLocationsCount = copy_src.sampleLocationsCount;
    pSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[copy_src.sampleLocationsCount];
        memcpy((void*)pSampleLocations, (void*)copy_src.pSampleLocations,
               sizeof(VkSampleLocationEXT) * copy_src.sampleLocationsCount);
    }
}

SampleLocationsInfoEXT& SampleLocationsInfoEXT::operator=(const SampleLocationsInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pSampleLocations) delete[] pSampleLocations;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleLocationsPerPixel = copy_src.sampleLocationsPerPixel;
    sampleLocationGridSize = copy_src.sampleLocationGridSize;
    sampleLocationsCount = copy_src.sampleLocationsCount;
    pSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[copy_src.sampleLocationsCount];
        memcpy((void*)pSampleLocations, (void*)copy_src.pSampleLocations,
               sizeof(VkSampleLocationEXT) * copy_src.sampleLocationsCount);
    }

    return *this;
}

SampleLocationsInfoEXT::~SampleLocationsInfoEXT() {
    if (pSampleLocations) delete[] pSampleLocations;
    FreePnextChain(pNext);
}

void SampleLocationsInfoEXT::initialize(const VkSampleLocationsInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSampleLocations) delete[] pSampleLocations;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleLocationsPerPixel = in_struct->sampleLocationsPerPixel;
    sampleLocationGridSize = in_struct->sampleLocationGridSize;
    sampleLocationsCount = in_struct->sampleLocationsCount;
    pSampleLocations = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[in_struct->sampleLocationsCount];
        memcpy((void*)pSampleLocations, (void*)in_struct->pSampleLocations,
               sizeof(VkSampleLocationEXT) * in_struct->sampleLocationsCount);
    }
}

void SampleLocationsInfoEXT::initialize(const SampleLocationsInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleLocationsPerPixel = copy_src->sampleLocationsPerPixel;
    sampleLocationGridSize = copy_src->sampleLocationGridSize;
    sampleLocationsCount = copy_src->sampleLocationsCount;
    pSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[copy_src->sampleLocationsCount];
        memcpy((void*)pSampleLocations, (void*)copy_src->pSampleLocations,
               sizeof(VkSampleLocationEXT) * copy_src->sampleLocationsCount);
    }
}

RenderPassSampleLocationsBeginInfoEXT::RenderPassSampleLocationsBeginInfoEXT(
    const VkRenderPassSampleLocationsBeginInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      attachmentInitialSampleLocationsCount(in_struct->attachmentInitialSampleLocationsCount),
      pAttachmentInitialSampleLocations(nullptr),
      postSubpassSampleLocationsCount(in_struct->postSubpassSampleLocationsCount),
      pPostSubpassSampleLocations(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[in_struct->attachmentInitialSampleLocationsCount];
        memcpy((void*)pAttachmentInitialSampleLocations, (void*)in_struct->pAttachmentInitialSampleLocations,
               sizeof(VkAttachmentSampleLocationsEXT) * in_struct->attachmentInitialSampleLocationsCount);
    }

    if (in_struct->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[in_struct->postSubpassSampleLocationsCount];
        memcpy((void*)pPostSubpassSampleLocations, (void*)in_struct->pPostSubpassSampleLocations,
               sizeof(VkSubpassSampleLocationsEXT) * in_struct->postSubpassSampleLocationsCount);
    }
}

RenderPassSampleLocationsBeginInfoEXT::RenderPassSampleLocationsBeginInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT),
      pNext(nullptr),
      attachmentInitialSampleLocationsCount(),
      pAttachmentInitialSampleLocations(nullptr),
      postSubpassSampleLocationsCount(),
      pPostSubpassSampleLocations(nullptr) {}

RenderPassSampleLocationsBeginInfoEXT::RenderPassSampleLocationsBeginInfoEXT(
    const RenderPassSampleLocationsBeginInfoEXT& copy_src) {
    sType = copy_src.sType;
    attachmentInitialSampleLocationsCount = copy_src.attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = copy_src.postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[copy_src.attachmentInitialSampleLocationsCount];
        memcpy((void*)pAttachmentInitialSampleLocations, (void*)copy_src.pAttachmentInitialSampleLocations,
               sizeof(VkAttachmentSampleLocationsEXT) * copy_src.attachmentInitialSampleLocationsCount);
    }

    if (copy_src.pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[copy_src.postSubpassSampleLocationsCount];
        memcpy((void*)pPostSubpassSampleLocations, (void*)copy_src.pPostSubpassSampleLocations,
               sizeof(VkSubpassSampleLocationsEXT) * copy_src.postSubpassSampleLocationsCount);
    }
}

RenderPassSampleLocationsBeginInfoEXT& RenderPassSampleLocationsBeginInfoEXT::operator=(
    const RenderPassSampleLocationsBeginInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachmentInitialSampleLocations) delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations) delete[] pPostSubpassSampleLocations;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentInitialSampleLocationsCount = copy_src.attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = copy_src.postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[copy_src.attachmentInitialSampleLocationsCount];
        memcpy((void*)pAttachmentInitialSampleLocations, (void*)copy_src.pAttachmentInitialSampleLocations,
               sizeof(VkAttachmentSampleLocationsEXT) * copy_src.attachmentInitialSampleLocationsCount);
    }

    if (copy_src.pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[copy_src.postSubpassSampleLocationsCount];
        memcpy((void*)pPostSubpassSampleLocations, (void*)copy_src.pPostSubpassSampleLocations,
               sizeof(VkSubpassSampleLocationsEXT) * copy_src.postSubpassSampleLocationsCount);
    }

    return *this;
}

RenderPassSampleLocationsBeginInfoEXT::~RenderPassSampleLocationsBeginInfoEXT() {
    if (pAttachmentInitialSampleLocations) delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations) delete[] pPostSubpassSampleLocations;
    FreePnextChain(pNext);
}

void RenderPassSampleLocationsBeginInfoEXT::initialize(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachmentInitialSampleLocations) delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations) delete[] pPostSubpassSampleLocations;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentInitialSampleLocationsCount = in_struct->attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = in_struct->postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[in_struct->attachmentInitialSampleLocationsCount];
        memcpy((void*)pAttachmentInitialSampleLocations, (void*)in_struct->pAttachmentInitialSampleLocations,
               sizeof(VkAttachmentSampleLocationsEXT) * in_struct->attachmentInitialSampleLocationsCount);
    }

    if (in_struct->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[in_struct->postSubpassSampleLocationsCount];
        memcpy((void*)pPostSubpassSampleLocations, (void*)in_struct->pPostSubpassSampleLocations,
               sizeof(VkSubpassSampleLocationsEXT) * in_struct->postSubpassSampleLocationsCount);
    }
}

void RenderPassSampleLocationsBeginInfoEXT::initialize(const RenderPassSampleLocationsBeginInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentInitialSampleLocationsCount = copy_src->attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = copy_src->postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[copy_src->attachmentInitialSampleLocationsCount];
        memcpy((void*)pAttachmentInitialSampleLocations, (void*)copy_src->pAttachmentInitialSampleLocations,
               sizeof(VkAttachmentSampleLocationsEXT) * copy_src->attachmentInitialSampleLocationsCount);
    }

    if (copy_src->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[copy_src->postSubpassSampleLocationsCount];
        memcpy((void*)pPostSubpassSampleLocations, (void*)copy_src->pPostSubpassSampleLocations,
               sizeof(VkSubpassSampleLocationsEXT) * copy_src->postSubpassSampleLocationsCount);
    }
}

PipelineSampleLocationsStateCreateInfoEXT::PipelineSampleLocationsStateCreateInfoEXT(
    const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      sampleLocationsEnable(in_struct->sampleLocationsEnable),
      sampleLocationsInfo(&in_struct->sampleLocationsInfo) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineSampleLocationsStateCreateInfoEXT::PipelineSampleLocationsStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT), pNext(nullptr), sampleLocationsEnable() {}

PipelineSampleLocationsStateCreateInfoEXT::PipelineSampleLocationsStateCreateInfoEXT(
    const PipelineSampleLocationsStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    sampleLocationsEnable = copy_src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src.sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineSampleLocationsStateCreateInfoEXT& PipelineSampleLocationsStateCreateInfoEXT::operator=(
    const PipelineSampleLocationsStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleLocationsEnable = copy_src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src.sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineSampleLocationsStateCreateInfoEXT::~PipelineSampleLocationsStateCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineSampleLocationsStateCreateInfoEXT::initialize(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleLocationsEnable = in_struct->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&in_struct->sampleLocationsInfo);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineSampleLocationsStateCreateInfoEXT::initialize(const PipelineSampleLocationsStateCreateInfoEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleLocationsEnable = copy_src->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src->sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSampleLocationsPropertiesEXT::PhysicalDeviceSampleLocationsPropertiesEXT(
    const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      sampleLocationSampleCounts(in_struct->sampleLocationSampleCounts),
      maxSampleLocationGridSize(in_struct->maxSampleLocationGridSize),
      sampleLocationSubPixelBits(in_struct->sampleLocationSubPixelBits),
      variableSampleLocations(in_struct->variableSampleLocations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 2; ++i) {
        sampleLocationCoordinateRange[i] = in_struct->sampleLocationCoordinateRange[i];
    }
}

PhysicalDeviceSampleLocationsPropertiesEXT::PhysicalDeviceSampleLocationsPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT),
      pNext(nullptr),
      sampleLocationSampleCounts(),
      maxSampleLocationGridSize(),
      sampleLocationSubPixelBits(),
      variableSampleLocations() {}

PhysicalDeviceSampleLocationsPropertiesEXT::PhysicalDeviceSampleLocationsPropertiesEXT(
    const PhysicalDeviceSampleLocationsPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    sampleLocationSampleCounts = copy_src.sampleLocationSampleCounts;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    sampleLocationSubPixelBits = copy_src.sampleLocationSubPixelBits;
    variableSampleLocations = copy_src.variableSampleLocations;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        sampleLocationCoordinateRange[i] = copy_src.sampleLocationCoordinateRange[i];
    }
}

PhysicalDeviceSampleLocationsPropertiesEXT& PhysicalDeviceSampleLocationsPropertiesEXT::operator=(
    const PhysicalDeviceSampleLocationsPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleLocationSampleCounts = copy_src.sampleLocationSampleCounts;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    sampleLocationSubPixelBits = copy_src.sampleLocationSubPixelBits;
    variableSampleLocations = copy_src.variableSampleLocations;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        sampleLocationCoordinateRange[i] = copy_src.sampleLocationCoordinateRange[i];
    }

    return *this;
}

PhysicalDeviceSampleLocationsPropertiesEXT::~PhysicalDeviceSampleLocationsPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceSampleLocationsPropertiesEXT::initialize(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleLocationSampleCounts = in_struct->sampleLocationSampleCounts;
    maxSampleLocationGridSize = in_struct->maxSampleLocationGridSize;
    sampleLocationSubPixelBits = in_struct->sampleLocationSubPixelBits;
    variableSampleLocations = in_struct->variableSampleLocations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 2; ++i) {
        sampleLocationCoordinateRange[i] = in_struct->sampleLocationCoordinateRange[i];
    }
}

void PhysicalDeviceSampleLocationsPropertiesEXT::initialize(const PhysicalDeviceSampleLocationsPropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleLocationSampleCounts = copy_src->sampleLocationSampleCounts;
    maxSampleLocationGridSize = copy_src->maxSampleLocationGridSize;
    sampleLocationSubPixelBits = copy_src->sampleLocationSubPixelBits;
    variableSampleLocations = copy_src->variableSampleLocations;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        sampleLocationCoordinateRange[i] = copy_src->sampleLocationCoordinateRange[i];
    }
}

MultisamplePropertiesEXT::MultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxSampleLocationGridSize(in_struct->maxSampleLocationGridSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MultisamplePropertiesEXT::MultisamplePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT), pNext(nullptr), maxSampleLocationGridSize() {}

MultisamplePropertiesEXT::MultisamplePropertiesEXT(const MultisamplePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

MultisamplePropertiesEXT& MultisamplePropertiesEXT::operator=(const MultisamplePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MultisamplePropertiesEXT::~MultisamplePropertiesEXT() { FreePnextChain(pNext); }

void MultisamplePropertiesEXT::initialize(const VkMultisamplePropertiesEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxSampleLocationGridSize = in_struct->maxSampleLocationGridSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MultisamplePropertiesEXT::initialize(const MultisamplePropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxSampleLocationGridSize = copy_src->maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::PhysicalDeviceBlendOperationAdvancedFeaturesEXT(
    const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), advancedBlendCoherentOperations(in_struct->advancedBlendCoherentOperations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::PhysicalDeviceBlendOperationAdvancedFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT),
      pNext(nullptr),
      advancedBlendCoherentOperations() {}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::PhysicalDeviceBlendOperationAdvancedFeaturesEXT(
    const PhysicalDeviceBlendOperationAdvancedFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    advancedBlendCoherentOperations = copy_src.advancedBlendCoherentOperations;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT& PhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=(
    const PhysicalDeviceBlendOperationAdvancedFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    advancedBlendCoherentOperations = copy_src.advancedBlendCoherentOperations;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::~PhysicalDeviceBlendOperationAdvancedFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceBlendOperationAdvancedFeaturesEXT::initialize(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    advancedBlendCoherentOperations = in_struct->advancedBlendCoherentOperations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceBlendOperationAdvancedFeaturesEXT::initialize(const PhysicalDeviceBlendOperationAdvancedFeaturesEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    advancedBlendCoherentOperations = copy_src->advancedBlendCoherentOperations;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::PhysicalDeviceBlendOperationAdvancedPropertiesEXT(
    const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      advancedBlendMaxColorAttachments(in_struct->advancedBlendMaxColorAttachments),
      advancedBlendIndependentBlend(in_struct->advancedBlendIndependentBlend),
      advancedBlendNonPremultipliedSrcColor(in_struct->advancedBlendNonPremultipliedSrcColor),
      advancedBlendNonPremultipliedDstColor(in_struct->advancedBlendNonPremultipliedDstColor),
      advancedBlendCorrelatedOverlap(in_struct->advancedBlendCorrelatedOverlap),
      advancedBlendAllOperations(in_struct->advancedBlendAllOperations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::PhysicalDeviceBlendOperationAdvancedPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT),
      pNext(nullptr),
      advancedBlendMaxColorAttachments(),
      advancedBlendIndependentBlend(),
      advancedBlendNonPremultipliedSrcColor(),
      advancedBlendNonPremultipliedDstColor(),
      advancedBlendCorrelatedOverlap(),
      advancedBlendAllOperations() {}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::PhysicalDeviceBlendOperationAdvancedPropertiesEXT(
    const PhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    advancedBlendMaxColorAttachments = copy_src.advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = copy_src.advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = copy_src.advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = copy_src.advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = copy_src.advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = copy_src.advancedBlendAllOperations;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT& PhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=(
    const PhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    advancedBlendMaxColorAttachments = copy_src.advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = copy_src.advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = copy_src.advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = copy_src.advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = copy_src.advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = copy_src.advancedBlendAllOperations;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::~PhysicalDeviceBlendOperationAdvancedPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(
    const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    advancedBlendMaxColorAttachments = in_struct->advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = in_struct->advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = in_struct->advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = in_struct->advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = in_struct->advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = in_struct->advancedBlendAllOperations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(
    const PhysicalDeviceBlendOperationAdvancedPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    advancedBlendMaxColorAttachments = copy_src->advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = copy_src->advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = copy_src->advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = copy_src->advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = copy_src->advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = copy_src->advancedBlendAllOperations;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineColorBlendAdvancedStateCreateInfoEXT::PipelineColorBlendAdvancedStateCreateInfoEXT(
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcPremultiplied(in_struct->srcPremultiplied),
      dstPremultiplied(in_struct->dstPremultiplied),
      blendOverlap(in_struct->blendOverlap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineColorBlendAdvancedStateCreateInfoEXT::PipelineColorBlendAdvancedStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      srcPremultiplied(),
      dstPremultiplied(),
      blendOverlap() {}

PipelineColorBlendAdvancedStateCreateInfoEXT::PipelineColorBlendAdvancedStateCreateInfoEXT(
    const PipelineColorBlendAdvancedStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    srcPremultiplied = copy_src.srcPremultiplied;
    dstPremultiplied = copy_src.dstPremultiplied;
    blendOverlap = copy_src.blendOverlap;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineColorBlendAdvancedStateCreateInfoEXT& PipelineColorBlendAdvancedStateCreateInfoEXT::operator=(
    const PipelineColorBlendAdvancedStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcPremultiplied = copy_src.srcPremultiplied;
    dstPremultiplied = copy_src.dstPremultiplied;
    blendOverlap = copy_src.blendOverlap;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineColorBlendAdvancedStateCreateInfoEXT::~PipelineColorBlendAdvancedStateCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineColorBlendAdvancedStateCreateInfoEXT::initialize(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcPremultiplied = in_struct->srcPremultiplied;
    dstPremultiplied = in_struct->dstPremultiplied;
    blendOverlap = in_struct->blendOverlap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineColorBlendAdvancedStateCreateInfoEXT::initialize(const PipelineColorBlendAdvancedStateCreateInfoEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcPremultiplied = copy_src->srcPremultiplied;
    dstPremultiplied = copy_src->dstPremultiplied;
    blendOverlap = copy_src->blendOverlap;
    pNext = SafePnextCopy(copy_src->pNext);
}

DrmFormatModifierPropertiesListEXT::DrmFormatModifierPropertiesListEXT(const VkDrmFormatModifierPropertiesListEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), drmFormatModifierCount(in_struct->drmFormatModifierCount), pDrmFormatModifierProperties(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierPropertiesEXT[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)in_struct->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierPropertiesEXT) * in_struct->drmFormatModifierCount);
    }
}

DrmFormatModifierPropertiesListEXT::DrmFormatModifierPropertiesListEXT()
    : sType(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifierProperties(nullptr) {}

DrmFormatModifierPropertiesListEXT::DrmFormatModifierPropertiesListEXT(const DrmFormatModifierPropertiesListEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierPropertiesEXT[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src.pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierPropertiesEXT) * copy_src.drmFormatModifierCount);
    }
}

DrmFormatModifierPropertiesListEXT& DrmFormatModifierPropertiesListEXT::operator=(
    const DrmFormatModifierPropertiesListEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierPropertiesEXT[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src.pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierPropertiesEXT) * copy_src.drmFormatModifierCount);
    }

    return *this;
}

DrmFormatModifierPropertiesListEXT::~DrmFormatModifierPropertiesListEXT() {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
}

void DrmFormatModifierPropertiesListEXT::initialize(const VkDrmFormatModifierPropertiesListEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifierCount = in_struct->drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierPropertiesEXT[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)in_struct->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierPropertiesEXT) * in_struct->drmFormatModifierCount);
    }
}

void DrmFormatModifierPropertiesListEXT::initialize(const DrmFormatModifierPropertiesListEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifierCount = copy_src->drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierPropertiesEXT[copy_src->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierPropertiesEXT) * copy_src->drmFormatModifierCount);
    }
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::PhysicalDeviceImageDrmFormatModifierInfoEXT(
    const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      drmFormatModifier(in_struct->drmFormatModifier),
      sharingMode(in_struct->sharingMode),
      queueFamilyIndexCount(0),
      pQueueFamilyIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::PhysicalDeviceImageDrmFormatModifierInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT),
      pNext(nullptr),
      drmFormatModifier(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr) {}

PhysicalDeviceImageDrmFormatModifierInfoEXT::PhysicalDeviceImageDrmFormatModifierInfoEXT(
    const PhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

PhysicalDeviceImageDrmFormatModifierInfoEXT& PhysicalDeviceImageDrmFormatModifierInfoEXT::operator=(
    const PhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }

    return *this;
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::~PhysicalDeviceImageDrmFormatModifierInfoEXT() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void PhysicalDeviceImageDrmFormatModifierInfoEXT::initialize(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifier = in_struct->drmFormatModifier;
    sharingMode = in_struct->sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

void PhysicalDeviceImageDrmFormatModifierInfoEXT::initialize(const PhysicalDeviceImageDrmFormatModifierInfoEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifier = copy_src->drmFormatModifier;
    sharingMode = copy_src->sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if ((copy_src->sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src->pQueueFamilyIndices,
               sizeof(uint32_t) * copy_src->queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

ImageDrmFormatModifierListCreateInfoEXT::ImageDrmFormatModifierListCreateInfoEXT(
    const VkImageDrmFormatModifierListCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), drmFormatModifierCount(in_struct->drmFormatModifierCount), pDrmFormatModifiers(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)in_struct->pDrmFormatModifiers,
               sizeof(uint64_t) * in_struct->drmFormatModifierCount);
    }
}

ImageDrmFormatModifierListCreateInfoEXT::ImageDrmFormatModifierListCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifiers(nullptr) {}

ImageDrmFormatModifierListCreateInfoEXT::ImageDrmFormatModifierListCreateInfoEXT(
    const ImageDrmFormatModifierListCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifiers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)copy_src.pDrmFormatModifiers, sizeof(uint64_t) * copy_src.drmFormatModifierCount);
    }
}

ImageDrmFormatModifierListCreateInfoEXT& ImageDrmFormatModifierListCreateInfoEXT::operator=(
    const ImageDrmFormatModifierListCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDrmFormatModifiers) delete[] pDrmFormatModifiers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifiers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)copy_src.pDrmFormatModifiers, sizeof(uint64_t) * copy_src.drmFormatModifierCount);
    }

    return *this;
}

ImageDrmFormatModifierListCreateInfoEXT::~ImageDrmFormatModifierListCreateInfoEXT() {
    if (pDrmFormatModifiers) delete[] pDrmFormatModifiers;
    FreePnextChain(pNext);
}

void ImageDrmFormatModifierListCreateInfoEXT::initialize(const VkImageDrmFormatModifierListCreateInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDrmFormatModifiers) delete[] pDrmFormatModifiers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifierCount = in_struct->drmFormatModifierCount;
    pDrmFormatModifiers = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)in_struct->pDrmFormatModifiers,
               sizeof(uint64_t) * in_struct->drmFormatModifierCount);
    }
}

void ImageDrmFormatModifierListCreateInfoEXT::initialize(const ImageDrmFormatModifierListCreateInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifierCount = copy_src->drmFormatModifierCount;
    pDrmFormatModifiers = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[copy_src->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)copy_src->pDrmFormatModifiers,
               sizeof(uint64_t) * copy_src->drmFormatModifierCount);
    }
}

ImageDrmFormatModifierExplicitCreateInfoEXT::ImageDrmFormatModifierExplicitCreateInfoEXT(
    const VkImageDrmFormatModifierExplicitCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      drmFormatModifier(in_struct->drmFormatModifier),
      drmFormatModifierPlaneCount(in_struct->drmFormatModifierPlaneCount),
      pPlaneLayouts(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPlaneLayouts) {
        pPlaneLayouts = new VkSubresourceLayout[in_struct->drmFormatModifierPlaneCount];
        memcpy((void*)pPlaneLayouts, (void*)in_struct->pPlaneLayouts,
               sizeof(VkSubresourceLayout) * in_struct->drmFormatModifierPlaneCount);
    }
}

ImageDrmFormatModifierExplicitCreateInfoEXT::ImageDrmFormatModifierExplicitCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT),
      pNext(nullptr),
      drmFormatModifier(),
      drmFormatModifierPlaneCount(),
      pPlaneLayouts(nullptr) {}

ImageDrmFormatModifierExplicitCreateInfoEXT::ImageDrmFormatModifierExplicitCreateInfoEXT(
    const ImageDrmFormatModifierExplicitCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    drmFormatModifierPlaneCount = copy_src.drmFormatModifierPlaneCount;
    pPlaneLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPlaneLayouts) {
        pPlaneLayouts = new VkSubresourceLayout[copy_src.drmFormatModifierPlaneCount];
        memcpy((void*)pPlaneLayouts, (void*)copy_src.pPlaneLayouts,
               sizeof(VkSubresourceLayout) * copy_src.drmFormatModifierPlaneCount);
    }
}

ImageDrmFormatModifierExplicitCreateInfoEXT& ImageDrmFormatModifierExplicitCreateInfoEXT::operator=(
    const ImageDrmFormatModifierExplicitCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pPlaneLayouts) delete[] pPlaneLayouts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    drmFormatModifierPlaneCount = copy_src.drmFormatModifierPlaneCount;
    pPlaneLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPlaneLayouts) {
        pPlaneLayouts = new VkSubresourceLayout[copy_src.drmFormatModifierPlaneCount];
        memcpy((void*)pPlaneLayouts, (void*)copy_src.pPlaneLayouts,
               sizeof(VkSubresourceLayout) * copy_src.drmFormatModifierPlaneCount);
    }

    return *this;
}

ImageDrmFormatModifierExplicitCreateInfoEXT::~ImageDrmFormatModifierExplicitCreateInfoEXT() {
    if (pPlaneLayouts) delete[] pPlaneLayouts;
    FreePnextChain(pNext);
}

void ImageDrmFormatModifierExplicitCreateInfoEXT::initialize(const VkImageDrmFormatModifierExplicitCreateInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPlaneLayouts) delete[] pPlaneLayouts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifier = in_struct->drmFormatModifier;
    drmFormatModifierPlaneCount = in_struct->drmFormatModifierPlaneCount;
    pPlaneLayouts = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPlaneLayouts) {
        pPlaneLayouts = new VkSubresourceLayout[in_struct->drmFormatModifierPlaneCount];
        memcpy((void*)pPlaneLayouts, (void*)in_struct->pPlaneLayouts,
               sizeof(VkSubresourceLayout) * in_struct->drmFormatModifierPlaneCount);
    }
}

void ImageDrmFormatModifierExplicitCreateInfoEXT::initialize(const ImageDrmFormatModifierExplicitCreateInfoEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifier = copy_src->drmFormatModifier;
    drmFormatModifierPlaneCount = copy_src->drmFormatModifierPlaneCount;
    pPlaneLayouts = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPlaneLayouts) {
        pPlaneLayouts = new VkSubresourceLayout[copy_src->drmFormatModifierPlaneCount];
        memcpy((void*)pPlaneLayouts, (void*)copy_src->pPlaneLayouts,
               sizeof(VkSubresourceLayout) * copy_src->drmFormatModifierPlaneCount);
    }
}

ImageDrmFormatModifierPropertiesEXT::ImageDrmFormatModifierPropertiesEXT(const VkImageDrmFormatModifierPropertiesEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), drmFormatModifier(in_struct->drmFormatModifier) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageDrmFormatModifierPropertiesEXT::ImageDrmFormatModifierPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT), pNext(nullptr), drmFormatModifier() {}

ImageDrmFormatModifierPropertiesEXT::ImageDrmFormatModifierPropertiesEXT(const ImageDrmFormatModifierPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageDrmFormatModifierPropertiesEXT& ImageDrmFormatModifierPropertiesEXT::operator=(
    const ImageDrmFormatModifierPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageDrmFormatModifierPropertiesEXT::~ImageDrmFormatModifierPropertiesEXT() { FreePnextChain(pNext); }

void ImageDrmFormatModifierPropertiesEXT::initialize(const VkImageDrmFormatModifierPropertiesEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifier = in_struct->drmFormatModifier;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageDrmFormatModifierPropertiesEXT::initialize(const ImageDrmFormatModifierPropertiesEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifier = copy_src->drmFormatModifier;
    pNext = SafePnextCopy(copy_src->pNext);
}

DrmFormatModifierPropertiesList2EXT::DrmFormatModifierPropertiesList2EXT(const VkDrmFormatModifierPropertiesList2EXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), drmFormatModifierCount(in_struct->drmFormatModifierCount), pDrmFormatModifierProperties(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierProperties2EXT[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)in_struct->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierProperties2EXT) * in_struct->drmFormatModifierCount);
    }
}

DrmFormatModifierPropertiesList2EXT::DrmFormatModifierPropertiesList2EXT()
    : sType(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifierProperties(nullptr) {}

DrmFormatModifierPropertiesList2EXT::DrmFormatModifierPropertiesList2EXT(const DrmFormatModifierPropertiesList2EXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierProperties2EXT[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src.pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierProperties2EXT) * copy_src.drmFormatModifierCount);
    }
}

DrmFormatModifierPropertiesList2EXT& DrmFormatModifierPropertiesList2EXT::operator=(
    const DrmFormatModifierPropertiesList2EXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierProperties2EXT[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src.pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierProperties2EXT) * copy_src.drmFormatModifierCount);
    }

    return *this;
}

DrmFormatModifierPropertiesList2EXT::~DrmFormatModifierPropertiesList2EXT() {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
}

void DrmFormatModifierPropertiesList2EXT::initialize(const VkDrmFormatModifierPropertiesList2EXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifierCount = in_struct->drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierProperties2EXT[in_struct->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)in_struct->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierProperties2EXT) * in_struct->drmFormatModifierCount);
    }
}

void DrmFormatModifierPropertiesList2EXT::initialize(const DrmFormatModifierPropertiesList2EXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifierCount = copy_src->drmFormatModifierCount;
    pDrmFormatModifierProperties = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDrmFormatModifierProperties) {
        pDrmFormatModifierProperties = new VkDrmFormatModifierProperties2EXT[copy_src->drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifierProperties, (void*)copy_src->pDrmFormatModifierProperties,
               sizeof(VkDrmFormatModifierProperties2EXT) * copy_src->drmFormatModifierCount);
    }
}

ValidationCacheCreateInfoEXT::ValidationCacheCreateInfoEXT(const VkValidationCacheCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      initialDataSize(in_struct->initialDataSize),
      pInitialData(in_struct->pInitialData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ValidationCacheCreateInfoEXT::ValidationCacheCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      initialDataSize(),
      pInitialData(nullptr) {}

ValidationCacheCreateInfoEXT::ValidationCacheCreateInfoEXT(const ValidationCacheCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);
}

ValidationCacheCreateInfoEXT& ValidationCacheCreateInfoEXT::operator=(const ValidationCacheCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ValidationCacheCreateInfoEXT::~ValidationCacheCreateInfoEXT() { FreePnextChain(pNext); }

void ValidationCacheCreateInfoEXT::initialize(const VkValidationCacheCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ValidationCacheCreateInfoEXT::initialize(const ValidationCacheCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    initialDataSize = copy_src->initialDataSize;
    pInitialData = copy_src->pInitialData;
    pNext = SafePnextCopy(copy_src->pNext);
}

ShaderModuleValidationCacheCreateInfoEXT::ShaderModuleValidationCacheCreateInfoEXT(
    const VkShaderModuleValidationCacheCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), validationCache(in_struct->validationCache) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ShaderModuleValidationCacheCreateInfoEXT::ShaderModuleValidationCacheCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT), pNext(nullptr), validationCache() {}

ShaderModuleValidationCacheCreateInfoEXT::ShaderModuleValidationCacheCreateInfoEXT(
    const ShaderModuleValidationCacheCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    validationCache = copy_src.validationCache;
    pNext = SafePnextCopy(copy_src.pNext);
}

ShaderModuleValidationCacheCreateInfoEXT& ShaderModuleValidationCacheCreateInfoEXT::operator=(
    const ShaderModuleValidationCacheCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    validationCache = copy_src.validationCache;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ShaderModuleValidationCacheCreateInfoEXT::~ShaderModuleValidationCacheCreateInfoEXT() { FreePnextChain(pNext); }

void ShaderModuleValidationCacheCreateInfoEXT::initialize(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    validationCache = in_struct->validationCache;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ShaderModuleValidationCacheCreateInfoEXT::initialize(const ShaderModuleValidationCacheCreateInfoEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    validationCache = copy_src->validationCache;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageViewImageFormatInfoEXT::PhysicalDeviceImageViewImageFormatInfoEXT(
    const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageViewType(in_struct->imageViewType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageViewImageFormatInfoEXT::PhysicalDeviceImageViewImageFormatInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT), pNext(nullptr), imageViewType() {}

PhysicalDeviceImageViewImageFormatInfoEXT::PhysicalDeviceImageViewImageFormatInfoEXT(
    const PhysicalDeviceImageViewImageFormatInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageViewType = copy_src.imageViewType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageViewImageFormatInfoEXT& PhysicalDeviceImageViewImageFormatInfoEXT::operator=(
    const PhysicalDeviceImageViewImageFormatInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageViewType = copy_src.imageViewType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageViewImageFormatInfoEXT::~PhysicalDeviceImageViewImageFormatInfoEXT() { FreePnextChain(pNext); }

void PhysicalDeviceImageViewImageFormatInfoEXT::initialize(const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageViewType = in_struct->imageViewType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageViewImageFormatInfoEXT::initialize(const PhysicalDeviceImageViewImageFormatInfoEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageViewType = copy_src->imageViewType;
    pNext = SafePnextCopy(copy_src->pNext);
}

FilterCubicImageViewImageFormatPropertiesEXT::FilterCubicImageViewImageFormatPropertiesEXT(
    const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), filterCubic(in_struct->filterCubic), filterCubicMinmax(in_struct->filterCubicMinmax) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FilterCubicImageViewImageFormatPropertiesEXT::FilterCubicImageViewImageFormatPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT),
      pNext(nullptr),
      filterCubic(),
      filterCubicMinmax() {}

FilterCubicImageViewImageFormatPropertiesEXT::FilterCubicImageViewImageFormatPropertiesEXT(
    const FilterCubicImageViewImageFormatPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    filterCubic = copy_src.filterCubic;
    filterCubicMinmax = copy_src.filterCubicMinmax;
    pNext = SafePnextCopy(copy_src.pNext);
}

FilterCubicImageViewImageFormatPropertiesEXT& FilterCubicImageViewImageFormatPropertiesEXT::operator=(
    const FilterCubicImageViewImageFormatPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    filterCubic = copy_src.filterCubic;
    filterCubicMinmax = copy_src.filterCubicMinmax;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FilterCubicImageViewImageFormatPropertiesEXT::~FilterCubicImageViewImageFormatPropertiesEXT() { FreePnextChain(pNext); }

void FilterCubicImageViewImageFormatPropertiesEXT::initialize(const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    filterCubic = in_struct->filterCubic;
    filterCubicMinmax = in_struct->filterCubicMinmax;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FilterCubicImageViewImageFormatPropertiesEXT::initialize(const FilterCubicImageViewImageFormatPropertiesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    filterCubic = copy_src->filterCubic;
    filterCubicMinmax = copy_src->filterCubicMinmax;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMemoryHostPointerInfoEXT::ImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), pHostPointer(in_struct->pHostPointer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryHostPointerInfoEXT::ImportMemoryHostPointerInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT), pNext(nullptr), handleType(), pHostPointer(nullptr) {}

ImportMemoryHostPointerInfoEXT::ImportMemoryHostPointerInfoEXT(const ImportMemoryHostPointerInfoEXT& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pHostPointer = copy_src.pHostPointer;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryHostPointerInfoEXT& ImportMemoryHostPointerInfoEXT::operator=(const ImportMemoryHostPointerInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pHostPointer = copy_src.pHostPointer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryHostPointerInfoEXT::~ImportMemoryHostPointerInfoEXT() { FreePnextChain(pNext); }

void ImportMemoryHostPointerInfoEXT::initialize(const VkImportMemoryHostPointerInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pHostPointer = in_struct->pHostPointer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryHostPointerInfoEXT::initialize(const ImportMemoryHostPointerInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pHostPointer = copy_src->pHostPointer;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryHostPointerPropertiesEXT::MemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryHostPointerPropertiesEXT::MemoryHostPointerPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT), pNext(nullptr), memoryTypeBits() {}

MemoryHostPointerPropertiesEXT::MemoryHostPointerPropertiesEXT(const MemoryHostPointerPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryHostPointerPropertiesEXT& MemoryHostPointerPropertiesEXT::operator=(const MemoryHostPointerPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryHostPointerPropertiesEXT::~MemoryHostPointerPropertiesEXT() { FreePnextChain(pNext); }

void MemoryHostPointerPropertiesEXT::initialize(const VkMemoryHostPointerPropertiesEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryHostPointerPropertiesEXT::initialize(const MemoryHostPointerPropertiesEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::PhysicalDeviceExternalMemoryHostPropertiesEXT(
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minImportedHostPointerAlignment(in_struct->minImportedHostPointerAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::PhysicalDeviceExternalMemoryHostPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT),
      pNext(nullptr),
      minImportedHostPointerAlignment() {}

PhysicalDeviceExternalMemoryHostPropertiesEXT::PhysicalDeviceExternalMemoryHostPropertiesEXT(
    const PhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minImportedHostPointerAlignment = copy_src.minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT& PhysicalDeviceExternalMemoryHostPropertiesEXT::operator=(
    const PhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minImportedHostPointerAlignment = copy_src.minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::~PhysicalDeviceExternalMemoryHostPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minImportedHostPointerAlignment = in_struct->minImportedHostPointerAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(const PhysicalDeviceExternalMemoryHostPropertiesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minImportedHostPointerAlignment = copy_src->minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::PhysicalDeviceVertexAttributeDivisorPropertiesEXT(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), maxVertexAttribDivisor(in_struct->maxVertexAttribDivisor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::PhysicalDeviceVertexAttributeDivisorPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT), pNext(nullptr), maxVertexAttribDivisor() {}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::PhysicalDeviceVertexAttributeDivisorPropertiesEXT(
    const PhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT& PhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=(
    const PhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::~PhysicalDeviceVertexAttributeDivisorPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceVertexAttributeDivisorPropertiesEXT::initialize(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxVertexAttribDivisor = in_struct->maxVertexAttribDivisor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVertexAttributeDivisorPropertiesEXT::initialize(
    const PhysicalDeviceVertexAttributeDivisorPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxVertexAttribDivisor = copy_src->maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePCIBusInfoPropertiesEXT::PhysicalDevicePCIBusInfoPropertiesEXT(
    const VkPhysicalDevicePCIBusInfoPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pciDomain(in_struct->pciDomain),
      pciBus(in_struct->pciBus),
      pciDevice(in_struct->pciDevice),
      pciFunction(in_struct->pciFunction) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePCIBusInfoPropertiesEXT::PhysicalDevicePCIBusInfoPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT),
      pNext(nullptr),
      pciDomain(),
      pciBus(),
      pciDevice(),
      pciFunction() {}

PhysicalDevicePCIBusInfoPropertiesEXT::PhysicalDevicePCIBusInfoPropertiesEXT(
    const PhysicalDevicePCIBusInfoPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pciDomain = copy_src.pciDomain;
    pciBus = copy_src.pciBus;
    pciDevice = copy_src.pciDevice;
    pciFunction = copy_src.pciFunction;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePCIBusInfoPropertiesEXT& PhysicalDevicePCIBusInfoPropertiesEXT::operator=(
    const PhysicalDevicePCIBusInfoPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pciDomain = copy_src.pciDomain;
    pciBus = copy_src.pciBus;
    pciDevice = copy_src.pciDevice;
    pciFunction = copy_src.pciFunction;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePCIBusInfoPropertiesEXT::~PhysicalDevicePCIBusInfoPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePCIBusInfoPropertiesEXT::initialize(const VkPhysicalDevicePCIBusInfoPropertiesEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pciDomain = in_struct->pciDomain;
    pciBus = in_struct->pciBus;
    pciDevice = in_struct->pciDevice;
    pciFunction = in_struct->pciFunction;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePCIBusInfoPropertiesEXT::initialize(const PhysicalDevicePCIBusInfoPropertiesEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pciDomain = copy_src->pciDomain;
    pciBus = copy_src->pciBus;
    pciDevice = copy_src->pciDevice;
    pciFunction = copy_src->pciFunction;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::PhysicalDeviceFragmentDensityMapFeaturesEXT(
    const VkPhysicalDeviceFragmentDensityMapFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      fragmentDensityMap(in_struct->fragmentDensityMap),
      fragmentDensityMapDynamic(in_struct->fragmentDensityMapDynamic),
      fragmentDensityMapNonSubsampledImages(in_struct->fragmentDensityMapNonSubsampledImages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::PhysicalDeviceFragmentDensityMapFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT),
      pNext(nullptr),
      fragmentDensityMap(),
      fragmentDensityMapDynamic(),
      fragmentDensityMapNonSubsampledImages() {}

PhysicalDeviceFragmentDensityMapFeaturesEXT::PhysicalDeviceFragmentDensityMapFeaturesEXT(
    const PhysicalDeviceFragmentDensityMapFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    fragmentDensityMap = copy_src.fragmentDensityMap;
    fragmentDensityMapDynamic = copy_src.fragmentDensityMapDynamic;
    fragmentDensityMapNonSubsampledImages = copy_src.fragmentDensityMapNonSubsampledImages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT& PhysicalDeviceFragmentDensityMapFeaturesEXT::operator=(
    const PhysicalDeviceFragmentDensityMapFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityMap = copy_src.fragmentDensityMap;
    fragmentDensityMapDynamic = copy_src.fragmentDensityMapDynamic;
    fragmentDensityMapNonSubsampledImages = copy_src.fragmentDensityMapNonSubsampledImages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::~PhysicalDeviceFragmentDensityMapFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentDensityMapFeaturesEXT::initialize(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityMap = in_struct->fragmentDensityMap;
    fragmentDensityMapDynamic = in_struct->fragmentDensityMapDynamic;
    fragmentDensityMapNonSubsampledImages = in_struct->fragmentDensityMapNonSubsampledImages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMapFeaturesEXT::initialize(const PhysicalDeviceFragmentDensityMapFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityMap = copy_src->fragmentDensityMap;
    fragmentDensityMapDynamic = copy_src->fragmentDensityMapDynamic;
    fragmentDensityMapNonSubsampledImages = copy_src->fragmentDensityMapNonSubsampledImages;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::PhysicalDeviceFragmentDensityMapPropertiesEXT(
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minFragmentDensityTexelSize(in_struct->minFragmentDensityTexelSize),
      maxFragmentDensityTexelSize(in_struct->maxFragmentDensityTexelSize),
      fragmentDensityInvocations(in_struct->fragmentDensityInvocations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::PhysicalDeviceFragmentDensityMapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT),
      pNext(nullptr),
      minFragmentDensityTexelSize(),
      maxFragmentDensityTexelSize(),
      fragmentDensityInvocations() {}

PhysicalDeviceFragmentDensityMapPropertiesEXT::PhysicalDeviceFragmentDensityMapPropertiesEXT(
    const PhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minFragmentDensityTexelSize = copy_src.minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src.maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src.fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT& PhysicalDeviceFragmentDensityMapPropertiesEXT::operator=(
    const PhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minFragmentDensityTexelSize = copy_src.minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src.maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src.fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::~PhysicalDeviceFragmentDensityMapPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentDensityMapPropertiesEXT::initialize(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minFragmentDensityTexelSize = in_struct->minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = in_struct->maxFragmentDensityTexelSize;
    fragmentDensityInvocations = in_struct->fragmentDensityInvocations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMapPropertiesEXT::initialize(const PhysicalDeviceFragmentDensityMapPropertiesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minFragmentDensityTexelSize = copy_src->minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src->maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src->fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassFragmentDensityMapCreateInfoEXT::RenderPassFragmentDensityMapCreateInfoEXT(
    const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityMapAttachment(in_struct->fragmentDensityMapAttachment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderPassFragmentDensityMapCreateInfoEXT::RenderPassFragmentDensityMapCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT), pNext(nullptr), fragmentDensityMapAttachment() {}

RenderPassFragmentDensityMapCreateInfoEXT::RenderPassFragmentDensityMapCreateInfoEXT(
    const RenderPassFragmentDensityMapCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    fragmentDensityMapAttachment = copy_src.fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderPassFragmentDensityMapCreateInfoEXT& RenderPassFragmentDensityMapCreateInfoEXT::operator=(
    const RenderPassFragmentDensityMapCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityMapAttachment = copy_src.fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderPassFragmentDensityMapCreateInfoEXT::~RenderPassFragmentDensityMapCreateInfoEXT() { FreePnextChain(pNext); }

void RenderPassFragmentDensityMapCreateInfoEXT::initialize(const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityMapAttachment = in_struct->fragmentDensityMapAttachment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderPassFragmentDensityMapCreateInfoEXT::initialize(const RenderPassFragmentDensityMapCreateInfoEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityMapAttachment = copy_src->fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(
    const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      shaderImageInt64Atomics(in_struct->shaderImageInt64Atomics),
      sparseImageInt64Atomics(in_struct->sparseImageInt64Atomics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::PhysicalDeviceShaderImageAtomicInt64FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT),
      pNext(nullptr),
      shaderImageInt64Atomics(),
      sparseImageInt64Atomics() {}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(
    const PhysicalDeviceShaderImageAtomicInt64FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderImageInt64Atomics = copy_src.shaderImageInt64Atomics;
    sparseImageInt64Atomics = copy_src.sparseImageInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT& PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::operator=(
    const PhysicalDeviceShaderImageAtomicInt64FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderImageInt64Atomics = copy_src.shaderImageInt64Atomics;
    sparseImageInt64Atomics = copy_src.sparseImageInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::~PhysicalDeviceShaderImageAtomicInt64FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::initialize(const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderImageInt64Atomics = in_struct->shaderImageInt64Atomics;
    sparseImageInt64Atomics = in_struct->sparseImageInt64Atomics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::initialize(const PhysicalDeviceShaderImageAtomicInt64FeaturesEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderImageInt64Atomics = copy_src->shaderImageInt64Atomics;
    sparseImageInt64Atomics = copy_src->sparseImageInt64Atomics;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMemoryBudgetPropertiesEXT::PhysicalDeviceMemoryBudgetPropertiesEXT(
    const VkPhysicalDeviceMemoryBudgetPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = in_struct->heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = in_struct->heapUsage[i];
    }
}

PhysicalDeviceMemoryBudgetPropertiesEXT::PhysicalDeviceMemoryBudgetPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT), pNext(nullptr) {}

PhysicalDeviceMemoryBudgetPropertiesEXT::PhysicalDeviceMemoryBudgetPropertiesEXT(
    const PhysicalDeviceMemoryBudgetPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = copy_src.heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = copy_src.heapUsage[i];
    }
}

PhysicalDeviceMemoryBudgetPropertiesEXT& PhysicalDeviceMemoryBudgetPropertiesEXT::operator=(
    const PhysicalDeviceMemoryBudgetPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = copy_src.heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = copy_src.heapUsage[i];
    }

    return *this;
}

PhysicalDeviceMemoryBudgetPropertiesEXT::~PhysicalDeviceMemoryBudgetPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMemoryBudgetPropertiesEXT::initialize(const VkPhysicalDeviceMemoryBudgetPropertiesEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = in_struct->heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = in_struct->heapUsage[i];
    }
}

void PhysicalDeviceMemoryBudgetPropertiesEXT::initialize(const PhysicalDeviceMemoryBudgetPropertiesEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = copy_src->heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = copy_src->heapUsage[i];
    }
}

PhysicalDeviceMemoryPriorityFeaturesEXT::PhysicalDeviceMemoryPriorityFeaturesEXT(
    const VkPhysicalDeviceMemoryPriorityFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryPriority(in_struct->memoryPriority) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMemoryPriorityFeaturesEXT::PhysicalDeviceMemoryPriorityFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT), pNext(nullptr), memoryPriority() {}

PhysicalDeviceMemoryPriorityFeaturesEXT::PhysicalDeviceMemoryPriorityFeaturesEXT(
    const PhysicalDeviceMemoryPriorityFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    memoryPriority = copy_src.memoryPriority;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMemoryPriorityFeaturesEXT& PhysicalDeviceMemoryPriorityFeaturesEXT::operator=(
    const PhysicalDeviceMemoryPriorityFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryPriority = copy_src.memoryPriority;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMemoryPriorityFeaturesEXT::~PhysicalDeviceMemoryPriorityFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMemoryPriorityFeaturesEXT::initialize(const VkPhysicalDeviceMemoryPriorityFeaturesEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryPriority = in_struct->memoryPriority;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMemoryPriorityFeaturesEXT::initialize(const PhysicalDeviceMemoryPriorityFeaturesEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryPriority = copy_src->memoryPriority;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryPriorityAllocateInfoEXT::MemoryPriorityAllocateInfoEXT(const VkMemoryPriorityAllocateInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), priority(in_struct->priority) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryPriorityAllocateInfoEXT::MemoryPriorityAllocateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT), pNext(nullptr), priority() {}

MemoryPriorityAllocateInfoEXT::MemoryPriorityAllocateInfoEXT(const MemoryPriorityAllocateInfoEXT& copy_src) {
    sType = copy_src.sType;
    priority = copy_src.priority;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryPriorityAllocateInfoEXT& MemoryPriorityAllocateInfoEXT::operator=(const MemoryPriorityAllocateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    priority = copy_src.priority;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryPriorityAllocateInfoEXT::~MemoryPriorityAllocateInfoEXT() { FreePnextChain(pNext); }

void MemoryPriorityAllocateInfoEXT::initialize(const VkMemoryPriorityAllocateInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    priority = in_struct->priority;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryPriorityAllocateInfoEXT::initialize(const MemoryPriorityAllocateInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    priority = copy_src->priority;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::PhysicalDeviceBufferDeviceAddressFeaturesEXT(
    const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      bufferDeviceAddress(in_struct->bufferDeviceAddress),
      bufferDeviceAddressCaptureReplay(in_struct->bufferDeviceAddressCaptureReplay),
      bufferDeviceAddressMultiDevice(in_struct->bufferDeviceAddressMultiDevice) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::PhysicalDeviceBufferDeviceAddressFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT),
      pNext(nullptr),
      bufferDeviceAddress(),
      bufferDeviceAddressCaptureReplay(),
      bufferDeviceAddressMultiDevice() {}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::PhysicalDeviceBufferDeviceAddressFeaturesEXT(
    const PhysicalDeviceBufferDeviceAddressFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT& PhysicalDeviceBufferDeviceAddressFeaturesEXT::operator=(
    const PhysicalDeviceBufferDeviceAddressFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::~PhysicalDeviceBufferDeviceAddressFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceBufferDeviceAddressFeaturesEXT::initialize(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bufferDeviceAddress = in_struct->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = in_struct->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = in_struct->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceBufferDeviceAddressFeaturesEXT::initialize(const PhysicalDeviceBufferDeviceAddressFeaturesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bufferDeviceAddress = copy_src->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferDeviceAddressCreateInfoEXT::BufferDeviceAddressCreateInfoEXT(const VkBufferDeviceAddressCreateInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceAddress(in_struct->deviceAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferDeviceAddressCreateInfoEXT::BufferDeviceAddressCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT), pNext(nullptr), deviceAddress() {}

BufferDeviceAddressCreateInfoEXT::BufferDeviceAddressCreateInfoEXT(const BufferDeviceAddressCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferDeviceAddressCreateInfoEXT& BufferDeviceAddressCreateInfoEXT::operator=(const BufferDeviceAddressCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferDeviceAddressCreateInfoEXT::~BufferDeviceAddressCreateInfoEXT() { FreePnextChain(pNext); }

void BufferDeviceAddressCreateInfoEXT::initialize(const VkBufferDeviceAddressCreateInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceAddress = in_struct->deviceAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferDeviceAddressCreateInfoEXT::initialize(const BufferDeviceAddressCreateInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceAddress = copy_src->deviceAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

ValidationFeaturesEXT::ValidationFeaturesEXT(const VkValidationFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      enabledValidationFeatureCount(in_struct->enabledValidationFeatureCount),
      pEnabledValidationFeatures(nullptr),
      disabledValidationFeatureCount(in_struct->disabledValidationFeatureCount),
      pDisabledValidationFeatures(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pEnabledValidationFeatures) {
        pEnabledValidationFeatures = new VkValidationFeatureEnableEXT[in_struct->enabledValidationFeatureCount];
        memcpy((void*)pEnabledValidationFeatures, (void*)in_struct->pEnabledValidationFeatures,
               sizeof(VkValidationFeatureEnableEXT) * in_struct->enabledValidationFeatureCount);
    }

    if (in_struct->pDisabledValidationFeatures) {
        pDisabledValidationFeatures = new VkValidationFeatureDisableEXT[in_struct->disabledValidationFeatureCount];
        memcpy((void*)pDisabledValidationFeatures, (void*)in_struct->pDisabledValidationFeatures,
               sizeof(VkValidationFeatureDisableEXT) * in_struct->disabledValidationFeatureCount);
    }
}

ValidationFeaturesEXT::ValidationFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT),
      pNext(nullptr),
      enabledValidationFeatureCount(),
      pEnabledValidationFeatures(nullptr),
      disabledValidationFeatureCount(),
      pDisabledValidationFeatures(nullptr) {}

ValidationFeaturesEXT::ValidationFeaturesEXT(const ValidationFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    enabledValidationFeatureCount = copy_src.enabledValidationFeatureCount;
    pEnabledValidationFeatures = nullptr;
    disabledValidationFeatureCount = copy_src.disabledValidationFeatureCount;
    pDisabledValidationFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pEnabledValidationFeatures) {
        pEnabledValidationFeatures = new VkValidationFeatureEnableEXT[copy_src.enabledValidationFeatureCount];
        memcpy((void*)pEnabledValidationFeatures, (void*)copy_src.pEnabledValidationFeatures,
               sizeof(VkValidationFeatureEnableEXT) * copy_src.enabledValidationFeatureCount);
    }

    if (copy_src.pDisabledValidationFeatures) {
        pDisabledValidationFeatures = new VkValidationFeatureDisableEXT[copy_src.disabledValidationFeatureCount];
        memcpy((void*)pDisabledValidationFeatures, (void*)copy_src.pDisabledValidationFeatures,
               sizeof(VkValidationFeatureDisableEXT) * copy_src.disabledValidationFeatureCount);
    }
}

ValidationFeaturesEXT& ValidationFeaturesEXT::operator=(const ValidationFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pEnabledValidationFeatures) delete[] pEnabledValidationFeatures;
    if (pDisabledValidationFeatures) delete[] pDisabledValidationFeatures;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    enabledValidationFeatureCount = copy_src.enabledValidationFeatureCount;
    pEnabledValidationFeatures = nullptr;
    disabledValidationFeatureCount = copy_src.disabledValidationFeatureCount;
    pDisabledValidationFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pEnabledValidationFeatures) {
        pEnabledValidationFeatures = new VkValidationFeatureEnableEXT[copy_src.enabledValidationFeatureCount];
        memcpy((void*)pEnabledValidationFeatures, (void*)copy_src.pEnabledValidationFeatures,
               sizeof(VkValidationFeatureEnableEXT) * copy_src.enabledValidationFeatureCount);
    }

    if (copy_src.pDisabledValidationFeatures) {
        pDisabledValidationFeatures = new VkValidationFeatureDisableEXT[copy_src.disabledValidationFeatureCount];
        memcpy((void*)pDisabledValidationFeatures, (void*)copy_src.pDisabledValidationFeatures,
               sizeof(VkValidationFeatureDisableEXT) * copy_src.disabledValidationFeatureCount);
    }

    return *this;
}

ValidationFeaturesEXT::~ValidationFeaturesEXT() {
    if (pEnabledValidationFeatures) delete[] pEnabledValidationFeatures;
    if (pDisabledValidationFeatures) delete[] pDisabledValidationFeatures;
    FreePnextChain(pNext);
}

void ValidationFeaturesEXT::initialize(const VkValidationFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pEnabledValidationFeatures) delete[] pEnabledValidationFeatures;
    if (pDisabledValidationFeatures) delete[] pDisabledValidationFeatures;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    enabledValidationFeatureCount = in_struct->enabledValidationFeatureCount;
    pEnabledValidationFeatures = nullptr;
    disabledValidationFeatureCount = in_struct->disabledValidationFeatureCount;
    pDisabledValidationFeatures = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pEnabledValidationFeatures) {
        pEnabledValidationFeatures = new VkValidationFeatureEnableEXT[in_struct->enabledValidationFeatureCount];
        memcpy((void*)pEnabledValidationFeatures, (void*)in_struct->pEnabledValidationFeatures,
               sizeof(VkValidationFeatureEnableEXT) * in_struct->enabledValidationFeatureCount);
    }

    if (in_struct->pDisabledValidationFeatures) {
        pDisabledValidationFeatures = new VkValidationFeatureDisableEXT[in_struct->disabledValidationFeatureCount];
        memcpy((void*)pDisabledValidationFeatures, (void*)in_struct->pDisabledValidationFeatures,
               sizeof(VkValidationFeatureDisableEXT) * in_struct->disabledValidationFeatureCount);
    }
}

void ValidationFeaturesEXT::initialize(const ValidationFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    enabledValidationFeatureCount = copy_src->enabledValidationFeatureCount;
    pEnabledValidationFeatures = nullptr;
    disabledValidationFeatureCount = copy_src->disabledValidationFeatureCount;
    pDisabledValidationFeatures = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pEnabledValidationFeatures) {
        pEnabledValidationFeatures = new VkValidationFeatureEnableEXT[copy_src->enabledValidationFeatureCount];
        memcpy((void*)pEnabledValidationFeatures, (void*)copy_src->pEnabledValidationFeatures,
               sizeof(VkValidationFeatureEnableEXT) * copy_src->enabledValidationFeatureCount);
    }

    if (copy_src->pDisabledValidationFeatures) {
        pDisabledValidationFeatures = new VkValidationFeatureDisableEXT[copy_src->disabledValidationFeatureCount];
        memcpy((void*)pDisabledValidationFeatures, (void*)copy_src->pDisabledValidationFeatures,
               sizeof(VkValidationFeatureDisableEXT) * copy_src->disabledValidationFeatureCount);
    }
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::PhysicalDeviceFragmentShaderInterlockFeaturesEXT(
    const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      fragmentShaderSampleInterlock(in_struct->fragmentShaderSampleInterlock),
      fragmentShaderPixelInterlock(in_struct->fragmentShaderPixelInterlock),
      fragmentShaderShadingRateInterlock(in_struct->fragmentShaderShadingRateInterlock) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::PhysicalDeviceFragmentShaderInterlockFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT),
      pNext(nullptr),
      fragmentShaderSampleInterlock(),
      fragmentShaderPixelInterlock(),
      fragmentShaderShadingRateInterlock() {}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::PhysicalDeviceFragmentShaderInterlockFeaturesEXT(
    const PhysicalDeviceFragmentShaderInterlockFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    fragmentShaderSampleInterlock = copy_src.fragmentShaderSampleInterlock;
    fragmentShaderPixelInterlock = copy_src.fragmentShaderPixelInterlock;
    fragmentShaderShadingRateInterlock = copy_src.fragmentShaderShadingRateInterlock;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT& PhysicalDeviceFragmentShaderInterlockFeaturesEXT::operator=(
    const PhysicalDeviceFragmentShaderInterlockFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentShaderSampleInterlock = copy_src.fragmentShaderSampleInterlock;
    fragmentShaderPixelInterlock = copy_src.fragmentShaderPixelInterlock;
    fragmentShaderShadingRateInterlock = copy_src.fragmentShaderShadingRateInterlock;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::~PhysicalDeviceFragmentShaderInterlockFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShaderInterlockFeaturesEXT::initialize(
    const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentShaderSampleInterlock = in_struct->fragmentShaderSampleInterlock;
    fragmentShaderPixelInterlock = in_struct->fragmentShaderPixelInterlock;
    fragmentShaderShadingRateInterlock = in_struct->fragmentShaderShadingRateInterlock;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShaderInterlockFeaturesEXT::initialize(const PhysicalDeviceFragmentShaderInterlockFeaturesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentShaderSampleInterlock = copy_src->fragmentShaderSampleInterlock;
    fragmentShaderPixelInterlock = copy_src->fragmentShaderPixelInterlock;
    fragmentShaderShadingRateInterlock = copy_src->fragmentShaderShadingRateInterlock;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::PhysicalDeviceYcbcrImageArraysFeaturesEXT(
    const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), ycbcrImageArrays(in_struct->ycbcrImageArrays) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::PhysicalDeviceYcbcrImageArraysFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT), pNext(nullptr), ycbcrImageArrays() {}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::PhysicalDeviceYcbcrImageArraysFeaturesEXT(
    const PhysicalDeviceYcbcrImageArraysFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    ycbcrImageArrays = copy_src.ycbcrImageArrays;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT& PhysicalDeviceYcbcrImageArraysFeaturesEXT::operator=(
    const PhysicalDeviceYcbcrImageArraysFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    ycbcrImageArrays = copy_src.ycbcrImageArrays;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::~PhysicalDeviceYcbcrImageArraysFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceYcbcrImageArraysFeaturesEXT::initialize(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    ycbcrImageArrays = in_struct->ycbcrImageArrays;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceYcbcrImageArraysFeaturesEXT::initialize(const PhysicalDeviceYcbcrImageArraysFeaturesEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    ycbcrImageArrays = copy_src->ycbcrImageArrays;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceProvokingVertexFeaturesEXT::PhysicalDeviceProvokingVertexFeaturesEXT(
    const VkPhysicalDeviceProvokingVertexFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      provokingVertexLast(in_struct->provokingVertexLast),
      transformFeedbackPreservesProvokingVertex(in_struct->transformFeedbackPreservesProvokingVertex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceProvokingVertexFeaturesEXT::PhysicalDeviceProvokingVertexFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT),
      pNext(nullptr),
      provokingVertexLast(),
      transformFeedbackPreservesProvokingVertex() {}

PhysicalDeviceProvokingVertexFeaturesEXT::PhysicalDeviceProvokingVertexFeaturesEXT(
    const PhysicalDeviceProvokingVertexFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    provokingVertexLast = copy_src.provokingVertexLast;
    transformFeedbackPreservesProvokingVertex = copy_src.transformFeedbackPreservesProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceProvokingVertexFeaturesEXT& PhysicalDeviceProvokingVertexFeaturesEXT::operator=(
    const PhysicalDeviceProvokingVertexFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    provokingVertexLast = copy_src.provokingVertexLast;
    transformFeedbackPreservesProvokingVertex = copy_src.transformFeedbackPreservesProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceProvokingVertexFeaturesEXT::~PhysicalDeviceProvokingVertexFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceProvokingVertexFeaturesEXT::initialize(const VkPhysicalDeviceProvokingVertexFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    provokingVertexLast = in_struct->provokingVertexLast;
    transformFeedbackPreservesProvokingVertex = in_struct->transformFeedbackPreservesProvokingVertex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceProvokingVertexFeaturesEXT::initialize(const PhysicalDeviceProvokingVertexFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    provokingVertexLast = copy_src->provokingVertexLast;
    transformFeedbackPreservesProvokingVertex = copy_src->transformFeedbackPreservesProvokingVertex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceProvokingVertexPropertiesEXT::PhysicalDeviceProvokingVertexPropertiesEXT(
    const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      provokingVertexModePerPipeline(in_struct->provokingVertexModePerPipeline),
      transformFeedbackPreservesTriangleFanProvokingVertex(in_struct->transformFeedbackPreservesTriangleFanProvokingVertex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceProvokingVertexPropertiesEXT::PhysicalDeviceProvokingVertexPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT),
      pNext(nullptr),
      provokingVertexModePerPipeline(),
      transformFeedbackPreservesTriangleFanProvokingVertex() {}

PhysicalDeviceProvokingVertexPropertiesEXT::PhysicalDeviceProvokingVertexPropertiesEXT(
    const PhysicalDeviceProvokingVertexPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    provokingVertexModePerPipeline = copy_src.provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src.transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceProvokingVertexPropertiesEXT& PhysicalDeviceProvokingVertexPropertiesEXT::operator=(
    const PhysicalDeviceProvokingVertexPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    provokingVertexModePerPipeline = copy_src.provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src.transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceProvokingVertexPropertiesEXT::~PhysicalDeviceProvokingVertexPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceProvokingVertexPropertiesEXT::initialize(const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    provokingVertexModePerPipeline = in_struct->provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = in_struct->transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceProvokingVertexPropertiesEXT::initialize(const PhysicalDeviceProvokingVertexPropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    provokingVertexModePerPipeline = copy_src->provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src->transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::PipelineRasterizationProvokingVertexStateCreateInfoEXT(
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), provokingVertexMode(in_struct->provokingVertexMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::PipelineRasterizationProvokingVertexStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      provokingVertexMode() {}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::PipelineRasterizationProvokingVertexStateCreateInfoEXT(
    const PipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    provokingVertexMode = copy_src.provokingVertexMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT& PipelineRasterizationProvokingVertexStateCreateInfoEXT::operator=(
    const PipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    provokingVertexMode = copy_src.provokingVertexMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::~PipelineRasterizationProvokingVertexStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void PipelineRasterizationProvokingVertexStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    provokingVertexMode = in_struct->provokingVertexMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationProvokingVertexStateCreateInfoEXT::initialize(
    const PipelineRasterizationProvokingVertexStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    provokingVertexMode = copy_src->provokingVertexMode;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

SurfaceFullScreenExclusiveInfoEXT::SurfaceFullScreenExclusiveInfoEXT(const VkSurfaceFullScreenExclusiveInfoEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fullScreenExclusive(in_struct->fullScreenExclusive) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceFullScreenExclusiveInfoEXT::SurfaceFullScreenExclusiveInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT), pNext(nullptr), fullScreenExclusive() {}

SurfaceFullScreenExclusiveInfoEXT::SurfaceFullScreenExclusiveInfoEXT(const SurfaceFullScreenExclusiveInfoEXT& copy_src) {
    sType = copy_src.sType;
    fullScreenExclusive = copy_src.fullScreenExclusive;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceFullScreenExclusiveInfoEXT& SurfaceFullScreenExclusiveInfoEXT::operator=(const SurfaceFullScreenExclusiveInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fullScreenExclusive = copy_src.fullScreenExclusive;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceFullScreenExclusiveInfoEXT::~SurfaceFullScreenExclusiveInfoEXT() { FreePnextChain(pNext); }

void SurfaceFullScreenExclusiveInfoEXT::initialize(const VkSurfaceFullScreenExclusiveInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fullScreenExclusive = in_struct->fullScreenExclusive;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceFullScreenExclusiveInfoEXT::initialize(const SurfaceFullScreenExclusiveInfoEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fullScreenExclusive = copy_src->fullScreenExclusive;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceCapabilitiesFullScreenExclusiveEXT::SurfaceCapabilitiesFullScreenExclusiveEXT(
    const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fullScreenExclusiveSupported(in_struct->fullScreenExclusiveSupported) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceCapabilitiesFullScreenExclusiveEXT::SurfaceCapabilitiesFullScreenExclusiveEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT), pNext(nullptr), fullScreenExclusiveSupported() {}

SurfaceCapabilitiesFullScreenExclusiveEXT::SurfaceCapabilitiesFullScreenExclusiveEXT(
    const SurfaceCapabilitiesFullScreenExclusiveEXT& copy_src) {
    sType = copy_src.sType;
    fullScreenExclusiveSupported = copy_src.fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceCapabilitiesFullScreenExclusiveEXT& SurfaceCapabilitiesFullScreenExclusiveEXT::operator=(
    const SurfaceCapabilitiesFullScreenExclusiveEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fullScreenExclusiveSupported = copy_src.fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceCapabilitiesFullScreenExclusiveEXT::~SurfaceCapabilitiesFullScreenExclusiveEXT() { FreePnextChain(pNext); }

void SurfaceCapabilitiesFullScreenExclusiveEXT::initialize(const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fullScreenExclusiveSupported = in_struct->fullScreenExclusiveSupported;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceCapabilitiesFullScreenExclusiveEXT::initialize(const SurfaceCapabilitiesFullScreenExclusiveEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fullScreenExclusiveSupported = copy_src->fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceFullScreenExclusiveWin32InfoEXT::SurfaceFullScreenExclusiveWin32InfoEXT(
    const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), hmonitor(in_struct->hmonitor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceFullScreenExclusiveWin32InfoEXT::SurfaceFullScreenExclusiveWin32InfoEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT), pNext(nullptr), hmonitor() {}

SurfaceFullScreenExclusiveWin32InfoEXT::SurfaceFullScreenExclusiveWin32InfoEXT(
    const SurfaceFullScreenExclusiveWin32InfoEXT& copy_src) {
    sType = copy_src.sType;
    hmonitor = copy_src.hmonitor;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceFullScreenExclusiveWin32InfoEXT& SurfaceFullScreenExclusiveWin32InfoEXT::operator=(
    const SurfaceFullScreenExclusiveWin32InfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hmonitor = copy_src.hmonitor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceFullScreenExclusiveWin32InfoEXT::~SurfaceFullScreenExclusiveWin32InfoEXT() { FreePnextChain(pNext); }

void SurfaceFullScreenExclusiveWin32InfoEXT::initialize(const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hmonitor = in_struct->hmonitor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceFullScreenExclusiveWin32InfoEXT::initialize(const SurfaceFullScreenExclusiveWin32InfoEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hmonitor = copy_src->hmonitor;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

HeadlessSurfaceCreateInfoEXT::HeadlessSurfaceCreateInfoEXT(const VkHeadlessSurfaceCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

HeadlessSurfaceCreateInfoEXT::HeadlessSurfaceCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT), pNext(nullptr), flags() {}

HeadlessSurfaceCreateInfoEXT::HeadlessSurfaceCreateInfoEXT(const HeadlessSurfaceCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

HeadlessSurfaceCreateInfoEXT& HeadlessSurfaceCreateInfoEXT::operator=(const HeadlessSurfaceCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

HeadlessSurfaceCreateInfoEXT::~HeadlessSurfaceCreateInfoEXT() { FreePnextChain(pNext); }

void HeadlessSurfaceCreateInfoEXT::initialize(const VkHeadlessSurfaceCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void HeadlessSurfaceCreateInfoEXT::initialize(const HeadlessSurfaceCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::PhysicalDeviceShaderAtomicFloatFeaturesEXT(
    const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderBufferFloat32Atomics(in_struct->shaderBufferFloat32Atomics),
      shaderBufferFloat32AtomicAdd(in_struct->shaderBufferFloat32AtomicAdd),
      shaderBufferFloat64Atomics(in_struct->shaderBufferFloat64Atomics),
      shaderBufferFloat64AtomicAdd(in_struct->shaderBufferFloat64AtomicAdd),
      shaderSharedFloat32Atomics(in_struct->shaderSharedFloat32Atomics),
      shaderSharedFloat32AtomicAdd(in_struct->shaderSharedFloat32AtomicAdd),
      shaderSharedFloat64Atomics(in_struct->shaderSharedFloat64Atomics),
      shaderSharedFloat64AtomicAdd(in_struct->shaderSharedFloat64AtomicAdd),
      shaderImageFloat32Atomics(in_struct->shaderImageFloat32Atomics),
      shaderImageFloat32AtomicAdd(in_struct->shaderImageFloat32AtomicAdd),
      sparseImageFloat32Atomics(in_struct->sparseImageFloat32Atomics),
      sparseImageFloat32AtomicAdd(in_struct->sparseImageFloat32AtomicAdd) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::PhysicalDeviceShaderAtomicFloatFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT),
      pNext(nullptr),
      shaderBufferFloat32Atomics(),
      shaderBufferFloat32AtomicAdd(),
      shaderBufferFloat64Atomics(),
      shaderBufferFloat64AtomicAdd(),
      shaderSharedFloat32Atomics(),
      shaderSharedFloat32AtomicAdd(),
      shaderSharedFloat64Atomics(),
      shaderSharedFloat64AtomicAdd(),
      shaderImageFloat32Atomics(),
      shaderImageFloat32AtomicAdd(),
      sparseImageFloat32Atomics(),
      sparseImageFloat32AtomicAdd() {}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::PhysicalDeviceShaderAtomicFloatFeaturesEXT(
    const PhysicalDeviceShaderAtomicFloatFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderBufferFloat32Atomics = copy_src.shaderBufferFloat32Atomics;
    shaderBufferFloat32AtomicAdd = copy_src.shaderBufferFloat32AtomicAdd;
    shaderBufferFloat64Atomics = copy_src.shaderBufferFloat64Atomics;
    shaderBufferFloat64AtomicAdd = copy_src.shaderBufferFloat64AtomicAdd;
    shaderSharedFloat32Atomics = copy_src.shaderSharedFloat32Atomics;
    shaderSharedFloat32AtomicAdd = copy_src.shaderSharedFloat32AtomicAdd;
    shaderSharedFloat64Atomics = copy_src.shaderSharedFloat64Atomics;
    shaderSharedFloat64AtomicAdd = copy_src.shaderSharedFloat64AtomicAdd;
    shaderImageFloat32Atomics = copy_src.shaderImageFloat32Atomics;
    shaderImageFloat32AtomicAdd = copy_src.shaderImageFloat32AtomicAdd;
    sparseImageFloat32Atomics = copy_src.sparseImageFloat32Atomics;
    sparseImageFloat32AtomicAdd = copy_src.sparseImageFloat32AtomicAdd;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT& PhysicalDeviceShaderAtomicFloatFeaturesEXT::operator=(
    const PhysicalDeviceShaderAtomicFloatFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderBufferFloat32Atomics = copy_src.shaderBufferFloat32Atomics;
    shaderBufferFloat32AtomicAdd = copy_src.shaderBufferFloat32AtomicAdd;
    shaderBufferFloat64Atomics = copy_src.shaderBufferFloat64Atomics;
    shaderBufferFloat64AtomicAdd = copy_src.shaderBufferFloat64AtomicAdd;
    shaderSharedFloat32Atomics = copy_src.shaderSharedFloat32Atomics;
    shaderSharedFloat32AtomicAdd = copy_src.shaderSharedFloat32AtomicAdd;
    shaderSharedFloat64Atomics = copy_src.shaderSharedFloat64Atomics;
    shaderSharedFloat64AtomicAdd = copy_src.shaderSharedFloat64AtomicAdd;
    shaderImageFloat32Atomics = copy_src.shaderImageFloat32Atomics;
    shaderImageFloat32AtomicAdd = copy_src.shaderImageFloat32AtomicAdd;
    sparseImageFloat32Atomics = copy_src.sparseImageFloat32Atomics;
    sparseImageFloat32AtomicAdd = copy_src.sparseImageFloat32AtomicAdd;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::~PhysicalDeviceShaderAtomicFloatFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderAtomicFloatFeaturesEXT::initialize(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBufferFloat32Atomics = in_struct->shaderBufferFloat32Atomics;
    shaderBufferFloat32AtomicAdd = in_struct->shaderBufferFloat32AtomicAdd;
    shaderBufferFloat64Atomics = in_struct->shaderBufferFloat64Atomics;
    shaderBufferFloat64AtomicAdd = in_struct->shaderBufferFloat64AtomicAdd;
    shaderSharedFloat32Atomics = in_struct->shaderSharedFloat32Atomics;
    shaderSharedFloat32AtomicAdd = in_struct->shaderSharedFloat32AtomicAdd;
    shaderSharedFloat64Atomics = in_struct->shaderSharedFloat64Atomics;
    shaderSharedFloat64AtomicAdd = in_struct->shaderSharedFloat64AtomicAdd;
    shaderImageFloat32Atomics = in_struct->shaderImageFloat32Atomics;
    shaderImageFloat32AtomicAdd = in_struct->shaderImageFloat32AtomicAdd;
    sparseImageFloat32Atomics = in_struct->sparseImageFloat32Atomics;
    sparseImageFloat32AtomicAdd = in_struct->sparseImageFloat32AtomicAdd;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderAtomicFloatFeaturesEXT::initialize(const PhysicalDeviceShaderAtomicFloatFeaturesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBufferFloat32Atomics = copy_src->shaderBufferFloat32Atomics;
    shaderBufferFloat32AtomicAdd = copy_src->shaderBufferFloat32AtomicAdd;
    shaderBufferFloat64Atomics = copy_src->shaderBufferFloat64Atomics;
    shaderBufferFloat64AtomicAdd = copy_src->shaderBufferFloat64AtomicAdd;
    shaderSharedFloat32Atomics = copy_src->shaderSharedFloat32Atomics;
    shaderSharedFloat32AtomicAdd = copy_src->shaderSharedFloat32AtomicAdd;
    shaderSharedFloat64Atomics = copy_src->shaderSharedFloat64Atomics;
    shaderSharedFloat64AtomicAdd = copy_src->shaderSharedFloat64AtomicAdd;
    shaderImageFloat32Atomics = copy_src->shaderImageFloat32Atomics;
    shaderImageFloat32AtomicAdd = copy_src->shaderImageFloat32AtomicAdd;
    sparseImageFloat32Atomics = copy_src->sparseImageFloat32Atomics;
    sparseImageFloat32AtomicAdd = copy_src->sparseImageFloat32AtomicAdd;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::PhysicalDeviceExtendedDynamicStateFeaturesEXT(
    const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), extendedDynamicState(in_struct->extendedDynamicState) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::PhysicalDeviceExtendedDynamicStateFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT), pNext(nullptr), extendedDynamicState() {}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::PhysicalDeviceExtendedDynamicStateFeaturesEXT(
    const PhysicalDeviceExtendedDynamicStateFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    extendedDynamicState = copy_src.extendedDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT& PhysicalDeviceExtendedDynamicStateFeaturesEXT::operator=(
    const PhysicalDeviceExtendedDynamicStateFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    extendedDynamicState = copy_src.extendedDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::~PhysicalDeviceExtendedDynamicStateFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceExtendedDynamicStateFeaturesEXT::initialize(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    extendedDynamicState = in_struct->extendedDynamicState;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedDynamicStateFeaturesEXT::initialize(const PhysicalDeviceExtendedDynamicStateFeaturesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    extendedDynamicState = copy_src->extendedDynamicState;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceHostImageCopyFeaturesEXT::PhysicalDeviceHostImageCopyFeaturesEXT(
    const VkPhysicalDeviceHostImageCopyFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), hostImageCopy(in_struct->hostImageCopy) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceHostImageCopyFeaturesEXT::PhysicalDeviceHostImageCopyFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT), pNext(nullptr), hostImageCopy() {}

PhysicalDeviceHostImageCopyFeaturesEXT::PhysicalDeviceHostImageCopyFeaturesEXT(
    const PhysicalDeviceHostImageCopyFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    hostImageCopy = copy_src.hostImageCopy;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceHostImageCopyFeaturesEXT& PhysicalDeviceHostImageCopyFeaturesEXT::operator=(
    const PhysicalDeviceHostImageCopyFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hostImageCopy = copy_src.hostImageCopy;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceHostImageCopyFeaturesEXT::~PhysicalDeviceHostImageCopyFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceHostImageCopyFeaturesEXT::initialize(const VkPhysicalDeviceHostImageCopyFeaturesEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hostImageCopy = in_struct->hostImageCopy;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceHostImageCopyFeaturesEXT::initialize(const PhysicalDeviceHostImageCopyFeaturesEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hostImageCopy = copy_src->hostImageCopy;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceHostImageCopyPropertiesEXT::PhysicalDeviceHostImageCopyPropertiesEXT(
    const VkPhysicalDeviceHostImageCopyPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      copySrcLayoutCount(in_struct->copySrcLayoutCount),
      pCopySrcLayouts(nullptr),
      copyDstLayoutCount(in_struct->copyDstLayoutCount),
      pCopyDstLayouts(nullptr),
      identicalMemoryTypeRequirements(in_struct->identicalMemoryTypeRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCopySrcLayouts) {
        pCopySrcLayouts = new VkImageLayout[in_struct->copySrcLayoutCount];
        memcpy((void*)pCopySrcLayouts, (void*)in_struct->pCopySrcLayouts, sizeof(VkImageLayout) * in_struct->copySrcLayoutCount);
    }

    if (in_struct->pCopyDstLayouts) {
        pCopyDstLayouts = new VkImageLayout[in_struct->copyDstLayoutCount];
        memcpy((void*)pCopyDstLayouts, (void*)in_struct->pCopyDstLayouts, sizeof(VkImageLayout) * in_struct->copyDstLayoutCount);
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        optimalTilingLayoutUUID[i] = in_struct->optimalTilingLayoutUUID[i];
    }
}

PhysicalDeviceHostImageCopyPropertiesEXT::PhysicalDeviceHostImageCopyPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT),
      pNext(nullptr),
      copySrcLayoutCount(),
      pCopySrcLayouts(nullptr),
      copyDstLayoutCount(),
      pCopyDstLayouts(nullptr),
      identicalMemoryTypeRequirements() {}

PhysicalDeviceHostImageCopyPropertiesEXT::PhysicalDeviceHostImageCopyPropertiesEXT(
    const PhysicalDeviceHostImageCopyPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    copySrcLayoutCount = copy_src.copySrcLayoutCount;
    pCopySrcLayouts = nullptr;
    copyDstLayoutCount = copy_src.copyDstLayoutCount;
    pCopyDstLayouts = nullptr;
    identicalMemoryTypeRequirements = copy_src.identicalMemoryTypeRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCopySrcLayouts) {
        pCopySrcLayouts = new VkImageLayout[copy_src.copySrcLayoutCount];
        memcpy((void*)pCopySrcLayouts, (void*)copy_src.pCopySrcLayouts, sizeof(VkImageLayout) * copy_src.copySrcLayoutCount);
    }

    if (copy_src.pCopyDstLayouts) {
        pCopyDstLayouts = new VkImageLayout[copy_src.copyDstLayoutCount];
        memcpy((void*)pCopyDstLayouts, (void*)copy_src.pCopyDstLayouts, sizeof(VkImageLayout) * copy_src.copyDstLayoutCount);
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        optimalTilingLayoutUUID[i] = copy_src.optimalTilingLayoutUUID[i];
    }
}

PhysicalDeviceHostImageCopyPropertiesEXT& PhysicalDeviceHostImageCopyPropertiesEXT::operator=(
    const PhysicalDeviceHostImageCopyPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pCopySrcLayouts) delete[] pCopySrcLayouts;
    if (pCopyDstLayouts) delete[] pCopyDstLayouts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    copySrcLayoutCount = copy_src.copySrcLayoutCount;
    pCopySrcLayouts = nullptr;
    copyDstLayoutCount = copy_src.copyDstLayoutCount;
    pCopyDstLayouts = nullptr;
    identicalMemoryTypeRequirements = copy_src.identicalMemoryTypeRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCopySrcLayouts) {
        pCopySrcLayouts = new VkImageLayout[copy_src.copySrcLayoutCount];
        memcpy((void*)pCopySrcLayouts, (void*)copy_src.pCopySrcLayouts, sizeof(VkImageLayout) * copy_src.copySrcLayoutCount);
    }

    if (copy_src.pCopyDstLayouts) {
        pCopyDstLayouts = new VkImageLayout[copy_src.copyDstLayoutCount];
        memcpy((void*)pCopyDstLayouts, (void*)copy_src.pCopyDstLayouts, sizeof(VkImageLayout) * copy_src.copyDstLayoutCount);
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        optimalTilingLayoutUUID[i] = copy_src.optimalTilingLayoutUUID[i];
    }

    return *this;
}

PhysicalDeviceHostImageCopyPropertiesEXT::~PhysicalDeviceHostImageCopyPropertiesEXT() {
    if (pCopySrcLayouts) delete[] pCopySrcLayouts;
    if (pCopyDstLayouts) delete[] pCopyDstLayouts;
    FreePnextChain(pNext);
}

void PhysicalDeviceHostImageCopyPropertiesEXT::initialize(const VkPhysicalDeviceHostImageCopyPropertiesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCopySrcLayouts) delete[] pCopySrcLayouts;
    if (pCopyDstLayouts) delete[] pCopyDstLayouts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    copySrcLayoutCount = in_struct->copySrcLayoutCount;
    pCopySrcLayouts = nullptr;
    copyDstLayoutCount = in_struct->copyDstLayoutCount;
    pCopyDstLayouts = nullptr;
    identicalMemoryTypeRequirements = in_struct->identicalMemoryTypeRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pCopySrcLayouts) {
        pCopySrcLayouts = new VkImageLayout[in_struct->copySrcLayoutCount];
        memcpy((void*)pCopySrcLayouts, (void*)in_struct->pCopySrcLayouts, sizeof(VkImageLayout) * in_struct->copySrcLayoutCount);
    }

    if (in_struct->pCopyDstLayouts) {
        pCopyDstLayouts = new VkImageLayout[in_struct->copyDstLayoutCount];
        memcpy((void*)pCopyDstLayouts, (void*)in_struct->pCopyDstLayouts, sizeof(VkImageLayout) * in_struct->copyDstLayoutCount);
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        optimalTilingLayoutUUID[i] = in_struct->optimalTilingLayoutUUID[i];
    }
}

void PhysicalDeviceHostImageCopyPropertiesEXT::initialize(const PhysicalDeviceHostImageCopyPropertiesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    copySrcLayoutCount = copy_src->copySrcLayoutCount;
    pCopySrcLayouts = nullptr;
    copyDstLayoutCount = copy_src->copyDstLayoutCount;
    pCopyDstLayouts = nullptr;
    identicalMemoryTypeRequirements = copy_src->identicalMemoryTypeRequirements;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pCopySrcLayouts) {
        pCopySrcLayouts = new VkImageLayout[copy_src->copySrcLayoutCount];
        memcpy((void*)pCopySrcLayouts, (void*)copy_src->pCopySrcLayouts, sizeof(VkImageLayout) * copy_src->copySrcLayoutCount);
    }

    if (copy_src->pCopyDstLayouts) {
        pCopyDstLayouts = new VkImageLayout[copy_src->copyDstLayoutCount];
        memcpy((void*)pCopyDstLayouts, (void*)copy_src->pCopyDstLayouts, sizeof(VkImageLayout) * copy_src->copyDstLayoutCount);
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        optimalTilingLayoutUUID[i] = copy_src->optimalTilingLayoutUUID[i];
    }
}

MemoryToImageCopyEXT::MemoryToImageCopyEXT(const VkMemoryToImageCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      pHostPointer(in_struct->pHostPointer),
      memoryRowLength(in_struct->memoryRowLength),
      memoryImageHeight(in_struct->memoryImageHeight),
      imageSubresource(in_struct->imageSubresource),
      imageOffset(in_struct->imageOffset),
      imageExtent(in_struct->imageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryToImageCopyEXT::MemoryToImageCopyEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT),
      pNext(nullptr),
      pHostPointer(nullptr),
      memoryRowLength(),
      memoryImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

MemoryToImageCopyEXT::MemoryToImageCopyEXT(const MemoryToImageCopyEXT& copy_src) {
    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryToImageCopyEXT& MemoryToImageCopyEXT::operator=(const MemoryToImageCopyEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryToImageCopyEXT::~MemoryToImageCopyEXT() { FreePnextChain(pNext); }

void MemoryToImageCopyEXT::initialize(const VkMemoryToImageCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pHostPointer = in_struct->pHostPointer;
    memoryRowLength = in_struct->memoryRowLength;
    memoryImageHeight = in_struct->memoryImageHeight;
    imageSubresource = in_struct->imageSubresource;
    imageOffset = in_struct->imageOffset;
    imageExtent = in_struct->imageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryToImageCopyEXT::initialize(const MemoryToImageCopyEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pHostPointer = copy_src->pHostPointer;
    memoryRowLength = copy_src->memoryRowLength;
    memoryImageHeight = copy_src->memoryImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageToMemoryCopyEXT::ImageToMemoryCopyEXT(const VkImageToMemoryCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      pHostPointer(in_struct->pHostPointer),
      memoryRowLength(in_struct->memoryRowLength),
      memoryImageHeight(in_struct->memoryImageHeight),
      imageSubresource(in_struct->imageSubresource),
      imageOffset(in_struct->imageOffset),
      imageExtent(in_struct->imageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageToMemoryCopyEXT::ImageToMemoryCopyEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT),
      pNext(nullptr),
      pHostPointer(nullptr),
      memoryRowLength(),
      memoryImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

ImageToMemoryCopyEXT::ImageToMemoryCopyEXT(const ImageToMemoryCopyEXT& copy_src) {
    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageToMemoryCopyEXT& ImageToMemoryCopyEXT::operator=(const ImageToMemoryCopyEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageToMemoryCopyEXT::~ImageToMemoryCopyEXT() { FreePnextChain(pNext); }

void ImageToMemoryCopyEXT::initialize(const VkImageToMemoryCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pHostPointer = in_struct->pHostPointer;
    memoryRowLength = in_struct->memoryRowLength;
    memoryImageHeight = in_struct->memoryImageHeight;
    imageSubresource = in_struct->imageSubresource;
    imageOffset = in_struct->imageOffset;
    imageExtent = in_struct->imageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageToMemoryCopyEXT::initialize(const ImageToMemoryCopyEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pHostPointer = copy_src->pHostPointer;
    memoryRowLength = copy_src->memoryRowLength;
    memoryImageHeight = copy_src->memoryImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyMemoryToImageInfoEXT::CopyMemoryToImageInfoEXT(const VkCopyMemoryToImageInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new MemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyMemoryToImageInfoEXT::CopyMemoryToImageInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT),
      pNext(nullptr),
      flags(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

CopyMemoryToImageInfoEXT::CopyMemoryToImageInfoEXT(const CopyMemoryToImageInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new MemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyMemoryToImageInfoEXT& CopyMemoryToImageInfoEXT::operator=(const CopyMemoryToImageInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new MemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyMemoryToImageInfoEXT::~CopyMemoryToImageInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyMemoryToImageInfoEXT::initialize(const VkCopyMemoryToImageInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new MemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyMemoryToImageInfoEXT::initialize(const CopyMemoryToImageInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new MemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

CopyImageToMemoryInfoEXT::CopyImageToMemoryInfoEXT(const VkCopyImageToMemoryInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyImageToMemoryInfoEXT::CopyImageToMemoryInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT),
      pNext(nullptr),
      flags(),
      srcImage(),
      srcImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

CopyImageToMemoryInfoEXT::CopyImageToMemoryInfoEXT(const CopyImageToMemoryInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyImageToMemoryInfoEXT& CopyImageToMemoryInfoEXT::operator=(const CopyImageToMemoryInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyImageToMemoryInfoEXT::~CopyImageToMemoryInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyImageToMemoryInfoEXT::initialize(const VkCopyImageToMemoryInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyImageToMemoryInfoEXT::initialize(const CopyImageToMemoryInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new ImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

CopyImageToImageInfoEXT::CopyImageToImageInfoEXT(const VkCopyImageToImageInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyImageToImageInfoEXT::CopyImageToImageInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT),
      pNext(nullptr),
      flags(),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

CopyImageToImageInfoEXT::CopyImageToImageInfoEXT(const CopyImageToImageInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyImageToImageInfoEXT& CopyImageToImageInfoEXT::operator=(const CopyImageToImageInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyImageToImageInfoEXT::~CopyImageToImageInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyImageToImageInfoEXT::initialize(const VkCopyImageToImageInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyImageToImageInfoEXT::initialize(const CopyImageToImageInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new ImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

HostImageLayoutTransitionInfoEXT::HostImageLayoutTransitionInfoEXT(const VkHostImageLayoutTransitionInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      image(in_struct->image),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

HostImageLayoutTransitionInfoEXT::HostImageLayoutTransitionInfoEXT()
    : sType(VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT),
      pNext(nullptr),
      image(),
      oldLayout(),
      newLayout(),
      subresourceRange() {}

HostImageLayoutTransitionInfoEXT::HostImageLayoutTransitionInfoEXT(const HostImageLayoutTransitionInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

HostImageLayoutTransitionInfoEXT& HostImageLayoutTransitionInfoEXT::operator=(const HostImageLayoutTransitionInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

HostImageLayoutTransitionInfoEXT::~HostImageLayoutTransitionInfoEXT() { FreePnextChain(pNext); }

void HostImageLayoutTransitionInfoEXT::initialize(const VkHostImageLayoutTransitionInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void HostImageLayoutTransitionInfoEXT::initialize(const HostImageLayoutTransitionInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubresourceHostMemcpySizeEXT::SubresourceHostMemcpySizeEXT(const VkSubresourceHostMemcpySizeEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubresourceHostMemcpySizeEXT::SubresourceHostMemcpySizeEXT()
    : sType(VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT), pNext(nullptr), size() {}

SubresourceHostMemcpySizeEXT::SubresourceHostMemcpySizeEXT(const SubresourceHostMemcpySizeEXT& copy_src) {
    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubresourceHostMemcpySizeEXT& SubresourceHostMemcpySizeEXT::operator=(const SubresourceHostMemcpySizeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubresourceHostMemcpySizeEXT::~SubresourceHostMemcpySizeEXT() { FreePnextChain(pNext); }

void SubresourceHostMemcpySizeEXT::initialize(const VkSubresourceHostMemcpySizeEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubresourceHostMemcpySizeEXT::initialize(const SubresourceHostMemcpySizeEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

HostImageCopyDevicePerformanceQueryEXT::HostImageCopyDevicePerformanceQueryEXT(
    const VkHostImageCopyDevicePerformanceQueryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      optimalDeviceAccess(in_struct->optimalDeviceAccess),
      identicalMemoryLayout(in_struct->identicalMemoryLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

HostImageCopyDevicePerformanceQueryEXT::HostImageCopyDevicePerformanceQueryEXT()
    : sType(VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT),
      pNext(nullptr),
      optimalDeviceAccess(),
      identicalMemoryLayout() {}

HostImageCopyDevicePerformanceQueryEXT::HostImageCopyDevicePerformanceQueryEXT(
    const HostImageCopyDevicePerformanceQueryEXT& copy_src) {
    sType = copy_src.sType;
    optimalDeviceAccess = copy_src.optimalDeviceAccess;
    identicalMemoryLayout = copy_src.identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

HostImageCopyDevicePerformanceQueryEXT& HostImageCopyDevicePerformanceQueryEXT::operator=(
    const HostImageCopyDevicePerformanceQueryEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    optimalDeviceAccess = copy_src.optimalDeviceAccess;
    identicalMemoryLayout = copy_src.identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

HostImageCopyDevicePerformanceQueryEXT::~HostImageCopyDevicePerformanceQueryEXT() { FreePnextChain(pNext); }

void HostImageCopyDevicePerformanceQueryEXT::initialize(const VkHostImageCopyDevicePerformanceQueryEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    optimalDeviceAccess = in_struct->optimalDeviceAccess;
    identicalMemoryLayout = in_struct->identicalMemoryLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void HostImageCopyDevicePerformanceQueryEXT::initialize(const HostImageCopyDevicePerformanceQueryEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    optimalDeviceAccess = copy_src->optimalDeviceAccess;
    identicalMemoryLayout = copy_src->identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::PhysicalDeviceMapMemoryPlacedFeaturesEXT(
    const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      memoryMapPlaced(in_struct->memoryMapPlaced),
      memoryMapRangePlaced(in_struct->memoryMapRangePlaced),
      memoryUnmapReserve(in_struct->memoryUnmapReserve) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::PhysicalDeviceMapMemoryPlacedFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT),
      pNext(nullptr),
      memoryMapPlaced(),
      memoryMapRangePlaced(),
      memoryUnmapReserve() {}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::PhysicalDeviceMapMemoryPlacedFeaturesEXT(
    const PhysicalDeviceMapMemoryPlacedFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    memoryMapPlaced = copy_src.memoryMapPlaced;
    memoryMapRangePlaced = copy_src.memoryMapRangePlaced;
    memoryUnmapReserve = copy_src.memoryUnmapReserve;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT& PhysicalDeviceMapMemoryPlacedFeaturesEXT::operator=(
    const PhysicalDeviceMapMemoryPlacedFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryMapPlaced = copy_src.memoryMapPlaced;
    memoryMapRangePlaced = copy_src.memoryMapRangePlaced;
    memoryUnmapReserve = copy_src.memoryUnmapReserve;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::~PhysicalDeviceMapMemoryPlacedFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMapMemoryPlacedFeaturesEXT::initialize(const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryMapPlaced = in_struct->memoryMapPlaced;
    memoryMapRangePlaced = in_struct->memoryMapRangePlaced;
    memoryUnmapReserve = in_struct->memoryUnmapReserve;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMapMemoryPlacedFeaturesEXT::initialize(const PhysicalDeviceMapMemoryPlacedFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryMapPlaced = copy_src->memoryMapPlaced;
    memoryMapRangePlaced = copy_src->memoryMapRangePlaced;
    memoryUnmapReserve = copy_src->memoryUnmapReserve;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::PhysicalDeviceMapMemoryPlacedPropertiesEXT(
    const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minPlacedMemoryMapAlignment(in_struct->minPlacedMemoryMapAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::PhysicalDeviceMapMemoryPlacedPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT), pNext(nullptr), minPlacedMemoryMapAlignment() {}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::PhysicalDeviceMapMemoryPlacedPropertiesEXT(
    const PhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minPlacedMemoryMapAlignment = copy_src.minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT& PhysicalDeviceMapMemoryPlacedPropertiesEXT::operator=(
    const PhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minPlacedMemoryMapAlignment = copy_src.minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::~PhysicalDeviceMapMemoryPlacedPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMapMemoryPlacedPropertiesEXT::initialize(const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minPlacedMemoryMapAlignment = in_struct->minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMapMemoryPlacedPropertiesEXT::initialize(const PhysicalDeviceMapMemoryPlacedPropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minPlacedMemoryMapAlignment = copy_src->minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryMapPlacedInfoEXT::MemoryMapPlacedInfoEXT(const VkMemoryMapPlacedInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pPlacedAddress(in_struct->pPlacedAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryMapPlacedInfoEXT::MemoryMapPlacedInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT), pNext(nullptr), pPlacedAddress(nullptr) {}

MemoryMapPlacedInfoEXT::MemoryMapPlacedInfoEXT(const MemoryMapPlacedInfoEXT& copy_src) {
    sType = copy_src.sType;
    pPlacedAddress = copy_src.pPlacedAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryMapPlacedInfoEXT& MemoryMapPlacedInfoEXT::operator=(const MemoryMapPlacedInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pPlacedAddress = copy_src.pPlacedAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryMapPlacedInfoEXT::~MemoryMapPlacedInfoEXT() { FreePnextChain(pNext); }

void MemoryMapPlacedInfoEXT::initialize(const VkMemoryMapPlacedInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pPlacedAddress = in_struct->pPlacedAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryMapPlacedInfoEXT::initialize(const MemoryMapPlacedInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pPlacedAddress = copy_src->pPlacedAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::PhysicalDeviceShaderAtomicFloat2FeaturesEXT(
    const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderBufferFloat16Atomics(in_struct->shaderBufferFloat16Atomics),
      shaderBufferFloat16AtomicAdd(in_struct->shaderBufferFloat16AtomicAdd),
      shaderBufferFloat16AtomicMinMax(in_struct->shaderBufferFloat16AtomicMinMax),
      shaderBufferFloat32AtomicMinMax(in_struct->shaderBufferFloat32AtomicMinMax),
      shaderBufferFloat64AtomicMinMax(in_struct->shaderBufferFloat64AtomicMinMax),
      shaderSharedFloat16Atomics(in_struct->shaderSharedFloat16Atomics),
      shaderSharedFloat16AtomicAdd(in_struct->shaderSharedFloat16AtomicAdd),
      shaderSharedFloat16AtomicMinMax(in_struct->shaderSharedFloat16AtomicMinMax),
      shaderSharedFloat32AtomicMinMax(in_struct->shaderSharedFloat32AtomicMinMax),
      shaderSharedFloat64AtomicMinMax(in_struct->shaderSharedFloat64AtomicMinMax),
      shaderImageFloat32AtomicMinMax(in_struct->shaderImageFloat32AtomicMinMax),
      sparseImageFloat32AtomicMinMax(in_struct->sparseImageFloat32AtomicMinMax) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::PhysicalDeviceShaderAtomicFloat2FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT),
      pNext(nullptr),
      shaderBufferFloat16Atomics(),
      shaderBufferFloat16AtomicAdd(),
      shaderBufferFloat16AtomicMinMax(),
      shaderBufferFloat32AtomicMinMax(),
      shaderBufferFloat64AtomicMinMax(),
      shaderSharedFloat16Atomics(),
      shaderSharedFloat16AtomicAdd(),
      shaderSharedFloat16AtomicMinMax(),
      shaderSharedFloat32AtomicMinMax(),
      shaderSharedFloat64AtomicMinMax(),
      shaderImageFloat32AtomicMinMax(),
      sparseImageFloat32AtomicMinMax() {}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::PhysicalDeviceShaderAtomicFloat2FeaturesEXT(
    const PhysicalDeviceShaderAtomicFloat2FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderBufferFloat16Atomics = copy_src.shaderBufferFloat16Atomics;
    shaderBufferFloat16AtomicAdd = copy_src.shaderBufferFloat16AtomicAdd;
    shaderBufferFloat16AtomicMinMax = copy_src.shaderBufferFloat16AtomicMinMax;
    shaderBufferFloat32AtomicMinMax = copy_src.shaderBufferFloat32AtomicMinMax;
    shaderBufferFloat64AtomicMinMax = copy_src.shaderBufferFloat64AtomicMinMax;
    shaderSharedFloat16Atomics = copy_src.shaderSharedFloat16Atomics;
    shaderSharedFloat16AtomicAdd = copy_src.shaderSharedFloat16AtomicAdd;
    shaderSharedFloat16AtomicMinMax = copy_src.shaderSharedFloat16AtomicMinMax;
    shaderSharedFloat32AtomicMinMax = copy_src.shaderSharedFloat32AtomicMinMax;
    shaderSharedFloat64AtomicMinMax = copy_src.shaderSharedFloat64AtomicMinMax;
    shaderImageFloat32AtomicMinMax = copy_src.shaderImageFloat32AtomicMinMax;
    sparseImageFloat32AtomicMinMax = copy_src.sparseImageFloat32AtomicMinMax;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT& PhysicalDeviceShaderAtomicFloat2FeaturesEXT::operator=(
    const PhysicalDeviceShaderAtomicFloat2FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderBufferFloat16Atomics = copy_src.shaderBufferFloat16Atomics;
    shaderBufferFloat16AtomicAdd = copy_src.shaderBufferFloat16AtomicAdd;
    shaderBufferFloat16AtomicMinMax = copy_src.shaderBufferFloat16AtomicMinMax;
    shaderBufferFloat32AtomicMinMax = copy_src.shaderBufferFloat32AtomicMinMax;
    shaderBufferFloat64AtomicMinMax = copy_src.shaderBufferFloat64AtomicMinMax;
    shaderSharedFloat16Atomics = copy_src.shaderSharedFloat16Atomics;
    shaderSharedFloat16AtomicAdd = copy_src.shaderSharedFloat16AtomicAdd;
    shaderSharedFloat16AtomicMinMax = copy_src.shaderSharedFloat16AtomicMinMax;
    shaderSharedFloat32AtomicMinMax = copy_src.shaderSharedFloat32AtomicMinMax;
    shaderSharedFloat64AtomicMinMax = copy_src.shaderSharedFloat64AtomicMinMax;
    shaderImageFloat32AtomicMinMax = copy_src.shaderImageFloat32AtomicMinMax;
    sparseImageFloat32AtomicMinMax = copy_src.sparseImageFloat32AtomicMinMax;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::~PhysicalDeviceShaderAtomicFloat2FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderAtomicFloat2FeaturesEXT::initialize(const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBufferFloat16Atomics = in_struct->shaderBufferFloat16Atomics;
    shaderBufferFloat16AtomicAdd = in_struct->shaderBufferFloat16AtomicAdd;
    shaderBufferFloat16AtomicMinMax = in_struct->shaderBufferFloat16AtomicMinMax;
    shaderBufferFloat32AtomicMinMax = in_struct->shaderBufferFloat32AtomicMinMax;
    shaderBufferFloat64AtomicMinMax = in_struct->shaderBufferFloat64AtomicMinMax;
    shaderSharedFloat16Atomics = in_struct->shaderSharedFloat16Atomics;
    shaderSharedFloat16AtomicAdd = in_struct->shaderSharedFloat16AtomicAdd;
    shaderSharedFloat16AtomicMinMax = in_struct->shaderSharedFloat16AtomicMinMax;
    shaderSharedFloat32AtomicMinMax = in_struct->shaderSharedFloat32AtomicMinMax;
    shaderSharedFloat64AtomicMinMax = in_struct->shaderSharedFloat64AtomicMinMax;
    shaderImageFloat32AtomicMinMax = in_struct->shaderImageFloat32AtomicMinMax;
    sparseImageFloat32AtomicMinMax = in_struct->sparseImageFloat32AtomicMinMax;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderAtomicFloat2FeaturesEXT::initialize(const PhysicalDeviceShaderAtomicFloat2FeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBufferFloat16Atomics = copy_src->shaderBufferFloat16Atomics;
    shaderBufferFloat16AtomicAdd = copy_src->shaderBufferFloat16AtomicAdd;
    shaderBufferFloat16AtomicMinMax = copy_src->shaderBufferFloat16AtomicMinMax;
    shaderBufferFloat32AtomicMinMax = copy_src->shaderBufferFloat32AtomicMinMax;
    shaderBufferFloat64AtomicMinMax = copy_src->shaderBufferFloat64AtomicMinMax;
    shaderSharedFloat16Atomics = copy_src->shaderSharedFloat16Atomics;
    shaderSharedFloat16AtomicAdd = copy_src->shaderSharedFloat16AtomicAdd;
    shaderSharedFloat16AtomicMinMax = copy_src->shaderSharedFloat16AtomicMinMax;
    shaderSharedFloat32AtomicMinMax = copy_src->shaderSharedFloat32AtomicMinMax;
    shaderSharedFloat64AtomicMinMax = copy_src->shaderSharedFloat64AtomicMinMax;
    shaderImageFloat32AtomicMinMax = copy_src->shaderImageFloat32AtomicMinMax;
    sparseImageFloat32AtomicMinMax = copy_src->sparseImageFloat32AtomicMinMax;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfacePresentModeEXT::SurfacePresentModeEXT(const VkSurfacePresentModeEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), presentMode(in_struct->presentMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfacePresentModeEXT::SurfacePresentModeEXT() : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT), pNext(nullptr), presentMode() {}

SurfacePresentModeEXT::SurfacePresentModeEXT(const SurfacePresentModeEXT& copy_src) {
    sType = copy_src.sType;
    presentMode = copy_src.presentMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfacePresentModeEXT& SurfacePresentModeEXT::operator=(const SurfacePresentModeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentMode = copy_src.presentMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfacePresentModeEXT::~SurfacePresentModeEXT() { FreePnextChain(pNext); }

void SurfacePresentModeEXT::initialize(const VkSurfacePresentModeEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentMode = in_struct->presentMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfacePresentModeEXT::initialize(const SurfacePresentModeEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentMode = copy_src->presentMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfacePresentScalingCapabilitiesEXT::SurfacePresentScalingCapabilitiesEXT(const VkSurfacePresentScalingCapabilitiesEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      supportedPresentScaling(in_struct->supportedPresentScaling),
      supportedPresentGravityX(in_struct->supportedPresentGravityX),
      supportedPresentGravityY(in_struct->supportedPresentGravityY),
      minScaledImageExtent(in_struct->minScaledImageExtent),
      maxScaledImageExtent(in_struct->maxScaledImageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfacePresentScalingCapabilitiesEXT::SurfacePresentScalingCapabilitiesEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT),
      pNext(nullptr),
      supportedPresentScaling(),
      supportedPresentGravityX(),
      supportedPresentGravityY(),
      minScaledImageExtent(),
      maxScaledImageExtent() {}

SurfacePresentScalingCapabilitiesEXT::SurfacePresentScalingCapabilitiesEXT(const SurfacePresentScalingCapabilitiesEXT& copy_src) {
    sType = copy_src.sType;
    supportedPresentScaling = copy_src.supportedPresentScaling;
    supportedPresentGravityX = copy_src.supportedPresentGravityX;
    supportedPresentGravityY = copy_src.supportedPresentGravityY;
    minScaledImageExtent = copy_src.minScaledImageExtent;
    maxScaledImageExtent = copy_src.maxScaledImageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfacePresentScalingCapabilitiesEXT& SurfacePresentScalingCapabilitiesEXT::operator=(
    const SurfacePresentScalingCapabilitiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportedPresentScaling = copy_src.supportedPresentScaling;
    supportedPresentGravityX = copy_src.supportedPresentGravityX;
    supportedPresentGravityY = copy_src.supportedPresentGravityY;
    minScaledImageExtent = copy_src.minScaledImageExtent;
    maxScaledImageExtent = copy_src.maxScaledImageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfacePresentScalingCapabilitiesEXT::~SurfacePresentScalingCapabilitiesEXT() { FreePnextChain(pNext); }

void SurfacePresentScalingCapabilitiesEXT::initialize(const VkSurfacePresentScalingCapabilitiesEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportedPresentScaling = in_struct->supportedPresentScaling;
    supportedPresentGravityX = in_struct->supportedPresentGravityX;
    supportedPresentGravityY = in_struct->supportedPresentGravityY;
    minScaledImageExtent = in_struct->minScaledImageExtent;
    maxScaledImageExtent = in_struct->maxScaledImageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfacePresentScalingCapabilitiesEXT::initialize(const SurfacePresentScalingCapabilitiesEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedPresentScaling = copy_src->supportedPresentScaling;
    supportedPresentGravityX = copy_src->supportedPresentGravityX;
    supportedPresentGravityY = copy_src->supportedPresentGravityY;
    minScaledImageExtent = copy_src->minScaledImageExtent;
    maxScaledImageExtent = copy_src->maxScaledImageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfacePresentModeCompatibilityEXT::SurfacePresentModeCompatibilityEXT(const VkSurfacePresentModeCompatibilityEXT* in_struct,
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

SurfacePresentModeCompatibilityEXT::SurfacePresentModeCompatibilityEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT), pNext(nullptr), presentModeCount(), pPresentModes(nullptr) {}

SurfacePresentModeCompatibilityEXT::SurfacePresentModeCompatibilityEXT(const SurfacePresentModeCompatibilityEXT& copy_src) {
    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }
}

SurfacePresentModeCompatibilityEXT& SurfacePresentModeCompatibilityEXT::operator=(
    const SurfacePresentModeCompatibilityEXT& copy_src) {
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

SurfacePresentModeCompatibilityEXT::~SurfacePresentModeCompatibilityEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void SurfacePresentModeCompatibilityEXT::initialize(const VkSurfacePresentModeCompatibilityEXT* in_struct,
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

void SurfacePresentModeCompatibilityEXT::initialize(const SurfacePresentModeCompatibilityEXT* copy_src,
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

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::PhysicalDeviceSwapchainMaintenance1FeaturesEXT(
    const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainMaintenance1(in_struct->swapchainMaintenance1) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::PhysicalDeviceSwapchainMaintenance1FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT), pNext(nullptr), swapchainMaintenance1() {}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::PhysicalDeviceSwapchainMaintenance1FeaturesEXT(
    const PhysicalDeviceSwapchainMaintenance1FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    swapchainMaintenance1 = copy_src.swapchainMaintenance1;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT& PhysicalDeviceSwapchainMaintenance1FeaturesEXT::operator=(
    const PhysicalDeviceSwapchainMaintenance1FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainMaintenance1 = copy_src.swapchainMaintenance1;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::~PhysicalDeviceSwapchainMaintenance1FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceSwapchainMaintenance1FeaturesEXT::initialize(const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainMaintenance1 = in_struct->swapchainMaintenance1;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSwapchainMaintenance1FeaturesEXT::initialize(const PhysicalDeviceSwapchainMaintenance1FeaturesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainMaintenance1 = copy_src->swapchainMaintenance1;
    pNext = SafePnextCopy(copy_src->pNext);
}

SwapchainPresentFenceInfoEXT::SwapchainPresentFenceInfoEXT(const VkSwapchainPresentFenceInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pFences(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (swapchainCount && in_struct->pFences) {
        pFences = new VkFence[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pFences[i] = in_struct->pFences[i];
        }
    }
}

SwapchainPresentFenceInfoEXT::SwapchainPresentFenceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT), pNext(nullptr), swapchainCount(), pFences(nullptr) {}

SwapchainPresentFenceInfoEXT::SwapchainPresentFenceInfoEXT(const SwapchainPresentFenceInfoEXT& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pFences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (swapchainCount && copy_src.pFences) {
        pFences = new VkFence[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pFences[i] = copy_src.pFences[i];
        }
    }
}

SwapchainPresentFenceInfoEXT& SwapchainPresentFenceInfoEXT::operator=(const SwapchainPresentFenceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pFences) delete[] pFences;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pFences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (swapchainCount && copy_src.pFences) {
        pFences = new VkFence[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pFences[i] = copy_src.pFences[i];
        }
    }

    return *this;
}

SwapchainPresentFenceInfoEXT::~SwapchainPresentFenceInfoEXT() {
    if (pFences) delete[] pFences;
    FreePnextChain(pNext);
}

void SwapchainPresentFenceInfoEXT::initialize(const VkSwapchainPresentFenceInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pFences) delete[] pFences;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pFences = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (swapchainCount && in_struct->pFences) {
        pFences = new VkFence[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pFences[i] = in_struct->pFences[i];
        }
    }
}

void SwapchainPresentFenceInfoEXT::initialize(const SwapchainPresentFenceInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pFences = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (swapchainCount && copy_src->pFences) {
        pFences = new VkFence[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pFences[i] = copy_src->pFences[i];
        }
    }
}

SwapchainPresentModesCreateInfoEXT::SwapchainPresentModesCreateInfoEXT(const VkSwapchainPresentModesCreateInfoEXT* in_struct,
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

SwapchainPresentModesCreateInfoEXT::SwapchainPresentModesCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT),
      pNext(nullptr),
      presentModeCount(),
      pPresentModes(nullptr) {}

SwapchainPresentModesCreateInfoEXT::SwapchainPresentModesCreateInfoEXT(const SwapchainPresentModesCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }
}

SwapchainPresentModesCreateInfoEXT& SwapchainPresentModesCreateInfoEXT::operator=(
    const SwapchainPresentModesCreateInfoEXT& copy_src) {
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

SwapchainPresentModesCreateInfoEXT::~SwapchainPresentModesCreateInfoEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void SwapchainPresentModesCreateInfoEXT::initialize(const VkSwapchainPresentModesCreateInfoEXT* in_struct,
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

void SwapchainPresentModesCreateInfoEXT::initialize(const SwapchainPresentModesCreateInfoEXT* copy_src,
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

SwapchainPresentModeInfoEXT::SwapchainPresentModeInfoEXT(const VkSwapchainPresentModeInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pPresentModes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->swapchainCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->swapchainCount);
    }
}

SwapchainPresentModeInfoEXT::SwapchainPresentModeInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT), pNext(nullptr), swapchainCount(), pPresentModes(nullptr) {}

SwapchainPresentModeInfoEXT::SwapchainPresentModeInfoEXT(const SwapchainPresentModeInfoEXT& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.swapchainCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.swapchainCount);
    }
}

SwapchainPresentModeInfoEXT& SwapchainPresentModeInfoEXT::operator=(const SwapchainPresentModeInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.swapchainCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.swapchainCount);
    }

    return *this;
}

SwapchainPresentModeInfoEXT::~SwapchainPresentModeInfoEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void SwapchainPresentModeInfoEXT::initialize(const VkSwapchainPresentModeInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->swapchainCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->swapchainCount);
    }
}

void SwapchainPresentModeInfoEXT::initialize(const SwapchainPresentModeInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src->swapchainCount];
        memcpy((void*)pPresentModes, (void*)copy_src->pPresentModes, sizeof(VkPresentModeKHR) * copy_src->swapchainCount);
    }
}

SwapchainPresentScalingCreateInfoEXT::SwapchainPresentScalingCreateInfoEXT(const VkSwapchainPresentScalingCreateInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      scalingBehavior(in_struct->scalingBehavior),
      presentGravityX(in_struct->presentGravityX),
      presentGravityY(in_struct->presentGravityY) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SwapchainPresentScalingCreateInfoEXT::SwapchainPresentScalingCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT),
      pNext(nullptr),
      scalingBehavior(),
      presentGravityX(),
      presentGravityY() {}

SwapchainPresentScalingCreateInfoEXT::SwapchainPresentScalingCreateInfoEXT(const SwapchainPresentScalingCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    scalingBehavior = copy_src.scalingBehavior;
    presentGravityX = copy_src.presentGravityX;
    presentGravityY = copy_src.presentGravityY;
    pNext = SafePnextCopy(copy_src.pNext);
}

SwapchainPresentScalingCreateInfoEXT& SwapchainPresentScalingCreateInfoEXT::operator=(
    const SwapchainPresentScalingCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    scalingBehavior = copy_src.scalingBehavior;
    presentGravityX = copy_src.presentGravityX;
    presentGravityY = copy_src.presentGravityY;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SwapchainPresentScalingCreateInfoEXT::~SwapchainPresentScalingCreateInfoEXT() { FreePnextChain(pNext); }

void SwapchainPresentScalingCreateInfoEXT::initialize(const VkSwapchainPresentScalingCreateInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    scalingBehavior = in_struct->scalingBehavior;
    presentGravityX = in_struct->presentGravityX;
    presentGravityY = in_struct->presentGravityY;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SwapchainPresentScalingCreateInfoEXT::initialize(const SwapchainPresentScalingCreateInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    scalingBehavior = copy_src->scalingBehavior;
    presentGravityX = copy_src->presentGravityX;
    presentGravityY = copy_src->presentGravityY;
    pNext = SafePnextCopy(copy_src->pNext);
}

ReleaseSwapchainImagesInfoEXT::ReleaseSwapchainImagesInfoEXT(const VkReleaseSwapchainImagesInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      swapchain(in_struct->swapchain),
      imageIndexCount(in_struct->imageIndexCount),
      pImageIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->imageIndexCount];
        memcpy((void*)pImageIndices, (void*)in_struct->pImageIndices, sizeof(uint32_t) * in_struct->imageIndexCount);
    }
}

ReleaseSwapchainImagesInfoEXT::ReleaseSwapchainImagesInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT),
      pNext(nullptr),
      swapchain(),
      imageIndexCount(),
      pImageIndices(nullptr) {}

ReleaseSwapchainImagesInfoEXT::ReleaseSwapchainImagesInfoEXT(const ReleaseSwapchainImagesInfoEXT& copy_src) {
    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    imageIndexCount = copy_src.imageIndexCount;
    pImageIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pImageIndices) {
        pImageIndices = new uint32_t[copy_src.imageIndexCount];
        memcpy((void*)pImageIndices, (void*)copy_src.pImageIndices, sizeof(uint32_t) * copy_src.imageIndexCount);
    }
}

ReleaseSwapchainImagesInfoEXT& ReleaseSwapchainImagesInfoEXT::operator=(const ReleaseSwapchainImagesInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pImageIndices) delete[] pImageIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    imageIndexCount = copy_src.imageIndexCount;
    pImageIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pImageIndices) {
        pImageIndices = new uint32_t[copy_src.imageIndexCount];
        memcpy((void*)pImageIndices, (void*)copy_src.pImageIndices, sizeof(uint32_t) * copy_src.imageIndexCount);
    }

    return *this;
}

ReleaseSwapchainImagesInfoEXT::~ReleaseSwapchainImagesInfoEXT() {
    if (pImageIndices) delete[] pImageIndices;
    FreePnextChain(pNext);
}

void ReleaseSwapchainImagesInfoEXT::initialize(const VkReleaseSwapchainImagesInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImageIndices) delete[] pImageIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchain = in_struct->swapchain;
    imageIndexCount = in_struct->imageIndexCount;
    pImageIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->imageIndexCount];
        memcpy((void*)pImageIndices, (void*)in_struct->pImageIndices, sizeof(uint32_t) * in_struct->imageIndexCount);
    }
}

void ReleaseSwapchainImagesInfoEXT::initialize(const ReleaseSwapchainImagesInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchain = copy_src->swapchain;
    imageIndexCount = copy_src->imageIndexCount;
    pImageIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pImageIndices) {
        pImageIndices = new uint32_t[copy_src->imageIndexCount];
        memcpy((void*)pImageIndices, (void*)copy_src->pImageIndices, sizeof(uint32_t) * copy_src->imageIndexCount);
    }
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::PhysicalDeviceTexelBufferAlignmentFeaturesEXT(
    const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), texelBufferAlignment(in_struct->texelBufferAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::PhysicalDeviceTexelBufferAlignmentFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT), pNext(nullptr), texelBufferAlignment() {}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::PhysicalDeviceTexelBufferAlignmentFeaturesEXT(
    const PhysicalDeviceTexelBufferAlignmentFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    texelBufferAlignment = copy_src.texelBufferAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT& PhysicalDeviceTexelBufferAlignmentFeaturesEXT::operator=(
    const PhysicalDeviceTexelBufferAlignmentFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    texelBufferAlignment = copy_src.texelBufferAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::~PhysicalDeviceTexelBufferAlignmentFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceTexelBufferAlignmentFeaturesEXT::initialize(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    texelBufferAlignment = in_struct->texelBufferAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTexelBufferAlignmentFeaturesEXT::initialize(const PhysicalDeviceTexelBufferAlignmentFeaturesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    texelBufferAlignment = copy_src->texelBufferAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDepthBiasControlFeaturesEXT::PhysicalDeviceDepthBiasControlFeaturesEXT(
    const VkPhysicalDeviceDepthBiasControlFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      depthBiasControl(in_struct->depthBiasControl),
      leastRepresentableValueForceUnormRepresentation(in_struct->leastRepresentableValueForceUnormRepresentation),
      floatRepresentation(in_struct->floatRepresentation),
      depthBiasExact(in_struct->depthBiasExact) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDepthBiasControlFeaturesEXT::PhysicalDeviceDepthBiasControlFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT),
      pNext(nullptr),
      depthBiasControl(),
      leastRepresentableValueForceUnormRepresentation(),
      floatRepresentation(),
      depthBiasExact() {}

PhysicalDeviceDepthBiasControlFeaturesEXT::PhysicalDeviceDepthBiasControlFeaturesEXT(
    const PhysicalDeviceDepthBiasControlFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    depthBiasControl = copy_src.depthBiasControl;
    leastRepresentableValueForceUnormRepresentation = copy_src.leastRepresentableValueForceUnormRepresentation;
    floatRepresentation = copy_src.floatRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDepthBiasControlFeaturesEXT& PhysicalDeviceDepthBiasControlFeaturesEXT::operator=(
    const PhysicalDeviceDepthBiasControlFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthBiasControl = copy_src.depthBiasControl;
    leastRepresentableValueForceUnormRepresentation = copy_src.leastRepresentableValueForceUnormRepresentation;
    floatRepresentation = copy_src.floatRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDepthBiasControlFeaturesEXT::~PhysicalDeviceDepthBiasControlFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDepthBiasControlFeaturesEXT::initialize(const VkPhysicalDeviceDepthBiasControlFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthBiasControl = in_struct->depthBiasControl;
    leastRepresentableValueForceUnormRepresentation = in_struct->leastRepresentableValueForceUnormRepresentation;
    floatRepresentation = in_struct->floatRepresentation;
    depthBiasExact = in_struct->depthBiasExact;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDepthBiasControlFeaturesEXT::initialize(const PhysicalDeviceDepthBiasControlFeaturesEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthBiasControl = copy_src->depthBiasControl;
    leastRepresentableValueForceUnormRepresentation = copy_src->leastRepresentableValueForceUnormRepresentation;
    floatRepresentation = copy_src->floatRepresentation;
    depthBiasExact = copy_src->depthBiasExact;
    pNext = SafePnextCopy(copy_src->pNext);
}

DepthBiasInfoEXT::DepthBiasInfoEXT(const VkDepthBiasInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
      depthBiasClamp(in_struct->depthBiasClamp),
      depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DepthBiasInfoEXT::DepthBiasInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT),
      pNext(nullptr),
      depthBiasConstantFactor(),
      depthBiasClamp(),
      depthBiasSlopeFactor() {}

DepthBiasInfoEXT::DepthBiasInfoEXT(const DepthBiasInfoEXT& copy_src) {
    sType = copy_src.sType;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src.pNext);
}

DepthBiasInfoEXT& DepthBiasInfoEXT::operator=(const DepthBiasInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DepthBiasInfoEXT::~DepthBiasInfoEXT() { FreePnextChain(pNext); }

void DepthBiasInfoEXT::initialize(const VkDepthBiasInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DepthBiasInfoEXT::initialize(const DepthBiasInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthBiasConstantFactor = copy_src->depthBiasConstantFactor;
    depthBiasClamp = copy_src->depthBiasClamp;
    depthBiasSlopeFactor = copy_src->depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src->pNext);
}

DepthBiasRepresentationInfoEXT::DepthBiasRepresentationInfoEXT(const VkDepthBiasRepresentationInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      depthBiasRepresentation(in_struct->depthBiasRepresentation),
      depthBiasExact(in_struct->depthBiasExact) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DepthBiasRepresentationInfoEXT::DepthBiasRepresentationInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT), pNext(nullptr), depthBiasRepresentation(), depthBiasExact() {}

DepthBiasRepresentationInfoEXT::DepthBiasRepresentationInfoEXT(const DepthBiasRepresentationInfoEXT& copy_src) {
    sType = copy_src.sType;
    depthBiasRepresentation = copy_src.depthBiasRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);
}

DepthBiasRepresentationInfoEXT& DepthBiasRepresentationInfoEXT::operator=(const DepthBiasRepresentationInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthBiasRepresentation = copy_src.depthBiasRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DepthBiasRepresentationInfoEXT::~DepthBiasRepresentationInfoEXT() { FreePnextChain(pNext); }

void DepthBiasRepresentationInfoEXT::initialize(const VkDepthBiasRepresentationInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthBiasRepresentation = in_struct->depthBiasRepresentation;
    depthBiasExact = in_struct->depthBiasExact;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DepthBiasRepresentationInfoEXT::initialize(const DepthBiasRepresentationInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthBiasRepresentation = copy_src->depthBiasRepresentation;
    depthBiasExact = copy_src->depthBiasExact;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::PhysicalDeviceDeviceMemoryReportFeaturesEXT(
    const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceMemoryReport(in_struct->deviceMemoryReport) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::PhysicalDeviceDeviceMemoryReportFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT), pNext(nullptr), deviceMemoryReport() {}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::PhysicalDeviceDeviceMemoryReportFeaturesEXT(
    const PhysicalDeviceDeviceMemoryReportFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    deviceMemoryReport = copy_src.deviceMemoryReport;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT& PhysicalDeviceDeviceMemoryReportFeaturesEXT::operator=(
    const PhysicalDeviceDeviceMemoryReportFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceMemoryReport = copy_src.deviceMemoryReport;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::~PhysicalDeviceDeviceMemoryReportFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDeviceMemoryReportFeaturesEXT::initialize(const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceMemoryReport = in_struct->deviceMemoryReport;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDeviceMemoryReportFeaturesEXT::initialize(const PhysicalDeviceDeviceMemoryReportFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceMemoryReport = copy_src->deviceMemoryReport;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceMemoryReportCallbackDataEXT::DeviceMemoryReportCallbackDataEXT(const VkDeviceMemoryReportCallbackDataEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      type(in_struct->type),
      memoryObjectId(in_struct->memoryObjectId),
      size(in_struct->size),
      objectType(in_struct->objectType),
      objectHandle(in_struct->objectHandle),
      heapIndex(in_struct->heapIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceMemoryReportCallbackDataEXT::DeviceMemoryReportCallbackDataEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT),
      pNext(nullptr),
      flags(),
      type(),
      memoryObjectId(),
      size(),
      objectType(),
      objectHandle(),
      heapIndex() {}

DeviceMemoryReportCallbackDataEXT::DeviceMemoryReportCallbackDataEXT(const DeviceMemoryReportCallbackDataEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    type = copy_src.type;
    memoryObjectId = copy_src.memoryObjectId;
    size = copy_src.size;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    heapIndex = copy_src.heapIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceMemoryReportCallbackDataEXT& DeviceMemoryReportCallbackDataEXT::operator=(const DeviceMemoryReportCallbackDataEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    type = copy_src.type;
    memoryObjectId = copy_src.memoryObjectId;
    size = copy_src.size;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    heapIndex = copy_src.heapIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceMemoryReportCallbackDataEXT::~DeviceMemoryReportCallbackDataEXT() { FreePnextChain(pNext); }

void DeviceMemoryReportCallbackDataEXT::initialize(const VkDeviceMemoryReportCallbackDataEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    type = in_struct->type;
    memoryObjectId = in_struct->memoryObjectId;
    size = in_struct->size;
    objectType = in_struct->objectType;
    objectHandle = in_struct->objectHandle;
    heapIndex = in_struct->heapIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceMemoryReportCallbackDataEXT::initialize(const DeviceMemoryReportCallbackDataEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    type = copy_src->type;
    memoryObjectId = copy_src->memoryObjectId;
    size = copy_src->size;
    objectType = copy_src->objectType;
    objectHandle = copy_src->objectHandle;
    heapIndex = copy_src->heapIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceDeviceMemoryReportCreateInfoEXT::DeviceDeviceMemoryReportCreateInfoEXT(
    const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pfnUserCallback(in_struct->pfnUserCallback),
      pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceDeviceMemoryReportCreateInfoEXT::DeviceDeviceMemoryReportCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      pfnUserCallback(),
      pUserData(nullptr) {}

DeviceDeviceMemoryReportCreateInfoEXT::DeviceDeviceMemoryReportCreateInfoEXT(
    const DeviceDeviceMemoryReportCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceDeviceMemoryReportCreateInfoEXT& DeviceDeviceMemoryReportCreateInfoEXT::operator=(
    const DeviceDeviceMemoryReportCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceDeviceMemoryReportCreateInfoEXT::~DeviceDeviceMemoryReportCreateInfoEXT() { FreePnextChain(pNext); }

void DeviceDeviceMemoryReportCreateInfoEXT::initialize(const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pfnUserCallback = in_struct->pfnUserCallback;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceDeviceMemoryReportCreateInfoEXT::initialize(const DeviceDeviceMemoryReportCreateInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pfnUserCallback = copy_src->pfnUserCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRobustness2FeaturesEXT::PhysicalDeviceRobustness2FeaturesEXT(const VkPhysicalDeviceRobustness2FeaturesEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      robustBufferAccess2(in_struct->robustBufferAccess2),
      robustImageAccess2(in_struct->robustImageAccess2),
      nullDescriptor(in_struct->nullDescriptor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRobustness2FeaturesEXT::PhysicalDeviceRobustness2FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT),
      pNext(nullptr),
      robustBufferAccess2(),
      robustImageAccess2(),
      nullDescriptor() {}

PhysicalDeviceRobustness2FeaturesEXT::PhysicalDeviceRobustness2FeaturesEXT(const PhysicalDeviceRobustness2FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    robustBufferAccess2 = copy_src.robustBufferAccess2;
    robustImageAccess2 = copy_src.robustImageAccess2;
    nullDescriptor = copy_src.nullDescriptor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRobustness2FeaturesEXT& PhysicalDeviceRobustness2FeaturesEXT::operator=(
    const PhysicalDeviceRobustness2FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustBufferAccess2 = copy_src.robustBufferAccess2;
    robustImageAccess2 = copy_src.robustImageAccess2;
    nullDescriptor = copy_src.nullDescriptor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRobustness2FeaturesEXT::~PhysicalDeviceRobustness2FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceRobustness2FeaturesEXT::initialize(const VkPhysicalDeviceRobustness2FeaturesEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustBufferAccess2 = in_struct->robustBufferAccess2;
    robustImageAccess2 = in_struct->robustImageAccess2;
    nullDescriptor = in_struct->nullDescriptor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRobustness2FeaturesEXT::initialize(const PhysicalDeviceRobustness2FeaturesEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustBufferAccess2 = copy_src->robustBufferAccess2;
    robustImageAccess2 = copy_src->robustImageAccess2;
    nullDescriptor = copy_src->nullDescriptor;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRobustness2PropertiesEXT::PhysicalDeviceRobustness2PropertiesEXT(
    const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      robustStorageBufferAccessSizeAlignment(in_struct->robustStorageBufferAccessSizeAlignment),
      robustUniformBufferAccessSizeAlignment(in_struct->robustUniformBufferAccessSizeAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRobustness2PropertiesEXT::PhysicalDeviceRobustness2PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT),
      pNext(nullptr),
      robustStorageBufferAccessSizeAlignment(),
      robustUniformBufferAccessSizeAlignment() {}

PhysicalDeviceRobustness2PropertiesEXT::PhysicalDeviceRobustness2PropertiesEXT(
    const PhysicalDeviceRobustness2PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    robustStorageBufferAccessSizeAlignment = copy_src.robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src.robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRobustness2PropertiesEXT& PhysicalDeviceRobustness2PropertiesEXT::operator=(
    const PhysicalDeviceRobustness2PropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustStorageBufferAccessSizeAlignment = copy_src.robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src.robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRobustness2PropertiesEXT::~PhysicalDeviceRobustness2PropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceRobustness2PropertiesEXT::initialize(const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustStorageBufferAccessSizeAlignment = in_struct->robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = in_struct->robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRobustness2PropertiesEXT::initialize(const PhysicalDeviceRobustness2PropertiesEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustStorageBufferAccessSizeAlignment = copy_src->robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src->robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerCustomBorderColorCreateInfoEXT::SamplerCustomBorderColorCreateInfoEXT(
    const VkSamplerCustomBorderColorCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), customBorderColor(in_struct->customBorderColor), format(in_struct->format) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerCustomBorderColorCreateInfoEXT::SamplerCustomBorderColorCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT), pNext(nullptr), customBorderColor(), format() {}

SamplerCustomBorderColorCreateInfoEXT::SamplerCustomBorderColorCreateInfoEXT(
    const SamplerCustomBorderColorCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    customBorderColor = copy_src.customBorderColor;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerCustomBorderColorCreateInfoEXT& SamplerCustomBorderColorCreateInfoEXT::operator=(
    const SamplerCustomBorderColorCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    customBorderColor = copy_src.customBorderColor;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerCustomBorderColorCreateInfoEXT::~SamplerCustomBorderColorCreateInfoEXT() { FreePnextChain(pNext); }

void SamplerCustomBorderColorCreateInfoEXT::initialize(const VkSamplerCustomBorderColorCreateInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    customBorderColor = in_struct->customBorderColor;
    format = in_struct->format;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerCustomBorderColorCreateInfoEXT::initialize(const SamplerCustomBorderColorCreateInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    customBorderColor = copy_src->customBorderColor;
    format = copy_src->format;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCustomBorderColorPropertiesEXT::PhysicalDeviceCustomBorderColorPropertiesEXT(
    const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxCustomBorderColorSamplers(in_struct->maxCustomBorderColorSamplers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCustomBorderColorPropertiesEXT::PhysicalDeviceCustomBorderColorPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT), pNext(nullptr), maxCustomBorderColorSamplers() {}

PhysicalDeviceCustomBorderColorPropertiesEXT::PhysicalDeviceCustomBorderColorPropertiesEXT(
    const PhysicalDeviceCustomBorderColorPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxCustomBorderColorSamplers = copy_src.maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCustomBorderColorPropertiesEXT& PhysicalDeviceCustomBorderColorPropertiesEXT::operator=(
    const PhysicalDeviceCustomBorderColorPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxCustomBorderColorSamplers = copy_src.maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCustomBorderColorPropertiesEXT::~PhysicalDeviceCustomBorderColorPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceCustomBorderColorPropertiesEXT::initialize(const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxCustomBorderColorSamplers = in_struct->maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCustomBorderColorPropertiesEXT::initialize(const PhysicalDeviceCustomBorderColorPropertiesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxCustomBorderColorSamplers = copy_src->maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCustomBorderColorFeaturesEXT::PhysicalDeviceCustomBorderColorFeaturesEXT(
    const VkPhysicalDeviceCustomBorderColorFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      customBorderColors(in_struct->customBorderColors),
      customBorderColorWithoutFormat(in_struct->customBorderColorWithoutFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCustomBorderColorFeaturesEXT::PhysicalDeviceCustomBorderColorFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT),
      pNext(nullptr),
      customBorderColors(),
      customBorderColorWithoutFormat() {}

PhysicalDeviceCustomBorderColorFeaturesEXT::PhysicalDeviceCustomBorderColorFeaturesEXT(
    const PhysicalDeviceCustomBorderColorFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    customBorderColors = copy_src.customBorderColors;
    customBorderColorWithoutFormat = copy_src.customBorderColorWithoutFormat;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCustomBorderColorFeaturesEXT& PhysicalDeviceCustomBorderColorFeaturesEXT::operator=(
    const PhysicalDeviceCustomBorderColorFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    customBorderColors = copy_src.customBorderColors;
    customBorderColorWithoutFormat = copy_src.customBorderColorWithoutFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCustomBorderColorFeaturesEXT::~PhysicalDeviceCustomBorderColorFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceCustomBorderColorFeaturesEXT::initialize(const VkPhysicalDeviceCustomBorderColorFeaturesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    customBorderColors = in_struct->customBorderColors;
    customBorderColorWithoutFormat = in_struct->customBorderColorWithoutFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCustomBorderColorFeaturesEXT::initialize(const PhysicalDeviceCustomBorderColorFeaturesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    customBorderColors = copy_src->customBorderColors;
    customBorderColorWithoutFormat = copy_src->customBorderColorWithoutFormat;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_METAL_EXT

ExportMetalObjectCreateInfoEXT::ExportMetalObjectCreateInfoEXT(const VkExportMetalObjectCreateInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), exportObjectType(in_struct->exportObjectType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalObjectCreateInfoEXT::ExportMetalObjectCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT), pNext(nullptr), exportObjectType() {}

ExportMetalObjectCreateInfoEXT::ExportMetalObjectCreateInfoEXT(const ExportMetalObjectCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    exportObjectType = copy_src.exportObjectType;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalObjectCreateInfoEXT& ExportMetalObjectCreateInfoEXT::operator=(const ExportMetalObjectCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportObjectType = copy_src.exportObjectType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalObjectCreateInfoEXT::~ExportMetalObjectCreateInfoEXT() { FreePnextChain(pNext); }

void ExportMetalObjectCreateInfoEXT::initialize(const VkExportMetalObjectCreateInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportObjectType = in_struct->exportObjectType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalObjectCreateInfoEXT::initialize(const ExportMetalObjectCreateInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportObjectType = copy_src->exportObjectType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalObjectsInfoEXT::ExportMetalObjectsInfoEXT(const VkExportMetalObjectsInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalObjectsInfoEXT::ExportMetalObjectsInfoEXT() : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT), pNext(nullptr) {}

ExportMetalObjectsInfoEXT::ExportMetalObjectsInfoEXT(const ExportMetalObjectsInfoEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalObjectsInfoEXT& ExportMetalObjectsInfoEXT::operator=(const ExportMetalObjectsInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalObjectsInfoEXT::~ExportMetalObjectsInfoEXT() { FreePnextChain(pNext); }

void ExportMetalObjectsInfoEXT::initialize(const VkExportMetalObjectsInfoEXT* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalObjectsInfoEXT::initialize(const ExportMetalObjectsInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalDeviceInfoEXT::ExportMetalDeviceInfoEXT(const VkExportMetalDeviceInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mtlDevice(in_struct->mtlDevice) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalDeviceInfoEXT::ExportMetalDeviceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT), pNext(nullptr), mtlDevice() {}

ExportMetalDeviceInfoEXT::ExportMetalDeviceInfoEXT(const ExportMetalDeviceInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlDevice = copy_src.mtlDevice;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalDeviceInfoEXT& ExportMetalDeviceInfoEXT::operator=(const ExportMetalDeviceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlDevice = copy_src.mtlDevice;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalDeviceInfoEXT::~ExportMetalDeviceInfoEXT() { FreePnextChain(pNext); }

void ExportMetalDeviceInfoEXT::initialize(const VkExportMetalDeviceInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlDevice = in_struct->mtlDevice;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalDeviceInfoEXT::initialize(const ExportMetalDeviceInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlDevice = copy_src->mtlDevice;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalCommandQueueInfoEXT::ExportMetalCommandQueueInfoEXT(const VkExportMetalCommandQueueInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), queue(in_struct->queue), mtlCommandQueue(in_struct->mtlCommandQueue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalCommandQueueInfoEXT::ExportMetalCommandQueueInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT), pNext(nullptr), queue(), mtlCommandQueue() {}

ExportMetalCommandQueueInfoEXT::ExportMetalCommandQueueInfoEXT(const ExportMetalCommandQueueInfoEXT& copy_src) {
    sType = copy_src.sType;
    queue = copy_src.queue;
    mtlCommandQueue = copy_src.mtlCommandQueue;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalCommandQueueInfoEXT& ExportMetalCommandQueueInfoEXT::operator=(const ExportMetalCommandQueueInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queue = copy_src.queue;
    mtlCommandQueue = copy_src.mtlCommandQueue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalCommandQueueInfoEXT::~ExportMetalCommandQueueInfoEXT() { FreePnextChain(pNext); }

void ExportMetalCommandQueueInfoEXT::initialize(const VkExportMetalCommandQueueInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queue = in_struct->queue;
    mtlCommandQueue = in_struct->mtlCommandQueue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalCommandQueueInfoEXT::initialize(const ExportMetalCommandQueueInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queue = copy_src->queue;
    mtlCommandQueue = copy_src->mtlCommandQueue;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalBufferInfoEXT::ExportMetalBufferInfoEXT(const VkExportMetalBufferInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), mtlBuffer(in_struct->mtlBuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalBufferInfoEXT::ExportMetalBufferInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT), pNext(nullptr), memory(), mtlBuffer() {}

ExportMetalBufferInfoEXT::ExportMetalBufferInfoEXT(const ExportMetalBufferInfoEXT& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalBufferInfoEXT& ExportMetalBufferInfoEXT::operator=(const ExportMetalBufferInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalBufferInfoEXT::~ExportMetalBufferInfoEXT() { FreePnextChain(pNext); }

void ExportMetalBufferInfoEXT::initialize(const VkExportMetalBufferInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    mtlBuffer = in_struct->mtlBuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalBufferInfoEXT::initialize(const ExportMetalBufferInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    mtlBuffer = copy_src->mtlBuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMetalBufferInfoEXT::ImportMetalBufferInfoEXT(const VkImportMetalBufferInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mtlBuffer(in_struct->mtlBuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMetalBufferInfoEXT::ImportMetalBufferInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT), pNext(nullptr), mtlBuffer() {}

ImportMetalBufferInfoEXT::ImportMetalBufferInfoEXT(const ImportMetalBufferInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMetalBufferInfoEXT& ImportMetalBufferInfoEXT::operator=(const ImportMetalBufferInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMetalBufferInfoEXT::~ImportMetalBufferInfoEXT() { FreePnextChain(pNext); }

void ImportMetalBufferInfoEXT::initialize(const VkImportMetalBufferInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlBuffer = in_struct->mtlBuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMetalBufferInfoEXT::initialize(const ImportMetalBufferInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlBuffer = copy_src->mtlBuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalTextureInfoEXT::ExportMetalTextureInfoEXT(const VkExportMetalTextureInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      image(in_struct->image),
      imageView(in_struct->imageView),
      bufferView(in_struct->bufferView),
      plane(in_struct->plane),
      mtlTexture(in_struct->mtlTexture) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalTextureInfoEXT::ExportMetalTextureInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT),
      pNext(nullptr),
      image(),
      imageView(),
      bufferView(),
      plane(),
      mtlTexture() {}

ExportMetalTextureInfoEXT::ExportMetalTextureInfoEXT(const ExportMetalTextureInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    imageView = copy_src.imageView;
    bufferView = copy_src.bufferView;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalTextureInfoEXT& ExportMetalTextureInfoEXT::operator=(const ExportMetalTextureInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    imageView = copy_src.imageView;
    bufferView = copy_src.bufferView;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalTextureInfoEXT::~ExportMetalTextureInfoEXT() { FreePnextChain(pNext); }

void ExportMetalTextureInfoEXT::initialize(const VkExportMetalTextureInfoEXT* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    imageView = in_struct->imageView;
    bufferView = in_struct->bufferView;
    plane = in_struct->plane;
    mtlTexture = in_struct->mtlTexture;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalTextureInfoEXT::initialize(const ExportMetalTextureInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    imageView = copy_src->imageView;
    bufferView = copy_src->bufferView;
    plane = copy_src->plane;
    mtlTexture = copy_src->mtlTexture;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMetalTextureInfoEXT::ImportMetalTextureInfoEXT(const VkImportMetalTextureInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), plane(in_struct->plane), mtlTexture(in_struct->mtlTexture) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMetalTextureInfoEXT::ImportMetalTextureInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT), pNext(nullptr), plane(), mtlTexture() {}

ImportMetalTextureInfoEXT::ImportMetalTextureInfoEXT(const ImportMetalTextureInfoEXT& copy_src) {
    sType = copy_src.sType;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMetalTextureInfoEXT& ImportMetalTextureInfoEXT::operator=(const ImportMetalTextureInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMetalTextureInfoEXT::~ImportMetalTextureInfoEXT() { FreePnextChain(pNext); }

void ImportMetalTextureInfoEXT::initialize(const VkImportMetalTextureInfoEXT* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    plane = in_struct->plane;
    mtlTexture = in_struct->mtlTexture;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMetalTextureInfoEXT::initialize(const ImportMetalTextureInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    plane = copy_src->plane;
    mtlTexture = copy_src->mtlTexture;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalIOSurfaceInfoEXT::ExportMetalIOSurfaceInfoEXT(const VkExportMetalIOSurfaceInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), ioSurface(in_struct->ioSurface) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalIOSurfaceInfoEXT::ExportMetalIOSurfaceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT), pNext(nullptr), image(), ioSurface() {}

ExportMetalIOSurfaceInfoEXT::ExportMetalIOSurfaceInfoEXT(const ExportMetalIOSurfaceInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalIOSurfaceInfoEXT& ExportMetalIOSurfaceInfoEXT::operator=(const ExportMetalIOSurfaceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalIOSurfaceInfoEXT::~ExportMetalIOSurfaceInfoEXT() { FreePnextChain(pNext); }

void ExportMetalIOSurfaceInfoEXT::initialize(const VkExportMetalIOSurfaceInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    ioSurface = in_struct->ioSurface;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalIOSurfaceInfoEXT::initialize(const ExportMetalIOSurfaceInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    ioSurface = copy_src->ioSurface;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMetalIOSurfaceInfoEXT::ImportMetalIOSurfaceInfoEXT(const VkImportMetalIOSurfaceInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), ioSurface(in_struct->ioSurface) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMetalIOSurfaceInfoEXT::ImportMetalIOSurfaceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT), pNext(nullptr), ioSurface() {}

ImportMetalIOSurfaceInfoEXT::ImportMetalIOSurfaceInfoEXT(const ImportMetalIOSurfaceInfoEXT& copy_src) {
    sType = copy_src.sType;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMetalIOSurfaceInfoEXT& ImportMetalIOSurfaceInfoEXT::operator=(const ImportMetalIOSurfaceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMetalIOSurfaceInfoEXT::~ImportMetalIOSurfaceInfoEXT() { FreePnextChain(pNext); }

void ImportMetalIOSurfaceInfoEXT::initialize(const VkImportMetalIOSurfaceInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    ioSurface = in_struct->ioSurface;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMetalIOSurfaceInfoEXT::initialize(const ImportMetalIOSurfaceInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    ioSurface = copy_src->ioSurface;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMetalSharedEventInfoEXT::ExportMetalSharedEventInfoEXT(const VkExportMetalSharedEventInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), event(in_struct->event), mtlSharedEvent(in_struct->mtlSharedEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMetalSharedEventInfoEXT::ExportMetalSharedEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT), pNext(nullptr), semaphore(), event(), mtlSharedEvent() {}

ExportMetalSharedEventInfoEXT::ExportMetalSharedEventInfoEXT(const ExportMetalSharedEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    event = copy_src.event;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMetalSharedEventInfoEXT& ExportMetalSharedEventInfoEXT::operator=(const ExportMetalSharedEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    event = copy_src.event;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMetalSharedEventInfoEXT::~ExportMetalSharedEventInfoEXT() { FreePnextChain(pNext); }

void ExportMetalSharedEventInfoEXT::initialize(const VkExportMetalSharedEventInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    event = in_struct->event;
    mtlSharedEvent = in_struct->mtlSharedEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMetalSharedEventInfoEXT::initialize(const ExportMetalSharedEventInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    event = copy_src->event;
    mtlSharedEvent = copy_src->mtlSharedEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImportMetalSharedEventInfoEXT::ImportMetalSharedEventInfoEXT(const VkImportMetalSharedEventInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mtlSharedEvent(in_struct->mtlSharedEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMetalSharedEventInfoEXT::ImportMetalSharedEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT), pNext(nullptr), mtlSharedEvent() {}

ImportMetalSharedEventInfoEXT::ImportMetalSharedEventInfoEXT(const ImportMetalSharedEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMetalSharedEventInfoEXT& ImportMetalSharedEventInfoEXT::operator=(const ImportMetalSharedEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMetalSharedEventInfoEXT::~ImportMetalSharedEventInfoEXT() { FreePnextChain(pNext); }

void ImportMetalSharedEventInfoEXT::initialize(const VkImportMetalSharedEventInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlSharedEvent = in_struct->mtlSharedEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMetalSharedEventInfoEXT::initialize(const ImportMetalSharedEventInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlSharedEvent = copy_src->mtlSharedEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_METAL_EXT

PhysicalDeviceDescriptorBufferPropertiesEXT::PhysicalDeviceDescriptorBufferPropertiesEXT(
    const VkPhysicalDeviceDescriptorBufferPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      combinedImageSamplerDescriptorSingleArray(in_struct->combinedImageSamplerDescriptorSingleArray),
      bufferlessPushDescriptors(in_struct->bufferlessPushDescriptors),
      allowSamplerImageViewPostSubmitCreation(in_struct->allowSamplerImageViewPostSubmitCreation),
      descriptorBufferOffsetAlignment(in_struct->descriptorBufferOffsetAlignment),
      maxDescriptorBufferBindings(in_struct->maxDescriptorBufferBindings),
      maxResourceDescriptorBufferBindings(in_struct->maxResourceDescriptorBufferBindings),
      maxSamplerDescriptorBufferBindings(in_struct->maxSamplerDescriptorBufferBindings),
      maxEmbeddedImmutableSamplerBindings(in_struct->maxEmbeddedImmutableSamplerBindings),
      maxEmbeddedImmutableSamplers(in_struct->maxEmbeddedImmutableSamplers),
      bufferCaptureReplayDescriptorDataSize(in_struct->bufferCaptureReplayDescriptorDataSize),
      imageCaptureReplayDescriptorDataSize(in_struct->imageCaptureReplayDescriptorDataSize),
      imageViewCaptureReplayDescriptorDataSize(in_struct->imageViewCaptureReplayDescriptorDataSize),
      samplerCaptureReplayDescriptorDataSize(in_struct->samplerCaptureReplayDescriptorDataSize),
      accelerationStructureCaptureReplayDescriptorDataSize(in_struct->accelerationStructureCaptureReplayDescriptorDataSize),
      samplerDescriptorSize(in_struct->samplerDescriptorSize),
      combinedImageSamplerDescriptorSize(in_struct->combinedImageSamplerDescriptorSize),
      sampledImageDescriptorSize(in_struct->sampledImageDescriptorSize),
      storageImageDescriptorSize(in_struct->storageImageDescriptorSize),
      uniformTexelBufferDescriptorSize(in_struct->uniformTexelBufferDescriptorSize),
      robustUniformTexelBufferDescriptorSize(in_struct->robustUniformTexelBufferDescriptorSize),
      storageTexelBufferDescriptorSize(in_struct->storageTexelBufferDescriptorSize),
      robustStorageTexelBufferDescriptorSize(in_struct->robustStorageTexelBufferDescriptorSize),
      uniformBufferDescriptorSize(in_struct->uniformBufferDescriptorSize),
      robustUniformBufferDescriptorSize(in_struct->robustUniformBufferDescriptorSize),
      storageBufferDescriptorSize(in_struct->storageBufferDescriptorSize),
      robustStorageBufferDescriptorSize(in_struct->robustStorageBufferDescriptorSize),
      inputAttachmentDescriptorSize(in_struct->inputAttachmentDescriptorSize),
      accelerationStructureDescriptorSize(in_struct->accelerationStructureDescriptorSize),
      maxSamplerDescriptorBufferRange(in_struct->maxSamplerDescriptorBufferRange),
      maxResourceDescriptorBufferRange(in_struct->maxResourceDescriptorBufferRange),
      samplerDescriptorBufferAddressSpaceSize(in_struct->samplerDescriptorBufferAddressSpaceSize),
      resourceDescriptorBufferAddressSpaceSize(in_struct->resourceDescriptorBufferAddressSpaceSize),
      descriptorBufferAddressSpaceSize(in_struct->descriptorBufferAddressSpaceSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorBufferPropertiesEXT::PhysicalDeviceDescriptorBufferPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT),
      pNext(nullptr),
      combinedImageSamplerDescriptorSingleArray(),
      bufferlessPushDescriptors(),
      allowSamplerImageViewPostSubmitCreation(),
      descriptorBufferOffsetAlignment(),
      maxDescriptorBufferBindings(),
      maxResourceDescriptorBufferBindings(),
      maxSamplerDescriptorBufferBindings(),
      maxEmbeddedImmutableSamplerBindings(),
      maxEmbeddedImmutableSamplers(),
      bufferCaptureReplayDescriptorDataSize(),
      imageCaptureReplayDescriptorDataSize(),
      imageViewCaptureReplayDescriptorDataSize(),
      samplerCaptureReplayDescriptorDataSize(),
      accelerationStructureCaptureReplayDescriptorDataSize(),
      samplerDescriptorSize(),
      combinedImageSamplerDescriptorSize(),
      sampledImageDescriptorSize(),
      storageImageDescriptorSize(),
      uniformTexelBufferDescriptorSize(),
      robustUniformTexelBufferDescriptorSize(),
      storageTexelBufferDescriptorSize(),
      robustStorageTexelBufferDescriptorSize(),
      uniformBufferDescriptorSize(),
      robustUniformBufferDescriptorSize(),
      storageBufferDescriptorSize(),
      robustStorageBufferDescriptorSize(),
      inputAttachmentDescriptorSize(),
      accelerationStructureDescriptorSize(),
      maxSamplerDescriptorBufferRange(),
      maxResourceDescriptorBufferRange(),
      samplerDescriptorBufferAddressSpaceSize(),
      resourceDescriptorBufferAddressSpaceSize(),
      descriptorBufferAddressSpaceSize() {}

PhysicalDeviceDescriptorBufferPropertiesEXT::PhysicalDeviceDescriptorBufferPropertiesEXT(
    const PhysicalDeviceDescriptorBufferPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    combinedImageSamplerDescriptorSingleArray = copy_src.combinedImageSamplerDescriptorSingleArray;
    bufferlessPushDescriptors = copy_src.bufferlessPushDescriptors;
    allowSamplerImageViewPostSubmitCreation = copy_src.allowSamplerImageViewPostSubmitCreation;
    descriptorBufferOffsetAlignment = copy_src.descriptorBufferOffsetAlignment;
    maxDescriptorBufferBindings = copy_src.maxDescriptorBufferBindings;
    maxResourceDescriptorBufferBindings = copy_src.maxResourceDescriptorBufferBindings;
    maxSamplerDescriptorBufferBindings = copy_src.maxSamplerDescriptorBufferBindings;
    maxEmbeddedImmutableSamplerBindings = copy_src.maxEmbeddedImmutableSamplerBindings;
    maxEmbeddedImmutableSamplers = copy_src.maxEmbeddedImmutableSamplers;
    bufferCaptureReplayDescriptorDataSize = copy_src.bufferCaptureReplayDescriptorDataSize;
    imageCaptureReplayDescriptorDataSize = copy_src.imageCaptureReplayDescriptorDataSize;
    imageViewCaptureReplayDescriptorDataSize = copy_src.imageViewCaptureReplayDescriptorDataSize;
    samplerCaptureReplayDescriptorDataSize = copy_src.samplerCaptureReplayDescriptorDataSize;
    accelerationStructureCaptureReplayDescriptorDataSize = copy_src.accelerationStructureCaptureReplayDescriptorDataSize;
    samplerDescriptorSize = copy_src.samplerDescriptorSize;
    combinedImageSamplerDescriptorSize = copy_src.combinedImageSamplerDescriptorSize;
    sampledImageDescriptorSize = copy_src.sampledImageDescriptorSize;
    storageImageDescriptorSize = copy_src.storageImageDescriptorSize;
    uniformTexelBufferDescriptorSize = copy_src.uniformTexelBufferDescriptorSize;
    robustUniformTexelBufferDescriptorSize = copy_src.robustUniformTexelBufferDescriptorSize;
    storageTexelBufferDescriptorSize = copy_src.storageTexelBufferDescriptorSize;
    robustStorageTexelBufferDescriptorSize = copy_src.robustStorageTexelBufferDescriptorSize;
    uniformBufferDescriptorSize = copy_src.uniformBufferDescriptorSize;
    robustUniformBufferDescriptorSize = copy_src.robustUniformBufferDescriptorSize;
    storageBufferDescriptorSize = copy_src.storageBufferDescriptorSize;
    robustStorageBufferDescriptorSize = copy_src.robustStorageBufferDescriptorSize;
    inputAttachmentDescriptorSize = copy_src.inputAttachmentDescriptorSize;
    accelerationStructureDescriptorSize = copy_src.accelerationStructureDescriptorSize;
    maxSamplerDescriptorBufferRange = copy_src.maxSamplerDescriptorBufferRange;
    maxResourceDescriptorBufferRange = copy_src.maxResourceDescriptorBufferRange;
    samplerDescriptorBufferAddressSpaceSize = copy_src.samplerDescriptorBufferAddressSpaceSize;
    resourceDescriptorBufferAddressSpaceSize = copy_src.resourceDescriptorBufferAddressSpaceSize;
    descriptorBufferAddressSpaceSize = copy_src.descriptorBufferAddressSpaceSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorBufferPropertiesEXT& PhysicalDeviceDescriptorBufferPropertiesEXT::operator=(
    const PhysicalDeviceDescriptorBufferPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    combinedImageSamplerDescriptorSingleArray = copy_src.combinedImageSamplerDescriptorSingleArray;
    bufferlessPushDescriptors = copy_src.bufferlessPushDescriptors;
    allowSamplerImageViewPostSubmitCreation = copy_src.allowSamplerImageViewPostSubmitCreation;
    descriptorBufferOffsetAlignment = copy_src.descriptorBufferOffsetAlignment;
    maxDescriptorBufferBindings = copy_src.maxDescriptorBufferBindings;
    maxResourceDescriptorBufferBindings = copy_src.maxResourceDescriptorBufferBindings;
    maxSamplerDescriptorBufferBindings = copy_src.maxSamplerDescriptorBufferBindings;
    maxEmbeddedImmutableSamplerBindings = copy_src.maxEmbeddedImmutableSamplerBindings;
    maxEmbeddedImmutableSamplers = copy_src.maxEmbeddedImmutableSamplers;
    bufferCaptureReplayDescriptorDataSize = copy_src.bufferCaptureReplayDescriptorDataSize;
    imageCaptureReplayDescriptorDataSize = copy_src.imageCaptureReplayDescriptorDataSize;
    imageViewCaptureReplayDescriptorDataSize = copy_src.imageViewCaptureReplayDescriptorDataSize;
    samplerCaptureReplayDescriptorDataSize = copy_src.samplerCaptureReplayDescriptorDataSize;
    accelerationStructureCaptureReplayDescriptorDataSize = copy_src.accelerationStructureCaptureReplayDescriptorDataSize;
    samplerDescriptorSize = copy_src.samplerDescriptorSize;
    combinedImageSamplerDescriptorSize = copy_src.combinedImageSamplerDescriptorSize;
    sampledImageDescriptorSize = copy_src.sampledImageDescriptorSize;
    storageImageDescriptorSize = copy_src.storageImageDescriptorSize;
    uniformTexelBufferDescriptorSize = copy_src.uniformTexelBufferDescriptorSize;
    robustUniformTexelBufferDescriptorSize = copy_src.robustUniformTexelBufferDescriptorSize;
    storageTexelBufferDescriptorSize = copy_src.storageTexelBufferDescriptorSize;
    robustStorageTexelBufferDescriptorSize = copy_src.robustStorageTexelBufferDescriptorSize;
    uniformBufferDescriptorSize = copy_src.uniformBufferDescriptorSize;
    robustUniformBufferDescriptorSize = copy_src.robustUniformBufferDescriptorSize;
    storageBufferDescriptorSize = copy_src.storageBufferDescriptorSize;
    robustStorageBufferDescriptorSize = copy_src.robustStorageBufferDescriptorSize;
    inputAttachmentDescriptorSize = copy_src.inputAttachmentDescriptorSize;
    accelerationStructureDescriptorSize = copy_src.accelerationStructureDescriptorSize;
    maxSamplerDescriptorBufferRange = copy_src.maxSamplerDescriptorBufferRange;
    maxResourceDescriptorBufferRange = copy_src.maxResourceDescriptorBufferRange;
    samplerDescriptorBufferAddressSpaceSize = copy_src.samplerDescriptorBufferAddressSpaceSize;
    resourceDescriptorBufferAddressSpaceSize = copy_src.resourceDescriptorBufferAddressSpaceSize;
    descriptorBufferAddressSpaceSize = copy_src.descriptorBufferAddressSpaceSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorBufferPropertiesEXT::~PhysicalDeviceDescriptorBufferPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDescriptorBufferPropertiesEXT::initialize(const VkPhysicalDeviceDescriptorBufferPropertiesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    combinedImageSamplerDescriptorSingleArray = in_struct->combinedImageSamplerDescriptorSingleArray;
    bufferlessPushDescriptors = in_struct->bufferlessPushDescriptors;
    allowSamplerImageViewPostSubmitCreation = in_struct->allowSamplerImageViewPostSubmitCreation;
    descriptorBufferOffsetAlignment = in_struct->descriptorBufferOffsetAlignment;
    maxDescriptorBufferBindings = in_struct->maxDescriptorBufferBindings;
    maxResourceDescriptorBufferBindings = in_struct->maxResourceDescriptorBufferBindings;
    maxSamplerDescriptorBufferBindings = in_struct->maxSamplerDescriptorBufferBindings;
    maxEmbeddedImmutableSamplerBindings = in_struct->maxEmbeddedImmutableSamplerBindings;
    maxEmbeddedImmutableSamplers = in_struct->maxEmbeddedImmutableSamplers;
    bufferCaptureReplayDescriptorDataSize = in_struct->bufferCaptureReplayDescriptorDataSize;
    imageCaptureReplayDescriptorDataSize = in_struct->imageCaptureReplayDescriptorDataSize;
    imageViewCaptureReplayDescriptorDataSize = in_struct->imageViewCaptureReplayDescriptorDataSize;
    samplerCaptureReplayDescriptorDataSize = in_struct->samplerCaptureReplayDescriptorDataSize;
    accelerationStructureCaptureReplayDescriptorDataSize = in_struct->accelerationStructureCaptureReplayDescriptorDataSize;
    samplerDescriptorSize = in_struct->samplerDescriptorSize;
    combinedImageSamplerDescriptorSize = in_struct->combinedImageSamplerDescriptorSize;
    sampledImageDescriptorSize = in_struct->sampledImageDescriptorSize;
    storageImageDescriptorSize = in_struct->storageImageDescriptorSize;
    uniformTexelBufferDescriptorSize = in_struct->uniformTexelBufferDescriptorSize;
    robustUniformTexelBufferDescriptorSize = in_struct->robustUniformTexelBufferDescriptorSize;
    storageTexelBufferDescriptorSize = in_struct->storageTexelBufferDescriptorSize;
    robustStorageTexelBufferDescriptorSize = in_struct->robustStorageTexelBufferDescriptorSize;
    uniformBufferDescriptorSize = in_struct->uniformBufferDescriptorSize;
    robustUniformBufferDescriptorSize = in_struct->robustUniformBufferDescriptorSize;
    storageBufferDescriptorSize = in_struct->storageBufferDescriptorSize;
    robustStorageBufferDescriptorSize = in_struct->robustStorageBufferDescriptorSize;
    inputAttachmentDescriptorSize = in_struct->inputAttachmentDescriptorSize;
    accelerationStructureDescriptorSize = in_struct->accelerationStructureDescriptorSize;
    maxSamplerDescriptorBufferRange = in_struct->maxSamplerDescriptorBufferRange;
    maxResourceDescriptorBufferRange = in_struct->maxResourceDescriptorBufferRange;
    samplerDescriptorBufferAddressSpaceSize = in_struct->samplerDescriptorBufferAddressSpaceSize;
    resourceDescriptorBufferAddressSpaceSize = in_struct->resourceDescriptorBufferAddressSpaceSize;
    descriptorBufferAddressSpaceSize = in_struct->descriptorBufferAddressSpaceSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorBufferPropertiesEXT::initialize(const PhysicalDeviceDescriptorBufferPropertiesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    combinedImageSamplerDescriptorSingleArray = copy_src->combinedImageSamplerDescriptorSingleArray;
    bufferlessPushDescriptors = copy_src->bufferlessPushDescriptors;
    allowSamplerImageViewPostSubmitCreation = copy_src->allowSamplerImageViewPostSubmitCreation;
    descriptorBufferOffsetAlignment = copy_src->descriptorBufferOffsetAlignment;
    maxDescriptorBufferBindings = copy_src->maxDescriptorBufferBindings;
    maxResourceDescriptorBufferBindings = copy_src->maxResourceDescriptorBufferBindings;
    maxSamplerDescriptorBufferBindings = copy_src->maxSamplerDescriptorBufferBindings;
    maxEmbeddedImmutableSamplerBindings = copy_src->maxEmbeddedImmutableSamplerBindings;
    maxEmbeddedImmutableSamplers = copy_src->maxEmbeddedImmutableSamplers;
    bufferCaptureReplayDescriptorDataSize = copy_src->bufferCaptureReplayDescriptorDataSize;
    imageCaptureReplayDescriptorDataSize = copy_src->imageCaptureReplayDescriptorDataSize;
    imageViewCaptureReplayDescriptorDataSize = copy_src->imageViewCaptureReplayDescriptorDataSize;
    samplerCaptureReplayDescriptorDataSize = copy_src->samplerCaptureReplayDescriptorDataSize;
    accelerationStructureCaptureReplayDescriptorDataSize = copy_src->accelerationStructureCaptureReplayDescriptorDataSize;
    samplerDescriptorSize = copy_src->samplerDescriptorSize;
    combinedImageSamplerDescriptorSize = copy_src->combinedImageSamplerDescriptorSize;
    sampledImageDescriptorSize = copy_src->sampledImageDescriptorSize;
    storageImageDescriptorSize = copy_src->storageImageDescriptorSize;
    uniformTexelBufferDescriptorSize = copy_src->uniformTexelBufferDescriptorSize;
    robustUniformTexelBufferDescriptorSize = copy_src->robustUniformTexelBufferDescriptorSize;
    storageTexelBufferDescriptorSize = copy_src->storageTexelBufferDescriptorSize;
    robustStorageTexelBufferDescriptorSize = copy_src->robustStorageTexelBufferDescriptorSize;
    uniformBufferDescriptorSize = copy_src->uniformBufferDescriptorSize;
    robustUniformBufferDescriptorSize = copy_src->robustUniformBufferDescriptorSize;
    storageBufferDescriptorSize = copy_src->storageBufferDescriptorSize;
    robustStorageBufferDescriptorSize = copy_src->robustStorageBufferDescriptorSize;
    inputAttachmentDescriptorSize = copy_src->inputAttachmentDescriptorSize;
    accelerationStructureDescriptorSize = copy_src->accelerationStructureDescriptorSize;
    maxSamplerDescriptorBufferRange = copy_src->maxSamplerDescriptorBufferRange;
    maxResourceDescriptorBufferRange = copy_src->maxResourceDescriptorBufferRange;
    samplerDescriptorBufferAddressSpaceSize = copy_src->samplerDescriptorBufferAddressSpaceSize;
    resourceDescriptorBufferAddressSpaceSize = copy_src->resourceDescriptorBufferAddressSpaceSize;
    descriptorBufferAddressSpaceSize = copy_src->descriptorBufferAddressSpaceSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
    const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      combinedImageSamplerDensityMapDescriptorSize(in_struct->combinedImageSamplerDensityMapDescriptorSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT),
      pNext(nullptr),
      combinedImageSamplerDensityMapDescriptorSize() {}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
    const PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src.combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator=(
    const PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src.combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::~PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::initialize(
    const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    combinedImageSamplerDensityMapDescriptorSize = in_struct->combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::initialize(
    const PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src->combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDescriptorBufferFeaturesEXT::PhysicalDeviceDescriptorBufferFeaturesEXT(
    const VkPhysicalDeviceDescriptorBufferFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      descriptorBuffer(in_struct->descriptorBuffer),
      descriptorBufferCaptureReplay(in_struct->descriptorBufferCaptureReplay),
      descriptorBufferImageLayoutIgnored(in_struct->descriptorBufferImageLayoutIgnored),
      descriptorBufferPushDescriptors(in_struct->descriptorBufferPushDescriptors) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorBufferFeaturesEXT::PhysicalDeviceDescriptorBufferFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT),
      pNext(nullptr),
      descriptorBuffer(),
      descriptorBufferCaptureReplay(),
      descriptorBufferImageLayoutIgnored(),
      descriptorBufferPushDescriptors() {}

PhysicalDeviceDescriptorBufferFeaturesEXT::PhysicalDeviceDescriptorBufferFeaturesEXT(
    const PhysicalDeviceDescriptorBufferFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    descriptorBuffer = copy_src.descriptorBuffer;
    descriptorBufferCaptureReplay = copy_src.descriptorBufferCaptureReplay;
    descriptorBufferImageLayoutIgnored = copy_src.descriptorBufferImageLayoutIgnored;
    descriptorBufferPushDescriptors = copy_src.descriptorBufferPushDescriptors;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorBufferFeaturesEXT& PhysicalDeviceDescriptorBufferFeaturesEXT::operator=(
    const PhysicalDeviceDescriptorBufferFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorBuffer = copy_src.descriptorBuffer;
    descriptorBufferCaptureReplay = copy_src.descriptorBufferCaptureReplay;
    descriptorBufferImageLayoutIgnored = copy_src.descriptorBufferImageLayoutIgnored;
    descriptorBufferPushDescriptors = copy_src.descriptorBufferPushDescriptors;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorBufferFeaturesEXT::~PhysicalDeviceDescriptorBufferFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDescriptorBufferFeaturesEXT::initialize(const VkPhysicalDeviceDescriptorBufferFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorBuffer = in_struct->descriptorBuffer;
    descriptorBufferCaptureReplay = in_struct->descriptorBufferCaptureReplay;
    descriptorBufferImageLayoutIgnored = in_struct->descriptorBufferImageLayoutIgnored;
    descriptorBufferPushDescriptors = in_struct->descriptorBufferPushDescriptors;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorBufferFeaturesEXT::initialize(const PhysicalDeviceDescriptorBufferFeaturesEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorBuffer = copy_src->descriptorBuffer;
    descriptorBufferCaptureReplay = copy_src->descriptorBufferCaptureReplay;
    descriptorBufferImageLayoutIgnored = copy_src->descriptorBufferImageLayoutIgnored;
    descriptorBufferPushDescriptors = copy_src->descriptorBufferPushDescriptors;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorAddressInfoEXT::DescriptorAddressInfoEXT(const VkDescriptorAddressInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), address(in_struct->address), range(in_struct->range), format(in_struct->format) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorAddressInfoEXT::DescriptorAddressInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT), pNext(nullptr), address(), range(), format() {}

DescriptorAddressInfoEXT::DescriptorAddressInfoEXT(const DescriptorAddressInfoEXT& copy_src) {
    sType = copy_src.sType;
    address = copy_src.address;
    range = copy_src.range;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorAddressInfoEXT& DescriptorAddressInfoEXT::operator=(const DescriptorAddressInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    address = copy_src.address;
    range = copy_src.range;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorAddressInfoEXT::~DescriptorAddressInfoEXT() { FreePnextChain(pNext); }

void DescriptorAddressInfoEXT::initialize(const VkDescriptorAddressInfoEXT* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    address = in_struct->address;
    range = in_struct->range;
    format = in_struct->format;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorAddressInfoEXT::initialize(const DescriptorAddressInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    address = copy_src->address;
    range = copy_src->range;
    format = copy_src->format;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorBufferBindingInfoEXT::DescriptorBufferBindingInfoEXT(const VkDescriptorBufferBindingInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), address(in_struct->address), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorBufferBindingInfoEXT::DescriptorBufferBindingInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT), pNext(nullptr), address(), usage() {}

DescriptorBufferBindingInfoEXT::DescriptorBufferBindingInfoEXT(const DescriptorBufferBindingInfoEXT& copy_src) {
    sType = copy_src.sType;
    address = copy_src.address;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorBufferBindingInfoEXT& DescriptorBufferBindingInfoEXT::operator=(const DescriptorBufferBindingInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    address = copy_src.address;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorBufferBindingInfoEXT::~DescriptorBufferBindingInfoEXT() { FreePnextChain(pNext); }

void DescriptorBufferBindingInfoEXT::initialize(const VkDescriptorBufferBindingInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    address = in_struct->address;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorBufferBindingInfoEXT::initialize(const DescriptorBufferBindingInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    address = copy_src->address;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::DescriptorBufferBindingPushDescriptorBufferHandleEXT(
    const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::DescriptorBufferBindingPushDescriptorBufferHandleEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT), pNext(nullptr), buffer() {}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::DescriptorBufferBindingPushDescriptorBufferHandleEXT(
    const DescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT& DescriptorBufferBindingPushDescriptorBufferHandleEXT::operator=(
    const DescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::~DescriptorBufferBindingPushDescriptorBufferHandleEXT() {
    FreePnextChain(pNext);
}

void DescriptorBufferBindingPushDescriptorBufferHandleEXT::initialize(
    const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorBufferBindingPushDescriptorBufferHandleEXT::initialize(
    const DescriptorBufferBindingPushDescriptorBufferHandleEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorGetInfoEXT::DescriptorGetInfoEXT(const VkDescriptorGetInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), type(in_struct->type), data(&in_struct->data, in_struct->type) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorGetInfoEXT::DescriptorGetInfoEXT() : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT), pNext(nullptr), type() {}

DescriptorGetInfoEXT::DescriptorGetInfoEXT(const DescriptorGetInfoEXT& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    data.initialize(&copy_src.data);
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorGetInfoEXT& DescriptorGetInfoEXT::operator=(const DescriptorGetInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    data.initialize(&copy_src.data);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorGetInfoEXT::~DescriptorGetInfoEXT() { FreePnextChain(pNext); }

void DescriptorGetInfoEXT::initialize(const VkDescriptorGetInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    data.initialize(&in_struct->data, in_struct->type);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorGetInfoEXT::initialize(const DescriptorGetInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    data.initialize(&copy_src->data);
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCaptureDescriptorDataInfoEXT::BufferCaptureDescriptorDataInfoEXT(const VkBufferCaptureDescriptorDataInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCaptureDescriptorDataInfoEXT::BufferCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), buffer() {}

BufferCaptureDescriptorDataInfoEXT::BufferCaptureDescriptorDataInfoEXT(const BufferCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCaptureDescriptorDataInfoEXT& BufferCaptureDescriptorDataInfoEXT::operator=(
    const BufferCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCaptureDescriptorDataInfoEXT::~BufferCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void BufferCaptureDescriptorDataInfoEXT::initialize(const VkBufferCaptureDescriptorDataInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCaptureDescriptorDataInfoEXT::initialize(const BufferCaptureDescriptorDataInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageCaptureDescriptorDataInfoEXT::ImageCaptureDescriptorDataInfoEXT(const VkImageCaptureDescriptorDataInfoEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageCaptureDescriptorDataInfoEXT::ImageCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), image() {}

ImageCaptureDescriptorDataInfoEXT::ImageCaptureDescriptorDataInfoEXT(const ImageCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageCaptureDescriptorDataInfoEXT& ImageCaptureDescriptorDataInfoEXT::operator=(const ImageCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageCaptureDescriptorDataInfoEXT::~ImageCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void ImageCaptureDescriptorDataInfoEXT::initialize(const VkImageCaptureDescriptorDataInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageCaptureDescriptorDataInfoEXT::initialize(const ImageCaptureDescriptorDataInfoEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewCaptureDescriptorDataInfoEXT::ImageViewCaptureDescriptorDataInfoEXT(
    const VkImageViewCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageView(in_struct->imageView) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewCaptureDescriptorDataInfoEXT::ImageViewCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), imageView() {}

ImageViewCaptureDescriptorDataInfoEXT::ImageViewCaptureDescriptorDataInfoEXT(
    const ImageViewCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewCaptureDescriptorDataInfoEXT& ImageViewCaptureDescriptorDataInfoEXT::operator=(
    const ImageViewCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewCaptureDescriptorDataInfoEXT::~ImageViewCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void ImageViewCaptureDescriptorDataInfoEXT::initialize(const VkImageViewCaptureDescriptorDataInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewCaptureDescriptorDataInfoEXT::initialize(const ImageViewCaptureDescriptorDataInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerCaptureDescriptorDataInfoEXT::SamplerCaptureDescriptorDataInfoEXT(const VkSamplerCaptureDescriptorDataInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), sampler(in_struct->sampler) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerCaptureDescriptorDataInfoEXT::SamplerCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), sampler() {}

SamplerCaptureDescriptorDataInfoEXT::SamplerCaptureDescriptorDataInfoEXT(const SamplerCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerCaptureDescriptorDataInfoEXT& SamplerCaptureDescriptorDataInfoEXT::operator=(
    const SamplerCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerCaptureDescriptorDataInfoEXT::~SamplerCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void SamplerCaptureDescriptorDataInfoEXT::initialize(const VkSamplerCaptureDescriptorDataInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampler = in_struct->sampler;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerCaptureDescriptorDataInfoEXT::initialize(const SamplerCaptureDescriptorDataInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampler = copy_src->sampler;
    pNext = SafePnextCopy(copy_src->pNext);
}

OpaqueCaptureDescriptorDataCreateInfoEXT::OpaqueCaptureDescriptorDataCreateInfoEXT(
    const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureDescriptorData(in_struct->opaqueCaptureDescriptorData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

OpaqueCaptureDescriptorDataCreateInfoEXT::OpaqueCaptureDescriptorDataCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT),
      pNext(nullptr),
      opaqueCaptureDescriptorData(nullptr) {}

OpaqueCaptureDescriptorDataCreateInfoEXT::OpaqueCaptureDescriptorDataCreateInfoEXT(
    const OpaqueCaptureDescriptorDataCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureDescriptorData = copy_src.opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src.pNext);
}

OpaqueCaptureDescriptorDataCreateInfoEXT& OpaqueCaptureDescriptorDataCreateInfoEXT::operator=(
    const OpaqueCaptureDescriptorDataCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureDescriptorData = copy_src.opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

OpaqueCaptureDescriptorDataCreateInfoEXT::~OpaqueCaptureDescriptorDataCreateInfoEXT() { FreePnextChain(pNext); }

void OpaqueCaptureDescriptorDataCreateInfoEXT::initialize(const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureDescriptorData = in_struct->opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void OpaqueCaptureDescriptorDataCreateInfoEXT::initialize(const OpaqueCaptureDescriptorDataCreateInfoEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureDescriptorData = copy_src->opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureCaptureDescriptorDataInfoEXT::AccelerationStructureCaptureDescriptorDataInfoEXT(
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      accelerationStructure(in_struct->accelerationStructure),
      accelerationStructureNV(in_struct->accelerationStructureNV) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureCaptureDescriptorDataInfoEXT::AccelerationStructureCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT),
      pNext(nullptr),
      accelerationStructure(),
      accelerationStructureNV() {}

AccelerationStructureCaptureDescriptorDataInfoEXT::AccelerationStructureCaptureDescriptorDataInfoEXT(
    const AccelerationStructureCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureNV = copy_src.accelerationStructureNV;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureCaptureDescriptorDataInfoEXT& AccelerationStructureCaptureDescriptorDataInfoEXT::operator=(
    const AccelerationStructureCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureNV = copy_src.accelerationStructureNV;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureCaptureDescriptorDataInfoEXT::~AccelerationStructureCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void AccelerationStructureCaptureDescriptorDataInfoEXT::initialize(
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructure = in_struct->accelerationStructure;
    accelerationStructureNV = in_struct->accelerationStructureNV;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureCaptureDescriptorDataInfoEXT::initialize(
    const AccelerationStructureCaptureDescriptorDataInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructure = copy_src->accelerationStructure;
    accelerationStructureNV = copy_src->accelerationStructureNV;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(
    const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), graphicsPipelineLibrary(in_struct->graphicsPipelineLibrary) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT), pNext(nullptr), graphicsPipelineLibrary() {}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(
    const PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    graphicsPipelineLibrary = copy_src.graphicsPipelineLibrary;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::operator=(
    const PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    graphicsPipelineLibrary = copy_src.graphicsPipelineLibrary;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::~PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::initialize(
    const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    graphicsPipelineLibrary = in_struct->graphicsPipelineLibrary;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::initialize(const PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    graphicsPipelineLibrary = copy_src->graphicsPipelineLibrary;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
    const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      graphicsPipelineLibraryFastLinking(in_struct->graphicsPipelineLibraryFastLinking),
      graphicsPipelineLibraryIndependentInterpolationDecoration(
          in_struct->graphicsPipelineLibraryIndependentInterpolationDecoration) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT),
      pNext(nullptr),
      graphicsPipelineLibraryFastLinking(),
      graphicsPipelineLibraryIndependentInterpolationDecoration() {}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
    const PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    graphicsPipelineLibraryFastLinking = copy_src.graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src.graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator=(
    const PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    graphicsPipelineLibraryFastLinking = copy_src.graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src.graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::~PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::initialize(
    const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    graphicsPipelineLibraryFastLinking = in_struct->graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration =
        in_struct->graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::initialize(
    const PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    graphicsPipelineLibraryFastLinking = copy_src->graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src->graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src->pNext);
}

GraphicsPipelineLibraryCreateInfoEXT::GraphicsPipelineLibraryCreateInfoEXT(const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

GraphicsPipelineLibraryCreateInfoEXT::GraphicsPipelineLibraryCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT), pNext(nullptr), flags() {}

GraphicsPipelineLibraryCreateInfoEXT::GraphicsPipelineLibraryCreateInfoEXT(const GraphicsPipelineLibraryCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

GraphicsPipelineLibraryCreateInfoEXT& GraphicsPipelineLibraryCreateInfoEXT::operator=(
    const GraphicsPipelineLibraryCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

GraphicsPipelineLibraryCreateInfoEXT::~GraphicsPipelineLibraryCreateInfoEXT() { FreePnextChain(pNext); }

void GraphicsPipelineLibraryCreateInfoEXT::initialize(const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void GraphicsPipelineLibraryCreateInfoEXT::initialize(const GraphicsPipelineLibraryCreateInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(
    const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), ycbcr2plane444Formats(in_struct->ycbcr2plane444Formats) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT), pNext(nullptr), ycbcr2plane444Formats() {}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(
    const PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    ycbcr2plane444Formats = copy_src.ycbcr2plane444Formats;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::operator=(
    const PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    ycbcr2plane444Formats = copy_src.ycbcr2plane444Formats;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::~PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::initialize(const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    ycbcr2plane444Formats = in_struct->ycbcr2plane444Formats;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::initialize(const PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    ycbcr2plane444Formats = copy_src->ycbcr2plane444Formats;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::PhysicalDeviceFragmentDensityMap2FeaturesEXT(
    const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityMapDeferred(in_struct->fragmentDensityMapDeferred) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::PhysicalDeviceFragmentDensityMap2FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT), pNext(nullptr), fragmentDensityMapDeferred() {}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::PhysicalDeviceFragmentDensityMap2FeaturesEXT(
    const PhysicalDeviceFragmentDensityMap2FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    fragmentDensityMapDeferred = copy_src.fragmentDensityMapDeferred;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT& PhysicalDeviceFragmentDensityMap2FeaturesEXT::operator=(
    const PhysicalDeviceFragmentDensityMap2FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityMapDeferred = copy_src.fragmentDensityMapDeferred;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::~PhysicalDeviceFragmentDensityMap2FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentDensityMap2FeaturesEXT::initialize(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityMapDeferred = in_struct->fragmentDensityMapDeferred;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMap2FeaturesEXT::initialize(const PhysicalDeviceFragmentDensityMap2FeaturesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityMapDeferred = copy_src->fragmentDensityMapDeferred;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::PhysicalDeviceFragmentDensityMap2PropertiesEXT(
    const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subsampledLoads(in_struct->subsampledLoads),
      subsampledCoarseReconstructionEarlyAccess(in_struct->subsampledCoarseReconstructionEarlyAccess),
      maxSubsampledArrayLayers(in_struct->maxSubsampledArrayLayers),
      maxDescriptorSetSubsampledSamplers(in_struct->maxDescriptorSetSubsampledSamplers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::PhysicalDeviceFragmentDensityMap2PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT),
      pNext(nullptr),
      subsampledLoads(),
      subsampledCoarseReconstructionEarlyAccess(),
      maxSubsampledArrayLayers(),
      maxDescriptorSetSubsampledSamplers() {}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::PhysicalDeviceFragmentDensityMap2PropertiesEXT(
    const PhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    subsampledLoads = copy_src.subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = copy_src.subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = copy_src.maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = copy_src.maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT& PhysicalDeviceFragmentDensityMap2PropertiesEXT::operator=(
    const PhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subsampledLoads = copy_src.subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = copy_src.subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = copy_src.maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = copy_src.maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::~PhysicalDeviceFragmentDensityMap2PropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentDensityMap2PropertiesEXT::initialize(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subsampledLoads = in_struct->subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = in_struct->subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = in_struct->maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = in_struct->maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentDensityMap2PropertiesEXT::initialize(const PhysicalDeviceFragmentDensityMap2PropertiesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subsampledLoads = copy_src->subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = copy_src->subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = copy_src->maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = copy_src->maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageCompressionControlFeaturesEXT::PhysicalDeviceImageCompressionControlFeaturesEXT(
    const VkPhysicalDeviceImageCompressionControlFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), imageCompressionControl(in_struct->imageCompressionControl) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageCompressionControlFeaturesEXT::PhysicalDeviceImageCompressionControlFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT), pNext(nullptr), imageCompressionControl() {}

PhysicalDeviceImageCompressionControlFeaturesEXT::PhysicalDeviceImageCompressionControlFeaturesEXT(
    const PhysicalDeviceImageCompressionControlFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    imageCompressionControl = copy_src.imageCompressionControl;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageCompressionControlFeaturesEXT& PhysicalDeviceImageCompressionControlFeaturesEXT::operator=(
    const PhysicalDeviceImageCompressionControlFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageCompressionControl = copy_src.imageCompressionControl;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageCompressionControlFeaturesEXT::~PhysicalDeviceImageCompressionControlFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceImageCompressionControlFeaturesEXT::initialize(
    const VkPhysicalDeviceImageCompressionControlFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageCompressionControl = in_struct->imageCompressionControl;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageCompressionControlFeaturesEXT::initialize(const PhysicalDeviceImageCompressionControlFeaturesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageCompressionControl = copy_src->imageCompressionControl;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageCompressionControlEXT::ImageCompressionControlEXT(const VkImageCompressionControlEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      compressionControlPlaneCount(in_struct->compressionControlPlaneCount),
      pFixedRateFlags(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pFixedRateFlags) {
        pFixedRateFlags = new VkImageCompressionFixedRateFlagsEXT[in_struct->compressionControlPlaneCount];
        memcpy((void*)pFixedRateFlags, (void*)in_struct->pFixedRateFlags,
               sizeof(VkImageCompressionFixedRateFlagsEXT) * in_struct->compressionControlPlaneCount);
    }
}

ImageCompressionControlEXT::ImageCompressionControlEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT),
      pNext(nullptr),
      flags(),
      compressionControlPlaneCount(),
      pFixedRateFlags(nullptr) {}

ImageCompressionControlEXT::ImageCompressionControlEXT(const ImageCompressionControlEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    compressionControlPlaneCount = copy_src.compressionControlPlaneCount;
    pFixedRateFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pFixedRateFlags) {
        pFixedRateFlags = new VkImageCompressionFixedRateFlagsEXT[copy_src.compressionControlPlaneCount];
        memcpy((void*)pFixedRateFlags, (void*)copy_src.pFixedRateFlags,
               sizeof(VkImageCompressionFixedRateFlagsEXT) * copy_src.compressionControlPlaneCount);
    }
}

ImageCompressionControlEXT& ImageCompressionControlEXT::operator=(const ImageCompressionControlEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pFixedRateFlags) delete[] pFixedRateFlags;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    compressionControlPlaneCount = copy_src.compressionControlPlaneCount;
    pFixedRateFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pFixedRateFlags) {
        pFixedRateFlags = new VkImageCompressionFixedRateFlagsEXT[copy_src.compressionControlPlaneCount];
        memcpy((void*)pFixedRateFlags, (void*)copy_src.pFixedRateFlags,
               sizeof(VkImageCompressionFixedRateFlagsEXT) * copy_src.compressionControlPlaneCount);
    }

    return *this;
}

ImageCompressionControlEXT::~ImageCompressionControlEXT() {
    if (pFixedRateFlags) delete[] pFixedRateFlags;
    FreePnextChain(pNext);
}

void ImageCompressionControlEXT::initialize(const VkImageCompressionControlEXT* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pFixedRateFlags) delete[] pFixedRateFlags;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    compressionControlPlaneCount = in_struct->compressionControlPlaneCount;
    pFixedRateFlags = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pFixedRateFlags) {
        pFixedRateFlags = new VkImageCompressionFixedRateFlagsEXT[in_struct->compressionControlPlaneCount];
        memcpy((void*)pFixedRateFlags, (void*)in_struct->pFixedRateFlags,
               sizeof(VkImageCompressionFixedRateFlagsEXT) * in_struct->compressionControlPlaneCount);
    }
}

void ImageCompressionControlEXT::initialize(const ImageCompressionControlEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    compressionControlPlaneCount = copy_src->compressionControlPlaneCount;
    pFixedRateFlags = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pFixedRateFlags) {
        pFixedRateFlags = new VkImageCompressionFixedRateFlagsEXT[copy_src->compressionControlPlaneCount];
        memcpy((void*)pFixedRateFlags, (void*)copy_src->pFixedRateFlags,
               sizeof(VkImageCompressionFixedRateFlagsEXT) * copy_src->compressionControlPlaneCount);
    }
}

ImageCompressionPropertiesEXT::ImageCompressionPropertiesEXT(const VkImageCompressionPropertiesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageCompressionFlags(in_struct->imageCompressionFlags),
      imageCompressionFixedRateFlags(in_struct->imageCompressionFixedRateFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageCompressionPropertiesEXT::ImageCompressionPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT),
      pNext(nullptr),
      imageCompressionFlags(),
      imageCompressionFixedRateFlags() {}

ImageCompressionPropertiesEXT::ImageCompressionPropertiesEXT(const ImageCompressionPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    imageCompressionFlags = copy_src.imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src.imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageCompressionPropertiesEXT& ImageCompressionPropertiesEXT::operator=(const ImageCompressionPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageCompressionFlags = copy_src.imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src.imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageCompressionPropertiesEXT::~ImageCompressionPropertiesEXT() { FreePnextChain(pNext); }

void ImageCompressionPropertiesEXT::initialize(const VkImageCompressionPropertiesEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageCompressionFlags = in_struct->imageCompressionFlags;
    imageCompressionFixedRateFlags = in_struct->imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageCompressionPropertiesEXT::initialize(const ImageCompressionPropertiesEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageCompressionFlags = copy_src->imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src->imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(
    const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), attachmentFeedbackLoopLayout(in_struct->attachmentFeedbackLoopLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT),
      pNext(nullptr),
      attachmentFeedbackLoopLayout() {}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(
    const PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    attachmentFeedbackLoopLayout = copy_src.attachmentFeedbackLoopLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::operator=(
    const PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentFeedbackLoopLayout = copy_src.attachmentFeedbackLoopLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::~PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::initialize(
    const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentFeedbackLoopLayout = in_struct->attachmentFeedbackLoopLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::initialize(
    const PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentFeedbackLoopLayout = copy_src->attachmentFeedbackLoopLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevice4444FormatsFeaturesEXT::PhysicalDevice4444FormatsFeaturesEXT(const VkPhysicalDevice4444FormatsFeaturesEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), formatA4R4G4B4(in_struct->formatA4R4G4B4), formatA4B4G4R4(in_struct->formatA4B4G4R4) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevice4444FormatsFeaturesEXT::PhysicalDevice4444FormatsFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT), pNext(nullptr), formatA4R4G4B4(), formatA4B4G4R4() {}

PhysicalDevice4444FormatsFeaturesEXT::PhysicalDevice4444FormatsFeaturesEXT(const PhysicalDevice4444FormatsFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    formatA4R4G4B4 = copy_src.formatA4R4G4B4;
    formatA4B4G4R4 = copy_src.formatA4B4G4R4;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevice4444FormatsFeaturesEXT& PhysicalDevice4444FormatsFeaturesEXT::operator=(
    const PhysicalDevice4444FormatsFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    formatA4R4G4B4 = copy_src.formatA4R4G4B4;
    formatA4B4G4R4 = copy_src.formatA4B4G4R4;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevice4444FormatsFeaturesEXT::~PhysicalDevice4444FormatsFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevice4444FormatsFeaturesEXT::initialize(const VkPhysicalDevice4444FormatsFeaturesEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    formatA4R4G4B4 = in_struct->formatA4R4G4B4;
    formatA4B4G4R4 = in_struct->formatA4B4G4R4;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevice4444FormatsFeaturesEXT::initialize(const PhysicalDevice4444FormatsFeaturesEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    formatA4R4G4B4 = copy_src->formatA4R4G4B4;
    formatA4B4G4R4 = copy_src->formatA4B4G4R4;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFaultFeaturesEXT::PhysicalDeviceFaultFeaturesEXT(const VkPhysicalDeviceFaultFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceFault(in_struct->deviceFault), deviceFaultVendorBinary(in_struct->deviceFaultVendorBinary) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFaultFeaturesEXT::PhysicalDeviceFaultFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT), pNext(nullptr), deviceFault(), deviceFaultVendorBinary() {}

PhysicalDeviceFaultFeaturesEXT::PhysicalDeviceFaultFeaturesEXT(const PhysicalDeviceFaultFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    deviceFault = copy_src.deviceFault;
    deviceFaultVendorBinary = copy_src.deviceFaultVendorBinary;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFaultFeaturesEXT& PhysicalDeviceFaultFeaturesEXT::operator=(const PhysicalDeviceFaultFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceFault = copy_src.deviceFault;
    deviceFaultVendorBinary = copy_src.deviceFaultVendorBinary;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFaultFeaturesEXT::~PhysicalDeviceFaultFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFaultFeaturesEXT::initialize(const VkPhysicalDeviceFaultFeaturesEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceFault = in_struct->deviceFault;
    deviceFaultVendorBinary = in_struct->deviceFaultVendorBinary;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFaultFeaturesEXT::initialize(const PhysicalDeviceFaultFeaturesEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceFault = copy_src->deviceFault;
    deviceFaultVendorBinary = copy_src->deviceFaultVendorBinary;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceFaultCountsEXT::DeviceFaultCountsEXT(const VkDeviceFaultCountsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      addressInfoCount(in_struct->addressInfoCount),
      vendorInfoCount(in_struct->vendorInfoCount),
      vendorBinarySize(in_struct->vendorBinarySize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceFaultCountsEXT::DeviceFaultCountsEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT), pNext(nullptr), addressInfoCount(), vendorInfoCount(), vendorBinarySize() {}

DeviceFaultCountsEXT::DeviceFaultCountsEXT(const DeviceFaultCountsEXT& copy_src) {
    sType = copy_src.sType;
    addressInfoCount = copy_src.addressInfoCount;
    vendorInfoCount = copy_src.vendorInfoCount;
    vendorBinarySize = copy_src.vendorBinarySize;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceFaultCountsEXT& DeviceFaultCountsEXT::operator=(const DeviceFaultCountsEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    addressInfoCount = copy_src.addressInfoCount;
    vendorInfoCount = copy_src.vendorInfoCount;
    vendorBinarySize = copy_src.vendorBinarySize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceFaultCountsEXT::~DeviceFaultCountsEXT() { FreePnextChain(pNext); }

void DeviceFaultCountsEXT::initialize(const VkDeviceFaultCountsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    addressInfoCount = in_struct->addressInfoCount;
    vendorInfoCount = in_struct->vendorInfoCount;
    vendorBinarySize = in_struct->vendorBinarySize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceFaultCountsEXT::initialize(const DeviceFaultCountsEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    addressInfoCount = copy_src->addressInfoCount;
    vendorInfoCount = copy_src->vendorInfoCount;
    vendorBinarySize = copy_src->vendorBinarySize;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceFaultInfoEXT::DeviceFaultInfoEXT(const VkDeviceFaultInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), pAddressInfos(nullptr), pVendorInfos(nullptr), pVendorBinaryData(in_struct->pVendorBinaryData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    if (in_struct->pAddressInfos) {
        pAddressInfos = new VkDeviceFaultAddressInfoEXT(*in_struct->pAddressInfos);
    }

    if (in_struct->pVendorInfos) {
        pVendorInfos = new VkDeviceFaultVendorInfoEXT(*in_struct->pVendorInfos);
    }
}

DeviceFaultInfoEXT::DeviceFaultInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT),
      pNext(nullptr),
      pAddressInfos(nullptr),
      pVendorInfos(nullptr),
      pVendorBinaryData(nullptr) {}

DeviceFaultInfoEXT::DeviceFaultInfoEXT(const DeviceFaultInfoEXT& copy_src) {
    sType = copy_src.sType;
    pAddressInfos = nullptr;
    pVendorInfos = nullptr;
    pVendorBinaryData = copy_src.pVendorBinaryData;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    if (copy_src.pAddressInfos) {
        pAddressInfos = new VkDeviceFaultAddressInfoEXT(*copy_src.pAddressInfos);
    }

    if (copy_src.pVendorInfos) {
        pVendorInfos = new VkDeviceFaultVendorInfoEXT(*copy_src.pVendorInfos);
    }
}

DeviceFaultInfoEXT& DeviceFaultInfoEXT::operator=(const DeviceFaultInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pAddressInfos) delete pAddressInfos;
    if (pVendorInfos) delete pVendorInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pAddressInfos = nullptr;
    pVendorInfos = nullptr;
    pVendorBinaryData = copy_src.pVendorBinaryData;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    if (copy_src.pAddressInfos) {
        pAddressInfos = new VkDeviceFaultAddressInfoEXT(*copy_src.pAddressInfos);
    }

    if (copy_src.pVendorInfos) {
        pVendorInfos = new VkDeviceFaultVendorInfoEXT(*copy_src.pVendorInfos);
    }

    return *this;
}

DeviceFaultInfoEXT::~DeviceFaultInfoEXT() {
    if (pAddressInfos) delete pAddressInfos;
    if (pVendorInfos) delete pVendorInfos;
    FreePnextChain(pNext);
}

void DeviceFaultInfoEXT::initialize(const VkDeviceFaultInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAddressInfos) delete pAddressInfos;
    if (pVendorInfos) delete pVendorInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pAddressInfos = nullptr;
    pVendorInfos = nullptr;
    pVendorBinaryData = in_struct->pVendorBinaryData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    if (in_struct->pAddressInfos) {
        pAddressInfos = new VkDeviceFaultAddressInfoEXT(*in_struct->pAddressInfos);
    }

    if (in_struct->pVendorInfos) {
        pVendorInfos = new VkDeviceFaultVendorInfoEXT(*in_struct->pVendorInfos);
    }
}

void DeviceFaultInfoEXT::initialize(const DeviceFaultInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pAddressInfos = nullptr;
    pVendorInfos = nullptr;
    pVendorBinaryData = copy_src->pVendorBinaryData;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }

    if (copy_src->pAddressInfos) {
        pAddressInfos = new VkDeviceFaultAddressInfoEXT(*copy_src->pAddressInfos);
    }

    if (copy_src->pVendorInfos) {
        pVendorInfos = new VkDeviceFaultVendorInfoEXT(*copy_src->pVendorInfos);
    }
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(
    const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      rasterizationOrderColorAttachmentAccess(in_struct->rasterizationOrderColorAttachmentAccess),
      rasterizationOrderDepthAttachmentAccess(in_struct->rasterizationOrderDepthAttachmentAccess),
      rasterizationOrderStencilAttachmentAccess(in_struct->rasterizationOrderStencilAttachmentAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT),
      pNext(nullptr),
      rasterizationOrderColorAttachmentAccess(),
      rasterizationOrderDepthAttachmentAccess(),
      rasterizationOrderStencilAttachmentAccess() {}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(
    const PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    rasterizationOrderColorAttachmentAccess = copy_src.rasterizationOrderColorAttachmentAccess;
    rasterizationOrderDepthAttachmentAccess = copy_src.rasterizationOrderDepthAttachmentAccess;
    rasterizationOrderStencilAttachmentAccess = copy_src.rasterizationOrderStencilAttachmentAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::operator=(
    const PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rasterizationOrderColorAttachmentAccess = copy_src.rasterizationOrderColorAttachmentAccess;
    rasterizationOrderDepthAttachmentAccess = copy_src.rasterizationOrderDepthAttachmentAccess;
    rasterizationOrderStencilAttachmentAccess = copy_src.rasterizationOrderStencilAttachmentAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::~PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::initialize(
    const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rasterizationOrderColorAttachmentAccess = in_struct->rasterizationOrderColorAttachmentAccess;
    rasterizationOrderDepthAttachmentAccess = in_struct->rasterizationOrderDepthAttachmentAccess;
    rasterizationOrderStencilAttachmentAccess = in_struct->rasterizationOrderStencilAttachmentAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::initialize(
    const PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rasterizationOrderColorAttachmentAccess = copy_src->rasterizationOrderColorAttachmentAccess;
    rasterizationOrderDepthAttachmentAccess = copy_src->rasterizationOrderDepthAttachmentAccess;
    rasterizationOrderStencilAttachmentAccess = copy_src->rasterizationOrderStencilAttachmentAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::PhysicalDeviceRGBA10X6FormatsFeaturesEXT(
    const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), formatRgba10x6WithoutYCbCrSampler(in_struct->formatRgba10x6WithoutYCbCrSampler) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::PhysicalDeviceRGBA10X6FormatsFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT), pNext(nullptr), formatRgba10x6WithoutYCbCrSampler() {}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::PhysicalDeviceRGBA10X6FormatsFeaturesEXT(
    const PhysicalDeviceRGBA10X6FormatsFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    formatRgba10x6WithoutYCbCrSampler = copy_src.formatRgba10x6WithoutYCbCrSampler;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT& PhysicalDeviceRGBA10X6FormatsFeaturesEXT::operator=(
    const PhysicalDeviceRGBA10X6FormatsFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    formatRgba10x6WithoutYCbCrSampler = copy_src.formatRgba10x6WithoutYCbCrSampler;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::~PhysicalDeviceRGBA10X6FormatsFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceRGBA10X6FormatsFeaturesEXT::initialize(const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    formatRgba10x6WithoutYCbCrSampler = in_struct->formatRgba10x6WithoutYCbCrSampler;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRGBA10X6FormatsFeaturesEXT::initialize(const PhysicalDeviceRGBA10X6FormatsFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    formatRgba10x6WithoutYCbCrSampler = copy_src->formatRgba10x6WithoutYCbCrSampler;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT

DirectFBSurfaceCreateInfoEXT::DirectFBSurfaceCreateInfoEXT(const VkDirectFBSurfaceCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), dfb(nullptr), surface(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->dfb) {
        dfb = new IDirectFB(*in_struct->dfb);
    }

    if (in_struct->surface) {
        surface = new IDirectFBSurface(*in_struct->surface);
    }
}

DirectFBSurfaceCreateInfoEXT::DirectFBSurfaceCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT), pNext(nullptr), flags(), dfb(nullptr), surface(nullptr) {}

DirectFBSurfaceCreateInfoEXT::DirectFBSurfaceCreateInfoEXT(const DirectFBSurfaceCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dfb = nullptr;
    surface = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.dfb) {
        dfb = new IDirectFB(*copy_src.dfb);
    }

    if (copy_src.surface) {
        surface = new IDirectFBSurface(*copy_src.surface);
    }
}

DirectFBSurfaceCreateInfoEXT& DirectFBSurfaceCreateInfoEXT::operator=(const DirectFBSurfaceCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (dfb) delete dfb;
    if (surface) delete surface;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    dfb = nullptr;
    surface = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.dfb) {
        dfb = new IDirectFB(*copy_src.dfb);
    }

    if (copy_src.surface) {
        surface = new IDirectFBSurface(*copy_src.surface);
    }

    return *this;
}

DirectFBSurfaceCreateInfoEXT::~DirectFBSurfaceCreateInfoEXT() {
    if (dfb) delete dfb;
    if (surface) delete surface;
    FreePnextChain(pNext);
}

void DirectFBSurfaceCreateInfoEXT::initialize(const VkDirectFBSurfaceCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (dfb) delete dfb;
    if (surface) delete surface;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    dfb = nullptr;
    surface = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->dfb) {
        dfb = new IDirectFB(*in_struct->dfb);
    }

    if (in_struct->surface) {
        surface = new IDirectFBSurface(*in_struct->surface);
    }
}

void DirectFBSurfaceCreateInfoEXT::initialize(const DirectFBSurfaceCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dfb = nullptr;
    surface = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->dfb) {
        dfb = new IDirectFB(*copy_src->dfb);
    }

    if (copy_src->surface) {
        surface = new IDirectFBSurface(*copy_src->surface);
    }
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::PhysicalDeviceMutableDescriptorTypeFeaturesEXT(
    const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mutableDescriptorType(in_struct->mutableDescriptorType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::PhysicalDeviceMutableDescriptorTypeFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT), pNext(nullptr), mutableDescriptorType() {}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::PhysicalDeviceMutableDescriptorTypeFeaturesEXT(
    const PhysicalDeviceMutableDescriptorTypeFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    mutableDescriptorType = copy_src.mutableDescriptorType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT& PhysicalDeviceMutableDescriptorTypeFeaturesEXT::operator=(
    const PhysicalDeviceMutableDescriptorTypeFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mutableDescriptorType = copy_src.mutableDescriptorType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::~PhysicalDeviceMutableDescriptorTypeFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMutableDescriptorTypeFeaturesEXT::initialize(const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mutableDescriptorType = in_struct->mutableDescriptorType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMutableDescriptorTypeFeaturesEXT::initialize(const PhysicalDeviceMutableDescriptorTypeFeaturesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mutableDescriptorType = copy_src->mutableDescriptorType;
    pNext = SafePnextCopy(copy_src->pNext);
}

MutableDescriptorTypeListEXT::MutableDescriptorTypeListEXT(const VkMutableDescriptorTypeListEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state)
    : descriptorTypeCount(in_struct->descriptorTypeCount), pDescriptorTypes(nullptr) {
    if (in_struct->pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[in_struct->descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)in_struct->pDescriptorTypes,
               sizeof(VkDescriptorType) * in_struct->descriptorTypeCount);
    }
}

MutableDescriptorTypeListEXT::MutableDescriptorTypeListEXT() : descriptorTypeCount(), pDescriptorTypes(nullptr) {}

MutableDescriptorTypeListEXT::MutableDescriptorTypeListEXT(const MutableDescriptorTypeListEXT& copy_src) {
    descriptorTypeCount = copy_src.descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (copy_src.pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[copy_src.descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)copy_src.pDescriptorTypes, sizeof(VkDescriptorType) * copy_src.descriptorTypeCount);
    }
}

MutableDescriptorTypeListEXT& MutableDescriptorTypeListEXT::operator=(const MutableDescriptorTypeListEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorTypes) delete[] pDescriptorTypes;

    descriptorTypeCount = copy_src.descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (copy_src.pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[copy_src.descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)copy_src.pDescriptorTypes, sizeof(VkDescriptorType) * copy_src.descriptorTypeCount);
    }

    return *this;
}

MutableDescriptorTypeListEXT::~MutableDescriptorTypeListEXT() {
    if (pDescriptorTypes) delete[] pDescriptorTypes;
}

void MutableDescriptorTypeListEXT::initialize(const VkMutableDescriptorTypeListEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorTypes) delete[] pDescriptorTypes;
    descriptorTypeCount = in_struct->descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (in_struct->pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[in_struct->descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)in_struct->pDescriptorTypes,
               sizeof(VkDescriptorType) * in_struct->descriptorTypeCount);
    }
}

void MutableDescriptorTypeListEXT::initialize(const MutableDescriptorTypeListEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    descriptorTypeCount = copy_src->descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (copy_src->pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[copy_src->descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)copy_src->pDescriptorTypes,
               sizeof(VkDescriptorType) * copy_src->descriptorTypeCount);
    }
}

MutableDescriptorTypeCreateInfoEXT::MutableDescriptorTypeCreateInfoEXT(const VkMutableDescriptorTypeCreateInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      mutableDescriptorTypeListCount(in_struct->mutableDescriptorTypeListCount),
      pMutableDescriptorTypeLists(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (mutableDescriptorTypeListCount && in_struct->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new MutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&in_struct->pMutableDescriptorTypeLists[i]);
        }
    }
}

MutableDescriptorTypeCreateInfoEXT::MutableDescriptorTypeCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT),
      pNext(nullptr),
      mutableDescriptorTypeListCount(),
      pMutableDescriptorTypeLists(nullptr) {}

MutableDescriptorTypeCreateInfoEXT::MutableDescriptorTypeCreateInfoEXT(const MutableDescriptorTypeCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    mutableDescriptorTypeListCount = copy_src.mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (mutableDescriptorTypeListCount && copy_src.pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new MutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src.pMutableDescriptorTypeLists[i]);
        }
    }
}

MutableDescriptorTypeCreateInfoEXT& MutableDescriptorTypeCreateInfoEXT::operator=(
    const MutableDescriptorTypeCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    mutableDescriptorTypeListCount = copy_src.mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (mutableDescriptorTypeListCount && copy_src.pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new MutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src.pMutableDescriptorTypeLists[i]);
        }
    }

    return *this;
}

MutableDescriptorTypeCreateInfoEXT::~MutableDescriptorTypeCreateInfoEXT() {
    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);
}

void MutableDescriptorTypeCreateInfoEXT::initialize(const VkMutableDescriptorTypeCreateInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mutableDescriptorTypeListCount = in_struct->mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (mutableDescriptorTypeListCount && in_struct->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new MutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&in_struct->pMutableDescriptorTypeLists[i]);
        }
    }
}

void MutableDescriptorTypeCreateInfoEXT::initialize(const MutableDescriptorTypeCreateInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mutableDescriptorTypeListCount = copy_src->mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (mutableDescriptorTypeListCount && copy_src->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new MutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src->pMutableDescriptorTypeLists[i]);
        }
    }
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::PhysicalDeviceVertexInputDynamicStateFeaturesEXT(
    const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), vertexInputDynamicState(in_struct->vertexInputDynamicState) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::PhysicalDeviceVertexInputDynamicStateFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT), pNext(nullptr), vertexInputDynamicState() {}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::PhysicalDeviceVertexInputDynamicStateFeaturesEXT(
    const PhysicalDeviceVertexInputDynamicStateFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    vertexInputDynamicState = copy_src.vertexInputDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT& PhysicalDeviceVertexInputDynamicStateFeaturesEXT::operator=(
    const PhysicalDeviceVertexInputDynamicStateFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexInputDynamicState = copy_src.vertexInputDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::~PhysicalDeviceVertexInputDynamicStateFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceVertexInputDynamicStateFeaturesEXT::initialize(
    const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexInputDynamicState = in_struct->vertexInputDynamicState;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVertexInputDynamicStateFeaturesEXT::initialize(const PhysicalDeviceVertexInputDynamicStateFeaturesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexInputDynamicState = copy_src->vertexInputDynamicState;
    pNext = SafePnextCopy(copy_src->pNext);
}

VertexInputBindingDescription2EXT::VertexInputBindingDescription2EXT(const VkVertexInputBindingDescription2EXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      binding(in_struct->binding),
      stride(in_struct->stride),
      inputRate(in_struct->inputRate),
      divisor(in_struct->divisor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VertexInputBindingDescription2EXT::VertexInputBindingDescription2EXT()
    : sType(VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT),
      pNext(nullptr),
      binding(),
      stride(),
      inputRate(),
      divisor() {}

VertexInputBindingDescription2EXT::VertexInputBindingDescription2EXT(const VertexInputBindingDescription2EXT& copy_src) {
    sType = copy_src.sType;
    binding = copy_src.binding;
    stride = copy_src.stride;
    inputRate = copy_src.inputRate;
    divisor = copy_src.divisor;
    pNext = SafePnextCopy(copy_src.pNext);
}

VertexInputBindingDescription2EXT& VertexInputBindingDescription2EXT::operator=(const VertexInputBindingDescription2EXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    binding = copy_src.binding;
    stride = copy_src.stride;
    inputRate = copy_src.inputRate;
    divisor = copy_src.divisor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VertexInputBindingDescription2EXT::~VertexInputBindingDescription2EXT() { FreePnextChain(pNext); }

void VertexInputBindingDescription2EXT::initialize(const VkVertexInputBindingDescription2EXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    binding = in_struct->binding;
    stride = in_struct->stride;
    inputRate = in_struct->inputRate;
    divisor = in_struct->divisor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VertexInputBindingDescription2EXT::initialize(const VertexInputBindingDescription2EXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    binding = copy_src->binding;
    stride = copy_src->stride;
    inputRate = copy_src->inputRate;
    divisor = copy_src->divisor;
    pNext = SafePnextCopy(copy_src->pNext);
}

VertexInputAttributeDescription2EXT::VertexInputAttributeDescription2EXT(const VkVertexInputAttributeDescription2EXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      location(in_struct->location),
      binding(in_struct->binding),
      format(in_struct->format),
      offset(in_struct->offset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VertexInputAttributeDescription2EXT::VertexInputAttributeDescription2EXT()
    : sType(VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT),
      pNext(nullptr),
      location(),
      binding(),
      format(),
      offset() {}

VertexInputAttributeDescription2EXT::VertexInputAttributeDescription2EXT(const VertexInputAttributeDescription2EXT& copy_src) {
    sType = copy_src.sType;
    location = copy_src.location;
    binding = copy_src.binding;
    format = copy_src.format;
    offset = copy_src.offset;
    pNext = SafePnextCopy(copy_src.pNext);
}

VertexInputAttributeDescription2EXT& VertexInputAttributeDescription2EXT::operator=(
    const VertexInputAttributeDescription2EXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    location = copy_src.location;
    binding = copy_src.binding;
    format = copy_src.format;
    offset = copy_src.offset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VertexInputAttributeDescription2EXT::~VertexInputAttributeDescription2EXT() { FreePnextChain(pNext); }

void VertexInputAttributeDescription2EXT::initialize(const VkVertexInputAttributeDescription2EXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    location = in_struct->location;
    binding = in_struct->binding;
    format = in_struct->format;
    offset = in_struct->offset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VertexInputAttributeDescription2EXT::initialize(const VertexInputAttributeDescription2EXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    location = copy_src->location;
    binding = copy_src->binding;
    format = copy_src->format;
    offset = copy_src->offset;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDrmPropertiesEXT::PhysicalDeviceDrmPropertiesEXT(const VkPhysicalDeviceDrmPropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      hasPrimary(in_struct->hasPrimary),
      hasRender(in_struct->hasRender),
      primaryMajor(in_struct->primaryMajor),
      primaryMinor(in_struct->primaryMinor),
      renderMajor(in_struct->renderMajor),
      renderMinor(in_struct->renderMinor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDrmPropertiesEXT::PhysicalDeviceDrmPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT),
      pNext(nullptr),
      hasPrimary(),
      hasRender(),
      primaryMajor(),
      primaryMinor(),
      renderMajor(),
      renderMinor() {}

PhysicalDeviceDrmPropertiesEXT::PhysicalDeviceDrmPropertiesEXT(const PhysicalDeviceDrmPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    hasPrimary = copy_src.hasPrimary;
    hasRender = copy_src.hasRender;
    primaryMajor = copy_src.primaryMajor;
    primaryMinor = copy_src.primaryMinor;
    renderMajor = copy_src.renderMajor;
    renderMinor = copy_src.renderMinor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDrmPropertiesEXT& PhysicalDeviceDrmPropertiesEXT::operator=(const PhysicalDeviceDrmPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hasPrimary = copy_src.hasPrimary;
    hasRender = copy_src.hasRender;
    primaryMajor = copy_src.primaryMajor;
    primaryMinor = copy_src.primaryMinor;
    renderMajor = copy_src.renderMajor;
    renderMinor = copy_src.renderMinor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDrmPropertiesEXT::~PhysicalDeviceDrmPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDrmPropertiesEXT::initialize(const VkPhysicalDeviceDrmPropertiesEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hasPrimary = in_struct->hasPrimary;
    hasRender = in_struct->hasRender;
    primaryMajor = in_struct->primaryMajor;
    primaryMinor = in_struct->primaryMinor;
    renderMajor = in_struct->renderMajor;
    renderMinor = in_struct->renderMinor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDrmPropertiesEXT::initialize(const PhysicalDeviceDrmPropertiesEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hasPrimary = copy_src->hasPrimary;
    hasRender = copy_src->hasRender;
    primaryMajor = copy_src->primaryMajor;
    primaryMinor = copy_src->primaryMinor;
    renderMajor = copy_src->renderMajor;
    renderMinor = copy_src->renderMinor;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceAddressBindingReportFeaturesEXT::PhysicalDeviceAddressBindingReportFeaturesEXT(
    const VkPhysicalDeviceAddressBindingReportFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), reportAddressBinding(in_struct->reportAddressBinding) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAddressBindingReportFeaturesEXT::PhysicalDeviceAddressBindingReportFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT), pNext(nullptr), reportAddressBinding() {}

PhysicalDeviceAddressBindingReportFeaturesEXT::PhysicalDeviceAddressBindingReportFeaturesEXT(
    const PhysicalDeviceAddressBindingReportFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    reportAddressBinding = copy_src.reportAddressBinding;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAddressBindingReportFeaturesEXT& PhysicalDeviceAddressBindingReportFeaturesEXT::operator=(
    const PhysicalDeviceAddressBindingReportFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    reportAddressBinding = copy_src.reportAddressBinding;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAddressBindingReportFeaturesEXT::~PhysicalDeviceAddressBindingReportFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceAddressBindingReportFeaturesEXT::initialize(const VkPhysicalDeviceAddressBindingReportFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    reportAddressBinding = in_struct->reportAddressBinding;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAddressBindingReportFeaturesEXT::initialize(const PhysicalDeviceAddressBindingReportFeaturesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    reportAddressBinding = copy_src->reportAddressBinding;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceAddressBindingCallbackDataEXT::DeviceAddressBindingCallbackDataEXT(const VkDeviceAddressBindingCallbackDataEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      baseAddress(in_struct->baseAddress),
      size(in_struct->size),
      bindingType(in_struct->bindingType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceAddressBindingCallbackDataEXT::DeviceAddressBindingCallbackDataEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT),
      pNext(nullptr),
      flags(),
      baseAddress(),
      size(),
      bindingType() {}

DeviceAddressBindingCallbackDataEXT::DeviceAddressBindingCallbackDataEXT(const DeviceAddressBindingCallbackDataEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    baseAddress = copy_src.baseAddress;
    size = copy_src.size;
    bindingType = copy_src.bindingType;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceAddressBindingCallbackDataEXT& DeviceAddressBindingCallbackDataEXT::operator=(
    const DeviceAddressBindingCallbackDataEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    baseAddress = copy_src.baseAddress;
    size = copy_src.size;
    bindingType = copy_src.bindingType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceAddressBindingCallbackDataEXT::~DeviceAddressBindingCallbackDataEXT() { FreePnextChain(pNext); }

void DeviceAddressBindingCallbackDataEXT::initialize(const VkDeviceAddressBindingCallbackDataEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    baseAddress = in_struct->baseAddress;
    size = in_struct->size;
    bindingType = in_struct->bindingType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceAddressBindingCallbackDataEXT::initialize(const DeviceAddressBindingCallbackDataEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    baseAddress = copy_src->baseAddress;
    size = copy_src->size;
    bindingType = copy_src->bindingType;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDepthClipControlFeaturesEXT::PhysicalDeviceDepthClipControlFeaturesEXT(
    const VkPhysicalDeviceDepthClipControlFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), depthClipControl(in_struct->depthClipControl) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDepthClipControlFeaturesEXT::PhysicalDeviceDepthClipControlFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT), pNext(nullptr), depthClipControl() {}

PhysicalDeviceDepthClipControlFeaturesEXT::PhysicalDeviceDepthClipControlFeaturesEXT(
    const PhysicalDeviceDepthClipControlFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    depthClipControl = copy_src.depthClipControl;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDepthClipControlFeaturesEXT& PhysicalDeviceDepthClipControlFeaturesEXT::operator=(
    const PhysicalDeviceDepthClipControlFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthClipControl = copy_src.depthClipControl;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDepthClipControlFeaturesEXT::~PhysicalDeviceDepthClipControlFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDepthClipControlFeaturesEXT::initialize(const VkPhysicalDeviceDepthClipControlFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthClipControl = in_struct->depthClipControl;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDepthClipControlFeaturesEXT::initialize(const PhysicalDeviceDepthClipControlFeaturesEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthClipControl = copy_src->depthClipControl;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineViewportDepthClipControlCreateInfoEXT::PipelineViewportDepthClipControlCreateInfoEXT(
    const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), negativeOneToOne(in_struct->negativeOneToOne) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineViewportDepthClipControlCreateInfoEXT::PipelineViewportDepthClipControlCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT), pNext(nullptr), negativeOneToOne() {}

PipelineViewportDepthClipControlCreateInfoEXT::PipelineViewportDepthClipControlCreateInfoEXT(
    const PipelineViewportDepthClipControlCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    negativeOneToOne = copy_src.negativeOneToOne;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineViewportDepthClipControlCreateInfoEXT& PipelineViewportDepthClipControlCreateInfoEXT::operator=(
    const PipelineViewportDepthClipControlCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    negativeOneToOne = copy_src.negativeOneToOne;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineViewportDepthClipControlCreateInfoEXT::~PipelineViewportDepthClipControlCreateInfoEXT() { FreePnextChain(pNext); }

void PipelineViewportDepthClipControlCreateInfoEXT::initialize(const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    negativeOneToOne = in_struct->negativeOneToOne;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineViewportDepthClipControlCreateInfoEXT::initialize(const PipelineViewportDepthClipControlCreateInfoEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    negativeOneToOne = copy_src->negativeOneToOne;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(
    const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      primitiveTopologyListRestart(in_struct->primitiveTopologyListRestart),
      primitiveTopologyPatchListRestart(in_struct->primitiveTopologyPatchListRestart) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT),
      pNext(nullptr),
      primitiveTopologyListRestart(),
      primitiveTopologyPatchListRestart() {}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(
    const PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    primitiveTopologyListRestart = copy_src.primitiveTopologyListRestart;
    primitiveTopologyPatchListRestart = copy_src.primitiveTopologyPatchListRestart;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::operator=(
    const PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    primitiveTopologyListRestart = copy_src.primitiveTopologyListRestart;
    primitiveTopologyPatchListRestart = copy_src.primitiveTopologyPatchListRestart;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::~PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::initialize(
    const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    primitiveTopologyListRestart = in_struct->primitiveTopologyListRestart;
    primitiveTopologyPatchListRestart = in_struct->primitiveTopologyPatchListRestart;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::initialize(
    const PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    primitiveTopologyListRestart = copy_src->primitiveTopologyListRestart;
    primitiveTopologyPatchListRestart = copy_src->primitiveTopologyPatchListRestart;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelinePropertiesIdentifierEXT::PipelinePropertiesIdentifierEXT(const VkPipelinePropertiesIdentifierEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = in_struct->pipelineIdentifier[i];
    }
}

PipelinePropertiesIdentifierEXT::PipelinePropertiesIdentifierEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT), pNext(nullptr) {}

PipelinePropertiesIdentifierEXT::PipelinePropertiesIdentifierEXT(const PipelinePropertiesIdentifierEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src.pipelineIdentifier[i];
    }
}

PipelinePropertiesIdentifierEXT& PipelinePropertiesIdentifierEXT::operator=(const PipelinePropertiesIdentifierEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src.pipelineIdentifier[i];
    }

    return *this;
}

PipelinePropertiesIdentifierEXT::~PipelinePropertiesIdentifierEXT() { FreePnextChain(pNext); }

void PipelinePropertiesIdentifierEXT::initialize(const VkPipelinePropertiesIdentifierEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = in_struct->pipelineIdentifier[i];
    }
}

void PipelinePropertiesIdentifierEXT::initialize(const PipelinePropertiesIdentifierEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src->pipelineIdentifier[i];
    }
}

PhysicalDevicePipelinePropertiesFeaturesEXT::PhysicalDevicePipelinePropertiesFeaturesEXT(
    const VkPhysicalDevicePipelinePropertiesFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pipelinePropertiesIdentifier(in_struct->pipelinePropertiesIdentifier) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelinePropertiesFeaturesEXT::PhysicalDevicePipelinePropertiesFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT), pNext(nullptr), pipelinePropertiesIdentifier() {}

PhysicalDevicePipelinePropertiesFeaturesEXT::PhysicalDevicePipelinePropertiesFeaturesEXT(
    const PhysicalDevicePipelinePropertiesFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    pipelinePropertiesIdentifier = copy_src.pipelinePropertiesIdentifier;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelinePropertiesFeaturesEXT& PhysicalDevicePipelinePropertiesFeaturesEXT::operator=(
    const PhysicalDevicePipelinePropertiesFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelinePropertiesIdentifier = copy_src.pipelinePropertiesIdentifier;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelinePropertiesFeaturesEXT::~PhysicalDevicePipelinePropertiesFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePipelinePropertiesFeaturesEXT::initialize(const VkPhysicalDevicePipelinePropertiesFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelinePropertiesIdentifier = in_struct->pipelinePropertiesIdentifier;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelinePropertiesFeaturesEXT::initialize(const PhysicalDevicePipelinePropertiesFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelinePropertiesIdentifier = copy_src->pipelinePropertiesIdentifier;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFrameBoundaryFeaturesEXT::PhysicalDeviceFrameBoundaryFeaturesEXT(
    const VkPhysicalDeviceFrameBoundaryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), frameBoundary(in_struct->frameBoundary) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFrameBoundaryFeaturesEXT::PhysicalDeviceFrameBoundaryFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT), pNext(nullptr), frameBoundary() {}

PhysicalDeviceFrameBoundaryFeaturesEXT::PhysicalDeviceFrameBoundaryFeaturesEXT(
    const PhysicalDeviceFrameBoundaryFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    frameBoundary = copy_src.frameBoundary;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFrameBoundaryFeaturesEXT& PhysicalDeviceFrameBoundaryFeaturesEXT::operator=(
    const PhysicalDeviceFrameBoundaryFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    frameBoundary = copy_src.frameBoundary;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFrameBoundaryFeaturesEXT::~PhysicalDeviceFrameBoundaryFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceFrameBoundaryFeaturesEXT::initialize(const VkPhysicalDeviceFrameBoundaryFeaturesEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    frameBoundary = in_struct->frameBoundary;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFrameBoundaryFeaturesEXT::initialize(const PhysicalDeviceFrameBoundaryFeaturesEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    frameBoundary = copy_src->frameBoundary;
    pNext = SafePnextCopy(copy_src->pNext);
}

FrameBoundaryEXT::FrameBoundaryEXT(const VkFrameBoundaryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      frameID(in_struct->frameID),
      imageCount(in_struct->imageCount),
      pImages(nullptr),
      bufferCount(in_struct->bufferCount),
      pBuffers(nullptr),
      tagName(in_struct->tagName),
      tagSize(in_struct->tagSize),
      pTag(in_struct->pTag) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (imageCount && in_struct->pImages) {
        pImages = new VkImage[imageCount];
        for (uint32_t i = 0; i < imageCount; ++i) {
            pImages[i] = in_struct->pImages[i];
        }
    }
    if (bufferCount && in_struct->pBuffers) {
        pBuffers = new VkBuffer[bufferCount];
        for (uint32_t i = 0; i < bufferCount; ++i) {
            pBuffers[i] = in_struct->pBuffers[i];
        }
    }
}

FrameBoundaryEXT::FrameBoundaryEXT()
    : sType(VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT),
      pNext(nullptr),
      flags(),
      frameID(),
      imageCount(),
      pImages(nullptr),
      bufferCount(),
      pBuffers(nullptr),
      tagName(),
      tagSize(),
      pTag(nullptr) {}

FrameBoundaryEXT::FrameBoundaryEXT(const FrameBoundaryEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    frameID = copy_src.frameID;
    imageCount = copy_src.imageCount;
    pImages = nullptr;
    bufferCount = copy_src.bufferCount;
    pBuffers = nullptr;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
    if (imageCount && copy_src.pImages) {
        pImages = new VkImage[imageCount];
        for (uint32_t i = 0; i < imageCount; ++i) {
            pImages[i] = copy_src.pImages[i];
        }
    }
    if (bufferCount && copy_src.pBuffers) {
        pBuffers = new VkBuffer[bufferCount];
        for (uint32_t i = 0; i < bufferCount; ++i) {
            pBuffers[i] = copy_src.pBuffers[i];
        }
    }
}

FrameBoundaryEXT& FrameBoundaryEXT::operator=(const FrameBoundaryEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pImages) delete[] pImages;
    if (pBuffers) delete[] pBuffers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    frameID = copy_src.frameID;
    imageCount = copy_src.imageCount;
    pImages = nullptr;
    bufferCount = copy_src.bufferCount;
    pBuffers = nullptr;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
    if (imageCount && copy_src.pImages) {
        pImages = new VkImage[imageCount];
        for (uint32_t i = 0; i < imageCount; ++i) {
            pImages[i] = copy_src.pImages[i];
        }
    }
    if (bufferCount && copy_src.pBuffers) {
        pBuffers = new VkBuffer[bufferCount];
        for (uint32_t i = 0; i < bufferCount; ++i) {
            pBuffers[i] = copy_src.pBuffers[i];
        }
    }

    return *this;
}

FrameBoundaryEXT::~FrameBoundaryEXT() {
    if (pImages) delete[] pImages;
    if (pBuffers) delete[] pBuffers;
    FreePnextChain(pNext);
}

void FrameBoundaryEXT::initialize(const VkFrameBoundaryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImages) delete[] pImages;
    if (pBuffers) delete[] pBuffers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    frameID = in_struct->frameID;
    imageCount = in_struct->imageCount;
    pImages = nullptr;
    bufferCount = in_struct->bufferCount;
    pBuffers = nullptr;
    tagName = in_struct->tagName;
    tagSize = in_struct->tagSize;
    pTag = in_struct->pTag;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (imageCount && in_struct->pImages) {
        pImages = new VkImage[imageCount];
        for (uint32_t i = 0; i < imageCount; ++i) {
            pImages[i] = in_struct->pImages[i];
        }
    }
    if (bufferCount && in_struct->pBuffers) {
        pBuffers = new VkBuffer[bufferCount];
        for (uint32_t i = 0; i < bufferCount; ++i) {
            pBuffers[i] = in_struct->pBuffers[i];
        }
    }
}

void FrameBoundaryEXT::initialize(const FrameBoundaryEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    frameID = copy_src->frameID;
    imageCount = copy_src->imageCount;
    pImages = nullptr;
    bufferCount = copy_src->bufferCount;
    pBuffers = nullptr;
    tagName = copy_src->tagName;
    tagSize = copy_src->tagSize;
    pTag = copy_src->pTag;
    pNext = SafePnextCopy(copy_src->pNext);
    if (imageCount && copy_src->pImages) {
        pImages = new VkImage[imageCount];
        for (uint32_t i = 0; i < imageCount; ++i) {
            pImages[i] = copy_src->pImages[i];
        }
    }
    if (bufferCount && copy_src->pBuffers) {
        pBuffers = new VkBuffer[bufferCount];
        for (uint32_t i = 0; i < bufferCount; ++i) {
            pBuffers[i] = copy_src->pBuffers[i];
        }
    }
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(
    const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), multisampledRenderToSingleSampled(in_struct->multisampledRenderToSingleSampled) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT),
      pNext(nullptr),
      multisampledRenderToSingleSampled() {}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(
    const PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    multisampledRenderToSingleSampled = copy_src.multisampledRenderToSingleSampled;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::operator=(
    const PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multisampledRenderToSingleSampled = copy_src.multisampledRenderToSingleSampled;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::~PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::initialize(
    const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multisampledRenderToSingleSampled = in_struct->multisampledRenderToSingleSampled;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::initialize(
    const PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multisampledRenderToSingleSampled = copy_src->multisampledRenderToSingleSampled;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubpassResolvePerformanceQueryEXT::SubpassResolvePerformanceQueryEXT(const VkSubpassResolvePerformanceQueryEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), optimal(in_struct->optimal) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubpassResolvePerformanceQueryEXT::SubpassResolvePerformanceQueryEXT()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT), pNext(nullptr), optimal() {}

SubpassResolvePerformanceQueryEXT::SubpassResolvePerformanceQueryEXT(const SubpassResolvePerformanceQueryEXT& copy_src) {
    sType = copy_src.sType;
    optimal = copy_src.optimal;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubpassResolvePerformanceQueryEXT& SubpassResolvePerformanceQueryEXT::operator=(const SubpassResolvePerformanceQueryEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    optimal = copy_src.optimal;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubpassResolvePerformanceQueryEXT::~SubpassResolvePerformanceQueryEXT() { FreePnextChain(pNext); }

void SubpassResolvePerformanceQueryEXT::initialize(const VkSubpassResolvePerformanceQueryEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    optimal = in_struct->optimal;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubpassResolvePerformanceQueryEXT::initialize(const SubpassResolvePerformanceQueryEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    optimal = copy_src->optimal;
    pNext = SafePnextCopy(copy_src->pNext);
}

MultisampledRenderToSingleSampledInfoEXT::MultisampledRenderToSingleSampledInfoEXT(
    const VkMultisampledRenderToSingleSampledInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      multisampledRenderToSingleSampledEnable(in_struct->multisampledRenderToSingleSampledEnable),
      rasterizationSamples(in_struct->rasterizationSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MultisampledRenderToSingleSampledInfoEXT::MultisampledRenderToSingleSampledInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT),
      pNext(nullptr),
      multisampledRenderToSingleSampledEnable(),
      rasterizationSamples() {}

MultisampledRenderToSingleSampledInfoEXT::MultisampledRenderToSingleSampledInfoEXT(
    const MultisampledRenderToSingleSampledInfoEXT& copy_src) {
    sType = copy_src.sType;
    multisampledRenderToSingleSampledEnable = copy_src.multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);
}

MultisampledRenderToSingleSampledInfoEXT& MultisampledRenderToSingleSampledInfoEXT::operator=(
    const MultisampledRenderToSingleSampledInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multisampledRenderToSingleSampledEnable = copy_src.multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MultisampledRenderToSingleSampledInfoEXT::~MultisampledRenderToSingleSampledInfoEXT() { FreePnextChain(pNext); }

void MultisampledRenderToSingleSampledInfoEXT::initialize(const VkMultisampledRenderToSingleSampledInfoEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multisampledRenderToSingleSampledEnable = in_struct->multisampledRenderToSingleSampledEnable;
    rasterizationSamples = in_struct->rasterizationSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MultisampledRenderToSingleSampledInfoEXT::initialize(const MultisampledRenderToSingleSampledInfoEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multisampledRenderToSingleSampledEnable = copy_src->multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src->rasterizationSamples;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::PhysicalDeviceExtendedDynamicState2FeaturesEXT(
    const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      extendedDynamicState2(in_struct->extendedDynamicState2),
      extendedDynamicState2LogicOp(in_struct->extendedDynamicState2LogicOp),
      extendedDynamicState2PatchControlPoints(in_struct->extendedDynamicState2PatchControlPoints) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::PhysicalDeviceExtendedDynamicState2FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT),
      pNext(nullptr),
      extendedDynamicState2(),
      extendedDynamicState2LogicOp(),
      extendedDynamicState2PatchControlPoints() {}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::PhysicalDeviceExtendedDynamicState2FeaturesEXT(
    const PhysicalDeviceExtendedDynamicState2FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    extendedDynamicState2 = copy_src.extendedDynamicState2;
    extendedDynamicState2LogicOp = copy_src.extendedDynamicState2LogicOp;
    extendedDynamicState2PatchControlPoints = copy_src.extendedDynamicState2PatchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT& PhysicalDeviceExtendedDynamicState2FeaturesEXT::operator=(
    const PhysicalDeviceExtendedDynamicState2FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    extendedDynamicState2 = copy_src.extendedDynamicState2;
    extendedDynamicState2LogicOp = copy_src.extendedDynamicState2LogicOp;
    extendedDynamicState2PatchControlPoints = copy_src.extendedDynamicState2PatchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::~PhysicalDeviceExtendedDynamicState2FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceExtendedDynamicState2FeaturesEXT::initialize(const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    extendedDynamicState2 = in_struct->extendedDynamicState2;
    extendedDynamicState2LogicOp = in_struct->extendedDynamicState2LogicOp;
    extendedDynamicState2PatchControlPoints = in_struct->extendedDynamicState2PatchControlPoints;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedDynamicState2FeaturesEXT::initialize(const PhysicalDeviceExtendedDynamicState2FeaturesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    extendedDynamicState2 = copy_src->extendedDynamicState2;
    extendedDynamicState2LogicOp = copy_src->extendedDynamicState2LogicOp;
    extendedDynamicState2PatchControlPoints = copy_src->extendedDynamicState2PatchControlPoints;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceColorWriteEnableFeaturesEXT::PhysicalDeviceColorWriteEnableFeaturesEXT(
    const VkPhysicalDeviceColorWriteEnableFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), colorWriteEnable(in_struct->colorWriteEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceColorWriteEnableFeaturesEXT::PhysicalDeviceColorWriteEnableFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT), pNext(nullptr), colorWriteEnable() {}

PhysicalDeviceColorWriteEnableFeaturesEXT::PhysicalDeviceColorWriteEnableFeaturesEXT(
    const PhysicalDeviceColorWriteEnableFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    colorWriteEnable = copy_src.colorWriteEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceColorWriteEnableFeaturesEXT& PhysicalDeviceColorWriteEnableFeaturesEXT::operator=(
    const PhysicalDeviceColorWriteEnableFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorWriteEnable = copy_src.colorWriteEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceColorWriteEnableFeaturesEXT::~PhysicalDeviceColorWriteEnableFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceColorWriteEnableFeaturesEXT::initialize(const VkPhysicalDeviceColorWriteEnableFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorWriteEnable = in_struct->colorWriteEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceColorWriteEnableFeaturesEXT::initialize(const PhysicalDeviceColorWriteEnableFeaturesEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorWriteEnable = copy_src->colorWriteEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineColorWriteCreateInfoEXT::PipelineColorWriteCreateInfoEXT(const VkPipelineColorWriteCreateInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), attachmentCount(in_struct->attachmentCount), pColorWriteEnables(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[in_struct->attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)in_struct->pColorWriteEnables, sizeof(VkBool32) * in_struct->attachmentCount);
    }
}

PipelineColorWriteCreateInfoEXT::PipelineColorWriteCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT),
      pNext(nullptr),
      attachmentCount(),
      pColorWriteEnables(nullptr) {}

PipelineColorWriteCreateInfoEXT::PipelineColorWriteCreateInfoEXT(const PipelineColorWriteCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pColorWriteEnables = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[copy_src.attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)copy_src.pColorWriteEnables, sizeof(VkBool32) * copy_src.attachmentCount);
    }
}

PipelineColorWriteCreateInfoEXT& PipelineColorWriteCreateInfoEXT::operator=(const PipelineColorWriteCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorWriteEnables) delete[] pColorWriteEnables;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pColorWriteEnables = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[copy_src.attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)copy_src.pColorWriteEnables, sizeof(VkBool32) * copy_src.attachmentCount);
    }

    return *this;
}

PipelineColorWriteCreateInfoEXT::~PipelineColorWriteCreateInfoEXT() {
    if (pColorWriteEnables) delete[] pColorWriteEnables;
    FreePnextChain(pNext);
}

void PipelineColorWriteCreateInfoEXT::initialize(const VkPipelineColorWriteCreateInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorWriteEnables) delete[] pColorWriteEnables;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentCount = in_struct->attachmentCount;
    pColorWriteEnables = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[in_struct->attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)in_struct->pColorWriteEnables, sizeof(VkBool32) * in_struct->attachmentCount);
    }
}

void PipelineColorWriteCreateInfoEXT::initialize(const PipelineColorWriteCreateInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentCount = copy_src->attachmentCount;
    pColorWriteEnables = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[copy_src->attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)copy_src->pColorWriteEnables, sizeof(VkBool32) * copy_src->attachmentCount);
    }
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(
    const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      primitivesGeneratedQuery(in_struct->primitivesGeneratedQuery),
      primitivesGeneratedQueryWithRasterizerDiscard(in_struct->primitivesGeneratedQueryWithRasterizerDiscard),
      primitivesGeneratedQueryWithNonZeroStreams(in_struct->primitivesGeneratedQueryWithNonZeroStreams) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT),
      pNext(nullptr),
      primitivesGeneratedQuery(),
      primitivesGeneratedQueryWithRasterizerDiscard(),
      primitivesGeneratedQueryWithNonZeroStreams() {}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(
    const PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    primitivesGeneratedQuery = copy_src.primitivesGeneratedQuery;
    primitivesGeneratedQueryWithRasterizerDiscard = copy_src.primitivesGeneratedQueryWithRasterizerDiscard;
    primitivesGeneratedQueryWithNonZeroStreams = copy_src.primitivesGeneratedQueryWithNonZeroStreams;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::operator=(
    const PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    primitivesGeneratedQuery = copy_src.primitivesGeneratedQuery;
    primitivesGeneratedQueryWithRasterizerDiscard = copy_src.primitivesGeneratedQueryWithRasterizerDiscard;
    primitivesGeneratedQueryWithNonZeroStreams = copy_src.primitivesGeneratedQueryWithNonZeroStreams;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::~PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::initialize(
    const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    primitivesGeneratedQuery = in_struct->primitivesGeneratedQuery;
    primitivesGeneratedQueryWithRasterizerDiscard = in_struct->primitivesGeneratedQueryWithRasterizerDiscard;
    primitivesGeneratedQueryWithNonZeroStreams = in_struct->primitivesGeneratedQueryWithNonZeroStreams;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::initialize(
    const PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    primitivesGeneratedQuery = copy_src->primitivesGeneratedQuery;
    primitivesGeneratedQueryWithRasterizerDiscard = copy_src->primitivesGeneratedQueryWithRasterizerDiscard;
    primitivesGeneratedQueryWithNonZeroStreams = copy_src->primitivesGeneratedQueryWithNonZeroStreams;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageViewMinLodFeaturesEXT::PhysicalDeviceImageViewMinLodFeaturesEXT(
    const VkPhysicalDeviceImageViewMinLodFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minLod(in_struct->minLod) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageViewMinLodFeaturesEXT::PhysicalDeviceImageViewMinLodFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT), pNext(nullptr), minLod() {}

PhysicalDeviceImageViewMinLodFeaturesEXT::PhysicalDeviceImageViewMinLodFeaturesEXT(
    const PhysicalDeviceImageViewMinLodFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageViewMinLodFeaturesEXT& PhysicalDeviceImageViewMinLodFeaturesEXT::operator=(
    const PhysicalDeviceImageViewMinLodFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageViewMinLodFeaturesEXT::~PhysicalDeviceImageViewMinLodFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceImageViewMinLodFeaturesEXT::initialize(const VkPhysicalDeviceImageViewMinLodFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minLod = in_struct->minLod;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageViewMinLodFeaturesEXT::initialize(const PhysicalDeviceImageViewMinLodFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minLod = copy_src->minLod;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewMinLodCreateInfoEXT::ImageViewMinLodCreateInfoEXT(const VkImageViewMinLodCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minLod(in_struct->minLod) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewMinLodCreateInfoEXT::ImageViewMinLodCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT), pNext(nullptr), minLod() {}

ImageViewMinLodCreateInfoEXT::ImageViewMinLodCreateInfoEXT(const ImageViewMinLodCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewMinLodCreateInfoEXT& ImageViewMinLodCreateInfoEXT::operator=(const ImageViewMinLodCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewMinLodCreateInfoEXT::~ImageViewMinLodCreateInfoEXT() { FreePnextChain(pNext); }

void ImageViewMinLodCreateInfoEXT::initialize(const VkImageViewMinLodCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minLod = in_struct->minLod;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewMinLodCreateInfoEXT::initialize(const ImageViewMinLodCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minLod = copy_src->minLod;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMultiDrawFeaturesEXT::PhysicalDeviceMultiDrawFeaturesEXT(const VkPhysicalDeviceMultiDrawFeaturesEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), multiDraw(in_struct->multiDraw) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiDrawFeaturesEXT::PhysicalDeviceMultiDrawFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT), pNext(nullptr), multiDraw() {}

PhysicalDeviceMultiDrawFeaturesEXT::PhysicalDeviceMultiDrawFeaturesEXT(const PhysicalDeviceMultiDrawFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    multiDraw = copy_src.multiDraw;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiDrawFeaturesEXT& PhysicalDeviceMultiDrawFeaturesEXT::operator=(
    const PhysicalDeviceMultiDrawFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multiDraw = copy_src.multiDraw;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiDrawFeaturesEXT::~PhysicalDeviceMultiDrawFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMultiDrawFeaturesEXT::initialize(const VkPhysicalDeviceMultiDrawFeaturesEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multiDraw = in_struct->multiDraw;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiDrawFeaturesEXT::initialize(const PhysicalDeviceMultiDrawFeaturesEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multiDraw = copy_src->multiDraw;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMultiDrawPropertiesEXT::PhysicalDeviceMultiDrawPropertiesEXT(const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), maxMultiDrawCount(in_struct->maxMultiDrawCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiDrawPropertiesEXT::PhysicalDeviceMultiDrawPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT), pNext(nullptr), maxMultiDrawCount() {}

PhysicalDeviceMultiDrawPropertiesEXT::PhysicalDeviceMultiDrawPropertiesEXT(const PhysicalDeviceMultiDrawPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxMultiDrawCount = copy_src.maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiDrawPropertiesEXT& PhysicalDeviceMultiDrawPropertiesEXT::operator=(
    const PhysicalDeviceMultiDrawPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxMultiDrawCount = copy_src.maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiDrawPropertiesEXT::~PhysicalDeviceMultiDrawPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMultiDrawPropertiesEXT::initialize(const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxMultiDrawCount = in_struct->maxMultiDrawCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiDrawPropertiesEXT::initialize(const PhysicalDeviceMultiDrawPropertiesEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxMultiDrawCount = copy_src->maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::PhysicalDeviceImage2DViewOf3DFeaturesEXT(
    const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image2DViewOf3D(in_struct->image2DViewOf3D), sampler2DViewOf3D(in_struct->sampler2DViewOf3D) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::PhysicalDeviceImage2DViewOf3DFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT),
      pNext(nullptr),
      image2DViewOf3D(),
      sampler2DViewOf3D() {}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::PhysicalDeviceImage2DViewOf3DFeaturesEXT(
    const PhysicalDeviceImage2DViewOf3DFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    image2DViewOf3D = copy_src.image2DViewOf3D;
    sampler2DViewOf3D = copy_src.sampler2DViewOf3D;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT& PhysicalDeviceImage2DViewOf3DFeaturesEXT::operator=(
    const PhysicalDeviceImage2DViewOf3DFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image2DViewOf3D = copy_src.image2DViewOf3D;
    sampler2DViewOf3D = copy_src.sampler2DViewOf3D;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::~PhysicalDeviceImage2DViewOf3DFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceImage2DViewOf3DFeaturesEXT::initialize(const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image2DViewOf3D = in_struct->image2DViewOf3D;
    sampler2DViewOf3D = in_struct->sampler2DViewOf3D;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImage2DViewOf3DFeaturesEXT::initialize(const PhysicalDeviceImage2DViewOf3DFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image2DViewOf3D = copy_src->image2DViewOf3D;
    sampler2DViewOf3D = copy_src->sampler2DViewOf3D;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderTileImageFeaturesEXT::PhysicalDeviceShaderTileImageFeaturesEXT(
    const VkPhysicalDeviceShaderTileImageFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderTileImageColorReadAccess(in_struct->shaderTileImageColorReadAccess),
      shaderTileImageDepthReadAccess(in_struct->shaderTileImageDepthReadAccess),
      shaderTileImageStencilReadAccess(in_struct->shaderTileImageStencilReadAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderTileImageFeaturesEXT::PhysicalDeviceShaderTileImageFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT),
      pNext(nullptr),
      shaderTileImageColorReadAccess(),
      shaderTileImageDepthReadAccess(),
      shaderTileImageStencilReadAccess() {}

PhysicalDeviceShaderTileImageFeaturesEXT::PhysicalDeviceShaderTileImageFeaturesEXT(
    const PhysicalDeviceShaderTileImageFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderTileImageColorReadAccess = copy_src.shaderTileImageColorReadAccess;
    shaderTileImageDepthReadAccess = copy_src.shaderTileImageDepthReadAccess;
    shaderTileImageStencilReadAccess = copy_src.shaderTileImageStencilReadAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderTileImageFeaturesEXT& PhysicalDeviceShaderTileImageFeaturesEXT::operator=(
    const PhysicalDeviceShaderTileImageFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderTileImageColorReadAccess = copy_src.shaderTileImageColorReadAccess;
    shaderTileImageDepthReadAccess = copy_src.shaderTileImageDepthReadAccess;
    shaderTileImageStencilReadAccess = copy_src.shaderTileImageStencilReadAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderTileImageFeaturesEXT::~PhysicalDeviceShaderTileImageFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderTileImageFeaturesEXT::initialize(const VkPhysicalDeviceShaderTileImageFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderTileImageColorReadAccess = in_struct->shaderTileImageColorReadAccess;
    shaderTileImageDepthReadAccess = in_struct->shaderTileImageDepthReadAccess;
    shaderTileImageStencilReadAccess = in_struct->shaderTileImageStencilReadAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderTileImageFeaturesEXT::initialize(const PhysicalDeviceShaderTileImageFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderTileImageColorReadAccess = copy_src->shaderTileImageColorReadAccess;
    shaderTileImageDepthReadAccess = copy_src->shaderTileImageDepthReadAccess;
    shaderTileImageStencilReadAccess = copy_src->shaderTileImageStencilReadAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderTileImagePropertiesEXT::PhysicalDeviceShaderTileImagePropertiesEXT(
    const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderTileImageCoherentReadAccelerated(in_struct->shaderTileImageCoherentReadAccelerated),
      shaderTileImageReadSampleFromPixelRateInvocation(in_struct->shaderTileImageReadSampleFromPixelRateInvocation),
      shaderTileImageReadFromHelperInvocation(in_struct->shaderTileImageReadFromHelperInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderTileImagePropertiesEXT::PhysicalDeviceShaderTileImagePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT),
      pNext(nullptr),
      shaderTileImageCoherentReadAccelerated(),
      shaderTileImageReadSampleFromPixelRateInvocation(),
      shaderTileImageReadFromHelperInvocation() {}

PhysicalDeviceShaderTileImagePropertiesEXT::PhysicalDeviceShaderTileImagePropertiesEXT(
    const PhysicalDeviceShaderTileImagePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    shaderTileImageCoherentReadAccelerated = copy_src.shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src.shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src.shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderTileImagePropertiesEXT& PhysicalDeviceShaderTileImagePropertiesEXT::operator=(
    const PhysicalDeviceShaderTileImagePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderTileImageCoherentReadAccelerated = copy_src.shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src.shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src.shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderTileImagePropertiesEXT::~PhysicalDeviceShaderTileImagePropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderTileImagePropertiesEXT::initialize(const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderTileImageCoherentReadAccelerated = in_struct->shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = in_struct->shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = in_struct->shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderTileImagePropertiesEXT::initialize(const PhysicalDeviceShaderTileImagePropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderTileImageCoherentReadAccelerated = copy_src->shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src->shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src->shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

MicromapCreateInfoEXT::MicromapCreateInfoEXT(const VkMicromapCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      createFlags(in_struct->createFlags),
      buffer(in_struct->buffer),
      offset(in_struct->offset),
      size(in_struct->size),
      type(in_struct->type),
      deviceAddress(in_struct->deviceAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MicromapCreateInfoEXT::MicromapCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT),
      pNext(nullptr),
      createFlags(),
      buffer(),
      offset(),
      size(),
      type(),
      deviceAddress() {}

MicromapCreateInfoEXT::MicromapCreateInfoEXT(const MicromapCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    createFlags = copy_src.createFlags;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    type = copy_src.type;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

MicromapCreateInfoEXT& MicromapCreateInfoEXT::operator=(const MicromapCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    createFlags = copy_src.createFlags;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    type = copy_src.type;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MicromapCreateInfoEXT::~MicromapCreateInfoEXT() { FreePnextChain(pNext); }

void MicromapCreateInfoEXT::initialize(const VkMicromapCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    createFlags = in_struct->createFlags;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
    type = in_struct->type;
    deviceAddress = in_struct->deviceAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MicromapCreateInfoEXT::initialize(const MicromapCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    createFlags = copy_src->createFlags;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    type = copy_src->type;
    deviceAddress = copy_src->deviceAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceOpacityMicromapFeaturesEXT::PhysicalDeviceOpacityMicromapFeaturesEXT(
    const VkPhysicalDeviceOpacityMicromapFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      micromap(in_struct->micromap),
      micromapCaptureReplay(in_struct->micromapCaptureReplay),
      micromapHostCommands(in_struct->micromapHostCommands) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceOpacityMicromapFeaturesEXT::PhysicalDeviceOpacityMicromapFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT),
      pNext(nullptr),
      micromap(),
      micromapCaptureReplay(),
      micromapHostCommands() {}

PhysicalDeviceOpacityMicromapFeaturesEXT::PhysicalDeviceOpacityMicromapFeaturesEXT(
    const PhysicalDeviceOpacityMicromapFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    micromap = copy_src.micromap;
    micromapCaptureReplay = copy_src.micromapCaptureReplay;
    micromapHostCommands = copy_src.micromapHostCommands;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceOpacityMicromapFeaturesEXT& PhysicalDeviceOpacityMicromapFeaturesEXT::operator=(
    const PhysicalDeviceOpacityMicromapFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    micromap = copy_src.micromap;
    micromapCaptureReplay = copy_src.micromapCaptureReplay;
    micromapHostCommands = copy_src.micromapHostCommands;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceOpacityMicromapFeaturesEXT::~PhysicalDeviceOpacityMicromapFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceOpacityMicromapFeaturesEXT::initialize(const VkPhysicalDeviceOpacityMicromapFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    micromap = in_struct->micromap;
    micromapCaptureReplay = in_struct->micromapCaptureReplay;
    micromapHostCommands = in_struct->micromapHostCommands;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceOpacityMicromapFeaturesEXT::initialize(const PhysicalDeviceOpacityMicromapFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    micromap = copy_src->micromap;
    micromapCaptureReplay = copy_src->micromapCaptureReplay;
    micromapHostCommands = copy_src->micromapHostCommands;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceOpacityMicromapPropertiesEXT::PhysicalDeviceOpacityMicromapPropertiesEXT(
    const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxOpacity2StateSubdivisionLevel(in_struct->maxOpacity2StateSubdivisionLevel),
      maxOpacity4StateSubdivisionLevel(in_struct->maxOpacity4StateSubdivisionLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceOpacityMicromapPropertiesEXT::PhysicalDeviceOpacityMicromapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT),
      pNext(nullptr),
      maxOpacity2StateSubdivisionLevel(),
      maxOpacity4StateSubdivisionLevel() {}

PhysicalDeviceOpacityMicromapPropertiesEXT::PhysicalDeviceOpacityMicromapPropertiesEXT(
    const PhysicalDeviceOpacityMicromapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxOpacity2StateSubdivisionLevel = copy_src.maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src.maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceOpacityMicromapPropertiesEXT& PhysicalDeviceOpacityMicromapPropertiesEXT::operator=(
    const PhysicalDeviceOpacityMicromapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxOpacity2StateSubdivisionLevel = copy_src.maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src.maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceOpacityMicromapPropertiesEXT::~PhysicalDeviceOpacityMicromapPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceOpacityMicromapPropertiesEXT::initialize(const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxOpacity2StateSubdivisionLevel = in_struct->maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = in_struct->maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceOpacityMicromapPropertiesEXT::initialize(const PhysicalDeviceOpacityMicromapPropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxOpacity2StateSubdivisionLevel = copy_src->maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src->maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

MicromapVersionInfoEXT::MicromapVersionInfoEXT(const VkMicromapVersionInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pVersionData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)in_struct->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

MicromapVersionInfoEXT::MicromapVersionInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT), pNext(nullptr), pVersionData(nullptr) {}

MicromapVersionInfoEXT::MicromapVersionInfoEXT(const MicromapVersionInfoEXT& copy_src) {
    sType = copy_src.sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src.pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

MicromapVersionInfoEXT& MicromapVersionInfoEXT::operator=(const MicromapVersionInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pVersionData) delete[] pVersionData;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src.pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }

    return *this;
}

MicromapVersionInfoEXT::~MicromapVersionInfoEXT() {
    if (pVersionData) delete[] pVersionData;
    FreePnextChain(pNext);
}

void MicromapVersionInfoEXT::initialize(const VkMicromapVersionInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVersionData) delete[] pVersionData;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)in_struct->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

void MicromapVersionInfoEXT::initialize(const MicromapVersionInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

CopyMicromapToMemoryInfoEXT::CopyMicromapToMemoryInfoEXT(const VkCopyMicromapToMemoryInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(&in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyMicromapToMemoryInfoEXT::CopyMicromapToMemoryInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT), pNext(nullptr), src(), mode() {}

CopyMicromapToMemoryInfoEXT::CopyMicromapToMemoryInfoEXT(const CopyMicromapToMemoryInfoEXT& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyMicromapToMemoryInfoEXT& CopyMicromapToMemoryInfoEXT::operator=(const CopyMicromapToMemoryInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyMicromapToMemoryInfoEXT::~CopyMicromapToMemoryInfoEXT() { FreePnextChain(pNext); }

void CopyMicromapToMemoryInfoEXT::initialize(const VkCopyMicromapToMemoryInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst.initialize(&in_struct->dst);
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyMicromapToMemoryInfoEXT::initialize(const CopyMicromapToMemoryInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst.initialize(&copy_src->dst);
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyMemoryToMicromapInfoEXT::CopyMemoryToMicromapInfoEXT(const VkCopyMemoryToMicromapInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(&in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyMemoryToMicromapInfoEXT::CopyMemoryToMicromapInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT), pNext(nullptr), dst(), mode() {}

CopyMemoryToMicromapInfoEXT::CopyMemoryToMicromapInfoEXT(const CopyMemoryToMicromapInfoEXT& copy_src) {
    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyMemoryToMicromapInfoEXT& CopyMemoryToMicromapInfoEXT::operator=(const CopyMemoryToMicromapInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyMemoryToMicromapInfoEXT::~CopyMemoryToMicromapInfoEXT() { FreePnextChain(pNext); }

void CopyMemoryToMicromapInfoEXT::initialize(const VkCopyMemoryToMicromapInfoEXT* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src.initialize(&in_struct->src);
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyMemoryToMicromapInfoEXT::initialize(const CopyMemoryToMicromapInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src.initialize(&copy_src->src);
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyMicromapInfoEXT::CopyMicromapInfoEXT(const VkCopyMicromapInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyMicromapInfoEXT::CopyMicromapInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT), pNext(nullptr), src(), dst(), mode() {}

CopyMicromapInfoEXT::CopyMicromapInfoEXT(const CopyMicromapInfoEXT& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyMicromapInfoEXT& CopyMicromapInfoEXT::operator=(const CopyMicromapInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyMicromapInfoEXT::~CopyMicromapInfoEXT() { FreePnextChain(pNext); }

void CopyMicromapInfoEXT::initialize(const VkCopyMicromapInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyMicromapInfoEXT::initialize(const CopyMicromapInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

MicromapBuildSizesInfoEXT::MicromapBuildSizesInfoEXT(const VkMicromapBuildSizesInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      micromapSize(in_struct->micromapSize),
      buildScratchSize(in_struct->buildScratchSize),
      discardable(in_struct->discardable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MicromapBuildSizesInfoEXT::MicromapBuildSizesInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT), pNext(nullptr), micromapSize(), buildScratchSize(), discardable() {}

MicromapBuildSizesInfoEXT::MicromapBuildSizesInfoEXT(const MicromapBuildSizesInfoEXT& copy_src) {
    sType = copy_src.sType;
    micromapSize = copy_src.micromapSize;
    buildScratchSize = copy_src.buildScratchSize;
    discardable = copy_src.discardable;
    pNext = SafePnextCopy(copy_src.pNext);
}

MicromapBuildSizesInfoEXT& MicromapBuildSizesInfoEXT::operator=(const MicromapBuildSizesInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    micromapSize = copy_src.micromapSize;
    buildScratchSize = copy_src.buildScratchSize;
    discardable = copy_src.discardable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MicromapBuildSizesInfoEXT::~MicromapBuildSizesInfoEXT() { FreePnextChain(pNext); }

void MicromapBuildSizesInfoEXT::initialize(const VkMicromapBuildSizesInfoEXT* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    micromapSize = in_struct->micromapSize;
    buildScratchSize = in_struct->buildScratchSize;
    discardable = in_struct->discardable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MicromapBuildSizesInfoEXT::initialize(const MicromapBuildSizesInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    micromapSize = copy_src->micromapSize;
    buildScratchSize = copy_src->buildScratchSize;
    discardable = copy_src->discardable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::PhysicalDeviceBorderColorSwizzleFeaturesEXT(
    const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      borderColorSwizzle(in_struct->borderColorSwizzle),
      borderColorSwizzleFromImage(in_struct->borderColorSwizzleFromImage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::PhysicalDeviceBorderColorSwizzleFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT),
      pNext(nullptr),
      borderColorSwizzle(),
      borderColorSwizzleFromImage() {}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::PhysicalDeviceBorderColorSwizzleFeaturesEXT(
    const PhysicalDeviceBorderColorSwizzleFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    borderColorSwizzle = copy_src.borderColorSwizzle;
    borderColorSwizzleFromImage = copy_src.borderColorSwizzleFromImage;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT& PhysicalDeviceBorderColorSwizzleFeaturesEXT::operator=(
    const PhysicalDeviceBorderColorSwizzleFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    borderColorSwizzle = copy_src.borderColorSwizzle;
    borderColorSwizzleFromImage = copy_src.borderColorSwizzleFromImage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::~PhysicalDeviceBorderColorSwizzleFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceBorderColorSwizzleFeaturesEXT::initialize(const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    borderColorSwizzle = in_struct->borderColorSwizzle;
    borderColorSwizzleFromImage = in_struct->borderColorSwizzleFromImage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceBorderColorSwizzleFeaturesEXT::initialize(const PhysicalDeviceBorderColorSwizzleFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    borderColorSwizzle = copy_src->borderColorSwizzle;
    borderColorSwizzleFromImage = copy_src->borderColorSwizzleFromImage;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerBorderColorComponentMappingCreateInfoEXT::SamplerBorderColorComponentMappingCreateInfoEXT(
    const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), components(in_struct->components), srgb(in_struct->srgb) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerBorderColorComponentMappingCreateInfoEXT::SamplerBorderColorComponentMappingCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT), pNext(nullptr), components(), srgb() {}

SamplerBorderColorComponentMappingCreateInfoEXT::SamplerBorderColorComponentMappingCreateInfoEXT(
    const SamplerBorderColorComponentMappingCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    components = copy_src.components;
    srgb = copy_src.srgb;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerBorderColorComponentMappingCreateInfoEXT& SamplerBorderColorComponentMappingCreateInfoEXT::operator=(
    const SamplerBorderColorComponentMappingCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    components = copy_src.components;
    srgb = copy_src.srgb;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerBorderColorComponentMappingCreateInfoEXT::~SamplerBorderColorComponentMappingCreateInfoEXT() { FreePnextChain(pNext); }

void SamplerBorderColorComponentMappingCreateInfoEXT::initialize(const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    components = in_struct->components;
    srgb = in_struct->srgb;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerBorderColorComponentMappingCreateInfoEXT::initialize(const SamplerBorderColorComponentMappingCreateInfoEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    components = copy_src->components;
    srgb = copy_src->srgb;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(
    const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pageableDeviceLocalMemory(in_struct->pageableDeviceLocalMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT),
      pNext(nullptr),
      pageableDeviceLocalMemory() {}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(
    const PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    pageableDeviceLocalMemory = copy_src.pageableDeviceLocalMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::operator=(
    const PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pageableDeviceLocalMemory = copy_src.pageableDeviceLocalMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::~PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::initialize(
    const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pageableDeviceLocalMemory = in_struct->pageableDeviceLocalMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::initialize(
    const PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pageableDeviceLocalMemory = copy_src->pageableDeviceLocalMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::PhysicalDeviceImageSlicedViewOf3DFeaturesEXT(
    const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageSlicedViewOf3D(in_struct->imageSlicedViewOf3D) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::PhysicalDeviceImageSlicedViewOf3DFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT), pNext(nullptr), imageSlicedViewOf3D() {}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::PhysicalDeviceImageSlicedViewOf3DFeaturesEXT(
    const PhysicalDeviceImageSlicedViewOf3DFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    imageSlicedViewOf3D = copy_src.imageSlicedViewOf3D;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT& PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::operator=(
    const PhysicalDeviceImageSlicedViewOf3DFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageSlicedViewOf3D = copy_src.imageSlicedViewOf3D;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::~PhysicalDeviceImageSlicedViewOf3DFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::initialize(const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageSlicedViewOf3D = in_struct->imageSlicedViewOf3D;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::initialize(const PhysicalDeviceImageSlicedViewOf3DFeaturesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageSlicedViewOf3D = copy_src->imageSlicedViewOf3D;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageViewSlicedCreateInfoEXT::ImageViewSlicedCreateInfoEXT(const VkImageViewSlicedCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), sliceOffset(in_struct->sliceOffset), sliceCount(in_struct->sliceCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewSlicedCreateInfoEXT::ImageViewSlicedCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT), pNext(nullptr), sliceOffset(), sliceCount() {}

ImageViewSlicedCreateInfoEXT::ImageViewSlicedCreateInfoEXT(const ImageViewSlicedCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    sliceOffset = copy_src.sliceOffset;
    sliceCount = copy_src.sliceCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewSlicedCreateInfoEXT& ImageViewSlicedCreateInfoEXT::operator=(const ImageViewSlicedCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sliceOffset = copy_src.sliceOffset;
    sliceCount = copy_src.sliceCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewSlicedCreateInfoEXT::~ImageViewSlicedCreateInfoEXT() { FreePnextChain(pNext); }

void ImageViewSlicedCreateInfoEXT::initialize(const VkImageViewSlicedCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sliceOffset = in_struct->sliceOffset;
    sliceCount = in_struct->sliceCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewSlicedCreateInfoEXT::initialize(const ImageViewSlicedCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sliceOffset = copy_src->sliceOffset;
    sliceCount = copy_src->sliceCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::PhysicalDeviceDepthClampZeroOneFeaturesEXT(
    const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), depthClampZeroOne(in_struct->depthClampZeroOne) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::PhysicalDeviceDepthClampZeroOneFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT), pNext(nullptr), depthClampZeroOne() {}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::PhysicalDeviceDepthClampZeroOneFeaturesEXT(
    const PhysicalDeviceDepthClampZeroOneFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    depthClampZeroOne = copy_src.depthClampZeroOne;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT& PhysicalDeviceDepthClampZeroOneFeaturesEXT::operator=(
    const PhysicalDeviceDepthClampZeroOneFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthClampZeroOne = copy_src.depthClampZeroOne;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::~PhysicalDeviceDepthClampZeroOneFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceDepthClampZeroOneFeaturesEXT::initialize(const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthClampZeroOne = in_struct->depthClampZeroOne;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDepthClampZeroOneFeaturesEXT::initialize(const PhysicalDeviceDepthClampZeroOneFeaturesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthClampZeroOne = copy_src->depthClampZeroOne;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::PhysicalDeviceNonSeamlessCubeMapFeaturesEXT(
    const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), nonSeamlessCubeMap(in_struct->nonSeamlessCubeMap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::PhysicalDeviceNonSeamlessCubeMapFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT), pNext(nullptr), nonSeamlessCubeMap() {}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::PhysicalDeviceNonSeamlessCubeMapFeaturesEXT(
    const PhysicalDeviceNonSeamlessCubeMapFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    nonSeamlessCubeMap = copy_src.nonSeamlessCubeMap;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT& PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::operator=(
    const PhysicalDeviceNonSeamlessCubeMapFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    nonSeamlessCubeMap = copy_src.nonSeamlessCubeMap;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::~PhysicalDeviceNonSeamlessCubeMapFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::initialize(const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    nonSeamlessCubeMap = in_struct->nonSeamlessCubeMap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::initialize(const PhysicalDeviceNonSeamlessCubeMapFeaturesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    nonSeamlessCubeMap = copy_src->nonSeamlessCubeMap;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(
    const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), imageCompressionControlSwapchain(in_struct->imageCompressionControlSwapchain) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT),
      pNext(nullptr),
      imageCompressionControlSwapchain() {}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(
    const PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    imageCompressionControlSwapchain = copy_src.imageCompressionControlSwapchain;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::operator=(
    const PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageCompressionControlSwapchain = copy_src.imageCompressionControlSwapchain;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::~PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::initialize(
    const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageCompressionControlSwapchain = in_struct->imageCompressionControlSwapchain;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::initialize(
    const PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageCompressionControlSwapchain = copy_src->imageCompressionControlSwapchain;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::PhysicalDeviceNestedCommandBufferFeaturesEXT(
    const VkPhysicalDeviceNestedCommandBufferFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      nestedCommandBuffer(in_struct->nestedCommandBuffer),
      nestedCommandBufferRendering(in_struct->nestedCommandBufferRendering),
      nestedCommandBufferSimultaneousUse(in_struct->nestedCommandBufferSimultaneousUse) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::PhysicalDeviceNestedCommandBufferFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT),
      pNext(nullptr),
      nestedCommandBuffer(),
      nestedCommandBufferRendering(),
      nestedCommandBufferSimultaneousUse() {}

PhysicalDeviceNestedCommandBufferFeaturesEXT::PhysicalDeviceNestedCommandBufferFeaturesEXT(
    const PhysicalDeviceNestedCommandBufferFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    nestedCommandBuffer = copy_src.nestedCommandBuffer;
    nestedCommandBufferRendering = copy_src.nestedCommandBufferRendering;
    nestedCommandBufferSimultaneousUse = copy_src.nestedCommandBufferSimultaneousUse;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT& PhysicalDeviceNestedCommandBufferFeaturesEXT::operator=(
    const PhysicalDeviceNestedCommandBufferFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    nestedCommandBuffer = copy_src.nestedCommandBuffer;
    nestedCommandBufferRendering = copy_src.nestedCommandBufferRendering;
    nestedCommandBufferSimultaneousUse = copy_src.nestedCommandBufferSimultaneousUse;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::~PhysicalDeviceNestedCommandBufferFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceNestedCommandBufferFeaturesEXT::initialize(const VkPhysicalDeviceNestedCommandBufferFeaturesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    nestedCommandBuffer = in_struct->nestedCommandBuffer;
    nestedCommandBufferRendering = in_struct->nestedCommandBufferRendering;
    nestedCommandBufferSimultaneousUse = in_struct->nestedCommandBufferSimultaneousUse;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceNestedCommandBufferFeaturesEXT::initialize(const PhysicalDeviceNestedCommandBufferFeaturesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    nestedCommandBuffer = copy_src->nestedCommandBuffer;
    nestedCommandBufferRendering = copy_src->nestedCommandBufferRendering;
    nestedCommandBufferSimultaneousUse = copy_src->nestedCommandBufferSimultaneousUse;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::PhysicalDeviceNestedCommandBufferPropertiesEXT(
    const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxCommandBufferNestingLevel(in_struct->maxCommandBufferNestingLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::PhysicalDeviceNestedCommandBufferPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT),
      pNext(nullptr),
      maxCommandBufferNestingLevel() {}

PhysicalDeviceNestedCommandBufferPropertiesEXT::PhysicalDeviceNestedCommandBufferPropertiesEXT(
    const PhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxCommandBufferNestingLevel = copy_src.maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT& PhysicalDeviceNestedCommandBufferPropertiesEXT::operator=(
    const PhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxCommandBufferNestingLevel = copy_src.maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::~PhysicalDeviceNestedCommandBufferPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceNestedCommandBufferPropertiesEXT::initialize(const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxCommandBufferNestingLevel = in_struct->maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceNestedCommandBufferPropertiesEXT::initialize(const PhysicalDeviceNestedCommandBufferPropertiesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxCommandBufferNestingLevel = copy_src->maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalMemoryAcquireUnmodifiedEXT::ExternalMemoryAcquireUnmodifiedEXT(const VkExternalMemoryAcquireUnmodifiedEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), acquireUnmodifiedMemory(in_struct->acquireUnmodifiedMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalMemoryAcquireUnmodifiedEXT::ExternalMemoryAcquireUnmodifiedEXT()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT), pNext(nullptr), acquireUnmodifiedMemory() {}

ExternalMemoryAcquireUnmodifiedEXT::ExternalMemoryAcquireUnmodifiedEXT(const ExternalMemoryAcquireUnmodifiedEXT& copy_src) {
    sType = copy_src.sType;
    acquireUnmodifiedMemory = copy_src.acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalMemoryAcquireUnmodifiedEXT& ExternalMemoryAcquireUnmodifiedEXT::operator=(
    const ExternalMemoryAcquireUnmodifiedEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    acquireUnmodifiedMemory = copy_src.acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalMemoryAcquireUnmodifiedEXT::~ExternalMemoryAcquireUnmodifiedEXT() { FreePnextChain(pNext); }

void ExternalMemoryAcquireUnmodifiedEXT::initialize(const VkExternalMemoryAcquireUnmodifiedEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    acquireUnmodifiedMemory = in_struct->acquireUnmodifiedMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalMemoryAcquireUnmodifiedEXT::initialize(const ExternalMemoryAcquireUnmodifiedEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    acquireUnmodifiedMemory = copy_src->acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::PhysicalDeviceExtendedDynamicState3FeaturesEXT(
    const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      extendedDynamicState3TessellationDomainOrigin(in_struct->extendedDynamicState3TessellationDomainOrigin),
      extendedDynamicState3DepthClampEnable(in_struct->extendedDynamicState3DepthClampEnable),
      extendedDynamicState3PolygonMode(in_struct->extendedDynamicState3PolygonMode),
      extendedDynamicState3RasterizationSamples(in_struct->extendedDynamicState3RasterizationSamples),
      extendedDynamicState3SampleMask(in_struct->extendedDynamicState3SampleMask),
      extendedDynamicState3AlphaToCoverageEnable(in_struct->extendedDynamicState3AlphaToCoverageEnable),
      extendedDynamicState3AlphaToOneEnable(in_struct->extendedDynamicState3AlphaToOneEnable),
      extendedDynamicState3LogicOpEnable(in_struct->extendedDynamicState3LogicOpEnable),
      extendedDynamicState3ColorBlendEnable(in_struct->extendedDynamicState3ColorBlendEnable),
      extendedDynamicState3ColorBlendEquation(in_struct->extendedDynamicState3ColorBlendEquation),
      extendedDynamicState3ColorWriteMask(in_struct->extendedDynamicState3ColorWriteMask),
      extendedDynamicState3RasterizationStream(in_struct->extendedDynamicState3RasterizationStream),
      extendedDynamicState3ConservativeRasterizationMode(in_struct->extendedDynamicState3ConservativeRasterizationMode),
      extendedDynamicState3ExtraPrimitiveOverestimationSize(in_struct->extendedDynamicState3ExtraPrimitiveOverestimationSize),
      extendedDynamicState3DepthClipEnable(in_struct->extendedDynamicState3DepthClipEnable),
      extendedDynamicState3SampleLocationsEnable(in_struct->extendedDynamicState3SampleLocationsEnable),
      extendedDynamicState3ColorBlendAdvanced(in_struct->extendedDynamicState3ColorBlendAdvanced),
      extendedDynamicState3ProvokingVertexMode(in_struct->extendedDynamicState3ProvokingVertexMode),
      extendedDynamicState3LineRasterizationMode(in_struct->extendedDynamicState3LineRasterizationMode),
      extendedDynamicState3LineStippleEnable(in_struct->extendedDynamicState3LineStippleEnable),
      extendedDynamicState3DepthClipNegativeOneToOne(in_struct->extendedDynamicState3DepthClipNegativeOneToOne),
      extendedDynamicState3ViewportWScalingEnable(in_struct->extendedDynamicState3ViewportWScalingEnable),
      extendedDynamicState3ViewportSwizzle(in_struct->extendedDynamicState3ViewportSwizzle),
      extendedDynamicState3CoverageToColorEnable(in_struct->extendedDynamicState3CoverageToColorEnable),
      extendedDynamicState3CoverageToColorLocation(in_struct->extendedDynamicState3CoverageToColorLocation),
      extendedDynamicState3CoverageModulationMode(in_struct->extendedDynamicState3CoverageModulationMode),
      extendedDynamicState3CoverageModulationTableEnable(in_struct->extendedDynamicState3CoverageModulationTableEnable),
      extendedDynamicState3CoverageModulationTable(in_struct->extendedDynamicState3CoverageModulationTable),
      extendedDynamicState3CoverageReductionMode(in_struct->extendedDynamicState3CoverageReductionMode),
      extendedDynamicState3RepresentativeFragmentTestEnable(in_struct->extendedDynamicState3RepresentativeFragmentTestEnable),
      extendedDynamicState3ShadingRateImageEnable(in_struct->extendedDynamicState3ShadingRateImageEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::PhysicalDeviceExtendedDynamicState3FeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT),
      pNext(nullptr),
      extendedDynamicState3TessellationDomainOrigin(),
      extendedDynamicState3DepthClampEnable(),
      extendedDynamicState3PolygonMode(),
      extendedDynamicState3RasterizationSamples(),
      extendedDynamicState3SampleMask(),
      extendedDynamicState3AlphaToCoverageEnable(),
      extendedDynamicState3AlphaToOneEnable(),
      extendedDynamicState3LogicOpEnable(),
      extendedDynamicState3ColorBlendEnable(),
      extendedDynamicState3ColorBlendEquation(),
      extendedDynamicState3ColorWriteMask(),
      extendedDynamicState3RasterizationStream(),
      extendedDynamicState3ConservativeRasterizationMode(),
      extendedDynamicState3ExtraPrimitiveOverestimationSize(),
      extendedDynamicState3DepthClipEnable(),
      extendedDynamicState3SampleLocationsEnable(),
      extendedDynamicState3ColorBlendAdvanced(),
      extendedDynamicState3ProvokingVertexMode(),
      extendedDynamicState3LineRasterizationMode(),
      extendedDynamicState3LineStippleEnable(),
      extendedDynamicState3DepthClipNegativeOneToOne(),
      extendedDynamicState3ViewportWScalingEnable(),
      extendedDynamicState3ViewportSwizzle(),
      extendedDynamicState3CoverageToColorEnable(),
      extendedDynamicState3CoverageToColorLocation(),
      extendedDynamicState3CoverageModulationMode(),
      extendedDynamicState3CoverageModulationTableEnable(),
      extendedDynamicState3CoverageModulationTable(),
      extendedDynamicState3CoverageReductionMode(),
      extendedDynamicState3RepresentativeFragmentTestEnable(),
      extendedDynamicState3ShadingRateImageEnable() {}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::PhysicalDeviceExtendedDynamicState3FeaturesEXT(
    const PhysicalDeviceExtendedDynamicState3FeaturesEXT& copy_src) {
    sType = copy_src.sType;
    extendedDynamicState3TessellationDomainOrigin = copy_src.extendedDynamicState3TessellationDomainOrigin;
    extendedDynamicState3DepthClampEnable = copy_src.extendedDynamicState3DepthClampEnable;
    extendedDynamicState3PolygonMode = copy_src.extendedDynamicState3PolygonMode;
    extendedDynamicState3RasterizationSamples = copy_src.extendedDynamicState3RasterizationSamples;
    extendedDynamicState3SampleMask = copy_src.extendedDynamicState3SampleMask;
    extendedDynamicState3AlphaToCoverageEnable = copy_src.extendedDynamicState3AlphaToCoverageEnable;
    extendedDynamicState3AlphaToOneEnable = copy_src.extendedDynamicState3AlphaToOneEnable;
    extendedDynamicState3LogicOpEnable = copy_src.extendedDynamicState3LogicOpEnable;
    extendedDynamicState3ColorBlendEnable = copy_src.extendedDynamicState3ColorBlendEnable;
    extendedDynamicState3ColorBlendEquation = copy_src.extendedDynamicState3ColorBlendEquation;
    extendedDynamicState3ColorWriteMask = copy_src.extendedDynamicState3ColorWriteMask;
    extendedDynamicState3RasterizationStream = copy_src.extendedDynamicState3RasterizationStream;
    extendedDynamicState3ConservativeRasterizationMode = copy_src.extendedDynamicState3ConservativeRasterizationMode;
    extendedDynamicState3ExtraPrimitiveOverestimationSize = copy_src.extendedDynamicState3ExtraPrimitiveOverestimationSize;
    extendedDynamicState3DepthClipEnable = copy_src.extendedDynamicState3DepthClipEnable;
    extendedDynamicState3SampleLocationsEnable = copy_src.extendedDynamicState3SampleLocationsEnable;
    extendedDynamicState3ColorBlendAdvanced = copy_src.extendedDynamicState3ColorBlendAdvanced;
    extendedDynamicState3ProvokingVertexMode = copy_src.extendedDynamicState3ProvokingVertexMode;
    extendedDynamicState3LineRasterizationMode = copy_src.extendedDynamicState3LineRasterizationMode;
    extendedDynamicState3LineStippleEnable = copy_src.extendedDynamicState3LineStippleEnable;
    extendedDynamicState3DepthClipNegativeOneToOne = copy_src.extendedDynamicState3DepthClipNegativeOneToOne;
    extendedDynamicState3ViewportWScalingEnable = copy_src.extendedDynamicState3ViewportWScalingEnable;
    extendedDynamicState3ViewportSwizzle = copy_src.extendedDynamicState3ViewportSwizzle;
    extendedDynamicState3CoverageToColorEnable = copy_src.extendedDynamicState3CoverageToColorEnable;
    extendedDynamicState3CoverageToColorLocation = copy_src.extendedDynamicState3CoverageToColorLocation;
    extendedDynamicState3CoverageModulationMode = copy_src.extendedDynamicState3CoverageModulationMode;
    extendedDynamicState3CoverageModulationTableEnable = copy_src.extendedDynamicState3CoverageModulationTableEnable;
    extendedDynamicState3CoverageModulationTable = copy_src.extendedDynamicState3CoverageModulationTable;
    extendedDynamicState3CoverageReductionMode = copy_src.extendedDynamicState3CoverageReductionMode;
    extendedDynamicState3RepresentativeFragmentTestEnable = copy_src.extendedDynamicState3RepresentativeFragmentTestEnable;
    extendedDynamicState3ShadingRateImageEnable = copy_src.extendedDynamicState3ShadingRateImageEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT& PhysicalDeviceExtendedDynamicState3FeaturesEXT::operator=(
    const PhysicalDeviceExtendedDynamicState3FeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    extendedDynamicState3TessellationDomainOrigin = copy_src.extendedDynamicState3TessellationDomainOrigin;
    extendedDynamicState3DepthClampEnable = copy_src.extendedDynamicState3DepthClampEnable;
    extendedDynamicState3PolygonMode = copy_src.extendedDynamicState3PolygonMode;
    extendedDynamicState3RasterizationSamples = copy_src.extendedDynamicState3RasterizationSamples;
    extendedDynamicState3SampleMask = copy_src.extendedDynamicState3SampleMask;
    extendedDynamicState3AlphaToCoverageEnable = copy_src.extendedDynamicState3AlphaToCoverageEnable;
    extendedDynamicState3AlphaToOneEnable = copy_src.extendedDynamicState3AlphaToOneEnable;
    extendedDynamicState3LogicOpEnable = copy_src.extendedDynamicState3LogicOpEnable;
    extendedDynamicState3ColorBlendEnable = copy_src.extendedDynamicState3ColorBlendEnable;
    extendedDynamicState3ColorBlendEquation = copy_src.extendedDynamicState3ColorBlendEquation;
    extendedDynamicState3ColorWriteMask = copy_src.extendedDynamicState3ColorWriteMask;
    extendedDynamicState3RasterizationStream = copy_src.extendedDynamicState3RasterizationStream;
    extendedDynamicState3ConservativeRasterizationMode = copy_src.extendedDynamicState3ConservativeRasterizationMode;
    extendedDynamicState3ExtraPrimitiveOverestimationSize = copy_src.extendedDynamicState3ExtraPrimitiveOverestimationSize;
    extendedDynamicState3DepthClipEnable = copy_src.extendedDynamicState3DepthClipEnable;
    extendedDynamicState3SampleLocationsEnable = copy_src.extendedDynamicState3SampleLocationsEnable;
    extendedDynamicState3ColorBlendAdvanced = copy_src.extendedDynamicState3ColorBlendAdvanced;
    extendedDynamicState3ProvokingVertexMode = copy_src.extendedDynamicState3ProvokingVertexMode;
    extendedDynamicState3LineRasterizationMode = copy_src.extendedDynamicState3LineRasterizationMode;
    extendedDynamicState3LineStippleEnable = copy_src.extendedDynamicState3LineStippleEnable;
    extendedDynamicState3DepthClipNegativeOneToOne = copy_src.extendedDynamicState3DepthClipNegativeOneToOne;
    extendedDynamicState3ViewportWScalingEnable = copy_src.extendedDynamicState3ViewportWScalingEnable;
    extendedDynamicState3ViewportSwizzle = copy_src.extendedDynamicState3ViewportSwizzle;
    extendedDynamicState3CoverageToColorEnable = copy_src.extendedDynamicState3CoverageToColorEnable;
    extendedDynamicState3CoverageToColorLocation = copy_src.extendedDynamicState3CoverageToColorLocation;
    extendedDynamicState3CoverageModulationMode = copy_src.extendedDynamicState3CoverageModulationMode;
    extendedDynamicState3CoverageModulationTableEnable = copy_src.extendedDynamicState3CoverageModulationTableEnable;
    extendedDynamicState3CoverageModulationTable = copy_src.extendedDynamicState3CoverageModulationTable;
    extendedDynamicState3CoverageReductionMode = copy_src.extendedDynamicState3CoverageReductionMode;
    extendedDynamicState3RepresentativeFragmentTestEnable = copy_src.extendedDynamicState3RepresentativeFragmentTestEnable;
    extendedDynamicState3ShadingRateImageEnable = copy_src.extendedDynamicState3ShadingRateImageEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::~PhysicalDeviceExtendedDynamicState3FeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceExtendedDynamicState3FeaturesEXT::initialize(const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    extendedDynamicState3TessellationDomainOrigin = in_struct->extendedDynamicState3TessellationDomainOrigin;
    extendedDynamicState3DepthClampEnable = in_struct->extendedDynamicState3DepthClampEnable;
    extendedDynamicState3PolygonMode = in_struct->extendedDynamicState3PolygonMode;
    extendedDynamicState3RasterizationSamples = in_struct->extendedDynamicState3RasterizationSamples;
    extendedDynamicState3SampleMask = in_struct->extendedDynamicState3SampleMask;
    extendedDynamicState3AlphaToCoverageEnable = in_struct->extendedDynamicState3AlphaToCoverageEnable;
    extendedDynamicState3AlphaToOneEnable = in_struct->extendedDynamicState3AlphaToOneEnable;
    extendedDynamicState3LogicOpEnable = in_struct->extendedDynamicState3LogicOpEnable;
    extendedDynamicState3ColorBlendEnable = in_struct->extendedDynamicState3ColorBlendEnable;
    extendedDynamicState3ColorBlendEquation = in_struct->extendedDynamicState3ColorBlendEquation;
    extendedDynamicState3ColorWriteMask = in_struct->extendedDynamicState3ColorWriteMask;
    extendedDynamicState3RasterizationStream = in_struct->extendedDynamicState3RasterizationStream;
    extendedDynamicState3ConservativeRasterizationMode = in_struct->extendedDynamicState3ConservativeRasterizationMode;
    extendedDynamicState3ExtraPrimitiveOverestimationSize = in_struct->extendedDynamicState3ExtraPrimitiveOverestimationSize;
    extendedDynamicState3DepthClipEnable = in_struct->extendedDynamicState3DepthClipEnable;
    extendedDynamicState3SampleLocationsEnable = in_struct->extendedDynamicState3SampleLocationsEnable;
    extendedDynamicState3ColorBlendAdvanced = in_struct->extendedDynamicState3ColorBlendAdvanced;
    extendedDynamicState3ProvokingVertexMode = in_struct->extendedDynamicState3ProvokingVertexMode;
    extendedDynamicState3LineRasterizationMode = in_struct->extendedDynamicState3LineRasterizationMode;
    extendedDynamicState3LineStippleEnable = in_struct->extendedDynamicState3LineStippleEnable;
    extendedDynamicState3DepthClipNegativeOneToOne = in_struct->extendedDynamicState3DepthClipNegativeOneToOne;
    extendedDynamicState3ViewportWScalingEnable = in_struct->extendedDynamicState3ViewportWScalingEnable;
    extendedDynamicState3ViewportSwizzle = in_struct->extendedDynamicState3ViewportSwizzle;
    extendedDynamicState3CoverageToColorEnable = in_struct->extendedDynamicState3CoverageToColorEnable;
    extendedDynamicState3CoverageToColorLocation = in_struct->extendedDynamicState3CoverageToColorLocation;
    extendedDynamicState3CoverageModulationMode = in_struct->extendedDynamicState3CoverageModulationMode;
    extendedDynamicState3CoverageModulationTableEnable = in_struct->extendedDynamicState3CoverageModulationTableEnable;
    extendedDynamicState3CoverageModulationTable = in_struct->extendedDynamicState3CoverageModulationTable;
    extendedDynamicState3CoverageReductionMode = in_struct->extendedDynamicState3CoverageReductionMode;
    extendedDynamicState3RepresentativeFragmentTestEnable = in_struct->extendedDynamicState3RepresentativeFragmentTestEnable;
    extendedDynamicState3ShadingRateImageEnable = in_struct->extendedDynamicState3ShadingRateImageEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedDynamicState3FeaturesEXT::initialize(const PhysicalDeviceExtendedDynamicState3FeaturesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    extendedDynamicState3TessellationDomainOrigin = copy_src->extendedDynamicState3TessellationDomainOrigin;
    extendedDynamicState3DepthClampEnable = copy_src->extendedDynamicState3DepthClampEnable;
    extendedDynamicState3PolygonMode = copy_src->extendedDynamicState3PolygonMode;
    extendedDynamicState3RasterizationSamples = copy_src->extendedDynamicState3RasterizationSamples;
    extendedDynamicState3SampleMask = copy_src->extendedDynamicState3SampleMask;
    extendedDynamicState3AlphaToCoverageEnable = copy_src->extendedDynamicState3AlphaToCoverageEnable;
    extendedDynamicState3AlphaToOneEnable = copy_src->extendedDynamicState3AlphaToOneEnable;
    extendedDynamicState3LogicOpEnable = copy_src->extendedDynamicState3LogicOpEnable;
    extendedDynamicState3ColorBlendEnable = copy_src->extendedDynamicState3ColorBlendEnable;
    extendedDynamicState3ColorBlendEquation = copy_src->extendedDynamicState3ColorBlendEquation;
    extendedDynamicState3ColorWriteMask = copy_src->extendedDynamicState3ColorWriteMask;
    extendedDynamicState3RasterizationStream = copy_src->extendedDynamicState3RasterizationStream;
    extendedDynamicState3ConservativeRasterizationMode = copy_src->extendedDynamicState3ConservativeRasterizationMode;
    extendedDynamicState3ExtraPrimitiveOverestimationSize = copy_src->extendedDynamicState3ExtraPrimitiveOverestimationSize;
    extendedDynamicState3DepthClipEnable = copy_src->extendedDynamicState3DepthClipEnable;
    extendedDynamicState3SampleLocationsEnable = copy_src->extendedDynamicState3SampleLocationsEnable;
    extendedDynamicState3ColorBlendAdvanced = copy_src->extendedDynamicState3ColorBlendAdvanced;
    extendedDynamicState3ProvokingVertexMode = copy_src->extendedDynamicState3ProvokingVertexMode;
    extendedDynamicState3LineRasterizationMode = copy_src->extendedDynamicState3LineRasterizationMode;
    extendedDynamicState3LineStippleEnable = copy_src->extendedDynamicState3LineStippleEnable;
    extendedDynamicState3DepthClipNegativeOneToOne = copy_src->extendedDynamicState3DepthClipNegativeOneToOne;
    extendedDynamicState3ViewportWScalingEnable = copy_src->extendedDynamicState3ViewportWScalingEnable;
    extendedDynamicState3ViewportSwizzle = copy_src->extendedDynamicState3ViewportSwizzle;
    extendedDynamicState3CoverageToColorEnable = copy_src->extendedDynamicState3CoverageToColorEnable;
    extendedDynamicState3CoverageToColorLocation = copy_src->extendedDynamicState3CoverageToColorLocation;
    extendedDynamicState3CoverageModulationMode = copy_src->extendedDynamicState3CoverageModulationMode;
    extendedDynamicState3CoverageModulationTableEnable = copy_src->extendedDynamicState3CoverageModulationTableEnable;
    extendedDynamicState3CoverageModulationTable = copy_src->extendedDynamicState3CoverageModulationTable;
    extendedDynamicState3CoverageReductionMode = copy_src->extendedDynamicState3CoverageReductionMode;
    extendedDynamicState3RepresentativeFragmentTestEnable = copy_src->extendedDynamicState3RepresentativeFragmentTestEnable;
    extendedDynamicState3ShadingRateImageEnable = copy_src->extendedDynamicState3ShadingRateImageEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::PhysicalDeviceExtendedDynamicState3PropertiesEXT(
    const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), dynamicPrimitiveTopologyUnrestricted(in_struct->dynamicPrimitiveTopologyUnrestricted) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::PhysicalDeviceExtendedDynamicState3PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT),
      pNext(nullptr),
      dynamicPrimitiveTopologyUnrestricted() {}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::PhysicalDeviceExtendedDynamicState3PropertiesEXT(
    const PhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src.dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT& PhysicalDeviceExtendedDynamicState3PropertiesEXT::operator=(
    const PhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src.dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::~PhysicalDeviceExtendedDynamicState3PropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceExtendedDynamicState3PropertiesEXT::initialize(
    const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicPrimitiveTopologyUnrestricted = in_struct->dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExtendedDynamicState3PropertiesEXT::initialize(const PhysicalDeviceExtendedDynamicState3PropertiesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src->dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::PhysicalDeviceSubpassMergeFeedbackFeaturesEXT(
    const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), subpassMergeFeedback(in_struct->subpassMergeFeedback) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::PhysicalDeviceSubpassMergeFeedbackFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT), pNext(nullptr), subpassMergeFeedback() {}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::PhysicalDeviceSubpassMergeFeedbackFeaturesEXT(
    const PhysicalDeviceSubpassMergeFeedbackFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    subpassMergeFeedback = copy_src.subpassMergeFeedback;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT& PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::operator=(
    const PhysicalDeviceSubpassMergeFeedbackFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subpassMergeFeedback = copy_src.subpassMergeFeedback;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::~PhysicalDeviceSubpassMergeFeedbackFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::initialize(const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subpassMergeFeedback = in_struct->subpassMergeFeedback;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::initialize(const PhysicalDeviceSubpassMergeFeedbackFeaturesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subpassMergeFeedback = copy_src->subpassMergeFeedback;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassCreationControlEXT::RenderPassCreationControlEXT(const VkRenderPassCreationControlEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), disallowMerging(in_struct->disallowMerging) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderPassCreationControlEXT::RenderPassCreationControlEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT), pNext(nullptr), disallowMerging() {}

RenderPassCreationControlEXT::RenderPassCreationControlEXT(const RenderPassCreationControlEXT& copy_src) {
    sType = copy_src.sType;
    disallowMerging = copy_src.disallowMerging;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderPassCreationControlEXT& RenderPassCreationControlEXT::operator=(const RenderPassCreationControlEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    disallowMerging = copy_src.disallowMerging;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderPassCreationControlEXT::~RenderPassCreationControlEXT() { FreePnextChain(pNext); }

void RenderPassCreationControlEXT::initialize(const VkRenderPassCreationControlEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    disallowMerging = in_struct->disallowMerging;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderPassCreationControlEXT::initialize(const RenderPassCreationControlEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    disallowMerging = copy_src->disallowMerging;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassCreationFeedbackCreateInfoEXT::RenderPassCreationFeedbackCreateInfoEXT(
    const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pRenderPassFeedback(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*in_struct->pRenderPassFeedback);
    }
}

RenderPassCreationFeedbackCreateInfoEXT::RenderPassCreationFeedbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT), pNext(nullptr), pRenderPassFeedback(nullptr) {}

RenderPassCreationFeedbackCreateInfoEXT::RenderPassCreationFeedbackCreateInfoEXT(
    const RenderPassCreationFeedbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*copy_src.pRenderPassFeedback);
    }
}

RenderPassCreationFeedbackCreateInfoEXT& RenderPassCreationFeedbackCreateInfoEXT::operator=(
    const RenderPassCreationFeedbackCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pRenderPassFeedback) delete pRenderPassFeedback;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*copy_src.pRenderPassFeedback);
    }

    return *this;
}

RenderPassCreationFeedbackCreateInfoEXT::~RenderPassCreationFeedbackCreateInfoEXT() {
    if (pRenderPassFeedback) delete pRenderPassFeedback;
    FreePnextChain(pNext);
}

void RenderPassCreationFeedbackCreateInfoEXT::initialize(const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRenderPassFeedback) delete pRenderPassFeedback;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*in_struct->pRenderPassFeedback);
    }
}

void RenderPassCreationFeedbackCreateInfoEXT::initialize(const RenderPassCreationFeedbackCreateInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*copy_src->pRenderPassFeedback);
    }
}

RenderPassSubpassFeedbackCreateInfoEXT::RenderPassSubpassFeedbackCreateInfoEXT(
    const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pSubpassFeedback(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*in_struct->pSubpassFeedback);
    }
}

RenderPassSubpassFeedbackCreateInfoEXT::RenderPassSubpassFeedbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT), pNext(nullptr), pSubpassFeedback(nullptr) {}

RenderPassSubpassFeedbackCreateInfoEXT::RenderPassSubpassFeedbackCreateInfoEXT(
    const RenderPassSubpassFeedbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*copy_src.pSubpassFeedback);
    }
}

RenderPassSubpassFeedbackCreateInfoEXT& RenderPassSubpassFeedbackCreateInfoEXT::operator=(
    const RenderPassSubpassFeedbackCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pSubpassFeedback) delete pSubpassFeedback;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*copy_src.pSubpassFeedback);
    }

    return *this;
}

RenderPassSubpassFeedbackCreateInfoEXT::~RenderPassSubpassFeedbackCreateInfoEXT() {
    if (pSubpassFeedback) delete pSubpassFeedback;
    FreePnextChain(pNext);
}

void RenderPassSubpassFeedbackCreateInfoEXT::initialize(const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSubpassFeedback) delete pSubpassFeedback;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*in_struct->pSubpassFeedback);
    }
}

void RenderPassSubpassFeedbackCreateInfoEXT::initialize(const RenderPassSubpassFeedbackCreateInfoEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*copy_src->pSubpassFeedback);
    }
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::PhysicalDeviceShaderModuleIdentifierFeaturesEXT(
    const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderModuleIdentifier(in_struct->shaderModuleIdentifier) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::PhysicalDeviceShaderModuleIdentifierFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT), pNext(nullptr), shaderModuleIdentifier() {}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::PhysicalDeviceShaderModuleIdentifierFeaturesEXT(
    const PhysicalDeviceShaderModuleIdentifierFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderModuleIdentifier = copy_src.shaderModuleIdentifier;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT& PhysicalDeviceShaderModuleIdentifierFeaturesEXT::operator=(
    const PhysicalDeviceShaderModuleIdentifierFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderModuleIdentifier = copy_src.shaderModuleIdentifier;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::~PhysicalDeviceShaderModuleIdentifierFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderModuleIdentifierFeaturesEXT::initialize(const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderModuleIdentifier = in_struct->shaderModuleIdentifier;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderModuleIdentifierFeaturesEXT::initialize(const PhysicalDeviceShaderModuleIdentifierFeaturesEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderModuleIdentifier = copy_src->shaderModuleIdentifier;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::PhysicalDeviceShaderModuleIdentifierPropertiesEXT(
    const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = in_struct->shaderModuleIdentifierAlgorithmUUID[i];
    }
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::PhysicalDeviceShaderModuleIdentifierPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT), pNext(nullptr) {}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::PhysicalDeviceShaderModuleIdentifierPropertiesEXT(
    const PhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src.shaderModuleIdentifierAlgorithmUUID[i];
    }
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT& PhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator=(
    const PhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src.shaderModuleIdentifierAlgorithmUUID[i];
    }

    return *this;
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::~PhysicalDeviceShaderModuleIdentifierPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderModuleIdentifierPropertiesEXT::initialize(
    const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = in_struct->shaderModuleIdentifierAlgorithmUUID[i];
    }
}

void PhysicalDeviceShaderModuleIdentifierPropertiesEXT::initialize(
    const PhysicalDeviceShaderModuleIdentifierPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src->shaderModuleIdentifierAlgorithmUUID[i];
    }
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::PipelineShaderStageModuleIdentifierCreateInfoEXT(
    const VkPipelineShaderStageModuleIdentifierCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), identifierSize(in_struct->identifierSize), pIdentifier(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pIdentifier) {
        pIdentifier = new uint8_t[in_struct->identifierSize];
        memcpy((void*)pIdentifier, (void*)in_struct->pIdentifier, sizeof(uint8_t) * in_struct->identifierSize);
    }
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::PipelineShaderStageModuleIdentifierCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT),
      pNext(nullptr),
      identifierSize(),
      pIdentifier(nullptr) {}

PipelineShaderStageModuleIdentifierCreateInfoEXT::PipelineShaderStageModuleIdentifierCreateInfoEXT(
    const PipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pIdentifier) {
        pIdentifier = new uint8_t[copy_src.identifierSize];
        memcpy((void*)pIdentifier, (void*)copy_src.pIdentifier, sizeof(uint8_t) * copy_src.identifierSize);
    }
}

PipelineShaderStageModuleIdentifierCreateInfoEXT& PipelineShaderStageModuleIdentifierCreateInfoEXT::operator=(
    const PipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pIdentifier) delete[] pIdentifier;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pIdentifier) {
        pIdentifier = new uint8_t[copy_src.identifierSize];
        memcpy((void*)pIdentifier, (void*)copy_src.pIdentifier, sizeof(uint8_t) * copy_src.identifierSize);
    }

    return *this;
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::~PipelineShaderStageModuleIdentifierCreateInfoEXT() {
    if (pIdentifier) delete[] pIdentifier;
    FreePnextChain(pNext);
}

void PipelineShaderStageModuleIdentifierCreateInfoEXT::initialize(
    const VkPipelineShaderStageModuleIdentifierCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pIdentifier) delete[] pIdentifier;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    identifierSize = in_struct->identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pIdentifier) {
        pIdentifier = new uint8_t[in_struct->identifierSize];
        memcpy((void*)pIdentifier, (void*)in_struct->pIdentifier, sizeof(uint8_t) * in_struct->identifierSize);
    }
}

void PipelineShaderStageModuleIdentifierCreateInfoEXT::initialize(const PipelineShaderStageModuleIdentifierCreateInfoEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    identifierSize = copy_src->identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pIdentifier) {
        pIdentifier = new uint8_t[copy_src->identifierSize];
        memcpy((void*)pIdentifier, (void*)copy_src->pIdentifier, sizeof(uint8_t) * copy_src->identifierSize);
    }
}

ShaderModuleIdentifierEXT::ShaderModuleIdentifierEXT(const VkShaderModuleIdentifierEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), identifierSize(in_struct->identifierSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = in_struct->identifier[i];
    }
}

ShaderModuleIdentifierEXT::ShaderModuleIdentifierEXT()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT), pNext(nullptr), identifierSize() {}

ShaderModuleIdentifierEXT::ShaderModuleIdentifierEXT(const ShaderModuleIdentifierEXT& copy_src) {
    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = copy_src.identifier[i];
    }
}

ShaderModuleIdentifierEXT& ShaderModuleIdentifierEXT::operator=(const ShaderModuleIdentifierEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = copy_src.identifier[i];
    }

    return *this;
}

ShaderModuleIdentifierEXT::~ShaderModuleIdentifierEXT() { FreePnextChain(pNext); }

void ShaderModuleIdentifierEXT::initialize(const VkShaderModuleIdentifierEXT* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    identifierSize = in_struct->identifierSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = in_struct->identifier[i];
    }
}

void ShaderModuleIdentifierEXT::initialize(const ShaderModuleIdentifierEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    identifierSize = copy_src->identifierSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = copy_src->identifier[i];
    }
}

PhysicalDeviceLegacyDitheringFeaturesEXT::PhysicalDeviceLegacyDitheringFeaturesEXT(
    const VkPhysicalDeviceLegacyDitheringFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), legacyDithering(in_struct->legacyDithering) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceLegacyDitheringFeaturesEXT::PhysicalDeviceLegacyDitheringFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT), pNext(nullptr), legacyDithering() {}

PhysicalDeviceLegacyDitheringFeaturesEXT::PhysicalDeviceLegacyDitheringFeaturesEXT(
    const PhysicalDeviceLegacyDitheringFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    legacyDithering = copy_src.legacyDithering;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceLegacyDitheringFeaturesEXT& PhysicalDeviceLegacyDitheringFeaturesEXT::operator=(
    const PhysicalDeviceLegacyDitheringFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    legacyDithering = copy_src.legacyDithering;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceLegacyDitheringFeaturesEXT::~PhysicalDeviceLegacyDitheringFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceLegacyDitheringFeaturesEXT::initialize(const VkPhysicalDeviceLegacyDitheringFeaturesEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    legacyDithering = in_struct->legacyDithering;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceLegacyDitheringFeaturesEXT::initialize(const PhysicalDeviceLegacyDitheringFeaturesEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    legacyDithering = copy_src->legacyDithering;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::PhysicalDevicePipelineProtectedAccessFeaturesEXT(
    const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pipelineProtectedAccess(in_struct->pipelineProtectedAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::PhysicalDevicePipelineProtectedAccessFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT), pNext(nullptr), pipelineProtectedAccess() {}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::PhysicalDevicePipelineProtectedAccessFeaturesEXT(
    const PhysicalDevicePipelineProtectedAccessFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    pipelineProtectedAccess = copy_src.pipelineProtectedAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT& PhysicalDevicePipelineProtectedAccessFeaturesEXT::operator=(
    const PhysicalDevicePipelineProtectedAccessFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineProtectedAccess = copy_src.pipelineProtectedAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::~PhysicalDevicePipelineProtectedAccessFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDevicePipelineProtectedAccessFeaturesEXT::initialize(
    const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineProtectedAccess = in_struct->pipelineProtectedAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineProtectedAccessFeaturesEXT::initialize(const PhysicalDevicePipelineProtectedAccessFeaturesEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineProtectedAccess = copy_src->pipelineProtectedAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderObjectFeaturesEXT::PhysicalDeviceShaderObjectFeaturesEXT(
    const VkPhysicalDeviceShaderObjectFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderObject(in_struct->shaderObject) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderObjectFeaturesEXT::PhysicalDeviceShaderObjectFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT), pNext(nullptr), shaderObject() {}

PhysicalDeviceShaderObjectFeaturesEXT::PhysicalDeviceShaderObjectFeaturesEXT(
    const PhysicalDeviceShaderObjectFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    shaderObject = copy_src.shaderObject;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderObjectFeaturesEXT& PhysicalDeviceShaderObjectFeaturesEXT::operator=(
    const PhysicalDeviceShaderObjectFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderObject = copy_src.shaderObject;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderObjectFeaturesEXT::~PhysicalDeviceShaderObjectFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderObjectFeaturesEXT::initialize(const VkPhysicalDeviceShaderObjectFeaturesEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderObject = in_struct->shaderObject;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderObjectFeaturesEXT::initialize(const PhysicalDeviceShaderObjectFeaturesEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderObject = copy_src->shaderObject;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderObjectPropertiesEXT::PhysicalDeviceShaderObjectPropertiesEXT(
    const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderBinaryVersion(in_struct->shaderBinaryVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = in_struct->shaderBinaryUUID[i];
    }
}

PhysicalDeviceShaderObjectPropertiesEXT::PhysicalDeviceShaderObjectPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT), pNext(nullptr), shaderBinaryVersion() {}

PhysicalDeviceShaderObjectPropertiesEXT::PhysicalDeviceShaderObjectPropertiesEXT(
    const PhysicalDeviceShaderObjectPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    shaderBinaryVersion = copy_src.shaderBinaryVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = copy_src.shaderBinaryUUID[i];
    }
}

PhysicalDeviceShaderObjectPropertiesEXT& PhysicalDeviceShaderObjectPropertiesEXT::operator=(
    const PhysicalDeviceShaderObjectPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderBinaryVersion = copy_src.shaderBinaryVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = copy_src.shaderBinaryUUID[i];
    }

    return *this;
}

PhysicalDeviceShaderObjectPropertiesEXT::~PhysicalDeviceShaderObjectPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceShaderObjectPropertiesEXT::initialize(const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBinaryVersion = in_struct->shaderBinaryVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = in_struct->shaderBinaryUUID[i];
    }
}

void PhysicalDeviceShaderObjectPropertiesEXT::initialize(const PhysicalDeviceShaderObjectPropertiesEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBinaryVersion = copy_src->shaderBinaryVersion;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = copy_src->shaderBinaryUUID[i];
    }
}

ShaderCreateInfoEXT::ShaderCreateInfoEXT(const VkShaderCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stage(in_struct->stage),
      nextStage(in_struct->nextStage),
      codeType(in_struct->codeType),
      codeSize(in_struct->codeSize),
      pCode(in_struct->pCode),
      setLayoutCount(in_struct->setLayoutCount),
      pSetLayouts(nullptr),
      pushConstantRangeCount(in_struct->pushConstantRangeCount),
      pPushConstantRanges(nullptr),
      pSpecializationInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }

    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)in_struct->pPushConstantRanges,
               sizeof(VkPushConstantRange) * in_struct->pushConstantRangeCount);
    }
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(in_struct->pSpecializationInfo);
}

ShaderCreateInfoEXT::ShaderCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      stage(),
      nextStage(),
      codeType(),
      codeSize(),
      pCode(nullptr),
      pName(nullptr),
      setLayoutCount(),
      pSetLayouts(nullptr),
      pushConstantRangeCount(),
      pPushConstantRanges(nullptr),
      pSpecializationInfo(nullptr) {}

ShaderCreateInfoEXT::ShaderCreateInfoEXT(const ShaderCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    nextStage = copy_src.nextStage;
    codeType = copy_src.codeType;
    codeSize = copy_src.codeSize;
    pCode = copy_src.pCode;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (setLayoutCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    if (copy_src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src.pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src.pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src.pushConstantRangeCount);
    }
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src.pSpecializationInfo);
}

ShaderCreateInfoEXT& ShaderCreateInfoEXT::operator=(const ShaderCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    nextStage = copy_src.nextStage;
    codeType = copy_src.codeType;
    codeSize = copy_src.codeSize;
    pCode = copy_src.pCode;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (setLayoutCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    if (copy_src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src.pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src.pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src.pushConstantRangeCount);
    }
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src.pSpecializationInfo);

    return *this;
}

ShaderCreateInfoEXT::~ShaderCreateInfoEXT() {
    if (pName) delete[] pName;
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
}

void ShaderCreateInfoEXT::initialize(const VkShaderCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stage = in_struct->stage;
    nextStage = in_struct->nextStage;
    codeType = in_struct->codeType;
    codeSize = in_struct->codeSize;
    pCode = in_struct->pCode;
    setLayoutCount = in_struct->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = in_struct->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }

    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)in_struct->pPushConstantRanges,
               sizeof(VkPushConstantRange) * in_struct->pushConstantRangeCount);
    }
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(in_struct->pSpecializationInfo);
}

void ShaderCreateInfoEXT::initialize(const ShaderCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stage = copy_src->stage;
    nextStage = copy_src->nextStage;
    codeType = copy_src->codeType;
    codeSize = copy_src->codeSize;
    pCode = copy_src->pCode;
    setLayoutCount = copy_src->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
    if (setLayoutCount && copy_src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src->pSetLayouts[i];
        }
    }

    if (copy_src->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src->pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src->pushConstantRangeCount);
    }
    if (copy_src->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src->pSpecializationInfo);
}

LayerSettingEXT::LayerSettingEXT(const VkLayerSettingEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : type(in_struct->type), valueCount(in_struct->valueCount), pValues(in_struct->pValues) {
    pLayerName = SafeStringCopy(in_struct->pLayerName);
    pSettingName = SafeStringCopy(in_struct->pSettingName);
}

LayerSettingEXT::LayerSettingEXT() : pLayerName(nullptr), pSettingName(nullptr), type(), valueCount(), pValues(nullptr) {}

LayerSettingEXT::LayerSettingEXT(const LayerSettingEXT& copy_src) {
    type = copy_src.type;
    valueCount = copy_src.valueCount;
    pValues = copy_src.pValues;
    pLayerName = SafeStringCopy(copy_src.pLayerName);
    pSettingName = SafeStringCopy(copy_src.pSettingName);
}

LayerSettingEXT& LayerSettingEXT::operator=(const LayerSettingEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pLayerName) delete[] pLayerName;
    if (pSettingName) delete[] pSettingName;

    type = copy_src.type;
    valueCount = copy_src.valueCount;
    pValues = copy_src.pValues;
    pLayerName = SafeStringCopy(copy_src.pLayerName);
    pSettingName = SafeStringCopy(copy_src.pSettingName);

    return *this;
}

LayerSettingEXT::~LayerSettingEXT() {
    if (pLayerName) delete[] pLayerName;
    if (pSettingName) delete[] pSettingName;
}

void LayerSettingEXT::initialize(const VkLayerSettingEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLayerName) delete[] pLayerName;
    if (pSettingName) delete[] pSettingName;
    type = in_struct->type;
    valueCount = in_struct->valueCount;
    pValues = in_struct->pValues;
    pLayerName = SafeStringCopy(in_struct->pLayerName);
    pSettingName = SafeStringCopy(in_struct->pSettingName);
}

void LayerSettingEXT::initialize(const LayerSettingEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    type = copy_src->type;
    valueCount = copy_src->valueCount;
    pValues = copy_src->pValues;
    pLayerName = SafeStringCopy(copy_src->pLayerName);
    pSettingName = SafeStringCopy(copy_src->pSettingName);
}

LayerSettingsCreateInfoEXT::LayerSettingsCreateInfoEXT(const VkLayerSettingsCreateInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), settingCount(in_struct->settingCount), pSettings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (settingCount && in_struct->pSettings) {
        pSettings = new LayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&in_struct->pSettings[i]);
        }
    }
}

LayerSettingsCreateInfoEXT::LayerSettingsCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT), pNext(nullptr), settingCount(), pSettings(nullptr) {}

LayerSettingsCreateInfoEXT::LayerSettingsCreateInfoEXT(const LayerSettingsCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    settingCount = copy_src.settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (settingCount && copy_src.pSettings) {
        pSettings = new LayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src.pSettings[i]);
        }
    }
}

LayerSettingsCreateInfoEXT& LayerSettingsCreateInfoEXT::operator=(const LayerSettingsCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    settingCount = copy_src.settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (settingCount && copy_src.pSettings) {
        pSettings = new LayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src.pSettings[i]);
        }
    }

    return *this;
}

LayerSettingsCreateInfoEXT::~LayerSettingsCreateInfoEXT() {
    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);
}

void LayerSettingsCreateInfoEXT::initialize(const VkLayerSettingsCreateInfoEXT* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    settingCount = in_struct->settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (settingCount && in_struct->pSettings) {
        pSettings = new LayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&in_struct->pSettings[i]);
        }
    }
}

void LayerSettingsCreateInfoEXT::initialize(const LayerSettingsCreateInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    settingCount = copy_src->settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (settingCount && copy_src->pSettings) {
        pSettings = new LayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src->pSettings[i]);
        }
    }
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(
    const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pipelineLibraryGroupHandles(in_struct->pipelineLibraryGroupHandles) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT),
      pNext(nullptr),
      pipelineLibraryGroupHandles() {}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(
    const PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    pipelineLibraryGroupHandles = copy_src.pipelineLibraryGroupHandles;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT& PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::operator=(
    const PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineLibraryGroupHandles = copy_src.pipelineLibraryGroupHandles;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::~PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::initialize(
    const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineLibraryGroupHandles = in_struct->pipelineLibraryGroupHandles;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::initialize(
    const PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineLibraryGroupHandles = copy_src->pipelineLibraryGroupHandles;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(
    const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), dynamicRenderingUnusedAttachments(in_struct->dynamicRenderingUnusedAttachments) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT),
      pNext(nullptr),
      dynamicRenderingUnusedAttachments() {}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(
    const PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    dynamicRenderingUnusedAttachments = copy_src.dynamicRenderingUnusedAttachments;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT& PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::operator=(
    const PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicRenderingUnusedAttachments = copy_src.dynamicRenderingUnusedAttachments;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::~PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::initialize(
    const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicRenderingUnusedAttachments = in_struct->dynamicRenderingUnusedAttachments;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::initialize(
    const PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicRenderingUnusedAttachments = copy_src->dynamicRenderingUnusedAttachments;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(
    const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), attachmentFeedbackLoopDynamicState(in_struct->attachmentFeedbackLoopDynamicState) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT),
      pNext(nullptr),
      attachmentFeedbackLoopDynamicState() {}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(
    const PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    attachmentFeedbackLoopDynamicState = copy_src.attachmentFeedbackLoopDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT& PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::operator=(
    const PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentFeedbackLoopDynamicState = copy_src.attachmentFeedbackLoopDynamicState;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::~PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT() {
    FreePnextChain(pNext);
}

void PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::initialize(
    const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentFeedbackLoopDynamicState = in_struct->attachmentFeedbackLoopDynamicState;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::initialize(
    const PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentFeedbackLoopDynamicState = copy_src->attachmentFeedbackLoopDynamicState;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMeshShaderFeaturesEXT::PhysicalDeviceMeshShaderFeaturesEXT(const VkPhysicalDeviceMeshShaderFeaturesEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      taskShader(in_struct->taskShader),
      meshShader(in_struct->meshShader),
      multiviewMeshShader(in_struct->multiviewMeshShader),
      primitiveFragmentShadingRateMeshShader(in_struct->primitiveFragmentShadingRateMeshShader),
      meshShaderQueries(in_struct->meshShaderQueries) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMeshShaderFeaturesEXT::PhysicalDeviceMeshShaderFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT),
      pNext(nullptr),
      taskShader(),
      meshShader(),
      multiviewMeshShader(),
      primitiveFragmentShadingRateMeshShader(),
      meshShaderQueries() {}

PhysicalDeviceMeshShaderFeaturesEXT::PhysicalDeviceMeshShaderFeaturesEXT(const PhysicalDeviceMeshShaderFeaturesEXT& copy_src) {
    sType = copy_src.sType;
    taskShader = copy_src.taskShader;
    meshShader = copy_src.meshShader;
    multiviewMeshShader = copy_src.multiviewMeshShader;
    primitiveFragmentShadingRateMeshShader = copy_src.primitiveFragmentShadingRateMeshShader;
    meshShaderQueries = copy_src.meshShaderQueries;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMeshShaderFeaturesEXT& PhysicalDeviceMeshShaderFeaturesEXT::operator=(
    const PhysicalDeviceMeshShaderFeaturesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    taskShader = copy_src.taskShader;
    meshShader = copy_src.meshShader;
    multiviewMeshShader = copy_src.multiviewMeshShader;
    primitiveFragmentShadingRateMeshShader = copy_src.primitiveFragmentShadingRateMeshShader;
    meshShaderQueries = copy_src.meshShaderQueries;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMeshShaderFeaturesEXT::~PhysicalDeviceMeshShaderFeaturesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMeshShaderFeaturesEXT::initialize(const VkPhysicalDeviceMeshShaderFeaturesEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    taskShader = in_struct->taskShader;
    meshShader = in_struct->meshShader;
    multiviewMeshShader = in_struct->multiviewMeshShader;
    primitiveFragmentShadingRateMeshShader = in_struct->primitiveFragmentShadingRateMeshShader;
    meshShaderQueries = in_struct->meshShaderQueries;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMeshShaderFeaturesEXT::initialize(const PhysicalDeviceMeshShaderFeaturesEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    taskShader = copy_src->taskShader;
    meshShader = copy_src->meshShader;
    multiviewMeshShader = copy_src->multiviewMeshShader;
    primitiveFragmentShadingRateMeshShader = copy_src->primitiveFragmentShadingRateMeshShader;
    meshShaderQueries = copy_src->meshShaderQueries;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMeshShaderPropertiesEXT::PhysicalDeviceMeshShaderPropertiesEXT(
    const VkPhysicalDeviceMeshShaderPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxTaskWorkGroupTotalCount(in_struct->maxTaskWorkGroupTotalCount),
      maxTaskWorkGroupInvocations(in_struct->maxTaskWorkGroupInvocations),
      maxTaskPayloadSize(in_struct->maxTaskPayloadSize),
      maxTaskSharedMemorySize(in_struct->maxTaskSharedMemorySize),
      maxTaskPayloadAndSharedMemorySize(in_struct->maxTaskPayloadAndSharedMemorySize),
      maxMeshWorkGroupTotalCount(in_struct->maxMeshWorkGroupTotalCount),
      maxMeshWorkGroupInvocations(in_struct->maxMeshWorkGroupInvocations),
      maxMeshSharedMemorySize(in_struct->maxMeshSharedMemorySize),
      maxMeshPayloadAndSharedMemorySize(in_struct->maxMeshPayloadAndSharedMemorySize),
      maxMeshOutputMemorySize(in_struct->maxMeshOutputMemorySize),
      maxMeshPayloadAndOutputMemorySize(in_struct->maxMeshPayloadAndOutputMemorySize),
      maxMeshOutputComponents(in_struct->maxMeshOutputComponents),
      maxMeshOutputVertices(in_struct->maxMeshOutputVertices),
      maxMeshOutputPrimitives(in_struct->maxMeshOutputPrimitives),
      maxMeshOutputLayers(in_struct->maxMeshOutputLayers),
      maxMeshMultiviewViewCount(in_struct->maxMeshMultiviewViewCount),
      meshOutputPerVertexGranularity(in_struct->meshOutputPerVertexGranularity),
      meshOutputPerPrimitiveGranularity(in_struct->meshOutputPerPrimitiveGranularity),
      maxPreferredTaskWorkGroupInvocations(in_struct->maxPreferredTaskWorkGroupInvocations),
      maxPreferredMeshWorkGroupInvocations(in_struct->maxPreferredMeshWorkGroupInvocations),
      prefersLocalInvocationVertexOutput(in_struct->prefersLocalInvocationVertexOutput),
      prefersLocalInvocationPrimitiveOutput(in_struct->prefersLocalInvocationPrimitiveOutput),
      prefersCompactVertexOutput(in_struct->prefersCompactVertexOutput),
      prefersCompactPrimitiveOutput(in_struct->prefersCompactPrimitiveOutput) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupCount[i] = in_struct->maxTaskWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = in_struct->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupCount[i] = in_struct->maxMeshWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = in_struct->maxMeshWorkGroupSize[i];
    }
}

PhysicalDeviceMeshShaderPropertiesEXT::PhysicalDeviceMeshShaderPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT),
      pNext(nullptr),
      maxTaskWorkGroupTotalCount(),
      maxTaskWorkGroupInvocations(),
      maxTaskPayloadSize(),
      maxTaskSharedMemorySize(),
      maxTaskPayloadAndSharedMemorySize(),
      maxMeshWorkGroupTotalCount(),
      maxMeshWorkGroupInvocations(),
      maxMeshSharedMemorySize(),
      maxMeshPayloadAndSharedMemorySize(),
      maxMeshOutputMemorySize(),
      maxMeshPayloadAndOutputMemorySize(),
      maxMeshOutputComponents(),
      maxMeshOutputVertices(),
      maxMeshOutputPrimitives(),
      maxMeshOutputLayers(),
      maxMeshMultiviewViewCount(),
      meshOutputPerVertexGranularity(),
      meshOutputPerPrimitiveGranularity(),
      maxPreferredTaskWorkGroupInvocations(),
      maxPreferredMeshWorkGroupInvocations(),
      prefersLocalInvocationVertexOutput(),
      prefersLocalInvocationPrimitiveOutput(),
      prefersCompactVertexOutput(),
      prefersCompactPrimitiveOutput() {}

PhysicalDeviceMeshShaderPropertiesEXT::PhysicalDeviceMeshShaderPropertiesEXT(
    const PhysicalDeviceMeshShaderPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxTaskWorkGroupTotalCount = copy_src.maxTaskWorkGroupTotalCount;
    maxTaskWorkGroupInvocations = copy_src.maxTaskWorkGroupInvocations;
    maxTaskPayloadSize = copy_src.maxTaskPayloadSize;
    maxTaskSharedMemorySize = copy_src.maxTaskSharedMemorySize;
    maxTaskPayloadAndSharedMemorySize = copy_src.maxTaskPayloadAndSharedMemorySize;
    maxMeshWorkGroupTotalCount = copy_src.maxMeshWorkGroupTotalCount;
    maxMeshWorkGroupInvocations = copy_src.maxMeshWorkGroupInvocations;
    maxMeshSharedMemorySize = copy_src.maxMeshSharedMemorySize;
    maxMeshPayloadAndSharedMemorySize = copy_src.maxMeshPayloadAndSharedMemorySize;
    maxMeshOutputMemorySize = copy_src.maxMeshOutputMemorySize;
    maxMeshPayloadAndOutputMemorySize = copy_src.maxMeshPayloadAndOutputMemorySize;
    maxMeshOutputComponents = copy_src.maxMeshOutputComponents;
    maxMeshOutputVertices = copy_src.maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src.maxMeshOutputPrimitives;
    maxMeshOutputLayers = copy_src.maxMeshOutputLayers;
    maxMeshMultiviewViewCount = copy_src.maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src.meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src.meshOutputPerPrimitiveGranularity;
    maxPreferredTaskWorkGroupInvocations = copy_src.maxPreferredTaskWorkGroupInvocations;
    maxPreferredMeshWorkGroupInvocations = copy_src.maxPreferredMeshWorkGroupInvocations;
    prefersLocalInvocationVertexOutput = copy_src.prefersLocalInvocationVertexOutput;
    prefersLocalInvocationPrimitiveOutput = copy_src.prefersLocalInvocationPrimitiveOutput;
    prefersCompactVertexOutput = copy_src.prefersCompactVertexOutput;
    prefersCompactPrimitiveOutput = copy_src.prefersCompactPrimitiveOutput;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupCount[i] = copy_src.maxTaskWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src.maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupCount[i] = copy_src.maxMeshWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src.maxMeshWorkGroupSize[i];
    }
}

PhysicalDeviceMeshShaderPropertiesEXT& PhysicalDeviceMeshShaderPropertiesEXT::operator=(
    const PhysicalDeviceMeshShaderPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxTaskWorkGroupTotalCount = copy_src.maxTaskWorkGroupTotalCount;
    maxTaskWorkGroupInvocations = copy_src.maxTaskWorkGroupInvocations;
    maxTaskPayloadSize = copy_src.maxTaskPayloadSize;
    maxTaskSharedMemorySize = copy_src.maxTaskSharedMemorySize;
    maxTaskPayloadAndSharedMemorySize = copy_src.maxTaskPayloadAndSharedMemorySize;
    maxMeshWorkGroupTotalCount = copy_src.maxMeshWorkGroupTotalCount;
    maxMeshWorkGroupInvocations = copy_src.maxMeshWorkGroupInvocations;
    maxMeshSharedMemorySize = copy_src.maxMeshSharedMemorySize;
    maxMeshPayloadAndSharedMemorySize = copy_src.maxMeshPayloadAndSharedMemorySize;
    maxMeshOutputMemorySize = copy_src.maxMeshOutputMemorySize;
    maxMeshPayloadAndOutputMemorySize = copy_src.maxMeshPayloadAndOutputMemorySize;
    maxMeshOutputComponents = copy_src.maxMeshOutputComponents;
    maxMeshOutputVertices = copy_src.maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src.maxMeshOutputPrimitives;
    maxMeshOutputLayers = copy_src.maxMeshOutputLayers;
    maxMeshMultiviewViewCount = copy_src.maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src.meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src.meshOutputPerPrimitiveGranularity;
    maxPreferredTaskWorkGroupInvocations = copy_src.maxPreferredTaskWorkGroupInvocations;
    maxPreferredMeshWorkGroupInvocations = copy_src.maxPreferredMeshWorkGroupInvocations;
    prefersLocalInvocationVertexOutput = copy_src.prefersLocalInvocationVertexOutput;
    prefersLocalInvocationPrimitiveOutput = copy_src.prefersLocalInvocationPrimitiveOutput;
    prefersCompactVertexOutput = copy_src.prefersCompactVertexOutput;
    prefersCompactPrimitiveOutput = copy_src.prefersCompactPrimitiveOutput;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupCount[i] = copy_src.maxTaskWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src.maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupCount[i] = copy_src.maxMeshWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src.maxMeshWorkGroupSize[i];
    }

    return *this;
}

PhysicalDeviceMeshShaderPropertiesEXT::~PhysicalDeviceMeshShaderPropertiesEXT() { FreePnextChain(pNext); }

void PhysicalDeviceMeshShaderPropertiesEXT::initialize(const VkPhysicalDeviceMeshShaderPropertiesEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxTaskWorkGroupTotalCount = in_struct->maxTaskWorkGroupTotalCount;
    maxTaskWorkGroupInvocations = in_struct->maxTaskWorkGroupInvocations;
    maxTaskPayloadSize = in_struct->maxTaskPayloadSize;
    maxTaskSharedMemorySize = in_struct->maxTaskSharedMemorySize;
    maxTaskPayloadAndSharedMemorySize = in_struct->maxTaskPayloadAndSharedMemorySize;
    maxMeshWorkGroupTotalCount = in_struct->maxMeshWorkGroupTotalCount;
    maxMeshWorkGroupInvocations = in_struct->maxMeshWorkGroupInvocations;
    maxMeshSharedMemorySize = in_struct->maxMeshSharedMemorySize;
    maxMeshPayloadAndSharedMemorySize = in_struct->maxMeshPayloadAndSharedMemorySize;
    maxMeshOutputMemorySize = in_struct->maxMeshOutputMemorySize;
    maxMeshPayloadAndOutputMemorySize = in_struct->maxMeshPayloadAndOutputMemorySize;
    maxMeshOutputComponents = in_struct->maxMeshOutputComponents;
    maxMeshOutputVertices = in_struct->maxMeshOutputVertices;
    maxMeshOutputPrimitives = in_struct->maxMeshOutputPrimitives;
    maxMeshOutputLayers = in_struct->maxMeshOutputLayers;
    maxMeshMultiviewViewCount = in_struct->maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = in_struct->meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = in_struct->meshOutputPerPrimitiveGranularity;
    maxPreferredTaskWorkGroupInvocations = in_struct->maxPreferredTaskWorkGroupInvocations;
    maxPreferredMeshWorkGroupInvocations = in_struct->maxPreferredMeshWorkGroupInvocations;
    prefersLocalInvocationVertexOutput = in_struct->prefersLocalInvocationVertexOutput;
    prefersLocalInvocationPrimitiveOutput = in_struct->prefersLocalInvocationPrimitiveOutput;
    prefersCompactVertexOutput = in_struct->prefersCompactVertexOutput;
    prefersCompactPrimitiveOutput = in_struct->prefersCompactPrimitiveOutput;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupCount[i] = in_struct->maxTaskWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = in_struct->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupCount[i] = in_struct->maxMeshWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = in_struct->maxMeshWorkGroupSize[i];
    }
}

void PhysicalDeviceMeshShaderPropertiesEXT::initialize(const PhysicalDeviceMeshShaderPropertiesEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxTaskWorkGroupTotalCount = copy_src->maxTaskWorkGroupTotalCount;
    maxTaskWorkGroupInvocations = copy_src->maxTaskWorkGroupInvocations;
    maxTaskPayloadSize = copy_src->maxTaskPayloadSize;
    maxTaskSharedMemorySize = copy_src->maxTaskSharedMemorySize;
    maxTaskPayloadAndSharedMemorySize = copy_src->maxTaskPayloadAndSharedMemorySize;
    maxMeshWorkGroupTotalCount = copy_src->maxMeshWorkGroupTotalCount;
    maxMeshWorkGroupInvocations = copy_src->maxMeshWorkGroupInvocations;
    maxMeshSharedMemorySize = copy_src->maxMeshSharedMemorySize;
    maxMeshPayloadAndSharedMemorySize = copy_src->maxMeshPayloadAndSharedMemorySize;
    maxMeshOutputMemorySize = copy_src->maxMeshOutputMemorySize;
    maxMeshPayloadAndOutputMemorySize = copy_src->maxMeshPayloadAndOutputMemorySize;
    maxMeshOutputComponents = copy_src->maxMeshOutputComponents;
    maxMeshOutputVertices = copy_src->maxMeshOutputVertices;
    maxMeshOutputPrimitives = copy_src->maxMeshOutputPrimitives;
    maxMeshOutputLayers = copy_src->maxMeshOutputLayers;
    maxMeshMultiviewViewCount = copy_src->maxMeshMultiviewViewCount;
    meshOutputPerVertexGranularity = copy_src->meshOutputPerVertexGranularity;
    meshOutputPerPrimitiveGranularity = copy_src->meshOutputPerPrimitiveGranularity;
    maxPreferredTaskWorkGroupInvocations = copy_src->maxPreferredTaskWorkGroupInvocations;
    maxPreferredMeshWorkGroupInvocations = copy_src->maxPreferredMeshWorkGroupInvocations;
    prefersLocalInvocationVertexOutput = copy_src->prefersLocalInvocationVertexOutput;
    prefersLocalInvocationPrimitiveOutput = copy_src->prefersLocalInvocationPrimitiveOutput;
    prefersCompactVertexOutput = copy_src->prefersCompactVertexOutput;
    prefersCompactPrimitiveOutput = copy_src->prefersCompactPrimitiveOutput;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupCount[i] = copy_src->maxTaskWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxTaskWorkGroupSize[i] = copy_src->maxTaskWorkGroupSize[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupCount[i] = copy_src->maxMeshWorkGroupCount[i];
    }

    for (uint32_t i = 0; i < 3; ++i) {
        maxMeshWorkGroupSize[i] = copy_src->maxMeshWorkGroupSize[i];
    }
}

}  // namespace safe
}  // namespace vku

// NOLINTEND
