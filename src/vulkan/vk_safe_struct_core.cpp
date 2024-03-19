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

BufferMemoryBarrier::BufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      buffer(in_struct->buffer),
      offset(in_struct->offset),
      size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferMemoryBarrier::BufferMemoryBarrier()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER),
      pNext(nullptr),
      srcAccessMask(),
      dstAccessMask(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      buffer(),
      offset(),
      size() {}

BufferMemoryBarrier::BufferMemoryBarrier(const BufferMemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferMemoryBarrier& BufferMemoryBarrier::operator=(const BufferMemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferMemoryBarrier::~BufferMemoryBarrier() { FreePnextChain(pNext); }

void BufferMemoryBarrier::initialize(const VkBufferMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferMemoryBarrier::initialize(const BufferMemoryBarrier* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageMemoryBarrier::ImageMemoryBarrier(const VkImageMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      image(in_struct->image),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageMemoryBarrier::ImageMemoryBarrier()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER),
      pNext(nullptr),
      srcAccessMask(),
      dstAccessMask(),
      oldLayout(),
      newLayout(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      image(),
      subresourceRange() {}

ImageMemoryBarrier::ImageMemoryBarrier(const ImageMemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageMemoryBarrier& ImageMemoryBarrier::operator=(const ImageMemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageMemoryBarrier::~ImageMemoryBarrier() { FreePnextChain(pNext); }

void ImageMemoryBarrier::initialize(const VkImageMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageMemoryBarrier::initialize(const ImageMemoryBarrier* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    image = copy_src->image;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryBarrier::MemoryBarrier(const VkMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), srcAccessMask(in_struct->srcAccessMask), dstAccessMask(in_struct->dstAccessMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryBarrier::MemoryBarrier() : sType(VK_STRUCTURE_TYPE_MEMORY_BARRIER), pNext(nullptr), srcAccessMask(), dstAccessMask() {}

MemoryBarrier::MemoryBarrier(const MemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryBarrier& MemoryBarrier::operator=(const MemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryBarrier::~MemoryBarrier() { FreePnextChain(pNext); }

void MemoryBarrier::initialize(const VkMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryBarrier::initialize(const MemoryBarrier* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

AllocationCallbacks::AllocationCallbacks(const VkAllocationCallbacks* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : pUserData(in_struct->pUserData),
      pfnAllocation(in_struct->pfnAllocation),
      pfnReallocation(in_struct->pfnReallocation),
      pfnFree(in_struct->pfnFree),
      pfnInternalAllocation(in_struct->pfnInternalAllocation),
      pfnInternalFree(in_struct->pfnInternalFree) {}

AllocationCallbacks::AllocationCallbacks()
    : pUserData(nullptr), pfnAllocation(), pfnReallocation(), pfnFree(), pfnInternalAllocation(), pfnInternalFree() {}

AllocationCallbacks::AllocationCallbacks(const AllocationCallbacks& copy_src) {
    pUserData = copy_src.pUserData;
    pfnAllocation = copy_src.pfnAllocation;
    pfnReallocation = copy_src.pfnReallocation;
    pfnFree = copy_src.pfnFree;
    pfnInternalAllocation = copy_src.pfnInternalAllocation;
    pfnInternalFree = copy_src.pfnInternalFree;
}

AllocationCallbacks& AllocationCallbacks::operator=(const AllocationCallbacks& copy_src) {
    if (&copy_src == this) return *this;

    pUserData = copy_src.pUserData;
    pfnAllocation = copy_src.pfnAllocation;
    pfnReallocation = copy_src.pfnReallocation;
    pfnFree = copy_src.pfnFree;
    pfnInternalAllocation = copy_src.pfnInternalAllocation;
    pfnInternalFree = copy_src.pfnInternalFree;

    return *this;
}

AllocationCallbacks::~AllocationCallbacks() {}

void AllocationCallbacks::initialize(const VkAllocationCallbacks* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    pUserData = in_struct->pUserData;
    pfnAllocation = in_struct->pfnAllocation;
    pfnReallocation = in_struct->pfnReallocation;
    pfnFree = in_struct->pfnFree;
    pfnInternalAllocation = in_struct->pfnInternalAllocation;
    pfnInternalFree = in_struct->pfnInternalFree;
}

void AllocationCallbacks::initialize(const AllocationCallbacks* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    pUserData = copy_src->pUserData;
    pfnAllocation = copy_src->pfnAllocation;
    pfnReallocation = copy_src->pfnReallocation;
    pfnFree = copy_src->pfnFree;
    pfnInternalAllocation = copy_src->pfnInternalAllocation;
    pfnInternalFree = copy_src->pfnInternalFree;
}

ApplicationInfo::ApplicationInfo(const VkApplicationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      applicationVersion(in_struct->applicationVersion),
      engineVersion(in_struct->engineVersion),
      apiVersion(in_struct->apiVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pApplicationName = SafeStringCopy(in_struct->pApplicationName);
    pEngineName = SafeStringCopy(in_struct->pEngineName);
}

ApplicationInfo::ApplicationInfo()
    : sType(VK_STRUCTURE_TYPE_APPLICATION_INFO),
      pNext(nullptr),
      pApplicationName(nullptr),
      applicationVersion(),
      pEngineName(nullptr),
      engineVersion(),
      apiVersion() {}

ApplicationInfo::ApplicationInfo(const ApplicationInfo& copy_src) {
    sType = copy_src.sType;
    applicationVersion = copy_src.applicationVersion;
    engineVersion = copy_src.engineVersion;
    apiVersion = copy_src.apiVersion;
    pNext = SafePnextCopy(copy_src.pNext);
    pApplicationName = SafeStringCopy(copy_src.pApplicationName);
    pEngineName = SafeStringCopy(copy_src.pEngineName);
}

ApplicationInfo& ApplicationInfo::operator=(const ApplicationInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    applicationVersion = copy_src.applicationVersion;
    engineVersion = copy_src.engineVersion;
    apiVersion = copy_src.apiVersion;
    pNext = SafePnextCopy(copy_src.pNext);
    pApplicationName = SafeStringCopy(copy_src.pApplicationName);
    pEngineName = SafeStringCopy(copy_src.pEngineName);

    return *this;
}

ApplicationInfo::~ApplicationInfo() {
    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);
}

void ApplicationInfo::initialize(const VkApplicationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    applicationVersion = in_struct->applicationVersion;
    engineVersion = in_struct->engineVersion;
    apiVersion = in_struct->apiVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pApplicationName = SafeStringCopy(in_struct->pApplicationName);
    pEngineName = SafeStringCopy(in_struct->pEngineName);
}

void ApplicationInfo::initialize(const ApplicationInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    applicationVersion = copy_src->applicationVersion;
    engineVersion = copy_src->engineVersion;
    apiVersion = copy_src->apiVersion;
    pNext = SafePnextCopy(copy_src->pNext);
    pApplicationName = SafeStringCopy(copy_src->pApplicationName);
    pEngineName = SafeStringCopy(copy_src->pEngineName);
}

InstanceCreateInfo::InstanceCreateInfo(const VkInstanceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pApplicationInfo(nullptr),
      enabledLayerCount(in_struct->enabledLayerCount),
      enabledExtensionCount(in_struct->enabledExtensionCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo) pApplicationInfo = new ApplicationInfo(in_struct->pApplicationInfo);
}

InstanceCreateInfo::InstanceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      pApplicationInfo(nullptr),
      enabledLayerCount(),
      ppEnabledLayerNames(nullptr),
      enabledExtensionCount(),
      ppEnabledExtensionNames(nullptr) {}

InstanceCreateInfo::InstanceCreateInfo(const InstanceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src.pApplicationInfo) pApplicationInfo = new ApplicationInfo(*copy_src.pApplicationInfo);
}

InstanceCreateInfo& InstanceCreateInfo::operator=(const InstanceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src.pApplicationInfo) pApplicationInfo = new ApplicationInfo(*copy_src.pApplicationInfo);

    return *this;
}

InstanceCreateInfo::~InstanceCreateInfo() {
    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);
}

void InstanceCreateInfo::initialize(const VkInstanceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo) pApplicationInfo = new ApplicationInfo(in_struct->pApplicationInfo);
}

void InstanceCreateInfo::initialize(const InstanceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src->enabledLayerCount;
    enabledExtensionCount = copy_src->enabledExtensionCount;
    pNext = SafePnextCopy(copy_src->pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src->pApplicationInfo) pApplicationInfo = new ApplicationInfo(*copy_src->pApplicationInfo);
}

DeviceQueueCreateInfo::DeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      queueCount(in_struct->queueCount),
      pQueuePriorities(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy((void*)pQueuePriorities, (void*)in_struct->pQueuePriorities, sizeof(float) * in_struct->queueCount);
    }
}

DeviceQueueCreateInfo::DeviceQueueCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      queueFamilyIndex(),
      queueCount(),
      pQueuePriorities(nullptr) {}

DeviceQueueCreateInfo::DeviceQueueCreateInfo(const DeviceQueueCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueCount = copy_src.queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pQueuePriorities) {
        pQueuePriorities = new float[copy_src.queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src.pQueuePriorities, sizeof(float) * copy_src.queueCount);
    }
}

DeviceQueueCreateInfo& DeviceQueueCreateInfo::operator=(const DeviceQueueCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueCount = copy_src.queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pQueuePriorities) {
        pQueuePriorities = new float[copy_src.queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src.pQueuePriorities, sizeof(float) * copy_src.queueCount);
    }

    return *this;
}

DeviceQueueCreateInfo::~DeviceQueueCreateInfo() {
    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);
}

void DeviceQueueCreateInfo::initialize(const VkDeviceQueueCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueCount = in_struct->queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy((void*)pQueuePriorities, (void*)in_struct->pQueuePriorities, sizeof(float) * in_struct->queueCount);
    }
}

void DeviceQueueCreateInfo::initialize(const DeviceQueueCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    queueCount = copy_src->queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pQueuePriorities) {
        pQueuePriorities = new float[copy_src->queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src->pQueuePriorities, sizeof(float) * copy_src->queueCount);
    }
}

DeviceCreateInfo::DeviceCreateInfo(const VkDeviceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueCreateInfoCount(in_struct->queueCreateInfoCount),
      pQueueCreateInfos(nullptr),
      enabledLayerCount(in_struct->enabledLayerCount),
      enabledExtensionCount(in_struct->enabledExtensionCount),
      pEnabledFeatures(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new DeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }

    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

DeviceCreateInfo::DeviceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      queueCreateInfoCount(),
      pQueueCreateInfos(nullptr),
      enabledLayerCount(),
      ppEnabledLayerNames(nullptr),
      enabledExtensionCount(),
      ppEnabledExtensionNames(nullptr),
      pEnabledFeatures(nullptr) {}

DeviceCreateInfo::DeviceCreateInfo(const DeviceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueCreateInfoCount = copy_src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src.pQueueCreateInfos) {
        pQueueCreateInfos = new DeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src.pQueueCreateInfos[i]);
        }
    }

    if (copy_src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src.pEnabledFeatures);
    }
}

DeviceCreateInfo& DeviceCreateInfo::operator=(const DeviceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueCreateInfoCount = copy_src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src.pQueueCreateInfos) {
        pQueueCreateInfos = new DeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src.pQueueCreateInfos[i]);
        }
    }

    if (copy_src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src.pEnabledFeatures);
    }

    return *this;
}

DeviceCreateInfo::~DeviceCreateInfo() {
    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);
}

void DeviceCreateInfo::initialize(const VkDeviceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueCreateInfoCount = in_struct->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new DeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }

    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

void DeviceCreateInfo::initialize(const DeviceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueCreateInfoCount = copy_src->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src->enabledLayerCount;
    enabledExtensionCount = copy_src->enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src->pQueueCreateInfos) {
        pQueueCreateInfos = new DeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src->pQueueCreateInfos[i]);
        }
    }

    if (copy_src->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src->pEnabledFeatures);
    }
}

SubmitInfo::SubmitInfo(const VkSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphores(nullptr),
      pWaitDstStageMask(nullptr),
      commandBufferCount(in_struct->commandBufferCount),
      pCommandBuffers(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphores(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }

    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)in_struct->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)in_struct->pCommandBuffers, sizeof(VkCommandBuffer) * in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

SubmitInfo::SubmitInfo()
    : sType(VK_STRUCTURE_TYPE_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphores(nullptr),
      pWaitDstStageMask(nullptr),
      commandBufferCount(),
      pCommandBuffers(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphores(nullptr) {}

SubmitInfo::SubmitInfo(const SubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }

    if (copy_src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src.pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src.commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src.pCommandBuffers, sizeof(VkCommandBuffer) * copy_src.commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }
}

SubmitInfo& SubmitInfo::operator=(const SubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }

    if (copy_src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src.pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src.commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src.pCommandBuffers, sizeof(VkCommandBuffer) * copy_src.commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }

    return *this;
}

SubmitInfo::~SubmitInfo() {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
}

void SubmitInfo::initialize(const VkSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }

    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)in_struct->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)in_struct->pCommandBuffers, sizeof(VkCommandBuffer) * in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void SubmitInfo::initialize(const SubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreCount && copy_src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src->pWaitSemaphores[i];
        }
    }

    if (copy_src->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src->waitSemaphoreCount);
    }

    if (copy_src->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src->pCommandBuffers, sizeof(VkCommandBuffer) * copy_src->commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src->pSignalSemaphores[i];
        }
    }
}

MappedMemoryRange::MappedMemoryRange(const VkMappedMemoryRange* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), offset(in_struct->offset), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MappedMemoryRange::MappedMemoryRange() : sType(VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE), pNext(nullptr), memory(), offset(), size() {}

MappedMemoryRange::MappedMemoryRange(const MappedMemoryRange& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

MappedMemoryRange& MappedMemoryRange::operator=(const MappedMemoryRange& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MappedMemoryRange::~MappedMemoryRange() { FreePnextChain(pNext); }

void MappedMemoryRange::initialize(const VkMappedMemoryRange* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MappedMemoryRange::initialize(const MappedMemoryRange* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryAllocateInfo::MemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), allocationSize(in_struct->allocationSize), memoryTypeIndex(in_struct->memoryTypeIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryAllocateInfo::MemoryAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO), pNext(nullptr), allocationSize(), memoryTypeIndex() {}

MemoryAllocateInfo::MemoryAllocateInfo(const MemoryAllocateInfo& copy_src) {
    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeIndex = copy_src.memoryTypeIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryAllocateInfo& MemoryAllocateInfo::operator=(const MemoryAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeIndex = copy_src.memoryTypeIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryAllocateInfo::~MemoryAllocateInfo() { FreePnextChain(pNext); }

void MemoryAllocateInfo::initialize(const VkMemoryAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    allocationSize = in_struct->allocationSize;
    memoryTypeIndex = in_struct->memoryTypeIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryAllocateInfo::initialize(const MemoryAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    allocationSize = copy_src->allocationSize;
    memoryTypeIndex = copy_src->memoryTypeIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

SparseBufferMemoryBindInfo::SparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state)
    : buffer(in_struct->buffer), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

SparseBufferMemoryBindInfo::SparseBufferMemoryBindInfo() : buffer(), bindCount(), pBinds(nullptr) {}

SparseBufferMemoryBindInfo::SparseBufferMemoryBindInfo(const SparseBufferMemoryBindInfo& copy_src) {
    buffer = copy_src.buffer;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

SparseBufferMemoryBindInfo& SparseBufferMemoryBindInfo::operator=(const SparseBufferMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    buffer = copy_src.buffer;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

SparseBufferMemoryBindInfo::~SparseBufferMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void SparseBufferMemoryBindInfo::initialize(const VkSparseBufferMemoryBindInfo* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    buffer = in_struct->buffer;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void SparseBufferMemoryBindInfo::initialize(const SparseBufferMemoryBindInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    buffer = copy_src->buffer;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

SparseImageOpaqueMemoryBindInfo::SparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state)
    : image(in_struct->image), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

SparseImageOpaqueMemoryBindInfo::SparseImageOpaqueMemoryBindInfo() : image(), bindCount(), pBinds(nullptr) {}

SparseImageOpaqueMemoryBindInfo::SparseImageOpaqueMemoryBindInfo(const SparseImageOpaqueMemoryBindInfo& copy_src) {
    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

SparseImageOpaqueMemoryBindInfo& SparseImageOpaqueMemoryBindInfo::operator=(const SparseImageOpaqueMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

SparseImageOpaqueMemoryBindInfo::~SparseImageOpaqueMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void SparseImageOpaqueMemoryBindInfo::initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void SparseImageOpaqueMemoryBindInfo::initialize(const SparseImageOpaqueMemoryBindInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    image = copy_src->image;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

SparseImageMemoryBindInfo::SparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : image(in_struct->image), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

SparseImageMemoryBindInfo::SparseImageMemoryBindInfo() : image(), bindCount(), pBinds(nullptr) {}

SparseImageMemoryBindInfo::SparseImageMemoryBindInfo(const SparseImageMemoryBindInfo& copy_src) {
    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

SparseImageMemoryBindInfo& SparseImageMemoryBindInfo::operator=(const SparseImageMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

SparseImageMemoryBindInfo::~SparseImageMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void SparseImageMemoryBindInfo::initialize(const VkSparseImageMemoryBindInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void SparseImageMemoryBindInfo::initialize(const SparseImageMemoryBindInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    image = copy_src->image;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

BindSparseInfo::BindSparseInfo(const VkBindSparseInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphores(nullptr),
      bufferBindCount(in_struct->bufferBindCount),
      pBufferBinds(nullptr),
      imageOpaqueBindCount(in_struct->imageOpaqueBindCount),
      pImageOpaqueBinds(nullptr),
      imageBindCount(in_struct->imageBindCount),
      pImageBinds(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphores(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new SparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new SparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new SparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

BindSparseInfo::BindSparseInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_SPARSE_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphores(nullptr),
      bufferBindCount(),
      pBufferBinds(nullptr),
      imageOpaqueBindCount(),
      pImageOpaqueBinds(nullptr),
      imageBindCount(),
      pImageBinds(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphores(nullptr) {}

BindSparseInfo::BindSparseInfo(const BindSparseInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src.pBufferBinds) {
        pBufferBinds = new SparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new SparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src.pImageBinds) {
        pImageBinds = new SparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }
}

BindSparseInfo& BindSparseInfo::operator=(const BindSparseInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src.pBufferBinds) {
        pBufferBinds = new SparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new SparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src.pImageBinds) {
        pImageBinds = new SparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }

    return *this;
}

BindSparseInfo::~BindSparseInfo() {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
}

void BindSparseInfo::initialize(const VkBindSparseInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = in_struct->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = in_struct->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = in_struct->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new SparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new SparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new SparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void BindSparseInfo::initialize(const BindSparseInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreCount && copy_src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src->pBufferBinds) {
        pBufferBinds = new SparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src->pImageOpaqueBinds) {
        pImageOpaqueBinds = new SparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src->pImageBinds) {
        pImageBinds = new SparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src->pSignalSemaphores[i];
        }
    }
}

FenceCreateInfo::FenceCreateInfo(const VkFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FenceCreateInfo::FenceCreateInfo() : sType(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO), pNext(nullptr), flags() {}

FenceCreateInfo::FenceCreateInfo(const FenceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

FenceCreateInfo& FenceCreateInfo::operator=(const FenceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FenceCreateInfo::~FenceCreateInfo() { FreePnextChain(pNext); }

void FenceCreateInfo::initialize(const VkFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FenceCreateInfo::initialize(const FenceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

SemaphoreCreateInfo::SemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreCreateInfo::SemaphoreCreateInfo() : sType(VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO), pNext(nullptr), flags() {}

SemaphoreCreateInfo::SemaphoreCreateInfo(const SemaphoreCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreCreateInfo& SemaphoreCreateInfo::operator=(const SemaphoreCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreCreateInfo::~SemaphoreCreateInfo() { FreePnextChain(pNext); }

void SemaphoreCreateInfo::initialize(const VkSemaphoreCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreCreateInfo::initialize(const SemaphoreCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

EventCreateInfo::EventCreateInfo(const VkEventCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

EventCreateInfo::EventCreateInfo() : sType(VK_STRUCTURE_TYPE_EVENT_CREATE_INFO), pNext(nullptr), flags() {}

EventCreateInfo::EventCreateInfo(const EventCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

EventCreateInfo& EventCreateInfo::operator=(const EventCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

EventCreateInfo::~EventCreateInfo() { FreePnextChain(pNext); }

void EventCreateInfo::initialize(const VkEventCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void EventCreateInfo::initialize(const EventCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueryPoolCreateInfo::QueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queryType(in_struct->queryType),
      queryCount(in_struct->queryCount),
      pipelineStatistics(in_struct->pipelineStatistics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueryPoolCreateInfo::QueryPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO), pNext(nullptr), flags(), queryType(), queryCount(), pipelineStatistics() {}

QueryPoolCreateInfo::QueryPoolCreateInfo(const QueryPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queryType = copy_src.queryType;
    queryCount = copy_src.queryCount;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueryPoolCreateInfo& QueryPoolCreateInfo::operator=(const QueryPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queryType = copy_src.queryType;
    queryCount = copy_src.queryCount;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueryPoolCreateInfo::~QueryPoolCreateInfo() { FreePnextChain(pNext); }

void QueryPoolCreateInfo::initialize(const VkQueryPoolCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queryType = in_struct->queryType;
    queryCount = in_struct->queryCount;
    pipelineStatistics = in_struct->pipelineStatistics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueryPoolCreateInfo::initialize(const QueryPoolCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queryType = copy_src->queryType;
    queryCount = copy_src->queryCount;
    pipelineStatistics = copy_src->pipelineStatistics;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCreateInfo::BufferCreateInfo(const VkBufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      size(in_struct->size),
      usage(in_struct->usage),
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

BufferCreateInfo::BufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      size(),
      usage(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr) {}

BufferCreateInfo::BufferCreateInfo(const BufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    size = copy_src.size;
    usage = copy_src.usage;
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

BufferCreateInfo& BufferCreateInfo::operator=(const BufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    size = copy_src.size;
    usage = copy_src.usage;
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

BufferCreateInfo::~BufferCreateInfo() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void BufferCreateInfo::initialize(const VkBufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    size = in_struct->size;
    usage = in_struct->usage;
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

void BufferCreateInfo::initialize(const BufferCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    size = copy_src->size;
    usage = copy_src->usage;
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

BufferViewCreateInfo::BufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      buffer(in_struct->buffer),
      format(in_struct->format),
      offset(in_struct->offset),
      range(in_struct->range) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferViewCreateInfo::BufferViewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO), pNext(nullptr), flags(), buffer(), format(), offset(), range() {}

BufferViewCreateInfo::BufferViewCreateInfo(const BufferViewCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    buffer = copy_src.buffer;
    format = copy_src.format;
    offset = copy_src.offset;
    range = copy_src.range;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferViewCreateInfo& BufferViewCreateInfo::operator=(const BufferViewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    buffer = copy_src.buffer;
    format = copy_src.format;
    offset = copy_src.offset;
    range = copy_src.range;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferViewCreateInfo::~BufferViewCreateInfo() { FreePnextChain(pNext); }

void BufferViewCreateInfo::initialize(const VkBufferViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    buffer = in_struct->buffer;
    format = in_struct->format;
    offset = in_struct->offset;
    range = in_struct->range;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferViewCreateInfo::initialize(const BufferViewCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    buffer = copy_src->buffer;
    format = copy_src->format;
    offset = copy_src->offset;
    range = copy_src->range;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageCreateInfo::ImageCreateInfo(const VkImageCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      imageType(in_struct->imageType),
      format(in_struct->format),
      extent(in_struct->extent),
      mipLevels(in_struct->mipLevels),
      arrayLayers(in_struct->arrayLayers),
      samples(in_struct->samples),
      tiling(in_struct->tiling),
      usage(in_struct->usage),
      sharingMode(in_struct->sharingMode),
      queueFamilyIndexCount(0),
      pQueueFamilyIndices(nullptr),
      initialLayout(in_struct->initialLayout) {
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

ImageCreateInfo::ImageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      imageType(),
      format(),
      extent(),
      mipLevels(),
      arrayLayers(),
      samples(),
      tiling(),
      usage(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr),
      initialLayout() {}

ImageCreateInfo::ImageCreateInfo(const ImageCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    imageType = copy_src.imageType;
    format = copy_src.format;
    extent = copy_src.extent;
    mipLevels = copy_src.mipLevels;
    arrayLayers = copy_src.arrayLayers;
    samples = copy_src.samples;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src.initialLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

ImageCreateInfo& ImageCreateInfo::operator=(const ImageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    imageType = copy_src.imageType;
    format = copy_src.format;
    extent = copy_src.extent;
    mipLevels = copy_src.mipLevels;
    arrayLayers = copy_src.arrayLayers;
    samples = copy_src.samples;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src.initialLayout;
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

ImageCreateInfo::~ImageCreateInfo() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void ImageCreateInfo::initialize(const VkImageCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    imageType = in_struct->imageType;
    format = in_struct->format;
    extent = in_struct->extent;
    mipLevels = in_struct->mipLevels;
    arrayLayers = in_struct->arrayLayers;
    samples = in_struct->samples;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = in_struct->initialLayout;
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

void ImageCreateInfo::initialize(const ImageCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    imageType = copy_src->imageType;
    format = copy_src->format;
    extent = copy_src->extent;
    mipLevels = copy_src->mipLevels;
    arrayLayers = copy_src->arrayLayers;
    samples = copy_src->samples;
    tiling = copy_src->tiling;
    usage = copy_src->usage;
    sharingMode = copy_src->sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src->initialLayout;
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

ImageViewCreateInfo::ImageViewCreateInfo(const VkImageViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      image(in_struct->image),
      viewType(in_struct->viewType),
      format(in_struct->format),
      components(in_struct->components),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewCreateInfo::ImageViewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO),
      pNext(nullptr),
      flags(),
      image(),
      viewType(),
      format(),
      components(),
      subresourceRange() {}

ImageViewCreateInfo::ImageViewCreateInfo(const ImageViewCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    image = copy_src.image;
    viewType = copy_src.viewType;
    format = copy_src.format;
    components = copy_src.components;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewCreateInfo& ImageViewCreateInfo::operator=(const ImageViewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    image = copy_src.image;
    viewType = copy_src.viewType;
    format = copy_src.format;
    components = copy_src.components;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewCreateInfo::~ImageViewCreateInfo() { FreePnextChain(pNext); }

void ImageViewCreateInfo::initialize(const VkImageViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    image = in_struct->image;
    viewType = in_struct->viewType;
    format = in_struct->format;
    components = in_struct->components;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewCreateInfo::initialize(const ImageViewCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    image = copy_src->image;
    viewType = copy_src->viewType;
    format = copy_src->format;
    components = copy_src->components;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

ShaderModuleCreateInfo::ShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), codeSize(in_struct->codeSize), pCode(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)in_struct->pCode, codeSize);
    }
}

ShaderModuleCreateInfo::ShaderModuleCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO), pNext(nullptr), flags(), codeSize(), pCode(nullptr) {}

ShaderModuleCreateInfo::ShaderModuleCreateInfo(const ShaderModuleCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    codeSize = copy_src.codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src.pCode, codeSize);
    }
}

ShaderModuleCreateInfo& ShaderModuleCreateInfo::operator=(const ShaderModuleCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    codeSize = copy_src.codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src.pCode, codeSize);
    }

    return *this;
}

ShaderModuleCreateInfo::~ShaderModuleCreateInfo() {
    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);
}

void ShaderModuleCreateInfo::initialize(const VkShaderModuleCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    codeSize = in_struct->codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)in_struct->pCode, codeSize);
    }
}

void ShaderModuleCreateInfo::initialize(const ShaderModuleCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    codeSize = copy_src->codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src->pCode, codeSize);
    }
}

PipelineCacheCreateInfo::PipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      initialDataSize(in_struct->initialDataSize),
      pInitialData(in_struct->pInitialData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineCacheCreateInfo::PipelineCacheCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO), pNext(nullptr), flags(), initialDataSize(), pInitialData(nullptr) {}

PipelineCacheCreateInfo::PipelineCacheCreateInfo(const PipelineCacheCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineCacheCreateInfo& PipelineCacheCreateInfo::operator=(const PipelineCacheCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineCacheCreateInfo::~PipelineCacheCreateInfo() { FreePnextChain(pNext); }

void PipelineCacheCreateInfo::initialize(const VkPipelineCacheCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineCacheCreateInfo::initialize(const PipelineCacheCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    initialDataSize = copy_src->initialDataSize;
    pInitialData = copy_src->pInitialData;
    pNext = SafePnextCopy(copy_src->pNext);
}

SpecializationInfo::SpecializationInfo(const VkSpecializationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : mapEntryCount(in_struct->mapEntryCount), pMapEntries(nullptr), dataSize(in_struct->dataSize), pData(nullptr) {
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry) * in_struct->mapEntryCount);
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

SpecializationInfo::SpecializationInfo() : mapEntryCount(), pMapEntries(nullptr), dataSize(), pData(nullptr) {}

SpecializationInfo::SpecializationInfo(const SpecializationInfo& copy_src) {
    mapEntryCount = copy_src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src.dataSize;

    if (copy_src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src.mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src.pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src.mapEntryCount);
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

SpecializationInfo& SpecializationInfo::operator=(const SpecializationInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }

    mapEntryCount = copy_src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src.dataSize;

    if (copy_src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src.mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src.pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src.mapEntryCount);
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

SpecializationInfo::~SpecializationInfo() {
    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
}

void SpecializationInfo::initialize(const VkSpecializationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    mapEntryCount = in_struct->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = in_struct->dataSize;

    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry) * in_struct->mapEntryCount);
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void SpecializationInfo::initialize(const SpecializationInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    mapEntryCount = copy_src->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src->dataSize;

    if (copy_src->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src->pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src->mapEntryCount);
    }

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

PipelineShaderStageCreateInfo::PipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stage(in_struct->stage),
      module(in_struct->module),
      pSpecializationInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(in_struct->pSpecializationInfo);
}

PipelineShaderStageCreateInfo::PipelineShaderStageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      stage(),
      module(),
      pName(nullptr),
      pSpecializationInfo(nullptr) {}

PipelineShaderStageCreateInfo::PipelineShaderStageCreateInfo(const PipelineShaderStageCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    module = copy_src.module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src.pSpecializationInfo);
}

PipelineShaderStageCreateInfo& PipelineShaderStageCreateInfo::operator=(const PipelineShaderStageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    module = copy_src.module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src.pSpecializationInfo);

    return *this;
}

PipelineShaderStageCreateInfo::~PipelineShaderStageCreateInfo() {
    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
}

void PipelineShaderStageCreateInfo::initialize(const VkPipelineShaderStageCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stage = in_struct->stage;
    module = in_struct->module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(in_struct->pSpecializationInfo);
}

void PipelineShaderStageCreateInfo::initialize(const PipelineShaderStageCreateInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stage = copy_src->stage;
    module = copy_src->module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
    if (copy_src->pSpecializationInfo) pSpecializationInfo = new SpecializationInfo(*copy_src->pSpecializationInfo);
}

ComputePipelineCreateInfo::ComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stage(&in_struct->stage),
      layout(in_struct->layout),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ComputePipelineCreateInfo::ComputePipelineCreateInfo()
    : sType(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      layout(),
      basePipelineHandle(),
      basePipelineIndex() {}

ComputePipelineCreateInfo::ComputePipelineCreateInfo(const ComputePipelineCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stage.initialize(&copy_src.stage);
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

ComputePipelineCreateInfo& ComputePipelineCreateInfo::operator=(const ComputePipelineCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stage.initialize(&copy_src.stage);
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ComputePipelineCreateInfo::~ComputePipelineCreateInfo() { FreePnextChain(pNext); }

void ComputePipelineCreateInfo::initialize(const VkComputePipelineCreateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stage.initialize(&in_struct->stage);
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ComputePipelineCreateInfo::initialize(const ComputePipelineCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stage.initialize(&copy_src->stage);
    layout = copy_src->layout;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineVertexInputStateCreateInfo::PipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      vertexBindingDescriptionCount(in_struct->vertexBindingDescriptionCount),
      pVertexBindingDescriptions(nullptr),
      vertexAttributeDescriptionCount(in_struct->vertexAttributeDescriptionCount),
      pVertexAttributeDescriptions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)in_struct->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * in_struct->vertexBindingDescriptionCount);
    }

    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)in_struct->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * in_struct->vertexAttributeDescriptionCount);
    }
}

PipelineVertexInputStateCreateInfo::PipelineVertexInputStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      vertexBindingDescriptionCount(),
      pVertexBindingDescriptions(nullptr),
      vertexAttributeDescriptionCount(),
      pVertexAttributeDescriptions(nullptr) {}

PipelineVertexInputStateCreateInfo::PipelineVertexInputStateCreateInfo(const PipelineVertexInputStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    vertexBindingDescriptionCount = copy_src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src.vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src.pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src.vertexBindingDescriptionCount);
    }

    if (copy_src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src.vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src.pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src.vertexAttributeDescriptionCount);
    }
}

PipelineVertexInputStateCreateInfo& PipelineVertexInputStateCreateInfo::operator=(
    const PipelineVertexInputStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    vertexBindingDescriptionCount = copy_src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src.vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src.pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src.vertexBindingDescriptionCount);
    }

    if (copy_src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src.vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src.pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src.vertexAttributeDescriptionCount);
    }

    return *this;
}

PipelineVertexInputStateCreateInfo::~PipelineVertexInputStateCreateInfo() {
    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);
}

void PipelineVertexInputStateCreateInfo::initialize(const VkPipelineVertexInputStateCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    vertexBindingDescriptionCount = in_struct->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = in_struct->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)in_struct->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * in_struct->vertexBindingDescriptionCount);
    }

    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)in_struct->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * in_struct->vertexAttributeDescriptionCount);
    }
}

void PipelineVertexInputStateCreateInfo::initialize(const PipelineVertexInputStateCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    vertexBindingDescriptionCount = copy_src->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src->vertexBindingDescriptionCount);
    }

    if (copy_src->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src->vertexAttributeDescriptionCount);
    }
}

PipelineInputAssemblyStateCreateInfo::PipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      topology(in_struct->topology),
      primitiveRestartEnable(in_struct->primitiveRestartEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineInputAssemblyStateCreateInfo::PipelineInputAssemblyStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      topology(),
      primitiveRestartEnable() {}

PipelineInputAssemblyStateCreateInfo::PipelineInputAssemblyStateCreateInfo(const PipelineInputAssemblyStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    topology = copy_src.topology;
    primitiveRestartEnable = copy_src.primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineInputAssemblyStateCreateInfo& PipelineInputAssemblyStateCreateInfo::operator=(
    const PipelineInputAssemblyStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    topology = copy_src.topology;
    primitiveRestartEnable = copy_src.primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineInputAssemblyStateCreateInfo::~PipelineInputAssemblyStateCreateInfo() { FreePnextChain(pNext); }

void PipelineInputAssemblyStateCreateInfo::initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    topology = in_struct->topology;
    primitiveRestartEnable = in_struct->primitiveRestartEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineInputAssemblyStateCreateInfo::initialize(const PipelineInputAssemblyStateCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    topology = copy_src->topology;
    primitiveRestartEnable = copy_src->primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineTessellationStateCreateInfo::PipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), patchControlPoints(in_struct->patchControlPoints) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineTessellationStateCreateInfo::PipelineTessellationStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO), pNext(nullptr), flags(), patchControlPoints() {}

PipelineTessellationStateCreateInfo::PipelineTessellationStateCreateInfo(const PipelineTessellationStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    patchControlPoints = copy_src.patchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineTessellationStateCreateInfo& PipelineTessellationStateCreateInfo::operator=(
    const PipelineTessellationStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    patchControlPoints = copy_src.patchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineTessellationStateCreateInfo::~PipelineTessellationStateCreateInfo() { FreePnextChain(pNext); }

void PipelineTessellationStateCreateInfo::initialize(const VkPipelineTessellationStateCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    patchControlPoints = in_struct->patchControlPoints;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineTessellationStateCreateInfo::initialize(const PipelineTessellationStateCreateInfo* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    patchControlPoints = copy_src->patchControlPoints;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationStateCreateInfo::PipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      depthClampEnable(in_struct->depthClampEnable),
      rasterizerDiscardEnable(in_struct->rasterizerDiscardEnable),
      polygonMode(in_struct->polygonMode),
      cullMode(in_struct->cullMode),
      frontFace(in_struct->frontFace),
      depthBiasEnable(in_struct->depthBiasEnable),
      depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
      depthBiasClamp(in_struct->depthBiasClamp),
      depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor),
      lineWidth(in_struct->lineWidth) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationStateCreateInfo::PipelineRasterizationStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      depthClampEnable(),
      rasterizerDiscardEnable(),
      polygonMode(),
      cullMode(),
      frontFace(),
      depthBiasEnable(),
      depthBiasConstantFactor(),
      depthBiasClamp(),
      depthBiasSlopeFactor(),
      lineWidth() {}

PipelineRasterizationStateCreateInfo::PipelineRasterizationStateCreateInfo(const PipelineRasterizationStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClampEnable = copy_src.depthClampEnable;
    rasterizerDiscardEnable = copy_src.rasterizerDiscardEnable;
    polygonMode = copy_src.polygonMode;
    cullMode = copy_src.cullMode;
    frontFace = copy_src.frontFace;
    depthBiasEnable = copy_src.depthBiasEnable;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    lineWidth = copy_src.lineWidth;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationStateCreateInfo& PipelineRasterizationStateCreateInfo::operator=(
    const PipelineRasterizationStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClampEnable = copy_src.depthClampEnable;
    rasterizerDiscardEnable = copy_src.rasterizerDiscardEnable;
    polygonMode = copy_src.polygonMode;
    cullMode = copy_src.cullMode;
    frontFace = copy_src.frontFace;
    depthBiasEnable = copy_src.depthBiasEnable;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    lineWidth = copy_src.lineWidth;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationStateCreateInfo::~PipelineRasterizationStateCreateInfo() { FreePnextChain(pNext); }

void PipelineRasterizationStateCreateInfo::initialize(const VkPipelineRasterizationStateCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthClampEnable = in_struct->depthClampEnable;
    rasterizerDiscardEnable = in_struct->rasterizerDiscardEnable;
    polygonMode = in_struct->polygonMode;
    cullMode = in_struct->cullMode;
    frontFace = in_struct->frontFace;
    depthBiasEnable = in_struct->depthBiasEnable;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    lineWidth = in_struct->lineWidth;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationStateCreateInfo::initialize(const PipelineRasterizationStateCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthClampEnable = copy_src->depthClampEnable;
    rasterizerDiscardEnable = copy_src->rasterizerDiscardEnable;
    polygonMode = copy_src->polygonMode;
    cullMode = copy_src->cullMode;
    frontFace = copy_src->frontFace;
    depthBiasEnable = copy_src->depthBiasEnable;
    depthBiasConstantFactor = copy_src->depthBiasConstantFactor;
    depthBiasClamp = copy_src->depthBiasClamp;
    depthBiasSlopeFactor = copy_src->depthBiasSlopeFactor;
    lineWidth = copy_src->lineWidth;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineMultisampleStateCreateInfo::PipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      rasterizationSamples(in_struct->rasterizationSamples),
      sampleShadingEnable(in_struct->sampleShadingEnable),
      minSampleShading(in_struct->minSampleShading),
      pSampleMask(nullptr),
      alphaToCoverageEnable(in_struct->alphaToCoverageEnable),
      alphaToOneEnable(in_struct->alphaToOneEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

PipelineMultisampleStateCreateInfo::PipelineMultisampleStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      rasterizationSamples(),
      sampleShadingEnable(),
      minSampleShading(),
      pSampleMask(nullptr),
      alphaToCoverageEnable(),
      alphaToOneEnable() {}

PipelineMultisampleStateCreateInfo::PipelineMultisampleStateCreateInfo(const PipelineMultisampleStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationSamples = copy_src.rasterizationSamples;
    sampleShadingEnable = copy_src.sampleShadingEnable;
    minSampleShading = copy_src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src.alphaToCoverageEnable;
    alphaToOneEnable = copy_src.alphaToOneEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src.pSampleMask);
    }
}

PipelineMultisampleStateCreateInfo& PipelineMultisampleStateCreateInfo::operator=(
    const PipelineMultisampleStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationSamples = copy_src.rasterizationSamples;
    sampleShadingEnable = copy_src.sampleShadingEnable;
    minSampleShading = copy_src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src.alphaToCoverageEnable;
    alphaToOneEnable = copy_src.alphaToOneEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src.pSampleMask);
    }

    return *this;
}

PipelineMultisampleStateCreateInfo::~PipelineMultisampleStateCreateInfo() {
    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);
}

void PipelineMultisampleStateCreateInfo::initialize(const VkPipelineMultisampleStateCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rasterizationSamples = in_struct->rasterizationSamples;
    sampleShadingEnable = in_struct->sampleShadingEnable;
    minSampleShading = in_struct->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = in_struct->alphaToCoverageEnable;
    alphaToOneEnable = in_struct->alphaToOneEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

void PipelineMultisampleStateCreateInfo::initialize(const PipelineMultisampleStateCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rasterizationSamples = copy_src->rasterizationSamples;
    sampleShadingEnable = copy_src->sampleShadingEnable;
    minSampleShading = copy_src->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src->alphaToCoverageEnable;
    alphaToOneEnable = copy_src->alphaToOneEnable;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src->pSampleMask);
    }
}

PipelineDepthStencilStateCreateInfo::PipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      depthTestEnable(in_struct->depthTestEnable),
      depthWriteEnable(in_struct->depthWriteEnable),
      depthCompareOp(in_struct->depthCompareOp),
      depthBoundsTestEnable(in_struct->depthBoundsTestEnable),
      stencilTestEnable(in_struct->stencilTestEnable),
      front(in_struct->front),
      back(in_struct->back),
      minDepthBounds(in_struct->minDepthBounds),
      maxDepthBounds(in_struct->maxDepthBounds) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineDepthStencilStateCreateInfo::PipelineDepthStencilStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      depthTestEnable(),
      depthWriteEnable(),
      depthCompareOp(),
      depthBoundsTestEnable(),
      stencilTestEnable(),
      front(),
      back(),
      minDepthBounds(),
      maxDepthBounds() {}

PipelineDepthStencilStateCreateInfo::PipelineDepthStencilStateCreateInfo(const PipelineDepthStencilStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthTestEnable = copy_src.depthTestEnable;
    depthWriteEnable = copy_src.depthWriteEnable;
    depthCompareOp = copy_src.depthCompareOp;
    depthBoundsTestEnable = copy_src.depthBoundsTestEnable;
    stencilTestEnable = copy_src.stencilTestEnable;
    front = copy_src.front;
    back = copy_src.back;
    minDepthBounds = copy_src.minDepthBounds;
    maxDepthBounds = copy_src.maxDepthBounds;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineDepthStencilStateCreateInfo& PipelineDepthStencilStateCreateInfo::operator=(
    const PipelineDepthStencilStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthTestEnable = copy_src.depthTestEnable;
    depthWriteEnable = copy_src.depthWriteEnable;
    depthCompareOp = copy_src.depthCompareOp;
    depthBoundsTestEnable = copy_src.depthBoundsTestEnable;
    stencilTestEnable = copy_src.stencilTestEnable;
    front = copy_src.front;
    back = copy_src.back;
    minDepthBounds = copy_src.minDepthBounds;
    maxDepthBounds = copy_src.maxDepthBounds;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineDepthStencilStateCreateInfo::~PipelineDepthStencilStateCreateInfo() { FreePnextChain(pNext); }

void PipelineDepthStencilStateCreateInfo::initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthTestEnable = in_struct->depthTestEnable;
    depthWriteEnable = in_struct->depthWriteEnable;
    depthCompareOp = in_struct->depthCompareOp;
    depthBoundsTestEnable = in_struct->depthBoundsTestEnable;
    stencilTestEnable = in_struct->stencilTestEnable;
    front = in_struct->front;
    back = in_struct->back;
    minDepthBounds = in_struct->minDepthBounds;
    maxDepthBounds = in_struct->maxDepthBounds;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineDepthStencilStateCreateInfo::initialize(const PipelineDepthStencilStateCreateInfo* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthTestEnable = copy_src->depthTestEnable;
    depthWriteEnable = copy_src->depthWriteEnable;
    depthCompareOp = copy_src->depthCompareOp;
    depthBoundsTestEnable = copy_src->depthBoundsTestEnable;
    stencilTestEnable = copy_src->stencilTestEnable;
    front = copy_src->front;
    back = copy_src->back;
    minDepthBounds = copy_src->minDepthBounds;
    maxDepthBounds = copy_src->maxDepthBounds;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineColorBlendStateCreateInfo::PipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      logicOpEnable(in_struct->logicOpEnable),
      logicOp(in_struct->logicOp),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * in_struct->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

PipelineColorBlendStateCreateInfo::PipelineColorBlendStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      logicOpEnable(),
      logicOp(),
      attachmentCount(),
      pAttachments(nullptr) {}

PipelineColorBlendStateCreateInfo::PipelineColorBlendStateCreateInfo(const PipelineColorBlendStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    logicOpEnable = copy_src.logicOpEnable;
    logicOp = copy_src.logicOp;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src.attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src.blendConstants[i];
    }
}

PipelineColorBlendStateCreateInfo& PipelineColorBlendStateCreateInfo::operator=(const PipelineColorBlendStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    logicOpEnable = copy_src.logicOpEnable;
    logicOp = copy_src.logicOp;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src.attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src.blendConstants[i];
    }

    return *this;
}

PipelineColorBlendStateCreateInfo::~PipelineColorBlendStateCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void PipelineColorBlendStateCreateInfo::initialize(const VkPipelineColorBlendStateCreateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    logicOpEnable = in_struct->logicOpEnable;
    logicOp = in_struct->logicOp;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * in_struct->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

void PipelineColorBlendStateCreateInfo::initialize(const PipelineColorBlendStateCreateInfo* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    logicOpEnable = copy_src->logicOpEnable;
    logicOp = copy_src->logicOp;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src->attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src->blendConstants[i];
    }
}

PipelineDynamicStateCreateInfo::PipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), dynamicStateCount(in_struct->dynamicStateCount), pDynamicStates(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)in_struct->pDynamicStates, sizeof(VkDynamicState) * in_struct->dynamicStateCount);
    }
}

PipelineDynamicStateCreateInfo::PipelineDynamicStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      dynamicStateCount(),
      pDynamicStates(nullptr) {}

PipelineDynamicStateCreateInfo::PipelineDynamicStateCreateInfo(const PipelineDynamicStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dynamicStateCount = copy_src.dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src.dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src.pDynamicStates, sizeof(VkDynamicState) * copy_src.dynamicStateCount);
    }
}

PipelineDynamicStateCreateInfo& PipelineDynamicStateCreateInfo::operator=(const PipelineDynamicStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    dynamicStateCount = copy_src.dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src.dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src.pDynamicStates, sizeof(VkDynamicState) * copy_src.dynamicStateCount);
    }

    return *this;
}

PipelineDynamicStateCreateInfo::~PipelineDynamicStateCreateInfo() {
    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);
}

void PipelineDynamicStateCreateInfo::initialize(const VkPipelineDynamicStateCreateInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    dynamicStateCount = in_struct->dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)in_struct->pDynamicStates, sizeof(VkDynamicState) * in_struct->dynamicStateCount);
    }
}

void PipelineDynamicStateCreateInfo::initialize(const PipelineDynamicStateCreateInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dynamicStateCount = copy_src->dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src->pDynamicStates, sizeof(VkDynamicState) * copy_src->dynamicStateCount);
    }
}

PipelineLayoutCreateInfo::PipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      setLayoutCount(in_struct->setLayoutCount),
      pSetLayouts(nullptr),
      pushConstantRangeCount(in_struct->pushConstantRangeCount),
      pPushConstantRanges(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
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
}

PipelineLayoutCreateInfo::PipelineLayoutCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO),
      pNext(nullptr),
      flags(),
      setLayoutCount(),
      pSetLayouts(nullptr),
      pushConstantRangeCount(),
      pPushConstantRanges(nullptr) {}

PipelineLayoutCreateInfo::PipelineLayoutCreateInfo(const PipelineLayoutCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
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
}

PipelineLayoutCreateInfo& PipelineLayoutCreateInfo::operator=(const PipelineLayoutCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
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

    return *this;
}

PipelineLayoutCreateInfo::~PipelineLayoutCreateInfo() {
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);
}

void PipelineLayoutCreateInfo::initialize(const VkPipelineLayoutCreateInfo* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    setLayoutCount = in_struct->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = in_struct->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
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
}

void PipelineLayoutCreateInfo::initialize(const PipelineLayoutCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    setLayoutCount = copy_src->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
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
}

SamplerCreateInfo::SamplerCreateInfo(const VkSamplerCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      magFilter(in_struct->magFilter),
      minFilter(in_struct->minFilter),
      mipmapMode(in_struct->mipmapMode),
      addressModeU(in_struct->addressModeU),
      addressModeV(in_struct->addressModeV),
      addressModeW(in_struct->addressModeW),
      mipLodBias(in_struct->mipLodBias),
      anisotropyEnable(in_struct->anisotropyEnable),
      maxAnisotropy(in_struct->maxAnisotropy),
      compareEnable(in_struct->compareEnable),
      compareOp(in_struct->compareOp),
      minLod(in_struct->minLod),
      maxLod(in_struct->maxLod),
      borderColor(in_struct->borderColor),
      unnormalizedCoordinates(in_struct->unnormalizedCoordinates) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerCreateInfo::SamplerCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      magFilter(),
      minFilter(),
      mipmapMode(),
      addressModeU(),
      addressModeV(),
      addressModeW(),
      mipLodBias(),
      anisotropyEnable(),
      maxAnisotropy(),
      compareEnable(),
      compareOp(),
      minLod(),
      maxLod(),
      borderColor(),
      unnormalizedCoordinates() {}

SamplerCreateInfo::SamplerCreateInfo(const SamplerCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    magFilter = copy_src.magFilter;
    minFilter = copy_src.minFilter;
    mipmapMode = copy_src.mipmapMode;
    addressModeU = copy_src.addressModeU;
    addressModeV = copy_src.addressModeV;
    addressModeW = copy_src.addressModeW;
    mipLodBias = copy_src.mipLodBias;
    anisotropyEnable = copy_src.anisotropyEnable;
    maxAnisotropy = copy_src.maxAnisotropy;
    compareEnable = copy_src.compareEnable;
    compareOp = copy_src.compareOp;
    minLod = copy_src.minLod;
    maxLod = copy_src.maxLod;
    borderColor = copy_src.borderColor;
    unnormalizedCoordinates = copy_src.unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerCreateInfo& SamplerCreateInfo::operator=(const SamplerCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    magFilter = copy_src.magFilter;
    minFilter = copy_src.minFilter;
    mipmapMode = copy_src.mipmapMode;
    addressModeU = copy_src.addressModeU;
    addressModeV = copy_src.addressModeV;
    addressModeW = copy_src.addressModeW;
    mipLodBias = copy_src.mipLodBias;
    anisotropyEnable = copy_src.anisotropyEnable;
    maxAnisotropy = copy_src.maxAnisotropy;
    compareEnable = copy_src.compareEnable;
    compareOp = copy_src.compareOp;
    minLod = copy_src.minLod;
    maxLod = copy_src.maxLod;
    borderColor = copy_src.borderColor;
    unnormalizedCoordinates = copy_src.unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerCreateInfo::~SamplerCreateInfo() { FreePnextChain(pNext); }

void SamplerCreateInfo::initialize(const VkSamplerCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    magFilter = in_struct->magFilter;
    minFilter = in_struct->minFilter;
    mipmapMode = in_struct->mipmapMode;
    addressModeU = in_struct->addressModeU;
    addressModeV = in_struct->addressModeV;
    addressModeW = in_struct->addressModeW;
    mipLodBias = in_struct->mipLodBias;
    anisotropyEnable = in_struct->anisotropyEnable;
    maxAnisotropy = in_struct->maxAnisotropy;
    compareEnable = in_struct->compareEnable;
    compareOp = in_struct->compareOp;
    minLod = in_struct->minLod;
    maxLod = in_struct->maxLod;
    borderColor = in_struct->borderColor;
    unnormalizedCoordinates = in_struct->unnormalizedCoordinates;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerCreateInfo::initialize(const SamplerCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    magFilter = copy_src->magFilter;
    minFilter = copy_src->minFilter;
    mipmapMode = copy_src->mipmapMode;
    addressModeU = copy_src->addressModeU;
    addressModeV = copy_src->addressModeV;
    addressModeW = copy_src->addressModeW;
    mipLodBias = copy_src->mipLodBias;
    anisotropyEnable = copy_src->anisotropyEnable;
    maxAnisotropy = copy_src->maxAnisotropy;
    compareEnable = copy_src->compareEnable;
    compareOp = copy_src->compareOp;
    minLod = copy_src->minLod;
    maxLod = copy_src->maxLod;
    borderColor = copy_src->borderColor;
    unnormalizedCoordinates = copy_src->unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyDescriptorSet::CopyDescriptorSet(const VkCopyDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType),
      srcSet(in_struct->srcSet),
      srcBinding(in_struct->srcBinding),
      srcArrayElement(in_struct->srcArrayElement),
      dstSet(in_struct->dstSet),
      dstBinding(in_struct->dstBinding),
      dstArrayElement(in_struct->dstArrayElement),
      descriptorCount(in_struct->descriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyDescriptorSet::CopyDescriptorSet()
    : sType(VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET),
      pNext(nullptr),
      srcSet(),
      srcBinding(),
      srcArrayElement(),
      dstSet(),
      dstBinding(),
      dstArrayElement(),
      descriptorCount() {}

CopyDescriptorSet::CopyDescriptorSet(const CopyDescriptorSet& copy_src) {
    sType = copy_src.sType;
    srcSet = copy_src.srcSet;
    srcBinding = copy_src.srcBinding;
    srcArrayElement = copy_src.srcArrayElement;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyDescriptorSet& CopyDescriptorSet::operator=(const CopyDescriptorSet& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSet = copy_src.srcSet;
    srcBinding = copy_src.srcBinding;
    srcArrayElement = copy_src.srcArrayElement;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyDescriptorSet::~CopyDescriptorSet() { FreePnextChain(pNext); }

void CopyDescriptorSet::initialize(const VkCopyDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSet = in_struct->srcSet;
    srcBinding = in_struct->srcBinding;
    srcArrayElement = in_struct->srcArrayElement;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyDescriptorSet::initialize(const CopyDescriptorSet* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSet = copy_src->srcSet;
    srcBinding = copy_src->srcBinding;
    srcArrayElement = copy_src->srcArrayElement;
    dstSet = copy_src->dstSet;
    dstBinding = copy_src->dstBinding;
    dstArrayElement = copy_src->dstArrayElement;
    descriptorCount = copy_src->descriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorPoolCreateInfo::DescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      maxSets(in_struct->maxSets),
      poolSizeCount(in_struct->poolSizeCount),
      pPoolSizes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize) * in_struct->poolSizeCount);
    }
}

DescriptorPoolCreateInfo::DescriptorPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO),
      pNext(nullptr),
      flags(),
      maxSets(),
      poolSizeCount(),
      pPoolSizes(nullptr) {}

DescriptorPoolCreateInfo::DescriptorPoolCreateInfo(const DescriptorPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    maxSets = copy_src.maxSets;
    poolSizeCount = copy_src.poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src.poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src.pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src.poolSizeCount);
    }
}

DescriptorPoolCreateInfo& DescriptorPoolCreateInfo::operator=(const DescriptorPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    maxSets = copy_src.maxSets;
    poolSizeCount = copy_src.poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src.poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src.pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src.poolSizeCount);
    }

    return *this;
}

DescriptorPoolCreateInfo::~DescriptorPoolCreateInfo() {
    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);
}

void DescriptorPoolCreateInfo::initialize(const VkDescriptorPoolCreateInfo* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    maxSets = in_struct->maxSets;
    poolSizeCount = in_struct->poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize) * in_struct->poolSizeCount);
    }
}

void DescriptorPoolCreateInfo::initialize(const DescriptorPoolCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    maxSets = copy_src->maxSets;
    poolSizeCount = copy_src->poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src->pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src->poolSizeCount);
    }
}

DescriptorSetAllocateInfo::DescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      descriptorPool(in_struct->descriptorPool),
      descriptorSetCount(in_struct->descriptorSetCount),
      pSetLayouts(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

DescriptorSetAllocateInfo::DescriptorSetAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO),
      pNext(nullptr),
      descriptorPool(),
      descriptorSetCount(),
      pSetLayouts(nullptr) {}

DescriptorSetAllocateInfo::DescriptorSetAllocateInfo(const DescriptorSetAllocateInfo& copy_src) {
    sType = copy_src.sType;
    descriptorPool = copy_src.descriptorPool;
    descriptorSetCount = copy_src.descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }
}

DescriptorSetAllocateInfo& DescriptorSetAllocateInfo::operator=(const DescriptorSetAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorPool = copy_src.descriptorPool;
    descriptorSetCount = copy_src.descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    return *this;
}

DescriptorSetAllocateInfo::~DescriptorSetAllocateInfo() {
    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);
}

void DescriptorSetAllocateInfo::initialize(const VkDescriptorSetAllocateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorPool = in_struct->descriptorPool;
    descriptorSetCount = in_struct->descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

void DescriptorSetAllocateInfo::initialize(const DescriptorSetAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorPool = copy_src->descriptorPool;
    descriptorSetCount = copy_src->descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (descriptorSetCount && copy_src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src->pSetLayouts[i];
        }
    }
}

DescriptorSetLayoutBinding::DescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state)
    : binding(in_struct->binding),
      descriptorType(in_struct->descriptorType),
      descriptorCount(in_struct->descriptorCount),
      stageFlags(in_struct->stageFlags),
      pImmutableSamplers(nullptr) {
    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

DescriptorSetLayoutBinding::DescriptorSetLayoutBinding()
    : binding(), descriptorType(), descriptorCount(), stageFlags(), pImmutableSamplers(nullptr) {}

DescriptorSetLayoutBinding::DescriptorSetLayoutBinding(const DescriptorSetLayoutBinding& copy_src) {
    binding = copy_src.binding;
    descriptorType = copy_src.descriptorType;
    descriptorCount = copy_src.descriptorCount;
    stageFlags = copy_src.stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src.pImmutableSamplers[i];
        }
    }
}

DescriptorSetLayoutBinding& DescriptorSetLayoutBinding::operator=(const DescriptorSetLayoutBinding& copy_src) {
    if (&copy_src == this) return *this;

    if (pImmutableSamplers) delete[] pImmutableSamplers;

    binding = copy_src.binding;
    descriptorType = copy_src.descriptorType;
    descriptorCount = copy_src.descriptorCount;
    stageFlags = copy_src.stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src.pImmutableSamplers[i];
        }
    }

    return *this;
}

DescriptorSetLayoutBinding::~DescriptorSetLayoutBinding() {
    if (pImmutableSamplers) delete[] pImmutableSamplers;
}

void DescriptorSetLayoutBinding::initialize(const VkDescriptorSetLayoutBinding* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImmutableSamplers) delete[] pImmutableSamplers;
    binding = in_struct->binding;
    descriptorType = in_struct->descriptorType;
    descriptorCount = in_struct->descriptorCount;
    stageFlags = in_struct->stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

void DescriptorSetLayoutBinding::initialize(const DescriptorSetLayoutBinding* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    binding = copy_src->binding;
    descriptorType = copy_src->descriptorType;
    descriptorCount = copy_src->descriptorCount;
    stageFlags = copy_src->stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src->pImmutableSamplers[i];
        }
    }
}

DescriptorSetLayoutCreateInfo::DescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), bindingCount(in_struct->bindingCount), pBindings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (bindingCount && in_struct->pBindings) {
        pBindings = new DescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

DescriptorSetLayoutCreateInfo::DescriptorSetLayoutCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO), pNext(nullptr), flags(), bindingCount(), pBindings(nullptr) {}

DescriptorSetLayoutCreateInfo::DescriptorSetLayoutCreateInfo(const DescriptorSetLayoutCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    bindingCount = copy_src.bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (bindingCount && copy_src.pBindings) {
        pBindings = new DescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src.pBindings[i]);
        }
    }
}

DescriptorSetLayoutCreateInfo& DescriptorSetLayoutCreateInfo::operator=(const DescriptorSetLayoutCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    bindingCount = copy_src.bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (bindingCount && copy_src.pBindings) {
        pBindings = new DescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src.pBindings[i]);
        }
    }

    return *this;
}

DescriptorSetLayoutCreateInfo::~DescriptorSetLayoutCreateInfo() {
    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);
}

void DescriptorSetLayoutCreateInfo::initialize(const VkDescriptorSetLayoutCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    bindingCount = in_struct->bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (bindingCount && in_struct->pBindings) {
        pBindings = new DescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

void DescriptorSetLayoutCreateInfo::initialize(const DescriptorSetLayoutCreateInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    bindingCount = copy_src->bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (bindingCount && copy_src->pBindings) {
        pBindings = new DescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src->pBindings[i]);
        }
    }
}

WriteDescriptorSet::WriteDescriptorSet(const VkWriteDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      dstSet(in_struct->dstSet),
      dstBinding(in_struct->dstBinding),
      dstArrayElement(in_struct->dstArrayElement),
      descriptorCount(in_struct->descriptorCount),
      descriptorType(in_struct->descriptorType),
      pImageInfo(nullptr),
      pBufferInfo(nullptr),
      pTexelBufferView(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && in_struct->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = in_struct->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && in_struct->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = in_struct->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && in_struct->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = in_struct->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

WriteDescriptorSet::WriteDescriptorSet()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET),
      pNext(nullptr),
      dstSet(),
      dstBinding(),
      dstArrayElement(),
      descriptorCount(),
      descriptorType(),
      pImageInfo(nullptr),
      pBufferInfo(nullptr),
      pTexelBufferView(nullptr) {}

WriteDescriptorSet::WriteDescriptorSet(const WriteDescriptorSet& copy_src) {
    sType = copy_src.sType;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    descriptorType = copy_src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src.pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src.pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src.pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src.pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src.pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src.pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

WriteDescriptorSet& WriteDescriptorSet::operator=(const WriteDescriptorSet& copy_src) {
    if (&copy_src == this) return *this;

    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    descriptorType = copy_src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src.pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src.pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src.pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src.pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src.pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src.pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }

    return *this;
}

WriteDescriptorSet::~WriteDescriptorSet() {
    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);
}

void WriteDescriptorSet::initialize(const VkWriteDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    descriptorType = in_struct->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && in_struct->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = in_struct->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && in_struct->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = in_struct->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && in_struct->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = in_struct->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

void WriteDescriptorSet::initialize(const WriteDescriptorSet* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dstSet = copy_src->dstSet;
    dstBinding = copy_src->dstBinding;
    dstArrayElement = copy_src->dstArrayElement;
    descriptorCount = copy_src->descriptorCount;
    descriptorType = copy_src->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

FramebufferCreateInfo::FramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      renderPass(in_struct->renderPass),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      width(in_struct->width),
      height(in_struct->height),
      layers(in_struct->layers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

FramebufferCreateInfo::FramebufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      renderPass(),
      attachmentCount(),
      pAttachments(nullptr),
      width(),
      height(),
      layers() {}

FramebufferCreateInfo::FramebufferCreateInfo(const FramebufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    renderPass = copy_src.renderPass;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    width = copy_src.width;
    height = copy_src.height;
    layers = copy_src.layers;

    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }
}

FramebufferCreateInfo& FramebufferCreateInfo::operator=(const FramebufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    renderPass = copy_src.renderPass;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    width = copy_src.width;
    height = copy_src.height;
    layers = copy_src.layers;

    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }

    return *this;
}

FramebufferCreateInfo::~FramebufferCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void FramebufferCreateInfo::initialize(const VkFramebufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    renderPass = in_struct->renderPass;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    width = in_struct->width;
    height = in_struct->height;
    layers = in_struct->layers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (attachmentCount && in_struct->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void FramebufferCreateInfo::initialize(const FramebufferCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    renderPass = copy_src->renderPass;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    width = copy_src->width;
    height = copy_src->height;
    layers = copy_src->layers;

    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src->pAttachments[i];
        }
    }
}

SubpassDescription::SubpassDescription(const VkSubpassDescription* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : flags(in_struct->flags),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      inputAttachmentCount(in_struct->inputAttachmentCount),
      pInputAttachments(nullptr),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(in_struct->preserveAttachmentCount),
      pPreserveAttachments(nullptr) {
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)in_struct->pInputAttachments,
               sizeof(VkAttachmentReference) * in_struct->inputAttachmentCount);
    }

    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)in_struct->pColorAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)in_struct->pResolveAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

SubpassDescription::SubpassDescription()
    : flags(),
      pipelineBindPoint(),
      inputAttachmentCount(),
      pInputAttachments(nullptr),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(),
      pPreserveAttachments(nullptr) {}

SubpassDescription::SubpassDescription(const SubpassDescription& copy_src) {
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src.inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src.pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src.inputAttachmentCount);
    }

    if (copy_src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src.pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src.pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src.pDepthStencilAttachment);
    }

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }
}

SubpassDescription& SubpassDescription::operator=(const SubpassDescription& copy_src) {
    if (&copy_src == this) return *this;

    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;

    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src.inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src.pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src.inputAttachmentCount);
    }

    if (copy_src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src.pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src.pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src.pDepthStencilAttachment);
    }

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }

    return *this;
}

SubpassDescription::~SubpassDescription() {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
}

void SubpassDescription::initialize(const VkSubpassDescription* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)in_struct->pInputAttachments,
               sizeof(VkAttachmentReference) * in_struct->inputAttachmentCount);
    }

    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)in_struct->pColorAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)in_struct->pResolveAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

void SubpassDescription::initialize(const SubpassDescription* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    flags = copy_src->flags;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    inputAttachmentCount = copy_src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src->pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src->inputAttachmentCount);
    }

    if (copy_src->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src->pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src->colorAttachmentCount);
    }

    if (copy_src->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src->pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src->colorAttachmentCount);
    }

    if (copy_src->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src->pDepthStencilAttachment);
    }

    if (copy_src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src->pPreserveAttachments,
               sizeof(uint32_t) * copy_src->preserveAttachmentCount);
    }
}

RenderPassCreateInfo::RenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      subpassCount(in_struct->subpassCount),
      pSubpasses(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pDependencies(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments, sizeof(VkAttachmentDescription) * in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new SubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }

    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy((void*)pDependencies, (void*)in_struct->pDependencies, sizeof(VkSubpassDependency) * in_struct->dependencyCount);
    }
}

RenderPassCreateInfo::RenderPassCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO),
      pNext(nullptr),
      flags(),
      attachmentCount(),
      pAttachments(nullptr),
      subpassCount(),
      pSubpasses(nullptr),
      dependencyCount(),
      pDependencies(nullptr) {}

RenderPassCreateInfo::RenderPassCreateInfo(const RenderPassCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments, sizeof(VkAttachmentDescription) * copy_src.attachmentCount);
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new SubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }

    if (copy_src.pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src.dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src.pDependencies, sizeof(VkSubpassDependency) * copy_src.dependencyCount);
    }
}

RenderPassCreateInfo& RenderPassCreateInfo::operator=(const RenderPassCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments, sizeof(VkAttachmentDescription) * copy_src.attachmentCount);
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new SubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }

    if (copy_src.pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src.dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src.pDependencies, sizeof(VkSubpassDependency) * copy_src.dependencyCount);
    }

    return *this;
}

RenderPassCreateInfo::~RenderPassCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);
}

void RenderPassCreateInfo::initialize(const VkRenderPassCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments, sizeof(VkAttachmentDescription) * in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new SubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }

    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy((void*)pDependencies, (void*)in_struct->pDependencies, sizeof(VkSubpassDependency) * in_struct->dependencyCount);
    }
}

void RenderPassCreateInfo::initialize(const RenderPassCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src->attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src->pAttachments, sizeof(VkAttachmentDescription) * copy_src->attachmentCount);
    }
    if (subpassCount && copy_src->pSubpasses) {
        pSubpasses = new SubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src->pSubpasses[i]);
        }
    }

    if (copy_src->pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src->dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src->pDependencies, sizeof(VkSubpassDependency) * copy_src->dependencyCount);
    }
}

CommandPoolCreateInfo::CommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), queueFamilyIndex(in_struct->queueFamilyIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandPoolCreateInfo::CommandPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO), pNext(nullptr), flags(), queueFamilyIndex() {}

CommandPoolCreateInfo::CommandPoolCreateInfo(const CommandPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandPoolCreateInfo& CommandPoolCreateInfo::operator=(const CommandPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandPoolCreateInfo::~CommandPoolCreateInfo() { FreePnextChain(pNext); }

void CommandPoolCreateInfo::initialize(const VkCommandPoolCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandPoolCreateInfo::initialize(const CommandPoolCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferAllocateInfo::CommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      commandPool(in_struct->commandPool),
      level(in_struct->level),
      commandBufferCount(in_struct->commandBufferCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandBufferAllocateInfo::CommandBufferAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO), pNext(nullptr), commandPool(), level(), commandBufferCount() {}

CommandBufferAllocateInfo::CommandBufferAllocateInfo(const CommandBufferAllocateInfo& copy_src) {
    sType = copy_src.sType;
    commandPool = copy_src.commandPool;
    level = copy_src.level;
    commandBufferCount = copy_src.commandBufferCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandBufferAllocateInfo& CommandBufferAllocateInfo::operator=(const CommandBufferAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    commandPool = copy_src.commandPool;
    level = copy_src.level;
    commandBufferCount = copy_src.commandBufferCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandBufferAllocateInfo::~CommandBufferAllocateInfo() { FreePnextChain(pNext); }

void CommandBufferAllocateInfo::initialize(const VkCommandBufferAllocateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    commandPool = in_struct->commandPool;
    level = in_struct->level;
    commandBufferCount = in_struct->commandBufferCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandBufferAllocateInfo::initialize(const CommandBufferAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    commandPool = copy_src->commandPool;
    level = copy_src->level;
    commandBufferCount = copy_src->commandBufferCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferInheritanceInfo::CommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      renderPass(in_struct->renderPass),
      subpass(in_struct->subpass),
      framebuffer(in_struct->framebuffer),
      occlusionQueryEnable(in_struct->occlusionQueryEnable),
      queryFlags(in_struct->queryFlags),
      pipelineStatistics(in_struct->pipelineStatistics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandBufferInheritanceInfo::CommandBufferInheritanceInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO),
      pNext(nullptr),
      renderPass(),
      subpass(),
      framebuffer(),
      occlusionQueryEnable(),
      queryFlags(),
      pipelineStatistics() {}

CommandBufferInheritanceInfo::CommandBufferInheritanceInfo(const CommandBufferInheritanceInfo& copy_src) {
    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    framebuffer = copy_src.framebuffer;
    occlusionQueryEnable = copy_src.occlusionQueryEnable;
    queryFlags = copy_src.queryFlags;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandBufferInheritanceInfo& CommandBufferInheritanceInfo::operator=(const CommandBufferInheritanceInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    framebuffer = copy_src.framebuffer;
    occlusionQueryEnable = copy_src.occlusionQueryEnable;
    queryFlags = copy_src.queryFlags;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandBufferInheritanceInfo::~CommandBufferInheritanceInfo() { FreePnextChain(pNext); }

void CommandBufferInheritanceInfo::initialize(const VkCommandBufferInheritanceInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    framebuffer = in_struct->framebuffer;
    occlusionQueryEnable = in_struct->occlusionQueryEnable;
    queryFlags = in_struct->queryFlags;
    pipelineStatistics = in_struct->pipelineStatistics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandBufferInheritanceInfo::initialize(const CommandBufferInheritanceInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPass = copy_src->renderPass;
    subpass = copy_src->subpass;
    framebuffer = copy_src->framebuffer;
    occlusionQueryEnable = copy_src->occlusionQueryEnable;
    queryFlags = copy_src->queryFlags;
    pipelineStatistics = copy_src->pipelineStatistics;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferBeginInfo::CommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), pInheritanceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pInheritanceInfo) pInheritanceInfo = new CommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
}

CommandBufferBeginInfo::CommandBufferBeginInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO), pNext(nullptr), flags(), pInheritanceInfo(nullptr) {}

CommandBufferBeginInfo::CommandBufferBeginInfo(const CommandBufferBeginInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pInheritanceInfo) pInheritanceInfo = new CommandBufferInheritanceInfo(*copy_src.pInheritanceInfo);
}

CommandBufferBeginInfo& CommandBufferBeginInfo::operator=(const CommandBufferBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pInheritanceInfo) pInheritanceInfo = new CommandBufferInheritanceInfo(*copy_src.pInheritanceInfo);

    return *this;
}

CommandBufferBeginInfo::~CommandBufferBeginInfo() {
    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);
}

void CommandBufferBeginInfo::initialize(const VkCommandBufferBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pInheritanceInfo) pInheritanceInfo = new CommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
}

void CommandBufferBeginInfo::initialize(const CommandBufferBeginInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pInheritanceInfo) pInheritanceInfo = new CommandBufferInheritanceInfo(*copy_src->pInheritanceInfo);
}

RenderPassBeginInfo::RenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      renderPass(in_struct->renderPass),
      framebuffer(in_struct->framebuffer),
      renderArea(in_struct->renderArea),
      clearValueCount(in_struct->clearValueCount),
      pClearValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy((void*)pClearValues, (void*)in_struct->pClearValues, sizeof(VkClearValue) * in_struct->clearValueCount);
    }
}

RenderPassBeginInfo::RenderPassBeginInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO),
      pNext(nullptr),
      renderPass(),
      framebuffer(),
      renderArea(),
      clearValueCount(),
      pClearValues(nullptr) {}

RenderPassBeginInfo::RenderPassBeginInfo(const RenderPassBeginInfo& copy_src) {
    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    framebuffer = copy_src.framebuffer;
    renderArea = copy_src.renderArea;
    clearValueCount = copy_src.clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pClearValues) {
        pClearValues = new VkClearValue[copy_src.clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src.pClearValues, sizeof(VkClearValue) * copy_src.clearValueCount);
    }
}

RenderPassBeginInfo& RenderPassBeginInfo::operator=(const RenderPassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    framebuffer = copy_src.framebuffer;
    renderArea = copy_src.renderArea;
    clearValueCount = copy_src.clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pClearValues) {
        pClearValues = new VkClearValue[copy_src.clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src.pClearValues, sizeof(VkClearValue) * copy_src.clearValueCount);
    }

    return *this;
}

RenderPassBeginInfo::~RenderPassBeginInfo() {
    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);
}

void RenderPassBeginInfo::initialize(const VkRenderPassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPass = in_struct->renderPass;
    framebuffer = in_struct->framebuffer;
    renderArea = in_struct->renderArea;
    clearValueCount = in_struct->clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy((void*)pClearValues, (void*)in_struct->pClearValues, sizeof(VkClearValue) * in_struct->clearValueCount);
    }
}

void RenderPassBeginInfo::initialize(const RenderPassBeginInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPass = copy_src->renderPass;
    framebuffer = copy_src->framebuffer;
    renderArea = copy_src->renderArea;
    clearValueCount = copy_src->clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pClearValues) {
        pClearValues = new VkClearValue[copy_src->clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src->pClearValues, sizeof(VkClearValue) * copy_src->clearValueCount);
    }
}

PhysicalDeviceSubgroupProperties::PhysicalDeviceSubgroupProperties(const VkPhysicalDeviceSubgroupProperties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subgroupSize(in_struct->subgroupSize),
      supportedStages(in_struct->supportedStages),
      supportedOperations(in_struct->supportedOperations),
      quadOperationsInAllStages(in_struct->quadOperationsInAllStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubgroupProperties::PhysicalDeviceSubgroupProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES),
      pNext(nullptr),
      subgroupSize(),
      supportedStages(),
      supportedOperations(),
      quadOperationsInAllStages() {}

PhysicalDeviceSubgroupProperties::PhysicalDeviceSubgroupProperties(const PhysicalDeviceSubgroupProperties& copy_src) {
    sType = copy_src.sType;
    subgroupSize = copy_src.subgroupSize;
    supportedStages = copy_src.supportedStages;
    supportedOperations = copy_src.supportedOperations;
    quadOperationsInAllStages = copy_src.quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubgroupProperties& PhysicalDeviceSubgroupProperties::operator=(const PhysicalDeviceSubgroupProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subgroupSize = copy_src.subgroupSize;
    supportedStages = copy_src.supportedStages;
    supportedOperations = copy_src.supportedOperations;
    quadOperationsInAllStages = copy_src.quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubgroupProperties::~PhysicalDeviceSubgroupProperties() { FreePnextChain(pNext); }

void PhysicalDeviceSubgroupProperties::initialize(const VkPhysicalDeviceSubgroupProperties* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subgroupSize = in_struct->subgroupSize;
    supportedStages = in_struct->supportedStages;
    supportedOperations = in_struct->supportedOperations;
    quadOperationsInAllStages = in_struct->quadOperationsInAllStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubgroupProperties::initialize(const PhysicalDeviceSubgroupProperties* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subgroupSize = copy_src->subgroupSize;
    supportedStages = copy_src->supportedStages;
    supportedOperations = copy_src->supportedOperations;
    quadOperationsInAllStages = copy_src->quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindBufferMemoryInfo::BindBufferMemoryInfo(const VkBindBufferMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer), memory(in_struct->memory), memoryOffset(in_struct->memoryOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindBufferMemoryInfo::BindBufferMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO), pNext(nullptr), buffer(), memory(), memoryOffset() {}

BindBufferMemoryInfo::BindBufferMemoryInfo(const BindBufferMemoryInfo& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindBufferMemoryInfo& BindBufferMemoryInfo::operator=(const BindBufferMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindBufferMemoryInfo::~BindBufferMemoryInfo() { FreePnextChain(pNext); }

void BindBufferMemoryInfo::initialize(const VkBindBufferMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindBufferMemoryInfo::initialize(const BindBufferMemoryInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindImageMemoryInfo::BindImageMemoryInfo(const VkBindImageMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), memory(in_struct->memory), memoryOffset(in_struct->memoryOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindImageMemoryInfo::BindImageMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO), pNext(nullptr), image(), memory(), memoryOffset() {}

BindImageMemoryInfo::BindImageMemoryInfo(const BindImageMemoryInfo& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindImageMemoryInfo& BindImageMemoryInfo::operator=(const BindImageMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindImageMemoryInfo::~BindImageMemoryInfo() { FreePnextChain(pNext); }

void BindImageMemoryInfo::initialize(const VkBindImageMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindImageMemoryInfo::initialize(const BindImageMemoryInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevice16BitStorageFeatures::PhysicalDevice16BitStorageFeatures(const VkPhysicalDevice16BitStorageFeatures* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer16BitAccess(in_struct->storageBuffer16BitAccess),
      uniformAndStorageBuffer16BitAccess(in_struct->uniformAndStorageBuffer16BitAccess),
      storagePushConstant16(in_struct->storagePushConstant16),
      storageInputOutput16(in_struct->storageInputOutput16) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevice16BitStorageFeatures::PhysicalDevice16BitStorageFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES),
      pNext(nullptr),
      storageBuffer16BitAccess(),
      uniformAndStorageBuffer16BitAccess(),
      storagePushConstant16(),
      storageInputOutput16() {}

PhysicalDevice16BitStorageFeatures::PhysicalDevice16BitStorageFeatures(const PhysicalDevice16BitStorageFeatures& copy_src) {
    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevice16BitStorageFeatures& PhysicalDevice16BitStorageFeatures::operator=(
    const PhysicalDevice16BitStorageFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevice16BitStorageFeatures::~PhysicalDevice16BitStorageFeatures() { FreePnextChain(pNext); }

void PhysicalDevice16BitStorageFeatures::initialize(const VkPhysicalDevice16BitStorageFeatures* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer16BitAccess = in_struct->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = in_struct->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = in_struct->storagePushConstant16;
    storageInputOutput16 = in_struct->storageInputOutput16;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevice16BitStorageFeatures::initialize(const PhysicalDevice16BitStorageFeatures* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer16BitAccess = copy_src->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src->storagePushConstant16;
    storageInputOutput16 = copy_src->storageInputOutput16;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryDedicatedRequirements::MemoryDedicatedRequirements(const VkMemoryDedicatedRequirements* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      prefersDedicatedAllocation(in_struct->prefersDedicatedAllocation),
      requiresDedicatedAllocation(in_struct->requiresDedicatedAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryDedicatedRequirements::MemoryDedicatedRequirements()
    : sType(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS),
      pNext(nullptr),
      prefersDedicatedAllocation(),
      requiresDedicatedAllocation() {}

MemoryDedicatedRequirements::MemoryDedicatedRequirements(const MemoryDedicatedRequirements& copy_src) {
    sType = copy_src.sType;
    prefersDedicatedAllocation = copy_src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src.requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryDedicatedRequirements& MemoryDedicatedRequirements::operator=(const MemoryDedicatedRequirements& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    prefersDedicatedAllocation = copy_src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src.requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryDedicatedRequirements::~MemoryDedicatedRequirements() { FreePnextChain(pNext); }

void MemoryDedicatedRequirements::initialize(const VkMemoryDedicatedRequirements* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    prefersDedicatedAllocation = in_struct->prefersDedicatedAllocation;
    requiresDedicatedAllocation = in_struct->requiresDedicatedAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryDedicatedRequirements::initialize(const MemoryDedicatedRequirements* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    prefersDedicatedAllocation = copy_src->prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src->requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryDedicatedAllocateInfo::MemoryDedicatedAllocateInfo(const VkMemoryDedicatedAllocateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryDedicatedAllocateInfo::MemoryDedicatedAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO), pNext(nullptr), image(), buffer() {}

MemoryDedicatedAllocateInfo::MemoryDedicatedAllocateInfo(const MemoryDedicatedAllocateInfo& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryDedicatedAllocateInfo& MemoryDedicatedAllocateInfo::operator=(const MemoryDedicatedAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryDedicatedAllocateInfo::~MemoryDedicatedAllocateInfo() { FreePnextChain(pNext); }

void MemoryDedicatedAllocateInfo::initialize(const VkMemoryDedicatedAllocateInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryDedicatedAllocateInfo::initialize(const MemoryDedicatedAllocateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryAllocateFlagsInfo::MemoryAllocateFlagsInfo(const VkMemoryAllocateFlagsInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryAllocateFlagsInfo::MemoryAllocateFlagsInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO), pNext(nullptr), flags(), deviceMask() {}

MemoryAllocateFlagsInfo::MemoryAllocateFlagsInfo(const MemoryAllocateFlagsInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryAllocateFlagsInfo& MemoryAllocateFlagsInfo::operator=(const MemoryAllocateFlagsInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryAllocateFlagsInfo::~MemoryAllocateFlagsInfo() { FreePnextChain(pNext); }

void MemoryAllocateFlagsInfo::initialize(const VkMemoryAllocateFlagsInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryAllocateFlagsInfo::initialize(const MemoryAllocateFlagsInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceGroupRenderPassBeginInfo::DeviceGroupRenderPassBeginInfo(const VkDeviceGroupRenderPassBeginInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      deviceMask(in_struct->deviceMask),
      deviceRenderAreaCount(in_struct->deviceRenderAreaCount),
      pDeviceRenderAreas(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)in_struct->pDeviceRenderAreas,
               sizeof(VkRect2D) * in_struct->deviceRenderAreaCount);
    }
}

DeviceGroupRenderPassBeginInfo::DeviceGroupRenderPassBeginInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO),
      pNext(nullptr),
      deviceMask(),
      deviceRenderAreaCount(),
      pDeviceRenderAreas(nullptr) {}

DeviceGroupRenderPassBeginInfo::DeviceGroupRenderPassBeginInfo(const DeviceGroupRenderPassBeginInfo& copy_src) {
    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    deviceRenderAreaCount = copy_src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src.deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src.pDeviceRenderAreas, sizeof(VkRect2D) * copy_src.deviceRenderAreaCount);
    }
}

DeviceGroupRenderPassBeginInfo& DeviceGroupRenderPassBeginInfo::operator=(const DeviceGroupRenderPassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    deviceRenderAreaCount = copy_src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src.deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src.pDeviceRenderAreas, sizeof(VkRect2D) * copy_src.deviceRenderAreaCount);
    }

    return *this;
}

DeviceGroupRenderPassBeginInfo::~DeviceGroupRenderPassBeginInfo() {
    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);
}

void DeviceGroupRenderPassBeginInfo::initialize(const VkDeviceGroupRenderPassBeginInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceMask = in_struct->deviceMask;
    deviceRenderAreaCount = in_struct->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)in_struct->pDeviceRenderAreas,
               sizeof(VkRect2D) * in_struct->deviceRenderAreaCount);
    }
}

void DeviceGroupRenderPassBeginInfo::initialize(const DeviceGroupRenderPassBeginInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceMask = copy_src->deviceMask;
    deviceRenderAreaCount = copy_src->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src->pDeviceRenderAreas, sizeof(VkRect2D) * copy_src->deviceRenderAreaCount);
    }
}

DeviceGroupCommandBufferBeginInfo::DeviceGroupCommandBufferBeginInfo(const VkDeviceGroupCommandBufferBeginInfo* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceGroupCommandBufferBeginInfo::DeviceGroupCommandBufferBeginInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO), pNext(nullptr), deviceMask() {}

DeviceGroupCommandBufferBeginInfo::DeviceGroupCommandBufferBeginInfo(const DeviceGroupCommandBufferBeginInfo& copy_src) {
    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceGroupCommandBufferBeginInfo& DeviceGroupCommandBufferBeginInfo::operator=(const DeviceGroupCommandBufferBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceGroupCommandBufferBeginInfo::~DeviceGroupCommandBufferBeginInfo() { FreePnextChain(pNext); }

void DeviceGroupCommandBufferBeginInfo::initialize(const VkDeviceGroupCommandBufferBeginInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceGroupCommandBufferBeginInfo::initialize(const DeviceGroupCommandBufferBeginInfo* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceGroupSubmitInfo::DeviceGroupSubmitInfo(const VkDeviceGroupSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphoreDeviceIndices(nullptr),
      commandBufferCount(in_struct->commandBufferCount),
      pCommandBufferDeviceMasks(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphoreDeviceIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)in_struct->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)in_struct->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * in_struct->commandBufferCount);
    }

    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)in_struct->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->signalSemaphoreCount);
    }
}

DeviceGroupSubmitInfo::DeviceGroupSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphoreDeviceIndices(nullptr),
      commandBufferCount(),
      pCommandBufferDeviceMasks(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphoreDeviceIndices(nullptr) {}

DeviceGroupSubmitInfo::DeviceGroupSubmitInfo(const DeviceGroupSubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src.pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src.commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src.pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src.commandBufferCount);
    }

    if (copy_src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src.signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src.pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.signalSemaphoreCount);
    }
}

DeviceGroupSubmitInfo& DeviceGroupSubmitInfo::operator=(const DeviceGroupSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src.pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src.commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src.pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src.commandBufferCount);
    }

    if (copy_src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src.signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src.pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.signalSemaphoreCount);
    }

    return *this;
}

DeviceGroupSubmitInfo::~DeviceGroupSubmitInfo() {
    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);
}

void DeviceGroupSubmitInfo::initialize(const VkDeviceGroupSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)in_struct->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)in_struct->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * in_struct->commandBufferCount);
    }

    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)in_struct->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->signalSemaphoreCount);
    }
}

void DeviceGroupSubmitInfo::initialize(const DeviceGroupSubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src->waitSemaphoreCount);
    }

    if (copy_src->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src->commandBufferCount);
    }

    if (copy_src->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src->signalSemaphoreCount);
    }
}

DeviceGroupBindSparseInfo::DeviceGroupBindSparseInfo(const VkDeviceGroupBindSparseInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      resourceDeviceIndex(in_struct->resourceDeviceIndex),
      memoryDeviceIndex(in_struct->memoryDeviceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceGroupBindSparseInfo::DeviceGroupBindSparseInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO), pNext(nullptr), resourceDeviceIndex(), memoryDeviceIndex() {}

DeviceGroupBindSparseInfo::DeviceGroupBindSparseInfo(const DeviceGroupBindSparseInfo& copy_src) {
    sType = copy_src.sType;
    resourceDeviceIndex = copy_src.resourceDeviceIndex;
    memoryDeviceIndex = copy_src.memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceGroupBindSparseInfo& DeviceGroupBindSparseInfo::operator=(const DeviceGroupBindSparseInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    resourceDeviceIndex = copy_src.resourceDeviceIndex;
    memoryDeviceIndex = copy_src.memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceGroupBindSparseInfo::~DeviceGroupBindSparseInfo() { FreePnextChain(pNext); }

void DeviceGroupBindSparseInfo::initialize(const VkDeviceGroupBindSparseInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    resourceDeviceIndex = in_struct->resourceDeviceIndex;
    memoryDeviceIndex = in_struct->memoryDeviceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceGroupBindSparseInfo::initialize(const DeviceGroupBindSparseInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    resourceDeviceIndex = copy_src->resourceDeviceIndex;
    memoryDeviceIndex = copy_src->memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindBufferMemoryDeviceGroupInfo::BindBufferMemoryDeviceGroupInfo(const VkBindBufferMemoryDeviceGroupInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceIndexCount(in_struct->deviceIndexCount), pDeviceIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

BindBufferMemoryDeviceGroupInfo::BindBufferMemoryDeviceGroupInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO), pNext(nullptr), deviceIndexCount(), pDeviceIndices(nullptr) {}

BindBufferMemoryDeviceGroupInfo::BindBufferMemoryDeviceGroupInfo(const BindBufferMemoryDeviceGroupInfo& copy_src) {
    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }
}

BindBufferMemoryDeviceGroupInfo& BindBufferMemoryDeviceGroupInfo::operator=(const BindBufferMemoryDeviceGroupInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    return *this;
}

BindBufferMemoryDeviceGroupInfo::~BindBufferMemoryDeviceGroupInfo() {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
}

void BindBufferMemoryDeviceGroupInfo::initialize(const VkBindBufferMemoryDeviceGroupInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

void BindBufferMemoryDeviceGroupInfo::initialize(const BindBufferMemoryDeviceGroupInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceIndexCount = copy_src->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src->pDeviceIndices, sizeof(uint32_t) * copy_src->deviceIndexCount);
    }
}

BindImageMemoryDeviceGroupInfo::BindImageMemoryDeviceGroupInfo(const VkBindImageMemoryDeviceGroupInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      deviceIndexCount(in_struct->deviceIndexCount),
      pDeviceIndices(nullptr),
      splitInstanceBindRegionCount(in_struct->splitInstanceBindRegionCount),
      pSplitInstanceBindRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }

    if (in_struct->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[in_struct->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)in_struct->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * in_struct->splitInstanceBindRegionCount);
    }
}

BindImageMemoryDeviceGroupInfo::BindImageMemoryDeviceGroupInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO),
      pNext(nullptr),
      deviceIndexCount(),
      pDeviceIndices(nullptr),
      splitInstanceBindRegionCount(),
      pSplitInstanceBindRegions(nullptr) {}

BindImageMemoryDeviceGroupInfo::BindImageMemoryDeviceGroupInfo(const BindImageMemoryDeviceGroupInfo& copy_src) {
    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src.splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    if (copy_src.pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src.splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src.pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src.splitInstanceBindRegionCount);
    }
}

BindImageMemoryDeviceGroupInfo& BindImageMemoryDeviceGroupInfo::operator=(const BindImageMemoryDeviceGroupInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src.splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    if (copy_src.pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src.splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src.pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src.splitInstanceBindRegionCount);
    }

    return *this;
}

BindImageMemoryDeviceGroupInfo::~BindImageMemoryDeviceGroupInfo() {
    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);
}

void BindImageMemoryDeviceGroupInfo::initialize(const VkBindImageMemoryDeviceGroupInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = in_struct->splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }

    if (in_struct->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[in_struct->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)in_struct->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * in_struct->splitInstanceBindRegionCount);
    }
}

void BindImageMemoryDeviceGroupInfo::initialize(const BindImageMemoryDeviceGroupInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceIndexCount = copy_src->deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src->splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src->pDeviceIndices, sizeof(uint32_t) * copy_src->deviceIndexCount);
    }

    if (copy_src->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src->splitInstanceBindRegionCount);
    }
}

PhysicalDeviceGroupProperties::PhysicalDeviceGroupProperties(const VkPhysicalDeviceGroupProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), physicalDeviceCount(in_struct->physicalDeviceCount), subsetAllocation(in_struct->subsetAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

PhysicalDeviceGroupProperties::PhysicalDeviceGroupProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES), pNext(nullptr), physicalDeviceCount(), subsetAllocation() {}

PhysicalDeviceGroupProperties::PhysicalDeviceGroupProperties(const PhysicalDeviceGroupProperties& copy_src) {
    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    subsetAllocation = copy_src.subsetAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src.physicalDevices[i];
    }
}

PhysicalDeviceGroupProperties& PhysicalDeviceGroupProperties::operator=(const PhysicalDeviceGroupProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    subsetAllocation = copy_src.subsetAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src.physicalDevices[i];
    }

    return *this;
}

PhysicalDeviceGroupProperties::~PhysicalDeviceGroupProperties() { FreePnextChain(pNext); }

void PhysicalDeviceGroupProperties::initialize(const VkPhysicalDeviceGroupProperties* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    subsetAllocation = in_struct->subsetAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

void PhysicalDeviceGroupProperties::initialize(const PhysicalDeviceGroupProperties* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    physicalDeviceCount = copy_src->physicalDeviceCount;
    subsetAllocation = copy_src->subsetAllocation;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src->physicalDevices[i];
    }
}

DeviceGroupDeviceCreateInfo::DeviceGroupDeviceCreateInfo(const VkDeviceGroupDeviceCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), physicalDeviceCount(in_struct->physicalDeviceCount), pPhysicalDevices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)in_struct->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * in_struct->physicalDeviceCount);
    }
}

DeviceGroupDeviceCreateInfo::DeviceGroupDeviceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO), pNext(nullptr), physicalDeviceCount(), pPhysicalDevices(nullptr) {}

DeviceGroupDeviceCreateInfo::DeviceGroupDeviceCreateInfo(const DeviceGroupDeviceCreateInfo& copy_src) {
    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src.physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src.pPhysicalDevices, sizeof(VkPhysicalDevice) * copy_src.physicalDeviceCount);
    }
}

DeviceGroupDeviceCreateInfo& DeviceGroupDeviceCreateInfo::operator=(const DeviceGroupDeviceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src.physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src.pPhysicalDevices, sizeof(VkPhysicalDevice) * copy_src.physicalDeviceCount);
    }

    return *this;
}

DeviceGroupDeviceCreateInfo::~DeviceGroupDeviceCreateInfo() {
    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);
}

void DeviceGroupDeviceCreateInfo::initialize(const VkDeviceGroupDeviceCreateInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)in_struct->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * in_struct->physicalDeviceCount);
    }
}

void DeviceGroupDeviceCreateInfo::initialize(const DeviceGroupDeviceCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    physicalDeviceCount = copy_src->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * copy_src->physicalDeviceCount);
    }
}

BufferMemoryRequirementsInfo2::BufferMemoryRequirementsInfo2(const VkBufferMemoryRequirementsInfo2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferMemoryRequirementsInfo2::BufferMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), buffer() {}

BufferMemoryRequirementsInfo2::BufferMemoryRequirementsInfo2(const BufferMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferMemoryRequirementsInfo2& BufferMemoryRequirementsInfo2::operator=(const BufferMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferMemoryRequirementsInfo2::~BufferMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void BufferMemoryRequirementsInfo2::initialize(const VkBufferMemoryRequirementsInfo2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferMemoryRequirementsInfo2::initialize(const BufferMemoryRequirementsInfo2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageMemoryRequirementsInfo2::ImageMemoryRequirementsInfo2(const VkImageMemoryRequirementsInfo2* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageMemoryRequirementsInfo2::ImageMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), image() {}

ImageMemoryRequirementsInfo2::ImageMemoryRequirementsInfo2(const ImageMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageMemoryRequirementsInfo2& ImageMemoryRequirementsInfo2::operator=(const ImageMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageMemoryRequirementsInfo2::~ImageMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void ImageMemoryRequirementsInfo2::initialize(const VkImageMemoryRequirementsInfo2* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageMemoryRequirementsInfo2::initialize(const ImageMemoryRequirementsInfo2* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageSparseMemoryRequirementsInfo2::ImageSparseMemoryRequirementsInfo2(const VkImageSparseMemoryRequirementsInfo2* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageSparseMemoryRequirementsInfo2::ImageSparseMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), image() {}

ImageSparseMemoryRequirementsInfo2::ImageSparseMemoryRequirementsInfo2(const ImageSparseMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageSparseMemoryRequirementsInfo2& ImageSparseMemoryRequirementsInfo2::operator=(
    const ImageSparseMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageSparseMemoryRequirementsInfo2::~ImageSparseMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void ImageSparseMemoryRequirementsInfo2::initialize(const VkImageSparseMemoryRequirementsInfo2* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageSparseMemoryRequirementsInfo2::initialize(const ImageSparseMemoryRequirementsInfo2* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryRequirements2::MemoryRequirements2(const VkMemoryRequirements2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), memoryRequirements(in_struct->memoryRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryRequirements2::MemoryRequirements2() : sType(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2), pNext(nullptr), memoryRequirements() {}

MemoryRequirements2::MemoryRequirements2(const MemoryRequirements2& copy_src) {
    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryRequirements2& MemoryRequirements2::operator=(const MemoryRequirements2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryRequirements2::~MemoryRequirements2() { FreePnextChain(pNext); }

void MemoryRequirements2::initialize(const VkMemoryRequirements2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryRequirements = in_struct->memoryRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryRequirements2::initialize(const MemoryRequirements2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryRequirements = copy_src->memoryRequirements;
    pNext = SafePnextCopy(copy_src->pNext);
}

SparseImageMemoryRequirements2::SparseImageMemoryRequirements2(const VkSparseImageMemoryRequirements2* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryRequirements(in_struct->memoryRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SparseImageMemoryRequirements2::SparseImageMemoryRequirements2()
    : sType(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2), pNext(nullptr), memoryRequirements() {}

SparseImageMemoryRequirements2::SparseImageMemoryRequirements2(const SparseImageMemoryRequirements2& copy_src) {
    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);
}

SparseImageMemoryRequirements2& SparseImageMemoryRequirements2::operator=(const SparseImageMemoryRequirements2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SparseImageMemoryRequirements2::~SparseImageMemoryRequirements2() { FreePnextChain(pNext); }

void SparseImageMemoryRequirements2::initialize(const VkSparseImageMemoryRequirements2* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryRequirements = in_struct->memoryRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SparseImageMemoryRequirements2::initialize(const SparseImageMemoryRequirements2* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryRequirements = copy_src->memoryRequirements;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFeatures2::PhysicalDeviceFeatures2(const VkPhysicalDeviceFeatures2* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), features(in_struct->features) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFeatures2::PhysicalDeviceFeatures2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2), pNext(nullptr), features() {}

PhysicalDeviceFeatures2::PhysicalDeviceFeatures2(const PhysicalDeviceFeatures2& copy_src) {
    sType = copy_src.sType;
    features = copy_src.features;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFeatures2& PhysicalDeviceFeatures2::operator=(const PhysicalDeviceFeatures2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    features = copy_src.features;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFeatures2::~PhysicalDeviceFeatures2() { FreePnextChain(pNext); }

void PhysicalDeviceFeatures2::initialize(const VkPhysicalDeviceFeatures2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    features = in_struct->features;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFeatures2::initialize(const PhysicalDeviceFeatures2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    features = copy_src->features;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceProperties2::PhysicalDeviceProperties2(const VkPhysicalDeviceProperties2* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), properties(in_struct->properties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceProperties2::PhysicalDeviceProperties2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2), pNext(nullptr), properties() {}

PhysicalDeviceProperties2::PhysicalDeviceProperties2(const PhysicalDeviceProperties2& copy_src) {
    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceProperties2& PhysicalDeviceProperties2::operator=(const PhysicalDeviceProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceProperties2::~PhysicalDeviceProperties2() { FreePnextChain(pNext); }

void PhysicalDeviceProperties2::initialize(const VkPhysicalDeviceProperties2* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    properties = in_struct->properties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceProperties2::initialize(const PhysicalDeviceProperties2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    properties = copy_src->properties;
    pNext = SafePnextCopy(copy_src->pNext);
}

FormatProperties2::FormatProperties2(const VkFormatProperties2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), formatProperties(in_struct->formatProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FormatProperties2::FormatProperties2() : sType(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2), pNext(nullptr), formatProperties() {}

FormatProperties2::FormatProperties2(const FormatProperties2& copy_src) {
    sType = copy_src.sType;
    formatProperties = copy_src.formatProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

FormatProperties2& FormatProperties2::operator=(const FormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    formatProperties = copy_src.formatProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FormatProperties2::~FormatProperties2() { FreePnextChain(pNext); }

void FormatProperties2::initialize(const VkFormatProperties2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    formatProperties = in_struct->formatProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FormatProperties2::initialize(const FormatProperties2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    formatProperties = copy_src->formatProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageFormatProperties2::ImageFormatProperties2(const VkImageFormatProperties2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageFormatProperties(in_struct->imageFormatProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageFormatProperties2::ImageFormatProperties2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2), pNext(nullptr), imageFormatProperties() {}

ImageFormatProperties2::ImageFormatProperties2(const ImageFormatProperties2& copy_src) {
    sType = copy_src.sType;
    imageFormatProperties = copy_src.imageFormatProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageFormatProperties2& ImageFormatProperties2::operator=(const ImageFormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageFormatProperties = copy_src.imageFormatProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageFormatProperties2::~ImageFormatProperties2() { FreePnextChain(pNext); }

void ImageFormatProperties2::initialize(const VkImageFormatProperties2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageFormatProperties = in_struct->imageFormatProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageFormatProperties2::initialize(const ImageFormatProperties2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageFormatProperties = copy_src->imageFormatProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageFormatInfo2::PhysicalDeviceImageFormatInfo2(const VkPhysicalDeviceImageFormatInfo2* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      type(in_struct->type),
      tiling(in_struct->tiling),
      usage(in_struct->usage),
      flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageFormatInfo2::PhysicalDeviceImageFormatInfo2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2), pNext(nullptr), format(), type(), tiling(), usage(), flags() {}

PhysicalDeviceImageFormatInfo2::PhysicalDeviceImageFormatInfo2(const PhysicalDeviceImageFormatInfo2& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageFormatInfo2& PhysicalDeviceImageFormatInfo2::operator=(const PhysicalDeviceImageFormatInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageFormatInfo2::~PhysicalDeviceImageFormatInfo2() { FreePnextChain(pNext); }

void PhysicalDeviceImageFormatInfo2::initialize(const VkPhysicalDeviceImageFormatInfo2* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    type = in_struct->type;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageFormatInfo2::initialize(const PhysicalDeviceImageFormatInfo2* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    type = copy_src->type;
    tiling = copy_src->tiling;
    usage = copy_src->usage;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyProperties2::QueueFamilyProperties2(const VkQueueFamilyProperties2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), queueFamilyProperties(in_struct->queueFamilyProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueueFamilyProperties2::QueueFamilyProperties2()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2), pNext(nullptr), queueFamilyProperties() {}

QueueFamilyProperties2::QueueFamilyProperties2(const QueueFamilyProperties2& copy_src) {
    sType = copy_src.sType;
    queueFamilyProperties = copy_src.queueFamilyProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueueFamilyProperties2& QueueFamilyProperties2::operator=(const QueueFamilyProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queueFamilyProperties = copy_src.queueFamilyProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueueFamilyProperties2::~QueueFamilyProperties2() { FreePnextChain(pNext); }

void QueueFamilyProperties2::initialize(const VkQueueFamilyProperties2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queueFamilyProperties = in_struct->queueFamilyProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueueFamilyProperties2::initialize(const QueueFamilyProperties2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queueFamilyProperties = copy_src->queueFamilyProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMemoryProperties2::PhysicalDeviceMemoryProperties2(const VkPhysicalDeviceMemoryProperties2* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryProperties(in_struct->memoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMemoryProperties2::PhysicalDeviceMemoryProperties2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2), pNext(nullptr), memoryProperties() {}

PhysicalDeviceMemoryProperties2::PhysicalDeviceMemoryProperties2(const PhysicalDeviceMemoryProperties2& copy_src) {
    sType = copy_src.sType;
    memoryProperties = copy_src.memoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMemoryProperties2& PhysicalDeviceMemoryProperties2::operator=(const PhysicalDeviceMemoryProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryProperties = copy_src.memoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMemoryProperties2::~PhysicalDeviceMemoryProperties2() { FreePnextChain(pNext); }

void PhysicalDeviceMemoryProperties2::initialize(const VkPhysicalDeviceMemoryProperties2* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryProperties = in_struct->memoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMemoryProperties2::initialize(const PhysicalDeviceMemoryProperties2* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryProperties = copy_src->memoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

SparseImageFormatProperties2::SparseImageFormatProperties2(const VkSparseImageFormatProperties2* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), properties(in_struct->properties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SparseImageFormatProperties2::SparseImageFormatProperties2()
    : sType(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2), pNext(nullptr), properties() {}

SparseImageFormatProperties2::SparseImageFormatProperties2(const SparseImageFormatProperties2& copy_src) {
    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);
}

SparseImageFormatProperties2& SparseImageFormatProperties2::operator=(const SparseImageFormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SparseImageFormatProperties2::~SparseImageFormatProperties2() { FreePnextChain(pNext); }

void SparseImageFormatProperties2::initialize(const VkSparseImageFormatProperties2* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    properties = in_struct->properties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SparseImageFormatProperties2::initialize(const SparseImageFormatProperties2* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    properties = copy_src->properties;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSparseImageFormatInfo2::PhysicalDeviceSparseImageFormatInfo2(const VkPhysicalDeviceSparseImageFormatInfo2* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      type(in_struct->type),
      samples(in_struct->samples),
      usage(in_struct->usage),
      tiling(in_struct->tiling) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSparseImageFormatInfo2::PhysicalDeviceSparseImageFormatInfo2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2),
      pNext(nullptr),
      format(),
      type(),
      samples(),
      usage(),
      tiling() {}

PhysicalDeviceSparseImageFormatInfo2::PhysicalDeviceSparseImageFormatInfo2(const PhysicalDeviceSparseImageFormatInfo2& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    samples = copy_src.samples;
    usage = copy_src.usage;
    tiling = copy_src.tiling;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSparseImageFormatInfo2& PhysicalDeviceSparseImageFormatInfo2::operator=(
    const PhysicalDeviceSparseImageFormatInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    samples = copy_src.samples;
    usage = copy_src.usage;
    tiling = copy_src.tiling;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSparseImageFormatInfo2::~PhysicalDeviceSparseImageFormatInfo2() { FreePnextChain(pNext); }

void PhysicalDeviceSparseImageFormatInfo2::initialize(const VkPhysicalDeviceSparseImageFormatInfo2* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    type = in_struct->type;
    samples = in_struct->samples;
    usage = in_struct->usage;
    tiling = in_struct->tiling;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSparseImageFormatInfo2::initialize(const PhysicalDeviceSparseImageFormatInfo2* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    type = copy_src->type;
    samples = copy_src->samples;
    usage = copy_src->usage;
    tiling = copy_src->tiling;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePointClippingProperties::PhysicalDevicePointClippingProperties(
    const VkPhysicalDevicePointClippingProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pointClippingBehavior(in_struct->pointClippingBehavior) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePointClippingProperties::PhysicalDevicePointClippingProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES), pNext(nullptr), pointClippingBehavior() {}

PhysicalDevicePointClippingProperties::PhysicalDevicePointClippingProperties(
    const PhysicalDevicePointClippingProperties& copy_src) {
    sType = copy_src.sType;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePointClippingProperties& PhysicalDevicePointClippingProperties::operator=(
    const PhysicalDevicePointClippingProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePointClippingProperties::~PhysicalDevicePointClippingProperties() { FreePnextChain(pNext); }

void PhysicalDevicePointClippingProperties::initialize(const VkPhysicalDevicePointClippingProperties* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pointClippingBehavior = in_struct->pointClippingBehavior;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePointClippingProperties::initialize(const PhysicalDevicePointClippingProperties* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pointClippingBehavior = copy_src->pointClippingBehavior;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassInputAttachmentAspectCreateInfo::RenderPassInputAttachmentAspectCreateInfo(
    const VkRenderPassInputAttachmentAspectCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), aspectReferenceCount(in_struct->aspectReferenceCount), pAspectReferences(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[in_struct->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)in_struct->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * in_struct->aspectReferenceCount);
    }
}

RenderPassInputAttachmentAspectCreateInfo::RenderPassInputAttachmentAspectCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO),
      pNext(nullptr),
      aspectReferenceCount(),
      pAspectReferences(nullptr) {}

RenderPassInputAttachmentAspectCreateInfo::RenderPassInputAttachmentAspectCreateInfo(
    const RenderPassInputAttachmentAspectCreateInfo& copy_src) {
    sType = copy_src.sType;
    aspectReferenceCount = copy_src.aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src.aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src.pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src.aspectReferenceCount);
    }
}

RenderPassInputAttachmentAspectCreateInfo& RenderPassInputAttachmentAspectCreateInfo::operator=(
    const RenderPassInputAttachmentAspectCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    aspectReferenceCount = copy_src.aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src.aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src.pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src.aspectReferenceCount);
    }

    return *this;
}

RenderPassInputAttachmentAspectCreateInfo::~RenderPassInputAttachmentAspectCreateInfo() {
    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);
}

void RenderPassInputAttachmentAspectCreateInfo::initialize(const VkRenderPassInputAttachmentAspectCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    aspectReferenceCount = in_struct->aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[in_struct->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)in_struct->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * in_struct->aspectReferenceCount);
    }
}

void RenderPassInputAttachmentAspectCreateInfo::initialize(const RenderPassInputAttachmentAspectCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    aspectReferenceCount = copy_src->aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src->aspectReferenceCount);
    }
}

ImageViewUsageCreateInfo::ImageViewUsageCreateInfo(const VkImageViewUsageCreateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageViewUsageCreateInfo::ImageViewUsageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO), pNext(nullptr), usage() {}

ImageViewUsageCreateInfo::ImageViewUsageCreateInfo(const ImageViewUsageCreateInfo& copy_src) {
    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageViewUsageCreateInfo& ImageViewUsageCreateInfo::operator=(const ImageViewUsageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageViewUsageCreateInfo::~ImageViewUsageCreateInfo() { FreePnextChain(pNext); }

void ImageViewUsageCreateInfo::initialize(const VkImageViewUsageCreateInfo* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageViewUsageCreateInfo::initialize(const ImageViewUsageCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineTessellationDomainOriginStateCreateInfo::PipelineTessellationDomainOriginStateCreateInfo(
    const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), domainOrigin(in_struct->domainOrigin) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineTessellationDomainOriginStateCreateInfo::PipelineTessellationDomainOriginStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO), pNext(nullptr), domainOrigin() {}

PipelineTessellationDomainOriginStateCreateInfo::PipelineTessellationDomainOriginStateCreateInfo(
    const PipelineTessellationDomainOriginStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    domainOrigin = copy_src.domainOrigin;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineTessellationDomainOriginStateCreateInfo& PipelineTessellationDomainOriginStateCreateInfo::operator=(
    const PipelineTessellationDomainOriginStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    domainOrigin = copy_src.domainOrigin;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineTessellationDomainOriginStateCreateInfo::~PipelineTessellationDomainOriginStateCreateInfo() { FreePnextChain(pNext); }

void PipelineTessellationDomainOriginStateCreateInfo::initialize(const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    domainOrigin = in_struct->domainOrigin;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineTessellationDomainOriginStateCreateInfo::initialize(const PipelineTessellationDomainOriginStateCreateInfo* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    domainOrigin = copy_src->domainOrigin;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassMultiviewCreateInfo::RenderPassMultiviewCreateInfo(const VkRenderPassMultiviewCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subpassCount(in_struct->subpassCount),
      pViewMasks(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pViewOffsets(nullptr),
      correlationMaskCount(in_struct->correlationMaskCount),
      pCorrelationMasks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy((void*)pViewMasks, (void*)in_struct->pViewMasks, sizeof(uint32_t) * in_struct->subpassCount);
    }

    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)in_struct->pViewOffsets, sizeof(int32_t) * in_struct->dependencyCount);
    }

    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)in_struct->pCorrelationMasks, sizeof(uint32_t) * in_struct->correlationMaskCount);
    }
}

RenderPassMultiviewCreateInfo::RenderPassMultiviewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO),
      pNext(nullptr),
      subpassCount(),
      pViewMasks(nullptr),
      dependencyCount(),
      pViewOffsets(nullptr),
      correlationMaskCount(),
      pCorrelationMasks(nullptr) {}

RenderPassMultiviewCreateInfo::RenderPassMultiviewCreateInfo(const RenderPassMultiviewCreateInfo& copy_src) {
    sType = copy_src.sType;
    subpassCount = copy_src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewMasks) {
        pViewMasks = new uint32_t[copy_src.subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src.pViewMasks, sizeof(uint32_t) * copy_src.subpassCount);
    }

    if (copy_src.pViewOffsets) {
        pViewOffsets = new int32_t[copy_src.dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src.pViewOffsets, sizeof(int32_t) * copy_src.dependencyCount);
    }

    if (copy_src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src.correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src.pCorrelationMasks, sizeof(uint32_t) * copy_src.correlationMaskCount);
    }
}

RenderPassMultiviewCreateInfo& RenderPassMultiviewCreateInfo::operator=(const RenderPassMultiviewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    subpassCount = copy_src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewMasks) {
        pViewMasks = new uint32_t[copy_src.subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src.pViewMasks, sizeof(uint32_t) * copy_src.subpassCount);
    }

    if (copy_src.pViewOffsets) {
        pViewOffsets = new int32_t[copy_src.dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src.pViewOffsets, sizeof(int32_t) * copy_src.dependencyCount);
    }

    if (copy_src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src.correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src.pCorrelationMasks, sizeof(uint32_t) * copy_src.correlationMaskCount);
    }

    return *this;
}

RenderPassMultiviewCreateInfo::~RenderPassMultiviewCreateInfo() {
    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);
}

void RenderPassMultiviewCreateInfo::initialize(const VkRenderPassMultiviewCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subpassCount = in_struct->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = in_struct->correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy((void*)pViewMasks, (void*)in_struct->pViewMasks, sizeof(uint32_t) * in_struct->subpassCount);
    }

    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)in_struct->pViewOffsets, sizeof(int32_t) * in_struct->dependencyCount);
    }

    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)in_struct->pCorrelationMasks, sizeof(uint32_t) * in_struct->correlationMaskCount);
    }
}

void RenderPassMultiviewCreateInfo::initialize(const RenderPassMultiviewCreateInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subpassCount = copy_src->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src->correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewMasks) {
        pViewMasks = new uint32_t[copy_src->subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src->pViewMasks, sizeof(uint32_t) * copy_src->subpassCount);
    }

    if (copy_src->pViewOffsets) {
        pViewOffsets = new int32_t[copy_src->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src->pViewOffsets, sizeof(int32_t) * copy_src->dependencyCount);
    }

    if (copy_src->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src->pCorrelationMasks, sizeof(uint32_t) * copy_src->correlationMaskCount);
    }
}

PhysicalDeviceMultiviewFeatures::PhysicalDeviceMultiviewFeatures(const VkPhysicalDeviceMultiviewFeatures* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      multiview(in_struct->multiview),
      multiviewGeometryShader(in_struct->multiviewGeometryShader),
      multiviewTessellationShader(in_struct->multiviewTessellationShader) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiviewFeatures::PhysicalDeviceMultiviewFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES),
      pNext(nullptr),
      multiview(),
      multiviewGeometryShader(),
      multiviewTessellationShader() {}

PhysicalDeviceMultiviewFeatures::PhysicalDeviceMultiviewFeatures(const PhysicalDeviceMultiviewFeatures& copy_src) {
    sType = copy_src.sType;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiviewFeatures& PhysicalDeviceMultiviewFeatures::operator=(const PhysicalDeviceMultiviewFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiviewFeatures::~PhysicalDeviceMultiviewFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceMultiviewFeatures::initialize(const VkPhysicalDeviceMultiviewFeatures* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiviewFeatures::initialize(const PhysicalDeviceMultiviewFeatures* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multiview = copy_src->multiview;
    multiviewGeometryShader = copy_src->multiviewGeometryShader;
    multiviewTessellationShader = copy_src->multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMultiviewProperties::PhysicalDeviceMultiviewProperties(const VkPhysicalDeviceMultiviewProperties* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
      maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMultiviewProperties::PhysicalDeviceMultiviewProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES),
      pNext(nullptr),
      maxMultiviewViewCount(),
      maxMultiviewInstanceIndex() {}

PhysicalDeviceMultiviewProperties::PhysicalDeviceMultiviewProperties(const PhysicalDeviceMultiviewProperties& copy_src) {
    sType = copy_src.sType;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMultiviewProperties& PhysicalDeviceMultiviewProperties::operator=(const PhysicalDeviceMultiviewProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMultiviewProperties::~PhysicalDeviceMultiviewProperties() { FreePnextChain(pNext); }

void PhysicalDeviceMultiviewProperties::initialize(const VkPhysicalDeviceMultiviewProperties* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMultiviewProperties::initialize(const PhysicalDeviceMultiviewProperties* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxMultiviewViewCount = copy_src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src->maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVariablePointersFeatures::PhysicalDeviceVariablePointersFeatures(
    const VkPhysicalDeviceVariablePointersFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      variablePointersStorageBuffer(in_struct->variablePointersStorageBuffer),
      variablePointers(in_struct->variablePointers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVariablePointersFeatures::PhysicalDeviceVariablePointersFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES),
      pNext(nullptr),
      variablePointersStorageBuffer(),
      variablePointers() {}

PhysicalDeviceVariablePointersFeatures::PhysicalDeviceVariablePointersFeatures(
    const PhysicalDeviceVariablePointersFeatures& copy_src) {
    sType = copy_src.sType;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVariablePointersFeatures& PhysicalDeviceVariablePointersFeatures::operator=(
    const PhysicalDeviceVariablePointersFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVariablePointersFeatures::~PhysicalDeviceVariablePointersFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceVariablePointersFeatures::initialize(const VkPhysicalDeviceVariablePointersFeatures* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    variablePointersStorageBuffer = in_struct->variablePointersStorageBuffer;
    variablePointers = in_struct->variablePointers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVariablePointersFeatures::initialize(const PhysicalDeviceVariablePointersFeatures* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    variablePointersStorageBuffer = copy_src->variablePointersStorageBuffer;
    variablePointers = copy_src->variablePointers;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceProtectedMemoryFeatures::PhysicalDeviceProtectedMemoryFeatures(
    const VkPhysicalDeviceProtectedMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), protectedMemory(in_struct->protectedMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceProtectedMemoryFeatures::PhysicalDeviceProtectedMemoryFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES), pNext(nullptr), protectedMemory() {}

PhysicalDeviceProtectedMemoryFeatures::PhysicalDeviceProtectedMemoryFeatures(
    const PhysicalDeviceProtectedMemoryFeatures& copy_src) {
    sType = copy_src.sType;
    protectedMemory = copy_src.protectedMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceProtectedMemoryFeatures& PhysicalDeviceProtectedMemoryFeatures::operator=(
    const PhysicalDeviceProtectedMemoryFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedMemory = copy_src.protectedMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceProtectedMemoryFeatures::~PhysicalDeviceProtectedMemoryFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceProtectedMemoryFeatures::initialize(const VkPhysicalDeviceProtectedMemoryFeatures* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedMemory = in_struct->protectedMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceProtectedMemoryFeatures::initialize(const PhysicalDeviceProtectedMemoryFeatures* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedMemory = copy_src->protectedMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceProtectedMemoryProperties::PhysicalDeviceProtectedMemoryProperties(
    const VkPhysicalDeviceProtectedMemoryProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), protectedNoFault(in_struct->protectedNoFault) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceProtectedMemoryProperties::PhysicalDeviceProtectedMemoryProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES), pNext(nullptr), protectedNoFault() {}

PhysicalDeviceProtectedMemoryProperties::PhysicalDeviceProtectedMemoryProperties(
    const PhysicalDeviceProtectedMemoryProperties& copy_src) {
    sType = copy_src.sType;
    protectedNoFault = copy_src.protectedNoFault;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceProtectedMemoryProperties& PhysicalDeviceProtectedMemoryProperties::operator=(
    const PhysicalDeviceProtectedMemoryProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedNoFault = copy_src.protectedNoFault;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceProtectedMemoryProperties::~PhysicalDeviceProtectedMemoryProperties() { FreePnextChain(pNext); }

void PhysicalDeviceProtectedMemoryProperties::initialize(const VkPhysicalDeviceProtectedMemoryProperties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedNoFault = in_struct->protectedNoFault;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceProtectedMemoryProperties::initialize(const PhysicalDeviceProtectedMemoryProperties* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedNoFault = copy_src->protectedNoFault;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceQueueInfo2::DeviceQueueInfo2(const VkDeviceQueueInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      queueIndex(in_struct->queueIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceQueueInfo2::DeviceQueueInfo2()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2), pNext(nullptr), flags(), queueFamilyIndex(), queueIndex() {}

DeviceQueueInfo2::DeviceQueueInfo2(const DeviceQueueInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueIndex = copy_src.queueIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceQueueInfo2& DeviceQueueInfo2::operator=(const DeviceQueueInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueIndex = copy_src.queueIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceQueueInfo2::~DeviceQueueInfo2() { FreePnextChain(pNext); }

void DeviceQueueInfo2::initialize(const VkDeviceQueueInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueIndex = in_struct->queueIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceQueueInfo2::initialize(const DeviceQueueInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    queueIndex = copy_src->queueIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

ProtectedSubmitInfo::ProtectedSubmitInfo(const VkProtectedSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), protectedSubmit(in_struct->protectedSubmit) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ProtectedSubmitInfo::ProtectedSubmitInfo() : sType(VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO), pNext(nullptr), protectedSubmit() {}

ProtectedSubmitInfo::ProtectedSubmitInfo(const ProtectedSubmitInfo& copy_src) {
    sType = copy_src.sType;
    protectedSubmit = copy_src.protectedSubmit;
    pNext = SafePnextCopy(copy_src.pNext);
}

ProtectedSubmitInfo& ProtectedSubmitInfo::operator=(const ProtectedSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedSubmit = copy_src.protectedSubmit;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ProtectedSubmitInfo::~ProtectedSubmitInfo() { FreePnextChain(pNext); }

void ProtectedSubmitInfo::initialize(const VkProtectedSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedSubmit = in_struct->protectedSubmit;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ProtectedSubmitInfo::initialize(const ProtectedSubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedSubmit = copy_src->protectedSubmit;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerYcbcrConversionCreateInfo::SamplerYcbcrConversionCreateInfo(const VkSamplerYcbcrConversionCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      ycbcrModel(in_struct->ycbcrModel),
      ycbcrRange(in_struct->ycbcrRange),
      components(in_struct->components),
      xChromaOffset(in_struct->xChromaOffset),
      yChromaOffset(in_struct->yChromaOffset),
      chromaFilter(in_struct->chromaFilter),
      forceExplicitReconstruction(in_struct->forceExplicitReconstruction) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerYcbcrConversionCreateInfo::SamplerYcbcrConversionCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO),
      pNext(nullptr),
      format(),
      ycbcrModel(),
      ycbcrRange(),
      components(),
      xChromaOffset(),
      yChromaOffset(),
      chromaFilter(),
      forceExplicitReconstruction() {}

SamplerYcbcrConversionCreateInfo::SamplerYcbcrConversionCreateInfo(const SamplerYcbcrConversionCreateInfo& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    ycbcrModel = copy_src.ycbcrModel;
    ycbcrRange = copy_src.ycbcrRange;
    components = copy_src.components;
    xChromaOffset = copy_src.xChromaOffset;
    yChromaOffset = copy_src.yChromaOffset;
    chromaFilter = copy_src.chromaFilter;
    forceExplicitReconstruction = copy_src.forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerYcbcrConversionCreateInfo& SamplerYcbcrConversionCreateInfo::operator=(const SamplerYcbcrConversionCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    ycbcrModel = copy_src.ycbcrModel;
    ycbcrRange = copy_src.ycbcrRange;
    components = copy_src.components;
    xChromaOffset = copy_src.xChromaOffset;
    yChromaOffset = copy_src.yChromaOffset;
    chromaFilter = copy_src.chromaFilter;
    forceExplicitReconstruction = copy_src.forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerYcbcrConversionCreateInfo::~SamplerYcbcrConversionCreateInfo() { FreePnextChain(pNext); }

void SamplerYcbcrConversionCreateInfo::initialize(const VkSamplerYcbcrConversionCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    ycbcrModel = in_struct->ycbcrModel;
    ycbcrRange = in_struct->ycbcrRange;
    components = in_struct->components;
    xChromaOffset = in_struct->xChromaOffset;
    yChromaOffset = in_struct->yChromaOffset;
    chromaFilter = in_struct->chromaFilter;
    forceExplicitReconstruction = in_struct->forceExplicitReconstruction;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerYcbcrConversionCreateInfo::initialize(const SamplerYcbcrConversionCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    ycbcrModel = copy_src->ycbcrModel;
    ycbcrRange = copy_src->ycbcrRange;
    components = copy_src->components;
    xChromaOffset = copy_src->xChromaOffset;
    yChromaOffset = copy_src->yChromaOffset;
    chromaFilter = copy_src->chromaFilter;
    forceExplicitReconstruction = copy_src->forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerYcbcrConversionInfo::SamplerYcbcrConversionInfo(const VkSamplerYcbcrConversionInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), conversion(in_struct->conversion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerYcbcrConversionInfo::SamplerYcbcrConversionInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO), pNext(nullptr), conversion() {}

SamplerYcbcrConversionInfo::SamplerYcbcrConversionInfo(const SamplerYcbcrConversionInfo& copy_src) {
    sType = copy_src.sType;
    conversion = copy_src.conversion;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerYcbcrConversionInfo& SamplerYcbcrConversionInfo::operator=(const SamplerYcbcrConversionInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    conversion = copy_src.conversion;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerYcbcrConversionInfo::~SamplerYcbcrConversionInfo() { FreePnextChain(pNext); }

void SamplerYcbcrConversionInfo::initialize(const VkSamplerYcbcrConversionInfo* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    conversion = in_struct->conversion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerYcbcrConversionInfo::initialize(const SamplerYcbcrConversionInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    conversion = copy_src->conversion;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindImagePlaneMemoryInfo::BindImagePlaneMemoryInfo(const VkBindImagePlaneMemoryInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindImagePlaneMemoryInfo::BindImagePlaneMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO), pNext(nullptr), planeAspect() {}

BindImagePlaneMemoryInfo::BindImagePlaneMemoryInfo(const BindImagePlaneMemoryInfo& copy_src) {
    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindImagePlaneMemoryInfo& BindImagePlaneMemoryInfo::operator=(const BindImagePlaneMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindImagePlaneMemoryInfo::~BindImagePlaneMemoryInfo() { FreePnextChain(pNext); }

void BindImagePlaneMemoryInfo::initialize(const VkBindImagePlaneMemoryInfo* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindImagePlaneMemoryInfo::initialize(const BindImagePlaneMemoryInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImagePlaneMemoryRequirementsInfo::ImagePlaneMemoryRequirementsInfo(const VkImagePlaneMemoryRequirementsInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImagePlaneMemoryRequirementsInfo::ImagePlaneMemoryRequirementsInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO), pNext(nullptr), planeAspect() {}

ImagePlaneMemoryRequirementsInfo::ImagePlaneMemoryRequirementsInfo(const ImagePlaneMemoryRequirementsInfo& copy_src) {
    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImagePlaneMemoryRequirementsInfo& ImagePlaneMemoryRequirementsInfo::operator=(const ImagePlaneMemoryRequirementsInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImagePlaneMemoryRequirementsInfo::~ImagePlaneMemoryRequirementsInfo() { FreePnextChain(pNext); }

void ImagePlaneMemoryRequirementsInfo::initialize(const VkImagePlaneMemoryRequirementsInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImagePlaneMemoryRequirementsInfo::initialize(const ImagePlaneMemoryRequirementsInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSamplerYcbcrConversionFeatures::PhysicalDeviceSamplerYcbcrConversionFeatures(
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), samplerYcbcrConversion(in_struct->samplerYcbcrConversion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSamplerYcbcrConversionFeatures::PhysicalDeviceSamplerYcbcrConversionFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES), pNext(nullptr), samplerYcbcrConversion() {}

PhysicalDeviceSamplerYcbcrConversionFeatures::PhysicalDeviceSamplerYcbcrConversionFeatures(
    const PhysicalDeviceSamplerYcbcrConversionFeatures& copy_src) {
    sType = copy_src.sType;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSamplerYcbcrConversionFeatures& PhysicalDeviceSamplerYcbcrConversionFeatures::operator=(
    const PhysicalDeviceSamplerYcbcrConversionFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSamplerYcbcrConversionFeatures::~PhysicalDeviceSamplerYcbcrConversionFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceSamplerYcbcrConversionFeatures::initialize(const VkPhysicalDeviceSamplerYcbcrConversionFeatures* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    samplerYcbcrConversion = in_struct->samplerYcbcrConversion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSamplerYcbcrConversionFeatures::initialize(const PhysicalDeviceSamplerYcbcrConversionFeatures* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    samplerYcbcrConversion = copy_src->samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerYcbcrConversionImageFormatProperties::SamplerYcbcrConversionImageFormatProperties(
    const VkSamplerYcbcrConversionImageFormatProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), combinedImageSamplerDescriptorCount(in_struct->combinedImageSamplerDescriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerYcbcrConversionImageFormatProperties::SamplerYcbcrConversionImageFormatProperties()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES),
      pNext(nullptr),
      combinedImageSamplerDescriptorCount() {}

SamplerYcbcrConversionImageFormatProperties::SamplerYcbcrConversionImageFormatProperties(
    const SamplerYcbcrConversionImageFormatProperties& copy_src) {
    sType = copy_src.sType;
    combinedImageSamplerDescriptorCount = copy_src.combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerYcbcrConversionImageFormatProperties& SamplerYcbcrConversionImageFormatProperties::operator=(
    const SamplerYcbcrConversionImageFormatProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    combinedImageSamplerDescriptorCount = copy_src.combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerYcbcrConversionImageFormatProperties::~SamplerYcbcrConversionImageFormatProperties() { FreePnextChain(pNext); }

void SamplerYcbcrConversionImageFormatProperties::initialize(const VkSamplerYcbcrConversionImageFormatProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    combinedImageSamplerDescriptorCount = in_struct->combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerYcbcrConversionImageFormatProperties::initialize(const SamplerYcbcrConversionImageFormatProperties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    combinedImageSamplerDescriptorCount = copy_src->combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorUpdateTemplateCreateInfo::DescriptorUpdateTemplateCreateInfo(const VkDescriptorUpdateTemplateCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      descriptorUpdateEntryCount(in_struct->descriptorUpdateEntryCount),
      pDescriptorUpdateEntries(nullptr),
      templateType(in_struct->templateType),
      descriptorSetLayout(in_struct->descriptorSetLayout),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      pipelineLayout(in_struct->pipelineLayout),
      set(in_struct->set) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[in_struct->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)in_struct->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * in_struct->descriptorUpdateEntryCount);
    }
}

DescriptorUpdateTemplateCreateInfo::DescriptorUpdateTemplateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      descriptorUpdateEntryCount(),
      pDescriptorUpdateEntries(nullptr),
      templateType(),
      descriptorSetLayout(),
      pipelineBindPoint(),
      pipelineLayout(),
      set() {}

DescriptorUpdateTemplateCreateInfo::DescriptorUpdateTemplateCreateInfo(const DescriptorUpdateTemplateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    descriptorUpdateEntryCount = copy_src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src.templateType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipelineLayout = copy_src.pipelineLayout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src.descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src.pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src.descriptorUpdateEntryCount);
    }
}

DescriptorUpdateTemplateCreateInfo& DescriptorUpdateTemplateCreateInfo::operator=(
    const DescriptorUpdateTemplateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    descriptorUpdateEntryCount = copy_src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src.templateType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipelineLayout = copy_src.pipelineLayout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src.descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src.pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src.descriptorUpdateEntryCount);
    }

    return *this;
}

DescriptorUpdateTemplateCreateInfo::~DescriptorUpdateTemplateCreateInfo() {
    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);
}

void DescriptorUpdateTemplateCreateInfo::initialize(const VkDescriptorUpdateTemplateCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    descriptorUpdateEntryCount = in_struct->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = in_struct->templateType;
    descriptorSetLayout = in_struct->descriptorSetLayout;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipelineLayout = in_struct->pipelineLayout;
    set = in_struct->set;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[in_struct->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)in_struct->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * in_struct->descriptorUpdateEntryCount);
    }
}

void DescriptorUpdateTemplateCreateInfo::initialize(const DescriptorUpdateTemplateCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    descriptorUpdateEntryCount = copy_src->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src->templateType;
    descriptorSetLayout = copy_src->descriptorSetLayout;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    pipelineLayout = copy_src->pipelineLayout;
    set = copy_src->set;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src->descriptorUpdateEntryCount);
    }
}

PhysicalDeviceExternalImageFormatInfo::PhysicalDeviceExternalImageFormatInfo(
    const VkPhysicalDeviceExternalImageFormatInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalImageFormatInfo::PhysicalDeviceExternalImageFormatInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO), pNext(nullptr), handleType() {}

PhysicalDeviceExternalImageFormatInfo::PhysicalDeviceExternalImageFormatInfo(
    const PhysicalDeviceExternalImageFormatInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalImageFormatInfo& PhysicalDeviceExternalImageFormatInfo::operator=(
    const PhysicalDeviceExternalImageFormatInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalImageFormatInfo::~PhysicalDeviceExternalImageFormatInfo() { FreePnextChain(pNext); }

void PhysicalDeviceExternalImageFormatInfo::initialize(const VkPhysicalDeviceExternalImageFormatInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalImageFormatInfo::initialize(const PhysicalDeviceExternalImageFormatInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalImageFormatProperties::ExternalImageFormatProperties(const VkExternalImageFormatProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), externalMemoryProperties(in_struct->externalMemoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalImageFormatProperties::ExternalImageFormatProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES), pNext(nullptr), externalMemoryProperties() {}

ExternalImageFormatProperties::ExternalImageFormatProperties(const ExternalImageFormatProperties& copy_src) {
    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalImageFormatProperties& ExternalImageFormatProperties::operator=(const ExternalImageFormatProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalImageFormatProperties::~ExternalImageFormatProperties() { FreePnextChain(pNext); }

void ExternalImageFormatProperties::initialize(const VkExternalImageFormatProperties* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalMemoryProperties = in_struct->externalMemoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalImageFormatProperties::initialize(const ExternalImageFormatProperties* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalMemoryProperties = copy_src->externalMemoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalBufferInfo::PhysicalDeviceExternalBufferInfo(const VkPhysicalDeviceExternalBufferInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), usage(in_struct->usage), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalBufferInfo::PhysicalDeviceExternalBufferInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO), pNext(nullptr), flags(), usage(), handleType() {}

PhysicalDeviceExternalBufferInfo::PhysicalDeviceExternalBufferInfo(const PhysicalDeviceExternalBufferInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalBufferInfo& PhysicalDeviceExternalBufferInfo::operator=(const PhysicalDeviceExternalBufferInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalBufferInfo::~PhysicalDeviceExternalBufferInfo() { FreePnextChain(pNext); }

void PhysicalDeviceExternalBufferInfo::initialize(const VkPhysicalDeviceExternalBufferInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    usage = in_struct->usage;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalBufferInfo::initialize(const PhysicalDeviceExternalBufferInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    usage = copy_src->usage;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalBufferProperties::ExternalBufferProperties(const VkExternalBufferProperties* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), externalMemoryProperties(in_struct->externalMemoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalBufferProperties::ExternalBufferProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES), pNext(nullptr), externalMemoryProperties() {}

ExternalBufferProperties::ExternalBufferProperties(const ExternalBufferProperties& copy_src) {
    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalBufferProperties& ExternalBufferProperties::operator=(const ExternalBufferProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalBufferProperties::~ExternalBufferProperties() { FreePnextChain(pNext); }

void ExternalBufferProperties::initialize(const VkExternalBufferProperties* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalMemoryProperties = in_struct->externalMemoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalBufferProperties::initialize(const ExternalBufferProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalMemoryProperties = copy_src->externalMemoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceIDProperties::PhysicalDeviceIDProperties(const VkPhysicalDeviceIDProperties* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceNodeMask(in_struct->deviceNodeMask), deviceLUIDValid(in_struct->deviceLUIDValid) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

PhysicalDeviceIDProperties::PhysicalDeviceIDProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES), pNext(nullptr), deviceNodeMask(), deviceLUIDValid() {}

PhysicalDeviceIDProperties::PhysicalDeviceIDProperties(const PhysicalDeviceIDProperties& copy_src) {
    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }
}

PhysicalDeviceIDProperties& PhysicalDeviceIDProperties::operator=(const PhysicalDeviceIDProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }

    return *this;
}

PhysicalDeviceIDProperties::~PhysicalDeviceIDProperties() { FreePnextChain(pNext); }

void PhysicalDeviceIDProperties::initialize(const VkPhysicalDeviceIDProperties* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceNodeMask = in_struct->deviceNodeMask;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void PhysicalDeviceIDProperties::initialize(const PhysicalDeviceIDProperties* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceNodeMask = copy_src->deviceNodeMask;
    deviceLUIDValid = copy_src->deviceLUIDValid;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src->deviceLUID[i];
    }
}

ExternalMemoryImageCreateInfo::ExternalMemoryImageCreateInfo(const VkExternalMemoryImageCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalMemoryImageCreateInfo::ExternalMemoryImageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO), pNext(nullptr), handleTypes() {}

ExternalMemoryImageCreateInfo::ExternalMemoryImageCreateInfo(const ExternalMemoryImageCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalMemoryImageCreateInfo& ExternalMemoryImageCreateInfo::operator=(const ExternalMemoryImageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalMemoryImageCreateInfo::~ExternalMemoryImageCreateInfo() { FreePnextChain(pNext); }

void ExternalMemoryImageCreateInfo::initialize(const VkExternalMemoryImageCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalMemoryImageCreateInfo::initialize(const ExternalMemoryImageCreateInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalMemoryBufferCreateInfo::ExternalMemoryBufferCreateInfo(const VkExternalMemoryBufferCreateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalMemoryBufferCreateInfo::ExternalMemoryBufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO), pNext(nullptr), handleTypes() {}

ExternalMemoryBufferCreateInfo::ExternalMemoryBufferCreateInfo(const ExternalMemoryBufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalMemoryBufferCreateInfo& ExternalMemoryBufferCreateInfo::operator=(const ExternalMemoryBufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalMemoryBufferCreateInfo::~ExternalMemoryBufferCreateInfo() { FreePnextChain(pNext); }

void ExternalMemoryBufferCreateInfo::initialize(const VkExternalMemoryBufferCreateInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalMemoryBufferCreateInfo::initialize(const ExternalMemoryBufferCreateInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMemoryAllocateInfo::ExportMemoryAllocateInfo(const VkExportMemoryAllocateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportMemoryAllocateInfo::ExportMemoryAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO), pNext(nullptr), handleTypes() {}

ExportMemoryAllocateInfo::ExportMemoryAllocateInfo(const ExportMemoryAllocateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportMemoryAllocateInfo& ExportMemoryAllocateInfo::operator=(const ExportMemoryAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportMemoryAllocateInfo::~ExportMemoryAllocateInfo() { FreePnextChain(pNext); }

void ExportMemoryAllocateInfo::initialize(const VkExportMemoryAllocateInfo* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportMemoryAllocateInfo::initialize(const ExportMemoryAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalFenceInfo::PhysicalDeviceExternalFenceInfo(const VkPhysicalDeviceExternalFenceInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalFenceInfo::PhysicalDeviceExternalFenceInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO), pNext(nullptr), handleType() {}

PhysicalDeviceExternalFenceInfo::PhysicalDeviceExternalFenceInfo(const PhysicalDeviceExternalFenceInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalFenceInfo& PhysicalDeviceExternalFenceInfo::operator=(const PhysicalDeviceExternalFenceInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalFenceInfo::~PhysicalDeviceExternalFenceInfo() { FreePnextChain(pNext); }

void PhysicalDeviceExternalFenceInfo::initialize(const VkPhysicalDeviceExternalFenceInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalFenceInfo::initialize(const PhysicalDeviceExternalFenceInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalFenceProperties::ExternalFenceProperties(const VkExternalFenceProperties* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
      compatibleHandleTypes(in_struct->compatibleHandleTypes),
      externalFenceFeatures(in_struct->externalFenceFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalFenceProperties::ExternalFenceProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES),
      pNext(nullptr),
      exportFromImportedHandleTypes(),
      compatibleHandleTypes(),
      externalFenceFeatures() {}

ExternalFenceProperties::ExternalFenceProperties(const ExternalFenceProperties& copy_src) {
    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalFenceFeatures = copy_src.externalFenceFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalFenceProperties& ExternalFenceProperties::operator=(const ExternalFenceProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalFenceFeatures = copy_src.externalFenceFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalFenceProperties::~ExternalFenceProperties() { FreePnextChain(pNext); }

void ExternalFenceProperties::initialize(const VkExternalFenceProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalFenceFeatures = in_struct->externalFenceFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalFenceProperties::initialize(const ExternalFenceProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportFromImportedHandleTypes = copy_src->exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src->compatibleHandleTypes;
    externalFenceFeatures = copy_src->externalFenceFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportFenceCreateInfo::ExportFenceCreateInfo(const VkExportFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportFenceCreateInfo::ExportFenceCreateInfo() : sType(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO), pNext(nullptr), handleTypes() {}

ExportFenceCreateInfo::ExportFenceCreateInfo(const ExportFenceCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportFenceCreateInfo& ExportFenceCreateInfo::operator=(const ExportFenceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportFenceCreateInfo::~ExportFenceCreateInfo() { FreePnextChain(pNext); }

void ExportFenceCreateInfo::initialize(const VkExportFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportFenceCreateInfo::initialize(const ExportFenceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportSemaphoreCreateInfo::ExportSemaphoreCreateInfo(const VkExportSemaphoreCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExportSemaphoreCreateInfo::ExportSemaphoreCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO), pNext(nullptr), handleTypes() {}

ExportSemaphoreCreateInfo::ExportSemaphoreCreateInfo(const ExportSemaphoreCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExportSemaphoreCreateInfo& ExportSemaphoreCreateInfo::operator=(const ExportSemaphoreCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExportSemaphoreCreateInfo::~ExportSemaphoreCreateInfo() { FreePnextChain(pNext); }

void ExportSemaphoreCreateInfo::initialize(const VkExportSemaphoreCreateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExportSemaphoreCreateInfo::initialize(const ExportSemaphoreCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceExternalSemaphoreInfo::PhysicalDeviceExternalSemaphoreInfo(const VkPhysicalDeviceExternalSemaphoreInfo* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceExternalSemaphoreInfo::PhysicalDeviceExternalSemaphoreInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO), pNext(nullptr), handleType() {}

PhysicalDeviceExternalSemaphoreInfo::PhysicalDeviceExternalSemaphoreInfo(const PhysicalDeviceExternalSemaphoreInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceExternalSemaphoreInfo& PhysicalDeviceExternalSemaphoreInfo::operator=(
    const PhysicalDeviceExternalSemaphoreInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceExternalSemaphoreInfo::~PhysicalDeviceExternalSemaphoreInfo() { FreePnextChain(pNext); }

void PhysicalDeviceExternalSemaphoreInfo::initialize(const VkPhysicalDeviceExternalSemaphoreInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceExternalSemaphoreInfo::initialize(const PhysicalDeviceExternalSemaphoreInfo* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExternalSemaphoreProperties::ExternalSemaphoreProperties(const VkExternalSemaphoreProperties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
      compatibleHandleTypes(in_struct->compatibleHandleTypes),
      externalSemaphoreFeatures(in_struct->externalSemaphoreFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ExternalSemaphoreProperties::ExternalSemaphoreProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES),
      pNext(nullptr),
      exportFromImportedHandleTypes(),
      compatibleHandleTypes(),
      externalSemaphoreFeatures() {}

ExternalSemaphoreProperties::ExternalSemaphoreProperties(const ExternalSemaphoreProperties& copy_src) {
    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src.externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

ExternalSemaphoreProperties& ExternalSemaphoreProperties::operator=(const ExternalSemaphoreProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src.externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ExternalSemaphoreProperties::~ExternalSemaphoreProperties() { FreePnextChain(pNext); }

void ExternalSemaphoreProperties::initialize(const VkExternalSemaphoreProperties* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalSemaphoreFeatures = in_struct->externalSemaphoreFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ExternalSemaphoreProperties::initialize(const ExternalSemaphoreProperties* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportFromImportedHandleTypes = copy_src->exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src->compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src->externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance3Properties::PhysicalDeviceMaintenance3Properties(const VkPhysicalDeviceMaintenance3Properties* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      maxPerSetDescriptors(in_struct->maxPerSetDescriptors),
      maxMemoryAllocationSize(in_struct->maxMemoryAllocationSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance3Properties::PhysicalDeviceMaintenance3Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES),
      pNext(nullptr),
      maxPerSetDescriptors(),
      maxMemoryAllocationSize() {}

PhysicalDeviceMaintenance3Properties::PhysicalDeviceMaintenance3Properties(const PhysicalDeviceMaintenance3Properties& copy_src) {
    sType = copy_src.sType;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance3Properties& PhysicalDeviceMaintenance3Properties::operator=(
    const PhysicalDeviceMaintenance3Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance3Properties::~PhysicalDeviceMaintenance3Properties() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance3Properties::initialize(const VkPhysicalDeviceMaintenance3Properties* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxPerSetDescriptors = in_struct->maxPerSetDescriptors;
    maxMemoryAllocationSize = in_struct->maxMemoryAllocationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance3Properties::initialize(const PhysicalDeviceMaintenance3Properties* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxPerSetDescriptors = copy_src->maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src->maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorSetLayoutSupport::DescriptorSetLayoutSupport(const VkDescriptorSetLayoutSupport* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), supported(in_struct->supported) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorSetLayoutSupport::DescriptorSetLayoutSupport()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT), pNext(nullptr), supported() {}

DescriptorSetLayoutSupport::DescriptorSetLayoutSupport(const DescriptorSetLayoutSupport& copy_src) {
    sType = copy_src.sType;
    supported = copy_src.supported;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorSetLayoutSupport& DescriptorSetLayoutSupport::operator=(const DescriptorSetLayoutSupport& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supported = copy_src.supported;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorSetLayoutSupport::~DescriptorSetLayoutSupport() { FreePnextChain(pNext); }

void DescriptorSetLayoutSupport::initialize(const VkDescriptorSetLayoutSupport* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supported = in_struct->supported;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorSetLayoutSupport::initialize(const DescriptorSetLayoutSupport* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supported = copy_src->supported;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderDrawParametersFeatures::PhysicalDeviceShaderDrawParametersFeatures(
    const VkPhysicalDeviceShaderDrawParametersFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderDrawParameters(in_struct->shaderDrawParameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderDrawParametersFeatures::PhysicalDeviceShaderDrawParametersFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES), pNext(nullptr), shaderDrawParameters() {}

PhysicalDeviceShaderDrawParametersFeatures::PhysicalDeviceShaderDrawParametersFeatures(
    const PhysicalDeviceShaderDrawParametersFeatures& copy_src) {
    sType = copy_src.sType;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderDrawParametersFeatures& PhysicalDeviceShaderDrawParametersFeatures::operator=(
    const PhysicalDeviceShaderDrawParametersFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderDrawParametersFeatures::~PhysicalDeviceShaderDrawParametersFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceShaderDrawParametersFeatures::initialize(const VkPhysicalDeviceShaderDrawParametersFeatures* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderDrawParameters = in_struct->shaderDrawParameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderDrawParametersFeatures::initialize(const PhysicalDeviceShaderDrawParametersFeatures* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderDrawParameters = copy_src->shaderDrawParameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkan11Features::PhysicalDeviceVulkan11Features(const VkPhysicalDeviceVulkan11Features* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer16BitAccess(in_struct->storageBuffer16BitAccess),
      uniformAndStorageBuffer16BitAccess(in_struct->uniformAndStorageBuffer16BitAccess),
      storagePushConstant16(in_struct->storagePushConstant16),
      storageInputOutput16(in_struct->storageInputOutput16),
      multiview(in_struct->multiview),
      multiviewGeometryShader(in_struct->multiviewGeometryShader),
      multiviewTessellationShader(in_struct->multiviewTessellationShader),
      variablePointersStorageBuffer(in_struct->variablePointersStorageBuffer),
      variablePointers(in_struct->variablePointers),
      protectedMemory(in_struct->protectedMemory),
      samplerYcbcrConversion(in_struct->samplerYcbcrConversion),
      shaderDrawParameters(in_struct->shaderDrawParameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVulkan11Features::PhysicalDeviceVulkan11Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES),
      pNext(nullptr),
      storageBuffer16BitAccess(),
      uniformAndStorageBuffer16BitAccess(),
      storagePushConstant16(),
      storageInputOutput16(),
      multiview(),
      multiviewGeometryShader(),
      multiviewTessellationShader(),
      variablePointersStorageBuffer(),
      variablePointers(),
      protectedMemory(),
      samplerYcbcrConversion(),
      shaderDrawParameters() {}

PhysicalDeviceVulkan11Features::PhysicalDeviceVulkan11Features(const PhysicalDeviceVulkan11Features& copy_src) {
    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    protectedMemory = copy_src.protectedMemory;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVulkan11Features& PhysicalDeviceVulkan11Features::operator=(const PhysicalDeviceVulkan11Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    protectedMemory = copy_src.protectedMemory;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVulkan11Features::~PhysicalDeviceVulkan11Features() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan11Features::initialize(const VkPhysicalDeviceVulkan11Features* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer16BitAccess = in_struct->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = in_struct->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = in_struct->storagePushConstant16;
    storageInputOutput16 = in_struct->storageInputOutput16;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
    variablePointersStorageBuffer = in_struct->variablePointersStorageBuffer;
    variablePointers = in_struct->variablePointers;
    protectedMemory = in_struct->protectedMemory;
    samplerYcbcrConversion = in_struct->samplerYcbcrConversion;
    shaderDrawParameters = in_struct->shaderDrawParameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVulkan11Features::initialize(const PhysicalDeviceVulkan11Features* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer16BitAccess = copy_src->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src->storagePushConstant16;
    storageInputOutput16 = copy_src->storageInputOutput16;
    multiview = copy_src->multiview;
    multiviewGeometryShader = copy_src->multiviewGeometryShader;
    multiviewTessellationShader = copy_src->multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src->variablePointersStorageBuffer;
    variablePointers = copy_src->variablePointers;
    protectedMemory = copy_src->protectedMemory;
    samplerYcbcrConversion = copy_src->samplerYcbcrConversion;
    shaderDrawParameters = copy_src->shaderDrawParameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkan11Properties::PhysicalDeviceVulkan11Properties(const VkPhysicalDeviceVulkan11Properties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      deviceNodeMask(in_struct->deviceNodeMask),
      deviceLUIDValid(in_struct->deviceLUIDValid),
      subgroupSize(in_struct->subgroupSize),
      subgroupSupportedStages(in_struct->subgroupSupportedStages),
      subgroupSupportedOperations(in_struct->subgroupSupportedOperations),
      subgroupQuadOperationsInAllStages(in_struct->subgroupQuadOperationsInAllStages),
      pointClippingBehavior(in_struct->pointClippingBehavior),
      maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
      maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex),
      protectedNoFault(in_struct->protectedNoFault),
      maxPerSetDescriptors(in_struct->maxPerSetDescriptors),
      maxMemoryAllocationSize(in_struct->maxMemoryAllocationSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

PhysicalDeviceVulkan11Properties::PhysicalDeviceVulkan11Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES),
      pNext(nullptr),
      deviceNodeMask(),
      deviceLUIDValid(),
      subgroupSize(),
      subgroupSupportedStages(),
      subgroupSupportedOperations(),
      subgroupQuadOperationsInAllStages(),
      pointClippingBehavior(),
      maxMultiviewViewCount(),
      maxMultiviewInstanceIndex(),
      protectedNoFault(),
      maxPerSetDescriptors(),
      maxMemoryAllocationSize() {}

PhysicalDeviceVulkan11Properties::PhysicalDeviceVulkan11Properties(const PhysicalDeviceVulkan11Properties& copy_src) {
    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    subgroupSize = copy_src.subgroupSize;
    subgroupSupportedStages = copy_src.subgroupSupportedStages;
    subgroupSupportedOperations = copy_src.subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src.subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    protectedNoFault = copy_src.protectedNoFault;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }
}

PhysicalDeviceVulkan11Properties& PhysicalDeviceVulkan11Properties::operator=(const PhysicalDeviceVulkan11Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    subgroupSize = copy_src.subgroupSize;
    subgroupSupportedStages = copy_src.subgroupSupportedStages;
    subgroupSupportedOperations = copy_src.subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src.subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    protectedNoFault = copy_src.protectedNoFault;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }

    return *this;
}

PhysicalDeviceVulkan11Properties::~PhysicalDeviceVulkan11Properties() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan11Properties::initialize(const VkPhysicalDeviceVulkan11Properties* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceNodeMask = in_struct->deviceNodeMask;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    subgroupSize = in_struct->subgroupSize;
    subgroupSupportedStages = in_struct->subgroupSupportedStages;
    subgroupSupportedOperations = in_struct->subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = in_struct->subgroupQuadOperationsInAllStages;
    pointClippingBehavior = in_struct->pointClippingBehavior;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
    protectedNoFault = in_struct->protectedNoFault;
    maxPerSetDescriptors = in_struct->maxPerSetDescriptors;
    maxMemoryAllocationSize = in_struct->maxMemoryAllocationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void PhysicalDeviceVulkan11Properties::initialize(const PhysicalDeviceVulkan11Properties* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceNodeMask = copy_src->deviceNodeMask;
    deviceLUIDValid = copy_src->deviceLUIDValid;
    subgroupSize = copy_src->subgroupSize;
    subgroupSupportedStages = copy_src->subgroupSupportedStages;
    subgroupSupportedOperations = copy_src->subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src->subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src->pointClippingBehavior;
    maxMultiviewViewCount = copy_src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src->maxMultiviewInstanceIndex;
    protectedNoFault = copy_src->protectedNoFault;
    maxPerSetDescriptors = copy_src->maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src->maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src->deviceLUID[i];
    }
}

PhysicalDeviceVulkan12Features::PhysicalDeviceVulkan12Features(const VkPhysicalDeviceVulkan12Features* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      samplerMirrorClampToEdge(in_struct->samplerMirrorClampToEdge),
      drawIndirectCount(in_struct->drawIndirectCount),
      storageBuffer8BitAccess(in_struct->storageBuffer8BitAccess),
      uniformAndStorageBuffer8BitAccess(in_struct->uniformAndStorageBuffer8BitAccess),
      storagePushConstant8(in_struct->storagePushConstant8),
      shaderBufferInt64Atomics(in_struct->shaderBufferInt64Atomics),
      shaderSharedInt64Atomics(in_struct->shaderSharedInt64Atomics),
      shaderFloat16(in_struct->shaderFloat16),
      shaderInt8(in_struct->shaderInt8),
      descriptorIndexing(in_struct->descriptorIndexing),
      shaderInputAttachmentArrayDynamicIndexing(in_struct->shaderInputAttachmentArrayDynamicIndexing),
      shaderUniformTexelBufferArrayDynamicIndexing(in_struct->shaderUniformTexelBufferArrayDynamicIndexing),
      shaderStorageTexelBufferArrayDynamicIndexing(in_struct->shaderStorageTexelBufferArrayDynamicIndexing),
      shaderUniformBufferArrayNonUniformIndexing(in_struct->shaderUniformBufferArrayNonUniformIndexing),
      shaderSampledImageArrayNonUniformIndexing(in_struct->shaderSampledImageArrayNonUniformIndexing),
      shaderStorageBufferArrayNonUniformIndexing(in_struct->shaderStorageBufferArrayNonUniformIndexing),
      shaderStorageImageArrayNonUniformIndexing(in_struct->shaderStorageImageArrayNonUniformIndexing),
      shaderInputAttachmentArrayNonUniformIndexing(in_struct->shaderInputAttachmentArrayNonUniformIndexing),
      shaderUniformTexelBufferArrayNonUniformIndexing(in_struct->shaderUniformTexelBufferArrayNonUniformIndexing),
      shaderStorageTexelBufferArrayNonUniformIndexing(in_struct->shaderStorageTexelBufferArrayNonUniformIndexing),
      descriptorBindingUniformBufferUpdateAfterBind(in_struct->descriptorBindingUniformBufferUpdateAfterBind),
      descriptorBindingSampledImageUpdateAfterBind(in_struct->descriptorBindingSampledImageUpdateAfterBind),
      descriptorBindingStorageImageUpdateAfterBind(in_struct->descriptorBindingStorageImageUpdateAfterBind),
      descriptorBindingStorageBufferUpdateAfterBind(in_struct->descriptorBindingStorageBufferUpdateAfterBind),
      descriptorBindingUniformTexelBufferUpdateAfterBind(in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind),
      descriptorBindingStorageTexelBufferUpdateAfterBind(in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind),
      descriptorBindingUpdateUnusedWhilePending(in_struct->descriptorBindingUpdateUnusedWhilePending),
      descriptorBindingPartiallyBound(in_struct->descriptorBindingPartiallyBound),
      descriptorBindingVariableDescriptorCount(in_struct->descriptorBindingVariableDescriptorCount),
      runtimeDescriptorArray(in_struct->runtimeDescriptorArray),
      samplerFilterMinmax(in_struct->samplerFilterMinmax),
      scalarBlockLayout(in_struct->scalarBlockLayout),
      imagelessFramebuffer(in_struct->imagelessFramebuffer),
      uniformBufferStandardLayout(in_struct->uniformBufferStandardLayout),
      shaderSubgroupExtendedTypes(in_struct->shaderSubgroupExtendedTypes),
      separateDepthStencilLayouts(in_struct->separateDepthStencilLayouts),
      hostQueryReset(in_struct->hostQueryReset),
      timelineSemaphore(in_struct->timelineSemaphore),
      bufferDeviceAddress(in_struct->bufferDeviceAddress),
      bufferDeviceAddressCaptureReplay(in_struct->bufferDeviceAddressCaptureReplay),
      bufferDeviceAddressMultiDevice(in_struct->bufferDeviceAddressMultiDevice),
      vulkanMemoryModel(in_struct->vulkanMemoryModel),
      vulkanMemoryModelDeviceScope(in_struct->vulkanMemoryModelDeviceScope),
      vulkanMemoryModelAvailabilityVisibilityChains(in_struct->vulkanMemoryModelAvailabilityVisibilityChains),
      shaderOutputViewportIndex(in_struct->shaderOutputViewportIndex),
      shaderOutputLayer(in_struct->shaderOutputLayer),
      subgroupBroadcastDynamicId(in_struct->subgroupBroadcastDynamicId) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVulkan12Features::PhysicalDeviceVulkan12Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES),
      pNext(nullptr),
      samplerMirrorClampToEdge(),
      drawIndirectCount(),
      storageBuffer8BitAccess(),
      uniformAndStorageBuffer8BitAccess(),
      storagePushConstant8(),
      shaderBufferInt64Atomics(),
      shaderSharedInt64Atomics(),
      shaderFloat16(),
      shaderInt8(),
      descriptorIndexing(),
      shaderInputAttachmentArrayDynamicIndexing(),
      shaderUniformTexelBufferArrayDynamicIndexing(),
      shaderStorageTexelBufferArrayDynamicIndexing(),
      shaderUniformBufferArrayNonUniformIndexing(),
      shaderSampledImageArrayNonUniformIndexing(),
      shaderStorageBufferArrayNonUniformIndexing(),
      shaderStorageImageArrayNonUniformIndexing(),
      shaderInputAttachmentArrayNonUniformIndexing(),
      shaderUniformTexelBufferArrayNonUniformIndexing(),
      shaderStorageTexelBufferArrayNonUniformIndexing(),
      descriptorBindingUniformBufferUpdateAfterBind(),
      descriptorBindingSampledImageUpdateAfterBind(),
      descriptorBindingStorageImageUpdateAfterBind(),
      descriptorBindingStorageBufferUpdateAfterBind(),
      descriptorBindingUniformTexelBufferUpdateAfterBind(),
      descriptorBindingStorageTexelBufferUpdateAfterBind(),
      descriptorBindingUpdateUnusedWhilePending(),
      descriptorBindingPartiallyBound(),
      descriptorBindingVariableDescriptorCount(),
      runtimeDescriptorArray(),
      samplerFilterMinmax(),
      scalarBlockLayout(),
      imagelessFramebuffer(),
      uniformBufferStandardLayout(),
      shaderSubgroupExtendedTypes(),
      separateDepthStencilLayouts(),
      hostQueryReset(),
      timelineSemaphore(),
      bufferDeviceAddress(),
      bufferDeviceAddressCaptureReplay(),
      bufferDeviceAddressMultiDevice(),
      vulkanMemoryModel(),
      vulkanMemoryModelDeviceScope(),
      vulkanMemoryModelAvailabilityVisibilityChains(),
      shaderOutputViewportIndex(),
      shaderOutputLayer(),
      subgroupBroadcastDynamicId() {}

PhysicalDeviceVulkan12Features::PhysicalDeviceVulkan12Features(const PhysicalDeviceVulkan12Features& copy_src) {
    sType = copy_src.sType;
    samplerMirrorClampToEdge = copy_src.samplerMirrorClampToEdge;
    drawIndirectCount = copy_src.drawIndirectCount;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    descriptorIndexing = copy_src.descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    samplerFilterMinmax = copy_src.samplerFilterMinmax;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    hostQueryReset = copy_src.hostQueryReset;
    timelineSemaphore = copy_src.timelineSemaphore;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src.shaderOutputViewportIndex;
    shaderOutputLayer = copy_src.shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src.subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVulkan12Features& PhysicalDeviceVulkan12Features::operator=(const PhysicalDeviceVulkan12Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    samplerMirrorClampToEdge = copy_src.samplerMirrorClampToEdge;
    drawIndirectCount = copy_src.drawIndirectCount;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    descriptorIndexing = copy_src.descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    samplerFilterMinmax = copy_src.samplerFilterMinmax;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    hostQueryReset = copy_src.hostQueryReset;
    timelineSemaphore = copy_src.timelineSemaphore;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src.shaderOutputViewportIndex;
    shaderOutputLayer = copy_src.shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src.subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVulkan12Features::~PhysicalDeviceVulkan12Features() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan12Features::initialize(const VkPhysicalDeviceVulkan12Features* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    samplerMirrorClampToEdge = in_struct->samplerMirrorClampToEdge;
    drawIndirectCount = in_struct->drawIndirectCount;
    storageBuffer8BitAccess = in_struct->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = in_struct->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = in_struct->storagePushConstant8;
    shaderBufferInt64Atomics = in_struct->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = in_struct->shaderSharedInt64Atomics;
    shaderFloat16 = in_struct->shaderFloat16;
    shaderInt8 = in_struct->shaderInt8;
    descriptorIndexing = in_struct->descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = in_struct->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = in_struct->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = in_struct->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = in_struct->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = in_struct->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = in_struct->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = in_struct->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = in_struct->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = in_struct->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = in_struct->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = in_struct->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = in_struct->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = in_struct->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = in_struct->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = in_struct->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = in_struct->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = in_struct->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = in_struct->runtimeDescriptorArray;
    samplerFilterMinmax = in_struct->samplerFilterMinmax;
    scalarBlockLayout = in_struct->scalarBlockLayout;
    imagelessFramebuffer = in_struct->imagelessFramebuffer;
    uniformBufferStandardLayout = in_struct->uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = in_struct->shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = in_struct->separateDepthStencilLayouts;
    hostQueryReset = in_struct->hostQueryReset;
    timelineSemaphore = in_struct->timelineSemaphore;
    bufferDeviceAddress = in_struct->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = in_struct->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = in_struct->bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = in_struct->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = in_struct->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = in_struct->vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = in_struct->shaderOutputViewportIndex;
    shaderOutputLayer = in_struct->shaderOutputLayer;
    subgroupBroadcastDynamicId = in_struct->subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVulkan12Features::initialize(const PhysicalDeviceVulkan12Features* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    samplerMirrorClampToEdge = copy_src->samplerMirrorClampToEdge;
    drawIndirectCount = copy_src->drawIndirectCount;
    storageBuffer8BitAccess = copy_src->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src->storagePushConstant8;
    shaderBufferInt64Atomics = copy_src->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src->shaderSharedInt64Atomics;
    shaderFloat16 = copy_src->shaderFloat16;
    shaderInt8 = copy_src->shaderInt8;
    descriptorIndexing = copy_src->descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src->runtimeDescriptorArray;
    samplerFilterMinmax = copy_src->samplerFilterMinmax;
    scalarBlockLayout = copy_src->scalarBlockLayout;
    imagelessFramebuffer = copy_src->imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src->uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src->shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src->separateDepthStencilLayouts;
    hostQueryReset = copy_src->hostQueryReset;
    timelineSemaphore = copy_src->timelineSemaphore;
    bufferDeviceAddress = copy_src->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src->bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src->vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src->shaderOutputViewportIndex;
    shaderOutputLayer = copy_src->shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src->subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkan12Properties::PhysicalDeviceVulkan12Properties(const VkPhysicalDeviceVulkan12Properties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      driverID(in_struct->driverID),
      conformanceVersion(in_struct->conformanceVersion),
      denormBehaviorIndependence(in_struct->denormBehaviorIndependence),
      roundingModeIndependence(in_struct->roundingModeIndependence),
      shaderSignedZeroInfNanPreserveFloat16(in_struct->shaderSignedZeroInfNanPreserveFloat16),
      shaderSignedZeroInfNanPreserveFloat32(in_struct->shaderSignedZeroInfNanPreserveFloat32),
      shaderSignedZeroInfNanPreserveFloat64(in_struct->shaderSignedZeroInfNanPreserveFloat64),
      shaderDenormPreserveFloat16(in_struct->shaderDenormPreserveFloat16),
      shaderDenormPreserveFloat32(in_struct->shaderDenormPreserveFloat32),
      shaderDenormPreserveFloat64(in_struct->shaderDenormPreserveFloat64),
      shaderDenormFlushToZeroFloat16(in_struct->shaderDenormFlushToZeroFloat16),
      shaderDenormFlushToZeroFloat32(in_struct->shaderDenormFlushToZeroFloat32),
      shaderDenormFlushToZeroFloat64(in_struct->shaderDenormFlushToZeroFloat64),
      shaderRoundingModeRTEFloat16(in_struct->shaderRoundingModeRTEFloat16),
      shaderRoundingModeRTEFloat32(in_struct->shaderRoundingModeRTEFloat32),
      shaderRoundingModeRTEFloat64(in_struct->shaderRoundingModeRTEFloat64),
      shaderRoundingModeRTZFloat16(in_struct->shaderRoundingModeRTZFloat16),
      shaderRoundingModeRTZFloat32(in_struct->shaderRoundingModeRTZFloat32),
      shaderRoundingModeRTZFloat64(in_struct->shaderRoundingModeRTZFloat64),
      maxUpdateAfterBindDescriptorsInAllPools(in_struct->maxUpdateAfterBindDescriptorsInAllPools),
      shaderUniformBufferArrayNonUniformIndexingNative(in_struct->shaderUniformBufferArrayNonUniformIndexingNative),
      shaderSampledImageArrayNonUniformIndexingNative(in_struct->shaderSampledImageArrayNonUniformIndexingNative),
      shaderStorageBufferArrayNonUniformIndexingNative(in_struct->shaderStorageBufferArrayNonUniformIndexingNative),
      shaderStorageImageArrayNonUniformIndexingNative(in_struct->shaderStorageImageArrayNonUniformIndexingNative),
      shaderInputAttachmentArrayNonUniformIndexingNative(in_struct->shaderInputAttachmentArrayNonUniformIndexingNative),
      robustBufferAccessUpdateAfterBind(in_struct->robustBufferAccessUpdateAfterBind),
      quadDivergentImplicitLod(in_struct->quadDivergentImplicitLod),
      maxPerStageDescriptorUpdateAfterBindSamplers(in_struct->maxPerStageDescriptorUpdateAfterBindSamplers),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers),
      maxPerStageDescriptorUpdateAfterBindSampledImages(in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages),
      maxPerStageDescriptorUpdateAfterBindStorageImages(in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments),
      maxPerStageUpdateAfterBindResources(in_struct->maxPerStageUpdateAfterBindResources),
      maxDescriptorSetUpdateAfterBindSamplers(in_struct->maxDescriptorSetUpdateAfterBindSamplers),
      maxDescriptorSetUpdateAfterBindUniformBuffers(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
      maxDescriptorSetUpdateAfterBindStorageBuffers(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
      maxDescriptorSetUpdateAfterBindSampledImages(in_struct->maxDescriptorSetUpdateAfterBindSampledImages),
      maxDescriptorSetUpdateAfterBindStorageImages(in_struct->maxDescriptorSetUpdateAfterBindStorageImages),
      maxDescriptorSetUpdateAfterBindInputAttachments(in_struct->maxDescriptorSetUpdateAfterBindInputAttachments),
      supportedDepthResolveModes(in_struct->supportedDepthResolveModes),
      supportedStencilResolveModes(in_struct->supportedStencilResolveModes),
      independentResolveNone(in_struct->independentResolveNone),
      independentResolve(in_struct->independentResolve),
      filterMinmaxSingleComponentFormats(in_struct->filterMinmaxSingleComponentFormats),
      filterMinmaxImageComponentMapping(in_struct->filterMinmaxImageComponentMapping),
      maxTimelineSemaphoreValueDifference(in_struct->maxTimelineSemaphoreValueDifference),
      framebufferIntegerColorSampleCounts(in_struct->framebufferIntegerColorSampleCounts) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

PhysicalDeviceVulkan12Properties::PhysicalDeviceVulkan12Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES),
      pNext(nullptr),
      driverID(),
      conformanceVersion(),
      denormBehaviorIndependence(),
      roundingModeIndependence(),
      shaderSignedZeroInfNanPreserveFloat16(),
      shaderSignedZeroInfNanPreserveFloat32(),
      shaderSignedZeroInfNanPreserveFloat64(),
      shaderDenormPreserveFloat16(),
      shaderDenormPreserveFloat32(),
      shaderDenormPreserveFloat64(),
      shaderDenormFlushToZeroFloat16(),
      shaderDenormFlushToZeroFloat32(),
      shaderDenormFlushToZeroFloat64(),
      shaderRoundingModeRTEFloat16(),
      shaderRoundingModeRTEFloat32(),
      shaderRoundingModeRTEFloat64(),
      shaderRoundingModeRTZFloat16(),
      shaderRoundingModeRTZFloat32(),
      shaderRoundingModeRTZFloat64(),
      maxUpdateAfterBindDescriptorsInAllPools(),
      shaderUniformBufferArrayNonUniformIndexingNative(),
      shaderSampledImageArrayNonUniformIndexingNative(),
      shaderStorageBufferArrayNonUniformIndexingNative(),
      shaderStorageImageArrayNonUniformIndexingNative(),
      shaderInputAttachmentArrayNonUniformIndexingNative(),
      robustBufferAccessUpdateAfterBind(),
      quadDivergentImplicitLod(),
      maxPerStageDescriptorUpdateAfterBindSamplers(),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(),
      maxPerStageDescriptorUpdateAfterBindSampledImages(),
      maxPerStageDescriptorUpdateAfterBindStorageImages(),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(),
      maxPerStageUpdateAfterBindResources(),
      maxDescriptorSetUpdateAfterBindSamplers(),
      maxDescriptorSetUpdateAfterBindUniformBuffers(),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindStorageBuffers(),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindSampledImages(),
      maxDescriptorSetUpdateAfterBindStorageImages(),
      maxDescriptorSetUpdateAfterBindInputAttachments(),
      supportedDepthResolveModes(),
      supportedStencilResolveModes(),
      independentResolveNone(),
      independentResolve(),
      filterMinmaxSingleComponentFormats(),
      filterMinmaxImageComponentMapping(),
      maxTimelineSemaphoreValueDifference(),
      framebufferIntegerColorSampleCounts() {}

PhysicalDeviceVulkan12Properties::PhysicalDeviceVulkan12Properties(const PhysicalDeviceVulkan12Properties& copy_src) {
    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src.framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }
}

PhysicalDeviceVulkan12Properties& PhysicalDeviceVulkan12Properties::operator=(const PhysicalDeviceVulkan12Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src.framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }

    return *this;
}

PhysicalDeviceVulkan12Properties::~PhysicalDeviceVulkan12Properties() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan12Properties::initialize(const VkPhysicalDeviceVulkan12Properties* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    driverID = in_struct->driverID;
    conformanceVersion = in_struct->conformanceVersion;
    denormBehaviorIndependence = in_struct->denormBehaviorIndependence;
    roundingModeIndependence = in_struct->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = in_struct->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = in_struct->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = in_struct->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = in_struct->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = in_struct->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = in_struct->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = in_struct->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = in_struct->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = in_struct->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = in_struct->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = in_struct->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = in_struct->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = in_struct->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = in_struct->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = in_struct->shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = in_struct->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = in_struct->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = in_struct->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = in_struct->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = in_struct->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = in_struct->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = in_struct->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = in_struct->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = in_struct->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = in_struct->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = in_struct->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = in_struct->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = in_struct->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = in_struct->maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = in_struct->supportedDepthResolveModes;
    supportedStencilResolveModes = in_struct->supportedStencilResolveModes;
    independentResolveNone = in_struct->independentResolveNone;
    independentResolve = in_struct->independentResolve;
    filterMinmaxSingleComponentFormats = in_struct->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = in_struct->filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = in_struct->maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = in_struct->framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

void PhysicalDeviceVulkan12Properties::initialize(const PhysicalDeviceVulkan12Properties* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    driverID = copy_src->driverID;
    conformanceVersion = copy_src->conformanceVersion;
    denormBehaviorIndependence = copy_src->denormBehaviorIndependence;
    roundingModeIndependence = copy_src->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src->shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src->maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src->supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src->supportedStencilResolveModes;
    independentResolveNone = copy_src->independentResolveNone;
    independentResolve = copy_src->independentResolve;
    filterMinmaxSingleComponentFormats = copy_src->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src->filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src->maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src->framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src->driverInfo[i];
    }
}

ImageFormatListCreateInfo::ImageFormatListCreateInfo(const VkImageFormatListCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), viewFormatCount(in_struct->viewFormatCount), pViewFormats(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

ImageFormatListCreateInfo::ImageFormatListCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO), pNext(nullptr), viewFormatCount(), pViewFormats(nullptr) {}

ImageFormatListCreateInfo::ImageFormatListCreateInfo(const ImageFormatListCreateInfo& copy_src) {
    sType = copy_src.sType;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }
}

ImageFormatListCreateInfo& ImageFormatListCreateInfo::operator=(const ImageFormatListCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }

    return *this;
}

ImageFormatListCreateInfo::~ImageFormatListCreateInfo() {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
}

void ImageFormatListCreateInfo::initialize(const VkImageFormatListCreateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewFormatCount = in_struct->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

void ImageFormatListCreateInfo::initialize(const ImageFormatListCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewFormatCount = copy_src->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewFormats) {
        pViewFormats = new VkFormat[copy_src->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src->pViewFormats, sizeof(VkFormat) * copy_src->viewFormatCount);
    }
}

AttachmentDescription2::AttachmentDescription2(const VkAttachmentDescription2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      format(in_struct->format),
      samples(in_struct->samples),
      loadOp(in_struct->loadOp),
      storeOp(in_struct->storeOp),
      stencilLoadOp(in_struct->stencilLoadOp),
      stencilStoreOp(in_struct->stencilStoreOp),
      initialLayout(in_struct->initialLayout),
      finalLayout(in_struct->finalLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AttachmentDescription2::AttachmentDescription2()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2),
      pNext(nullptr),
      flags(),
      format(),
      samples(),
      loadOp(),
      storeOp(),
      stencilLoadOp(),
      stencilStoreOp(),
      initialLayout(),
      finalLayout() {}

AttachmentDescription2::AttachmentDescription2(const AttachmentDescription2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    format = copy_src.format;
    samples = copy_src.samples;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    stencilLoadOp = copy_src.stencilLoadOp;
    stencilStoreOp = copy_src.stencilStoreOp;
    initialLayout = copy_src.initialLayout;
    finalLayout = copy_src.finalLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

AttachmentDescription2& AttachmentDescription2::operator=(const AttachmentDescription2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    format = copy_src.format;
    samples = copy_src.samples;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    stencilLoadOp = copy_src.stencilLoadOp;
    stencilStoreOp = copy_src.stencilStoreOp;
    initialLayout = copy_src.initialLayout;
    finalLayout = copy_src.finalLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AttachmentDescription2::~AttachmentDescription2() { FreePnextChain(pNext); }

void AttachmentDescription2::initialize(const VkAttachmentDescription2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    format = in_struct->format;
    samples = in_struct->samples;
    loadOp = in_struct->loadOp;
    storeOp = in_struct->storeOp;
    stencilLoadOp = in_struct->stencilLoadOp;
    stencilStoreOp = in_struct->stencilStoreOp;
    initialLayout = in_struct->initialLayout;
    finalLayout = in_struct->finalLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AttachmentDescription2::initialize(const AttachmentDescription2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    format = copy_src->format;
    samples = copy_src->samples;
    loadOp = copy_src->loadOp;
    storeOp = copy_src->storeOp;
    stencilLoadOp = copy_src->stencilLoadOp;
    stencilStoreOp = copy_src->stencilStoreOp;
    initialLayout = copy_src->initialLayout;
    finalLayout = copy_src->finalLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

AttachmentReference2::AttachmentReference2(const VkAttachmentReference2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), attachment(in_struct->attachment), layout(in_struct->layout), aspectMask(in_struct->aspectMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AttachmentReference2::AttachmentReference2()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2), pNext(nullptr), attachment(), layout(), aspectMask() {}

AttachmentReference2::AttachmentReference2(const AttachmentReference2& copy_src) {
    sType = copy_src.sType;
    attachment = copy_src.attachment;
    layout = copy_src.layout;
    aspectMask = copy_src.aspectMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

AttachmentReference2& AttachmentReference2::operator=(const AttachmentReference2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachment = copy_src.attachment;
    layout = copy_src.layout;
    aspectMask = copy_src.aspectMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AttachmentReference2::~AttachmentReference2() { FreePnextChain(pNext); }

void AttachmentReference2::initialize(const VkAttachmentReference2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachment = in_struct->attachment;
    layout = in_struct->layout;
    aspectMask = in_struct->aspectMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AttachmentReference2::initialize(const AttachmentReference2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachment = copy_src->attachment;
    layout = copy_src->layout;
    aspectMask = copy_src->aspectMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubpassDescription2::SubpassDescription2(const VkSubpassDescription2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      viewMask(in_struct->viewMask),
      inputAttachmentCount(in_struct->inputAttachmentCount),
      pInputAttachments(nullptr),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(in_struct->preserveAttachmentCount),
      pPreserveAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (inputAttachmentCount && in_struct->pInputAttachments) {
        pInputAttachments = new AttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&in_struct->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pResolveAttachments) {
        pResolveAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&in_struct->pResolveAttachments[i]);
        }
    }
    if (in_struct->pDepthStencilAttachment) pDepthStencilAttachment = new AttachmentReference2(in_struct->pDepthStencilAttachment);

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

SubpassDescription2::SubpassDescription2()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2),
      pNext(nullptr),
      flags(),
      pipelineBindPoint(),
      viewMask(),
      inputAttachmentCount(),
      pInputAttachments(nullptr),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(),
      pPreserveAttachments(nullptr) {}

SubpassDescription2::SubpassDescription2(const SubpassDescription2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    viewMask = copy_src.viewMask;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (inputAttachmentCount && copy_src.pInputAttachments) {
        pInputAttachments = new AttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src.pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pResolveAttachments) {
        pResolveAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src.pResolveAttachments[i]);
        }
    }
    if (copy_src.pDepthStencilAttachment) pDepthStencilAttachment = new AttachmentReference2(*copy_src.pDepthStencilAttachment);

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }
}

SubpassDescription2& SubpassDescription2::operator=(const SubpassDescription2& copy_src) {
    if (&copy_src == this) return *this;

    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    viewMask = copy_src.viewMask;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (inputAttachmentCount && copy_src.pInputAttachments) {
        pInputAttachments = new AttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src.pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pResolveAttachments) {
        pResolveAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src.pResolveAttachments[i]);
        }
    }
    if (copy_src.pDepthStencilAttachment) pDepthStencilAttachment = new AttachmentReference2(*copy_src.pDepthStencilAttachment);

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }

    return *this;
}

SubpassDescription2::~SubpassDescription2() {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);
}

void SubpassDescription2::initialize(const VkSubpassDescription2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    viewMask = in_struct->viewMask;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (inputAttachmentCount && in_struct->pInputAttachments) {
        pInputAttachments = new AttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&in_struct->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pResolveAttachments) {
        pResolveAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&in_struct->pResolveAttachments[i]);
        }
    }
    if (in_struct->pDepthStencilAttachment) pDepthStencilAttachment = new AttachmentReference2(in_struct->pDepthStencilAttachment);

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

void SubpassDescription2::initialize(const SubpassDescription2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    viewMask = copy_src->viewMask;
    inputAttachmentCount = copy_src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (inputAttachmentCount && copy_src->pInputAttachments) {
        pInputAttachments = new AttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src->pColorAttachments) {
        pColorAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src->pResolveAttachments) {
        pResolveAttachments = new AttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src->pResolveAttachments[i]);
        }
    }
    if (copy_src->pDepthStencilAttachment) pDepthStencilAttachment = new AttachmentReference2(*copy_src->pDepthStencilAttachment);

    if (copy_src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src->pPreserveAttachments,
               sizeof(uint32_t) * copy_src->preserveAttachmentCount);
    }
}

SubpassDependency2::SubpassDependency2(const VkSubpassDependency2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      srcSubpass(in_struct->srcSubpass),
      dstSubpass(in_struct->dstSubpass),
      srcStageMask(in_struct->srcStageMask),
      dstStageMask(in_struct->dstStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      dependencyFlags(in_struct->dependencyFlags),
      viewOffset(in_struct->viewOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubpassDependency2::SubpassDependency2()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2),
      pNext(nullptr),
      srcSubpass(),
      dstSubpass(),
      srcStageMask(),
      dstStageMask(),
      srcAccessMask(),
      dstAccessMask(),
      dependencyFlags(),
      viewOffset() {}

SubpassDependency2::SubpassDependency2(const SubpassDependency2& copy_src) {
    sType = copy_src.sType;
    srcSubpass = copy_src.srcSubpass;
    dstSubpass = copy_src.dstSubpass;
    srcStageMask = copy_src.srcStageMask;
    dstStageMask = copy_src.dstStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    dependencyFlags = copy_src.dependencyFlags;
    viewOffset = copy_src.viewOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubpassDependency2& SubpassDependency2::operator=(const SubpassDependency2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubpass = copy_src.srcSubpass;
    dstSubpass = copy_src.dstSubpass;
    srcStageMask = copy_src.srcStageMask;
    dstStageMask = copy_src.dstStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    dependencyFlags = copy_src.dependencyFlags;
    viewOffset = copy_src.viewOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubpassDependency2::~SubpassDependency2() { FreePnextChain(pNext); }

void SubpassDependency2::initialize(const VkSubpassDependency2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubpass = in_struct->srcSubpass;
    dstSubpass = in_struct->dstSubpass;
    srcStageMask = in_struct->srcStageMask;
    dstStageMask = in_struct->dstStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    dependencyFlags = in_struct->dependencyFlags;
    viewOffset = in_struct->viewOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubpassDependency2::initialize(const SubpassDependency2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubpass = copy_src->srcSubpass;
    dstSubpass = copy_src->dstSubpass;
    srcStageMask = copy_src->srcStageMask;
    dstStageMask = copy_src->dstStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    dependencyFlags = copy_src->dependencyFlags;
    viewOffset = copy_src->viewOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderPassCreateInfo2::RenderPassCreateInfo2(const VkRenderPassCreateInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      subpassCount(in_struct->subpassCount),
      pSubpasses(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pDependencies(nullptr),
      correlatedViewMaskCount(in_struct->correlatedViewMaskCount),
      pCorrelatedViewMasks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new AttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&in_struct->pAttachments[i]);
        }
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new SubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (dependencyCount && in_struct->pDependencies) {
        pDependencies = new SubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&in_struct->pDependencies[i]);
        }
    }

    if (in_struct->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[in_struct->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)in_struct->pCorrelatedViewMasks,
               sizeof(uint32_t) * in_struct->correlatedViewMaskCount);
    }
}

RenderPassCreateInfo2::RenderPassCreateInfo2()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2),
      pNext(nullptr),
      flags(),
      attachmentCount(),
      pAttachments(nullptr),
      subpassCount(),
      pSubpasses(nullptr),
      dependencyCount(),
      pDependencies(nullptr),
      correlatedViewMaskCount(),
      pCorrelatedViewMasks(nullptr) {}

RenderPassCreateInfo2::RenderPassCreateInfo2(const RenderPassCreateInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src.correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new AttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src.pAttachments[i]);
        }
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new SubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src.pDependencies) {
        pDependencies = new SubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src.pDependencies[i]);
        }
    }

    if (copy_src.pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src.correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src.pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src.correlatedViewMaskCount);
    }
}

RenderPassCreateInfo2& RenderPassCreateInfo2::operator=(const RenderPassCreateInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src.correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new AttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src.pAttachments[i]);
        }
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new SubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src.pDependencies) {
        pDependencies = new SubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src.pDependencies[i]);
        }
    }

    if (copy_src.pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src.correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src.pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src.correlatedViewMaskCount);
    }

    return *this;
}

RenderPassCreateInfo2::~RenderPassCreateInfo2() {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);
}

void RenderPassCreateInfo2::initialize(const VkRenderPassCreateInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = in_struct->correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new AttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&in_struct->pAttachments[i]);
        }
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new SubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (dependencyCount && in_struct->pDependencies) {
        pDependencies = new SubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&in_struct->pDependencies[i]);
        }
    }

    if (in_struct->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[in_struct->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)in_struct->pCorrelatedViewMasks,
               sizeof(uint32_t) * in_struct->correlatedViewMaskCount);
    }
}

void RenderPassCreateInfo2::initialize(const RenderPassCreateInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src->correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments) {
        pAttachments = new AttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src->pAttachments[i]);
        }
    }
    if (subpassCount && copy_src->pSubpasses) {
        pSubpasses = new SubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src->pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src->pDependencies) {
        pDependencies = new SubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src->pDependencies[i]);
        }
    }

    if (copy_src->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src->pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src->correlatedViewMaskCount);
    }
}

SubpassBeginInfo::SubpassBeginInfo(const VkSubpassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType), contents(in_struct->contents) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubpassBeginInfo::SubpassBeginInfo() : sType(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO), pNext(nullptr), contents() {}

SubpassBeginInfo::SubpassBeginInfo(const SubpassBeginInfo& copy_src) {
    sType = copy_src.sType;
    contents = copy_src.contents;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubpassBeginInfo& SubpassBeginInfo::operator=(const SubpassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    contents = copy_src.contents;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubpassBeginInfo::~SubpassBeginInfo() { FreePnextChain(pNext); }

void SubpassBeginInfo::initialize(const VkSubpassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    contents = in_struct->contents;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubpassBeginInfo::initialize(const SubpassBeginInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    contents = copy_src->contents;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubpassEndInfo::SubpassEndInfo(const VkSubpassEndInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubpassEndInfo::SubpassEndInfo() : sType(VK_STRUCTURE_TYPE_SUBPASS_END_INFO), pNext(nullptr) {}

SubpassEndInfo::SubpassEndInfo(const SubpassEndInfo& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubpassEndInfo& SubpassEndInfo::operator=(const SubpassEndInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubpassEndInfo::~SubpassEndInfo() { FreePnextChain(pNext); }

void SubpassEndInfo::initialize(const VkSubpassEndInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubpassEndInfo::initialize(const SubpassEndInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevice8BitStorageFeatures::PhysicalDevice8BitStorageFeatures(const VkPhysicalDevice8BitStorageFeatures* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer8BitAccess(in_struct->storageBuffer8BitAccess),
      uniformAndStorageBuffer8BitAccess(in_struct->uniformAndStorageBuffer8BitAccess),
      storagePushConstant8(in_struct->storagePushConstant8) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevice8BitStorageFeatures::PhysicalDevice8BitStorageFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES),
      pNext(nullptr),
      storageBuffer8BitAccess(),
      uniformAndStorageBuffer8BitAccess(),
      storagePushConstant8() {}

PhysicalDevice8BitStorageFeatures::PhysicalDevice8BitStorageFeatures(const PhysicalDevice8BitStorageFeatures& copy_src) {
    sType = copy_src.sType;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevice8BitStorageFeatures& PhysicalDevice8BitStorageFeatures::operator=(const PhysicalDevice8BitStorageFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevice8BitStorageFeatures::~PhysicalDevice8BitStorageFeatures() { FreePnextChain(pNext); }

void PhysicalDevice8BitStorageFeatures::initialize(const VkPhysicalDevice8BitStorageFeatures* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer8BitAccess = in_struct->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = in_struct->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = in_struct->storagePushConstant8;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevice8BitStorageFeatures::initialize(const PhysicalDevice8BitStorageFeatures* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer8BitAccess = copy_src->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src->storagePushConstant8;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDriverProperties::PhysicalDeviceDriverProperties(const VkPhysicalDeviceDriverProperties* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), driverID(in_struct->driverID), conformanceVersion(in_struct->conformanceVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

PhysicalDeviceDriverProperties::PhysicalDeviceDriverProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES), pNext(nullptr), driverID(), conformanceVersion() {}

PhysicalDeviceDriverProperties::PhysicalDeviceDriverProperties(const PhysicalDeviceDriverProperties& copy_src) {
    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }
}

PhysicalDeviceDriverProperties& PhysicalDeviceDriverProperties::operator=(const PhysicalDeviceDriverProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }

    return *this;
}

PhysicalDeviceDriverProperties::~PhysicalDeviceDriverProperties() { FreePnextChain(pNext); }

void PhysicalDeviceDriverProperties::initialize(const VkPhysicalDeviceDriverProperties* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    driverID = in_struct->driverID;
    conformanceVersion = in_struct->conformanceVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

void PhysicalDeviceDriverProperties::initialize(const PhysicalDeviceDriverProperties* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    driverID = copy_src->driverID;
    conformanceVersion = copy_src->conformanceVersion;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src->driverInfo[i];
    }
}

PhysicalDeviceShaderAtomicInt64Features::PhysicalDeviceShaderAtomicInt64Features(
    const VkPhysicalDeviceShaderAtomicInt64Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderBufferInt64Atomics(in_struct->shaderBufferInt64Atomics),
      shaderSharedInt64Atomics(in_struct->shaderSharedInt64Atomics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderAtomicInt64Features::PhysicalDeviceShaderAtomicInt64Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES),
      pNext(nullptr),
      shaderBufferInt64Atomics(),
      shaderSharedInt64Atomics() {}

PhysicalDeviceShaderAtomicInt64Features::PhysicalDeviceShaderAtomicInt64Features(
    const PhysicalDeviceShaderAtomicInt64Features& copy_src) {
    sType = copy_src.sType;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderAtomicInt64Features& PhysicalDeviceShaderAtomicInt64Features::operator=(
    const PhysicalDeviceShaderAtomicInt64Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderAtomicInt64Features::~PhysicalDeviceShaderAtomicInt64Features() { FreePnextChain(pNext); }

void PhysicalDeviceShaderAtomicInt64Features::initialize(const VkPhysicalDeviceShaderAtomicInt64Features* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBufferInt64Atomics = in_struct->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = in_struct->shaderSharedInt64Atomics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderAtomicInt64Features::initialize(const PhysicalDeviceShaderAtomicInt64Features* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBufferInt64Atomics = copy_src->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src->shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderFloat16Int8Features::PhysicalDeviceShaderFloat16Int8Features(
    const VkPhysicalDeviceShaderFloat16Int8Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderFloat16(in_struct->shaderFloat16), shaderInt8(in_struct->shaderInt8) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderFloat16Int8Features::PhysicalDeviceShaderFloat16Int8Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES), pNext(nullptr), shaderFloat16(), shaderInt8() {}

PhysicalDeviceShaderFloat16Int8Features::PhysicalDeviceShaderFloat16Int8Features(
    const PhysicalDeviceShaderFloat16Int8Features& copy_src) {
    sType = copy_src.sType;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderFloat16Int8Features& PhysicalDeviceShaderFloat16Int8Features::operator=(
    const PhysicalDeviceShaderFloat16Int8Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderFloat16Int8Features::~PhysicalDeviceShaderFloat16Int8Features() { FreePnextChain(pNext); }

void PhysicalDeviceShaderFloat16Int8Features::initialize(const VkPhysicalDeviceShaderFloat16Int8Features* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderFloat16 = in_struct->shaderFloat16;
    shaderInt8 = in_struct->shaderInt8;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderFloat16Int8Features::initialize(const PhysicalDeviceShaderFloat16Int8Features* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderFloat16 = copy_src->shaderFloat16;
    shaderInt8 = copy_src->shaderInt8;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFloatControlsProperties::PhysicalDeviceFloatControlsProperties(
    const VkPhysicalDeviceFloatControlsProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      denormBehaviorIndependence(in_struct->denormBehaviorIndependence),
      roundingModeIndependence(in_struct->roundingModeIndependence),
      shaderSignedZeroInfNanPreserveFloat16(in_struct->shaderSignedZeroInfNanPreserveFloat16),
      shaderSignedZeroInfNanPreserveFloat32(in_struct->shaderSignedZeroInfNanPreserveFloat32),
      shaderSignedZeroInfNanPreserveFloat64(in_struct->shaderSignedZeroInfNanPreserveFloat64),
      shaderDenormPreserveFloat16(in_struct->shaderDenormPreserveFloat16),
      shaderDenormPreserveFloat32(in_struct->shaderDenormPreserveFloat32),
      shaderDenormPreserveFloat64(in_struct->shaderDenormPreserveFloat64),
      shaderDenormFlushToZeroFloat16(in_struct->shaderDenormFlushToZeroFloat16),
      shaderDenormFlushToZeroFloat32(in_struct->shaderDenormFlushToZeroFloat32),
      shaderDenormFlushToZeroFloat64(in_struct->shaderDenormFlushToZeroFloat64),
      shaderRoundingModeRTEFloat16(in_struct->shaderRoundingModeRTEFloat16),
      shaderRoundingModeRTEFloat32(in_struct->shaderRoundingModeRTEFloat32),
      shaderRoundingModeRTEFloat64(in_struct->shaderRoundingModeRTEFloat64),
      shaderRoundingModeRTZFloat16(in_struct->shaderRoundingModeRTZFloat16),
      shaderRoundingModeRTZFloat32(in_struct->shaderRoundingModeRTZFloat32),
      shaderRoundingModeRTZFloat64(in_struct->shaderRoundingModeRTZFloat64) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFloatControlsProperties::PhysicalDeviceFloatControlsProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES),
      pNext(nullptr),
      denormBehaviorIndependence(),
      roundingModeIndependence(),
      shaderSignedZeroInfNanPreserveFloat16(),
      shaderSignedZeroInfNanPreserveFloat32(),
      shaderSignedZeroInfNanPreserveFloat64(),
      shaderDenormPreserveFloat16(),
      shaderDenormPreserveFloat32(),
      shaderDenormPreserveFloat64(),
      shaderDenormFlushToZeroFloat16(),
      shaderDenormFlushToZeroFloat32(),
      shaderDenormFlushToZeroFloat64(),
      shaderRoundingModeRTEFloat16(),
      shaderRoundingModeRTEFloat32(),
      shaderRoundingModeRTEFloat64(),
      shaderRoundingModeRTZFloat16(),
      shaderRoundingModeRTZFloat32(),
      shaderRoundingModeRTZFloat64() {}

PhysicalDeviceFloatControlsProperties::PhysicalDeviceFloatControlsProperties(
    const PhysicalDeviceFloatControlsProperties& copy_src) {
    sType = copy_src.sType;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFloatControlsProperties& PhysicalDeviceFloatControlsProperties::operator=(
    const PhysicalDeviceFloatControlsProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFloatControlsProperties::~PhysicalDeviceFloatControlsProperties() { FreePnextChain(pNext); }

void PhysicalDeviceFloatControlsProperties::initialize(const VkPhysicalDeviceFloatControlsProperties* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    denormBehaviorIndependence = in_struct->denormBehaviorIndependence;
    roundingModeIndependence = in_struct->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = in_struct->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = in_struct->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = in_struct->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = in_struct->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = in_struct->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = in_struct->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = in_struct->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = in_struct->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = in_struct->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = in_struct->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = in_struct->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = in_struct->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = in_struct->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = in_struct->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = in_struct->shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFloatControlsProperties::initialize(const PhysicalDeviceFloatControlsProperties* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    denormBehaviorIndependence = copy_src->denormBehaviorIndependence;
    roundingModeIndependence = copy_src->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src->shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorSetLayoutBindingFlagsCreateInfo::DescriptorSetLayoutBindingFlagsCreateInfo(
    const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), bindingCount(in_struct->bindingCount), pBindingFlags(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[in_struct->bindingCount];
        memcpy((void*)pBindingFlags, (void*)in_struct->pBindingFlags, sizeof(VkDescriptorBindingFlags) * in_struct->bindingCount);
    }
}

DescriptorSetLayoutBindingFlagsCreateInfo::DescriptorSetLayoutBindingFlagsCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO),
      pNext(nullptr),
      bindingCount(),
      pBindingFlags(nullptr) {}

DescriptorSetLayoutBindingFlagsCreateInfo::DescriptorSetLayoutBindingFlagsCreateInfo(
    const DescriptorSetLayoutBindingFlagsCreateInfo& copy_src) {
    sType = copy_src.sType;
    bindingCount = copy_src.bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src.bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src.pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src.bindingCount);
    }
}

DescriptorSetLayoutBindingFlagsCreateInfo& DescriptorSetLayoutBindingFlagsCreateInfo::operator=(
    const DescriptorSetLayoutBindingFlagsCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    bindingCount = copy_src.bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src.bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src.pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src.bindingCount);
    }

    return *this;
}

DescriptorSetLayoutBindingFlagsCreateInfo::~DescriptorSetLayoutBindingFlagsCreateInfo() {
    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);
}

void DescriptorSetLayoutBindingFlagsCreateInfo::initialize(const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bindingCount = in_struct->bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[in_struct->bindingCount];
        memcpy((void*)pBindingFlags, (void*)in_struct->pBindingFlags, sizeof(VkDescriptorBindingFlags) * in_struct->bindingCount);
    }
}

void DescriptorSetLayoutBindingFlagsCreateInfo::initialize(const DescriptorSetLayoutBindingFlagsCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bindingCount = copy_src->bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src->bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src->pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src->bindingCount);
    }
}

PhysicalDeviceDescriptorIndexingFeatures::PhysicalDeviceDescriptorIndexingFeatures(
    const VkPhysicalDeviceDescriptorIndexingFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderInputAttachmentArrayDynamicIndexing(in_struct->shaderInputAttachmentArrayDynamicIndexing),
      shaderUniformTexelBufferArrayDynamicIndexing(in_struct->shaderUniformTexelBufferArrayDynamicIndexing),
      shaderStorageTexelBufferArrayDynamicIndexing(in_struct->shaderStorageTexelBufferArrayDynamicIndexing),
      shaderUniformBufferArrayNonUniformIndexing(in_struct->shaderUniformBufferArrayNonUniformIndexing),
      shaderSampledImageArrayNonUniformIndexing(in_struct->shaderSampledImageArrayNonUniformIndexing),
      shaderStorageBufferArrayNonUniformIndexing(in_struct->shaderStorageBufferArrayNonUniformIndexing),
      shaderStorageImageArrayNonUniformIndexing(in_struct->shaderStorageImageArrayNonUniformIndexing),
      shaderInputAttachmentArrayNonUniformIndexing(in_struct->shaderInputAttachmentArrayNonUniformIndexing),
      shaderUniformTexelBufferArrayNonUniformIndexing(in_struct->shaderUniformTexelBufferArrayNonUniformIndexing),
      shaderStorageTexelBufferArrayNonUniformIndexing(in_struct->shaderStorageTexelBufferArrayNonUniformIndexing),
      descriptorBindingUniformBufferUpdateAfterBind(in_struct->descriptorBindingUniformBufferUpdateAfterBind),
      descriptorBindingSampledImageUpdateAfterBind(in_struct->descriptorBindingSampledImageUpdateAfterBind),
      descriptorBindingStorageImageUpdateAfterBind(in_struct->descriptorBindingStorageImageUpdateAfterBind),
      descriptorBindingStorageBufferUpdateAfterBind(in_struct->descriptorBindingStorageBufferUpdateAfterBind),
      descriptorBindingUniformTexelBufferUpdateAfterBind(in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind),
      descriptorBindingStorageTexelBufferUpdateAfterBind(in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind),
      descriptorBindingUpdateUnusedWhilePending(in_struct->descriptorBindingUpdateUnusedWhilePending),
      descriptorBindingPartiallyBound(in_struct->descriptorBindingPartiallyBound),
      descriptorBindingVariableDescriptorCount(in_struct->descriptorBindingVariableDescriptorCount),
      runtimeDescriptorArray(in_struct->runtimeDescriptorArray) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorIndexingFeatures::PhysicalDeviceDescriptorIndexingFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES),
      pNext(nullptr),
      shaderInputAttachmentArrayDynamicIndexing(),
      shaderUniformTexelBufferArrayDynamicIndexing(),
      shaderStorageTexelBufferArrayDynamicIndexing(),
      shaderUniformBufferArrayNonUniformIndexing(),
      shaderSampledImageArrayNonUniformIndexing(),
      shaderStorageBufferArrayNonUniformIndexing(),
      shaderStorageImageArrayNonUniformIndexing(),
      shaderInputAttachmentArrayNonUniformIndexing(),
      shaderUniformTexelBufferArrayNonUniformIndexing(),
      shaderStorageTexelBufferArrayNonUniformIndexing(),
      descriptorBindingUniformBufferUpdateAfterBind(),
      descriptorBindingSampledImageUpdateAfterBind(),
      descriptorBindingStorageImageUpdateAfterBind(),
      descriptorBindingStorageBufferUpdateAfterBind(),
      descriptorBindingUniformTexelBufferUpdateAfterBind(),
      descriptorBindingStorageTexelBufferUpdateAfterBind(),
      descriptorBindingUpdateUnusedWhilePending(),
      descriptorBindingPartiallyBound(),
      descriptorBindingVariableDescriptorCount(),
      runtimeDescriptorArray() {}

PhysicalDeviceDescriptorIndexingFeatures::PhysicalDeviceDescriptorIndexingFeatures(
    const PhysicalDeviceDescriptorIndexingFeatures& copy_src) {
    sType = copy_src.sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorIndexingFeatures& PhysicalDeviceDescriptorIndexingFeatures::operator=(
    const PhysicalDeviceDescriptorIndexingFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorIndexingFeatures::~PhysicalDeviceDescriptorIndexingFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceDescriptorIndexingFeatures::initialize(const VkPhysicalDeviceDescriptorIndexingFeatures* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderInputAttachmentArrayDynamicIndexing = in_struct->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = in_struct->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = in_struct->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = in_struct->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = in_struct->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = in_struct->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = in_struct->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = in_struct->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = in_struct->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = in_struct->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = in_struct->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = in_struct->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = in_struct->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = in_struct->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = in_struct->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = in_struct->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = in_struct->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = in_struct->runtimeDescriptorArray;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorIndexingFeatures::initialize(const PhysicalDeviceDescriptorIndexingFeatures* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src->runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDescriptorIndexingProperties::PhysicalDeviceDescriptorIndexingProperties(
    const VkPhysicalDeviceDescriptorIndexingProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxUpdateAfterBindDescriptorsInAllPools(in_struct->maxUpdateAfterBindDescriptorsInAllPools),
      shaderUniformBufferArrayNonUniformIndexingNative(in_struct->shaderUniformBufferArrayNonUniformIndexingNative),
      shaderSampledImageArrayNonUniformIndexingNative(in_struct->shaderSampledImageArrayNonUniformIndexingNative),
      shaderStorageBufferArrayNonUniformIndexingNative(in_struct->shaderStorageBufferArrayNonUniformIndexingNative),
      shaderStorageImageArrayNonUniformIndexingNative(in_struct->shaderStorageImageArrayNonUniformIndexingNative),
      shaderInputAttachmentArrayNonUniformIndexingNative(in_struct->shaderInputAttachmentArrayNonUniformIndexingNative),
      robustBufferAccessUpdateAfterBind(in_struct->robustBufferAccessUpdateAfterBind),
      quadDivergentImplicitLod(in_struct->quadDivergentImplicitLod),
      maxPerStageDescriptorUpdateAfterBindSamplers(in_struct->maxPerStageDescriptorUpdateAfterBindSamplers),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers),
      maxPerStageDescriptorUpdateAfterBindSampledImages(in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages),
      maxPerStageDescriptorUpdateAfterBindStorageImages(in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments),
      maxPerStageUpdateAfterBindResources(in_struct->maxPerStageUpdateAfterBindResources),
      maxDescriptorSetUpdateAfterBindSamplers(in_struct->maxDescriptorSetUpdateAfterBindSamplers),
      maxDescriptorSetUpdateAfterBindUniformBuffers(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
      maxDescriptorSetUpdateAfterBindStorageBuffers(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
      maxDescriptorSetUpdateAfterBindSampledImages(in_struct->maxDescriptorSetUpdateAfterBindSampledImages),
      maxDescriptorSetUpdateAfterBindStorageImages(in_struct->maxDescriptorSetUpdateAfterBindStorageImages),
      maxDescriptorSetUpdateAfterBindInputAttachments(in_struct->maxDescriptorSetUpdateAfterBindInputAttachments) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDescriptorIndexingProperties::PhysicalDeviceDescriptorIndexingProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES),
      pNext(nullptr),
      maxUpdateAfterBindDescriptorsInAllPools(),
      shaderUniformBufferArrayNonUniformIndexingNative(),
      shaderSampledImageArrayNonUniformIndexingNative(),
      shaderStorageBufferArrayNonUniformIndexingNative(),
      shaderStorageImageArrayNonUniformIndexingNative(),
      shaderInputAttachmentArrayNonUniformIndexingNative(),
      robustBufferAccessUpdateAfterBind(),
      quadDivergentImplicitLod(),
      maxPerStageDescriptorUpdateAfterBindSamplers(),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(),
      maxPerStageDescriptorUpdateAfterBindSampledImages(),
      maxPerStageDescriptorUpdateAfterBindStorageImages(),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(),
      maxPerStageUpdateAfterBindResources(),
      maxDescriptorSetUpdateAfterBindSamplers(),
      maxDescriptorSetUpdateAfterBindUniformBuffers(),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindStorageBuffers(),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindSampledImages(),
      maxDescriptorSetUpdateAfterBindStorageImages(),
      maxDescriptorSetUpdateAfterBindInputAttachments() {}

PhysicalDeviceDescriptorIndexingProperties::PhysicalDeviceDescriptorIndexingProperties(
    const PhysicalDeviceDescriptorIndexingProperties& copy_src) {
    sType = copy_src.sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDescriptorIndexingProperties& PhysicalDeviceDescriptorIndexingProperties::operator=(
    const PhysicalDeviceDescriptorIndexingProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDescriptorIndexingProperties::~PhysicalDeviceDescriptorIndexingProperties() { FreePnextChain(pNext); }

void PhysicalDeviceDescriptorIndexingProperties::initialize(const VkPhysicalDeviceDescriptorIndexingProperties* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxUpdateAfterBindDescriptorsInAllPools = in_struct->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = in_struct->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = in_struct->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = in_struct->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = in_struct->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = in_struct->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = in_struct->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = in_struct->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = in_struct->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = in_struct->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = in_struct->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = in_struct->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = in_struct->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = in_struct->maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDescriptorIndexingProperties::initialize(const PhysicalDeviceDescriptorIndexingProperties* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src->maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src->pNext);
}

DescriptorSetVariableDescriptorCountAllocateInfo::DescriptorSetVariableDescriptorCountAllocateInfo(
    const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), descriptorSetCount(in_struct->descriptorSetCount), pDescriptorCounts(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[in_struct->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)in_struct->pDescriptorCounts, sizeof(uint32_t) * in_struct->descriptorSetCount);
    }
}

DescriptorSetVariableDescriptorCountAllocateInfo::DescriptorSetVariableDescriptorCountAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO),
      pNext(nullptr),
      descriptorSetCount(),
      pDescriptorCounts(nullptr) {}

DescriptorSetVariableDescriptorCountAllocateInfo::DescriptorSetVariableDescriptorCountAllocateInfo(
    const DescriptorSetVariableDescriptorCountAllocateInfo& copy_src) {
    sType = copy_src.sType;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src.descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src.pDescriptorCounts, sizeof(uint32_t) * copy_src.descriptorSetCount);
    }
}

DescriptorSetVariableDescriptorCountAllocateInfo& DescriptorSetVariableDescriptorCountAllocateInfo::operator=(
    const DescriptorSetVariableDescriptorCountAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src.descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src.pDescriptorCounts, sizeof(uint32_t) * copy_src.descriptorSetCount);
    }

    return *this;
}

DescriptorSetVariableDescriptorCountAllocateInfo::~DescriptorSetVariableDescriptorCountAllocateInfo() {
    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);
}

void DescriptorSetVariableDescriptorCountAllocateInfo::initialize(
    const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorSetCount = in_struct->descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[in_struct->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)in_struct->pDescriptorCounts, sizeof(uint32_t) * in_struct->descriptorSetCount);
    }
}

void DescriptorSetVariableDescriptorCountAllocateInfo::initialize(const DescriptorSetVariableDescriptorCountAllocateInfo* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorSetCount = copy_src->descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src->pDescriptorCounts, sizeof(uint32_t) * copy_src->descriptorSetCount);
    }
}

DescriptorSetVariableDescriptorCountLayoutSupport::DescriptorSetVariableDescriptorCountLayoutSupport(
    const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), maxVariableDescriptorCount(in_struct->maxVariableDescriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorSetVariableDescriptorCountLayoutSupport::DescriptorSetVariableDescriptorCountLayoutSupport()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT),
      pNext(nullptr),
      maxVariableDescriptorCount() {}

DescriptorSetVariableDescriptorCountLayoutSupport::DescriptorSetVariableDescriptorCountLayoutSupport(
    const DescriptorSetVariableDescriptorCountLayoutSupport& copy_src) {
    sType = copy_src.sType;
    maxVariableDescriptorCount = copy_src.maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorSetVariableDescriptorCountLayoutSupport& DescriptorSetVariableDescriptorCountLayoutSupport::operator=(
    const DescriptorSetVariableDescriptorCountLayoutSupport& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxVariableDescriptorCount = copy_src.maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorSetVariableDescriptorCountLayoutSupport::~DescriptorSetVariableDescriptorCountLayoutSupport() { FreePnextChain(pNext); }

void DescriptorSetVariableDescriptorCountLayoutSupport::initialize(
    const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxVariableDescriptorCount = in_struct->maxVariableDescriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorSetVariableDescriptorCountLayoutSupport::initialize(
    const DescriptorSetVariableDescriptorCountLayoutSupport* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxVariableDescriptorCount = copy_src->maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubpassDescriptionDepthStencilResolve::SubpassDescriptionDepthStencilResolve(
    const VkSubpassDescriptionDepthStencilResolve* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      depthResolveMode(in_struct->depthResolveMode),
      stencilResolveMode(in_struct->stencilResolveMode),
      pDepthStencilResolveAttachment(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new AttachmentReference2(in_struct->pDepthStencilResolveAttachment);
}

SubpassDescriptionDepthStencilResolve::SubpassDescriptionDepthStencilResolve()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE),
      pNext(nullptr),
      depthResolveMode(),
      stencilResolveMode(),
      pDepthStencilResolveAttachment(nullptr) {}

SubpassDescriptionDepthStencilResolve::SubpassDescriptionDepthStencilResolve(
    const SubpassDescriptionDepthStencilResolve& copy_src) {
    sType = copy_src.sType;
    depthResolveMode = copy_src.depthResolveMode;
    stencilResolveMode = copy_src.stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new AttachmentReference2(*copy_src.pDepthStencilResolveAttachment);
}

SubpassDescriptionDepthStencilResolve& SubpassDescriptionDepthStencilResolve::operator=(
    const SubpassDescriptionDepthStencilResolve& copy_src) {
    if (&copy_src == this) return *this;

    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthResolveMode = copy_src.depthResolveMode;
    stencilResolveMode = copy_src.stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new AttachmentReference2(*copy_src.pDepthStencilResolveAttachment);

    return *this;
}

SubpassDescriptionDepthStencilResolve::~SubpassDescriptionDepthStencilResolve() {
    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);
}

void SubpassDescriptionDepthStencilResolve::initialize(const VkSubpassDescriptionDepthStencilResolve* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthResolveMode = in_struct->depthResolveMode;
    stencilResolveMode = in_struct->stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new AttachmentReference2(in_struct->pDepthStencilResolveAttachment);
}

void SubpassDescriptionDepthStencilResolve::initialize(const SubpassDescriptionDepthStencilResolve* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthResolveMode = copy_src->depthResolveMode;
    stencilResolveMode = copy_src->stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new AttachmentReference2(*copy_src->pDepthStencilResolveAttachment);
}

PhysicalDeviceDepthStencilResolveProperties::PhysicalDeviceDepthStencilResolveProperties(
    const VkPhysicalDeviceDepthStencilResolveProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      supportedDepthResolveModes(in_struct->supportedDepthResolveModes),
      supportedStencilResolveModes(in_struct->supportedStencilResolveModes),
      independentResolveNone(in_struct->independentResolveNone),
      independentResolve(in_struct->independentResolve) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDepthStencilResolveProperties::PhysicalDeviceDepthStencilResolveProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES),
      pNext(nullptr),
      supportedDepthResolveModes(),
      supportedStencilResolveModes(),
      independentResolveNone(),
      independentResolve() {}

PhysicalDeviceDepthStencilResolveProperties::PhysicalDeviceDepthStencilResolveProperties(
    const PhysicalDeviceDepthStencilResolveProperties& copy_src) {
    sType = copy_src.sType;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDepthStencilResolveProperties& PhysicalDeviceDepthStencilResolveProperties::operator=(
    const PhysicalDeviceDepthStencilResolveProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDepthStencilResolveProperties::~PhysicalDeviceDepthStencilResolveProperties() { FreePnextChain(pNext); }

void PhysicalDeviceDepthStencilResolveProperties::initialize(const VkPhysicalDeviceDepthStencilResolveProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportedDepthResolveModes = in_struct->supportedDepthResolveModes;
    supportedStencilResolveModes = in_struct->supportedStencilResolveModes;
    independentResolveNone = in_struct->independentResolveNone;
    independentResolve = in_struct->independentResolve;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDepthStencilResolveProperties::initialize(const PhysicalDeviceDepthStencilResolveProperties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedDepthResolveModes = copy_src->supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src->supportedStencilResolveModes;
    independentResolveNone = copy_src->independentResolveNone;
    independentResolve = copy_src->independentResolve;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceScalarBlockLayoutFeatures::PhysicalDeviceScalarBlockLayoutFeatures(
    const VkPhysicalDeviceScalarBlockLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), scalarBlockLayout(in_struct->scalarBlockLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceScalarBlockLayoutFeatures::PhysicalDeviceScalarBlockLayoutFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES), pNext(nullptr), scalarBlockLayout() {}

PhysicalDeviceScalarBlockLayoutFeatures::PhysicalDeviceScalarBlockLayoutFeatures(
    const PhysicalDeviceScalarBlockLayoutFeatures& copy_src) {
    sType = copy_src.sType;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceScalarBlockLayoutFeatures& PhysicalDeviceScalarBlockLayoutFeatures::operator=(
    const PhysicalDeviceScalarBlockLayoutFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceScalarBlockLayoutFeatures::~PhysicalDeviceScalarBlockLayoutFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceScalarBlockLayoutFeatures::initialize(const VkPhysicalDeviceScalarBlockLayoutFeatures* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    scalarBlockLayout = in_struct->scalarBlockLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceScalarBlockLayoutFeatures::initialize(const PhysicalDeviceScalarBlockLayoutFeatures* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    scalarBlockLayout = copy_src->scalarBlockLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageStencilUsageCreateInfo::ImageStencilUsageCreateInfo(const VkImageStencilUsageCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stencilUsage(in_struct->stencilUsage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageStencilUsageCreateInfo::ImageStencilUsageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO), pNext(nullptr), stencilUsage() {}

ImageStencilUsageCreateInfo::ImageStencilUsageCreateInfo(const ImageStencilUsageCreateInfo& copy_src) {
    sType = copy_src.sType;
    stencilUsage = copy_src.stencilUsage;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageStencilUsageCreateInfo& ImageStencilUsageCreateInfo::operator=(const ImageStencilUsageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilUsage = copy_src.stencilUsage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageStencilUsageCreateInfo::~ImageStencilUsageCreateInfo() { FreePnextChain(pNext); }

void ImageStencilUsageCreateInfo::initialize(const VkImageStencilUsageCreateInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilUsage = in_struct->stencilUsage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageStencilUsageCreateInfo::initialize(const ImageStencilUsageCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilUsage = copy_src->stencilUsage;
    pNext = SafePnextCopy(copy_src->pNext);
}

SamplerReductionModeCreateInfo::SamplerReductionModeCreateInfo(const VkSamplerReductionModeCreateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), reductionMode(in_struct->reductionMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SamplerReductionModeCreateInfo::SamplerReductionModeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO), pNext(nullptr), reductionMode() {}

SamplerReductionModeCreateInfo::SamplerReductionModeCreateInfo(const SamplerReductionModeCreateInfo& copy_src) {
    sType = copy_src.sType;
    reductionMode = copy_src.reductionMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

SamplerReductionModeCreateInfo& SamplerReductionModeCreateInfo::operator=(const SamplerReductionModeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    reductionMode = copy_src.reductionMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SamplerReductionModeCreateInfo::~SamplerReductionModeCreateInfo() { FreePnextChain(pNext); }

void SamplerReductionModeCreateInfo::initialize(const VkSamplerReductionModeCreateInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    reductionMode = in_struct->reductionMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SamplerReductionModeCreateInfo::initialize(const SamplerReductionModeCreateInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    reductionMode = copy_src->reductionMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSamplerFilterMinmaxProperties::PhysicalDeviceSamplerFilterMinmaxProperties(
    const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      filterMinmaxSingleComponentFormats(in_struct->filterMinmaxSingleComponentFormats),
      filterMinmaxImageComponentMapping(in_struct->filterMinmaxImageComponentMapping) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSamplerFilterMinmaxProperties::PhysicalDeviceSamplerFilterMinmaxProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES),
      pNext(nullptr),
      filterMinmaxSingleComponentFormats(),
      filterMinmaxImageComponentMapping() {}

PhysicalDeviceSamplerFilterMinmaxProperties::PhysicalDeviceSamplerFilterMinmaxProperties(
    const PhysicalDeviceSamplerFilterMinmaxProperties& copy_src) {
    sType = copy_src.sType;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSamplerFilterMinmaxProperties& PhysicalDeviceSamplerFilterMinmaxProperties::operator=(
    const PhysicalDeviceSamplerFilterMinmaxProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSamplerFilterMinmaxProperties::~PhysicalDeviceSamplerFilterMinmaxProperties() { FreePnextChain(pNext); }

void PhysicalDeviceSamplerFilterMinmaxProperties::initialize(const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    filterMinmaxSingleComponentFormats = in_struct->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = in_struct->filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSamplerFilterMinmaxProperties::initialize(const PhysicalDeviceSamplerFilterMinmaxProperties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    filterMinmaxSingleComponentFormats = copy_src->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src->filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkanMemoryModelFeatures::PhysicalDeviceVulkanMemoryModelFeatures(
    const VkPhysicalDeviceVulkanMemoryModelFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      vulkanMemoryModel(in_struct->vulkanMemoryModel),
      vulkanMemoryModelDeviceScope(in_struct->vulkanMemoryModelDeviceScope),
      vulkanMemoryModelAvailabilityVisibilityChains(in_struct->vulkanMemoryModelAvailabilityVisibilityChains) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVulkanMemoryModelFeatures::PhysicalDeviceVulkanMemoryModelFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES),
      pNext(nullptr),
      vulkanMemoryModel(),
      vulkanMemoryModelDeviceScope(),
      vulkanMemoryModelAvailabilityVisibilityChains() {}

PhysicalDeviceVulkanMemoryModelFeatures::PhysicalDeviceVulkanMemoryModelFeatures(
    const PhysicalDeviceVulkanMemoryModelFeatures& copy_src) {
    sType = copy_src.sType;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVulkanMemoryModelFeatures& PhysicalDeviceVulkanMemoryModelFeatures::operator=(
    const PhysicalDeviceVulkanMemoryModelFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVulkanMemoryModelFeatures::~PhysicalDeviceVulkanMemoryModelFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceVulkanMemoryModelFeatures::initialize(const VkPhysicalDeviceVulkanMemoryModelFeatures* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vulkanMemoryModel = in_struct->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = in_struct->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = in_struct->vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVulkanMemoryModelFeatures::initialize(const PhysicalDeviceVulkanMemoryModelFeatures* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vulkanMemoryModel = copy_src->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src->vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImagelessFramebufferFeatures::PhysicalDeviceImagelessFramebufferFeatures(
    const VkPhysicalDeviceImagelessFramebufferFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imagelessFramebuffer(in_struct->imagelessFramebuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImagelessFramebufferFeatures::PhysicalDeviceImagelessFramebufferFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES), pNext(nullptr), imagelessFramebuffer() {}

PhysicalDeviceImagelessFramebufferFeatures::PhysicalDeviceImagelessFramebufferFeatures(
    const PhysicalDeviceImagelessFramebufferFeatures& copy_src) {
    sType = copy_src.sType;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImagelessFramebufferFeatures& PhysicalDeviceImagelessFramebufferFeatures::operator=(
    const PhysicalDeviceImagelessFramebufferFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImagelessFramebufferFeatures::~PhysicalDeviceImagelessFramebufferFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceImagelessFramebufferFeatures::initialize(const VkPhysicalDeviceImagelessFramebufferFeatures* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imagelessFramebuffer = in_struct->imagelessFramebuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImagelessFramebufferFeatures::initialize(const PhysicalDeviceImagelessFramebufferFeatures* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imagelessFramebuffer = copy_src->imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

FramebufferAttachmentImageInfo::FramebufferAttachmentImageInfo(const VkFramebufferAttachmentImageInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      usage(in_struct->usage),
      width(in_struct->width),
      height(in_struct->height),
      layerCount(in_struct->layerCount),
      viewFormatCount(in_struct->viewFormatCount),
      pViewFormats(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

FramebufferAttachmentImageInfo::FramebufferAttachmentImageInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO),
      pNext(nullptr),
      flags(),
      usage(),
      width(),
      height(),
      layerCount(),
      viewFormatCount(),
      pViewFormats(nullptr) {}

FramebufferAttachmentImageInfo::FramebufferAttachmentImageInfo(const FramebufferAttachmentImageInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    width = copy_src.width;
    height = copy_src.height;
    layerCount = copy_src.layerCount;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }
}

FramebufferAttachmentImageInfo& FramebufferAttachmentImageInfo::operator=(const FramebufferAttachmentImageInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    width = copy_src.width;
    height = copy_src.height;
    layerCount = copy_src.layerCount;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }

    return *this;
}

FramebufferAttachmentImageInfo::~FramebufferAttachmentImageInfo() {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
}

void FramebufferAttachmentImageInfo::initialize(const VkFramebufferAttachmentImageInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    usage = in_struct->usage;
    width = in_struct->width;
    height = in_struct->height;
    layerCount = in_struct->layerCount;
    viewFormatCount = in_struct->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

void FramebufferAttachmentImageInfo::initialize(const FramebufferAttachmentImageInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    usage = copy_src->usage;
    width = copy_src->width;
    height = copy_src->height;
    layerCount = copy_src->layerCount;
    viewFormatCount = copy_src->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewFormats) {
        pViewFormats = new VkFormat[copy_src->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src->pViewFormats, sizeof(VkFormat) * copy_src->viewFormatCount);
    }
}

FramebufferAttachmentsCreateInfo::FramebufferAttachmentsCreateInfo(const VkFramebufferAttachmentsCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), attachmentImageInfoCount(in_struct->attachmentImageInfoCount), pAttachmentImageInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentImageInfoCount && in_struct->pAttachmentImageInfos) {
        pAttachmentImageInfos = new FramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&in_struct->pAttachmentImageInfos[i]);
        }
    }
}

FramebufferAttachmentsCreateInfo::FramebufferAttachmentsCreateInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO),
      pNext(nullptr),
      attachmentImageInfoCount(),
      pAttachmentImageInfos(nullptr) {}

FramebufferAttachmentsCreateInfo::FramebufferAttachmentsCreateInfo(const FramebufferAttachmentsCreateInfo& copy_src) {
    sType = copy_src.sType;
    attachmentImageInfoCount = copy_src.attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentImageInfoCount && copy_src.pAttachmentImageInfos) {
        pAttachmentImageInfos = new FramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src.pAttachmentImageInfos[i]);
        }
    }
}

FramebufferAttachmentsCreateInfo& FramebufferAttachmentsCreateInfo::operator=(const FramebufferAttachmentsCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentImageInfoCount = copy_src.attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentImageInfoCount && copy_src.pAttachmentImageInfos) {
        pAttachmentImageInfos = new FramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src.pAttachmentImageInfos[i]);
        }
    }

    return *this;
}

FramebufferAttachmentsCreateInfo::~FramebufferAttachmentsCreateInfo() {
    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);
}

void FramebufferAttachmentsCreateInfo::initialize(const VkFramebufferAttachmentsCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentImageInfoCount = in_struct->attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentImageInfoCount && in_struct->pAttachmentImageInfos) {
        pAttachmentImageInfos = new FramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&in_struct->pAttachmentImageInfos[i]);
        }
    }
}

void FramebufferAttachmentsCreateInfo::initialize(const FramebufferAttachmentsCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentImageInfoCount = copy_src->attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentImageInfoCount && copy_src->pAttachmentImageInfos) {
        pAttachmentImageInfos = new FramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src->pAttachmentImageInfos[i]);
        }
    }
}

RenderPassAttachmentBeginInfo::RenderPassAttachmentBeginInfo(const VkRenderPassAttachmentBeginInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), attachmentCount(in_struct->attachmentCount), pAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

RenderPassAttachmentBeginInfo::RenderPassAttachmentBeginInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO), pNext(nullptr), attachmentCount(), pAttachments(nullptr) {}

RenderPassAttachmentBeginInfo::RenderPassAttachmentBeginInfo(const RenderPassAttachmentBeginInfo& copy_src) {
    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }
}

RenderPassAttachmentBeginInfo& RenderPassAttachmentBeginInfo::operator=(const RenderPassAttachmentBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }

    return *this;
}

RenderPassAttachmentBeginInfo::~RenderPassAttachmentBeginInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void RenderPassAttachmentBeginInfo::initialize(const VkRenderPassAttachmentBeginInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void RenderPassAttachmentBeginInfo::initialize(const RenderPassAttachmentBeginInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src->pAttachments[i];
        }
    }
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::PhysicalDeviceUniformBufferStandardLayoutFeatures(
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), uniformBufferStandardLayout(in_struct->uniformBufferStandardLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::PhysicalDeviceUniformBufferStandardLayoutFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES),
      pNext(nullptr),
      uniformBufferStandardLayout() {}

PhysicalDeviceUniformBufferStandardLayoutFeatures::PhysicalDeviceUniformBufferStandardLayoutFeatures(
    const PhysicalDeviceUniformBufferStandardLayoutFeatures& copy_src) {
    sType = copy_src.sType;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceUniformBufferStandardLayoutFeatures& PhysicalDeviceUniformBufferStandardLayoutFeatures::operator=(
    const PhysicalDeviceUniformBufferStandardLayoutFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::~PhysicalDeviceUniformBufferStandardLayoutFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceUniformBufferStandardLayoutFeatures::initialize(
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    uniformBufferStandardLayout = in_struct->uniformBufferStandardLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceUniformBufferStandardLayoutFeatures::initialize(
    const PhysicalDeviceUniformBufferStandardLayoutFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    uniformBufferStandardLayout = copy_src->uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::PhysicalDeviceShaderSubgroupExtendedTypesFeatures(
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderSubgroupExtendedTypes(in_struct->shaderSubgroupExtendedTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::PhysicalDeviceShaderSubgroupExtendedTypesFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES),
      pNext(nullptr),
      shaderSubgroupExtendedTypes() {}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::PhysicalDeviceShaderSubgroupExtendedTypesFeatures(
    const PhysicalDeviceShaderSubgroupExtendedTypesFeatures& copy_src) {
    sType = copy_src.sType;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures& PhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator=(
    const PhysicalDeviceShaderSubgroupExtendedTypesFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::~PhysicalDeviceShaderSubgroupExtendedTypesFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceShaderSubgroupExtendedTypesFeatures::initialize(
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSubgroupExtendedTypes = in_struct->shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderSubgroupExtendedTypesFeatures::initialize(
    const PhysicalDeviceShaderSubgroupExtendedTypesFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSubgroupExtendedTypes = copy_src->shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::PhysicalDeviceSeparateDepthStencilLayoutsFeatures(
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), separateDepthStencilLayouts(in_struct->separateDepthStencilLayouts) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::PhysicalDeviceSeparateDepthStencilLayoutsFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES),
      pNext(nullptr),
      separateDepthStencilLayouts() {}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::PhysicalDeviceSeparateDepthStencilLayoutsFeatures(
    const PhysicalDeviceSeparateDepthStencilLayoutsFeatures& copy_src) {
    sType = copy_src.sType;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures& PhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator=(
    const PhysicalDeviceSeparateDepthStencilLayoutsFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::~PhysicalDeviceSeparateDepthStencilLayoutsFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceSeparateDepthStencilLayoutsFeatures::initialize(
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    separateDepthStencilLayouts = in_struct->separateDepthStencilLayouts;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSeparateDepthStencilLayoutsFeatures::initialize(
    const PhysicalDeviceSeparateDepthStencilLayoutsFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    separateDepthStencilLayouts = copy_src->separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src->pNext);
}

AttachmentReferenceStencilLayout::AttachmentReferenceStencilLayout(const VkAttachmentReferenceStencilLayout* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stencilLayout(in_struct->stencilLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AttachmentReferenceStencilLayout::AttachmentReferenceStencilLayout()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT), pNext(nullptr), stencilLayout() {}

AttachmentReferenceStencilLayout::AttachmentReferenceStencilLayout(const AttachmentReferenceStencilLayout& copy_src) {
    sType = copy_src.sType;
    stencilLayout = copy_src.stencilLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

AttachmentReferenceStencilLayout& AttachmentReferenceStencilLayout::operator=(const AttachmentReferenceStencilLayout& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilLayout = copy_src.stencilLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AttachmentReferenceStencilLayout::~AttachmentReferenceStencilLayout() { FreePnextChain(pNext); }

void AttachmentReferenceStencilLayout::initialize(const VkAttachmentReferenceStencilLayout* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilLayout = in_struct->stencilLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AttachmentReferenceStencilLayout::initialize(const AttachmentReferenceStencilLayout* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilLayout = copy_src->stencilLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

AttachmentDescriptionStencilLayout::AttachmentDescriptionStencilLayout(const VkAttachmentDescriptionStencilLayout* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stencilInitialLayout(in_struct->stencilInitialLayout),
      stencilFinalLayout(in_struct->stencilFinalLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AttachmentDescriptionStencilLayout::AttachmentDescriptionStencilLayout()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT),
      pNext(nullptr),
      stencilInitialLayout(),
      stencilFinalLayout() {}

AttachmentDescriptionStencilLayout::AttachmentDescriptionStencilLayout(const AttachmentDescriptionStencilLayout& copy_src) {
    sType = copy_src.sType;
    stencilInitialLayout = copy_src.stencilInitialLayout;
    stencilFinalLayout = copy_src.stencilFinalLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

AttachmentDescriptionStencilLayout& AttachmentDescriptionStencilLayout::operator=(
    const AttachmentDescriptionStencilLayout& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilInitialLayout = copy_src.stencilInitialLayout;
    stencilFinalLayout = copy_src.stencilFinalLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AttachmentDescriptionStencilLayout::~AttachmentDescriptionStencilLayout() { FreePnextChain(pNext); }

void AttachmentDescriptionStencilLayout::initialize(const VkAttachmentDescriptionStencilLayout* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilInitialLayout = in_struct->stencilInitialLayout;
    stencilFinalLayout = in_struct->stencilFinalLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AttachmentDescriptionStencilLayout::initialize(const AttachmentDescriptionStencilLayout* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilInitialLayout = copy_src->stencilInitialLayout;
    stencilFinalLayout = copy_src->stencilFinalLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceHostQueryResetFeatures::PhysicalDeviceHostQueryResetFeatures(const VkPhysicalDeviceHostQueryResetFeatures* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), hostQueryReset(in_struct->hostQueryReset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceHostQueryResetFeatures::PhysicalDeviceHostQueryResetFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES), pNext(nullptr), hostQueryReset() {}

PhysicalDeviceHostQueryResetFeatures::PhysicalDeviceHostQueryResetFeatures(const PhysicalDeviceHostQueryResetFeatures& copy_src) {
    sType = copy_src.sType;
    hostQueryReset = copy_src.hostQueryReset;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceHostQueryResetFeatures& PhysicalDeviceHostQueryResetFeatures::operator=(
    const PhysicalDeviceHostQueryResetFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hostQueryReset = copy_src.hostQueryReset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceHostQueryResetFeatures::~PhysicalDeviceHostQueryResetFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceHostQueryResetFeatures::initialize(const VkPhysicalDeviceHostQueryResetFeatures* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hostQueryReset = in_struct->hostQueryReset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceHostQueryResetFeatures::initialize(const PhysicalDeviceHostQueryResetFeatures* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hostQueryReset = copy_src->hostQueryReset;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceTimelineSemaphoreFeatures::PhysicalDeviceTimelineSemaphoreFeatures(
    const VkPhysicalDeviceTimelineSemaphoreFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), timelineSemaphore(in_struct->timelineSemaphore) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTimelineSemaphoreFeatures::PhysicalDeviceTimelineSemaphoreFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES), pNext(nullptr), timelineSemaphore() {}

PhysicalDeviceTimelineSemaphoreFeatures::PhysicalDeviceTimelineSemaphoreFeatures(
    const PhysicalDeviceTimelineSemaphoreFeatures& copy_src) {
    sType = copy_src.sType;
    timelineSemaphore = copy_src.timelineSemaphore;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTimelineSemaphoreFeatures& PhysicalDeviceTimelineSemaphoreFeatures::operator=(
    const PhysicalDeviceTimelineSemaphoreFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    timelineSemaphore = copy_src.timelineSemaphore;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTimelineSemaphoreFeatures::~PhysicalDeviceTimelineSemaphoreFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceTimelineSemaphoreFeatures::initialize(const VkPhysicalDeviceTimelineSemaphoreFeatures* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    timelineSemaphore = in_struct->timelineSemaphore;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTimelineSemaphoreFeatures::initialize(const PhysicalDeviceTimelineSemaphoreFeatures* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    timelineSemaphore = copy_src->timelineSemaphore;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceTimelineSemaphoreProperties::PhysicalDeviceTimelineSemaphoreProperties(
    const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxTimelineSemaphoreValueDifference(in_struct->maxTimelineSemaphoreValueDifference) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTimelineSemaphoreProperties::PhysicalDeviceTimelineSemaphoreProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES),
      pNext(nullptr),
      maxTimelineSemaphoreValueDifference() {}

PhysicalDeviceTimelineSemaphoreProperties::PhysicalDeviceTimelineSemaphoreProperties(
    const PhysicalDeviceTimelineSemaphoreProperties& copy_src) {
    sType = copy_src.sType;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTimelineSemaphoreProperties& PhysicalDeviceTimelineSemaphoreProperties::operator=(
    const PhysicalDeviceTimelineSemaphoreProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTimelineSemaphoreProperties::~PhysicalDeviceTimelineSemaphoreProperties() { FreePnextChain(pNext); }

void PhysicalDeviceTimelineSemaphoreProperties::initialize(const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxTimelineSemaphoreValueDifference = in_struct->maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTimelineSemaphoreProperties::initialize(const PhysicalDeviceTimelineSemaphoreProperties* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxTimelineSemaphoreValueDifference = copy_src->maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src->pNext);
}

SemaphoreTypeCreateInfo::SemaphoreTypeCreateInfo(const VkSemaphoreTypeCreateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), semaphoreType(in_struct->semaphoreType), initialValue(in_struct->initialValue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreTypeCreateInfo::SemaphoreTypeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO), pNext(nullptr), semaphoreType(), initialValue() {}

SemaphoreTypeCreateInfo::SemaphoreTypeCreateInfo(const SemaphoreTypeCreateInfo& copy_src) {
    sType = copy_src.sType;
    semaphoreType = copy_src.semaphoreType;
    initialValue = copy_src.initialValue;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreTypeCreateInfo& SemaphoreTypeCreateInfo::operator=(const SemaphoreTypeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphoreType = copy_src.semaphoreType;
    initialValue = copy_src.initialValue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreTypeCreateInfo::~SemaphoreTypeCreateInfo() { FreePnextChain(pNext); }

void SemaphoreTypeCreateInfo::initialize(const VkSemaphoreTypeCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphoreType = in_struct->semaphoreType;
    initialValue = in_struct->initialValue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreTypeCreateInfo::initialize(const SemaphoreTypeCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphoreType = copy_src->semaphoreType;
    initialValue = copy_src->initialValue;
    pNext = SafePnextCopy(copy_src->pNext);
}

TimelineSemaphoreSubmitInfo::TimelineSemaphoreSubmitInfo(const VkTimelineSemaphoreSubmitInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreValueCount(in_struct->waitSemaphoreValueCount),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValueCount(in_struct->signalSemaphoreValueCount),
      pSignalSemaphoreValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValueCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValueCount);
    }
}

TimelineSemaphoreSubmitInfo::TimelineSemaphoreSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreValueCount(),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValueCount(),
      pSignalSemaphoreValues(nullptr) {}

TimelineSemaphoreSubmitInfo::TimelineSemaphoreSubmitInfo(const TimelineSemaphoreSubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreValueCount = copy_src.waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src.signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValueCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValueCount);
    }
}

TimelineSemaphoreSubmitInfo& TimelineSemaphoreSubmitInfo::operator=(const TimelineSemaphoreSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreValueCount = copy_src.waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src.signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValueCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValueCount);
    }

    return *this;
}

TimelineSemaphoreSubmitInfo::~TimelineSemaphoreSubmitInfo() {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
}

void TimelineSemaphoreSubmitInfo::initialize(const VkTimelineSemaphoreSubmitInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreValueCount = in_struct->waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = in_struct->signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValueCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValueCount);
    }
}

void TimelineSemaphoreSubmitInfo::initialize(const TimelineSemaphoreSubmitInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreValueCount = copy_src->waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src->signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src->pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src->waitSemaphoreValueCount);
    }

    if (copy_src->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src->pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src->signalSemaphoreValueCount);
    }
}

SemaphoreWaitInfo::SemaphoreWaitInfo(const VkSemaphoreWaitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      semaphoreCount(in_struct->semaphoreCount),
      pSemaphores(nullptr),
      pValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (semaphoreCount && in_struct->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = in_struct->pSemaphores[i];
        }
    }

    if (in_struct->pValues) {
        pValues = new uint64_t[in_struct->semaphoreCount];
        memcpy((void*)pValues, (void*)in_struct->pValues, sizeof(uint64_t) * in_struct->semaphoreCount);
    }
}

SemaphoreWaitInfo::SemaphoreWaitInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO),
      pNext(nullptr),
      flags(),
      semaphoreCount(),
      pSemaphores(nullptr),
      pValues(nullptr) {}

SemaphoreWaitInfo::SemaphoreWaitInfo(const SemaphoreWaitInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    semaphoreCount = copy_src.semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (semaphoreCount && copy_src.pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src.pSemaphores[i];
        }
    }

    if (copy_src.pValues) {
        pValues = new uint64_t[copy_src.semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src.pValues, sizeof(uint64_t) * copy_src.semaphoreCount);
    }
}

SemaphoreWaitInfo& SemaphoreWaitInfo::operator=(const SemaphoreWaitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    semaphoreCount = copy_src.semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (semaphoreCount && copy_src.pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src.pSemaphores[i];
        }
    }

    if (copy_src.pValues) {
        pValues = new uint64_t[copy_src.semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src.pValues, sizeof(uint64_t) * copy_src.semaphoreCount);
    }

    return *this;
}

SemaphoreWaitInfo::~SemaphoreWaitInfo() {
    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);
}

void SemaphoreWaitInfo::initialize(const VkSemaphoreWaitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    semaphoreCount = in_struct->semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (semaphoreCount && in_struct->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = in_struct->pSemaphores[i];
        }
    }

    if (in_struct->pValues) {
        pValues = new uint64_t[in_struct->semaphoreCount];
        memcpy((void*)pValues, (void*)in_struct->pValues, sizeof(uint64_t) * in_struct->semaphoreCount);
    }
}

void SemaphoreWaitInfo::initialize(const SemaphoreWaitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    semaphoreCount = copy_src->semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (semaphoreCount && copy_src->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src->pSemaphores[i];
        }
    }

    if (copy_src->pValues) {
        pValues = new uint64_t[copy_src->semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src->pValues, sizeof(uint64_t) * copy_src->semaphoreCount);
    }
}

SemaphoreSignalInfo::SemaphoreSignalInfo(const VkSemaphoreSignalInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), value(in_struct->value) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreSignalInfo::SemaphoreSignalInfo() : sType(VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO), pNext(nullptr), semaphore(), value() {}

SemaphoreSignalInfo::SemaphoreSignalInfo(const SemaphoreSignalInfo& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreSignalInfo& SemaphoreSignalInfo::operator=(const SemaphoreSignalInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreSignalInfo::~SemaphoreSignalInfo() { FreePnextChain(pNext); }

void SemaphoreSignalInfo::initialize(const VkSemaphoreSignalInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    value = in_struct->value;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreSignalInfo::initialize(const SemaphoreSignalInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    value = copy_src->value;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceBufferDeviceAddressFeatures::PhysicalDeviceBufferDeviceAddressFeatures(
    const VkPhysicalDeviceBufferDeviceAddressFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      bufferDeviceAddress(in_struct->bufferDeviceAddress),
      bufferDeviceAddressCaptureReplay(in_struct->bufferDeviceAddressCaptureReplay),
      bufferDeviceAddressMultiDevice(in_struct->bufferDeviceAddressMultiDevice) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceBufferDeviceAddressFeatures::PhysicalDeviceBufferDeviceAddressFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES),
      pNext(nullptr),
      bufferDeviceAddress(),
      bufferDeviceAddressCaptureReplay(),
      bufferDeviceAddressMultiDevice() {}

PhysicalDeviceBufferDeviceAddressFeatures::PhysicalDeviceBufferDeviceAddressFeatures(
    const PhysicalDeviceBufferDeviceAddressFeatures& copy_src) {
    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceBufferDeviceAddressFeatures& PhysicalDeviceBufferDeviceAddressFeatures::operator=(
    const PhysicalDeviceBufferDeviceAddressFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceBufferDeviceAddressFeatures::~PhysicalDeviceBufferDeviceAddressFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceBufferDeviceAddressFeatures::initialize(const VkPhysicalDeviceBufferDeviceAddressFeatures* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bufferDeviceAddress = in_struct->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = in_struct->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = in_struct->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceBufferDeviceAddressFeatures::initialize(const PhysicalDeviceBufferDeviceAddressFeatures* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bufferDeviceAddress = copy_src->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferDeviceAddressInfo::BufferDeviceAddressInfo(const VkBufferDeviceAddressInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferDeviceAddressInfo::BufferDeviceAddressInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO), pNext(nullptr), buffer() {}

BufferDeviceAddressInfo::BufferDeviceAddressInfo(const BufferDeviceAddressInfo& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferDeviceAddressInfo& BufferDeviceAddressInfo::operator=(const BufferDeviceAddressInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferDeviceAddressInfo::~BufferDeviceAddressInfo() { FreePnextChain(pNext); }

void BufferDeviceAddressInfo::initialize(const VkBufferDeviceAddressInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferDeviceAddressInfo::initialize(const BufferDeviceAddressInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferOpaqueCaptureAddressCreateInfo::BufferOpaqueCaptureAddressCreateInfo(const VkBufferOpaqueCaptureAddressCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureAddress(in_struct->opaqueCaptureAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferOpaqueCaptureAddressCreateInfo::BufferOpaqueCaptureAddressCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO), pNext(nullptr), opaqueCaptureAddress() {}

BufferOpaqueCaptureAddressCreateInfo::BufferOpaqueCaptureAddressCreateInfo(const BufferOpaqueCaptureAddressCreateInfo& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferOpaqueCaptureAddressCreateInfo& BufferOpaqueCaptureAddressCreateInfo::operator=(
    const BufferOpaqueCaptureAddressCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferOpaqueCaptureAddressCreateInfo::~BufferOpaqueCaptureAddressCreateInfo() { FreePnextChain(pNext); }

void BufferOpaqueCaptureAddressCreateInfo::initialize(const VkBufferOpaqueCaptureAddressCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureAddress = in_struct->opaqueCaptureAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferOpaqueCaptureAddressCreateInfo::initialize(const BufferOpaqueCaptureAddressCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureAddress = copy_src->opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryOpaqueCaptureAddressAllocateInfo::MemoryOpaqueCaptureAddressAllocateInfo(
    const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureAddress(in_struct->opaqueCaptureAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryOpaqueCaptureAddressAllocateInfo::MemoryOpaqueCaptureAddressAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO), pNext(nullptr), opaqueCaptureAddress() {}

MemoryOpaqueCaptureAddressAllocateInfo::MemoryOpaqueCaptureAddressAllocateInfo(
    const MemoryOpaqueCaptureAddressAllocateInfo& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryOpaqueCaptureAddressAllocateInfo& MemoryOpaqueCaptureAddressAllocateInfo::operator=(
    const MemoryOpaqueCaptureAddressAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryOpaqueCaptureAddressAllocateInfo::~MemoryOpaqueCaptureAddressAllocateInfo() { FreePnextChain(pNext); }

void MemoryOpaqueCaptureAddressAllocateInfo::initialize(const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureAddress = in_struct->opaqueCaptureAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryOpaqueCaptureAddressAllocateInfo::initialize(const MemoryOpaqueCaptureAddressAllocateInfo* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureAddress = copy_src->opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceMemoryOpaqueCaptureAddressInfo::DeviceMemoryOpaqueCaptureAddressInfo(const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceMemoryOpaqueCaptureAddressInfo::DeviceMemoryOpaqueCaptureAddressInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO), pNext(nullptr), memory() {}

DeviceMemoryOpaqueCaptureAddressInfo::DeviceMemoryOpaqueCaptureAddressInfo(const DeviceMemoryOpaqueCaptureAddressInfo& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceMemoryOpaqueCaptureAddressInfo& DeviceMemoryOpaqueCaptureAddressInfo::operator=(
    const DeviceMemoryOpaqueCaptureAddressInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceMemoryOpaqueCaptureAddressInfo::~DeviceMemoryOpaqueCaptureAddressInfo() { FreePnextChain(pNext); }

void DeviceMemoryOpaqueCaptureAddressInfo::initialize(const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceMemoryOpaqueCaptureAddressInfo::initialize(const DeviceMemoryOpaqueCaptureAddressInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkan13Features::PhysicalDeviceVulkan13Features(const VkPhysicalDeviceVulkan13Features* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      robustImageAccess(in_struct->robustImageAccess),
      inlineUniformBlock(in_struct->inlineUniformBlock),
      descriptorBindingInlineUniformBlockUpdateAfterBind(in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind),
      pipelineCreationCacheControl(in_struct->pipelineCreationCacheControl),
      privateData(in_struct->privateData),
      shaderDemoteToHelperInvocation(in_struct->shaderDemoteToHelperInvocation),
      shaderTerminateInvocation(in_struct->shaderTerminateInvocation),
      subgroupSizeControl(in_struct->subgroupSizeControl),
      computeFullSubgroups(in_struct->computeFullSubgroups),
      synchronization2(in_struct->synchronization2),
      textureCompressionASTC_HDR(in_struct->textureCompressionASTC_HDR),
      shaderZeroInitializeWorkgroupMemory(in_struct->shaderZeroInitializeWorkgroupMemory),
      dynamicRendering(in_struct->dynamicRendering),
      shaderIntegerDotProduct(in_struct->shaderIntegerDotProduct),
      maintenance4(in_struct->maintenance4) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVulkan13Features::PhysicalDeviceVulkan13Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES),
      pNext(nullptr),
      robustImageAccess(),
      inlineUniformBlock(),
      descriptorBindingInlineUniformBlockUpdateAfterBind(),
      pipelineCreationCacheControl(),
      privateData(),
      shaderDemoteToHelperInvocation(),
      shaderTerminateInvocation(),
      subgroupSizeControl(),
      computeFullSubgroups(),
      synchronization2(),
      textureCompressionASTC_HDR(),
      shaderZeroInitializeWorkgroupMemory(),
      dynamicRendering(),
      shaderIntegerDotProduct(),
      maintenance4() {}

PhysicalDeviceVulkan13Features::PhysicalDeviceVulkan13Features(const PhysicalDeviceVulkan13Features& copy_src) {
    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    privateData = copy_src.privateData;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    synchronization2 = copy_src.synchronization2;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src.dynamicRendering;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVulkan13Features& PhysicalDeviceVulkan13Features::operator=(const PhysicalDeviceVulkan13Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    privateData = copy_src.privateData;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    synchronization2 = copy_src.synchronization2;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src.dynamicRendering;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVulkan13Features::~PhysicalDeviceVulkan13Features() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan13Features::initialize(const VkPhysicalDeviceVulkan13Features* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustImageAccess = in_struct->robustImageAccess;
    inlineUniformBlock = in_struct->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = in_struct->pipelineCreationCacheControl;
    privateData = in_struct->privateData;
    shaderDemoteToHelperInvocation = in_struct->shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = in_struct->shaderTerminateInvocation;
    subgroupSizeControl = in_struct->subgroupSizeControl;
    computeFullSubgroups = in_struct->computeFullSubgroups;
    synchronization2 = in_struct->synchronization2;
    textureCompressionASTC_HDR = in_struct->textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = in_struct->shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = in_struct->dynamicRendering;
    shaderIntegerDotProduct = in_struct->shaderIntegerDotProduct;
    maintenance4 = in_struct->maintenance4;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVulkan13Features::initialize(const PhysicalDeviceVulkan13Features* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustImageAccess = copy_src->robustImageAccess;
    inlineUniformBlock = copy_src->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src->pipelineCreationCacheControl;
    privateData = copy_src->privateData;
    shaderDemoteToHelperInvocation = copy_src->shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src->shaderTerminateInvocation;
    subgroupSizeControl = copy_src->subgroupSizeControl;
    computeFullSubgroups = copy_src->computeFullSubgroups;
    synchronization2 = copy_src->synchronization2;
    textureCompressionASTC_HDR = copy_src->textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src->shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src->dynamicRendering;
    shaderIntegerDotProduct = copy_src->shaderIntegerDotProduct;
    maintenance4 = copy_src->maintenance4;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVulkan13Properties::PhysicalDeviceVulkan13Properties(const VkPhysicalDeviceVulkan13Properties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minSubgroupSize(in_struct->minSubgroupSize),
      maxSubgroupSize(in_struct->maxSubgroupSize),
      maxComputeWorkgroupSubgroups(in_struct->maxComputeWorkgroupSubgroups),
      requiredSubgroupSizeStages(in_struct->requiredSubgroupSizeStages),
      maxInlineUniformBlockSize(in_struct->maxInlineUniformBlockSize),
      maxPerStageDescriptorInlineUniformBlocks(in_struct->maxPerStageDescriptorInlineUniformBlocks),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks),
      maxDescriptorSetInlineUniformBlocks(in_struct->maxDescriptorSetInlineUniformBlocks),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks),
      maxInlineUniformTotalSize(in_struct->maxInlineUniformTotalSize),
      integerDotProduct8BitUnsignedAccelerated(in_struct->integerDotProduct8BitUnsignedAccelerated),
      integerDotProduct8BitSignedAccelerated(in_struct->integerDotProduct8BitSignedAccelerated),
      integerDotProduct8BitMixedSignednessAccelerated(in_struct->integerDotProduct8BitMixedSignednessAccelerated),
      integerDotProduct4x8BitPackedUnsignedAccelerated(in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated),
      integerDotProduct4x8BitPackedSignedAccelerated(in_struct->integerDotProduct4x8BitPackedSignedAccelerated),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated),
      integerDotProduct16BitUnsignedAccelerated(in_struct->integerDotProduct16BitUnsignedAccelerated),
      integerDotProduct16BitSignedAccelerated(in_struct->integerDotProduct16BitSignedAccelerated),
      integerDotProduct16BitMixedSignednessAccelerated(in_struct->integerDotProduct16BitMixedSignednessAccelerated),
      integerDotProduct32BitUnsignedAccelerated(in_struct->integerDotProduct32BitUnsignedAccelerated),
      integerDotProduct32BitSignedAccelerated(in_struct->integerDotProduct32BitSignedAccelerated),
      integerDotProduct32BitMixedSignednessAccelerated(in_struct->integerDotProduct32BitMixedSignednessAccelerated),
      integerDotProduct64BitUnsignedAccelerated(in_struct->integerDotProduct64BitUnsignedAccelerated),
      integerDotProduct64BitSignedAccelerated(in_struct->integerDotProduct64BitSignedAccelerated),
      integerDotProduct64BitMixedSignednessAccelerated(in_struct->integerDotProduct64BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated),
      storageTexelBufferOffsetAlignmentBytes(in_struct->storageTexelBufferOffsetAlignmentBytes),
      storageTexelBufferOffsetSingleTexelAlignment(in_struct->storageTexelBufferOffsetSingleTexelAlignment),
      uniformTexelBufferOffsetAlignmentBytes(in_struct->uniformTexelBufferOffsetAlignmentBytes),
      uniformTexelBufferOffsetSingleTexelAlignment(in_struct->uniformTexelBufferOffsetSingleTexelAlignment),
      maxBufferSize(in_struct->maxBufferSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVulkan13Properties::PhysicalDeviceVulkan13Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES),
      pNext(nullptr),
      minSubgroupSize(),
      maxSubgroupSize(),
      maxComputeWorkgroupSubgroups(),
      requiredSubgroupSizeStages(),
      maxInlineUniformBlockSize(),
      maxPerStageDescriptorInlineUniformBlocks(),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(),
      maxDescriptorSetInlineUniformBlocks(),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(),
      maxInlineUniformTotalSize(),
      integerDotProduct8BitUnsignedAccelerated(),
      integerDotProduct8BitSignedAccelerated(),
      integerDotProduct8BitMixedSignednessAccelerated(),
      integerDotProduct4x8BitPackedUnsignedAccelerated(),
      integerDotProduct4x8BitPackedSignedAccelerated(),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(),
      integerDotProduct16BitUnsignedAccelerated(),
      integerDotProduct16BitSignedAccelerated(),
      integerDotProduct16BitMixedSignednessAccelerated(),
      integerDotProduct32BitUnsignedAccelerated(),
      integerDotProduct32BitSignedAccelerated(),
      integerDotProduct32BitMixedSignednessAccelerated(),
      integerDotProduct64BitUnsignedAccelerated(),
      integerDotProduct64BitSignedAccelerated(),
      integerDotProduct64BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(),
      storageTexelBufferOffsetAlignmentBytes(),
      storageTexelBufferOffsetSingleTexelAlignment(),
      uniformTexelBufferOffsetAlignmentBytes(),
      uniformTexelBufferOffsetSingleTexelAlignment(),
      maxBufferSize() {}

PhysicalDeviceVulkan13Properties::PhysicalDeviceVulkan13Properties(const PhysicalDeviceVulkan13Properties& copy_src) {
    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src.maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVulkan13Properties& PhysicalDeviceVulkan13Properties::operator=(const PhysicalDeviceVulkan13Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src.maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVulkan13Properties::~PhysicalDeviceVulkan13Properties() { FreePnextChain(pNext); }

void PhysicalDeviceVulkan13Properties::initialize(const VkPhysicalDeviceVulkan13Properties* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minSubgroupSize = in_struct->minSubgroupSize;
    maxSubgroupSize = in_struct->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = in_struct->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = in_struct->requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = in_struct->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = in_struct->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = in_struct->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = in_struct->maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = in_struct->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = in_struct->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = in_struct->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = in_struct->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = in_struct->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = in_struct->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = in_struct->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = in_struct->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = in_struct->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = in_struct->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = in_struct->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = in_struct->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = in_struct->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = in_struct->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = in_struct->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = in_struct->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = in_struct->uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = in_struct->maxBufferSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVulkan13Properties::initialize(const PhysicalDeviceVulkan13Properties* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minSubgroupSize = copy_src->minSubgroupSize;
    maxSubgroupSize = copy_src->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src->requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src->maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src->uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src->maxBufferSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineCreationFeedbackCreateInfo::PipelineCreationFeedbackCreateInfo(const VkPipelineCreationFeedbackCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pPipelineCreationFeedback(nullptr),
      pipelineStageCreationFeedbackCount(in_struct->pipelineStageCreationFeedbackCount),
      pPipelineStageCreationFeedbacks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*in_struct->pPipelineCreationFeedback);
    }

    if (in_struct->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[in_struct->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)in_struct->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * in_struct->pipelineStageCreationFeedbackCount);
    }
}

PipelineCreationFeedbackCreateInfo::PipelineCreationFeedbackCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO),
      pNext(nullptr),
      pPipelineCreationFeedback(nullptr),
      pipelineStageCreationFeedbackCount(),
      pPipelineStageCreationFeedbacks(nullptr) {}

PipelineCreationFeedbackCreateInfo::PipelineCreationFeedbackCreateInfo(const PipelineCreationFeedbackCreateInfo& copy_src) {
    sType = copy_src.sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src.pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src.pPipelineCreationFeedback);
    }

    if (copy_src.pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src.pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src.pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src.pipelineStageCreationFeedbackCount);
    }
}

PipelineCreationFeedbackCreateInfo& PipelineCreationFeedbackCreateInfo::operator=(
    const PipelineCreationFeedbackCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src.pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src.pPipelineCreationFeedback);
    }

    if (copy_src.pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src.pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src.pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src.pipelineStageCreationFeedbackCount);
    }

    return *this;
}

PipelineCreationFeedbackCreateInfo::~PipelineCreationFeedbackCreateInfo() {
    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);
}

void PipelineCreationFeedbackCreateInfo::initialize(const VkPipelineCreationFeedbackCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = in_struct->pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*in_struct->pPipelineCreationFeedback);
    }

    if (in_struct->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[in_struct->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)in_struct->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * in_struct->pipelineStageCreationFeedbackCount);
    }
}

void PipelineCreationFeedbackCreateInfo::initialize(const PipelineCreationFeedbackCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src->pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src->pPipelineCreationFeedback);
    }

    if (copy_src->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src->pipelineStageCreationFeedbackCount);
    }
}

PhysicalDeviceShaderTerminateInvocationFeatures::PhysicalDeviceShaderTerminateInvocationFeatures(
    const VkPhysicalDeviceShaderTerminateInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderTerminateInvocation(in_struct->shaderTerminateInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderTerminateInvocationFeatures::PhysicalDeviceShaderTerminateInvocationFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES), pNext(nullptr), shaderTerminateInvocation() {}

PhysicalDeviceShaderTerminateInvocationFeatures::PhysicalDeviceShaderTerminateInvocationFeatures(
    const PhysicalDeviceShaderTerminateInvocationFeatures& copy_src) {
    sType = copy_src.sType;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderTerminateInvocationFeatures& PhysicalDeviceShaderTerminateInvocationFeatures::operator=(
    const PhysicalDeviceShaderTerminateInvocationFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderTerminateInvocationFeatures::~PhysicalDeviceShaderTerminateInvocationFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceShaderTerminateInvocationFeatures::initialize(const VkPhysicalDeviceShaderTerminateInvocationFeatures* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderTerminateInvocation = in_struct->shaderTerminateInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderTerminateInvocationFeatures::initialize(const PhysicalDeviceShaderTerminateInvocationFeatures* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderTerminateInvocation = copy_src->shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceToolProperties::PhysicalDeviceToolProperties(const VkPhysicalDeviceToolProperties* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), purposes(in_struct->purposes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = in_struct->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = in_struct->layer[i];
    }
}

PhysicalDeviceToolProperties::PhysicalDeviceToolProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES), pNext(nullptr), purposes() {}

PhysicalDeviceToolProperties::PhysicalDeviceToolProperties(const PhysicalDeviceToolProperties& copy_src) {
    sType = copy_src.sType;
    purposes = copy_src.purposes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src.version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src.layer[i];
    }
}

PhysicalDeviceToolProperties& PhysicalDeviceToolProperties::operator=(const PhysicalDeviceToolProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    purposes = copy_src.purposes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src.version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src.layer[i];
    }

    return *this;
}

PhysicalDeviceToolProperties::~PhysicalDeviceToolProperties() { FreePnextChain(pNext); }

void PhysicalDeviceToolProperties::initialize(const VkPhysicalDeviceToolProperties* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    purposes = in_struct->purposes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = in_struct->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = in_struct->layer[i];
    }
}

void PhysicalDeviceToolProperties::initialize(const PhysicalDeviceToolProperties* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    purposes = copy_src->purposes;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src->layer[i];
    }
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::PhysicalDeviceShaderDemoteToHelperInvocationFeatures(
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderDemoteToHelperInvocation(in_struct->shaderDemoteToHelperInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::PhysicalDeviceShaderDemoteToHelperInvocationFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES),
      pNext(nullptr),
      shaderDemoteToHelperInvocation() {}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::PhysicalDeviceShaderDemoteToHelperInvocationFeatures(
    const PhysicalDeviceShaderDemoteToHelperInvocationFeatures& copy_src) {
    sType = copy_src.sType;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures& PhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator=(
    const PhysicalDeviceShaderDemoteToHelperInvocationFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::~PhysicalDeviceShaderDemoteToHelperInvocationFeatures() {
    FreePnextChain(pNext);
}

void PhysicalDeviceShaderDemoteToHelperInvocationFeatures::initialize(
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderDemoteToHelperInvocation = in_struct->shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderDemoteToHelperInvocationFeatures::initialize(
    const PhysicalDeviceShaderDemoteToHelperInvocationFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderDemoteToHelperInvocation = copy_src->shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePrivateDataFeatures::PhysicalDevicePrivateDataFeatures(const VkPhysicalDevicePrivateDataFeatures* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), privateData(in_struct->privateData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePrivateDataFeatures::PhysicalDevicePrivateDataFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES), pNext(nullptr), privateData() {}

PhysicalDevicePrivateDataFeatures::PhysicalDevicePrivateDataFeatures(const PhysicalDevicePrivateDataFeatures& copy_src) {
    sType = copy_src.sType;
    privateData = copy_src.privateData;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePrivateDataFeatures& PhysicalDevicePrivateDataFeatures::operator=(const PhysicalDevicePrivateDataFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    privateData = copy_src.privateData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePrivateDataFeatures::~PhysicalDevicePrivateDataFeatures() { FreePnextChain(pNext); }

void PhysicalDevicePrivateDataFeatures::initialize(const VkPhysicalDevicePrivateDataFeatures* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    privateData = in_struct->privateData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePrivateDataFeatures::initialize(const PhysicalDevicePrivateDataFeatures* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    privateData = copy_src->privateData;
    pNext = SafePnextCopy(copy_src->pNext);
}

DevicePrivateDataCreateInfo::DevicePrivateDataCreateInfo(const VkDevicePrivateDataCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), privateDataSlotRequestCount(in_struct->privateDataSlotRequestCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DevicePrivateDataCreateInfo::DevicePrivateDataCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO), pNext(nullptr), privateDataSlotRequestCount() {}

DevicePrivateDataCreateInfo::DevicePrivateDataCreateInfo(const DevicePrivateDataCreateInfo& copy_src) {
    sType = copy_src.sType;
    privateDataSlotRequestCount = copy_src.privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

DevicePrivateDataCreateInfo& DevicePrivateDataCreateInfo::operator=(const DevicePrivateDataCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    privateDataSlotRequestCount = copy_src.privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DevicePrivateDataCreateInfo::~DevicePrivateDataCreateInfo() { FreePnextChain(pNext); }

void DevicePrivateDataCreateInfo::initialize(const VkDevicePrivateDataCreateInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    privateDataSlotRequestCount = in_struct->privateDataSlotRequestCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DevicePrivateDataCreateInfo::initialize(const DevicePrivateDataCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    privateDataSlotRequestCount = copy_src->privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PrivateDataSlotCreateInfo::PrivateDataSlotCreateInfo(const VkPrivateDataSlotCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PrivateDataSlotCreateInfo::PrivateDataSlotCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO), pNext(nullptr), flags() {}

PrivateDataSlotCreateInfo::PrivateDataSlotCreateInfo(const PrivateDataSlotCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PrivateDataSlotCreateInfo& PrivateDataSlotCreateInfo::operator=(const PrivateDataSlotCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PrivateDataSlotCreateInfo::~PrivateDataSlotCreateInfo() { FreePnextChain(pNext); }

void PrivateDataSlotCreateInfo::initialize(const VkPrivateDataSlotCreateInfo* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PrivateDataSlotCreateInfo::initialize(const PrivateDataSlotCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePipelineCreationCacheControlFeatures::PhysicalDevicePipelineCreationCacheControlFeatures(
    const VkPhysicalDevicePipelineCreationCacheControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pipelineCreationCacheControl(in_struct->pipelineCreationCacheControl) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineCreationCacheControlFeatures::PhysicalDevicePipelineCreationCacheControlFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES),
      pNext(nullptr),
      pipelineCreationCacheControl() {}

PhysicalDevicePipelineCreationCacheControlFeatures::PhysicalDevicePipelineCreationCacheControlFeatures(
    const PhysicalDevicePipelineCreationCacheControlFeatures& copy_src) {
    sType = copy_src.sType;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineCreationCacheControlFeatures& PhysicalDevicePipelineCreationCacheControlFeatures::operator=(
    const PhysicalDevicePipelineCreationCacheControlFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineCreationCacheControlFeatures::~PhysicalDevicePipelineCreationCacheControlFeatures() { FreePnextChain(pNext); }

void PhysicalDevicePipelineCreationCacheControlFeatures::initialize(
    const VkPhysicalDevicePipelineCreationCacheControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineCreationCacheControl = in_struct->pipelineCreationCacheControl;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineCreationCacheControlFeatures::initialize(
    const PhysicalDevicePipelineCreationCacheControlFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineCreationCacheControl = copy_src->pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryBarrier2::MemoryBarrier2(const VkMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryBarrier2::MemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_MEMORY_BARRIER_2), pNext(nullptr), srcStageMask(), srcAccessMask(), dstStageMask(), dstAccessMask() {}

MemoryBarrier2::MemoryBarrier2(const MemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryBarrier2& MemoryBarrier2::operator=(const MemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryBarrier2::~MemoryBarrier2() { FreePnextChain(pNext); }

void MemoryBarrier2::initialize(const VkMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryBarrier2::initialize(const MemoryBarrier2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferMemoryBarrier2::BufferMemoryBarrier2(const VkBufferMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      buffer(in_struct->buffer),
      offset(in_struct->offset),
      size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferMemoryBarrier2::BufferMemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2),
      pNext(nullptr),
      srcStageMask(),
      srcAccessMask(),
      dstStageMask(),
      dstAccessMask(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      buffer(),
      offset(),
      size() {}

BufferMemoryBarrier2::BufferMemoryBarrier2(const BufferMemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferMemoryBarrier2& BufferMemoryBarrier2::operator=(const BufferMemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferMemoryBarrier2::~BufferMemoryBarrier2() { FreePnextChain(pNext); }

void BufferMemoryBarrier2::initialize(const VkBufferMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferMemoryBarrier2::initialize(const BufferMemoryBarrier2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

ImageMemoryBarrier2::ImageMemoryBarrier2(const VkImageMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      image(in_struct->image),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageMemoryBarrier2::ImageMemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2),
      pNext(nullptr),
      srcStageMask(),
      srcAccessMask(),
      dstStageMask(),
      dstAccessMask(),
      oldLayout(),
      newLayout(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      image(),
      subresourceRange() {}

ImageMemoryBarrier2::ImageMemoryBarrier2(const ImageMemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageMemoryBarrier2& ImageMemoryBarrier2::operator=(const ImageMemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageMemoryBarrier2::~ImageMemoryBarrier2() { FreePnextChain(pNext); }

void ImageMemoryBarrier2::initialize(const VkImageMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageMemoryBarrier2::initialize(const ImageMemoryBarrier2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    image = copy_src->image;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

DependencyInfo::DependencyInfo(const VkDependencyInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      dependencyFlags(in_struct->dependencyFlags),
      memoryBarrierCount(in_struct->memoryBarrierCount),
      pMemoryBarriers(nullptr),
      bufferMemoryBarrierCount(in_struct->bufferMemoryBarrierCount),
      pBufferMemoryBarriers(nullptr),
      imageMemoryBarrierCount(in_struct->imageMemoryBarrierCount),
      pImageMemoryBarriers(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (memoryBarrierCount && in_struct->pMemoryBarriers) {
        pMemoryBarriers = new MemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&in_struct->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && in_struct->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new BufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&in_struct->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && in_struct->pImageMemoryBarriers) {
        pImageMemoryBarriers = new ImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&in_struct->pImageMemoryBarriers[i]);
        }
    }
}

DependencyInfo::DependencyInfo()
    : sType(VK_STRUCTURE_TYPE_DEPENDENCY_INFO),
      pNext(nullptr),
      dependencyFlags(),
      memoryBarrierCount(),
      pMemoryBarriers(nullptr),
      bufferMemoryBarrierCount(),
      pBufferMemoryBarriers(nullptr),
      imageMemoryBarrierCount(),
      pImageMemoryBarriers(nullptr) {}

DependencyInfo::DependencyInfo(const DependencyInfo& copy_src) {
    sType = copy_src.sType;
    dependencyFlags = copy_src.dependencyFlags;
    memoryBarrierCount = copy_src.memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src.bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src.imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (memoryBarrierCount && copy_src.pMemoryBarriers) {
        pMemoryBarriers = new MemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src.pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src.pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new BufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src.pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src.pImageMemoryBarriers) {
        pImageMemoryBarriers = new ImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src.pImageMemoryBarriers[i]);
        }
    }
}

DependencyInfo& DependencyInfo::operator=(const DependencyInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dependencyFlags = copy_src.dependencyFlags;
    memoryBarrierCount = copy_src.memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src.bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src.imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (memoryBarrierCount && copy_src.pMemoryBarriers) {
        pMemoryBarriers = new MemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src.pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src.pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new BufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src.pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src.pImageMemoryBarriers) {
        pImageMemoryBarriers = new ImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src.pImageMemoryBarriers[i]);
        }
    }

    return *this;
}

DependencyInfo::~DependencyInfo() {
    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);
}

void DependencyInfo::initialize(const VkDependencyInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dependencyFlags = in_struct->dependencyFlags;
    memoryBarrierCount = in_struct->memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = in_struct->bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = in_struct->imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (memoryBarrierCount && in_struct->pMemoryBarriers) {
        pMemoryBarriers = new MemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&in_struct->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && in_struct->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new BufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&in_struct->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && in_struct->pImageMemoryBarriers) {
        pImageMemoryBarriers = new ImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&in_struct->pImageMemoryBarriers[i]);
        }
    }
}

void DependencyInfo::initialize(const DependencyInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dependencyFlags = copy_src->dependencyFlags;
    memoryBarrierCount = copy_src->memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src->bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src->imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (memoryBarrierCount && copy_src->pMemoryBarriers) {
        pMemoryBarriers = new MemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new BufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src->pImageMemoryBarriers) {
        pImageMemoryBarriers = new ImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src->pImageMemoryBarriers[i]);
        }
    }
}

SemaphoreSubmitInfo::SemaphoreSubmitInfo(const VkSemaphoreSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      semaphore(in_struct->semaphore),
      value(in_struct->value),
      stageMask(in_struct->stageMask),
      deviceIndex(in_struct->deviceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreSubmitInfo::SemaphoreSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO), pNext(nullptr), semaphore(), value(), stageMask(), deviceIndex() {}

SemaphoreSubmitInfo::SemaphoreSubmitInfo(const SemaphoreSubmitInfo& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    stageMask = copy_src.stageMask;
    deviceIndex = copy_src.deviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreSubmitInfo& SemaphoreSubmitInfo::operator=(const SemaphoreSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    stageMask = copy_src.stageMask;
    deviceIndex = copy_src.deviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreSubmitInfo::~SemaphoreSubmitInfo() { FreePnextChain(pNext); }

void SemaphoreSubmitInfo::initialize(const VkSemaphoreSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    value = in_struct->value;
    stageMask = in_struct->stageMask;
    deviceIndex = in_struct->deviceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreSubmitInfo::initialize(const SemaphoreSubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    value = copy_src->value;
    stageMask = copy_src->stageMask;
    deviceIndex = copy_src->deviceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferSubmitInfo::CommandBufferSubmitInfo(const VkCommandBufferSubmitInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), commandBuffer(in_struct->commandBuffer), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CommandBufferSubmitInfo::CommandBufferSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO), pNext(nullptr), commandBuffer(), deviceMask() {}

CommandBufferSubmitInfo::CommandBufferSubmitInfo(const CommandBufferSubmitInfo& copy_src) {
    sType = copy_src.sType;
    commandBuffer = copy_src.commandBuffer;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

CommandBufferSubmitInfo& CommandBufferSubmitInfo::operator=(const CommandBufferSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    commandBuffer = copy_src.commandBuffer;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CommandBufferSubmitInfo::~CommandBufferSubmitInfo() { FreePnextChain(pNext); }

void CommandBufferSubmitInfo::initialize(const VkCommandBufferSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    commandBuffer = in_struct->commandBuffer;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CommandBufferSubmitInfo::initialize(const CommandBufferSubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    commandBuffer = copy_src->commandBuffer;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

SubmitInfo2::SubmitInfo2(const VkSubmitInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      waitSemaphoreInfoCount(in_struct->waitSemaphoreInfoCount),
      pWaitSemaphoreInfos(nullptr),
      commandBufferInfoCount(in_struct->commandBufferInfoCount),
      pCommandBufferInfos(nullptr),
      signalSemaphoreInfoCount(in_struct->signalSemaphoreInfoCount),
      pSignalSemaphoreInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreInfoCount && in_struct->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new SemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&in_struct->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && in_struct->pCommandBufferInfos) {
        pCommandBufferInfos = new CommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&in_struct->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && in_struct->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new SemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&in_struct->pSignalSemaphoreInfos[i]);
        }
    }
}

SubmitInfo2::SubmitInfo2()
    : sType(VK_STRUCTURE_TYPE_SUBMIT_INFO_2),
      pNext(nullptr),
      flags(),
      waitSemaphoreInfoCount(),
      pWaitSemaphoreInfos(nullptr),
      commandBufferInfoCount(),
      pCommandBufferInfos(nullptr),
      signalSemaphoreInfoCount(),
      pSignalSemaphoreInfos(nullptr) {}

SubmitInfo2::SubmitInfo2(const SubmitInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    waitSemaphoreInfoCount = copy_src.waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src.commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src.signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreInfoCount && copy_src.pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new SemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src.pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src.pCommandBufferInfos) {
        pCommandBufferInfos = new CommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src.pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src.pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new SemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src.pSignalSemaphoreInfos[i]);
        }
    }
}

SubmitInfo2& SubmitInfo2::operator=(const SubmitInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    waitSemaphoreInfoCount = copy_src.waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src.commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src.signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreInfoCount && copy_src.pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new SemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src.pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src.pCommandBufferInfos) {
        pCommandBufferInfos = new CommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src.pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src.pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new SemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src.pSignalSemaphoreInfos[i]);
        }
    }

    return *this;
}

SubmitInfo2::~SubmitInfo2() {
    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);
}

void SubmitInfo2::initialize(const VkSubmitInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    waitSemaphoreInfoCount = in_struct->waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = in_struct->commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = in_struct->signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreInfoCount && in_struct->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new SemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&in_struct->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && in_struct->pCommandBufferInfos) {
        pCommandBufferInfos = new CommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&in_struct->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && in_struct->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new SemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&in_struct->pSignalSemaphoreInfos[i]);
        }
    }
}

void SubmitInfo2::initialize(const SubmitInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    waitSemaphoreInfoCount = copy_src->waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src->commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src->signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreInfoCount && copy_src->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new SemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src->pCommandBufferInfos) {
        pCommandBufferInfos = new CommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new SemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src->pSignalSemaphoreInfos[i]);
        }
    }
}

PhysicalDeviceSynchronization2Features::PhysicalDeviceSynchronization2Features(
    const VkPhysicalDeviceSynchronization2Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), synchronization2(in_struct->synchronization2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSynchronization2Features::PhysicalDeviceSynchronization2Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES), pNext(nullptr), synchronization2() {}

PhysicalDeviceSynchronization2Features::PhysicalDeviceSynchronization2Features(
    const PhysicalDeviceSynchronization2Features& copy_src) {
    sType = copy_src.sType;
    synchronization2 = copy_src.synchronization2;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSynchronization2Features& PhysicalDeviceSynchronization2Features::operator=(
    const PhysicalDeviceSynchronization2Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    synchronization2 = copy_src.synchronization2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSynchronization2Features::~PhysicalDeviceSynchronization2Features() { FreePnextChain(pNext); }

void PhysicalDeviceSynchronization2Features::initialize(const VkPhysicalDeviceSynchronization2Features* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    synchronization2 = in_struct->synchronization2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSynchronization2Features::initialize(const PhysicalDeviceSynchronization2Features* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    synchronization2 = copy_src->synchronization2;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderZeroInitializeWorkgroupMemory(in_struct->shaderZeroInitializeWorkgroupMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES),
      pNext(nullptr),
      shaderZeroInitializeWorkgroupMemory() {}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(
    const PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& copy_src) {
    sType = copy_src.sType;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator=(
    const PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::~PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures() {
    FreePnextChain(pNext);
}

void PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::initialize(
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderZeroInitializeWorkgroupMemory = in_struct->shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::initialize(
    const PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderZeroInitializeWorkgroupMemory = copy_src->shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceImageRobustnessFeatures::PhysicalDeviceImageRobustnessFeatures(
    const VkPhysicalDeviceImageRobustnessFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), robustImageAccess(in_struct->robustImageAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceImageRobustnessFeatures::PhysicalDeviceImageRobustnessFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES), pNext(nullptr), robustImageAccess() {}

PhysicalDeviceImageRobustnessFeatures::PhysicalDeviceImageRobustnessFeatures(
    const PhysicalDeviceImageRobustnessFeatures& copy_src) {
    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceImageRobustnessFeatures& PhysicalDeviceImageRobustnessFeatures::operator=(
    const PhysicalDeviceImageRobustnessFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceImageRobustnessFeatures::~PhysicalDeviceImageRobustnessFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceImageRobustnessFeatures::initialize(const VkPhysicalDeviceImageRobustnessFeatures* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustImageAccess = in_struct->robustImageAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceImageRobustnessFeatures::initialize(const PhysicalDeviceImageRobustnessFeatures* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustImageAccess = copy_src->robustImageAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferCopy2::BufferCopy2(const VkBufferCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), srcOffset(in_struct->srcOffset), dstOffset(in_struct->dstOffset), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferCopy2::BufferCopy2() : sType(VK_STRUCTURE_TYPE_BUFFER_COPY_2), pNext(nullptr), srcOffset(), dstOffset(), size() {}

BufferCopy2::BufferCopy2(const BufferCopy2& copy_src) {
    sType = copy_src.sType;
    srcOffset = copy_src.srcOffset;
    dstOffset = copy_src.dstOffset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferCopy2& BufferCopy2::operator=(const BufferCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcOffset = copy_src.srcOffset;
    dstOffset = copy_src.dstOffset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferCopy2::~BufferCopy2() { FreePnextChain(pNext); }

void BufferCopy2::initialize(const VkBufferCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcOffset = in_struct->srcOffset;
    dstOffset = in_struct->dstOffset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferCopy2::initialize(const BufferCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcOffset = copy_src->srcOffset;
    dstOffset = copy_src->dstOffset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyBufferInfo2::CopyBufferInfo2(const VkCopyBufferInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcBuffer(in_struct->srcBuffer),
      dstBuffer(in_struct->dstBuffer),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyBufferInfo2::CopyBufferInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2), pNext(nullptr), srcBuffer(), dstBuffer(), regionCount(), pRegions(nullptr) {}

CopyBufferInfo2::CopyBufferInfo2(const CopyBufferInfo2& copy_src) {
    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyBufferInfo2& CopyBufferInfo2::operator=(const CopyBufferInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyBufferInfo2::~CopyBufferInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyBufferInfo2::initialize(const VkCopyBufferInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcBuffer = in_struct->srcBuffer;
    dstBuffer = in_struct->dstBuffer;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyBufferInfo2::initialize(const CopyBufferInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcBuffer = copy_src->srcBuffer;
    dstBuffer = copy_src->dstBuffer;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new BufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

ImageCopy2::ImageCopy2(const VkImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcSubresource(in_struct->srcSubresource),
      srcOffset(in_struct->srcOffset),
      dstSubresource(in_struct->dstSubresource),
      dstOffset(in_struct->dstOffset),
      extent(in_struct->extent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageCopy2::ImageCopy2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COPY_2),
      pNext(nullptr),
      srcSubresource(),
      srcOffset(),
      dstSubresource(),
      dstOffset(),
      extent() {}

ImageCopy2::ImageCopy2(const ImageCopy2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageCopy2& ImageCopy2::operator=(const ImageCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageCopy2::~ImageCopy2() { FreePnextChain(pNext); }

void ImageCopy2::initialize(const VkImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    srcOffset = in_struct->srcOffset;
    dstSubresource = in_struct->dstSubresource;
    dstOffset = in_struct->dstOffset;
    extent = in_struct->extent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageCopy2::initialize(const ImageCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    srcOffset = copy_src->srcOffset;
    dstSubresource = copy_src->dstSubresource;
    dstOffset = copy_src->dstOffset;
    extent = copy_src->extent;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyImageInfo2::CopyImageInfo2(const VkCopyImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
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

CopyImageInfo2::CopyImageInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

CopyImageInfo2::CopyImageInfo2(const CopyImageInfo2& copy_src) {
    sType = copy_src.sType;
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

CopyImageInfo2& CopyImageInfo2::operator=(const CopyImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
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

CopyImageInfo2::~CopyImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyImageInfo2::initialize(const VkCopyImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
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

void CopyImageInfo2::initialize(const CopyImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
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

BufferImageCopy2::BufferImageCopy2(const VkBufferImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      bufferOffset(in_struct->bufferOffset),
      bufferRowLength(in_struct->bufferRowLength),
      bufferImageHeight(in_struct->bufferImageHeight),
      imageSubresource(in_struct->imageSubresource),
      imageOffset(in_struct->imageOffset),
      imageExtent(in_struct->imageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferImageCopy2::BufferImageCopy2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2),
      pNext(nullptr),
      bufferOffset(),
      bufferRowLength(),
      bufferImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

BufferImageCopy2::BufferImageCopy2(const BufferImageCopy2& copy_src) {
    sType = copy_src.sType;
    bufferOffset = copy_src.bufferOffset;
    bufferRowLength = copy_src.bufferRowLength;
    bufferImageHeight = copy_src.bufferImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferImageCopy2& BufferImageCopy2::operator=(const BufferImageCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    bufferOffset = copy_src.bufferOffset;
    bufferRowLength = copy_src.bufferRowLength;
    bufferImageHeight = copy_src.bufferImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferImageCopy2::~BufferImageCopy2() { FreePnextChain(pNext); }

void BufferImageCopy2::initialize(const VkBufferImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bufferOffset = in_struct->bufferOffset;
    bufferRowLength = in_struct->bufferRowLength;
    bufferImageHeight = in_struct->bufferImageHeight;
    imageSubresource = in_struct->imageSubresource;
    imageOffset = in_struct->imageOffset;
    imageExtent = in_struct->imageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferImageCopy2::initialize(const BufferImageCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bufferOffset = copy_src->bufferOffset;
    bufferRowLength = copy_src->bufferRowLength;
    bufferImageHeight = copy_src->bufferImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyBufferToImageInfo2::CopyBufferToImageInfo2(const VkCopyBufferToImageInfo2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcBuffer(in_struct->srcBuffer),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyBufferToImageInfo2::CopyBufferToImageInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2),
      pNext(nullptr),
      srcBuffer(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

CopyBufferToImageInfo2::CopyBufferToImageInfo2(const CopyBufferToImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyBufferToImageInfo2& CopyBufferToImageInfo2::operator=(const CopyBufferToImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyBufferToImageInfo2::~CopyBufferToImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyBufferToImageInfo2::initialize(const VkCopyBufferToImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcBuffer = in_struct->srcBuffer;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyBufferToImageInfo2::initialize(const CopyBufferToImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcBuffer = copy_src->srcBuffer;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

CopyImageToBufferInfo2::CopyImageToBufferInfo2(const VkCopyImageToBufferInfo2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstBuffer(in_struct->dstBuffer),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

CopyImageToBufferInfo2::CopyImageToBufferInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstBuffer(),
      regionCount(),
      pRegions(nullptr) {}

CopyImageToBufferInfo2::CopyImageToBufferInfo2(const CopyImageToBufferInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

CopyImageToBufferInfo2& CopyImageToBufferInfo2::operator=(const CopyImageToBufferInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

CopyImageToBufferInfo2::~CopyImageToBufferInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void CopyImageToBufferInfo2::initialize(const VkCopyImageToBufferInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstBuffer = in_struct->dstBuffer;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void CopyImageToBufferInfo2::initialize(const CopyImageToBufferInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstBuffer = copy_src->dstBuffer;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new BufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

ImageBlit2::ImageBlit2(const VkImageBlit2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), srcSubresource(in_struct->srcSubresource), dstSubresource(in_struct->dstSubresource) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = in_struct->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = in_struct->dstOffsets[i];
    }
}

ImageBlit2::ImageBlit2() : sType(VK_STRUCTURE_TYPE_IMAGE_BLIT_2), pNext(nullptr), srcSubresource(), dstSubresource() {}

ImageBlit2::ImageBlit2(const ImageBlit2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    dstSubresource = copy_src.dstSubresource;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src.srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src.dstOffsets[i];
    }
}

ImageBlit2& ImageBlit2::operator=(const ImageBlit2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    dstSubresource = copy_src.dstSubresource;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src.srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src.dstOffsets[i];
    }

    return *this;
}

ImageBlit2::~ImageBlit2() { FreePnextChain(pNext); }

void ImageBlit2::initialize(const VkImageBlit2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    dstSubresource = in_struct->dstSubresource;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = in_struct->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = in_struct->dstOffsets[i];
    }
}

void ImageBlit2::initialize(const ImageBlit2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    dstSubresource = copy_src->dstSubresource;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src->dstOffsets[i];
    }
}

BlitImageInfo2::BlitImageInfo2(const VkBlitImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr),
      filter(in_struct->filter) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

BlitImageInfo2::BlitImageInfo2()
    : sType(VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr),
      filter() {}

BlitImageInfo2::BlitImageInfo2(const BlitImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    filter = copy_src.filter;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

BlitImageInfo2& BlitImageInfo2::operator=(const BlitImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    filter = copy_src.filter;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

BlitImageInfo2::~BlitImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void BlitImageInfo2::initialize(const VkBlitImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    filter = in_struct->filter;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void BlitImageInfo2::initialize(const BlitImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    filter = copy_src->filter;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new ImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

ImageResolve2::ImageResolve2(const VkImageResolve2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcSubresource(in_struct->srcSubresource),
      srcOffset(in_struct->srcOffset),
      dstSubresource(in_struct->dstSubresource),
      dstOffset(in_struct->dstOffset),
      extent(in_struct->extent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageResolve2::ImageResolve2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2),
      pNext(nullptr),
      srcSubresource(),
      srcOffset(),
      dstSubresource(),
      dstOffset(),
      extent() {}

ImageResolve2::ImageResolve2(const ImageResolve2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageResolve2& ImageResolve2::operator=(const ImageResolve2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageResolve2::~ImageResolve2() { FreePnextChain(pNext); }

void ImageResolve2::initialize(const VkImageResolve2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    srcOffset = in_struct->srcOffset;
    dstSubresource = in_struct->dstSubresource;
    dstOffset = in_struct->dstOffset;
    extent = in_struct->extent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageResolve2::initialize(const ImageResolve2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    srcOffset = copy_src->srcOffset;
    dstSubresource = copy_src->dstSubresource;
    dstOffset = copy_src->dstOffset;
    extent = copy_src->extent;
    pNext = SafePnextCopy(copy_src->pNext);
}

ResolveImageInfo2::ResolveImageInfo2(const VkResolveImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType),
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
        pRegions = new ImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

ResolveImageInfo2::ResolveImageInfo2()
    : sType(VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

ResolveImageInfo2::ResolveImageInfo2(const ResolveImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

ResolveImageInfo2& ResolveImageInfo2::operator=(const ResolveImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new ImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

ResolveImageInfo2::~ResolveImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void ResolveImageInfo2::initialize(const VkResolveImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new ImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void ResolveImageInfo2::initialize(const ResolveImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new ImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

PhysicalDeviceSubgroupSizeControlFeatures::PhysicalDeviceSubgroupSizeControlFeatures(
    const VkPhysicalDeviceSubgroupSizeControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subgroupSizeControl(in_struct->subgroupSizeControl),
      computeFullSubgroups(in_struct->computeFullSubgroups) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubgroupSizeControlFeatures::PhysicalDeviceSubgroupSizeControlFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES),
      pNext(nullptr),
      subgroupSizeControl(),
      computeFullSubgroups() {}

PhysicalDeviceSubgroupSizeControlFeatures::PhysicalDeviceSubgroupSizeControlFeatures(
    const PhysicalDeviceSubgroupSizeControlFeatures& copy_src) {
    sType = copy_src.sType;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubgroupSizeControlFeatures& PhysicalDeviceSubgroupSizeControlFeatures::operator=(
    const PhysicalDeviceSubgroupSizeControlFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubgroupSizeControlFeatures::~PhysicalDeviceSubgroupSizeControlFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceSubgroupSizeControlFeatures::initialize(const VkPhysicalDeviceSubgroupSizeControlFeatures* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subgroupSizeControl = in_struct->subgroupSizeControl;
    computeFullSubgroups = in_struct->computeFullSubgroups;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubgroupSizeControlFeatures::initialize(const PhysicalDeviceSubgroupSizeControlFeatures* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subgroupSizeControl = copy_src->subgroupSizeControl;
    computeFullSubgroups = copy_src->computeFullSubgroups;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSubgroupSizeControlProperties::PhysicalDeviceSubgroupSizeControlProperties(
    const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minSubgroupSize(in_struct->minSubgroupSize),
      maxSubgroupSize(in_struct->maxSubgroupSize),
      maxComputeWorkgroupSubgroups(in_struct->maxComputeWorkgroupSubgroups),
      requiredSubgroupSizeStages(in_struct->requiredSubgroupSizeStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSubgroupSizeControlProperties::PhysicalDeviceSubgroupSizeControlProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES),
      pNext(nullptr),
      minSubgroupSize(),
      maxSubgroupSize(),
      maxComputeWorkgroupSubgroups(),
      requiredSubgroupSizeStages() {}

PhysicalDeviceSubgroupSizeControlProperties::PhysicalDeviceSubgroupSizeControlProperties(
    const PhysicalDeviceSubgroupSizeControlProperties& copy_src) {
    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSubgroupSizeControlProperties& PhysicalDeviceSubgroupSizeControlProperties::operator=(
    const PhysicalDeviceSubgroupSizeControlProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSubgroupSizeControlProperties::~PhysicalDeviceSubgroupSizeControlProperties() { FreePnextChain(pNext); }

void PhysicalDeviceSubgroupSizeControlProperties::initialize(const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minSubgroupSize = in_struct->minSubgroupSize;
    maxSubgroupSize = in_struct->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = in_struct->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = in_struct->requiredSubgroupSizeStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSubgroupSizeControlProperties::initialize(const PhysicalDeviceSubgroupSizeControlProperties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minSubgroupSize = copy_src->minSubgroupSize;
    maxSubgroupSize = copy_src->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src->requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::PipelineShaderStageRequiredSubgroupSizeCreateInfo(
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), requiredSubgroupSize(in_struct->requiredSubgroupSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::PipelineShaderStageRequiredSubgroupSizeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO), pNext(nullptr), requiredSubgroupSize() {}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::PipelineShaderStageRequiredSubgroupSizeCreateInfo(
    const PipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src) {
    sType = copy_src.sType;
    requiredSubgroupSize = copy_src.requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo& PipelineShaderStageRequiredSubgroupSizeCreateInfo::operator=(
    const PipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    requiredSubgroupSize = copy_src.requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::~PipelineShaderStageRequiredSubgroupSizeCreateInfo() { FreePnextChain(pNext); }

void PipelineShaderStageRequiredSubgroupSizeCreateInfo::initialize(
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    requiredSubgroupSize = in_struct->requiredSubgroupSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineShaderStageRequiredSubgroupSizeCreateInfo::initialize(
    const PipelineShaderStageRequiredSubgroupSizeCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    requiredSubgroupSize = copy_src->requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceInlineUniformBlockFeatures::PhysicalDeviceInlineUniformBlockFeatures(
    const VkPhysicalDeviceInlineUniformBlockFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      inlineUniformBlock(in_struct->inlineUniformBlock),
      descriptorBindingInlineUniformBlockUpdateAfterBind(in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceInlineUniformBlockFeatures::PhysicalDeviceInlineUniformBlockFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES),
      pNext(nullptr),
      inlineUniformBlock(),
      descriptorBindingInlineUniformBlockUpdateAfterBind() {}

PhysicalDeviceInlineUniformBlockFeatures::PhysicalDeviceInlineUniformBlockFeatures(
    const PhysicalDeviceInlineUniformBlockFeatures& copy_src) {
    sType = copy_src.sType;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceInlineUniformBlockFeatures& PhysicalDeviceInlineUniformBlockFeatures::operator=(
    const PhysicalDeviceInlineUniformBlockFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceInlineUniformBlockFeatures::~PhysicalDeviceInlineUniformBlockFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceInlineUniformBlockFeatures::initialize(const VkPhysicalDeviceInlineUniformBlockFeatures* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    inlineUniformBlock = in_struct->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceInlineUniformBlockFeatures::initialize(const PhysicalDeviceInlineUniformBlockFeatures* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    inlineUniformBlock = copy_src->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceInlineUniformBlockProperties::PhysicalDeviceInlineUniformBlockProperties(
    const VkPhysicalDeviceInlineUniformBlockProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxInlineUniformBlockSize(in_struct->maxInlineUniformBlockSize),
      maxPerStageDescriptorInlineUniformBlocks(in_struct->maxPerStageDescriptorInlineUniformBlocks),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks),
      maxDescriptorSetInlineUniformBlocks(in_struct->maxDescriptorSetInlineUniformBlocks),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceInlineUniformBlockProperties::PhysicalDeviceInlineUniformBlockProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES),
      pNext(nullptr),
      maxInlineUniformBlockSize(),
      maxPerStageDescriptorInlineUniformBlocks(),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(),
      maxDescriptorSetInlineUniformBlocks(),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks() {}

PhysicalDeviceInlineUniformBlockProperties::PhysicalDeviceInlineUniformBlockProperties(
    const PhysicalDeviceInlineUniformBlockProperties& copy_src) {
    sType = copy_src.sType;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceInlineUniformBlockProperties& PhysicalDeviceInlineUniformBlockProperties::operator=(
    const PhysicalDeviceInlineUniformBlockProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceInlineUniformBlockProperties::~PhysicalDeviceInlineUniformBlockProperties() { FreePnextChain(pNext); }

void PhysicalDeviceInlineUniformBlockProperties::initialize(const VkPhysicalDeviceInlineUniformBlockProperties* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxInlineUniformBlockSize = in_struct->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = in_struct->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = in_struct->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceInlineUniformBlockProperties::initialize(const PhysicalDeviceInlineUniformBlockProperties* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxInlineUniformBlockSize = copy_src->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src->pNext);
}

WriteDescriptorSetInlineUniformBlock::WriteDescriptorSetInlineUniformBlock(const VkWriteDescriptorSetInlineUniformBlock* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
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

WriteDescriptorSetInlineUniformBlock::WriteDescriptorSetInlineUniformBlock()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK), pNext(nullptr), dataSize(), pData(nullptr) {}

WriteDescriptorSetInlineUniformBlock::WriteDescriptorSetInlineUniformBlock(const WriteDescriptorSetInlineUniformBlock& copy_src) {
    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

WriteDescriptorSetInlineUniformBlock& WriteDescriptorSetInlineUniformBlock::operator=(
    const WriteDescriptorSetInlineUniformBlock& copy_src) {
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

WriteDescriptorSetInlineUniformBlock::~WriteDescriptorSetInlineUniformBlock() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void WriteDescriptorSetInlineUniformBlock::initialize(const VkWriteDescriptorSetInlineUniformBlock* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
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

void WriteDescriptorSetInlineUniformBlock::initialize(const WriteDescriptorSetInlineUniformBlock* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dataSize = copy_src->dataSize;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

DescriptorPoolInlineUniformBlockCreateInfo::DescriptorPoolInlineUniformBlockCreateInfo(
    const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxInlineUniformBlockBindings(in_struct->maxInlineUniformBlockBindings) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DescriptorPoolInlineUniformBlockCreateInfo::DescriptorPoolInlineUniformBlockCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO), pNext(nullptr), maxInlineUniformBlockBindings() {}

DescriptorPoolInlineUniformBlockCreateInfo::DescriptorPoolInlineUniformBlockCreateInfo(
    const DescriptorPoolInlineUniformBlockCreateInfo& copy_src) {
    sType = copy_src.sType;
    maxInlineUniformBlockBindings = copy_src.maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src.pNext);
}

DescriptorPoolInlineUniformBlockCreateInfo& DescriptorPoolInlineUniformBlockCreateInfo::operator=(
    const DescriptorPoolInlineUniformBlockCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxInlineUniformBlockBindings = copy_src.maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DescriptorPoolInlineUniformBlockCreateInfo::~DescriptorPoolInlineUniformBlockCreateInfo() { FreePnextChain(pNext); }

void DescriptorPoolInlineUniformBlockCreateInfo::initialize(const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxInlineUniformBlockBindings = in_struct->maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DescriptorPoolInlineUniformBlockCreateInfo::initialize(const DescriptorPoolInlineUniformBlockCreateInfo* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxInlineUniformBlockBindings = copy_src->maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::PhysicalDeviceTextureCompressionASTCHDRFeatures(
    const VkPhysicalDeviceTextureCompressionASTCHDRFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), textureCompressionASTC_HDR(in_struct->textureCompressionASTC_HDR) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::PhysicalDeviceTextureCompressionASTCHDRFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES),
      pNext(nullptr),
      textureCompressionASTC_HDR() {}

PhysicalDeviceTextureCompressionASTCHDRFeatures::PhysicalDeviceTextureCompressionASTCHDRFeatures(
    const PhysicalDeviceTextureCompressionASTCHDRFeatures& copy_src) {
    sType = copy_src.sType;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures& PhysicalDeviceTextureCompressionASTCHDRFeatures::operator=(
    const PhysicalDeviceTextureCompressionASTCHDRFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::~PhysicalDeviceTextureCompressionASTCHDRFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceTextureCompressionASTCHDRFeatures::initialize(const VkPhysicalDeviceTextureCompressionASTCHDRFeatures* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    textureCompressionASTC_HDR = in_struct->textureCompressionASTC_HDR;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTextureCompressionASTCHDRFeatures::initialize(const PhysicalDeviceTextureCompressionASTCHDRFeatures* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    textureCompressionASTC_HDR = copy_src->textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderingAttachmentInfo::RenderingAttachmentInfo(const VkRenderingAttachmentInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageView(in_struct->imageView),
      imageLayout(in_struct->imageLayout),
      resolveMode(in_struct->resolveMode),
      resolveImageView(in_struct->resolveImageView),
      resolveImageLayout(in_struct->resolveImageLayout),
      loadOp(in_struct->loadOp),
      storeOp(in_struct->storeOp),
      clearValue(in_struct->clearValue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderingAttachmentInfo::RenderingAttachmentInfo()
    : sType(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO),
      pNext(nullptr),
      imageView(),
      imageLayout(),
      resolveMode(),
      resolveImageView(),
      resolveImageLayout(),
      loadOp(),
      storeOp(),
      clearValue() {}

RenderingAttachmentInfo::RenderingAttachmentInfo(const RenderingAttachmentInfo& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    resolveMode = copy_src.resolveMode;
    resolveImageView = copy_src.resolveImageView;
    resolveImageLayout = copy_src.resolveImageLayout;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    clearValue = copy_src.clearValue;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderingAttachmentInfo& RenderingAttachmentInfo::operator=(const RenderingAttachmentInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    resolveMode = copy_src.resolveMode;
    resolveImageView = copy_src.resolveImageView;
    resolveImageLayout = copy_src.resolveImageLayout;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    clearValue = copy_src.clearValue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderingAttachmentInfo::~RenderingAttachmentInfo() { FreePnextChain(pNext); }

void RenderingAttachmentInfo::initialize(const VkRenderingAttachmentInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    imageLayout = in_struct->imageLayout;
    resolveMode = in_struct->resolveMode;
    resolveImageView = in_struct->resolveImageView;
    resolveImageLayout = in_struct->resolveImageLayout;
    loadOp = in_struct->loadOp;
    storeOp = in_struct->storeOp;
    clearValue = in_struct->clearValue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderingAttachmentInfo::initialize(const RenderingAttachmentInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    imageLayout = copy_src->imageLayout;
    resolveMode = copy_src->resolveMode;
    resolveImageView = copy_src->resolveImageView;
    resolveImageLayout = copy_src->resolveImageLayout;
    loadOp = copy_src->loadOp;
    storeOp = copy_src->storeOp;
    clearValue = copy_src->clearValue;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderingInfo::RenderingInfo(const VkRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      renderArea(in_struct->renderArea),
      layerCount(in_struct->layerCount),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pDepthAttachment(nullptr),
      pStencilAttachment(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new RenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (in_struct->pDepthAttachment) pDepthAttachment = new RenderingAttachmentInfo(in_struct->pDepthAttachment);
    if (in_struct->pStencilAttachment) pStencilAttachment = new RenderingAttachmentInfo(in_struct->pStencilAttachment);
}

RenderingInfo::RenderingInfo()
    : sType(VK_STRUCTURE_TYPE_RENDERING_INFO),
      pNext(nullptr),
      flags(),
      renderArea(),
      layerCount(),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pDepthAttachment(nullptr),
      pStencilAttachment(nullptr) {}

RenderingInfo::RenderingInfo(const RenderingInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    renderArea = copy_src.renderArea;
    layerCount = copy_src.layerCount;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new RenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (copy_src.pDepthAttachment) pDepthAttachment = new RenderingAttachmentInfo(*copy_src.pDepthAttachment);
    if (copy_src.pStencilAttachment) pStencilAttachment = new RenderingAttachmentInfo(*copy_src.pStencilAttachment);
}

RenderingInfo& RenderingInfo::operator=(const RenderingInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    renderArea = copy_src.renderArea;
    layerCount = copy_src.layerCount;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new RenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (copy_src.pDepthAttachment) pDepthAttachment = new RenderingAttachmentInfo(*copy_src.pDepthAttachment);
    if (copy_src.pStencilAttachment) pStencilAttachment = new RenderingAttachmentInfo(*copy_src.pStencilAttachment);

    return *this;
}

RenderingInfo::~RenderingInfo() {
    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);
}

void RenderingInfo::initialize(const VkRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    renderArea = in_struct->renderArea;
    layerCount = in_struct->layerCount;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new RenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (in_struct->pDepthAttachment) pDepthAttachment = new RenderingAttachmentInfo(in_struct->pDepthAttachment);
    if (in_struct->pStencilAttachment) pStencilAttachment = new RenderingAttachmentInfo(in_struct->pStencilAttachment);
}

void RenderingInfo::initialize(const RenderingInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    renderArea = copy_src->renderArea;
    layerCount = copy_src->layerCount;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (colorAttachmentCount && copy_src->pColorAttachments) {
        pColorAttachments = new RenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src->pColorAttachments[i]);
        }
    }
    if (copy_src->pDepthAttachment) pDepthAttachment = new RenderingAttachmentInfo(*copy_src->pDepthAttachment);
    if (copy_src->pStencilAttachment) pStencilAttachment = new RenderingAttachmentInfo(*copy_src->pStencilAttachment);
}

PipelineRenderingCreateInfo::PipelineRenderingCreateInfo(const VkPipelineRenderingCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(in_struct->depthAttachmentFormat),
      stencilAttachmentFormat(in_struct->stencilAttachmentFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    bool custom_init = copy_state && copy_state->init;
    if (custom_init) {
        custom_init =
            copy_state->init(reinterpret_cast<VkBaseOutStructure*>(this), reinterpret_cast<const VkBaseOutStructure*>(in_struct));
    }
    if (!custom_init) {
        // The custom iniitalization was not used, so do the regular initialization
        if (in_struct->pColorAttachmentFormats) {
            pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
            memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
                   sizeof(VkFormat) * in_struct->colorAttachmentCount);
        }
    }
}

PipelineRenderingCreateInfo::PipelineRenderingCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO),
      pNext(nullptr),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(),
      stencilAttachmentFormat() {}

PipelineRenderingCreateInfo::PipelineRenderingCreateInfo(const PipelineRenderingCreateInfo& copy_src) {
    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }
}

PipelineRenderingCreateInfo& PipelineRenderingCreateInfo::operator=(const PipelineRenderingCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }

    return *this;
}

PipelineRenderingCreateInfo::~PipelineRenderingCreateInfo() {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
}

void PipelineRenderingCreateInfo::initialize(const VkPipelineRenderingCreateInfo* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = in_struct->depthAttachmentFormat;
    stencilAttachmentFormat = in_struct->stencilAttachmentFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    bool custom_init = copy_state && copy_state->init;
    if (custom_init) {
        custom_init =
            copy_state->init(reinterpret_cast<VkBaseOutStructure*>(this), reinterpret_cast<const VkBaseOutStructure*>(in_struct));
    }
    if (!custom_init) {
        // The custom iniitalization was not used, so do the regular initialization
        if (in_struct->pColorAttachmentFormats) {
            pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
            memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
                   sizeof(VkFormat) * in_struct->colorAttachmentCount);
        }
    }
}

void PipelineRenderingCreateInfo::initialize(const PipelineRenderingCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src->depthAttachmentFormat;
    stencilAttachmentFormat = copy_src->stencilAttachmentFormat;

    if (copy_src->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src->pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src->colorAttachmentCount);
    }
}

PhysicalDeviceDynamicRenderingFeatures::PhysicalDeviceDynamicRenderingFeatures(
    const VkPhysicalDeviceDynamicRenderingFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), dynamicRendering(in_struct->dynamicRendering) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDynamicRenderingFeatures::PhysicalDeviceDynamicRenderingFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES), pNext(nullptr), dynamicRendering() {}

PhysicalDeviceDynamicRenderingFeatures::PhysicalDeviceDynamicRenderingFeatures(
    const PhysicalDeviceDynamicRenderingFeatures& copy_src) {
    sType = copy_src.sType;
    dynamicRendering = copy_src.dynamicRendering;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDynamicRenderingFeatures& PhysicalDeviceDynamicRenderingFeatures::operator=(
    const PhysicalDeviceDynamicRenderingFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicRendering = copy_src.dynamicRendering;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDynamicRenderingFeatures::~PhysicalDeviceDynamicRenderingFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceDynamicRenderingFeatures::initialize(const VkPhysicalDeviceDynamicRenderingFeatures* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicRendering = in_struct->dynamicRendering;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDynamicRenderingFeatures::initialize(const PhysicalDeviceDynamicRenderingFeatures* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicRendering = copy_src->dynamicRendering;
    pNext = SafePnextCopy(copy_src->pNext);
}

CommandBufferInheritanceRenderingInfo::CommandBufferInheritanceRenderingInfo(
    const VkCommandBufferInheritanceRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(in_struct->depthAttachmentFormat),
      stencilAttachmentFormat(in_struct->stencilAttachmentFormat),
      rasterizationSamples(in_struct->rasterizationSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

CommandBufferInheritanceRenderingInfo::CommandBufferInheritanceRenderingInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO),
      pNext(nullptr),
      flags(),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(),
      stencilAttachmentFormat(),
      rasterizationSamples() {}

CommandBufferInheritanceRenderingInfo::CommandBufferInheritanceRenderingInfo(
    const CommandBufferInheritanceRenderingInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }
}

CommandBufferInheritanceRenderingInfo& CommandBufferInheritanceRenderingInfo::operator=(
    const CommandBufferInheritanceRenderingInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }

    return *this;
}

CommandBufferInheritanceRenderingInfo::~CommandBufferInheritanceRenderingInfo() {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
}

void CommandBufferInheritanceRenderingInfo::initialize(const VkCommandBufferInheritanceRenderingInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = in_struct->depthAttachmentFormat;
    stencilAttachmentFormat = in_struct->stencilAttachmentFormat;
    rasterizationSamples = in_struct->rasterizationSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

void CommandBufferInheritanceRenderingInfo::initialize(const CommandBufferInheritanceRenderingInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src->depthAttachmentFormat;
    stencilAttachmentFormat = copy_src->stencilAttachmentFormat;
    rasterizationSamples = copy_src->rasterizationSamples;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src->pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src->colorAttachmentCount);
    }
}

PhysicalDeviceShaderIntegerDotProductFeatures::PhysicalDeviceShaderIntegerDotProductFeatures(
    const VkPhysicalDeviceShaderIntegerDotProductFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderIntegerDotProduct(in_struct->shaderIntegerDotProduct) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderIntegerDotProductFeatures::PhysicalDeviceShaderIntegerDotProductFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES), pNext(nullptr), shaderIntegerDotProduct() {}

PhysicalDeviceShaderIntegerDotProductFeatures::PhysicalDeviceShaderIntegerDotProductFeatures(
    const PhysicalDeviceShaderIntegerDotProductFeatures& copy_src) {
    sType = copy_src.sType;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderIntegerDotProductFeatures& PhysicalDeviceShaderIntegerDotProductFeatures::operator=(
    const PhysicalDeviceShaderIntegerDotProductFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderIntegerDotProductFeatures::~PhysicalDeviceShaderIntegerDotProductFeatures() { FreePnextChain(pNext); }

void PhysicalDeviceShaderIntegerDotProductFeatures::initialize(const VkPhysicalDeviceShaderIntegerDotProductFeatures* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderIntegerDotProduct = in_struct->shaderIntegerDotProduct;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderIntegerDotProductFeatures::initialize(const PhysicalDeviceShaderIntegerDotProductFeatures* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderIntegerDotProduct = copy_src->shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderIntegerDotProductProperties::PhysicalDeviceShaderIntegerDotProductProperties(
    const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      integerDotProduct8BitUnsignedAccelerated(in_struct->integerDotProduct8BitUnsignedAccelerated),
      integerDotProduct8BitSignedAccelerated(in_struct->integerDotProduct8BitSignedAccelerated),
      integerDotProduct8BitMixedSignednessAccelerated(in_struct->integerDotProduct8BitMixedSignednessAccelerated),
      integerDotProduct4x8BitPackedUnsignedAccelerated(in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated),
      integerDotProduct4x8BitPackedSignedAccelerated(in_struct->integerDotProduct4x8BitPackedSignedAccelerated),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated),
      integerDotProduct16BitUnsignedAccelerated(in_struct->integerDotProduct16BitUnsignedAccelerated),
      integerDotProduct16BitSignedAccelerated(in_struct->integerDotProduct16BitSignedAccelerated),
      integerDotProduct16BitMixedSignednessAccelerated(in_struct->integerDotProduct16BitMixedSignednessAccelerated),
      integerDotProduct32BitUnsignedAccelerated(in_struct->integerDotProduct32BitUnsignedAccelerated),
      integerDotProduct32BitSignedAccelerated(in_struct->integerDotProduct32BitSignedAccelerated),
      integerDotProduct32BitMixedSignednessAccelerated(in_struct->integerDotProduct32BitMixedSignednessAccelerated),
      integerDotProduct64BitUnsignedAccelerated(in_struct->integerDotProduct64BitUnsignedAccelerated),
      integerDotProduct64BitSignedAccelerated(in_struct->integerDotProduct64BitSignedAccelerated),
      integerDotProduct64BitMixedSignednessAccelerated(in_struct->integerDotProduct64BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderIntegerDotProductProperties::PhysicalDeviceShaderIntegerDotProductProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES),
      pNext(nullptr),
      integerDotProduct8BitUnsignedAccelerated(),
      integerDotProduct8BitSignedAccelerated(),
      integerDotProduct8BitMixedSignednessAccelerated(),
      integerDotProduct4x8BitPackedUnsignedAccelerated(),
      integerDotProduct4x8BitPackedSignedAccelerated(),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(),
      integerDotProduct16BitUnsignedAccelerated(),
      integerDotProduct16BitSignedAccelerated(),
      integerDotProduct16BitMixedSignednessAccelerated(),
      integerDotProduct32BitUnsignedAccelerated(),
      integerDotProduct32BitSignedAccelerated(),
      integerDotProduct32BitMixedSignednessAccelerated(),
      integerDotProduct64BitUnsignedAccelerated(),
      integerDotProduct64BitSignedAccelerated(),
      integerDotProduct64BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated() {}

PhysicalDeviceShaderIntegerDotProductProperties::PhysicalDeviceShaderIntegerDotProductProperties(
    const PhysicalDeviceShaderIntegerDotProductProperties& copy_src) {
    sType = copy_src.sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderIntegerDotProductProperties& PhysicalDeviceShaderIntegerDotProductProperties::operator=(
    const PhysicalDeviceShaderIntegerDotProductProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderIntegerDotProductProperties::~PhysicalDeviceShaderIntegerDotProductProperties() { FreePnextChain(pNext); }

void PhysicalDeviceShaderIntegerDotProductProperties::initialize(const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    integerDotProduct8BitUnsignedAccelerated = in_struct->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = in_struct->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = in_struct->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = in_struct->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = in_struct->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = in_struct->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = in_struct->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = in_struct->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = in_struct->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = in_struct->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = in_struct->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = in_struct->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = in_struct->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderIntegerDotProductProperties::initialize(const PhysicalDeviceShaderIntegerDotProductProperties* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceTexelBufferAlignmentProperties::PhysicalDeviceTexelBufferAlignmentProperties(
    const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageTexelBufferOffsetAlignmentBytes(in_struct->storageTexelBufferOffsetAlignmentBytes),
      storageTexelBufferOffsetSingleTexelAlignment(in_struct->storageTexelBufferOffsetSingleTexelAlignment),
      uniformTexelBufferOffsetAlignmentBytes(in_struct->uniformTexelBufferOffsetAlignmentBytes),
      uniformTexelBufferOffsetSingleTexelAlignment(in_struct->uniformTexelBufferOffsetSingleTexelAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceTexelBufferAlignmentProperties::PhysicalDeviceTexelBufferAlignmentProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES),
      pNext(nullptr),
      storageTexelBufferOffsetAlignmentBytes(),
      storageTexelBufferOffsetSingleTexelAlignment(),
      uniformTexelBufferOffsetAlignmentBytes(),
      uniformTexelBufferOffsetSingleTexelAlignment() {}

PhysicalDeviceTexelBufferAlignmentProperties::PhysicalDeviceTexelBufferAlignmentProperties(
    const PhysicalDeviceTexelBufferAlignmentProperties& copy_src) {
    sType = copy_src.sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceTexelBufferAlignmentProperties& PhysicalDeviceTexelBufferAlignmentProperties::operator=(
    const PhysicalDeviceTexelBufferAlignmentProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceTexelBufferAlignmentProperties::~PhysicalDeviceTexelBufferAlignmentProperties() { FreePnextChain(pNext); }

void PhysicalDeviceTexelBufferAlignmentProperties::initialize(const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageTexelBufferOffsetAlignmentBytes = in_struct->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = in_struct->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = in_struct->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = in_struct->uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceTexelBufferAlignmentProperties::initialize(const PhysicalDeviceTexelBufferAlignmentProperties* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src->uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

FormatProperties3::FormatProperties3(const VkFormatProperties3* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType),
      linearTilingFeatures(in_struct->linearTilingFeatures),
      optimalTilingFeatures(in_struct->optimalTilingFeatures),
      bufferFeatures(in_struct->bufferFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FormatProperties3::FormatProperties3()
    : sType(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3),
      pNext(nullptr),
      linearTilingFeatures(),
      optimalTilingFeatures(),
      bufferFeatures() {}

FormatProperties3::FormatProperties3(const FormatProperties3& copy_src) {
    sType = copy_src.sType;
    linearTilingFeatures = copy_src.linearTilingFeatures;
    optimalTilingFeatures = copy_src.optimalTilingFeatures;
    bufferFeatures = copy_src.bufferFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

FormatProperties3& FormatProperties3::operator=(const FormatProperties3& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    linearTilingFeatures = copy_src.linearTilingFeatures;
    optimalTilingFeatures = copy_src.optimalTilingFeatures;
    bufferFeatures = copy_src.bufferFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FormatProperties3::~FormatProperties3() { FreePnextChain(pNext); }

void FormatProperties3::initialize(const VkFormatProperties3* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    linearTilingFeatures = in_struct->linearTilingFeatures;
    optimalTilingFeatures = in_struct->optimalTilingFeatures;
    bufferFeatures = in_struct->bufferFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FormatProperties3::initialize(const FormatProperties3* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    linearTilingFeatures = copy_src->linearTilingFeatures;
    optimalTilingFeatures = copy_src->optimalTilingFeatures;
    bufferFeatures = copy_src->bufferFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance4Features::PhysicalDeviceMaintenance4Features(const VkPhysicalDeviceMaintenance4Features* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maintenance4(in_struct->maintenance4) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance4Features::PhysicalDeviceMaintenance4Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES), pNext(nullptr), maintenance4() {}

PhysicalDeviceMaintenance4Features::PhysicalDeviceMaintenance4Features(const PhysicalDeviceMaintenance4Features& copy_src) {
    sType = copy_src.sType;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance4Features& PhysicalDeviceMaintenance4Features::operator=(
    const PhysicalDeviceMaintenance4Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance4Features::~PhysicalDeviceMaintenance4Features() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance4Features::initialize(const VkPhysicalDeviceMaintenance4Features* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maintenance4 = in_struct->maintenance4;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance4Features::initialize(const PhysicalDeviceMaintenance4Features* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maintenance4 = copy_src->maintenance4;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance4Properties::PhysicalDeviceMaintenance4Properties(const VkPhysicalDeviceMaintenance4Properties* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), maxBufferSize(in_struct->maxBufferSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance4Properties::PhysicalDeviceMaintenance4Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES), pNext(nullptr), maxBufferSize() {}

PhysicalDeviceMaintenance4Properties::PhysicalDeviceMaintenance4Properties(const PhysicalDeviceMaintenance4Properties& copy_src) {
    sType = copy_src.sType;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance4Properties& PhysicalDeviceMaintenance4Properties::operator=(
    const PhysicalDeviceMaintenance4Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance4Properties::~PhysicalDeviceMaintenance4Properties() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance4Properties::initialize(const VkPhysicalDeviceMaintenance4Properties* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxBufferSize = in_struct->maxBufferSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance4Properties::initialize(const PhysicalDeviceMaintenance4Properties* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxBufferSize = copy_src->maxBufferSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceBufferMemoryRequirements::DeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pCreateInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCreateInfo) pCreateInfo = new BufferCreateInfo(in_struct->pCreateInfo);
}

DeviceBufferMemoryRequirements::DeviceBufferMemoryRequirements()
    : sType(VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS), pNext(nullptr), pCreateInfo(nullptr) {}

DeviceBufferMemoryRequirements::DeviceBufferMemoryRequirements(const DeviceBufferMemoryRequirements& copy_src) {
    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new BufferCreateInfo(*copy_src.pCreateInfo);
}

DeviceBufferMemoryRequirements& DeviceBufferMemoryRequirements::operator=(const DeviceBufferMemoryRequirements& copy_src) {
    if (&copy_src == this) return *this;

    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new BufferCreateInfo(*copy_src.pCreateInfo);

    return *this;
}

DeviceBufferMemoryRequirements::~DeviceBufferMemoryRequirements() {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
}

void DeviceBufferMemoryRequirements::initialize(const VkDeviceBufferMemoryRequirements* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pCreateInfo) pCreateInfo = new BufferCreateInfo(in_struct->pCreateInfo);
}

void DeviceBufferMemoryRequirements::initialize(const DeviceBufferMemoryRequirements* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pCreateInfo) pCreateInfo = new BufferCreateInfo(*copy_src->pCreateInfo);
}

DeviceImageMemoryRequirements::DeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pCreateInfo(nullptr), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCreateInfo) pCreateInfo = new ImageCreateInfo(in_struct->pCreateInfo);
}

DeviceImageMemoryRequirements::DeviceImageMemoryRequirements()
    : sType(VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS), pNext(nullptr), pCreateInfo(nullptr), planeAspect() {}

DeviceImageMemoryRequirements::DeviceImageMemoryRequirements(const DeviceImageMemoryRequirements& copy_src) {
    sType = copy_src.sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src.pCreateInfo);
}

DeviceImageMemoryRequirements& DeviceImageMemoryRequirements::operator=(const DeviceImageMemoryRequirements& copy_src) {
    if (&copy_src == this) return *this;

    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src.pCreateInfo);

    return *this;
}

DeviceImageMemoryRequirements::~DeviceImageMemoryRequirements() {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
}

void DeviceImageMemoryRequirements::initialize(const VkDeviceImageMemoryRequirements* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pCreateInfo = nullptr;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pCreateInfo) pCreateInfo = new ImageCreateInfo(in_struct->pCreateInfo);
}

void DeviceImageMemoryRequirements::initialize(const DeviceImageMemoryRequirements* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src->pCreateInfo);
}

}  // namespace safe
}  // namespace vku

// NOLINTEND
