// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See safe_struct_generator.py for modifications

/***************************************************************************
 *
 * Copyright (c) 2015-2024 The Khronos Group Inc.
 * Copyright (c) 2015-2024 Valve Corporation
 * Copyright (c) 2015-2024 LunarG, Inc.
 * Copyright (c) 2015-2024 Google Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 ****************************************************************************/

// NOLINTBEGIN

#include <vulkan/utility/vk_safe_struct.hpp>
#include <vulkan/utility/vk_struct_helper.hpp>

#include <cstring>

namespace vku {

safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::safe_VkRenderingFragmentDensityMapAttachmentInfoEXT(
    const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageView(in_struct->imageView), imageLayout(in_struct->imageLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::safe_VkRenderingFragmentDensityMapAttachmentInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT), pNext(nullptr), imageView(), imageLayout() {}

safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::safe_VkRenderingFragmentDensityMapAttachmentInfoEXT(
    const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::operator=(
    const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::~safe_VkRenderingFragmentDensityMapAttachmentInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::initialize(
    const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    imageLayout = in_struct->imageLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkRenderingFragmentDensityMapAttachmentInfoEXT::initialize(
    const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    imageLayout = copy_src->imageLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSetDescriptorBufferOffsetsInfoEXT::safe_VkSetDescriptorBufferOffsetsInfoEXT(
    const VkSetDescriptorBufferOffsetsInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkSetDescriptorBufferOffsetsInfoEXT::safe_VkSetDescriptorBufferOffsetsInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT),
      pNext(nullptr),
      stageFlags(),
      layout(),
      firstSet(),
      setCount(),
      pBufferIndices(nullptr),
      pOffsets(nullptr) {}

safe_VkSetDescriptorBufferOffsetsInfoEXT::safe_VkSetDescriptorBufferOffsetsInfoEXT(
    const safe_VkSetDescriptorBufferOffsetsInfoEXT& copy_src) {
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

safe_VkSetDescriptorBufferOffsetsInfoEXT& safe_VkSetDescriptorBufferOffsetsInfoEXT::operator=(
    const safe_VkSetDescriptorBufferOffsetsInfoEXT& copy_src) {
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

safe_VkSetDescriptorBufferOffsetsInfoEXT::~safe_VkSetDescriptorBufferOffsetsInfoEXT() {
    if (pBufferIndices) delete[] pBufferIndices;
    if (pOffsets) delete[] pOffsets;
    FreePnextChain(pNext);
}

void safe_VkSetDescriptorBufferOffsetsInfoEXT::initialize(const VkSetDescriptorBufferOffsetsInfoEXT* in_struct,
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

void safe_VkSetDescriptorBufferOffsetsInfoEXT::initialize(const safe_VkSetDescriptorBufferOffsetsInfoEXT* copy_src,
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

safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(
    const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stageFlags(in_struct->stageFlags), layout(in_struct->layout), set(in_struct->set) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT), pNext(nullptr), stageFlags(), layout(), set() {}

safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(
    const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src) {
    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::operator=(
    const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::~safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT() { FreePnextChain(pNext); }

void safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::initialize(const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageFlags = in_struct->stageFlags;
    layout = in_struct->layout;
    set = in_struct->set;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT::initialize(
    const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageFlags = copy_src->stageFlags;
    layout = copy_src->layout;
    set = copy_src->set;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(
    const VkDebugReportCallbackCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), pfnCallback(in_struct->pfnCallback), pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT), pNext(nullptr), flags(), pfnCallback(), pUserData(nullptr) {}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(
    const safe_VkDebugReportCallbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnCallback = copy_src.pfnCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDebugReportCallbackCreateInfoEXT& safe_VkDebugReportCallbackCreateInfoEXT::operator=(
    const safe_VkDebugReportCallbackCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnCallback = copy_src.pfnCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDebugReportCallbackCreateInfoEXT::~safe_VkDebugReportCallbackCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pfnCallback = in_struct->pfnCallback;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const safe_VkDebugReportCallbackCreateInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pfnCallback = copy_src->pfnCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), objectType(in_struct->objectType), object(in_struct->object) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT), pNext(nullptr), objectType(), object(), pObjectName(nullptr) {}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);
}

safe_VkDebugMarkerObjectNameInfoEXT& safe_VkDebugMarkerObjectNameInfoEXT::operator=(
    const safe_VkDebugMarkerObjectNameInfoEXT& copy_src) {
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

safe_VkDebugMarkerObjectNameInfoEXT::~safe_VkDebugMarkerObjectNameInfoEXT() {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    object = in_struct->object;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const safe_VkDebugMarkerObjectNameInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    object = copy_src->object;
    pNext = SafePnextCopy(copy_src->pNext);
    pObjectName = SafeStringCopy(copy_src->pObjectName);
}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct,
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

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT),
      pNext(nullptr),
      objectType(),
      object(),
      tagName(),
      tagSize(),
      pTag(nullptr) {}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    object = copy_src.object;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDebugMarkerObjectTagInfoEXT& safe_VkDebugMarkerObjectTagInfoEXT::operator=(
    const safe_VkDebugMarkerObjectTagInfoEXT& copy_src) {
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

safe_VkDebugMarkerObjectTagInfoEXT::~safe_VkDebugMarkerObjectTagInfoEXT() { FreePnextChain(pNext); }

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct,
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

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const safe_VkDebugMarkerObjectTagInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    object = copy_src->object;
    tagName = copy_src->tagName;
    tagSize = copy_src->tagSize;
    pTag = copy_src->pTag;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct,
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

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT), pNext(nullptr), pMarkerName(nullptr) {}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pMarkerName = SafeStringCopy(copy_src.pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }
}

safe_VkDebugMarkerMarkerInfoEXT& safe_VkDebugMarkerMarkerInfoEXT::operator=(const safe_VkDebugMarkerMarkerInfoEXT& copy_src) {
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

safe_VkDebugMarkerMarkerInfoEXT::~safe_VkDebugMarkerMarkerInfoEXT() {
    if (pMarkerName) delete[] pMarkerName;
    FreePnextChain(pNext);
}

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const VkDebugMarkerMarkerInfoEXT* in_struct,
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

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const safe_VkDebugMarkerMarkerInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
    pMarkerName = SafeStringCopy(copy_src->pMarkerName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src->color[i];
    }
}

safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT(
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

safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT()
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

safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT(
    const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::~safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::initialize(
    const VkPhysicalDeviceTransformFeedbackPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkPipelineRasterizationStateStreamCreateInfoEXT::safe_VkPipelineRasterizationStateStreamCreateInfoEXT(
    const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), rasterizationStream(in_struct->rasterizationStream) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineRasterizationStateStreamCreateInfoEXT::safe_VkPipelineRasterizationStateStreamCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      rasterizationStream() {}

safe_VkPipelineRasterizationStateStreamCreateInfoEXT::safe_VkPipelineRasterizationStateStreamCreateInfoEXT(
    const safe_VkPipelineRasterizationStateStreamCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationStream = copy_src.rasterizationStream;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRasterizationStateStreamCreateInfoEXT& safe_VkPipelineRasterizationStateStreamCreateInfoEXT::operator=(
    const safe_VkPipelineRasterizationStateStreamCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationStream = copy_src.rasterizationStream;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineRasterizationStateStreamCreateInfoEXT::~safe_VkPipelineRasterizationStateStreamCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineRasterizationStateStreamCreateInfoEXT::initialize(
    const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rasterizationStream = in_struct->rasterizationStream;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRasterizationStateStreamCreateInfoEXT::initialize(
    const safe_VkPipelineRasterizationStateStreamCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rasterizationStream = copy_src->rasterizationStream;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT),
      pNext(nullptr),
      disabledValidationCheckCount(),
      pDisabledValidationChecks(nullptr) {}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& copy_src) {
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

safe_VkValidationFlagsEXT& safe_VkValidationFlagsEXT::operator=(const safe_VkValidationFlagsEXT& copy_src) {
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

safe_VkValidationFlagsEXT::~safe_VkValidationFlagsEXT() {
    if (pDisabledValidationChecks) delete[] pDisabledValidationChecks;
    FreePnextChain(pNext);
}

void safe_VkValidationFlagsEXT::initialize(const VkValidationFlagsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkValidationFlagsEXT::initialize(const safe_VkValidationFlagsEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkImageViewASTCDecodeModeEXT::safe_VkImageViewASTCDecodeModeEXT(const VkImageViewASTCDecodeModeEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), decodeMode(in_struct->decodeMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewASTCDecodeModeEXT::safe_VkImageViewASTCDecodeModeEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT), pNext(nullptr), decodeMode() {}

safe_VkImageViewASTCDecodeModeEXT::safe_VkImageViewASTCDecodeModeEXT(const safe_VkImageViewASTCDecodeModeEXT& copy_src) {
    sType = copy_src.sType;
    decodeMode = copy_src.decodeMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewASTCDecodeModeEXT& safe_VkImageViewASTCDecodeModeEXT::operator=(const safe_VkImageViewASTCDecodeModeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    decodeMode = copy_src.decodeMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewASTCDecodeModeEXT::~safe_VkImageViewASTCDecodeModeEXT() { FreePnextChain(pNext); }

void safe_VkImageViewASTCDecodeModeEXT::initialize(const VkImageViewASTCDecodeModeEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    decodeMode = in_struct->decodeMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewASTCDecodeModeEXT::initialize(const safe_VkImageViewASTCDecodeModeEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    decodeMode = copy_src->decodeMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT(
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

safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT),
      pNext(nullptr),
      defaultRobustnessStorageBuffers(),
      defaultRobustnessUniformBuffers(),
      defaultRobustnessVertexInputs(),
      defaultRobustnessImages() {}

safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT(
    const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    defaultRobustnessStorageBuffers = copy_src.defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = copy_src.defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = copy_src.defaultRobustnessVertexInputs;
    defaultRobustnessImages = copy_src.defaultRobustnessImages;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::operator=(
    const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& copy_src) {
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

safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::~safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::initialize(
    const VkPhysicalDevicePipelineRobustnessPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    defaultRobustnessStorageBuffers = in_struct->defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = in_struct->defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = in_struct->defaultRobustnessVertexInputs;
    defaultRobustnessImages = in_struct->defaultRobustnessImages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT::initialize(
    const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    defaultRobustnessStorageBuffers = copy_src->defaultRobustnessStorageBuffers;
    defaultRobustnessUniformBuffers = copy_src->defaultRobustnessUniformBuffers;
    defaultRobustnessVertexInputs = copy_src->defaultRobustnessVertexInputs;
    defaultRobustnessImages = copy_src->defaultRobustnessImages;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineRobustnessCreateInfoEXT::safe_VkPipelineRobustnessCreateInfoEXT(const VkPipelineRobustnessCreateInfoEXT* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffers(in_struct->storageBuffers),
      uniformBuffers(in_struct->uniformBuffers),
      vertexInputs(in_struct->vertexInputs),
      images(in_struct->images) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineRobustnessCreateInfoEXT::safe_VkPipelineRobustnessCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT),
      pNext(nullptr),
      storageBuffers(),
      uniformBuffers(),
      vertexInputs(),
      images() {}

safe_VkPipelineRobustnessCreateInfoEXT::safe_VkPipelineRobustnessCreateInfoEXT(
    const safe_VkPipelineRobustnessCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    storageBuffers = copy_src.storageBuffers;
    uniformBuffers = copy_src.uniformBuffers;
    vertexInputs = copy_src.vertexInputs;
    images = copy_src.images;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRobustnessCreateInfoEXT& safe_VkPipelineRobustnessCreateInfoEXT::operator=(
    const safe_VkPipelineRobustnessCreateInfoEXT& copy_src) {
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

safe_VkPipelineRobustnessCreateInfoEXT::~safe_VkPipelineRobustnessCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkPipelineRobustnessCreateInfoEXT::initialize(const VkPipelineRobustnessCreateInfoEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffers = in_struct->storageBuffers;
    uniformBuffers = in_struct->uniformBuffers;
    vertexInputs = in_struct->vertexInputs;
    images = in_struct->images;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRobustnessCreateInfoEXT::initialize(const safe_VkPipelineRobustnessCreateInfoEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffers = copy_src->storageBuffers;
    uniformBuffers = copy_src->uniformBuffers;
    vertexInputs = copy_src->vertexInputs;
    images = copy_src->images;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkConditionalRenderingBeginInfoEXT::safe_VkConditionalRenderingBeginInfoEXT(
    const VkConditionalRenderingBeginInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer), offset(in_struct->offset), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkConditionalRenderingBeginInfoEXT::safe_VkConditionalRenderingBeginInfoEXT()
    : sType(VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT), pNext(nullptr), buffer(), offset(), flags() {}

safe_VkConditionalRenderingBeginInfoEXT::safe_VkConditionalRenderingBeginInfoEXT(
    const safe_VkConditionalRenderingBeginInfoEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkConditionalRenderingBeginInfoEXT& safe_VkConditionalRenderingBeginInfoEXT::operator=(
    const safe_VkConditionalRenderingBeginInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkConditionalRenderingBeginInfoEXT::~safe_VkConditionalRenderingBeginInfoEXT() { FreePnextChain(pNext); }

void safe_VkConditionalRenderingBeginInfoEXT::initialize(const VkConditionalRenderingBeginInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkConditionalRenderingBeginInfoEXT::initialize(const safe_VkConditionalRenderingBeginInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT(
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), conditionalRenderingEnable(in_struct->conditionalRenderingEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT),
      pNext(nullptr),
      conditionalRenderingEnable() {}

safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT(
    const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& copy_src) {
    sType = copy_src.sType;
    conditionalRenderingEnable = copy_src.conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=(
    const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    conditionalRenderingEnable = copy_src.conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::~safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::initialize(
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    conditionalRenderingEnable = in_struct->conditionalRenderingEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT::initialize(
    const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    conditionalRenderingEnable = copy_src->conditionalRenderingEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct,
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

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT()
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

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& copy_src) {
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

safe_VkSurfaceCapabilities2EXT& safe_VkSurfaceCapabilities2EXT::operator=(const safe_VkSurfaceCapabilities2EXT& copy_src) {
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

safe_VkSurfaceCapabilities2EXT::~safe_VkSurfaceCapabilities2EXT() { FreePnextChain(pNext); }

void safe_VkSurfaceCapabilities2EXT::initialize(const VkSurfaceCapabilities2EXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkSurfaceCapabilities2EXT::initialize(const safe_VkSurfaceCapabilities2EXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), powerState(in_struct->powerState) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT), pNext(nullptr), powerState() {}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& copy_src) {
    sType = copy_src.sType;
    powerState = copy_src.powerState;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDisplayPowerInfoEXT& safe_VkDisplayPowerInfoEXT::operator=(const safe_VkDisplayPowerInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    powerState = copy_src.powerState;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDisplayPowerInfoEXT::~safe_VkDisplayPowerInfoEXT() { FreePnextChain(pNext); }

void safe_VkDisplayPowerInfoEXT::initialize(const VkDisplayPowerInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    powerState = in_struct->powerState;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDisplayPowerInfoEXT::initialize(const safe_VkDisplayPowerInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    powerState = copy_src->powerState;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceEvent(in_struct->deviceEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT), pNext(nullptr), deviceEvent() {}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    deviceEvent = copy_src.deviceEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceEventInfoEXT& safe_VkDeviceEventInfoEXT::operator=(const safe_VkDeviceEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceEvent = copy_src.deviceEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceEventInfoEXT::~safe_VkDeviceEventInfoEXT() { FreePnextChain(pNext); }

void safe_VkDeviceEventInfoEXT::initialize(const VkDeviceEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceEvent = in_struct->deviceEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceEventInfoEXT::initialize(const safe_VkDeviceEventInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceEvent = copy_src->deviceEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), displayEvent(in_struct->displayEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT), pNext(nullptr), displayEvent() {}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    displayEvent = copy_src.displayEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDisplayEventInfoEXT& safe_VkDisplayEventInfoEXT::operator=(const safe_VkDisplayEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayEvent = copy_src.displayEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDisplayEventInfoEXT::~safe_VkDisplayEventInfoEXT() { FreePnextChain(pNext); }

void safe_VkDisplayEventInfoEXT::initialize(const VkDisplayEventInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayEvent = in_struct->displayEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDisplayEventInfoEXT::initialize(const safe_VkDisplayEventInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayEvent = copy_src->displayEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), surfaceCounters(in_struct->surfaceCounters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT), pNext(nullptr), surfaceCounters() {}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    surfaceCounters = copy_src.surfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSwapchainCounterCreateInfoEXT& safe_VkSwapchainCounterCreateInfoEXT::operator=(
    const safe_VkSwapchainCounterCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    surfaceCounters = copy_src.surfaceCounters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSwapchainCounterCreateInfoEXT::~safe_VkSwapchainCounterCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const VkSwapchainCounterCreateInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    surfaceCounters = in_struct->surfaceCounters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const safe_VkSwapchainCounterCreateInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    surfaceCounters = copy_src->surfaceCounters;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(
    const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxDiscardRectangles(in_struct->maxDiscardRectangles) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT), pNext(nullptr), maxDiscardRectangles() {}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(
    const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxDiscardRectangles = copy_src.maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=(
    const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxDiscardRectangles = copy_src.maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxDiscardRectangles = in_struct->maxDiscardRectangles;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(
    const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxDiscardRectangles = copy_src->maxDiscardRectangles;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(
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

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      discardRectangleMode(),
      discardRectangleCount(),
      pDiscardRectangles(nullptr) {}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(
    const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& copy_src) {
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

safe_VkPipelineDiscardRectangleStateCreateInfoEXT& safe_VkPipelineDiscardRectangleStateCreateInfoEXT::operator=(
    const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& copy_src) {
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

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::~safe_VkPipelineDiscardRectangleStateCreateInfoEXT() {
    if (pDiscardRectangles) delete[] pDiscardRectangles;
    FreePnextChain(pNext);
}

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct,
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

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(
    const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(
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

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT()
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

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(
    const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::~safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(
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

void safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(
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

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      conservativeRasterizationMode(),
      extraPrimitiveOverestimationSize() {}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(
    const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    conservativeRasterizationMode = copy_src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src.extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=(
    const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    conservativeRasterizationMode = copy_src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src.extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::~safe_VkPipelineRasterizationConservativeStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    conservativeRasterizationMode = in_struct->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = in_struct->extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::initialize(
    const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    conservativeRasterizationMode = copy_src->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = copy_src->extraPrimitiveOverestimationSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT(
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), depthClipEnable(in_struct->depthClipEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      depthClipEnable() {}

safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT(
    const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::operator=(
    const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClipEnable = copy_src.depthClipEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::~safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthClipEnable = in_struct->depthClipEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT::initialize(
    const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthClipEnable = copy_src->depthClipEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT(const VkHdrMetadataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
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

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT()
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

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT(const safe_VkHdrMetadataEXT& copy_src) {
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

safe_VkHdrMetadataEXT& safe_VkHdrMetadataEXT::operator=(const safe_VkHdrMetadataEXT& copy_src) {
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

safe_VkHdrMetadataEXT::~safe_VkHdrMetadataEXT() { FreePnextChain(pNext); }

void safe_VkHdrMetadataEXT::initialize(const VkHdrMetadataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkHdrMetadataEXT::initialize(const safe_VkHdrMetadataEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkDebugUtilsLabelEXT::safe_VkDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pLabelName = SafeStringCopy(in_struct->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

safe_VkDebugUtilsLabelEXT::safe_VkDebugUtilsLabelEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT), pNext(nullptr), pLabelName(nullptr) {}

safe_VkDebugUtilsLabelEXT::safe_VkDebugUtilsLabelEXT(const safe_VkDebugUtilsLabelEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
    pLabelName = SafeStringCopy(copy_src.pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src.color[i];
    }
}

safe_VkDebugUtilsLabelEXT& safe_VkDebugUtilsLabelEXT::operator=(const safe_VkDebugUtilsLabelEXT& copy_src) {
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

safe_VkDebugUtilsLabelEXT::~safe_VkDebugUtilsLabelEXT() {
    if (pLabelName) delete[] pLabelName;
    FreePnextChain(pNext);
}

void safe_VkDebugUtilsLabelEXT::initialize(const VkDebugUtilsLabelEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLabelName) delete[] pLabelName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pLabelName = SafeStringCopy(in_struct->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = in_struct->color[i];
    }
}

void safe_VkDebugUtilsLabelEXT::initialize(const safe_VkDebugUtilsLabelEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
    pLabelName = SafeStringCopy(copy_src->pLabelName);

    for (uint32_t i = 0; i < 4; ++i) {
        color[i] = copy_src->color[i];
    }
}

safe_VkDebugUtilsObjectNameInfoEXT::safe_VkDebugUtilsObjectNameInfoEXT(const VkDebugUtilsObjectNameInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), objectType(in_struct->objectType), objectHandle(in_struct->objectHandle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

safe_VkDebugUtilsObjectNameInfoEXT::safe_VkDebugUtilsObjectNameInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT),
      pNext(nullptr),
      objectType(),
      objectHandle(),
      pObjectName(nullptr) {}

safe_VkDebugUtilsObjectNameInfoEXT::safe_VkDebugUtilsObjectNameInfoEXT(const safe_VkDebugUtilsObjectNameInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    pNext = SafePnextCopy(copy_src.pNext);
    pObjectName = SafeStringCopy(copy_src.pObjectName);
}

safe_VkDebugUtilsObjectNameInfoEXT& safe_VkDebugUtilsObjectNameInfoEXT::operator=(
    const safe_VkDebugUtilsObjectNameInfoEXT& copy_src) {
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

safe_VkDebugUtilsObjectNameInfoEXT::~safe_VkDebugUtilsObjectNameInfoEXT() {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
}

void safe_VkDebugUtilsObjectNameInfoEXT::initialize(const VkDebugUtilsObjectNameInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pObjectName) delete[] pObjectName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    objectType = in_struct->objectType;
    objectHandle = in_struct->objectHandle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pObjectName = SafeStringCopy(in_struct->pObjectName);
}

void safe_VkDebugUtilsObjectNameInfoEXT::initialize(const safe_VkDebugUtilsObjectNameInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    objectHandle = copy_src->objectHandle;
    pNext = SafePnextCopy(copy_src->pNext);
    pObjectName = SafeStringCopy(copy_src->pObjectName);
}

safe_VkDebugUtilsMessengerCallbackDataEXT::safe_VkDebugUtilsMessengerCallbackDataEXT(
    const VkDebugUtilsMessengerCallbackDataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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
        pQueueLabels = new safe_VkDebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&in_struct->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && in_struct->pCmdBufLabels) {
        pCmdBufLabels = new safe_VkDebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&in_struct->pCmdBufLabels[i]);
        }
    }
    if (objectCount && in_struct->pObjects) {
        pObjects = new safe_VkDebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&in_struct->pObjects[i]);
        }
    }
}

safe_VkDebugUtilsMessengerCallbackDataEXT::safe_VkDebugUtilsMessengerCallbackDataEXT()
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

safe_VkDebugUtilsMessengerCallbackDataEXT::safe_VkDebugUtilsMessengerCallbackDataEXT(
    const safe_VkDebugUtilsMessengerCallbackDataEXT& copy_src) {
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
        pQueueLabels = new safe_VkDebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src.pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src.pCmdBufLabels) {
        pCmdBufLabels = new safe_VkDebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src.pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src.pObjects) {
        pObjects = new safe_VkDebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src.pObjects[i]);
        }
    }
}

safe_VkDebugUtilsMessengerCallbackDataEXT& safe_VkDebugUtilsMessengerCallbackDataEXT::operator=(
    const safe_VkDebugUtilsMessengerCallbackDataEXT& copy_src) {
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
        pQueueLabels = new safe_VkDebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src.pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src.pCmdBufLabels) {
        pCmdBufLabels = new safe_VkDebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src.pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src.pObjects) {
        pObjects = new safe_VkDebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src.pObjects[i]);
        }
    }

    return *this;
}

safe_VkDebugUtilsMessengerCallbackDataEXT::~safe_VkDebugUtilsMessengerCallbackDataEXT() {
    if (pMessageIdName) delete[] pMessageIdName;
    if (pMessage) delete[] pMessage;
    if (pQueueLabels) delete[] pQueueLabels;
    if (pCmdBufLabels) delete[] pCmdBufLabels;
    if (pObjects) delete[] pObjects;
    FreePnextChain(pNext);
}

void safe_VkDebugUtilsMessengerCallbackDataEXT::initialize(const VkDebugUtilsMessengerCallbackDataEXT* in_struct,
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
        pQueueLabels = new safe_VkDebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&in_struct->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && in_struct->pCmdBufLabels) {
        pCmdBufLabels = new safe_VkDebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&in_struct->pCmdBufLabels[i]);
        }
    }
    if (objectCount && in_struct->pObjects) {
        pObjects = new safe_VkDebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&in_struct->pObjects[i]);
        }
    }
}

void safe_VkDebugUtilsMessengerCallbackDataEXT::initialize(const safe_VkDebugUtilsMessengerCallbackDataEXT* copy_src,
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
        pQueueLabels = new safe_VkDebugUtilsLabelEXT[queueLabelCount];
        for (uint32_t i = 0; i < queueLabelCount; ++i) {
            pQueueLabels[i].initialize(&copy_src->pQueueLabels[i]);
        }
    }
    if (cmdBufLabelCount && copy_src->pCmdBufLabels) {
        pCmdBufLabels = new safe_VkDebugUtilsLabelEXT[cmdBufLabelCount];
        for (uint32_t i = 0; i < cmdBufLabelCount; ++i) {
            pCmdBufLabels[i].initialize(&copy_src->pCmdBufLabels[i]);
        }
    }
    if (objectCount && copy_src->pObjects) {
        pObjects = new safe_VkDebugUtilsObjectNameInfoEXT[objectCount];
        for (uint32_t i = 0; i < objectCount; ++i) {
            pObjects[i].initialize(&copy_src->pObjects[i]);
        }
    }
}

safe_VkDebugUtilsMessengerCreateInfoEXT::safe_VkDebugUtilsMessengerCreateInfoEXT(
    const VkDebugUtilsMessengerCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkDebugUtilsMessengerCreateInfoEXT::safe_VkDebugUtilsMessengerCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      messageSeverity(),
      messageType(),
      pfnUserCallback(),
      pUserData(nullptr) {}

safe_VkDebugUtilsMessengerCreateInfoEXT::safe_VkDebugUtilsMessengerCreateInfoEXT(
    const safe_VkDebugUtilsMessengerCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    messageSeverity = copy_src.messageSeverity;
    messageType = copy_src.messageType;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDebugUtilsMessengerCreateInfoEXT& safe_VkDebugUtilsMessengerCreateInfoEXT::operator=(
    const safe_VkDebugUtilsMessengerCreateInfoEXT& copy_src) {
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

safe_VkDebugUtilsMessengerCreateInfoEXT::~safe_VkDebugUtilsMessengerCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkDebugUtilsMessengerCreateInfoEXT::initialize(const VkDebugUtilsMessengerCreateInfoEXT* in_struct,
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

void safe_VkDebugUtilsMessengerCreateInfoEXT::initialize(const safe_VkDebugUtilsMessengerCreateInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    messageSeverity = copy_src->messageSeverity;
    messageType = copy_src->messageType;
    pfnUserCallback = copy_src->pfnUserCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDebugUtilsObjectTagInfoEXT::safe_VkDebugUtilsObjectTagInfoEXT(const VkDebugUtilsObjectTagInfoEXT* in_struct,
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

safe_VkDebugUtilsObjectTagInfoEXT::safe_VkDebugUtilsObjectTagInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT),
      pNext(nullptr),
      objectType(),
      objectHandle(),
      tagName(),
      tagSize(),
      pTag(nullptr) {}

safe_VkDebugUtilsObjectTagInfoEXT::safe_VkDebugUtilsObjectTagInfoEXT(const safe_VkDebugUtilsObjectTagInfoEXT& copy_src) {
    sType = copy_src.sType;
    objectType = copy_src.objectType;
    objectHandle = copy_src.objectHandle;
    tagName = copy_src.tagName;
    tagSize = copy_src.tagSize;
    pTag = copy_src.pTag;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDebugUtilsObjectTagInfoEXT& safe_VkDebugUtilsObjectTagInfoEXT::operator=(const safe_VkDebugUtilsObjectTagInfoEXT& copy_src) {
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

safe_VkDebugUtilsObjectTagInfoEXT::~safe_VkDebugUtilsObjectTagInfoEXT() { FreePnextChain(pNext); }

void safe_VkDebugUtilsObjectTagInfoEXT::initialize(const VkDebugUtilsObjectTagInfoEXT* in_struct,
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

void safe_VkDebugUtilsObjectTagInfoEXT::initialize(const safe_VkDebugUtilsObjectTagInfoEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    objectType = copy_src->objectType;
    objectHandle = copy_src->objectHandle;
    tagName = copy_src->tagName;
    tagSize = copy_src->tagSize;
    pTag = copy_src->pTag;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* in_struct,
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

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT),
      pNext(nullptr),
      sampleLocationsPerPixel(),
      sampleLocationGridSize(),
      sampleLocationsCount(),
      pSampleLocations(nullptr) {}

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT(const safe_VkSampleLocationsInfoEXT& copy_src) {
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

safe_VkSampleLocationsInfoEXT& safe_VkSampleLocationsInfoEXT::operator=(const safe_VkSampleLocationsInfoEXT& copy_src) {
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

safe_VkSampleLocationsInfoEXT::~safe_VkSampleLocationsInfoEXT() {
    if (pSampleLocations) delete[] pSampleLocations;
    FreePnextChain(pNext);
}

void safe_VkSampleLocationsInfoEXT::initialize(const VkSampleLocationsInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkSampleLocationsInfoEXT::initialize(const safe_VkSampleLocationsInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT(
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

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT),
      pNext(nullptr),
      attachmentInitialSampleLocationsCount(),
      pAttachmentInitialSampleLocations(nullptr),
      postSubpassSampleLocationsCount(),
      pPostSubpassSampleLocations(nullptr) {}

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT(
    const safe_VkRenderPassSampleLocationsBeginInfoEXT& copy_src) {
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

safe_VkRenderPassSampleLocationsBeginInfoEXT& safe_VkRenderPassSampleLocationsBeginInfoEXT::operator=(
    const safe_VkRenderPassSampleLocationsBeginInfoEXT& copy_src) {
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

safe_VkRenderPassSampleLocationsBeginInfoEXT::~safe_VkRenderPassSampleLocationsBeginInfoEXT() {
    if (pAttachmentInitialSampleLocations) delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations) delete[] pPostSubpassSampleLocations;
    FreePnextChain(pNext);
}

void safe_VkRenderPassSampleLocationsBeginInfoEXT::initialize(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct,
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

void safe_VkRenderPassSampleLocationsBeginInfoEXT::initialize(const safe_VkRenderPassSampleLocationsBeginInfoEXT* copy_src,
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

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT(
    const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      sampleLocationsEnable(in_struct->sampleLocationsEnable),
      sampleLocationsInfo(&in_struct->sampleLocationsInfo) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT), pNext(nullptr), sampleLocationsEnable() {}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT(
    const safe_VkPipelineSampleLocationsStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    sampleLocationsEnable = copy_src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src.sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT& safe_VkPipelineSampleLocationsStateCreateInfoEXT::operator=(
    const safe_VkPipelineSampleLocationsStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleLocationsEnable = copy_src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src.sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::~safe_VkPipelineSampleLocationsStateCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkPipelineSampleLocationsStateCreateInfoEXT::initialize(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleLocationsEnable = in_struct->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&in_struct->sampleLocationsInfo);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineSampleLocationsStateCreateInfoEXT::initialize(const safe_VkPipelineSampleLocationsStateCreateInfoEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleLocationsEnable = copy_src->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&copy_src->sampleLocationsInfo);
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(
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

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT),
      pNext(nullptr),
      sampleLocationSampleCounts(),
      maxSampleLocationGridSize(),
      sampleLocationSubPixelBits(),
      variableSampleLocations() {}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(
    const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::~safe_VkPhysicalDeviceSampleLocationsPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::initialize(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxSampleLocationGridSize(in_struct->maxSampleLocationGridSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT), pNext(nullptr), maxSampleLocationGridSize() {}

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT(const safe_VkMultisamplePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMultisamplePropertiesEXT& safe_VkMultisamplePropertiesEXT::operator=(const safe_VkMultisamplePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxSampleLocationGridSize = copy_src.maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMultisamplePropertiesEXT::~safe_VkMultisamplePropertiesEXT() { FreePnextChain(pNext); }

void safe_VkMultisamplePropertiesEXT::initialize(const VkMultisamplePropertiesEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxSampleLocationGridSize = in_struct->maxSampleLocationGridSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMultisamplePropertiesEXT::initialize(const safe_VkMultisamplePropertiesEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxSampleLocationGridSize = copy_src->maxSampleLocationGridSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(
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

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT),
      pNext(nullptr),
      advancedBlendMaxColorAttachments(),
      advancedBlendIndependentBlend(),
      advancedBlendNonPremultipliedSrcColor(),
      advancedBlendNonPremultipliedDstColor(),
      advancedBlendCorrelatedOverlap(),
      advancedBlendAllOperations() {}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(
    const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    advancedBlendMaxColorAttachments = copy_src.advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = copy_src.advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = copy_src.advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = copy_src.advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = copy_src.advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = copy_src.advancedBlendAllOperations;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::~safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(
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

void safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    advancedBlendMaxColorAttachments = copy_src->advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = copy_src->advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = copy_src->advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = copy_src->advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = copy_src->advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = copy_src->advancedBlendAllOperations;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcPremultiplied(in_struct->srcPremultiplied),
      dstPremultiplied(in_struct->dstPremultiplied),
      blendOverlap(in_struct->blendOverlap) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      srcPremultiplied(),
      dstPremultiplied(),
      blendOverlap() {}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(
    const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    srcPremultiplied = copy_src.srcPremultiplied;
    dstPremultiplied = copy_src.dstPremultiplied;
    blendOverlap = copy_src.blendOverlap;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=(
    const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcPremultiplied = copy_src.srcPremultiplied;
    dstPremultiplied = copy_src.dstPremultiplied;
    blendOverlap = copy_src.blendOverlap;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::~safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::initialize(
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcPremultiplied = in_struct->srcPremultiplied;
    dstPremultiplied = in_struct->dstPremultiplied;
    blendOverlap = in_struct->blendOverlap;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::initialize(
    const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcPremultiplied = copy_src->srcPremultiplied;
    dstPremultiplied = copy_src->dstPremultiplied;
    blendOverlap = copy_src->blendOverlap;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDrmFormatModifierPropertiesListEXT::safe_VkDrmFormatModifierPropertiesListEXT(
    const VkDrmFormatModifierPropertiesListEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkDrmFormatModifierPropertiesListEXT::safe_VkDrmFormatModifierPropertiesListEXT()
    : sType(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifierProperties(nullptr) {}

safe_VkDrmFormatModifierPropertiesListEXT::safe_VkDrmFormatModifierPropertiesListEXT(
    const safe_VkDrmFormatModifierPropertiesListEXT& copy_src) {
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

safe_VkDrmFormatModifierPropertiesListEXT& safe_VkDrmFormatModifierPropertiesListEXT::operator=(
    const safe_VkDrmFormatModifierPropertiesListEXT& copy_src) {
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

safe_VkDrmFormatModifierPropertiesListEXT::~safe_VkDrmFormatModifierPropertiesListEXT() {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
}

void safe_VkDrmFormatModifierPropertiesListEXT::initialize(const VkDrmFormatModifierPropertiesListEXT* in_struct,
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

void safe_VkDrmFormatModifierPropertiesListEXT::initialize(const safe_VkDrmFormatModifierPropertiesListEXT* copy_src,
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

safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(
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

safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT),
      pNext(nullptr),
      drmFormatModifier(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr) {}

safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(
    const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src) {
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

safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::operator=(
    const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src) {
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

safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::~safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::initialize(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* in_struct,
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

void safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::initialize(
    const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkImageDrmFormatModifierListCreateInfoEXT::safe_VkImageDrmFormatModifierListCreateInfoEXT(
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

safe_VkImageDrmFormatModifierListCreateInfoEXT::safe_VkImageDrmFormatModifierListCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifiers(nullptr) {}

safe_VkImageDrmFormatModifierListCreateInfoEXT::safe_VkImageDrmFormatModifierListCreateInfoEXT(
    const safe_VkImageDrmFormatModifierListCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifierCount = copy_src.drmFormatModifierCount;
    pDrmFormatModifiers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDrmFormatModifiers) {
        pDrmFormatModifiers = new uint64_t[copy_src.drmFormatModifierCount];
        memcpy((void*)pDrmFormatModifiers, (void*)copy_src.pDrmFormatModifiers, sizeof(uint64_t) * copy_src.drmFormatModifierCount);
    }
}

safe_VkImageDrmFormatModifierListCreateInfoEXT& safe_VkImageDrmFormatModifierListCreateInfoEXT::operator=(
    const safe_VkImageDrmFormatModifierListCreateInfoEXT& copy_src) {
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

safe_VkImageDrmFormatModifierListCreateInfoEXT::~safe_VkImageDrmFormatModifierListCreateInfoEXT() {
    if (pDrmFormatModifiers) delete[] pDrmFormatModifiers;
    FreePnextChain(pNext);
}

void safe_VkImageDrmFormatModifierListCreateInfoEXT::initialize(const VkImageDrmFormatModifierListCreateInfoEXT* in_struct,
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

void safe_VkImageDrmFormatModifierListCreateInfoEXT::initialize(const safe_VkImageDrmFormatModifierListCreateInfoEXT* copy_src,
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

safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::safe_VkImageDrmFormatModifierExplicitCreateInfoEXT(
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

safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::safe_VkImageDrmFormatModifierExplicitCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT),
      pNext(nullptr),
      drmFormatModifier(),
      drmFormatModifierPlaneCount(),
      pPlaneLayouts(nullptr) {}

safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::safe_VkImageDrmFormatModifierExplicitCreateInfoEXT(
    const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& copy_src) {
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

safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::operator=(
    const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& copy_src) {
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

safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::~safe_VkImageDrmFormatModifierExplicitCreateInfoEXT() {
    if (pPlaneLayouts) delete[] pPlaneLayouts;
    FreePnextChain(pNext);
}

void safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::initialize(const VkImageDrmFormatModifierExplicitCreateInfoEXT* in_struct,
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

void safe_VkImageDrmFormatModifierExplicitCreateInfoEXT::initialize(
    const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkImageDrmFormatModifierPropertiesEXT::safe_VkImageDrmFormatModifierPropertiesEXT(
    const VkImageDrmFormatModifierPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), drmFormatModifier(in_struct->drmFormatModifier) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageDrmFormatModifierPropertiesEXT::safe_VkImageDrmFormatModifierPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT), pNext(nullptr), drmFormatModifier() {}

safe_VkImageDrmFormatModifierPropertiesEXT::safe_VkImageDrmFormatModifierPropertiesEXT(
    const safe_VkImageDrmFormatModifierPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageDrmFormatModifierPropertiesEXT& safe_VkImageDrmFormatModifierPropertiesEXT::operator=(
    const safe_VkImageDrmFormatModifierPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    drmFormatModifier = copy_src.drmFormatModifier;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageDrmFormatModifierPropertiesEXT::~safe_VkImageDrmFormatModifierPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkImageDrmFormatModifierPropertiesEXT::initialize(const VkImageDrmFormatModifierPropertiesEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    drmFormatModifier = in_struct->drmFormatModifier;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageDrmFormatModifierPropertiesEXT::initialize(const safe_VkImageDrmFormatModifierPropertiesEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    drmFormatModifier = copy_src->drmFormatModifier;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDrmFormatModifierPropertiesList2EXT::safe_VkDrmFormatModifierPropertiesList2EXT(
    const VkDrmFormatModifierPropertiesList2EXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkDrmFormatModifierPropertiesList2EXT::safe_VkDrmFormatModifierPropertiesList2EXT()
    : sType(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT),
      pNext(nullptr),
      drmFormatModifierCount(),
      pDrmFormatModifierProperties(nullptr) {}

safe_VkDrmFormatModifierPropertiesList2EXT::safe_VkDrmFormatModifierPropertiesList2EXT(
    const safe_VkDrmFormatModifierPropertiesList2EXT& copy_src) {
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

safe_VkDrmFormatModifierPropertiesList2EXT& safe_VkDrmFormatModifierPropertiesList2EXT::operator=(
    const safe_VkDrmFormatModifierPropertiesList2EXT& copy_src) {
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

safe_VkDrmFormatModifierPropertiesList2EXT::~safe_VkDrmFormatModifierPropertiesList2EXT() {
    if (pDrmFormatModifierProperties) delete[] pDrmFormatModifierProperties;
    FreePnextChain(pNext);
}

void safe_VkDrmFormatModifierPropertiesList2EXT::initialize(const VkDrmFormatModifierPropertiesList2EXT* in_struct,
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

void safe_VkDrmFormatModifierPropertiesList2EXT::initialize(const safe_VkDrmFormatModifierPropertiesList2EXT* copy_src,
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

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT(const VkValidationCacheCreateInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      initialDataSize(in_struct->initialDataSize),
      pInitialData(in_struct->pInitialData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      initialDataSize(),
      pInitialData(nullptr) {}

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT(const safe_VkValidationCacheCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkValidationCacheCreateInfoEXT& safe_VkValidationCacheCreateInfoEXT::operator=(
    const safe_VkValidationCacheCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkValidationCacheCreateInfoEXT::~safe_VkValidationCacheCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkValidationCacheCreateInfoEXT::initialize(const VkValidationCacheCreateInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkValidationCacheCreateInfoEXT::initialize(const safe_VkValidationCacheCreateInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    initialDataSize = copy_src->initialDataSize;
    pInitialData = copy_src->pInitialData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT(
    const VkShaderModuleValidationCacheCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), validationCache(in_struct->validationCache) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT), pNext(nullptr), validationCache() {}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT(
    const safe_VkShaderModuleValidationCacheCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    validationCache = copy_src.validationCache;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkShaderModuleValidationCacheCreateInfoEXT& safe_VkShaderModuleValidationCacheCreateInfoEXT::operator=(
    const safe_VkShaderModuleValidationCacheCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    validationCache = copy_src.validationCache;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::~safe_VkShaderModuleValidationCacheCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkShaderModuleValidationCacheCreateInfoEXT::initialize(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    validationCache = in_struct->validationCache;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkShaderModuleValidationCacheCreateInfoEXT::initialize(const safe_VkShaderModuleValidationCacheCreateInfoEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    validationCache = copy_src->validationCache;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::safe_VkPhysicalDeviceImageViewImageFormatInfoEXT(
    const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageViewType(in_struct->imageViewType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::safe_VkPhysicalDeviceImageViewImageFormatInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT), pNext(nullptr), imageViewType() {}

safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::safe_VkPhysicalDeviceImageViewImageFormatInfoEXT(
    const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageViewType = copy_src.imageViewType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::operator=(
    const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageViewType = copy_src.imageViewType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::~safe_VkPhysicalDeviceImageViewImageFormatInfoEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::initialize(const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageViewType = in_struct->imageViewType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceImageViewImageFormatInfoEXT::initialize(const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageViewType = copy_src->imageViewType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkFilterCubicImageViewImageFormatPropertiesEXT::safe_VkFilterCubicImageViewImageFormatPropertiesEXT(
    const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), filterCubic(in_struct->filterCubic), filterCubicMinmax(in_struct->filterCubicMinmax) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkFilterCubicImageViewImageFormatPropertiesEXT::safe_VkFilterCubicImageViewImageFormatPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT),
      pNext(nullptr),
      filterCubic(),
      filterCubicMinmax() {}

safe_VkFilterCubicImageViewImageFormatPropertiesEXT::safe_VkFilterCubicImageViewImageFormatPropertiesEXT(
    const safe_VkFilterCubicImageViewImageFormatPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    filterCubic = copy_src.filterCubic;
    filterCubicMinmax = copy_src.filterCubicMinmax;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkFilterCubicImageViewImageFormatPropertiesEXT& safe_VkFilterCubicImageViewImageFormatPropertiesEXT::operator=(
    const safe_VkFilterCubicImageViewImageFormatPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    filterCubic = copy_src.filterCubic;
    filterCubicMinmax = copy_src.filterCubicMinmax;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkFilterCubicImageViewImageFormatPropertiesEXT::~safe_VkFilterCubicImageViewImageFormatPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkFilterCubicImageViewImageFormatPropertiesEXT::initialize(
    const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    filterCubic = in_struct->filterCubic;
    filterCubicMinmax = in_struct->filterCubicMinmax;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkFilterCubicImageViewImageFormatPropertiesEXT::initialize(
    const safe_VkFilterCubicImageViewImageFormatPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    filterCubic = copy_src->filterCubic;
    filterCubicMinmax = copy_src->filterCubicMinmax;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), pHostPointer(in_struct->pHostPointer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT), pNext(nullptr), handleType(), pHostPointer(nullptr) {}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT(
    const safe_VkImportMemoryHostPointerInfoEXT& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pHostPointer = copy_src.pHostPointer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImportMemoryHostPointerInfoEXT& safe_VkImportMemoryHostPointerInfoEXT::operator=(
    const safe_VkImportMemoryHostPointerInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pHostPointer = copy_src.pHostPointer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImportMemoryHostPointerInfoEXT::~safe_VkImportMemoryHostPointerInfoEXT() { FreePnextChain(pNext); }

void safe_VkImportMemoryHostPointerInfoEXT::initialize(const VkImportMemoryHostPointerInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pHostPointer = in_struct->pHostPointer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImportMemoryHostPointerInfoEXT::initialize(const safe_VkImportMemoryHostPointerInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pHostPointer = copy_src->pHostPointer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT), pNext(nullptr), memoryTypeBits() {}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT(
    const safe_VkMemoryHostPointerPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryHostPointerPropertiesEXT& safe_VkMemoryHostPointerPropertiesEXT::operator=(
    const safe_VkMemoryHostPointerPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryHostPointerPropertiesEXT::~safe_VkMemoryHostPointerPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkMemoryHostPointerPropertiesEXT::initialize(const VkMemoryHostPointerPropertiesEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryHostPointerPropertiesEXT::initialize(const safe_VkMemoryHostPointerPropertiesEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minImportedHostPointerAlignment(in_struct->minImportedHostPointerAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT),
      pNext(nullptr),
      minImportedHostPointerAlignment() {}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(
    const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minImportedHostPointerAlignment = copy_src.minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minImportedHostPointerAlignment = copy_src.minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::~safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minImportedHostPointerAlignment = in_struct->minImportedHostPointerAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minImportedHostPointerAlignment = copy_src->minImportedHostPointerAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), maxVertexAttribDivisor(in_struct->maxVertexAttribDivisor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT), pNext(nullptr), maxVertexAttribDivisor() {}

safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(
    const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::~safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::initialize(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxVertexAttribDivisor = in_struct->maxVertexAttribDivisor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxVertexAttribDivisor = copy_src->maxVertexAttribDivisor;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::safe_VkPhysicalDevicePCIBusInfoPropertiesEXT(
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

safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::safe_VkPhysicalDevicePCIBusInfoPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT),
      pNext(nullptr),
      pciDomain(),
      pciBus(),
      pciDevice(),
      pciFunction() {}

safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::safe_VkPhysicalDevicePCIBusInfoPropertiesEXT(
    const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pciDomain = copy_src.pciDomain;
    pciBus = copy_src.pciBus;
    pciDevice = copy_src.pciDevice;
    pciFunction = copy_src.pciFunction;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::operator=(
    const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& copy_src) {
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

safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::~safe_VkPhysicalDevicePCIBusInfoPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::initialize(const VkPhysicalDevicePCIBusInfoPropertiesEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pciDomain = in_struct->pciDomain;
    pciBus = in_struct->pciBus;
    pciDevice = in_struct->pciDevice;
    pciFunction = in_struct->pciFunction;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevicePCIBusInfoPropertiesEXT::initialize(const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pciDomain = copy_src->pciDomain;
    pciBus = copy_src->pciBus;
    pciDevice = copy_src->pciDevice;
    pciFunction = copy_src->pciFunction;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minFragmentDensityTexelSize(in_struct->minFragmentDensityTexelSize),
      maxFragmentDensityTexelSize(in_struct->maxFragmentDensityTexelSize),
      fragmentDensityInvocations(in_struct->fragmentDensityInvocations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT),
      pNext(nullptr),
      minFragmentDensityTexelSize(),
      maxFragmentDensityTexelSize(),
      fragmentDensityInvocations() {}

safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(
    const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minFragmentDensityTexelSize = copy_src.minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src.maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src.fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minFragmentDensityTexelSize = copy_src.minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src.maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src.fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::~safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::initialize(
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minFragmentDensityTexelSize = in_struct->minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = in_struct->maxFragmentDensityTexelSize;
    fragmentDensityInvocations = in_struct->fragmentDensityInvocations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minFragmentDensityTexelSize = copy_src->minFragmentDensityTexelSize;
    maxFragmentDensityTexelSize = copy_src->maxFragmentDensityTexelSize;
    fragmentDensityInvocations = copy_src->fragmentDensityInvocations;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassFragmentDensityMapCreateInfoEXT::safe_VkRenderPassFragmentDensityMapCreateInfoEXT(
    const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fragmentDensityMapAttachment(in_struct->fragmentDensityMapAttachment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkRenderPassFragmentDensityMapCreateInfoEXT::safe_VkRenderPassFragmentDensityMapCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT), pNext(nullptr), fragmentDensityMapAttachment() {}

safe_VkRenderPassFragmentDensityMapCreateInfoEXT::safe_VkRenderPassFragmentDensityMapCreateInfoEXT(
    const safe_VkRenderPassFragmentDensityMapCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    fragmentDensityMapAttachment = copy_src.fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkRenderPassFragmentDensityMapCreateInfoEXT& safe_VkRenderPassFragmentDensityMapCreateInfoEXT::operator=(
    const safe_VkRenderPassFragmentDensityMapCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentDensityMapAttachment = copy_src.fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkRenderPassFragmentDensityMapCreateInfoEXT::~safe_VkRenderPassFragmentDensityMapCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkRenderPassFragmentDensityMapCreateInfoEXT::initialize(const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentDensityMapAttachment = in_struct->fragmentDensityMapAttachment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkRenderPassFragmentDensityMapCreateInfoEXT::initialize(const safe_VkRenderPassFragmentDensityMapCreateInfoEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentDensityMapAttachment = copy_src->fragmentDensityMapAttachment;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT(
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

safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT), pNext(nullptr) {}

safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT(
    const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapBudget[i] = copy_src.heapBudget[i];
    }

    for (uint32_t i = 0; i < VK_MAX_MEMORY_HEAPS; ++i) {
        heapUsage[i] = copy_src.heapUsage[i];
    }
}

safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::~safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::initialize(const VkPhysicalDeviceMemoryBudgetPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT::initialize(const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT* copy_src,
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

safe_VkMemoryPriorityAllocateInfoEXT::safe_VkMemoryPriorityAllocateInfoEXT(const VkMemoryPriorityAllocateInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), priority(in_struct->priority) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryPriorityAllocateInfoEXT::safe_VkMemoryPriorityAllocateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT), pNext(nullptr), priority() {}

safe_VkMemoryPriorityAllocateInfoEXT::safe_VkMemoryPriorityAllocateInfoEXT(const safe_VkMemoryPriorityAllocateInfoEXT& copy_src) {
    sType = copy_src.sType;
    priority = copy_src.priority;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryPriorityAllocateInfoEXT& safe_VkMemoryPriorityAllocateInfoEXT::operator=(
    const safe_VkMemoryPriorityAllocateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    priority = copy_src.priority;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryPriorityAllocateInfoEXT::~safe_VkMemoryPriorityAllocateInfoEXT() { FreePnextChain(pNext); }

void safe_VkMemoryPriorityAllocateInfoEXT::initialize(const VkMemoryPriorityAllocateInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    priority = in_struct->priority;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryPriorityAllocateInfoEXT::initialize(const safe_VkMemoryPriorityAllocateInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    priority = copy_src->priority;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferDeviceAddressCreateInfoEXT::safe_VkBufferDeviceAddressCreateInfoEXT(
    const VkBufferDeviceAddressCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceAddress(in_struct->deviceAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferDeviceAddressCreateInfoEXT::safe_VkBufferDeviceAddressCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT), pNext(nullptr), deviceAddress() {}

safe_VkBufferDeviceAddressCreateInfoEXT::safe_VkBufferDeviceAddressCreateInfoEXT(
    const safe_VkBufferDeviceAddressCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferDeviceAddressCreateInfoEXT& safe_VkBufferDeviceAddressCreateInfoEXT::operator=(
    const safe_VkBufferDeviceAddressCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferDeviceAddressCreateInfoEXT::~safe_VkBufferDeviceAddressCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkBufferDeviceAddressCreateInfoEXT::initialize(const VkBufferDeviceAddressCreateInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceAddress = in_struct->deviceAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferDeviceAddressCreateInfoEXT::initialize(const safe_VkBufferDeviceAddressCreateInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceAddress = copy_src->deviceAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkValidationFeaturesEXT::safe_VkValidationFeaturesEXT(const VkValidationFeaturesEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkValidationFeaturesEXT::safe_VkValidationFeaturesEXT()
    : sType(VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT),
      pNext(nullptr),
      enabledValidationFeatureCount(),
      pEnabledValidationFeatures(nullptr),
      disabledValidationFeatureCount(),
      pDisabledValidationFeatures(nullptr) {}

safe_VkValidationFeaturesEXT::safe_VkValidationFeaturesEXT(const safe_VkValidationFeaturesEXT& copy_src) {
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

safe_VkValidationFeaturesEXT& safe_VkValidationFeaturesEXT::operator=(const safe_VkValidationFeaturesEXT& copy_src) {
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

safe_VkValidationFeaturesEXT::~safe_VkValidationFeaturesEXT() {
    if (pEnabledValidationFeatures) delete[] pEnabledValidationFeatures;
    if (pDisabledValidationFeatures) delete[] pDisabledValidationFeatures;
    FreePnextChain(pNext);
}

void safe_VkValidationFeaturesEXT::initialize(const VkValidationFeaturesEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkValidationFeaturesEXT::initialize(const safe_VkValidationFeaturesEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::safe_VkPhysicalDeviceProvokingVertexPropertiesEXT(
    const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      provokingVertexModePerPipeline(in_struct->provokingVertexModePerPipeline),
      transformFeedbackPreservesTriangleFanProvokingVertex(in_struct->transformFeedbackPreservesTriangleFanProvokingVertex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::safe_VkPhysicalDeviceProvokingVertexPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT),
      pNext(nullptr),
      provokingVertexModePerPipeline(),
      transformFeedbackPreservesTriangleFanProvokingVertex() {}

safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::safe_VkPhysicalDeviceProvokingVertexPropertiesEXT(
    const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    provokingVertexModePerPipeline = copy_src.provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src.transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    provokingVertexModePerPipeline = copy_src.provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src.transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::~safe_VkPhysicalDeviceProvokingVertexPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::initialize(const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    provokingVertexModePerPipeline = in_struct->provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = in_struct->transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceProvokingVertexPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    provokingVertexModePerPipeline = copy_src->provokingVertexModePerPipeline;
    transformFeedbackPreservesTriangleFanProvokingVertex = copy_src->transformFeedbackPreservesTriangleFanProvokingVertex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), provokingVertexMode(in_struct->provokingVertexMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT),
      pNext(nullptr),
      provokingVertexMode() {}

safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(
    const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    provokingVertexMode = copy_src.provokingVertexMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&
safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::operator=(
    const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    provokingVertexMode = copy_src.provokingVertexMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::~safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::initialize(
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    provokingVertexMode = in_struct->provokingVertexMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::initialize(
    const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    provokingVertexMode = copy_src->provokingVertexMode;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

safe_VkSurfaceFullScreenExclusiveInfoEXT::safe_VkSurfaceFullScreenExclusiveInfoEXT(
    const VkSurfaceFullScreenExclusiveInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fullScreenExclusive(in_struct->fullScreenExclusive) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSurfaceFullScreenExclusiveInfoEXT::safe_VkSurfaceFullScreenExclusiveInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT), pNext(nullptr), fullScreenExclusive() {}

safe_VkSurfaceFullScreenExclusiveInfoEXT::safe_VkSurfaceFullScreenExclusiveInfoEXT(
    const safe_VkSurfaceFullScreenExclusiveInfoEXT& copy_src) {
    sType = copy_src.sType;
    fullScreenExclusive = copy_src.fullScreenExclusive;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSurfaceFullScreenExclusiveInfoEXT& safe_VkSurfaceFullScreenExclusiveInfoEXT::operator=(
    const safe_VkSurfaceFullScreenExclusiveInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fullScreenExclusive = copy_src.fullScreenExclusive;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSurfaceFullScreenExclusiveInfoEXT::~safe_VkSurfaceFullScreenExclusiveInfoEXT() { FreePnextChain(pNext); }

void safe_VkSurfaceFullScreenExclusiveInfoEXT::initialize(const VkSurfaceFullScreenExclusiveInfoEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fullScreenExclusive = in_struct->fullScreenExclusive;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSurfaceFullScreenExclusiveInfoEXT::initialize(const safe_VkSurfaceFullScreenExclusiveInfoEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fullScreenExclusive = copy_src->fullScreenExclusive;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT(
    const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fullScreenExclusiveSupported(in_struct->fullScreenExclusiveSupported) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT), pNext(nullptr), fullScreenExclusiveSupported() {}

safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT(
    const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& copy_src) {
    sType = copy_src.sType;
    fullScreenExclusiveSupported = copy_src.fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::operator=(
    const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fullScreenExclusiveSupported = copy_src.fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::~safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT() { FreePnextChain(pNext); }

void safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::initialize(const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fullScreenExclusiveSupported = in_struct->fullScreenExclusiveSupported;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT::initialize(const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fullScreenExclusiveSupported = copy_src->fullScreenExclusiveSupported;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::safe_VkSurfaceFullScreenExclusiveWin32InfoEXT(
    const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), hmonitor(in_struct->hmonitor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::safe_VkSurfaceFullScreenExclusiveWin32InfoEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT), pNext(nullptr), hmonitor() {}

safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::safe_VkSurfaceFullScreenExclusiveWin32InfoEXT(
    const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& copy_src) {
    sType = copy_src.sType;
    hmonitor = copy_src.hmonitor;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::operator=(
    const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hmonitor = copy_src.hmonitor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::~safe_VkSurfaceFullScreenExclusiveWin32InfoEXT() { FreePnextChain(pNext); }

void safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::initialize(const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hmonitor = in_struct->hmonitor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSurfaceFullScreenExclusiveWin32InfoEXT::initialize(const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hmonitor = copy_src->hmonitor;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

safe_VkHeadlessSurfaceCreateInfoEXT::safe_VkHeadlessSurfaceCreateInfoEXT(const VkHeadlessSurfaceCreateInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkHeadlessSurfaceCreateInfoEXT::safe_VkHeadlessSurfaceCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT), pNext(nullptr), flags() {}

safe_VkHeadlessSurfaceCreateInfoEXT::safe_VkHeadlessSurfaceCreateInfoEXT(const safe_VkHeadlessSurfaceCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkHeadlessSurfaceCreateInfoEXT& safe_VkHeadlessSurfaceCreateInfoEXT::operator=(
    const safe_VkHeadlessSurfaceCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkHeadlessSurfaceCreateInfoEXT::~safe_VkHeadlessSurfaceCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkHeadlessSurfaceCreateInfoEXT::initialize(const VkHeadlessSurfaceCreateInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkHeadlessSurfaceCreateInfoEXT::initialize(const safe_VkHeadlessSurfaceCreateInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::safe_VkPhysicalDeviceHostImageCopyPropertiesEXT(
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

safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::safe_VkPhysicalDeviceHostImageCopyPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT),
      pNext(nullptr),
      copySrcLayoutCount(),
      pCopySrcLayouts(nullptr),
      copyDstLayoutCount(),
      pCopyDstLayouts(nullptr),
      identicalMemoryTypeRequirements() {}

safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::safe_VkPhysicalDeviceHostImageCopyPropertiesEXT(
    const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::~safe_VkPhysicalDeviceHostImageCopyPropertiesEXT() {
    if (pCopySrcLayouts) delete[] pCopySrcLayouts;
    if (pCopyDstLayouts) delete[] pCopyDstLayouts;
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::initialize(const VkPhysicalDeviceHostImageCopyPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceHostImageCopyPropertiesEXT::initialize(const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT* copy_src,
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

safe_VkMemoryToImageCopyEXT::safe_VkMemoryToImageCopyEXT(const VkMemoryToImageCopyEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkMemoryToImageCopyEXT::safe_VkMemoryToImageCopyEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT),
      pNext(nullptr),
      pHostPointer(nullptr),
      memoryRowLength(),
      memoryImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

safe_VkMemoryToImageCopyEXT::safe_VkMemoryToImageCopyEXT(const safe_VkMemoryToImageCopyEXT& copy_src) {
    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryToImageCopyEXT& safe_VkMemoryToImageCopyEXT::operator=(const safe_VkMemoryToImageCopyEXT& copy_src) {
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

safe_VkMemoryToImageCopyEXT::~safe_VkMemoryToImageCopyEXT() { FreePnextChain(pNext); }

void safe_VkMemoryToImageCopyEXT::initialize(const VkMemoryToImageCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkMemoryToImageCopyEXT::initialize(const safe_VkMemoryToImageCopyEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pHostPointer = copy_src->pHostPointer;
    memoryRowLength = copy_src->memoryRowLength;
    memoryImageHeight = copy_src->memoryImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageToMemoryCopyEXT::safe_VkImageToMemoryCopyEXT(const VkImageToMemoryCopyEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkImageToMemoryCopyEXT::safe_VkImageToMemoryCopyEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT),
      pNext(nullptr),
      pHostPointer(nullptr),
      memoryRowLength(),
      memoryImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

safe_VkImageToMemoryCopyEXT::safe_VkImageToMemoryCopyEXT(const safe_VkImageToMemoryCopyEXT& copy_src) {
    sType = copy_src.sType;
    pHostPointer = copy_src.pHostPointer;
    memoryRowLength = copy_src.memoryRowLength;
    memoryImageHeight = copy_src.memoryImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageToMemoryCopyEXT& safe_VkImageToMemoryCopyEXT::operator=(const safe_VkImageToMemoryCopyEXT& copy_src) {
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

safe_VkImageToMemoryCopyEXT::~safe_VkImageToMemoryCopyEXT() { FreePnextChain(pNext); }

void safe_VkImageToMemoryCopyEXT::initialize(const VkImageToMemoryCopyEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkImageToMemoryCopyEXT::initialize(const safe_VkImageToMemoryCopyEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pHostPointer = copy_src->pHostPointer;
    memoryRowLength = copy_src->memoryRowLength;
    memoryImageHeight = copy_src->memoryImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyMemoryToImageInfoEXT::safe_VkCopyMemoryToImageInfoEXT(const VkCopyMemoryToImageInfoEXT* in_struct,
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
        pRegions = new safe_VkMemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyMemoryToImageInfoEXT::safe_VkCopyMemoryToImageInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT),
      pNext(nullptr),
      flags(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyMemoryToImageInfoEXT::safe_VkCopyMemoryToImageInfoEXT(const safe_VkCopyMemoryToImageInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkMemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyMemoryToImageInfoEXT& safe_VkCopyMemoryToImageInfoEXT::operator=(const safe_VkCopyMemoryToImageInfoEXT& copy_src) {
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
        pRegions = new safe_VkMemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyMemoryToImageInfoEXT::~safe_VkCopyMemoryToImageInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyMemoryToImageInfoEXT::initialize(const VkCopyMemoryToImageInfoEXT* in_struct,
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
        pRegions = new safe_VkMemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyMemoryToImageInfoEXT::initialize(const safe_VkCopyMemoryToImageInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkMemoryToImageCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkCopyImageToMemoryInfoEXT::safe_VkCopyImageToMemoryInfoEXT(const VkCopyImageToMemoryInfoEXT* in_struct,
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
        pRegions = new safe_VkImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyImageToMemoryInfoEXT::safe_VkCopyImageToMemoryInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT),
      pNext(nullptr),
      flags(),
      srcImage(),
      srcImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyImageToMemoryInfoEXT::safe_VkCopyImageToMemoryInfoEXT(const safe_VkCopyImageToMemoryInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyImageToMemoryInfoEXT& safe_VkCopyImageToMemoryInfoEXT::operator=(const safe_VkCopyImageToMemoryInfoEXT& copy_src) {
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
        pRegions = new safe_VkImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyImageToMemoryInfoEXT::~safe_VkCopyImageToMemoryInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyImageToMemoryInfoEXT::initialize(const VkCopyImageToMemoryInfoEXT* in_struct,
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
        pRegions = new safe_VkImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyImageToMemoryInfoEXT::initialize(const safe_VkCopyImageToMemoryInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkImageToMemoryCopyEXT[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkCopyImageToImageInfoEXT::safe_VkCopyImageToImageInfoEXT(const VkCopyImageToImageInfoEXT* in_struct,
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
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyImageToImageInfoEXT::safe_VkCopyImageToImageInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT),
      pNext(nullptr),
      flags(),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyImageToImageInfoEXT::safe_VkCopyImageToImageInfoEXT(const safe_VkCopyImageToImageInfoEXT& copy_src) {
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
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyImageToImageInfoEXT& safe_VkCopyImageToImageInfoEXT::operator=(const safe_VkCopyImageToImageInfoEXT& copy_src) {
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
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyImageToImageInfoEXT::~safe_VkCopyImageToImageInfoEXT() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyImageToImageInfoEXT::initialize(const VkCopyImageToImageInfoEXT* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
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
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyImageToImageInfoEXT::initialize(const safe_VkCopyImageToImageInfoEXT* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
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
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkHostImageLayoutTransitionInfoEXT::safe_VkHostImageLayoutTransitionInfoEXT(
    const VkHostImageLayoutTransitionInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      image(in_struct->image),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkHostImageLayoutTransitionInfoEXT::safe_VkHostImageLayoutTransitionInfoEXT()
    : sType(VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT),
      pNext(nullptr),
      image(),
      oldLayout(),
      newLayout(),
      subresourceRange() {}

safe_VkHostImageLayoutTransitionInfoEXT::safe_VkHostImageLayoutTransitionInfoEXT(
    const safe_VkHostImageLayoutTransitionInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkHostImageLayoutTransitionInfoEXT& safe_VkHostImageLayoutTransitionInfoEXT::operator=(
    const safe_VkHostImageLayoutTransitionInfoEXT& copy_src) {
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

safe_VkHostImageLayoutTransitionInfoEXT::~safe_VkHostImageLayoutTransitionInfoEXT() { FreePnextChain(pNext); }

void safe_VkHostImageLayoutTransitionInfoEXT::initialize(const VkHostImageLayoutTransitionInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkHostImageLayoutTransitionInfoEXT::initialize(const safe_VkHostImageLayoutTransitionInfoEXT* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSubresourceHostMemcpySizeEXT::safe_VkSubresourceHostMemcpySizeEXT(const VkSubresourceHostMemcpySizeEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSubresourceHostMemcpySizeEXT::safe_VkSubresourceHostMemcpySizeEXT()
    : sType(VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT), pNext(nullptr), size() {}

safe_VkSubresourceHostMemcpySizeEXT::safe_VkSubresourceHostMemcpySizeEXT(const safe_VkSubresourceHostMemcpySizeEXT& copy_src) {
    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSubresourceHostMemcpySizeEXT& safe_VkSubresourceHostMemcpySizeEXT::operator=(
    const safe_VkSubresourceHostMemcpySizeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSubresourceHostMemcpySizeEXT::~safe_VkSubresourceHostMemcpySizeEXT() { FreePnextChain(pNext); }

void safe_VkSubresourceHostMemcpySizeEXT::initialize(const VkSubresourceHostMemcpySizeEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSubresourceHostMemcpySizeEXT::initialize(const safe_VkSubresourceHostMemcpySizeEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkHostImageCopyDevicePerformanceQueryEXT::safe_VkHostImageCopyDevicePerformanceQueryEXT(
    const VkHostImageCopyDevicePerformanceQueryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      optimalDeviceAccess(in_struct->optimalDeviceAccess),
      identicalMemoryLayout(in_struct->identicalMemoryLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkHostImageCopyDevicePerformanceQueryEXT::safe_VkHostImageCopyDevicePerformanceQueryEXT()
    : sType(VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT),
      pNext(nullptr),
      optimalDeviceAccess(),
      identicalMemoryLayout() {}

safe_VkHostImageCopyDevicePerformanceQueryEXT::safe_VkHostImageCopyDevicePerformanceQueryEXT(
    const safe_VkHostImageCopyDevicePerformanceQueryEXT& copy_src) {
    sType = copy_src.sType;
    optimalDeviceAccess = copy_src.optimalDeviceAccess;
    identicalMemoryLayout = copy_src.identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkHostImageCopyDevicePerformanceQueryEXT& safe_VkHostImageCopyDevicePerformanceQueryEXT::operator=(
    const safe_VkHostImageCopyDevicePerformanceQueryEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    optimalDeviceAccess = copy_src.optimalDeviceAccess;
    identicalMemoryLayout = copy_src.identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkHostImageCopyDevicePerformanceQueryEXT::~safe_VkHostImageCopyDevicePerformanceQueryEXT() { FreePnextChain(pNext); }

void safe_VkHostImageCopyDevicePerformanceQueryEXT::initialize(const VkHostImageCopyDevicePerformanceQueryEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    optimalDeviceAccess = in_struct->optimalDeviceAccess;
    identicalMemoryLayout = in_struct->identicalMemoryLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkHostImageCopyDevicePerformanceQueryEXT::initialize(const safe_VkHostImageCopyDevicePerformanceQueryEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    optimalDeviceAccess = copy_src->optimalDeviceAccess;
    identicalMemoryLayout = copy_src->identicalMemoryLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(
    const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minPlacedMemoryMapAlignment(in_struct->minPlacedMemoryMapAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT), pNext(nullptr), minPlacedMemoryMapAlignment() {}

safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(
    const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    minPlacedMemoryMapAlignment = copy_src.minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minPlacedMemoryMapAlignment = copy_src.minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::~safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::initialize(const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minPlacedMemoryMapAlignment = in_struct->minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minPlacedMemoryMapAlignment = copy_src->minPlacedMemoryMapAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryMapPlacedInfoEXT::safe_VkMemoryMapPlacedInfoEXT(const VkMemoryMapPlacedInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pPlacedAddress(in_struct->pPlacedAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryMapPlacedInfoEXT::safe_VkMemoryMapPlacedInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT), pNext(nullptr), pPlacedAddress(nullptr) {}

safe_VkMemoryMapPlacedInfoEXT::safe_VkMemoryMapPlacedInfoEXT(const safe_VkMemoryMapPlacedInfoEXT& copy_src) {
    sType = copy_src.sType;
    pPlacedAddress = copy_src.pPlacedAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryMapPlacedInfoEXT& safe_VkMemoryMapPlacedInfoEXT::operator=(const safe_VkMemoryMapPlacedInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pPlacedAddress = copy_src.pPlacedAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryMapPlacedInfoEXT::~safe_VkMemoryMapPlacedInfoEXT() { FreePnextChain(pNext); }

void safe_VkMemoryMapPlacedInfoEXT::initialize(const VkMemoryMapPlacedInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pPlacedAddress = in_struct->pPlacedAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryMapPlacedInfoEXT::initialize(const safe_VkMemoryMapPlacedInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pPlacedAddress = copy_src->pPlacedAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfacePresentModeEXT::safe_VkSurfacePresentModeEXT(const VkSurfacePresentModeEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentMode(in_struct->presentMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSurfacePresentModeEXT::safe_VkSurfacePresentModeEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT), pNext(nullptr), presentMode() {}

safe_VkSurfacePresentModeEXT::safe_VkSurfacePresentModeEXT(const safe_VkSurfacePresentModeEXT& copy_src) {
    sType = copy_src.sType;
    presentMode = copy_src.presentMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSurfacePresentModeEXT& safe_VkSurfacePresentModeEXT::operator=(const safe_VkSurfacePresentModeEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentMode = copy_src.presentMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSurfacePresentModeEXT::~safe_VkSurfacePresentModeEXT() { FreePnextChain(pNext); }

void safe_VkSurfacePresentModeEXT::initialize(const VkSurfacePresentModeEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentMode = in_struct->presentMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSurfacePresentModeEXT::initialize(const safe_VkSurfacePresentModeEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentMode = copy_src->presentMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfacePresentScalingCapabilitiesEXT::safe_VkSurfacePresentScalingCapabilitiesEXT(
    const VkSurfacePresentScalingCapabilitiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkSurfacePresentScalingCapabilitiesEXT::safe_VkSurfacePresentScalingCapabilitiesEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT),
      pNext(nullptr),
      supportedPresentScaling(),
      supportedPresentGravityX(),
      supportedPresentGravityY(),
      minScaledImageExtent(),
      maxScaledImageExtent() {}

safe_VkSurfacePresentScalingCapabilitiesEXT::safe_VkSurfacePresentScalingCapabilitiesEXT(
    const safe_VkSurfacePresentScalingCapabilitiesEXT& copy_src) {
    sType = copy_src.sType;
    supportedPresentScaling = copy_src.supportedPresentScaling;
    supportedPresentGravityX = copy_src.supportedPresentGravityX;
    supportedPresentGravityY = copy_src.supportedPresentGravityY;
    minScaledImageExtent = copy_src.minScaledImageExtent;
    maxScaledImageExtent = copy_src.maxScaledImageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSurfacePresentScalingCapabilitiesEXT& safe_VkSurfacePresentScalingCapabilitiesEXT::operator=(
    const safe_VkSurfacePresentScalingCapabilitiesEXT& copy_src) {
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

safe_VkSurfacePresentScalingCapabilitiesEXT::~safe_VkSurfacePresentScalingCapabilitiesEXT() { FreePnextChain(pNext); }

void safe_VkSurfacePresentScalingCapabilitiesEXT::initialize(const VkSurfacePresentScalingCapabilitiesEXT* in_struct,
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

void safe_VkSurfacePresentScalingCapabilitiesEXT::initialize(const safe_VkSurfacePresentScalingCapabilitiesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedPresentScaling = copy_src->supportedPresentScaling;
    supportedPresentGravityX = copy_src->supportedPresentGravityX;
    supportedPresentGravityY = copy_src->supportedPresentGravityY;
    minScaledImageExtent = copy_src->minScaledImageExtent;
    maxScaledImageExtent = copy_src->maxScaledImageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSurfacePresentModeCompatibilityEXT::safe_VkSurfacePresentModeCompatibilityEXT(
    const VkSurfacePresentModeCompatibilityEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentModeCount(in_struct->presentModeCount), pPresentModes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->presentModeCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->presentModeCount);
    }
}

safe_VkSurfacePresentModeCompatibilityEXT::safe_VkSurfacePresentModeCompatibilityEXT()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT), pNext(nullptr), presentModeCount(), pPresentModes(nullptr) {}

safe_VkSurfacePresentModeCompatibilityEXT::safe_VkSurfacePresentModeCompatibilityEXT(
    const safe_VkSurfacePresentModeCompatibilityEXT& copy_src) {
    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }
}

safe_VkSurfacePresentModeCompatibilityEXT& safe_VkSurfacePresentModeCompatibilityEXT::operator=(
    const safe_VkSurfacePresentModeCompatibilityEXT& copy_src) {
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

safe_VkSurfacePresentModeCompatibilityEXT::~safe_VkSurfacePresentModeCompatibilityEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void safe_VkSurfacePresentModeCompatibilityEXT::initialize(const VkSurfacePresentModeCompatibilityEXT* in_struct,
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

void safe_VkSurfacePresentModeCompatibilityEXT::initialize(const safe_VkSurfacePresentModeCompatibilityEXT* copy_src,
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

safe_VkSwapchainPresentFenceInfoEXT::safe_VkSwapchainPresentFenceInfoEXT(const VkSwapchainPresentFenceInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
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

safe_VkSwapchainPresentFenceInfoEXT::safe_VkSwapchainPresentFenceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT), pNext(nullptr), swapchainCount(), pFences(nullptr) {}

safe_VkSwapchainPresentFenceInfoEXT::safe_VkSwapchainPresentFenceInfoEXT(const safe_VkSwapchainPresentFenceInfoEXT& copy_src) {
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

safe_VkSwapchainPresentFenceInfoEXT& safe_VkSwapchainPresentFenceInfoEXT::operator=(
    const safe_VkSwapchainPresentFenceInfoEXT& copy_src) {
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

safe_VkSwapchainPresentFenceInfoEXT::~safe_VkSwapchainPresentFenceInfoEXT() {
    if (pFences) delete[] pFences;
    FreePnextChain(pNext);
}

void safe_VkSwapchainPresentFenceInfoEXT::initialize(const VkSwapchainPresentFenceInfoEXT* in_struct,
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

void safe_VkSwapchainPresentFenceInfoEXT::initialize(const safe_VkSwapchainPresentFenceInfoEXT* copy_src,
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

safe_VkSwapchainPresentModesCreateInfoEXT::safe_VkSwapchainPresentModesCreateInfoEXT(
    const VkSwapchainPresentModesCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentModeCount(in_struct->presentModeCount), pPresentModes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPresentModes) {
        pPresentModes = new VkPresentModeKHR[in_struct->presentModeCount];
        memcpy((void*)pPresentModes, (void*)in_struct->pPresentModes, sizeof(VkPresentModeKHR) * in_struct->presentModeCount);
    }
}

safe_VkSwapchainPresentModesCreateInfoEXT::safe_VkSwapchainPresentModesCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT),
      pNext(nullptr),
      presentModeCount(),
      pPresentModes(nullptr) {}

safe_VkSwapchainPresentModesCreateInfoEXT::safe_VkSwapchainPresentModesCreateInfoEXT(
    const safe_VkSwapchainPresentModesCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    presentModeCount = copy_src.presentModeCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.presentModeCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.presentModeCount);
    }
}

safe_VkSwapchainPresentModesCreateInfoEXT& safe_VkSwapchainPresentModesCreateInfoEXT::operator=(
    const safe_VkSwapchainPresentModesCreateInfoEXT& copy_src) {
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

safe_VkSwapchainPresentModesCreateInfoEXT::~safe_VkSwapchainPresentModesCreateInfoEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void safe_VkSwapchainPresentModesCreateInfoEXT::initialize(const VkSwapchainPresentModesCreateInfoEXT* in_struct,
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

void safe_VkSwapchainPresentModesCreateInfoEXT::initialize(const safe_VkSwapchainPresentModesCreateInfoEXT* copy_src,
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

safe_VkSwapchainPresentModeInfoEXT::safe_VkSwapchainPresentModeInfoEXT(const VkSwapchainPresentModeInfoEXT* in_struct,
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

safe_VkSwapchainPresentModeInfoEXT::safe_VkSwapchainPresentModeInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT), pNext(nullptr), swapchainCount(), pPresentModes(nullptr) {}

safe_VkSwapchainPresentModeInfoEXT::safe_VkSwapchainPresentModeInfoEXT(const safe_VkSwapchainPresentModeInfoEXT& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pPresentModes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentModes) {
        pPresentModes = new VkPresentModeKHR[copy_src.swapchainCount];
        memcpy((void*)pPresentModes, (void*)copy_src.pPresentModes, sizeof(VkPresentModeKHR) * copy_src.swapchainCount);
    }
}

safe_VkSwapchainPresentModeInfoEXT& safe_VkSwapchainPresentModeInfoEXT::operator=(
    const safe_VkSwapchainPresentModeInfoEXT& copy_src) {
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

safe_VkSwapchainPresentModeInfoEXT::~safe_VkSwapchainPresentModeInfoEXT() {
    if (pPresentModes) delete[] pPresentModes;
    FreePnextChain(pNext);
}

void safe_VkSwapchainPresentModeInfoEXT::initialize(const VkSwapchainPresentModeInfoEXT* in_struct,
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

void safe_VkSwapchainPresentModeInfoEXT::initialize(const safe_VkSwapchainPresentModeInfoEXT* copy_src,
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

safe_VkSwapchainPresentScalingCreateInfoEXT::safe_VkSwapchainPresentScalingCreateInfoEXT(
    const VkSwapchainPresentScalingCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      scalingBehavior(in_struct->scalingBehavior),
      presentGravityX(in_struct->presentGravityX),
      presentGravityY(in_struct->presentGravityY) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSwapchainPresentScalingCreateInfoEXT::safe_VkSwapchainPresentScalingCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT),
      pNext(nullptr),
      scalingBehavior(),
      presentGravityX(),
      presentGravityY() {}

safe_VkSwapchainPresentScalingCreateInfoEXT::safe_VkSwapchainPresentScalingCreateInfoEXT(
    const safe_VkSwapchainPresentScalingCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    scalingBehavior = copy_src.scalingBehavior;
    presentGravityX = copy_src.presentGravityX;
    presentGravityY = copy_src.presentGravityY;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSwapchainPresentScalingCreateInfoEXT& safe_VkSwapchainPresentScalingCreateInfoEXT::operator=(
    const safe_VkSwapchainPresentScalingCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    scalingBehavior = copy_src.scalingBehavior;
    presentGravityX = copy_src.presentGravityX;
    presentGravityY = copy_src.presentGravityY;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSwapchainPresentScalingCreateInfoEXT::~safe_VkSwapchainPresentScalingCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkSwapchainPresentScalingCreateInfoEXT::initialize(const VkSwapchainPresentScalingCreateInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    scalingBehavior = in_struct->scalingBehavior;
    presentGravityX = in_struct->presentGravityX;
    presentGravityY = in_struct->presentGravityY;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSwapchainPresentScalingCreateInfoEXT::initialize(const safe_VkSwapchainPresentScalingCreateInfoEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    scalingBehavior = copy_src->scalingBehavior;
    presentGravityX = copy_src->presentGravityX;
    presentGravityY = copy_src->presentGravityY;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkReleaseSwapchainImagesInfoEXT::safe_VkReleaseSwapchainImagesInfoEXT(const VkReleaseSwapchainImagesInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
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

safe_VkReleaseSwapchainImagesInfoEXT::safe_VkReleaseSwapchainImagesInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT),
      pNext(nullptr),
      swapchain(),
      imageIndexCount(),
      pImageIndices(nullptr) {}

safe_VkReleaseSwapchainImagesInfoEXT::safe_VkReleaseSwapchainImagesInfoEXT(const safe_VkReleaseSwapchainImagesInfoEXT& copy_src) {
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

safe_VkReleaseSwapchainImagesInfoEXT& safe_VkReleaseSwapchainImagesInfoEXT::operator=(
    const safe_VkReleaseSwapchainImagesInfoEXT& copy_src) {
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

safe_VkReleaseSwapchainImagesInfoEXT::~safe_VkReleaseSwapchainImagesInfoEXT() {
    if (pImageIndices) delete[] pImageIndices;
    FreePnextChain(pNext);
}

void safe_VkReleaseSwapchainImagesInfoEXT::initialize(const VkReleaseSwapchainImagesInfoEXT* in_struct,
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

void safe_VkReleaseSwapchainImagesInfoEXT::initialize(const safe_VkReleaseSwapchainImagesInfoEXT* copy_src,
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

safe_VkDepthBiasInfoEXT::safe_VkDepthBiasInfoEXT(const VkDepthBiasInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType),
      depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
      depthBiasClamp(in_struct->depthBiasClamp),
      depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDepthBiasInfoEXT::safe_VkDepthBiasInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT),
      pNext(nullptr),
      depthBiasConstantFactor(),
      depthBiasClamp(),
      depthBiasSlopeFactor() {}

safe_VkDepthBiasInfoEXT::safe_VkDepthBiasInfoEXT(const safe_VkDepthBiasInfoEXT& copy_src) {
    sType = copy_src.sType;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDepthBiasInfoEXT& safe_VkDepthBiasInfoEXT::operator=(const safe_VkDepthBiasInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDepthBiasInfoEXT::~safe_VkDepthBiasInfoEXT() { FreePnextChain(pNext); }

void safe_VkDepthBiasInfoEXT::initialize(const VkDepthBiasInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDepthBiasInfoEXT::initialize(const safe_VkDepthBiasInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthBiasConstantFactor = copy_src->depthBiasConstantFactor;
    depthBiasClamp = copy_src->depthBiasClamp;
    depthBiasSlopeFactor = copy_src->depthBiasSlopeFactor;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDepthBiasRepresentationInfoEXT::safe_VkDepthBiasRepresentationInfoEXT(const VkDepthBiasRepresentationInfoEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      depthBiasRepresentation(in_struct->depthBiasRepresentation),
      depthBiasExact(in_struct->depthBiasExact) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDepthBiasRepresentationInfoEXT::safe_VkDepthBiasRepresentationInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT), pNext(nullptr), depthBiasRepresentation(), depthBiasExact() {}

safe_VkDepthBiasRepresentationInfoEXT::safe_VkDepthBiasRepresentationInfoEXT(
    const safe_VkDepthBiasRepresentationInfoEXT& copy_src) {
    sType = copy_src.sType;
    depthBiasRepresentation = copy_src.depthBiasRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDepthBiasRepresentationInfoEXT& safe_VkDepthBiasRepresentationInfoEXT::operator=(
    const safe_VkDepthBiasRepresentationInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthBiasRepresentation = copy_src.depthBiasRepresentation;
    depthBiasExact = copy_src.depthBiasExact;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDepthBiasRepresentationInfoEXT::~safe_VkDepthBiasRepresentationInfoEXT() { FreePnextChain(pNext); }

void safe_VkDepthBiasRepresentationInfoEXT::initialize(const VkDepthBiasRepresentationInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthBiasRepresentation = in_struct->depthBiasRepresentation;
    depthBiasExact = in_struct->depthBiasExact;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDepthBiasRepresentationInfoEXT::initialize(const safe_VkDepthBiasRepresentationInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthBiasRepresentation = copy_src->depthBiasRepresentation;
    depthBiasExact = copy_src->depthBiasExact;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceMemoryReportCallbackDataEXT::safe_VkDeviceMemoryReportCallbackDataEXT(
    const VkDeviceMemoryReportCallbackDataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkDeviceMemoryReportCallbackDataEXT::safe_VkDeviceMemoryReportCallbackDataEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT),
      pNext(nullptr),
      flags(),
      type(),
      memoryObjectId(),
      size(),
      objectType(),
      objectHandle(),
      heapIndex() {}

safe_VkDeviceMemoryReportCallbackDataEXT::safe_VkDeviceMemoryReportCallbackDataEXT(
    const safe_VkDeviceMemoryReportCallbackDataEXT& copy_src) {
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

safe_VkDeviceMemoryReportCallbackDataEXT& safe_VkDeviceMemoryReportCallbackDataEXT::operator=(
    const safe_VkDeviceMemoryReportCallbackDataEXT& copy_src) {
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

safe_VkDeviceMemoryReportCallbackDataEXT::~safe_VkDeviceMemoryReportCallbackDataEXT() { FreePnextChain(pNext); }

void safe_VkDeviceMemoryReportCallbackDataEXT::initialize(const VkDeviceMemoryReportCallbackDataEXT* in_struct,
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

void safe_VkDeviceMemoryReportCallbackDataEXT::initialize(const safe_VkDeviceMemoryReportCallbackDataEXT* copy_src,
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

safe_VkDeviceDeviceMemoryReportCreateInfoEXT::safe_VkDeviceDeviceMemoryReportCreateInfoEXT(
    const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pfnUserCallback(in_struct->pfnUserCallback),
      pUserData(in_struct->pUserData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceDeviceMemoryReportCreateInfoEXT::safe_VkDeviceDeviceMemoryReportCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT),
      pNext(nullptr),
      flags(),
      pfnUserCallback(),
      pUserData(nullptr) {}

safe_VkDeviceDeviceMemoryReportCreateInfoEXT::safe_VkDeviceDeviceMemoryReportCreateInfoEXT(
    const safe_VkDeviceDeviceMemoryReportCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceDeviceMemoryReportCreateInfoEXT& safe_VkDeviceDeviceMemoryReportCreateInfoEXT::operator=(
    const safe_VkDeviceDeviceMemoryReportCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pfnUserCallback = copy_src.pfnUserCallback;
    pUserData = copy_src.pUserData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceDeviceMemoryReportCreateInfoEXT::~safe_VkDeviceDeviceMemoryReportCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkDeviceDeviceMemoryReportCreateInfoEXT::initialize(const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pfnUserCallback = in_struct->pfnUserCallback;
    pUserData = in_struct->pUserData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceDeviceMemoryReportCreateInfoEXT::initialize(const safe_VkDeviceDeviceMemoryReportCreateInfoEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pfnUserCallback = copy_src->pfnUserCallback;
    pUserData = copy_src->pUserData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceRobustness2PropertiesEXT::safe_VkPhysicalDeviceRobustness2PropertiesEXT(
    const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      robustStorageBufferAccessSizeAlignment(in_struct->robustStorageBufferAccessSizeAlignment),
      robustUniformBufferAccessSizeAlignment(in_struct->robustUniformBufferAccessSizeAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceRobustness2PropertiesEXT::safe_VkPhysicalDeviceRobustness2PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT),
      pNext(nullptr),
      robustStorageBufferAccessSizeAlignment(),
      robustUniformBufferAccessSizeAlignment() {}

safe_VkPhysicalDeviceRobustness2PropertiesEXT::safe_VkPhysicalDeviceRobustness2PropertiesEXT(
    const safe_VkPhysicalDeviceRobustness2PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    robustStorageBufferAccessSizeAlignment = copy_src.robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src.robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceRobustness2PropertiesEXT& safe_VkPhysicalDeviceRobustness2PropertiesEXT::operator=(
    const safe_VkPhysicalDeviceRobustness2PropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustStorageBufferAccessSizeAlignment = copy_src.robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src.robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceRobustness2PropertiesEXT::~safe_VkPhysicalDeviceRobustness2PropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceRobustness2PropertiesEXT::initialize(const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustStorageBufferAccessSizeAlignment = in_struct->robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = in_struct->robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceRobustness2PropertiesEXT::initialize(const safe_VkPhysicalDeviceRobustness2PropertiesEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustStorageBufferAccessSizeAlignment = copy_src->robustStorageBufferAccessSizeAlignment;
    robustUniformBufferAccessSizeAlignment = copy_src->robustUniformBufferAccessSizeAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerCustomBorderColorCreateInfoEXT::safe_VkSamplerCustomBorderColorCreateInfoEXT(
    const VkSamplerCustomBorderColorCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), customBorderColor(in_struct->customBorderColor), format(in_struct->format) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerCustomBorderColorCreateInfoEXT::safe_VkSamplerCustomBorderColorCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT), pNext(nullptr), customBorderColor(), format() {}

safe_VkSamplerCustomBorderColorCreateInfoEXT::safe_VkSamplerCustomBorderColorCreateInfoEXT(
    const safe_VkSamplerCustomBorderColorCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    customBorderColor = copy_src.customBorderColor;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerCustomBorderColorCreateInfoEXT& safe_VkSamplerCustomBorderColorCreateInfoEXT::operator=(
    const safe_VkSamplerCustomBorderColorCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    customBorderColor = copy_src.customBorderColor;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerCustomBorderColorCreateInfoEXT::~safe_VkSamplerCustomBorderColorCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkSamplerCustomBorderColorCreateInfoEXT::initialize(const VkSamplerCustomBorderColorCreateInfoEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    customBorderColor = in_struct->customBorderColor;
    format = in_struct->format;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerCustomBorderColorCreateInfoEXT::initialize(const safe_VkSamplerCustomBorderColorCreateInfoEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    customBorderColor = copy_src->customBorderColor;
    format = copy_src->format;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT(
    const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxCustomBorderColorSamplers(in_struct->maxCustomBorderColorSamplers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT), pNext(nullptr), maxCustomBorderColorSamplers() {}

safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT(
    const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxCustomBorderColorSamplers = copy_src.maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxCustomBorderColorSamplers = copy_src.maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::~safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::initialize(
    const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxCustomBorderColorSamplers = in_struct->maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxCustomBorderColorSamplers = copy_src->maxCustomBorderColorSamplers;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_METAL_EXT

safe_VkExportMetalObjectCreateInfoEXT::safe_VkExportMetalObjectCreateInfoEXT(const VkExportMetalObjectCreateInfoEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), exportObjectType(in_struct->exportObjectType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalObjectCreateInfoEXT::safe_VkExportMetalObjectCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT), pNext(nullptr), exportObjectType() {}

safe_VkExportMetalObjectCreateInfoEXT::safe_VkExportMetalObjectCreateInfoEXT(
    const safe_VkExportMetalObjectCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    exportObjectType = copy_src.exportObjectType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalObjectCreateInfoEXT& safe_VkExportMetalObjectCreateInfoEXT::operator=(
    const safe_VkExportMetalObjectCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportObjectType = copy_src.exportObjectType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalObjectCreateInfoEXT::~safe_VkExportMetalObjectCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalObjectCreateInfoEXT::initialize(const VkExportMetalObjectCreateInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportObjectType = in_struct->exportObjectType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalObjectCreateInfoEXT::initialize(const safe_VkExportMetalObjectCreateInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportObjectType = copy_src->exportObjectType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalObjectsInfoEXT::safe_VkExportMetalObjectsInfoEXT(const VkExportMetalObjectsInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalObjectsInfoEXT::safe_VkExportMetalObjectsInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT), pNext(nullptr) {}

safe_VkExportMetalObjectsInfoEXT::safe_VkExportMetalObjectsInfoEXT(const safe_VkExportMetalObjectsInfoEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalObjectsInfoEXT& safe_VkExportMetalObjectsInfoEXT::operator=(const safe_VkExportMetalObjectsInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalObjectsInfoEXT::~safe_VkExportMetalObjectsInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalObjectsInfoEXT::initialize(const VkExportMetalObjectsInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalObjectsInfoEXT::initialize(const safe_VkExportMetalObjectsInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalDeviceInfoEXT::safe_VkExportMetalDeviceInfoEXT(const VkExportMetalDeviceInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mtlDevice(in_struct->mtlDevice) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalDeviceInfoEXT::safe_VkExportMetalDeviceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT), pNext(nullptr), mtlDevice() {}

safe_VkExportMetalDeviceInfoEXT::safe_VkExportMetalDeviceInfoEXT(const safe_VkExportMetalDeviceInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlDevice = copy_src.mtlDevice;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalDeviceInfoEXT& safe_VkExportMetalDeviceInfoEXT::operator=(const safe_VkExportMetalDeviceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlDevice = copy_src.mtlDevice;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalDeviceInfoEXT::~safe_VkExportMetalDeviceInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalDeviceInfoEXT::initialize(const VkExportMetalDeviceInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlDevice = in_struct->mtlDevice;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalDeviceInfoEXT::initialize(const safe_VkExportMetalDeviceInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlDevice = copy_src->mtlDevice;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalCommandQueueInfoEXT::safe_VkExportMetalCommandQueueInfoEXT(const VkExportMetalCommandQueueInfoEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), queue(in_struct->queue), mtlCommandQueue(in_struct->mtlCommandQueue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalCommandQueueInfoEXT::safe_VkExportMetalCommandQueueInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT), pNext(nullptr), queue(), mtlCommandQueue() {}

safe_VkExportMetalCommandQueueInfoEXT::safe_VkExportMetalCommandQueueInfoEXT(
    const safe_VkExportMetalCommandQueueInfoEXT& copy_src) {
    sType = copy_src.sType;
    queue = copy_src.queue;
    mtlCommandQueue = copy_src.mtlCommandQueue;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalCommandQueueInfoEXT& safe_VkExportMetalCommandQueueInfoEXT::operator=(
    const safe_VkExportMetalCommandQueueInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queue = copy_src.queue;
    mtlCommandQueue = copy_src.mtlCommandQueue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalCommandQueueInfoEXT::~safe_VkExportMetalCommandQueueInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalCommandQueueInfoEXT::initialize(const VkExportMetalCommandQueueInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queue = in_struct->queue;
    mtlCommandQueue = in_struct->mtlCommandQueue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalCommandQueueInfoEXT::initialize(const safe_VkExportMetalCommandQueueInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queue = copy_src->queue;
    mtlCommandQueue = copy_src->mtlCommandQueue;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalBufferInfoEXT::safe_VkExportMetalBufferInfoEXT(const VkExportMetalBufferInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), mtlBuffer(in_struct->mtlBuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalBufferInfoEXT::safe_VkExportMetalBufferInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT), pNext(nullptr), memory(), mtlBuffer() {}

safe_VkExportMetalBufferInfoEXT::safe_VkExportMetalBufferInfoEXT(const safe_VkExportMetalBufferInfoEXT& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalBufferInfoEXT& safe_VkExportMetalBufferInfoEXT::operator=(const safe_VkExportMetalBufferInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalBufferInfoEXT::~safe_VkExportMetalBufferInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalBufferInfoEXT::initialize(const VkExportMetalBufferInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    mtlBuffer = in_struct->mtlBuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalBufferInfoEXT::initialize(const safe_VkExportMetalBufferInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    mtlBuffer = copy_src->mtlBuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImportMetalBufferInfoEXT::safe_VkImportMetalBufferInfoEXT(const VkImportMetalBufferInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), mtlBuffer(in_struct->mtlBuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImportMetalBufferInfoEXT::safe_VkImportMetalBufferInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT), pNext(nullptr), mtlBuffer() {}

safe_VkImportMetalBufferInfoEXT::safe_VkImportMetalBufferInfoEXT(const safe_VkImportMetalBufferInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImportMetalBufferInfoEXT& safe_VkImportMetalBufferInfoEXT::operator=(const safe_VkImportMetalBufferInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlBuffer = copy_src.mtlBuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImportMetalBufferInfoEXT::~safe_VkImportMetalBufferInfoEXT() { FreePnextChain(pNext); }

void safe_VkImportMetalBufferInfoEXT::initialize(const VkImportMetalBufferInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlBuffer = in_struct->mtlBuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImportMetalBufferInfoEXT::initialize(const safe_VkImportMetalBufferInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlBuffer = copy_src->mtlBuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalTextureInfoEXT::safe_VkExportMetalTextureInfoEXT(const VkExportMetalTextureInfoEXT* in_struct,
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

safe_VkExportMetalTextureInfoEXT::safe_VkExportMetalTextureInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT),
      pNext(nullptr),
      image(),
      imageView(),
      bufferView(),
      plane(),
      mtlTexture() {}

safe_VkExportMetalTextureInfoEXT::safe_VkExportMetalTextureInfoEXT(const safe_VkExportMetalTextureInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    imageView = copy_src.imageView;
    bufferView = copy_src.bufferView;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalTextureInfoEXT& safe_VkExportMetalTextureInfoEXT::operator=(const safe_VkExportMetalTextureInfoEXT& copy_src) {
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

safe_VkExportMetalTextureInfoEXT::~safe_VkExportMetalTextureInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalTextureInfoEXT::initialize(const VkExportMetalTextureInfoEXT* in_struct,
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

void safe_VkExportMetalTextureInfoEXT::initialize(const safe_VkExportMetalTextureInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    imageView = copy_src->imageView;
    bufferView = copy_src->bufferView;
    plane = copy_src->plane;
    mtlTexture = copy_src->mtlTexture;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImportMetalTextureInfoEXT::safe_VkImportMetalTextureInfoEXT(const VkImportMetalTextureInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), plane(in_struct->plane), mtlTexture(in_struct->mtlTexture) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImportMetalTextureInfoEXT::safe_VkImportMetalTextureInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT), pNext(nullptr), plane(), mtlTexture() {}

safe_VkImportMetalTextureInfoEXT::safe_VkImportMetalTextureInfoEXT(const safe_VkImportMetalTextureInfoEXT& copy_src) {
    sType = copy_src.sType;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImportMetalTextureInfoEXT& safe_VkImportMetalTextureInfoEXT::operator=(const safe_VkImportMetalTextureInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    plane = copy_src.plane;
    mtlTexture = copy_src.mtlTexture;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImportMetalTextureInfoEXT::~safe_VkImportMetalTextureInfoEXT() { FreePnextChain(pNext); }

void safe_VkImportMetalTextureInfoEXT::initialize(const VkImportMetalTextureInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    plane = in_struct->plane;
    mtlTexture = in_struct->mtlTexture;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImportMetalTextureInfoEXT::initialize(const safe_VkImportMetalTextureInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    plane = copy_src->plane;
    mtlTexture = copy_src->mtlTexture;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalIOSurfaceInfoEXT::safe_VkExportMetalIOSurfaceInfoEXT(const VkExportMetalIOSurfaceInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), ioSurface(in_struct->ioSurface) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalIOSurfaceInfoEXT::safe_VkExportMetalIOSurfaceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT), pNext(nullptr), image(), ioSurface() {}

safe_VkExportMetalIOSurfaceInfoEXT::safe_VkExportMetalIOSurfaceInfoEXT(const safe_VkExportMetalIOSurfaceInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalIOSurfaceInfoEXT& safe_VkExportMetalIOSurfaceInfoEXT::operator=(
    const safe_VkExportMetalIOSurfaceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalIOSurfaceInfoEXT::~safe_VkExportMetalIOSurfaceInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalIOSurfaceInfoEXT::initialize(const VkExportMetalIOSurfaceInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    ioSurface = in_struct->ioSurface;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalIOSurfaceInfoEXT::initialize(const safe_VkExportMetalIOSurfaceInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    ioSurface = copy_src->ioSurface;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImportMetalIOSurfaceInfoEXT::safe_VkImportMetalIOSurfaceInfoEXT(const VkImportMetalIOSurfaceInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), ioSurface(in_struct->ioSurface) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImportMetalIOSurfaceInfoEXT::safe_VkImportMetalIOSurfaceInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT), pNext(nullptr), ioSurface() {}

safe_VkImportMetalIOSurfaceInfoEXT::safe_VkImportMetalIOSurfaceInfoEXT(const safe_VkImportMetalIOSurfaceInfoEXT& copy_src) {
    sType = copy_src.sType;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImportMetalIOSurfaceInfoEXT& safe_VkImportMetalIOSurfaceInfoEXT::operator=(
    const safe_VkImportMetalIOSurfaceInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    ioSurface = copy_src.ioSurface;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImportMetalIOSurfaceInfoEXT::~safe_VkImportMetalIOSurfaceInfoEXT() { FreePnextChain(pNext); }

void safe_VkImportMetalIOSurfaceInfoEXT::initialize(const VkImportMetalIOSurfaceInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    ioSurface = in_struct->ioSurface;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImportMetalIOSurfaceInfoEXT::initialize(const safe_VkImportMetalIOSurfaceInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    ioSurface = copy_src->ioSurface;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMetalSharedEventInfoEXT::safe_VkExportMetalSharedEventInfoEXT(const VkExportMetalSharedEventInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), event(in_struct->event), mtlSharedEvent(in_struct->mtlSharedEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMetalSharedEventInfoEXT::safe_VkExportMetalSharedEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT), pNext(nullptr), semaphore(), event(), mtlSharedEvent() {}

safe_VkExportMetalSharedEventInfoEXT::safe_VkExportMetalSharedEventInfoEXT(const safe_VkExportMetalSharedEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    event = copy_src.event;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMetalSharedEventInfoEXT& safe_VkExportMetalSharedEventInfoEXT::operator=(
    const safe_VkExportMetalSharedEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    event = copy_src.event;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMetalSharedEventInfoEXT::~safe_VkExportMetalSharedEventInfoEXT() { FreePnextChain(pNext); }

void safe_VkExportMetalSharedEventInfoEXT::initialize(const VkExportMetalSharedEventInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    event = in_struct->event;
    mtlSharedEvent = in_struct->mtlSharedEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMetalSharedEventInfoEXT::initialize(const safe_VkExportMetalSharedEventInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    event = copy_src->event;
    mtlSharedEvent = copy_src->mtlSharedEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImportMetalSharedEventInfoEXT::safe_VkImportMetalSharedEventInfoEXT(const VkImportMetalSharedEventInfoEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), mtlSharedEvent(in_struct->mtlSharedEvent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImportMetalSharedEventInfoEXT::safe_VkImportMetalSharedEventInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT), pNext(nullptr), mtlSharedEvent() {}

safe_VkImportMetalSharedEventInfoEXT::safe_VkImportMetalSharedEventInfoEXT(const safe_VkImportMetalSharedEventInfoEXT& copy_src) {
    sType = copy_src.sType;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImportMetalSharedEventInfoEXT& safe_VkImportMetalSharedEventInfoEXT::operator=(
    const safe_VkImportMetalSharedEventInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mtlSharedEvent = copy_src.mtlSharedEvent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImportMetalSharedEventInfoEXT::~safe_VkImportMetalSharedEventInfoEXT() { FreePnextChain(pNext); }

void safe_VkImportMetalSharedEventInfoEXT::initialize(const VkImportMetalSharedEventInfoEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mtlSharedEvent = in_struct->mtlSharedEvent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImportMetalSharedEventInfoEXT::initialize(const safe_VkImportMetalSharedEventInfoEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mtlSharedEvent = copy_src->mtlSharedEvent;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_METAL_EXT

safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT(
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

safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT()
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

safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT(
    const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::~safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::initialize(const VkPhysicalDeviceDescriptorBufferPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
    const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      combinedImageSamplerDensityMapDescriptorSize(in_struct->combinedImageSamplerDensityMapDescriptorSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT),
      pNext(nullptr),
      combinedImageSamplerDensityMapDescriptorSize() {}

safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
    const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src.combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&
safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src.combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::~safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::initialize(
    const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    combinedImageSamplerDensityMapDescriptorSize = in_struct->combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    combinedImageSamplerDensityMapDescriptorSize = copy_src->combinedImageSamplerDensityMapDescriptorSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorAddressInfoEXT::safe_VkDescriptorAddressInfoEXT(const VkDescriptorAddressInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), address(in_struct->address), range(in_struct->range), format(in_struct->format) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorAddressInfoEXT::safe_VkDescriptorAddressInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT), pNext(nullptr), address(), range(), format() {}

safe_VkDescriptorAddressInfoEXT::safe_VkDescriptorAddressInfoEXT(const safe_VkDescriptorAddressInfoEXT& copy_src) {
    sType = copy_src.sType;
    address = copy_src.address;
    range = copy_src.range;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorAddressInfoEXT& safe_VkDescriptorAddressInfoEXT::operator=(const safe_VkDescriptorAddressInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    address = copy_src.address;
    range = copy_src.range;
    format = copy_src.format;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorAddressInfoEXT::~safe_VkDescriptorAddressInfoEXT() { FreePnextChain(pNext); }

void safe_VkDescriptorAddressInfoEXT::initialize(const VkDescriptorAddressInfoEXT* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    address = in_struct->address;
    range = in_struct->range;
    format = in_struct->format;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorAddressInfoEXT::initialize(const safe_VkDescriptorAddressInfoEXT* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    address = copy_src->address;
    range = copy_src->range;
    format = copy_src->format;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorBufferBindingInfoEXT::safe_VkDescriptorBufferBindingInfoEXT(const VkDescriptorBufferBindingInfoEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), address(in_struct->address), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorBufferBindingInfoEXT::safe_VkDescriptorBufferBindingInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT), pNext(nullptr), address(), usage() {}

safe_VkDescriptorBufferBindingInfoEXT::safe_VkDescriptorBufferBindingInfoEXT(
    const safe_VkDescriptorBufferBindingInfoEXT& copy_src) {
    sType = copy_src.sType;
    address = copy_src.address;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorBufferBindingInfoEXT& safe_VkDescriptorBufferBindingInfoEXT::operator=(
    const safe_VkDescriptorBufferBindingInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    address = copy_src.address;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorBufferBindingInfoEXT::~safe_VkDescriptorBufferBindingInfoEXT() { FreePnextChain(pNext); }

void safe_VkDescriptorBufferBindingInfoEXT::initialize(const VkDescriptorBufferBindingInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    address = in_struct->address;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorBufferBindingInfoEXT::initialize(const safe_VkDescriptorBufferBindingInfoEXT* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    address = copy_src->address;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(
    const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT), pNext(nullptr), buffer() {}

safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(
    const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::operator=(
    const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::~safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT() {
    FreePnextChain(pNext);
}

void safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::initialize(
    const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::initialize(
    const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorGetInfoEXT::safe_VkDescriptorGetInfoEXT(const VkDescriptorGetInfoEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), type(in_struct->type), data(in_struct->data) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorGetInfoEXT::safe_VkDescriptorGetInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT), pNext(nullptr), type(), data() {}

safe_VkDescriptorGetInfoEXT::safe_VkDescriptorGetInfoEXT(const safe_VkDescriptorGetInfoEXT& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    data = copy_src.data;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorGetInfoEXT& safe_VkDescriptorGetInfoEXT::operator=(const safe_VkDescriptorGetInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    data = copy_src.data;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorGetInfoEXT::~safe_VkDescriptorGetInfoEXT() { FreePnextChain(pNext); }

void safe_VkDescriptorGetInfoEXT::initialize(const VkDescriptorGetInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    data = in_struct->data;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorGetInfoEXT::initialize(const safe_VkDescriptorGetInfoEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    data = copy_src->data;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferCaptureDescriptorDataInfoEXT::safe_VkBufferCaptureDescriptorDataInfoEXT(
    const VkBufferCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferCaptureDescriptorDataInfoEXT::safe_VkBufferCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), buffer() {}

safe_VkBufferCaptureDescriptorDataInfoEXT::safe_VkBufferCaptureDescriptorDataInfoEXT(
    const safe_VkBufferCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferCaptureDescriptorDataInfoEXT& safe_VkBufferCaptureDescriptorDataInfoEXT::operator=(
    const safe_VkBufferCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferCaptureDescriptorDataInfoEXT::~safe_VkBufferCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void safe_VkBufferCaptureDescriptorDataInfoEXT::initialize(const VkBufferCaptureDescriptorDataInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferCaptureDescriptorDataInfoEXT::initialize(const safe_VkBufferCaptureDescriptorDataInfoEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageCaptureDescriptorDataInfoEXT::safe_VkImageCaptureDescriptorDataInfoEXT(
    const VkImageCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageCaptureDescriptorDataInfoEXT::safe_VkImageCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), image() {}

safe_VkImageCaptureDescriptorDataInfoEXT::safe_VkImageCaptureDescriptorDataInfoEXT(
    const safe_VkImageCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageCaptureDescriptorDataInfoEXT& safe_VkImageCaptureDescriptorDataInfoEXT::operator=(
    const safe_VkImageCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageCaptureDescriptorDataInfoEXT::~safe_VkImageCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void safe_VkImageCaptureDescriptorDataInfoEXT::initialize(const VkImageCaptureDescriptorDataInfoEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageCaptureDescriptorDataInfoEXT::initialize(const safe_VkImageCaptureDescriptorDataInfoEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageViewCaptureDescriptorDataInfoEXT::safe_VkImageViewCaptureDescriptorDataInfoEXT(
    const VkImageViewCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageView(in_struct->imageView) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewCaptureDescriptorDataInfoEXT::safe_VkImageViewCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), imageView() {}

safe_VkImageViewCaptureDescriptorDataInfoEXT::safe_VkImageViewCaptureDescriptorDataInfoEXT(
    const safe_VkImageViewCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewCaptureDescriptorDataInfoEXT& safe_VkImageViewCaptureDescriptorDataInfoEXT::operator=(
    const safe_VkImageViewCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewCaptureDescriptorDataInfoEXT::~safe_VkImageViewCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void safe_VkImageViewCaptureDescriptorDataInfoEXT::initialize(const VkImageViewCaptureDescriptorDataInfoEXT* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewCaptureDescriptorDataInfoEXT::initialize(const safe_VkImageViewCaptureDescriptorDataInfoEXT* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerCaptureDescriptorDataInfoEXT::safe_VkSamplerCaptureDescriptorDataInfoEXT(
    const VkSamplerCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), sampler(in_struct->sampler) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerCaptureDescriptorDataInfoEXT::safe_VkSamplerCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), pNext(nullptr), sampler() {}

safe_VkSamplerCaptureDescriptorDataInfoEXT::safe_VkSamplerCaptureDescriptorDataInfoEXT(
    const safe_VkSamplerCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerCaptureDescriptorDataInfoEXT& safe_VkSamplerCaptureDescriptorDataInfoEXT::operator=(
    const safe_VkSamplerCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampler = copy_src.sampler;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerCaptureDescriptorDataInfoEXT::~safe_VkSamplerCaptureDescriptorDataInfoEXT() { FreePnextChain(pNext); }

void safe_VkSamplerCaptureDescriptorDataInfoEXT::initialize(const VkSamplerCaptureDescriptorDataInfoEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampler = in_struct->sampler;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerCaptureDescriptorDataInfoEXT::initialize(const safe_VkSamplerCaptureDescriptorDataInfoEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampler = copy_src->sampler;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT(
    const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureDescriptorData(in_struct->opaqueCaptureDescriptorData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT),
      pNext(nullptr),
      opaqueCaptureDescriptorData(nullptr) {}

safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT(
    const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureDescriptorData = copy_src.opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::operator=(
    const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureDescriptorData = copy_src.opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::~safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::initialize(const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureDescriptorData = in_struct->opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT::initialize(const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureDescriptorData = copy_src->opaqueCaptureDescriptorData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT(
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      accelerationStructure(in_struct->accelerationStructure),
      accelerationStructureNV(in_struct->accelerationStructureNV) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT),
      pNext(nullptr),
      accelerationStructure(),
      accelerationStructureNV() {}

safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT(
    const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& copy_src) {
    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureNV = copy_src.accelerationStructureNV;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::operator=(
    const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureNV = copy_src.accelerationStructureNV;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::~safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::initialize(
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructure = in_struct->accelerationStructure;
    accelerationStructureNV = in_struct->accelerationStructureNV;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT::initialize(
    const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructure = copy_src->accelerationStructure;
    accelerationStructureNV = copy_src->accelerationStructureNV;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
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

safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT),
      pNext(nullptr),
      graphicsPipelineLibraryFastLinking(),
      graphicsPipelineLibraryIndependentInterpolationDecoration() {}

safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
    const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    graphicsPipelineLibraryFastLinking = copy_src.graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src.graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    graphicsPipelineLibraryFastLinking = copy_src.graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src.graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::~safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::initialize(
    const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    graphicsPipelineLibraryFastLinking = in_struct->graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration =
        in_struct->graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    graphicsPipelineLibraryFastLinking = copy_src->graphicsPipelineLibraryFastLinking;
    graphicsPipelineLibraryIndependentInterpolationDecoration = copy_src->graphicsPipelineLibraryIndependentInterpolationDecoration;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkGraphicsPipelineLibraryCreateInfoEXT::safe_VkGraphicsPipelineLibraryCreateInfoEXT(
    const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkGraphicsPipelineLibraryCreateInfoEXT::safe_VkGraphicsPipelineLibraryCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT), pNext(nullptr), flags() {}

safe_VkGraphicsPipelineLibraryCreateInfoEXT::safe_VkGraphicsPipelineLibraryCreateInfoEXT(
    const safe_VkGraphicsPipelineLibraryCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkGraphicsPipelineLibraryCreateInfoEXT& safe_VkGraphicsPipelineLibraryCreateInfoEXT::operator=(
    const safe_VkGraphicsPipelineLibraryCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkGraphicsPipelineLibraryCreateInfoEXT::~safe_VkGraphicsPipelineLibraryCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkGraphicsPipelineLibraryCreateInfoEXT::initialize(const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkGraphicsPipelineLibraryCreateInfoEXT::initialize(const safe_VkGraphicsPipelineLibraryCreateInfoEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(
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

safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT),
      pNext(nullptr),
      subsampledLoads(),
      subsampledCoarseReconstructionEarlyAccess(),
      maxSubsampledArrayLayers(),
      maxDescriptorSetSubsampledSamplers() {}

safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(
    const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    subsampledLoads = copy_src.subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = copy_src.subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = copy_src.maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = copy_src.maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::operator=(
    const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::~safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::initialize(
    const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subsampledLoads = in_struct->subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = in_struct->subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = in_struct->maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = in_struct->maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::initialize(
    const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subsampledLoads = copy_src->subsampledLoads;
    subsampledCoarseReconstructionEarlyAccess = copy_src->subsampledCoarseReconstructionEarlyAccess;
    maxSubsampledArrayLayers = copy_src->maxSubsampledArrayLayers;
    maxDescriptorSetSubsampledSamplers = copy_src->maxDescriptorSetSubsampledSamplers;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageCompressionControlEXT::safe_VkImageCompressionControlEXT(const VkImageCompressionControlEXT* in_struct,
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

safe_VkImageCompressionControlEXT::safe_VkImageCompressionControlEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT),
      pNext(nullptr),
      flags(),
      compressionControlPlaneCount(),
      pFixedRateFlags(nullptr) {}

safe_VkImageCompressionControlEXT::safe_VkImageCompressionControlEXT(const safe_VkImageCompressionControlEXT& copy_src) {
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

safe_VkImageCompressionControlEXT& safe_VkImageCompressionControlEXT::operator=(const safe_VkImageCompressionControlEXT& copy_src) {
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

safe_VkImageCompressionControlEXT::~safe_VkImageCompressionControlEXT() {
    if (pFixedRateFlags) delete[] pFixedRateFlags;
    FreePnextChain(pNext);
}

void safe_VkImageCompressionControlEXT::initialize(const VkImageCompressionControlEXT* in_struct,
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

void safe_VkImageCompressionControlEXT::initialize(const safe_VkImageCompressionControlEXT* copy_src,
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

safe_VkImageCompressionPropertiesEXT::safe_VkImageCompressionPropertiesEXT(const VkImageCompressionPropertiesEXT* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      imageCompressionFlags(in_struct->imageCompressionFlags),
      imageCompressionFixedRateFlags(in_struct->imageCompressionFixedRateFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageCompressionPropertiesEXT::safe_VkImageCompressionPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT),
      pNext(nullptr),
      imageCompressionFlags(),
      imageCompressionFixedRateFlags() {}

safe_VkImageCompressionPropertiesEXT::safe_VkImageCompressionPropertiesEXT(const safe_VkImageCompressionPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    imageCompressionFlags = copy_src.imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src.imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageCompressionPropertiesEXT& safe_VkImageCompressionPropertiesEXT::operator=(
    const safe_VkImageCompressionPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageCompressionFlags = copy_src.imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src.imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageCompressionPropertiesEXT::~safe_VkImageCompressionPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkImageCompressionPropertiesEXT::initialize(const VkImageCompressionPropertiesEXT* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageCompressionFlags = in_struct->imageCompressionFlags;
    imageCompressionFixedRateFlags = in_struct->imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageCompressionPropertiesEXT::initialize(const safe_VkImageCompressionPropertiesEXT* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageCompressionFlags = copy_src->imageCompressionFlags;
    imageCompressionFixedRateFlags = copy_src->imageCompressionFixedRateFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceFaultCountsEXT::safe_VkDeviceFaultCountsEXT(const VkDeviceFaultCountsEXT* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      addressInfoCount(in_struct->addressInfoCount),
      vendorInfoCount(in_struct->vendorInfoCount),
      vendorBinarySize(in_struct->vendorBinarySize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceFaultCountsEXT::safe_VkDeviceFaultCountsEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT), pNext(nullptr), addressInfoCount(), vendorInfoCount(), vendorBinarySize() {}

safe_VkDeviceFaultCountsEXT::safe_VkDeviceFaultCountsEXT(const safe_VkDeviceFaultCountsEXT& copy_src) {
    sType = copy_src.sType;
    addressInfoCount = copy_src.addressInfoCount;
    vendorInfoCount = copy_src.vendorInfoCount;
    vendorBinarySize = copy_src.vendorBinarySize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceFaultCountsEXT& safe_VkDeviceFaultCountsEXT::operator=(const safe_VkDeviceFaultCountsEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    addressInfoCount = copy_src.addressInfoCount;
    vendorInfoCount = copy_src.vendorInfoCount;
    vendorBinarySize = copy_src.vendorBinarySize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceFaultCountsEXT::~safe_VkDeviceFaultCountsEXT() { FreePnextChain(pNext); }

void safe_VkDeviceFaultCountsEXT::initialize(const VkDeviceFaultCountsEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    addressInfoCount = in_struct->addressInfoCount;
    vendorInfoCount = in_struct->vendorInfoCount;
    vendorBinarySize = in_struct->vendorBinarySize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceFaultCountsEXT::initialize(const safe_VkDeviceFaultCountsEXT* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    addressInfoCount = copy_src->addressInfoCount;
    vendorInfoCount = copy_src->vendorInfoCount;
    vendorBinarySize = copy_src->vendorBinarySize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceFaultInfoEXT::safe_VkDeviceFaultInfoEXT(const VkDeviceFaultInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkDeviceFaultInfoEXT::safe_VkDeviceFaultInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT),
      pNext(nullptr),
      pAddressInfos(nullptr),
      pVendorInfos(nullptr),
      pVendorBinaryData(nullptr) {}

safe_VkDeviceFaultInfoEXT::safe_VkDeviceFaultInfoEXT(const safe_VkDeviceFaultInfoEXT& copy_src) {
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

safe_VkDeviceFaultInfoEXT& safe_VkDeviceFaultInfoEXT::operator=(const safe_VkDeviceFaultInfoEXT& copy_src) {
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

safe_VkDeviceFaultInfoEXT::~safe_VkDeviceFaultInfoEXT() {
    if (pAddressInfos) delete pAddressInfos;
    if (pVendorInfos) delete pVendorInfos;
    FreePnextChain(pNext);
}

void safe_VkDeviceFaultInfoEXT::initialize(const VkDeviceFaultInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkDeviceFaultInfoEXT::initialize(const safe_VkDeviceFaultInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT

safe_VkDirectFBSurfaceCreateInfoEXT::safe_VkDirectFBSurfaceCreateInfoEXT(const VkDirectFBSurfaceCreateInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
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

safe_VkDirectFBSurfaceCreateInfoEXT::safe_VkDirectFBSurfaceCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT), pNext(nullptr), flags(), dfb(nullptr), surface(nullptr) {}

safe_VkDirectFBSurfaceCreateInfoEXT::safe_VkDirectFBSurfaceCreateInfoEXT(const safe_VkDirectFBSurfaceCreateInfoEXT& copy_src) {
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

safe_VkDirectFBSurfaceCreateInfoEXT& safe_VkDirectFBSurfaceCreateInfoEXT::operator=(
    const safe_VkDirectFBSurfaceCreateInfoEXT& copy_src) {
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

safe_VkDirectFBSurfaceCreateInfoEXT::~safe_VkDirectFBSurfaceCreateInfoEXT() {
    if (dfb) delete dfb;
    if (surface) delete surface;
    FreePnextChain(pNext);
}

void safe_VkDirectFBSurfaceCreateInfoEXT::initialize(const VkDirectFBSurfaceCreateInfoEXT* in_struct,
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

void safe_VkDirectFBSurfaceCreateInfoEXT::initialize(const safe_VkDirectFBSurfaceCreateInfoEXT* copy_src,
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

safe_VkMutableDescriptorTypeListEXT::safe_VkMutableDescriptorTypeListEXT(const VkMutableDescriptorTypeListEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state)
    : descriptorTypeCount(in_struct->descriptorTypeCount), pDescriptorTypes(nullptr) {
    if (in_struct->pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[in_struct->descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)in_struct->pDescriptorTypes,
               sizeof(VkDescriptorType) * in_struct->descriptorTypeCount);
    }
}

safe_VkMutableDescriptorTypeListEXT::safe_VkMutableDescriptorTypeListEXT() : descriptorTypeCount(), pDescriptorTypes(nullptr) {}

safe_VkMutableDescriptorTypeListEXT::safe_VkMutableDescriptorTypeListEXT(const safe_VkMutableDescriptorTypeListEXT& copy_src) {
    descriptorTypeCount = copy_src.descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (copy_src.pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[copy_src.descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)copy_src.pDescriptorTypes, sizeof(VkDescriptorType) * copy_src.descriptorTypeCount);
    }
}

safe_VkMutableDescriptorTypeListEXT& safe_VkMutableDescriptorTypeListEXT::operator=(
    const safe_VkMutableDescriptorTypeListEXT& copy_src) {
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

safe_VkMutableDescriptorTypeListEXT::~safe_VkMutableDescriptorTypeListEXT() {
    if (pDescriptorTypes) delete[] pDescriptorTypes;
}

void safe_VkMutableDescriptorTypeListEXT::initialize(const VkMutableDescriptorTypeListEXT* in_struct,
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

void safe_VkMutableDescriptorTypeListEXT::initialize(const safe_VkMutableDescriptorTypeListEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    descriptorTypeCount = copy_src->descriptorTypeCount;
    pDescriptorTypes = nullptr;

    if (copy_src->pDescriptorTypes) {
        pDescriptorTypes = new VkDescriptorType[copy_src->descriptorTypeCount];
        memcpy((void*)pDescriptorTypes, (void*)copy_src->pDescriptorTypes,
               sizeof(VkDescriptorType) * copy_src->descriptorTypeCount);
    }
}

safe_VkMutableDescriptorTypeCreateInfoEXT::safe_VkMutableDescriptorTypeCreateInfoEXT(
    const VkMutableDescriptorTypeCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      mutableDescriptorTypeListCount(in_struct->mutableDescriptorTypeListCount),
      pMutableDescriptorTypeLists(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (mutableDescriptorTypeListCount && in_struct->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new safe_VkMutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&in_struct->pMutableDescriptorTypeLists[i]);
        }
    }
}

safe_VkMutableDescriptorTypeCreateInfoEXT::safe_VkMutableDescriptorTypeCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT),
      pNext(nullptr),
      mutableDescriptorTypeListCount(),
      pMutableDescriptorTypeLists(nullptr) {}

safe_VkMutableDescriptorTypeCreateInfoEXT::safe_VkMutableDescriptorTypeCreateInfoEXT(
    const safe_VkMutableDescriptorTypeCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    mutableDescriptorTypeListCount = copy_src.mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (mutableDescriptorTypeListCount && copy_src.pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new safe_VkMutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src.pMutableDescriptorTypeLists[i]);
        }
    }
}

safe_VkMutableDescriptorTypeCreateInfoEXT& safe_VkMutableDescriptorTypeCreateInfoEXT::operator=(
    const safe_VkMutableDescriptorTypeCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    mutableDescriptorTypeListCount = copy_src.mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (mutableDescriptorTypeListCount && copy_src.pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new safe_VkMutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src.pMutableDescriptorTypeLists[i]);
        }
    }

    return *this;
}

safe_VkMutableDescriptorTypeCreateInfoEXT::~safe_VkMutableDescriptorTypeCreateInfoEXT() {
    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);
}

void safe_VkMutableDescriptorTypeCreateInfoEXT::initialize(const VkMutableDescriptorTypeCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMutableDescriptorTypeLists) delete[] pMutableDescriptorTypeLists;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mutableDescriptorTypeListCount = in_struct->mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (mutableDescriptorTypeListCount && in_struct->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new safe_VkMutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&in_struct->pMutableDescriptorTypeLists[i]);
        }
    }
}

void safe_VkMutableDescriptorTypeCreateInfoEXT::initialize(const safe_VkMutableDescriptorTypeCreateInfoEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mutableDescriptorTypeListCount = copy_src->mutableDescriptorTypeListCount;
    pMutableDescriptorTypeLists = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (mutableDescriptorTypeListCount && copy_src->pMutableDescriptorTypeLists) {
        pMutableDescriptorTypeLists = new safe_VkMutableDescriptorTypeListEXT[mutableDescriptorTypeListCount];
        for (uint32_t i = 0; i < mutableDescriptorTypeListCount; ++i) {
            pMutableDescriptorTypeLists[i].initialize(&copy_src->pMutableDescriptorTypeLists[i]);
        }
    }
}

safe_VkVertexInputBindingDescription2EXT::safe_VkVertexInputBindingDescription2EXT(
    const VkVertexInputBindingDescription2EXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      binding(in_struct->binding),
      stride(in_struct->stride),
      inputRate(in_struct->inputRate),
      divisor(in_struct->divisor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkVertexInputBindingDescription2EXT::safe_VkVertexInputBindingDescription2EXT()
    : sType(VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT),
      pNext(nullptr),
      binding(),
      stride(),
      inputRate(),
      divisor() {}

safe_VkVertexInputBindingDescription2EXT::safe_VkVertexInputBindingDescription2EXT(
    const safe_VkVertexInputBindingDescription2EXT& copy_src) {
    sType = copy_src.sType;
    binding = copy_src.binding;
    stride = copy_src.stride;
    inputRate = copy_src.inputRate;
    divisor = copy_src.divisor;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkVertexInputBindingDescription2EXT& safe_VkVertexInputBindingDescription2EXT::operator=(
    const safe_VkVertexInputBindingDescription2EXT& copy_src) {
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

safe_VkVertexInputBindingDescription2EXT::~safe_VkVertexInputBindingDescription2EXT() { FreePnextChain(pNext); }

void safe_VkVertexInputBindingDescription2EXT::initialize(const VkVertexInputBindingDescription2EXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    binding = in_struct->binding;
    stride = in_struct->stride;
    inputRate = in_struct->inputRate;
    divisor = in_struct->divisor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkVertexInputBindingDescription2EXT::initialize(const safe_VkVertexInputBindingDescription2EXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    binding = copy_src->binding;
    stride = copy_src->stride;
    inputRate = copy_src->inputRate;
    divisor = copy_src->divisor;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkVertexInputAttributeDescription2EXT::safe_VkVertexInputAttributeDescription2EXT(
    const VkVertexInputAttributeDescription2EXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      location(in_struct->location),
      binding(in_struct->binding),
      format(in_struct->format),
      offset(in_struct->offset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkVertexInputAttributeDescription2EXT::safe_VkVertexInputAttributeDescription2EXT()
    : sType(VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT),
      pNext(nullptr),
      location(),
      binding(),
      format(),
      offset() {}

safe_VkVertexInputAttributeDescription2EXT::safe_VkVertexInputAttributeDescription2EXT(
    const safe_VkVertexInputAttributeDescription2EXT& copy_src) {
    sType = copy_src.sType;
    location = copy_src.location;
    binding = copy_src.binding;
    format = copy_src.format;
    offset = copy_src.offset;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkVertexInputAttributeDescription2EXT& safe_VkVertexInputAttributeDescription2EXT::operator=(
    const safe_VkVertexInputAttributeDescription2EXT& copy_src) {
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

safe_VkVertexInputAttributeDescription2EXT::~safe_VkVertexInputAttributeDescription2EXT() { FreePnextChain(pNext); }

void safe_VkVertexInputAttributeDescription2EXT::initialize(const VkVertexInputAttributeDescription2EXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    location = in_struct->location;
    binding = in_struct->binding;
    format = in_struct->format;
    offset = in_struct->offset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkVertexInputAttributeDescription2EXT::initialize(const safe_VkVertexInputAttributeDescription2EXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    location = copy_src->location;
    binding = copy_src->binding;
    format = copy_src->format;
    offset = copy_src->offset;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceDrmPropertiesEXT::safe_VkPhysicalDeviceDrmPropertiesEXT(const VkPhysicalDeviceDrmPropertiesEXT* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
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

safe_VkPhysicalDeviceDrmPropertiesEXT::safe_VkPhysicalDeviceDrmPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT),
      pNext(nullptr),
      hasPrimary(),
      hasRender(),
      primaryMajor(),
      primaryMinor(),
      renderMajor(),
      renderMinor() {}

safe_VkPhysicalDeviceDrmPropertiesEXT::safe_VkPhysicalDeviceDrmPropertiesEXT(
    const safe_VkPhysicalDeviceDrmPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    hasPrimary = copy_src.hasPrimary;
    hasRender = copy_src.hasRender;
    primaryMajor = copy_src.primaryMajor;
    primaryMinor = copy_src.primaryMinor;
    renderMajor = copy_src.renderMajor;
    renderMinor = copy_src.renderMinor;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDrmPropertiesEXT& safe_VkPhysicalDeviceDrmPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceDrmPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceDrmPropertiesEXT::~safe_VkPhysicalDeviceDrmPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDrmPropertiesEXT::initialize(const VkPhysicalDeviceDrmPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceDrmPropertiesEXT::initialize(const safe_VkPhysicalDeviceDrmPropertiesEXT* copy_src,
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

safe_VkDeviceAddressBindingCallbackDataEXT::safe_VkDeviceAddressBindingCallbackDataEXT(
    const VkDeviceAddressBindingCallbackDataEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      baseAddress(in_struct->baseAddress),
      size(in_struct->size),
      bindingType(in_struct->bindingType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceAddressBindingCallbackDataEXT::safe_VkDeviceAddressBindingCallbackDataEXT()
    : sType(VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT),
      pNext(nullptr),
      flags(),
      baseAddress(),
      size(),
      bindingType() {}

safe_VkDeviceAddressBindingCallbackDataEXT::safe_VkDeviceAddressBindingCallbackDataEXT(
    const safe_VkDeviceAddressBindingCallbackDataEXT& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    baseAddress = copy_src.baseAddress;
    size = copy_src.size;
    bindingType = copy_src.bindingType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceAddressBindingCallbackDataEXT& safe_VkDeviceAddressBindingCallbackDataEXT::operator=(
    const safe_VkDeviceAddressBindingCallbackDataEXT& copy_src) {
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

safe_VkDeviceAddressBindingCallbackDataEXT::~safe_VkDeviceAddressBindingCallbackDataEXT() { FreePnextChain(pNext); }

void safe_VkDeviceAddressBindingCallbackDataEXT::initialize(const VkDeviceAddressBindingCallbackDataEXT* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    baseAddress = in_struct->baseAddress;
    size = in_struct->size;
    bindingType = in_struct->bindingType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceAddressBindingCallbackDataEXT::initialize(const safe_VkDeviceAddressBindingCallbackDataEXT* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    baseAddress = copy_src->baseAddress;
    size = copy_src->size;
    bindingType = copy_src->bindingType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineViewportDepthClipControlCreateInfoEXT::safe_VkPipelineViewportDepthClipControlCreateInfoEXT(
    const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), negativeOneToOne(in_struct->negativeOneToOne) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineViewportDepthClipControlCreateInfoEXT::safe_VkPipelineViewportDepthClipControlCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT), pNext(nullptr), negativeOneToOne() {}

safe_VkPipelineViewportDepthClipControlCreateInfoEXT::safe_VkPipelineViewportDepthClipControlCreateInfoEXT(
    const safe_VkPipelineViewportDepthClipControlCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    negativeOneToOne = copy_src.negativeOneToOne;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineViewportDepthClipControlCreateInfoEXT& safe_VkPipelineViewportDepthClipControlCreateInfoEXT::operator=(
    const safe_VkPipelineViewportDepthClipControlCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    negativeOneToOne = copy_src.negativeOneToOne;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineViewportDepthClipControlCreateInfoEXT::~safe_VkPipelineViewportDepthClipControlCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkPipelineViewportDepthClipControlCreateInfoEXT::initialize(
    const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    negativeOneToOne = in_struct->negativeOneToOne;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineViewportDepthClipControlCreateInfoEXT::initialize(
    const safe_VkPipelineViewportDepthClipControlCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    negativeOneToOne = copy_src->negativeOneToOne;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelinePropertiesIdentifierEXT::safe_VkPipelinePropertiesIdentifierEXT(const VkPipelinePropertiesIdentifierEXT* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = in_struct->pipelineIdentifier[i];
    }
}

safe_VkPipelinePropertiesIdentifierEXT::safe_VkPipelinePropertiesIdentifierEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT), pNext(nullptr) {}

safe_VkPipelinePropertiesIdentifierEXT::safe_VkPipelinePropertiesIdentifierEXT(
    const safe_VkPipelinePropertiesIdentifierEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src.pipelineIdentifier[i];
    }
}

safe_VkPipelinePropertiesIdentifierEXT& safe_VkPipelinePropertiesIdentifierEXT::operator=(
    const safe_VkPipelinePropertiesIdentifierEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src.pipelineIdentifier[i];
    }

    return *this;
}

safe_VkPipelinePropertiesIdentifierEXT::~safe_VkPipelinePropertiesIdentifierEXT() { FreePnextChain(pNext); }

void safe_VkPipelinePropertiesIdentifierEXT::initialize(const VkPipelinePropertiesIdentifierEXT* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = in_struct->pipelineIdentifier[i];
    }
}

void safe_VkPipelinePropertiesIdentifierEXT::initialize(const safe_VkPipelinePropertiesIdentifierEXT* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        pipelineIdentifier[i] = copy_src->pipelineIdentifier[i];
    }
}

safe_VkFrameBoundaryEXT::safe_VkFrameBoundaryEXT(const VkFrameBoundaryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
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

safe_VkFrameBoundaryEXT::safe_VkFrameBoundaryEXT()
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

safe_VkFrameBoundaryEXT::safe_VkFrameBoundaryEXT(const safe_VkFrameBoundaryEXT& copy_src) {
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

safe_VkFrameBoundaryEXT& safe_VkFrameBoundaryEXT::operator=(const safe_VkFrameBoundaryEXT& copy_src) {
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

safe_VkFrameBoundaryEXT::~safe_VkFrameBoundaryEXT() {
    if (pImages) delete[] pImages;
    if (pBuffers) delete[] pBuffers;
    FreePnextChain(pNext);
}

void safe_VkFrameBoundaryEXT::initialize(const VkFrameBoundaryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkFrameBoundaryEXT::initialize(const safe_VkFrameBoundaryEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
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

safe_VkSubpassResolvePerformanceQueryEXT::safe_VkSubpassResolvePerformanceQueryEXT(
    const VkSubpassResolvePerformanceQueryEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), optimal(in_struct->optimal) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSubpassResolvePerformanceQueryEXT::safe_VkSubpassResolvePerformanceQueryEXT()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT), pNext(nullptr), optimal() {}

safe_VkSubpassResolvePerformanceQueryEXT::safe_VkSubpassResolvePerformanceQueryEXT(
    const safe_VkSubpassResolvePerformanceQueryEXT& copy_src) {
    sType = copy_src.sType;
    optimal = copy_src.optimal;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSubpassResolvePerformanceQueryEXT& safe_VkSubpassResolvePerformanceQueryEXT::operator=(
    const safe_VkSubpassResolvePerformanceQueryEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    optimal = copy_src.optimal;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSubpassResolvePerformanceQueryEXT::~safe_VkSubpassResolvePerformanceQueryEXT() { FreePnextChain(pNext); }

void safe_VkSubpassResolvePerformanceQueryEXT::initialize(const VkSubpassResolvePerformanceQueryEXT* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    optimal = in_struct->optimal;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSubpassResolvePerformanceQueryEXT::initialize(const safe_VkSubpassResolvePerformanceQueryEXT* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    optimal = copy_src->optimal;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMultisampledRenderToSingleSampledInfoEXT::safe_VkMultisampledRenderToSingleSampledInfoEXT(
    const VkMultisampledRenderToSingleSampledInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      multisampledRenderToSingleSampledEnable(in_struct->multisampledRenderToSingleSampledEnable),
      rasterizationSamples(in_struct->rasterizationSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMultisampledRenderToSingleSampledInfoEXT::safe_VkMultisampledRenderToSingleSampledInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT),
      pNext(nullptr),
      multisampledRenderToSingleSampledEnable(),
      rasterizationSamples() {}

safe_VkMultisampledRenderToSingleSampledInfoEXT::safe_VkMultisampledRenderToSingleSampledInfoEXT(
    const safe_VkMultisampledRenderToSingleSampledInfoEXT& copy_src) {
    sType = copy_src.sType;
    multisampledRenderToSingleSampledEnable = copy_src.multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMultisampledRenderToSingleSampledInfoEXT& safe_VkMultisampledRenderToSingleSampledInfoEXT::operator=(
    const safe_VkMultisampledRenderToSingleSampledInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multisampledRenderToSingleSampledEnable = copy_src.multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMultisampledRenderToSingleSampledInfoEXT::~safe_VkMultisampledRenderToSingleSampledInfoEXT() { FreePnextChain(pNext); }

void safe_VkMultisampledRenderToSingleSampledInfoEXT::initialize(const VkMultisampledRenderToSingleSampledInfoEXT* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multisampledRenderToSingleSampledEnable = in_struct->multisampledRenderToSingleSampledEnable;
    rasterizationSamples = in_struct->rasterizationSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMultisampledRenderToSingleSampledInfoEXT::initialize(const safe_VkMultisampledRenderToSingleSampledInfoEXT* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multisampledRenderToSingleSampledEnable = copy_src->multisampledRenderToSingleSampledEnable;
    rasterizationSamples = copy_src->rasterizationSamples;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineColorWriteCreateInfoEXT::safe_VkPipelineColorWriteCreateInfoEXT(const VkPipelineColorWriteCreateInfoEXT* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType), attachmentCount(in_struct->attachmentCount), pColorWriteEnables(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[in_struct->attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)in_struct->pColorWriteEnables, sizeof(VkBool32) * in_struct->attachmentCount);
    }
}

safe_VkPipelineColorWriteCreateInfoEXT::safe_VkPipelineColorWriteCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT),
      pNext(nullptr),
      attachmentCount(),
      pColorWriteEnables(nullptr) {}

safe_VkPipelineColorWriteCreateInfoEXT::safe_VkPipelineColorWriteCreateInfoEXT(
    const safe_VkPipelineColorWriteCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pColorWriteEnables = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorWriteEnables) {
        pColorWriteEnables = new VkBool32[copy_src.attachmentCount];
        memcpy((void*)pColorWriteEnables, (void*)copy_src.pColorWriteEnables, sizeof(VkBool32) * copy_src.attachmentCount);
    }
}

safe_VkPipelineColorWriteCreateInfoEXT& safe_VkPipelineColorWriteCreateInfoEXT::operator=(
    const safe_VkPipelineColorWriteCreateInfoEXT& copy_src) {
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

safe_VkPipelineColorWriteCreateInfoEXT::~safe_VkPipelineColorWriteCreateInfoEXT() {
    if (pColorWriteEnables) delete[] pColorWriteEnables;
    FreePnextChain(pNext);
}

void safe_VkPipelineColorWriteCreateInfoEXT::initialize(const VkPipelineColorWriteCreateInfoEXT* in_struct,
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

void safe_VkPipelineColorWriteCreateInfoEXT::initialize(const safe_VkPipelineColorWriteCreateInfoEXT* copy_src,
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

safe_VkImageViewMinLodCreateInfoEXT::safe_VkImageViewMinLodCreateInfoEXT(const VkImageViewMinLodCreateInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), minLod(in_struct->minLod) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewMinLodCreateInfoEXT::safe_VkImageViewMinLodCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT), pNext(nullptr), minLod() {}

safe_VkImageViewMinLodCreateInfoEXT::safe_VkImageViewMinLodCreateInfoEXT(const safe_VkImageViewMinLodCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewMinLodCreateInfoEXT& safe_VkImageViewMinLodCreateInfoEXT::operator=(
    const safe_VkImageViewMinLodCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minLod = copy_src.minLod;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewMinLodCreateInfoEXT::~safe_VkImageViewMinLodCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkImageViewMinLodCreateInfoEXT::initialize(const VkImageViewMinLodCreateInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minLod = in_struct->minLod;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewMinLodCreateInfoEXT::initialize(const safe_VkImageViewMinLodCreateInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minLod = copy_src->minLod;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMultiDrawPropertiesEXT::safe_VkPhysicalDeviceMultiDrawPropertiesEXT(
    const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxMultiDrawCount(in_struct->maxMultiDrawCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMultiDrawPropertiesEXT::safe_VkPhysicalDeviceMultiDrawPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT), pNext(nullptr), maxMultiDrawCount() {}

safe_VkPhysicalDeviceMultiDrawPropertiesEXT::safe_VkPhysicalDeviceMultiDrawPropertiesEXT(
    const safe_VkPhysicalDeviceMultiDrawPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxMultiDrawCount = copy_src.maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMultiDrawPropertiesEXT& safe_VkPhysicalDeviceMultiDrawPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceMultiDrawPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxMultiDrawCount = copy_src.maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMultiDrawPropertiesEXT::~safe_VkPhysicalDeviceMultiDrawPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMultiDrawPropertiesEXT::initialize(const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxMultiDrawCount = in_struct->maxMultiDrawCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMultiDrawPropertiesEXT::initialize(const safe_VkPhysicalDeviceMultiDrawPropertiesEXT* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxMultiDrawCount = copy_src->maxMultiDrawCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::safe_VkPhysicalDeviceShaderTileImagePropertiesEXT(
    const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderTileImageCoherentReadAccelerated(in_struct->shaderTileImageCoherentReadAccelerated),
      shaderTileImageReadSampleFromPixelRateInvocation(in_struct->shaderTileImageReadSampleFromPixelRateInvocation),
      shaderTileImageReadFromHelperInvocation(in_struct->shaderTileImageReadFromHelperInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::safe_VkPhysicalDeviceShaderTileImagePropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT),
      pNext(nullptr),
      shaderTileImageCoherentReadAccelerated(),
      shaderTileImageReadSampleFromPixelRateInvocation(),
      shaderTileImageReadFromHelperInvocation() {}

safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::safe_VkPhysicalDeviceShaderTileImagePropertiesEXT(
    const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& copy_src) {
    sType = copy_src.sType;
    shaderTileImageCoherentReadAccelerated = copy_src.shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src.shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src.shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::operator=(
    const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderTileImageCoherentReadAccelerated = copy_src.shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src.shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src.shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::~safe_VkPhysicalDeviceShaderTileImagePropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::initialize(const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderTileImageCoherentReadAccelerated = in_struct->shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = in_struct->shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = in_struct->shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderTileImagePropertiesEXT::initialize(
    const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderTileImageCoherentReadAccelerated = copy_src->shaderTileImageCoherentReadAccelerated;
    shaderTileImageReadSampleFromPixelRateInvocation = copy_src->shaderTileImageReadSampleFromPixelRateInvocation;
    shaderTileImageReadFromHelperInvocation = copy_src->shaderTileImageReadFromHelperInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMicromapCreateInfoEXT::safe_VkMicromapCreateInfoEXT(const VkMicromapCreateInfoEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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

safe_VkMicromapCreateInfoEXT::safe_VkMicromapCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT),
      pNext(nullptr),
      createFlags(),
      buffer(),
      offset(),
      size(),
      type(),
      deviceAddress() {}

safe_VkMicromapCreateInfoEXT::safe_VkMicromapCreateInfoEXT(const safe_VkMicromapCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    createFlags = copy_src.createFlags;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    type = copy_src.type;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMicromapCreateInfoEXT& safe_VkMicromapCreateInfoEXT::operator=(const safe_VkMicromapCreateInfoEXT& copy_src) {
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

safe_VkMicromapCreateInfoEXT::~safe_VkMicromapCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkMicromapCreateInfoEXT::initialize(const VkMicromapCreateInfoEXT* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkMicromapCreateInfoEXT::initialize(const safe_VkMicromapCreateInfoEXT* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    createFlags = copy_src->createFlags;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    type = copy_src->type;
    deviceAddress = copy_src->deviceAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT(
    const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxOpacity2StateSubdivisionLevel(in_struct->maxOpacity2StateSubdivisionLevel),
      maxOpacity4StateSubdivisionLevel(in_struct->maxOpacity4StateSubdivisionLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT),
      pNext(nullptr),
      maxOpacity2StateSubdivisionLevel(),
      maxOpacity4StateSubdivisionLevel() {}

safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT(
    const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxOpacity2StateSubdivisionLevel = copy_src.maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src.maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxOpacity2StateSubdivisionLevel = copy_src.maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src.maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::~safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::initialize(const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxOpacity2StateSubdivisionLevel = in_struct->maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = in_struct->maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxOpacity2StateSubdivisionLevel = copy_src->maxOpacity2StateSubdivisionLevel;
    maxOpacity4StateSubdivisionLevel = copy_src->maxOpacity4StateSubdivisionLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMicromapVersionInfoEXT::safe_VkMicromapVersionInfoEXT(const VkMicromapVersionInfoEXT* in_struct,
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

safe_VkMicromapVersionInfoEXT::safe_VkMicromapVersionInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT), pNext(nullptr), pVersionData(nullptr) {}

safe_VkMicromapVersionInfoEXT::safe_VkMicromapVersionInfoEXT(const safe_VkMicromapVersionInfoEXT& copy_src) {
    sType = copy_src.sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src.pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

safe_VkMicromapVersionInfoEXT& safe_VkMicromapVersionInfoEXT::operator=(const safe_VkMicromapVersionInfoEXT& copy_src) {
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

safe_VkMicromapVersionInfoEXT::~safe_VkMicromapVersionInfoEXT() {
    if (pVersionData) delete[] pVersionData;
    FreePnextChain(pNext);
}

void safe_VkMicromapVersionInfoEXT::initialize(const VkMicromapVersionInfoEXT* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
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

void safe_VkMicromapVersionInfoEXT::initialize(const safe_VkMicromapVersionInfoEXT* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

safe_VkCopyMicromapToMemoryInfoEXT::safe_VkCopyMicromapToMemoryInfoEXT(const VkCopyMicromapToMemoryInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(&in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCopyMicromapToMemoryInfoEXT::safe_VkCopyMicromapToMemoryInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT), pNext(nullptr), src(), mode() {}

safe_VkCopyMicromapToMemoryInfoEXT::safe_VkCopyMicromapToMemoryInfoEXT(const safe_VkCopyMicromapToMemoryInfoEXT& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCopyMicromapToMemoryInfoEXT& safe_VkCopyMicromapToMemoryInfoEXT::operator=(
    const safe_VkCopyMicromapToMemoryInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCopyMicromapToMemoryInfoEXT::~safe_VkCopyMicromapToMemoryInfoEXT() { FreePnextChain(pNext); }

void safe_VkCopyMicromapToMemoryInfoEXT::initialize(const VkCopyMicromapToMemoryInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst.initialize(&in_struct->dst);
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCopyMicromapToMemoryInfoEXT::initialize(const safe_VkCopyMicromapToMemoryInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst.initialize(&copy_src->dst);
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyMemoryToMicromapInfoEXT::safe_VkCopyMemoryToMicromapInfoEXT(const VkCopyMemoryToMicromapInfoEXT* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(&in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCopyMemoryToMicromapInfoEXT::safe_VkCopyMemoryToMicromapInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT), pNext(nullptr), dst(), mode() {}

safe_VkCopyMemoryToMicromapInfoEXT::safe_VkCopyMemoryToMicromapInfoEXT(const safe_VkCopyMemoryToMicromapInfoEXT& copy_src) {
    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCopyMemoryToMicromapInfoEXT& safe_VkCopyMemoryToMicromapInfoEXT::operator=(
    const safe_VkCopyMemoryToMicromapInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCopyMemoryToMicromapInfoEXT::~safe_VkCopyMemoryToMicromapInfoEXT() { FreePnextChain(pNext); }

void safe_VkCopyMemoryToMicromapInfoEXT::initialize(const VkCopyMemoryToMicromapInfoEXT* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src.initialize(&in_struct->src);
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCopyMemoryToMicromapInfoEXT::initialize(const safe_VkCopyMemoryToMicromapInfoEXT* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src.initialize(&copy_src->src);
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyMicromapInfoEXT::safe_VkCopyMicromapInfoEXT(const VkCopyMicromapInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCopyMicromapInfoEXT::safe_VkCopyMicromapInfoEXT()
    : sType(VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT), pNext(nullptr), src(), dst(), mode() {}

safe_VkCopyMicromapInfoEXT::safe_VkCopyMicromapInfoEXT(const safe_VkCopyMicromapInfoEXT& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCopyMicromapInfoEXT& safe_VkCopyMicromapInfoEXT::operator=(const safe_VkCopyMicromapInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCopyMicromapInfoEXT::~safe_VkCopyMicromapInfoEXT() { FreePnextChain(pNext); }

void safe_VkCopyMicromapInfoEXT::initialize(const VkCopyMicromapInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCopyMicromapInfoEXT::initialize(const safe_VkCopyMicromapInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMicromapBuildSizesInfoEXT::safe_VkMicromapBuildSizesInfoEXT(const VkMicromapBuildSizesInfoEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      micromapSize(in_struct->micromapSize),
      buildScratchSize(in_struct->buildScratchSize),
      discardable(in_struct->discardable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMicromapBuildSizesInfoEXT::safe_VkMicromapBuildSizesInfoEXT()
    : sType(VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT), pNext(nullptr), micromapSize(), buildScratchSize(), discardable() {}

safe_VkMicromapBuildSizesInfoEXT::safe_VkMicromapBuildSizesInfoEXT(const safe_VkMicromapBuildSizesInfoEXT& copy_src) {
    sType = copy_src.sType;
    micromapSize = copy_src.micromapSize;
    buildScratchSize = copy_src.buildScratchSize;
    discardable = copy_src.discardable;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMicromapBuildSizesInfoEXT& safe_VkMicromapBuildSizesInfoEXT::operator=(const safe_VkMicromapBuildSizesInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    micromapSize = copy_src.micromapSize;
    buildScratchSize = copy_src.buildScratchSize;
    discardable = copy_src.discardable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMicromapBuildSizesInfoEXT::~safe_VkMicromapBuildSizesInfoEXT() { FreePnextChain(pNext); }

void safe_VkMicromapBuildSizesInfoEXT::initialize(const VkMicromapBuildSizesInfoEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    micromapSize = in_struct->micromapSize;
    buildScratchSize = in_struct->buildScratchSize;
    discardable = in_struct->discardable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMicromapBuildSizesInfoEXT::initialize(const safe_VkMicromapBuildSizesInfoEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    micromapSize = copy_src->micromapSize;
    buildScratchSize = copy_src->buildScratchSize;
    discardable = copy_src->discardable;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::safe_VkSamplerBorderColorComponentMappingCreateInfoEXT(
    const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), components(in_struct->components), srgb(in_struct->srgb) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::safe_VkSamplerBorderColorComponentMappingCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT), pNext(nullptr), components(), srgb() {}

safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::safe_VkSamplerBorderColorComponentMappingCreateInfoEXT(
    const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    components = copy_src.components;
    srgb = copy_src.srgb;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::operator=(
    const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    components = copy_src.components;
    srgb = copy_src.srgb;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::~safe_VkSamplerBorderColorComponentMappingCreateInfoEXT() {
    FreePnextChain(pNext);
}

void safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::initialize(
    const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    components = in_struct->components;
    srgb = in_struct->srgb;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerBorderColorComponentMappingCreateInfoEXT::initialize(
    const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    components = copy_src->components;
    srgb = copy_src->srgb;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageViewSlicedCreateInfoEXT::safe_VkImageViewSlicedCreateInfoEXT(const VkImageViewSlicedCreateInfoEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), sliceOffset(in_struct->sliceOffset), sliceCount(in_struct->sliceCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewSlicedCreateInfoEXT::safe_VkImageViewSlicedCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT), pNext(nullptr), sliceOffset(), sliceCount() {}

safe_VkImageViewSlicedCreateInfoEXT::safe_VkImageViewSlicedCreateInfoEXT(const safe_VkImageViewSlicedCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    sliceOffset = copy_src.sliceOffset;
    sliceCount = copy_src.sliceCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewSlicedCreateInfoEXT& safe_VkImageViewSlicedCreateInfoEXT::operator=(
    const safe_VkImageViewSlicedCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sliceOffset = copy_src.sliceOffset;
    sliceCount = copy_src.sliceCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewSlicedCreateInfoEXT::~safe_VkImageViewSlicedCreateInfoEXT() { FreePnextChain(pNext); }

void safe_VkImageViewSlicedCreateInfoEXT::initialize(const VkImageViewSlicedCreateInfoEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sliceOffset = in_struct->sliceOffset;
    sliceCount = in_struct->sliceCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewSlicedCreateInfoEXT::initialize(const safe_VkImageViewSlicedCreateInfoEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sliceOffset = copy_src->sliceOffset;
    sliceCount = copy_src->sliceCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(
    const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxCommandBufferNestingLevel(in_struct->maxCommandBufferNestingLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT),
      pNext(nullptr),
      maxCommandBufferNestingLevel() {}

safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(
    const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    maxCommandBufferNestingLevel = copy_src.maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxCommandBufferNestingLevel = copy_src.maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::~safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::initialize(
    const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxCommandBufferNestingLevel = in_struct->maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxCommandBufferNestingLevel = copy_src->maxCommandBufferNestingLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalMemoryAcquireUnmodifiedEXT::safe_VkExternalMemoryAcquireUnmodifiedEXT(
    const VkExternalMemoryAcquireUnmodifiedEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), acquireUnmodifiedMemory(in_struct->acquireUnmodifiedMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalMemoryAcquireUnmodifiedEXT::safe_VkExternalMemoryAcquireUnmodifiedEXT()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT), pNext(nullptr), acquireUnmodifiedMemory() {}

safe_VkExternalMemoryAcquireUnmodifiedEXT::safe_VkExternalMemoryAcquireUnmodifiedEXT(
    const safe_VkExternalMemoryAcquireUnmodifiedEXT& copy_src) {
    sType = copy_src.sType;
    acquireUnmodifiedMemory = copy_src.acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalMemoryAcquireUnmodifiedEXT& safe_VkExternalMemoryAcquireUnmodifiedEXT::operator=(
    const safe_VkExternalMemoryAcquireUnmodifiedEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    acquireUnmodifiedMemory = copy_src.acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalMemoryAcquireUnmodifiedEXT::~safe_VkExternalMemoryAcquireUnmodifiedEXT() { FreePnextChain(pNext); }

void safe_VkExternalMemoryAcquireUnmodifiedEXT::initialize(const VkExternalMemoryAcquireUnmodifiedEXT* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    acquireUnmodifiedMemory = in_struct->acquireUnmodifiedMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalMemoryAcquireUnmodifiedEXT::initialize(const safe_VkExternalMemoryAcquireUnmodifiedEXT* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    acquireUnmodifiedMemory = copy_src->acquireUnmodifiedMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(
    const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), dynamicPrimitiveTopologyUnrestricted(in_struct->dynamicPrimitiveTopologyUnrestricted) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT),
      pNext(nullptr),
      dynamicPrimitiveTopologyUnrestricted() {}

safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(
    const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src) {
    sType = copy_src.sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src.dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::operator=(
    const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src.dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::~safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::initialize(
    const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicPrimitiveTopologyUnrestricted = in_struct->dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::initialize(
    const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicPrimitiveTopologyUnrestricted = copy_src->dynamicPrimitiveTopologyUnrestricted;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassCreationControlEXT::safe_VkRenderPassCreationControlEXT(const VkRenderPassCreationControlEXT* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), disallowMerging(in_struct->disallowMerging) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkRenderPassCreationControlEXT::safe_VkRenderPassCreationControlEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT), pNext(nullptr), disallowMerging() {}

safe_VkRenderPassCreationControlEXT::safe_VkRenderPassCreationControlEXT(const safe_VkRenderPassCreationControlEXT& copy_src) {
    sType = copy_src.sType;
    disallowMerging = copy_src.disallowMerging;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkRenderPassCreationControlEXT& safe_VkRenderPassCreationControlEXT::operator=(
    const safe_VkRenderPassCreationControlEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    disallowMerging = copy_src.disallowMerging;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkRenderPassCreationControlEXT::~safe_VkRenderPassCreationControlEXT() { FreePnextChain(pNext); }

void safe_VkRenderPassCreationControlEXT::initialize(const VkRenderPassCreationControlEXT* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    disallowMerging = in_struct->disallowMerging;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkRenderPassCreationControlEXT::initialize(const safe_VkRenderPassCreationControlEXT* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    disallowMerging = copy_src->disallowMerging;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassCreationFeedbackCreateInfoEXT::safe_VkRenderPassCreationFeedbackCreateInfoEXT(
    const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pRenderPassFeedback(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*in_struct->pRenderPassFeedback);
    }
}

safe_VkRenderPassCreationFeedbackCreateInfoEXT::safe_VkRenderPassCreationFeedbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT), pNext(nullptr), pRenderPassFeedback(nullptr) {}

safe_VkRenderPassCreationFeedbackCreateInfoEXT::safe_VkRenderPassCreationFeedbackCreateInfoEXT(
    const safe_VkRenderPassCreationFeedbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*copy_src.pRenderPassFeedback);
    }
}

safe_VkRenderPassCreationFeedbackCreateInfoEXT& safe_VkRenderPassCreationFeedbackCreateInfoEXT::operator=(
    const safe_VkRenderPassCreationFeedbackCreateInfoEXT& copy_src) {
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

safe_VkRenderPassCreationFeedbackCreateInfoEXT::~safe_VkRenderPassCreationFeedbackCreateInfoEXT() {
    if (pRenderPassFeedback) delete pRenderPassFeedback;
    FreePnextChain(pNext);
}

void safe_VkRenderPassCreationFeedbackCreateInfoEXT::initialize(const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct,
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

void safe_VkRenderPassCreationFeedbackCreateInfoEXT::initialize(const safe_VkRenderPassCreationFeedbackCreateInfoEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pRenderPassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pRenderPassFeedback) {
        pRenderPassFeedback = new VkRenderPassCreationFeedbackInfoEXT(*copy_src->pRenderPassFeedback);
    }
}

safe_VkRenderPassSubpassFeedbackCreateInfoEXT::safe_VkRenderPassSubpassFeedbackCreateInfoEXT(
    const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pSubpassFeedback(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*in_struct->pSubpassFeedback);
    }
}

safe_VkRenderPassSubpassFeedbackCreateInfoEXT::safe_VkRenderPassSubpassFeedbackCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT), pNext(nullptr), pSubpassFeedback(nullptr) {}

safe_VkRenderPassSubpassFeedbackCreateInfoEXT::safe_VkRenderPassSubpassFeedbackCreateInfoEXT(
    const safe_VkRenderPassSubpassFeedbackCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*copy_src.pSubpassFeedback);
    }
}

safe_VkRenderPassSubpassFeedbackCreateInfoEXT& safe_VkRenderPassSubpassFeedbackCreateInfoEXT::operator=(
    const safe_VkRenderPassSubpassFeedbackCreateInfoEXT& copy_src) {
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

safe_VkRenderPassSubpassFeedbackCreateInfoEXT::~safe_VkRenderPassSubpassFeedbackCreateInfoEXT() {
    if (pSubpassFeedback) delete pSubpassFeedback;
    FreePnextChain(pNext);
}

void safe_VkRenderPassSubpassFeedbackCreateInfoEXT::initialize(const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct,
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

void safe_VkRenderPassSubpassFeedbackCreateInfoEXT::initialize(const safe_VkRenderPassSubpassFeedbackCreateInfoEXT* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pSubpassFeedback = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pSubpassFeedback) {
        pSubpassFeedback = new VkRenderPassSubpassFeedbackInfoEXT(*copy_src->pSubpassFeedback);
    }
}

safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(
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

safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT), pNext(nullptr) {}

safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(
    const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src.shaderModuleIdentifierAlgorithmUUID[i];
    }
}

safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src.shaderModuleIdentifierAlgorithmUUID[i];
    }

    return *this;
}

safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::~safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::initialize(
    const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = in_struct->shaderModuleIdentifierAlgorithmUUID[i];
    }
}

void safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderModuleIdentifierAlgorithmUUID[i] = copy_src->shaderModuleIdentifierAlgorithmUUID[i];
    }
}

safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(
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

safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT),
      pNext(nullptr),
      identifierSize(),
      pIdentifier(nullptr) {}

safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(
    const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pIdentifier) {
        pIdentifier = new uint8_t[copy_src.identifierSize];
        memcpy((void*)pIdentifier, (void*)copy_src.pIdentifier, sizeof(uint8_t) * copy_src.identifierSize);
    }
}

safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::operator=(
    const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src) {
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

safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::~safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT() {
    if (pIdentifier) delete[] pIdentifier;
    FreePnextChain(pNext);
}

void safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::initialize(
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

void safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT::initialize(
    const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    identifierSize = copy_src->identifierSize;
    pIdentifier = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pIdentifier) {
        pIdentifier = new uint8_t[copy_src->identifierSize];
        memcpy((void*)pIdentifier, (void*)copy_src->pIdentifier, sizeof(uint8_t) * copy_src->identifierSize);
    }
}

safe_VkShaderModuleIdentifierEXT::safe_VkShaderModuleIdentifierEXT(const VkShaderModuleIdentifierEXT* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), identifierSize(in_struct->identifierSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = in_struct->identifier[i];
    }
}

safe_VkShaderModuleIdentifierEXT::safe_VkShaderModuleIdentifierEXT()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT), pNext(nullptr), identifierSize() {}

safe_VkShaderModuleIdentifierEXT::safe_VkShaderModuleIdentifierEXT(const safe_VkShaderModuleIdentifierEXT& copy_src) {
    sType = copy_src.sType;
    identifierSize = copy_src.identifierSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = copy_src.identifier[i];
    }
}

safe_VkShaderModuleIdentifierEXT& safe_VkShaderModuleIdentifierEXT::operator=(const safe_VkShaderModuleIdentifierEXT& copy_src) {
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

safe_VkShaderModuleIdentifierEXT::~safe_VkShaderModuleIdentifierEXT() { FreePnextChain(pNext); }

void safe_VkShaderModuleIdentifierEXT::initialize(const VkShaderModuleIdentifierEXT* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    identifierSize = in_struct->identifierSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = in_struct->identifier[i];
    }
}

void safe_VkShaderModuleIdentifierEXT::initialize(const safe_VkShaderModuleIdentifierEXT* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    identifierSize = copy_src->identifierSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT; ++i) {
        identifier[i] = copy_src->identifier[i];
    }
}

safe_VkPhysicalDeviceShaderObjectPropertiesEXT::safe_VkPhysicalDeviceShaderObjectPropertiesEXT(
    const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderBinaryVersion(in_struct->shaderBinaryVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = in_struct->shaderBinaryUUID[i];
    }
}

safe_VkPhysicalDeviceShaderObjectPropertiesEXT::safe_VkPhysicalDeviceShaderObjectPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT), pNext(nullptr), shaderBinaryVersion() {}

safe_VkPhysicalDeviceShaderObjectPropertiesEXT::safe_VkPhysicalDeviceShaderObjectPropertiesEXT(
    const safe_VkPhysicalDeviceShaderObjectPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    shaderBinaryVersion = copy_src.shaderBinaryVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = copy_src.shaderBinaryUUID[i];
    }
}

safe_VkPhysicalDeviceShaderObjectPropertiesEXT& safe_VkPhysicalDeviceShaderObjectPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceShaderObjectPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceShaderObjectPropertiesEXT::~safe_VkPhysicalDeviceShaderObjectPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceShaderObjectPropertiesEXT::initialize(const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBinaryVersion = in_struct->shaderBinaryVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = in_struct->shaderBinaryUUID[i];
    }
}

void safe_VkPhysicalDeviceShaderObjectPropertiesEXT::initialize(const safe_VkPhysicalDeviceShaderObjectPropertiesEXT* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBinaryVersion = copy_src->shaderBinaryVersion;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        shaderBinaryUUID[i] = copy_src->shaderBinaryUUID[i];
    }
}

safe_VkShaderCreateInfoEXT::safe_VkShaderCreateInfoEXT(const VkShaderCreateInfoEXT* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
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
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
}

safe_VkShaderCreateInfoEXT::safe_VkShaderCreateInfoEXT()
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

safe_VkShaderCreateInfoEXT::safe_VkShaderCreateInfoEXT(const safe_VkShaderCreateInfoEXT& copy_src) {
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
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src.pSpecializationInfo);
}

safe_VkShaderCreateInfoEXT& safe_VkShaderCreateInfoEXT::operator=(const safe_VkShaderCreateInfoEXT& copy_src) {
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
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src.pSpecializationInfo);

    return *this;
}

safe_VkShaderCreateInfoEXT::~safe_VkShaderCreateInfoEXT() {
    if (pName) delete[] pName;
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
}

void safe_VkShaderCreateInfoEXT::initialize(const VkShaderCreateInfoEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
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
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
}

void safe_VkShaderCreateInfoEXT::initialize(const safe_VkShaderCreateInfoEXT* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
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
    if (copy_src->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src->pSpecializationInfo);
}

safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(
    const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), nativeUnalignedPerformance(in_struct->nativeUnalignedPerformance) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT),
      pNext(nullptr),
      nativeUnalignedPerformance() {}

safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(
    const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& copy_src) {
    sType = copy_src.sType;
    nativeUnalignedPerformance = copy_src.nativeUnalignedPerformance;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    nativeUnalignedPerformance = copy_src.nativeUnalignedPerformance;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::~safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::initialize(
    const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    nativeUnalignedPerformance = in_struct->nativeUnalignedPerformance;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT::initialize(
    const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    nativeUnalignedPerformance = copy_src->nativeUnalignedPerformance;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkLayerSettingEXT::safe_VkLayerSettingEXT(const VkLayerSettingEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : type(in_struct->type), valueCount(in_struct->valueCount), pValues(in_struct->pValues) {
    pLayerName = SafeStringCopy(in_struct->pLayerName);
    pSettingName = SafeStringCopy(in_struct->pSettingName);
}

safe_VkLayerSettingEXT::safe_VkLayerSettingEXT()
    : pLayerName(nullptr), pSettingName(nullptr), type(), valueCount(), pValues(nullptr) {}

safe_VkLayerSettingEXT::safe_VkLayerSettingEXT(const safe_VkLayerSettingEXT& copy_src) {
    type = copy_src.type;
    valueCount = copy_src.valueCount;
    pValues = copy_src.pValues;
    pLayerName = SafeStringCopy(copy_src.pLayerName);
    pSettingName = SafeStringCopy(copy_src.pSettingName);
}

safe_VkLayerSettingEXT& safe_VkLayerSettingEXT::operator=(const safe_VkLayerSettingEXT& copy_src) {
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

safe_VkLayerSettingEXT::~safe_VkLayerSettingEXT() {
    if (pLayerName) delete[] pLayerName;
    if (pSettingName) delete[] pSettingName;
}

void safe_VkLayerSettingEXT::initialize(const VkLayerSettingEXT* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLayerName) delete[] pLayerName;
    if (pSettingName) delete[] pSettingName;
    type = in_struct->type;
    valueCount = in_struct->valueCount;
    pValues = in_struct->pValues;
    pLayerName = SafeStringCopy(in_struct->pLayerName);
    pSettingName = SafeStringCopy(in_struct->pSettingName);
}

void safe_VkLayerSettingEXT::initialize(const safe_VkLayerSettingEXT* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    type = copy_src->type;
    valueCount = copy_src->valueCount;
    pValues = copy_src->pValues;
    pLayerName = SafeStringCopy(copy_src->pLayerName);
    pSettingName = SafeStringCopy(copy_src->pSettingName);
}

safe_VkLayerSettingsCreateInfoEXT::safe_VkLayerSettingsCreateInfoEXT(const VkLayerSettingsCreateInfoEXT* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), settingCount(in_struct->settingCount), pSettings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (settingCount && in_struct->pSettings) {
        pSettings = new safe_VkLayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&in_struct->pSettings[i]);
        }
    }
}

safe_VkLayerSettingsCreateInfoEXT::safe_VkLayerSettingsCreateInfoEXT()
    : sType(VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT), pNext(nullptr), settingCount(), pSettings(nullptr) {}

safe_VkLayerSettingsCreateInfoEXT::safe_VkLayerSettingsCreateInfoEXT(const safe_VkLayerSettingsCreateInfoEXT& copy_src) {
    sType = copy_src.sType;
    settingCount = copy_src.settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (settingCount && copy_src.pSettings) {
        pSettings = new safe_VkLayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src.pSettings[i]);
        }
    }
}

safe_VkLayerSettingsCreateInfoEXT& safe_VkLayerSettingsCreateInfoEXT::operator=(const safe_VkLayerSettingsCreateInfoEXT& copy_src) {
    if (&copy_src == this) return *this;

    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    settingCount = copy_src.settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (settingCount && copy_src.pSettings) {
        pSettings = new safe_VkLayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src.pSettings[i]);
        }
    }

    return *this;
}

safe_VkLayerSettingsCreateInfoEXT::~safe_VkLayerSettingsCreateInfoEXT() {
    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);
}

void safe_VkLayerSettingsCreateInfoEXT::initialize(const VkLayerSettingsCreateInfoEXT* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSettings) delete[] pSettings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    settingCount = in_struct->settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (settingCount && in_struct->pSettings) {
        pSettings = new safe_VkLayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&in_struct->pSettings[i]);
        }
    }
}

void safe_VkLayerSettingsCreateInfoEXT::initialize(const safe_VkLayerSettingsCreateInfoEXT* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    settingCount = copy_src->settingCount;
    pSettings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (settingCount && copy_src->pSettings) {
        pSettings = new safe_VkLayerSettingEXT[settingCount];
        for (uint32_t i = 0; i < settingCount; ++i) {
            pSettings[i].initialize(&copy_src->pSettings[i]);
        }
    }
}

safe_VkPhysicalDeviceMeshShaderPropertiesEXT::safe_VkPhysicalDeviceMeshShaderPropertiesEXT(
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

safe_VkPhysicalDeviceMeshShaderPropertiesEXT::safe_VkPhysicalDeviceMeshShaderPropertiesEXT()
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

safe_VkPhysicalDeviceMeshShaderPropertiesEXT::safe_VkPhysicalDeviceMeshShaderPropertiesEXT(
    const safe_VkPhysicalDeviceMeshShaderPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceMeshShaderPropertiesEXT& safe_VkPhysicalDeviceMeshShaderPropertiesEXT::operator=(
    const safe_VkPhysicalDeviceMeshShaderPropertiesEXT& copy_src) {
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

safe_VkPhysicalDeviceMeshShaderPropertiesEXT::~safe_VkPhysicalDeviceMeshShaderPropertiesEXT() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMeshShaderPropertiesEXT::initialize(const VkPhysicalDeviceMeshShaderPropertiesEXT* in_struct,
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

void safe_VkPhysicalDeviceMeshShaderPropertiesEXT::initialize(const safe_VkPhysicalDeviceMeshShaderPropertiesEXT* copy_src,
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

}  // namespace vku

// NOLINTEND
