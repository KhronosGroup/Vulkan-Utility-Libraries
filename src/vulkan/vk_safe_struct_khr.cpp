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

SwapchainCreateInfoKHR::SwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      surface(in_struct->surface),
      minImageCount(in_struct->minImageCount),
      imageFormat(in_struct->imageFormat),
      imageColorSpace(in_struct->imageColorSpace),
      imageExtent(in_struct->imageExtent),
      imageArrayLayers(in_struct->imageArrayLayers),
      imageUsage(in_struct->imageUsage),
      imageSharingMode(in_struct->imageSharingMode),
      queueFamilyIndexCount(0),
      pQueueFamilyIndices(nullptr),
      preTransform(in_struct->preTransform),
      compositeAlpha(in_struct->compositeAlpha),
      presentMode(in_struct->presentMode),
      clipped(in_struct->clipped),
      oldSwapchain(in_struct->oldSwapchain) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if ((in_struct->imageSharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

SwapchainCreateInfoKHR::SwapchainCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR),
      pNext(nullptr),
      flags(),
      surface(),
      minImageCount(),
      imageFormat(),
      imageColorSpace(),
      imageExtent(),
      imageArrayLayers(),
      imageUsage(),
      imageSharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr),
      preTransform(),
      compositeAlpha(),
      presentMode(),
      clipped(),
      oldSwapchain() {}

SwapchainCreateInfoKHR::SwapchainCreateInfoKHR(const SwapchainCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    surface = copy_src.surface;
    minImageCount = copy_src.minImageCount;
    imageFormat = copy_src.imageFormat;
    imageColorSpace = copy_src.imageColorSpace;
    imageExtent = copy_src.imageExtent;
    imageArrayLayers = copy_src.imageArrayLayers;
    imageUsage = copy_src.imageUsage;
    imageSharingMode = copy_src.imageSharingMode;
    pQueueFamilyIndices = nullptr;
    preTransform = copy_src.preTransform;
    compositeAlpha = copy_src.compositeAlpha;
    presentMode = copy_src.presentMode;
    clipped = copy_src.clipped;
    oldSwapchain = copy_src.oldSwapchain;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.imageSharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

SwapchainCreateInfoKHR& SwapchainCreateInfoKHR::operator=(const SwapchainCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    surface = copy_src.surface;
    minImageCount = copy_src.minImageCount;
    imageFormat = copy_src.imageFormat;
    imageColorSpace = copy_src.imageColorSpace;
    imageExtent = copy_src.imageExtent;
    imageArrayLayers = copy_src.imageArrayLayers;
    imageUsage = copy_src.imageUsage;
    imageSharingMode = copy_src.imageSharingMode;
    pQueueFamilyIndices = nullptr;
    preTransform = copy_src.preTransform;
    compositeAlpha = copy_src.compositeAlpha;
    presentMode = copy_src.presentMode;
    clipped = copy_src.clipped;
    oldSwapchain = copy_src.oldSwapchain;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.imageSharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }

    return *this;
}

SwapchainCreateInfoKHR::~SwapchainCreateInfoKHR() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void SwapchainCreateInfoKHR::initialize(const VkSwapchainCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    surface = in_struct->surface;
    minImageCount = in_struct->minImageCount;
    imageFormat = in_struct->imageFormat;
    imageColorSpace = in_struct->imageColorSpace;
    imageExtent = in_struct->imageExtent;
    imageArrayLayers = in_struct->imageArrayLayers;
    imageUsage = in_struct->imageUsage;
    imageSharingMode = in_struct->imageSharingMode;
    pQueueFamilyIndices = nullptr;
    preTransform = in_struct->preTransform;
    compositeAlpha = in_struct->compositeAlpha;
    presentMode = in_struct->presentMode;
    clipped = in_struct->clipped;
    oldSwapchain = in_struct->oldSwapchain;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if ((in_struct->imageSharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

void SwapchainCreateInfoKHR::initialize(const SwapchainCreateInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    surface = copy_src->surface;
    minImageCount = copy_src->minImageCount;
    imageFormat = copy_src->imageFormat;
    imageColorSpace = copy_src->imageColorSpace;
    imageExtent = copy_src->imageExtent;
    imageArrayLayers = copy_src->imageArrayLayers;
    imageUsage = copy_src->imageUsage;
    imageSharingMode = copy_src->imageSharingMode;
    pQueueFamilyIndices = nullptr;
    preTransform = copy_src->preTransform;
    compositeAlpha = copy_src->compositeAlpha;
    presentMode = copy_src->presentMode;
    clipped = copy_src->clipped;
    oldSwapchain = copy_src->oldSwapchain;
    pNext = SafePnextCopy(copy_src->pNext);

    if ((copy_src->imageSharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src->pQueueFamilyIndices,
               sizeof(uint32_t) * copy_src->queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

PresentInfoKHR::PresentInfoKHR(const VkPresentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphores(nullptr),
      swapchainCount(in_struct->swapchainCount),
      pSwapchains(nullptr),
      pImageIndices(nullptr),
      pResults(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }

    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy((void*)pImageIndices, (void*)in_struct->pImageIndices, sizeof(uint32_t) * in_struct->swapchainCount);
    }

    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy((void*)pResults, (void*)in_struct->pResults, sizeof(VkResult) * in_struct->swapchainCount);
    }
}

PresentInfoKHR::PresentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PRESENT_INFO_KHR),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphores(nullptr),
      swapchainCount(),
      pSwapchains(nullptr),
      pImageIndices(nullptr),
      pResults(nullptr) {}

PresentInfoKHR::PresentInfoKHR(const PresentInfoKHR& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = copy_src.swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (swapchainCount && copy_src.pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pSwapchains[i] = copy_src.pSwapchains[i];
        }
    }

    if (copy_src.pImageIndices) {
        pImageIndices = new uint32_t[copy_src.swapchainCount];
        memcpy((void*)pImageIndices, (void*)copy_src.pImageIndices, sizeof(uint32_t) * copy_src.swapchainCount);
    }

    if (copy_src.pResults) {
        pResults = new VkResult[copy_src.swapchainCount];
        memcpy((void*)pResults, (void*)copy_src.pResults, sizeof(VkResult) * copy_src.swapchainCount);
    }
}

PresentInfoKHR& PresentInfoKHR::operator=(const PresentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pSwapchains) delete[] pSwapchains;
    if (pImageIndices) delete[] pImageIndices;
    if (pResults) delete[] pResults;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = copy_src.swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (swapchainCount && copy_src.pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pSwapchains[i] = copy_src.pSwapchains[i];
        }
    }

    if (copy_src.pImageIndices) {
        pImageIndices = new uint32_t[copy_src.swapchainCount];
        memcpy((void*)pImageIndices, (void*)copy_src.pImageIndices, sizeof(uint32_t) * copy_src.swapchainCount);
    }

    if (copy_src.pResults) {
        pResults = new VkResult[copy_src.swapchainCount];
        memcpy((void*)pResults, (void*)copy_src.pResults, sizeof(VkResult) * copy_src.swapchainCount);
    }

    return *this;
}

PresentInfoKHR::~PresentInfoKHR() {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pSwapchains) delete[] pSwapchains;
    if (pImageIndices) delete[] pImageIndices;
    if (pResults) delete[] pResults;
    FreePnextChain(pNext);
}

void PresentInfoKHR::initialize(const VkPresentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pSwapchains) delete[] pSwapchains;
    if (pImageIndices) delete[] pImageIndices;
    if (pResults) delete[] pResults;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = in_struct->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }

    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy((void*)pImageIndices, (void*)in_struct->pImageIndices, sizeof(uint32_t) * in_struct->swapchainCount);
    }

    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy((void*)pResults, (void*)in_struct->pResults, sizeof(VkResult) * in_struct->swapchainCount);
    }
}

void PresentInfoKHR::initialize(const PresentInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = copy_src->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreCount && copy_src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && copy_src->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pSwapchains[i] = copy_src->pSwapchains[i];
        }
    }

    if (copy_src->pImageIndices) {
        pImageIndices = new uint32_t[copy_src->swapchainCount];
        memcpy((void*)pImageIndices, (void*)copy_src->pImageIndices, sizeof(uint32_t) * copy_src->swapchainCount);
    }

    if (copy_src->pResults) {
        pResults = new VkResult[copy_src->swapchainCount];
        memcpy((void*)pResults, (void*)copy_src->pResults, sizeof(VkResult) * copy_src->swapchainCount);
    }
}

ImageSwapchainCreateInfoKHR::ImageSwapchainCreateInfoKHR(const VkImageSwapchainCreateInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchain(in_struct->swapchain) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageSwapchainCreateInfoKHR::ImageSwapchainCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR), pNext(nullptr), swapchain() {}

ImageSwapchainCreateInfoKHR::ImageSwapchainCreateInfoKHR(const ImageSwapchainCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageSwapchainCreateInfoKHR& ImageSwapchainCreateInfoKHR::operator=(const ImageSwapchainCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageSwapchainCreateInfoKHR::~ImageSwapchainCreateInfoKHR() { FreePnextChain(pNext); }

void ImageSwapchainCreateInfoKHR::initialize(const VkImageSwapchainCreateInfoKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchain = in_struct->swapchain;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageSwapchainCreateInfoKHR::initialize(const ImageSwapchainCreateInfoKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchain = copy_src->swapchain;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindImageMemorySwapchainInfoKHR::BindImageMemorySwapchainInfoKHR(const VkBindImageMemorySwapchainInfoKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchain(in_struct->swapchain), imageIndex(in_struct->imageIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindImageMemorySwapchainInfoKHR::BindImageMemorySwapchainInfoKHR()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR), pNext(nullptr), swapchain(), imageIndex() {}

BindImageMemorySwapchainInfoKHR::BindImageMemorySwapchainInfoKHR(const BindImageMemorySwapchainInfoKHR& copy_src) {
    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    imageIndex = copy_src.imageIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindImageMemorySwapchainInfoKHR& BindImageMemorySwapchainInfoKHR::operator=(const BindImageMemorySwapchainInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    imageIndex = copy_src.imageIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindImageMemorySwapchainInfoKHR::~BindImageMemorySwapchainInfoKHR() { FreePnextChain(pNext); }

void BindImageMemorySwapchainInfoKHR::initialize(const VkBindImageMemorySwapchainInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchain = in_struct->swapchain;
    imageIndex = in_struct->imageIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindImageMemorySwapchainInfoKHR::initialize(const BindImageMemorySwapchainInfoKHR* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchain = copy_src->swapchain;
    imageIndex = copy_src->imageIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

AcquireNextImageInfoKHR::AcquireNextImageInfoKHR(const VkAcquireNextImageInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      swapchain(in_struct->swapchain),
      timeout(in_struct->timeout),
      semaphore(in_struct->semaphore),
      fence(in_struct->fence),
      deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AcquireNextImageInfoKHR::AcquireNextImageInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR),
      pNext(nullptr),
      swapchain(),
      timeout(),
      semaphore(),
      fence(),
      deviceMask() {}

AcquireNextImageInfoKHR::AcquireNextImageInfoKHR(const AcquireNextImageInfoKHR& copy_src) {
    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    timeout = copy_src.timeout;
    semaphore = copy_src.semaphore;
    fence = copy_src.fence;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

AcquireNextImageInfoKHR& AcquireNextImageInfoKHR::operator=(const AcquireNextImageInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchain = copy_src.swapchain;
    timeout = copy_src.timeout;
    semaphore = copy_src.semaphore;
    fence = copy_src.fence;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AcquireNextImageInfoKHR::~AcquireNextImageInfoKHR() { FreePnextChain(pNext); }

void AcquireNextImageInfoKHR::initialize(const VkAcquireNextImageInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchain = in_struct->swapchain;
    timeout = in_struct->timeout;
    semaphore = in_struct->semaphore;
    fence = in_struct->fence;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AcquireNextImageInfoKHR::initialize(const AcquireNextImageInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchain = copy_src->swapchain;
    timeout = copy_src->timeout;
    semaphore = copy_src->semaphore;
    fence = copy_src->fence;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceGroupPresentCapabilitiesKHR::DeviceGroupPresentCapabilitiesKHR(const VkDeviceGroupPresentCapabilitiesKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), modes(in_struct->modes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

DeviceGroupPresentCapabilitiesKHR::DeviceGroupPresentCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR), pNext(nullptr), modes() {}

DeviceGroupPresentCapabilitiesKHR::DeviceGroupPresentCapabilitiesKHR(const DeviceGroupPresentCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    modes = copy_src.modes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        presentMask[i] = copy_src.presentMask[i];
    }
}

DeviceGroupPresentCapabilitiesKHR& DeviceGroupPresentCapabilitiesKHR::operator=(const DeviceGroupPresentCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    modes = copy_src.modes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        presentMask[i] = copy_src.presentMask[i];
    }

    return *this;
}

DeviceGroupPresentCapabilitiesKHR::~DeviceGroupPresentCapabilitiesKHR() { FreePnextChain(pNext); }

void DeviceGroupPresentCapabilitiesKHR::initialize(const VkDeviceGroupPresentCapabilitiesKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    modes = in_struct->modes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

void DeviceGroupPresentCapabilitiesKHR::initialize(const DeviceGroupPresentCapabilitiesKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    modes = copy_src->modes;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        presentMask[i] = copy_src->presentMask[i];
    }
}

DeviceGroupPresentInfoKHR::DeviceGroupPresentInfoKHR(const VkDeviceGroupPresentInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pDeviceMasks(nullptr), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy((void*)pDeviceMasks, (void*)in_struct->pDeviceMasks, sizeof(uint32_t) * in_struct->swapchainCount);
    }
}

DeviceGroupPresentInfoKHR::DeviceGroupPresentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR), pNext(nullptr), swapchainCount(), pDeviceMasks(nullptr), mode() {}

DeviceGroupPresentInfoKHR::DeviceGroupPresentInfoKHR(const DeviceGroupPresentInfoKHR& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pDeviceMasks = nullptr;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceMasks) {
        pDeviceMasks = new uint32_t[copy_src.swapchainCount];
        memcpy((void*)pDeviceMasks, (void*)copy_src.pDeviceMasks, sizeof(uint32_t) * copy_src.swapchainCount);
    }
}

DeviceGroupPresentInfoKHR& DeviceGroupPresentInfoKHR::operator=(const DeviceGroupPresentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceMasks) delete[] pDeviceMasks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pDeviceMasks = nullptr;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceMasks) {
        pDeviceMasks = new uint32_t[copy_src.swapchainCount];
        memcpy((void*)pDeviceMasks, (void*)copy_src.pDeviceMasks, sizeof(uint32_t) * copy_src.swapchainCount);
    }

    return *this;
}

DeviceGroupPresentInfoKHR::~DeviceGroupPresentInfoKHR() {
    if (pDeviceMasks) delete[] pDeviceMasks;
    FreePnextChain(pNext);
}

void DeviceGroupPresentInfoKHR::initialize(const VkDeviceGroupPresentInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceMasks) delete[] pDeviceMasks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pDeviceMasks = nullptr;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy((void*)pDeviceMasks, (void*)in_struct->pDeviceMasks, sizeof(uint32_t) * in_struct->swapchainCount);
    }
}

void DeviceGroupPresentInfoKHR::initialize(const DeviceGroupPresentInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pDeviceMasks = nullptr;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceMasks) {
        pDeviceMasks = new uint32_t[copy_src->swapchainCount];
        memcpy((void*)pDeviceMasks, (void*)copy_src->pDeviceMasks, sizeof(uint32_t) * copy_src->swapchainCount);
    }
}

DeviceGroupSwapchainCreateInfoKHR::DeviceGroupSwapchainCreateInfoKHR(const VkDeviceGroupSwapchainCreateInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), modes(in_struct->modes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceGroupSwapchainCreateInfoKHR::DeviceGroupSwapchainCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR), pNext(nullptr), modes() {}

DeviceGroupSwapchainCreateInfoKHR::DeviceGroupSwapchainCreateInfoKHR(const DeviceGroupSwapchainCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    modes = copy_src.modes;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceGroupSwapchainCreateInfoKHR& DeviceGroupSwapchainCreateInfoKHR::operator=(const DeviceGroupSwapchainCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    modes = copy_src.modes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceGroupSwapchainCreateInfoKHR::~DeviceGroupSwapchainCreateInfoKHR() { FreePnextChain(pNext); }

void DeviceGroupSwapchainCreateInfoKHR::initialize(const VkDeviceGroupSwapchainCreateInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    modes = in_struct->modes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceGroupSwapchainCreateInfoKHR::initialize(const DeviceGroupSwapchainCreateInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    modes = copy_src->modes;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayModeCreateInfoKHR::DisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), parameters(in_struct->parameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayModeCreateInfoKHR::DisplayModeCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR), pNext(nullptr), flags(), parameters() {}

DisplayModeCreateInfoKHR::DisplayModeCreateInfoKHR(const DisplayModeCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    parameters = copy_src.parameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayModeCreateInfoKHR& DisplayModeCreateInfoKHR::operator=(const DisplayModeCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    parameters = copy_src.parameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayModeCreateInfoKHR::~DisplayModeCreateInfoKHR() { FreePnextChain(pNext); }

void DisplayModeCreateInfoKHR::initialize(const VkDisplayModeCreateInfoKHR* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    parameters = in_struct->parameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayModeCreateInfoKHR::initialize(const DisplayModeCreateInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    parameters = copy_src->parameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPropertiesKHR::DisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : display(in_struct->display),
      physicalDimensions(in_struct->physicalDimensions),
      physicalResolution(in_struct->physicalResolution),
      supportedTransforms(in_struct->supportedTransforms),
      planeReorderPossible(in_struct->planeReorderPossible),
      persistentContent(in_struct->persistentContent) {
    displayName = SafeStringCopy(in_struct->displayName);
}

DisplayPropertiesKHR::DisplayPropertiesKHR()
    : display(),
      displayName(nullptr),
      physicalDimensions(),
      physicalResolution(),
      supportedTransforms(),
      planeReorderPossible(),
      persistentContent() {}

DisplayPropertiesKHR::DisplayPropertiesKHR(const DisplayPropertiesKHR& copy_src) {
    display = copy_src.display;
    physicalDimensions = copy_src.physicalDimensions;
    physicalResolution = copy_src.physicalResolution;
    supportedTransforms = copy_src.supportedTransforms;
    planeReorderPossible = copy_src.planeReorderPossible;
    persistentContent = copy_src.persistentContent;
    displayName = SafeStringCopy(copy_src.displayName);
}

DisplayPropertiesKHR& DisplayPropertiesKHR::operator=(const DisplayPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (displayName) delete[] displayName;

    display = copy_src.display;
    physicalDimensions = copy_src.physicalDimensions;
    physicalResolution = copy_src.physicalResolution;
    supportedTransforms = copy_src.supportedTransforms;
    planeReorderPossible = copy_src.planeReorderPossible;
    persistentContent = copy_src.persistentContent;
    displayName = SafeStringCopy(copy_src.displayName);

    return *this;
}

DisplayPropertiesKHR::~DisplayPropertiesKHR() {
    if (displayName) delete[] displayName;
}

void DisplayPropertiesKHR::initialize(const VkDisplayPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (displayName) delete[] displayName;
    display = in_struct->display;
    physicalDimensions = in_struct->physicalDimensions;
    physicalResolution = in_struct->physicalResolution;
    supportedTransforms = in_struct->supportedTransforms;
    planeReorderPossible = in_struct->planeReorderPossible;
    persistentContent = in_struct->persistentContent;
    displayName = SafeStringCopy(in_struct->displayName);
}

void DisplayPropertiesKHR::initialize(const DisplayPropertiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    display = copy_src->display;
    physicalDimensions = copy_src->physicalDimensions;
    physicalResolution = copy_src->physicalResolution;
    supportedTransforms = copy_src->supportedTransforms;
    planeReorderPossible = copy_src->planeReorderPossible;
    persistentContent = copy_src->persistentContent;
    displayName = SafeStringCopy(copy_src->displayName);
}

DisplaySurfaceCreateInfoKHR::DisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      displayMode(in_struct->displayMode),
      planeIndex(in_struct->planeIndex),
      planeStackIndex(in_struct->planeStackIndex),
      transform(in_struct->transform),
      globalAlpha(in_struct->globalAlpha),
      alphaMode(in_struct->alphaMode),
      imageExtent(in_struct->imageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplaySurfaceCreateInfoKHR::DisplaySurfaceCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR),
      pNext(nullptr),
      flags(),
      displayMode(),
      planeIndex(),
      planeStackIndex(),
      transform(),
      globalAlpha(),
      alphaMode(),
      imageExtent() {}

DisplaySurfaceCreateInfoKHR::DisplaySurfaceCreateInfoKHR(const DisplaySurfaceCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    displayMode = copy_src.displayMode;
    planeIndex = copy_src.planeIndex;
    planeStackIndex = copy_src.planeStackIndex;
    transform = copy_src.transform;
    globalAlpha = copy_src.globalAlpha;
    alphaMode = copy_src.alphaMode;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplaySurfaceCreateInfoKHR& DisplaySurfaceCreateInfoKHR::operator=(const DisplaySurfaceCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    displayMode = copy_src.displayMode;
    planeIndex = copy_src.planeIndex;
    planeStackIndex = copy_src.planeStackIndex;
    transform = copy_src.transform;
    globalAlpha = copy_src.globalAlpha;
    alphaMode = copy_src.alphaMode;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplaySurfaceCreateInfoKHR::~DisplaySurfaceCreateInfoKHR() { FreePnextChain(pNext); }

void DisplaySurfaceCreateInfoKHR::initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    displayMode = in_struct->displayMode;
    planeIndex = in_struct->planeIndex;
    planeStackIndex = in_struct->planeStackIndex;
    transform = in_struct->transform;
    globalAlpha = in_struct->globalAlpha;
    alphaMode = in_struct->alphaMode;
    imageExtent = in_struct->imageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplaySurfaceCreateInfoKHR::initialize(const DisplaySurfaceCreateInfoKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    displayMode = copy_src->displayMode;
    planeIndex = copy_src->planeIndex;
    planeStackIndex = copy_src->planeStackIndex;
    transform = copy_src->transform;
    globalAlpha = copy_src->globalAlpha;
    alphaMode = copy_src->alphaMode;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPresentInfoKHR::DisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), srcRect(in_struct->srcRect), dstRect(in_struct->dstRect), persistent(in_struct->persistent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayPresentInfoKHR::DisplayPresentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR), pNext(nullptr), srcRect(), dstRect(), persistent() {}

DisplayPresentInfoKHR::DisplayPresentInfoKHR(const DisplayPresentInfoKHR& copy_src) {
    sType = copy_src.sType;
    srcRect = copy_src.srcRect;
    dstRect = copy_src.dstRect;
    persistent = copy_src.persistent;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayPresentInfoKHR& DisplayPresentInfoKHR::operator=(const DisplayPresentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcRect = copy_src.srcRect;
    dstRect = copy_src.dstRect;
    persistent = copy_src.persistent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayPresentInfoKHR::~DisplayPresentInfoKHR() { FreePnextChain(pNext); }

void DisplayPresentInfoKHR::initialize(const VkDisplayPresentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcRect = in_struct->srcRect;
    dstRect = in_struct->dstRect;
    persistent = in_struct->persistent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayPresentInfoKHR::initialize(const DisplayPresentInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcRect = copy_src->srcRect;
    dstRect = copy_src->dstRect;
    persistent = copy_src->persistent;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyQueryResultStatusPropertiesKHR::QueueFamilyQueryResultStatusPropertiesKHR(
    const VkQueueFamilyQueryResultStatusPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), queryResultStatusSupport(in_struct->queryResultStatusSupport) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueueFamilyQueryResultStatusPropertiesKHR::QueueFamilyQueryResultStatusPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR), pNext(nullptr), queryResultStatusSupport() {}

QueueFamilyQueryResultStatusPropertiesKHR::QueueFamilyQueryResultStatusPropertiesKHR(
    const QueueFamilyQueryResultStatusPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    queryResultStatusSupport = copy_src.queryResultStatusSupport;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueueFamilyQueryResultStatusPropertiesKHR& QueueFamilyQueryResultStatusPropertiesKHR::operator=(
    const QueueFamilyQueryResultStatusPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queryResultStatusSupport = copy_src.queryResultStatusSupport;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueueFamilyQueryResultStatusPropertiesKHR::~QueueFamilyQueryResultStatusPropertiesKHR() { FreePnextChain(pNext); }

void QueueFamilyQueryResultStatusPropertiesKHR::initialize(const VkQueueFamilyQueryResultStatusPropertiesKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queryResultStatusSupport = in_struct->queryResultStatusSupport;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueueFamilyQueryResultStatusPropertiesKHR::initialize(const QueueFamilyQueryResultStatusPropertiesKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queryResultStatusSupport = copy_src->queryResultStatusSupport;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyVideoPropertiesKHR::QueueFamilyVideoPropertiesKHR(const VkQueueFamilyVideoPropertiesKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), videoCodecOperations(in_struct->videoCodecOperations) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueueFamilyVideoPropertiesKHR::QueueFamilyVideoPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR), pNext(nullptr), videoCodecOperations() {}

QueueFamilyVideoPropertiesKHR::QueueFamilyVideoPropertiesKHR(const QueueFamilyVideoPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    videoCodecOperations = copy_src.videoCodecOperations;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueueFamilyVideoPropertiesKHR& QueueFamilyVideoPropertiesKHR::operator=(const QueueFamilyVideoPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoCodecOperations = copy_src.videoCodecOperations;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueueFamilyVideoPropertiesKHR::~QueueFamilyVideoPropertiesKHR() { FreePnextChain(pNext); }

void QueueFamilyVideoPropertiesKHR::initialize(const VkQueueFamilyVideoPropertiesKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoCodecOperations = in_struct->videoCodecOperations;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueueFamilyVideoPropertiesKHR::initialize(const QueueFamilyVideoPropertiesKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoCodecOperations = copy_src->videoCodecOperations;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoProfileInfoKHR::VideoProfileInfoKHR(const VkVideoProfileInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType),
      videoCodecOperation(in_struct->videoCodecOperation),
      chromaSubsampling(in_struct->chromaSubsampling),
      lumaBitDepth(in_struct->lumaBitDepth),
      chromaBitDepth(in_struct->chromaBitDepth) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoProfileInfoKHR::VideoProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR),
      pNext(nullptr),
      videoCodecOperation(),
      chromaSubsampling(),
      lumaBitDepth(),
      chromaBitDepth() {}

VideoProfileInfoKHR::VideoProfileInfoKHR(const VideoProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    videoCodecOperation = copy_src.videoCodecOperation;
    chromaSubsampling = copy_src.chromaSubsampling;
    lumaBitDepth = copy_src.lumaBitDepth;
    chromaBitDepth = copy_src.chromaBitDepth;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoProfileInfoKHR& VideoProfileInfoKHR::operator=(const VideoProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoCodecOperation = copy_src.videoCodecOperation;
    chromaSubsampling = copy_src.chromaSubsampling;
    lumaBitDepth = copy_src.lumaBitDepth;
    chromaBitDepth = copy_src.chromaBitDepth;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoProfileInfoKHR::~VideoProfileInfoKHR() { FreePnextChain(pNext); }

void VideoProfileInfoKHR::initialize(const VkVideoProfileInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoCodecOperation = in_struct->videoCodecOperation;
    chromaSubsampling = in_struct->chromaSubsampling;
    lumaBitDepth = in_struct->lumaBitDepth;
    chromaBitDepth = in_struct->chromaBitDepth;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoProfileInfoKHR::initialize(const VideoProfileInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoCodecOperation = copy_src->videoCodecOperation;
    chromaSubsampling = copy_src->chromaSubsampling;
    lumaBitDepth = copy_src->lumaBitDepth;
    chromaBitDepth = copy_src->chromaBitDepth;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoProfileListInfoKHR::VideoProfileListInfoKHR(const VkVideoProfileListInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), profileCount(in_struct->profileCount), pProfiles(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (profileCount && in_struct->pProfiles) {
        pProfiles = new VideoProfileInfoKHR[profileCount];
        for (uint32_t i = 0; i < profileCount; ++i) {
            pProfiles[i].initialize(&in_struct->pProfiles[i]);
        }
    }
}

VideoProfileListInfoKHR::VideoProfileListInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR), pNext(nullptr), profileCount(), pProfiles(nullptr) {}

VideoProfileListInfoKHR::VideoProfileListInfoKHR(const VideoProfileListInfoKHR& copy_src) {
    sType = copy_src.sType;
    profileCount = copy_src.profileCount;
    pProfiles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (profileCount && copy_src.pProfiles) {
        pProfiles = new VideoProfileInfoKHR[profileCount];
        for (uint32_t i = 0; i < profileCount; ++i) {
            pProfiles[i].initialize(&copy_src.pProfiles[i]);
        }
    }
}

VideoProfileListInfoKHR& VideoProfileListInfoKHR::operator=(const VideoProfileListInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pProfiles) delete[] pProfiles;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    profileCount = copy_src.profileCount;
    pProfiles = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (profileCount && copy_src.pProfiles) {
        pProfiles = new VideoProfileInfoKHR[profileCount];
        for (uint32_t i = 0; i < profileCount; ++i) {
            pProfiles[i].initialize(&copy_src.pProfiles[i]);
        }
    }

    return *this;
}

VideoProfileListInfoKHR::~VideoProfileListInfoKHR() {
    if (pProfiles) delete[] pProfiles;
    FreePnextChain(pNext);
}

void VideoProfileListInfoKHR::initialize(const VkVideoProfileListInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pProfiles) delete[] pProfiles;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    profileCount = in_struct->profileCount;
    pProfiles = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (profileCount && in_struct->pProfiles) {
        pProfiles = new VideoProfileInfoKHR[profileCount];
        for (uint32_t i = 0; i < profileCount; ++i) {
            pProfiles[i].initialize(&in_struct->pProfiles[i]);
        }
    }
}

void VideoProfileListInfoKHR::initialize(const VideoProfileListInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    profileCount = copy_src->profileCount;
    pProfiles = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (profileCount && copy_src->pProfiles) {
        pProfiles = new VideoProfileInfoKHR[profileCount];
        for (uint32_t i = 0; i < profileCount; ++i) {
            pProfiles[i].initialize(&copy_src->pProfiles[i]);
        }
    }
}

VideoCapabilitiesKHR::VideoCapabilitiesKHR(const VkVideoCapabilitiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      minBitstreamBufferOffsetAlignment(in_struct->minBitstreamBufferOffsetAlignment),
      minBitstreamBufferSizeAlignment(in_struct->minBitstreamBufferSizeAlignment),
      pictureAccessGranularity(in_struct->pictureAccessGranularity),
      minCodedExtent(in_struct->minCodedExtent),
      maxCodedExtent(in_struct->maxCodedExtent),
      maxDpbSlots(in_struct->maxDpbSlots),
      maxActiveReferencePictures(in_struct->maxActiveReferencePictures),
      stdHeaderVersion(in_struct->stdHeaderVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoCapabilitiesKHR::VideoCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR),
      pNext(nullptr),
      flags(),
      minBitstreamBufferOffsetAlignment(),
      minBitstreamBufferSizeAlignment(),
      pictureAccessGranularity(),
      minCodedExtent(),
      maxCodedExtent(),
      maxDpbSlots(),
      maxActiveReferencePictures(),
      stdHeaderVersion() {}

VideoCapabilitiesKHR::VideoCapabilitiesKHR(const VideoCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    minBitstreamBufferOffsetAlignment = copy_src.minBitstreamBufferOffsetAlignment;
    minBitstreamBufferSizeAlignment = copy_src.minBitstreamBufferSizeAlignment;
    pictureAccessGranularity = copy_src.pictureAccessGranularity;
    minCodedExtent = copy_src.minCodedExtent;
    maxCodedExtent = copy_src.maxCodedExtent;
    maxDpbSlots = copy_src.maxDpbSlots;
    maxActiveReferencePictures = copy_src.maxActiveReferencePictures;
    stdHeaderVersion = copy_src.stdHeaderVersion;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoCapabilitiesKHR& VideoCapabilitiesKHR::operator=(const VideoCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    minBitstreamBufferOffsetAlignment = copy_src.minBitstreamBufferOffsetAlignment;
    minBitstreamBufferSizeAlignment = copy_src.minBitstreamBufferSizeAlignment;
    pictureAccessGranularity = copy_src.pictureAccessGranularity;
    minCodedExtent = copy_src.minCodedExtent;
    maxCodedExtent = copy_src.maxCodedExtent;
    maxDpbSlots = copy_src.maxDpbSlots;
    maxActiveReferencePictures = copy_src.maxActiveReferencePictures;
    stdHeaderVersion = copy_src.stdHeaderVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoCapabilitiesKHR::~VideoCapabilitiesKHR() { FreePnextChain(pNext); }

void VideoCapabilitiesKHR::initialize(const VkVideoCapabilitiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    minBitstreamBufferOffsetAlignment = in_struct->minBitstreamBufferOffsetAlignment;
    minBitstreamBufferSizeAlignment = in_struct->minBitstreamBufferSizeAlignment;
    pictureAccessGranularity = in_struct->pictureAccessGranularity;
    minCodedExtent = in_struct->minCodedExtent;
    maxCodedExtent = in_struct->maxCodedExtent;
    maxDpbSlots = in_struct->maxDpbSlots;
    maxActiveReferencePictures = in_struct->maxActiveReferencePictures;
    stdHeaderVersion = in_struct->stdHeaderVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoCapabilitiesKHR::initialize(const VideoCapabilitiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    minBitstreamBufferOffsetAlignment = copy_src->minBitstreamBufferOffsetAlignment;
    minBitstreamBufferSizeAlignment = copy_src->minBitstreamBufferSizeAlignment;
    pictureAccessGranularity = copy_src->pictureAccessGranularity;
    minCodedExtent = copy_src->minCodedExtent;
    maxCodedExtent = copy_src->maxCodedExtent;
    maxDpbSlots = copy_src->maxDpbSlots;
    maxActiveReferencePictures = copy_src->maxActiveReferencePictures;
    stdHeaderVersion = copy_src->stdHeaderVersion;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVideoFormatInfoKHR::PhysicalDeviceVideoFormatInfoKHR(const VkPhysicalDeviceVideoFormatInfoKHR* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageUsage(in_struct->imageUsage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVideoFormatInfoKHR::PhysicalDeviceVideoFormatInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR), pNext(nullptr), imageUsage() {}

PhysicalDeviceVideoFormatInfoKHR::PhysicalDeviceVideoFormatInfoKHR(const PhysicalDeviceVideoFormatInfoKHR& copy_src) {
    sType = copy_src.sType;
    imageUsage = copy_src.imageUsage;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVideoFormatInfoKHR& PhysicalDeviceVideoFormatInfoKHR::operator=(const PhysicalDeviceVideoFormatInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageUsage = copy_src.imageUsage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVideoFormatInfoKHR::~PhysicalDeviceVideoFormatInfoKHR() { FreePnextChain(pNext); }

void PhysicalDeviceVideoFormatInfoKHR::initialize(const VkPhysicalDeviceVideoFormatInfoKHR* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageUsage = in_struct->imageUsage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVideoFormatInfoKHR::initialize(const PhysicalDeviceVideoFormatInfoKHR* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageUsage = copy_src->imageUsage;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoFormatPropertiesKHR::VideoFormatPropertiesKHR(const VkVideoFormatPropertiesKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      componentMapping(in_struct->componentMapping),
      imageCreateFlags(in_struct->imageCreateFlags),
      imageType(in_struct->imageType),
      imageTiling(in_struct->imageTiling),
      imageUsageFlags(in_struct->imageUsageFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoFormatPropertiesKHR::VideoFormatPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR),
      pNext(nullptr),
      format(),
      componentMapping(),
      imageCreateFlags(),
      imageType(),
      imageTiling(),
      imageUsageFlags() {}

VideoFormatPropertiesKHR::VideoFormatPropertiesKHR(const VideoFormatPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    componentMapping = copy_src.componentMapping;
    imageCreateFlags = copy_src.imageCreateFlags;
    imageType = copy_src.imageType;
    imageTiling = copy_src.imageTiling;
    imageUsageFlags = copy_src.imageUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoFormatPropertiesKHR& VideoFormatPropertiesKHR::operator=(const VideoFormatPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    componentMapping = copy_src.componentMapping;
    imageCreateFlags = copy_src.imageCreateFlags;
    imageType = copy_src.imageType;
    imageTiling = copy_src.imageTiling;
    imageUsageFlags = copy_src.imageUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoFormatPropertiesKHR::~VideoFormatPropertiesKHR() { FreePnextChain(pNext); }

void VideoFormatPropertiesKHR::initialize(const VkVideoFormatPropertiesKHR* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    componentMapping = in_struct->componentMapping;
    imageCreateFlags = in_struct->imageCreateFlags;
    imageType = in_struct->imageType;
    imageTiling = in_struct->imageTiling;
    imageUsageFlags = in_struct->imageUsageFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoFormatPropertiesKHR::initialize(const VideoFormatPropertiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    componentMapping = copy_src->componentMapping;
    imageCreateFlags = copy_src->imageCreateFlags;
    imageType = copy_src->imageType;
    imageTiling = copy_src->imageTiling;
    imageUsageFlags = copy_src->imageUsageFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoPictureResourceInfoKHR::VideoPictureResourceInfoKHR(const VkVideoPictureResourceInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      codedOffset(in_struct->codedOffset),
      codedExtent(in_struct->codedExtent),
      baseArrayLayer(in_struct->baseArrayLayer),
      imageViewBinding(in_struct->imageViewBinding) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoPictureResourceInfoKHR::VideoPictureResourceInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR),
      pNext(nullptr),
      codedOffset(),
      codedExtent(),
      baseArrayLayer(),
      imageViewBinding() {}

VideoPictureResourceInfoKHR::VideoPictureResourceInfoKHR(const VideoPictureResourceInfoKHR& copy_src) {
    sType = copy_src.sType;
    codedOffset = copy_src.codedOffset;
    codedExtent = copy_src.codedExtent;
    baseArrayLayer = copy_src.baseArrayLayer;
    imageViewBinding = copy_src.imageViewBinding;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoPictureResourceInfoKHR& VideoPictureResourceInfoKHR::operator=(const VideoPictureResourceInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    codedOffset = copy_src.codedOffset;
    codedExtent = copy_src.codedExtent;
    baseArrayLayer = copy_src.baseArrayLayer;
    imageViewBinding = copy_src.imageViewBinding;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoPictureResourceInfoKHR::~VideoPictureResourceInfoKHR() { FreePnextChain(pNext); }

void VideoPictureResourceInfoKHR::initialize(const VkVideoPictureResourceInfoKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    codedOffset = in_struct->codedOffset;
    codedExtent = in_struct->codedExtent;
    baseArrayLayer = in_struct->baseArrayLayer;
    imageViewBinding = in_struct->imageViewBinding;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoPictureResourceInfoKHR::initialize(const VideoPictureResourceInfoKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    codedOffset = copy_src->codedOffset;
    codedExtent = copy_src->codedExtent;
    baseArrayLayer = copy_src->baseArrayLayer;
    imageViewBinding = copy_src->imageViewBinding;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoReferenceSlotInfoKHR::VideoReferenceSlotInfoKHR(const VkVideoReferenceSlotInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), slotIndex(in_struct->slotIndex), pPictureResource(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPictureResource) pPictureResource = new VideoPictureResourceInfoKHR(in_struct->pPictureResource);
}

VideoReferenceSlotInfoKHR::VideoReferenceSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR), pNext(nullptr), slotIndex(), pPictureResource(nullptr) {}

VideoReferenceSlotInfoKHR::VideoReferenceSlotInfoKHR(const VideoReferenceSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    slotIndex = copy_src.slotIndex;
    pPictureResource = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pPictureResource) pPictureResource = new VideoPictureResourceInfoKHR(*copy_src.pPictureResource);
}

VideoReferenceSlotInfoKHR& VideoReferenceSlotInfoKHR::operator=(const VideoReferenceSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pPictureResource) delete pPictureResource;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    slotIndex = copy_src.slotIndex;
    pPictureResource = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pPictureResource) pPictureResource = new VideoPictureResourceInfoKHR(*copy_src.pPictureResource);

    return *this;
}

VideoReferenceSlotInfoKHR::~VideoReferenceSlotInfoKHR() {
    if (pPictureResource) delete pPictureResource;
    FreePnextChain(pNext);
}

void VideoReferenceSlotInfoKHR::initialize(const VkVideoReferenceSlotInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPictureResource) delete pPictureResource;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    slotIndex = in_struct->slotIndex;
    pPictureResource = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pPictureResource) pPictureResource = new VideoPictureResourceInfoKHR(in_struct->pPictureResource);
}

void VideoReferenceSlotInfoKHR::initialize(const VideoReferenceSlotInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    slotIndex = copy_src->slotIndex;
    pPictureResource = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pPictureResource) pPictureResource = new VideoPictureResourceInfoKHR(*copy_src->pPictureResource);
}

VideoSessionMemoryRequirementsKHR::VideoSessionMemoryRequirementsKHR(const VkVideoSessionMemoryRequirementsKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryBindIndex(in_struct->memoryBindIndex), memoryRequirements(in_struct->memoryRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoSessionMemoryRequirementsKHR::VideoSessionMemoryRequirementsKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR), pNext(nullptr), memoryBindIndex(), memoryRequirements() {}

VideoSessionMemoryRequirementsKHR::VideoSessionMemoryRequirementsKHR(const VideoSessionMemoryRequirementsKHR& copy_src) {
    sType = copy_src.sType;
    memoryBindIndex = copy_src.memoryBindIndex;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoSessionMemoryRequirementsKHR& VideoSessionMemoryRequirementsKHR::operator=(const VideoSessionMemoryRequirementsKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryBindIndex = copy_src.memoryBindIndex;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoSessionMemoryRequirementsKHR::~VideoSessionMemoryRequirementsKHR() { FreePnextChain(pNext); }

void VideoSessionMemoryRequirementsKHR::initialize(const VkVideoSessionMemoryRequirementsKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryBindIndex = in_struct->memoryBindIndex;
    memoryRequirements = in_struct->memoryRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoSessionMemoryRequirementsKHR::initialize(const VideoSessionMemoryRequirementsKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryBindIndex = copy_src->memoryBindIndex;
    memoryRequirements = copy_src->memoryRequirements;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindVideoSessionMemoryInfoKHR::BindVideoSessionMemoryInfoKHR(const VkBindVideoSessionMemoryInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      memoryBindIndex(in_struct->memoryBindIndex),
      memory(in_struct->memory),
      memoryOffset(in_struct->memoryOffset),
      memorySize(in_struct->memorySize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BindVideoSessionMemoryInfoKHR::BindVideoSessionMemoryInfoKHR()
    : sType(VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR),
      pNext(nullptr),
      memoryBindIndex(),
      memory(),
      memoryOffset(),
      memorySize() {}

BindVideoSessionMemoryInfoKHR::BindVideoSessionMemoryInfoKHR(const BindVideoSessionMemoryInfoKHR& copy_src) {
    sType = copy_src.sType;
    memoryBindIndex = copy_src.memoryBindIndex;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    memorySize = copy_src.memorySize;
    pNext = SafePnextCopy(copy_src.pNext);
}

BindVideoSessionMemoryInfoKHR& BindVideoSessionMemoryInfoKHR::operator=(const BindVideoSessionMemoryInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryBindIndex = copy_src.memoryBindIndex;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    memorySize = copy_src.memorySize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BindVideoSessionMemoryInfoKHR::~BindVideoSessionMemoryInfoKHR() { FreePnextChain(pNext); }

void BindVideoSessionMemoryInfoKHR::initialize(const VkBindVideoSessionMemoryInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryBindIndex = in_struct->memoryBindIndex;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    memorySize = in_struct->memorySize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BindVideoSessionMemoryInfoKHR::initialize(const BindVideoSessionMemoryInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryBindIndex = copy_src->memoryBindIndex;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    memorySize = copy_src->memorySize;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoSessionCreateInfoKHR::VideoSessionCreateInfoKHR(const VkVideoSessionCreateInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      flags(in_struct->flags),
      pVideoProfile(nullptr),
      pictureFormat(in_struct->pictureFormat),
      maxCodedExtent(in_struct->maxCodedExtent),
      referencePictureFormat(in_struct->referencePictureFormat),
      maxDpbSlots(in_struct->maxDpbSlots),
      maxActiveReferencePictures(in_struct->maxActiveReferencePictures),
      pStdHeaderVersion(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(in_struct->pVideoProfile);

    if (in_struct->pStdHeaderVersion) {
        pStdHeaderVersion = new VkExtensionProperties(*in_struct->pStdHeaderVersion);
    }
}

VideoSessionCreateInfoKHR::VideoSessionCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR),
      pNext(nullptr),
      queueFamilyIndex(),
      flags(),
      pVideoProfile(nullptr),
      pictureFormat(),
      maxCodedExtent(),
      referencePictureFormat(),
      maxDpbSlots(),
      maxActiveReferencePictures(),
      pStdHeaderVersion(nullptr) {}

VideoSessionCreateInfoKHR::VideoSessionCreateInfoKHR(const VideoSessionCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    flags = copy_src.flags;
    pVideoProfile = nullptr;
    pictureFormat = copy_src.pictureFormat;
    maxCodedExtent = copy_src.maxCodedExtent;
    referencePictureFormat = copy_src.referencePictureFormat;
    maxDpbSlots = copy_src.maxDpbSlots;
    maxActiveReferencePictures = copy_src.maxActiveReferencePictures;
    pStdHeaderVersion = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src.pVideoProfile);

    if (copy_src.pStdHeaderVersion) {
        pStdHeaderVersion = new VkExtensionProperties(*copy_src.pStdHeaderVersion);
    }
}

VideoSessionCreateInfoKHR& VideoSessionCreateInfoKHR::operator=(const VideoSessionCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pVideoProfile) delete pVideoProfile;
    if (pStdHeaderVersion) delete pStdHeaderVersion;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    flags = copy_src.flags;
    pVideoProfile = nullptr;
    pictureFormat = copy_src.pictureFormat;
    maxCodedExtent = copy_src.maxCodedExtent;
    referencePictureFormat = copy_src.referencePictureFormat;
    maxDpbSlots = copy_src.maxDpbSlots;
    maxActiveReferencePictures = copy_src.maxActiveReferencePictures;
    pStdHeaderVersion = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src.pVideoProfile);

    if (copy_src.pStdHeaderVersion) {
        pStdHeaderVersion = new VkExtensionProperties(*copy_src.pStdHeaderVersion);
    }

    return *this;
}

VideoSessionCreateInfoKHR::~VideoSessionCreateInfoKHR() {
    if (pVideoProfile) delete pVideoProfile;
    if (pStdHeaderVersion) delete pStdHeaderVersion;
    FreePnextChain(pNext);
}

void VideoSessionCreateInfoKHR::initialize(const VkVideoSessionCreateInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVideoProfile) delete pVideoProfile;
    if (pStdHeaderVersion) delete pStdHeaderVersion;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    flags = in_struct->flags;
    pVideoProfile = nullptr;
    pictureFormat = in_struct->pictureFormat;
    maxCodedExtent = in_struct->maxCodedExtent;
    referencePictureFormat = in_struct->referencePictureFormat;
    maxDpbSlots = in_struct->maxDpbSlots;
    maxActiveReferencePictures = in_struct->maxActiveReferencePictures;
    pStdHeaderVersion = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(in_struct->pVideoProfile);

    if (in_struct->pStdHeaderVersion) {
        pStdHeaderVersion = new VkExtensionProperties(*in_struct->pStdHeaderVersion);
    }
}

void VideoSessionCreateInfoKHR::initialize(const VideoSessionCreateInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    flags = copy_src->flags;
    pVideoProfile = nullptr;
    pictureFormat = copy_src->pictureFormat;
    maxCodedExtent = copy_src->maxCodedExtent;
    referencePictureFormat = copy_src->referencePictureFormat;
    maxDpbSlots = copy_src->maxDpbSlots;
    maxActiveReferencePictures = copy_src->maxActiveReferencePictures;
    pStdHeaderVersion = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src->pVideoProfile);

    if (copy_src->pStdHeaderVersion) {
        pStdHeaderVersion = new VkExtensionProperties(*copy_src->pStdHeaderVersion);
    }
}

VideoSessionParametersCreateInfoKHR::VideoSessionParametersCreateInfoKHR(const VkVideoSessionParametersCreateInfoKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      videoSessionParametersTemplate(in_struct->videoSessionParametersTemplate),
      videoSession(in_struct->videoSession) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoSessionParametersCreateInfoKHR::VideoSessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR),
      pNext(nullptr),
      flags(),
      videoSessionParametersTemplate(),
      videoSession() {}

VideoSessionParametersCreateInfoKHR::VideoSessionParametersCreateInfoKHR(const VideoSessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    videoSessionParametersTemplate = copy_src.videoSessionParametersTemplate;
    videoSession = copy_src.videoSession;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoSessionParametersCreateInfoKHR& VideoSessionParametersCreateInfoKHR::operator=(
    const VideoSessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    videoSessionParametersTemplate = copy_src.videoSessionParametersTemplate;
    videoSession = copy_src.videoSession;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoSessionParametersCreateInfoKHR::~VideoSessionParametersCreateInfoKHR() { FreePnextChain(pNext); }

void VideoSessionParametersCreateInfoKHR::initialize(const VkVideoSessionParametersCreateInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    videoSessionParametersTemplate = in_struct->videoSessionParametersTemplate;
    videoSession = in_struct->videoSession;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoSessionParametersCreateInfoKHR::initialize(const VideoSessionParametersCreateInfoKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    videoSessionParametersTemplate = copy_src->videoSessionParametersTemplate;
    videoSession = copy_src->videoSession;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoSessionParametersUpdateInfoKHR::VideoSessionParametersUpdateInfoKHR(const VkVideoSessionParametersUpdateInfoKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), updateSequenceCount(in_struct->updateSequenceCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoSessionParametersUpdateInfoKHR::VideoSessionParametersUpdateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR), pNext(nullptr), updateSequenceCount() {}

VideoSessionParametersUpdateInfoKHR::VideoSessionParametersUpdateInfoKHR(const VideoSessionParametersUpdateInfoKHR& copy_src) {
    sType = copy_src.sType;
    updateSequenceCount = copy_src.updateSequenceCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoSessionParametersUpdateInfoKHR& VideoSessionParametersUpdateInfoKHR::operator=(
    const VideoSessionParametersUpdateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    updateSequenceCount = copy_src.updateSequenceCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoSessionParametersUpdateInfoKHR::~VideoSessionParametersUpdateInfoKHR() { FreePnextChain(pNext); }

void VideoSessionParametersUpdateInfoKHR::initialize(const VkVideoSessionParametersUpdateInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    updateSequenceCount = in_struct->updateSequenceCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoSessionParametersUpdateInfoKHR::initialize(const VideoSessionParametersUpdateInfoKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    updateSequenceCount = copy_src->updateSequenceCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoBeginCodingInfoKHR::VideoBeginCodingInfoKHR(const VkVideoBeginCodingInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      videoSession(in_struct->videoSession),
      videoSessionParameters(in_struct->videoSessionParameters),
      referenceSlotCount(in_struct->referenceSlotCount),
      pReferenceSlots(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

VideoBeginCodingInfoKHR::VideoBeginCodingInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR),
      pNext(nullptr),
      flags(),
      videoSession(),
      videoSessionParameters(),
      referenceSlotCount(),
      pReferenceSlots(nullptr) {}

VideoBeginCodingInfoKHR::VideoBeginCodingInfoKHR(const VideoBeginCodingInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    videoSession = copy_src.videoSession;
    videoSessionParameters = copy_src.videoSessionParameters;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }
}

VideoBeginCodingInfoKHR& VideoBeginCodingInfoKHR::operator=(const VideoBeginCodingInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    videoSession = copy_src.videoSession;
    videoSessionParameters = copy_src.videoSessionParameters;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }

    return *this;
}

VideoBeginCodingInfoKHR::~VideoBeginCodingInfoKHR() {
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
}

void VideoBeginCodingInfoKHR::initialize(const VkVideoBeginCodingInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    videoSession = in_struct->videoSession;
    videoSessionParameters = in_struct->videoSessionParameters;
    referenceSlotCount = in_struct->referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

void VideoBeginCodingInfoKHR::initialize(const VideoBeginCodingInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    videoSession = copy_src->videoSession;
    videoSessionParameters = copy_src->videoSessionParameters;
    referenceSlotCount = copy_src->referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (referenceSlotCount && copy_src->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src->pReferenceSlots[i]);
        }
    }
}

VideoEndCodingInfoKHR::VideoEndCodingInfoKHR(const VkVideoEndCodingInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEndCodingInfoKHR::VideoEndCodingInfoKHR() : sType(VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR), pNext(nullptr), flags() {}

VideoEndCodingInfoKHR::VideoEndCodingInfoKHR(const VideoEndCodingInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEndCodingInfoKHR& VideoEndCodingInfoKHR::operator=(const VideoEndCodingInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEndCodingInfoKHR::~VideoEndCodingInfoKHR() { FreePnextChain(pNext); }

void VideoEndCodingInfoKHR::initialize(const VkVideoEndCodingInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEndCodingInfoKHR::initialize(const VideoEndCodingInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoCodingControlInfoKHR::VideoCodingControlInfoKHR(const VkVideoCodingControlInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoCodingControlInfoKHR::VideoCodingControlInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR), pNext(nullptr), flags() {}

VideoCodingControlInfoKHR::VideoCodingControlInfoKHR(const VideoCodingControlInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoCodingControlInfoKHR& VideoCodingControlInfoKHR::operator=(const VideoCodingControlInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoCodingControlInfoKHR::~VideoCodingControlInfoKHR() { FreePnextChain(pNext); }

void VideoCodingControlInfoKHR::initialize(const VkVideoCodingControlInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoCodingControlInfoKHR::initialize(const VideoCodingControlInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeCapabilitiesKHR::VideoDecodeCapabilitiesKHR(const VkVideoDecodeCapabilitiesKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeCapabilitiesKHR::VideoDecodeCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR), pNext(nullptr), flags() {}

VideoDecodeCapabilitiesKHR::VideoDecodeCapabilitiesKHR(const VideoDecodeCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeCapabilitiesKHR& VideoDecodeCapabilitiesKHR::operator=(const VideoDecodeCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeCapabilitiesKHR::~VideoDecodeCapabilitiesKHR() { FreePnextChain(pNext); }

void VideoDecodeCapabilitiesKHR::initialize(const VkVideoDecodeCapabilitiesKHR* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeCapabilitiesKHR::initialize(const VideoDecodeCapabilitiesKHR* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeUsageInfoKHR::VideoDecodeUsageInfoKHR(const VkVideoDecodeUsageInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), videoUsageHints(in_struct->videoUsageHints) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeUsageInfoKHR::VideoDecodeUsageInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR), pNext(nullptr), videoUsageHints() {}

VideoDecodeUsageInfoKHR::VideoDecodeUsageInfoKHR(const VideoDecodeUsageInfoKHR& copy_src) {
    sType = copy_src.sType;
    videoUsageHints = copy_src.videoUsageHints;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeUsageInfoKHR& VideoDecodeUsageInfoKHR::operator=(const VideoDecodeUsageInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoUsageHints = copy_src.videoUsageHints;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeUsageInfoKHR::~VideoDecodeUsageInfoKHR() { FreePnextChain(pNext); }

void VideoDecodeUsageInfoKHR::initialize(const VkVideoDecodeUsageInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoUsageHints = in_struct->videoUsageHints;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeUsageInfoKHR::initialize(const VideoDecodeUsageInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoUsageHints = copy_src->videoUsageHints;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeInfoKHR::VideoDecodeInfoKHR(const VkVideoDecodeInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      srcBuffer(in_struct->srcBuffer),
      srcBufferOffset(in_struct->srcBufferOffset),
      srcBufferRange(in_struct->srcBufferRange),
      dstPictureResource(&in_struct->dstPictureResource),
      pSetupReferenceSlot(nullptr),
      referenceSlotCount(in_struct->referenceSlotCount),
      pReferenceSlots(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(in_struct->pSetupReferenceSlot);
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

VideoDecodeInfoKHR::VideoDecodeInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR),
      pNext(nullptr),
      flags(),
      srcBuffer(),
      srcBufferOffset(),
      srcBufferRange(),
      pSetupReferenceSlot(nullptr),
      referenceSlotCount(),
      pReferenceSlots(nullptr) {}

VideoDecodeInfoKHR::VideoDecodeInfoKHR(const VideoDecodeInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    srcBuffer = copy_src.srcBuffer;
    srcBufferOffset = copy_src.srcBufferOffset;
    srcBufferRange = copy_src.srcBufferRange;
    dstPictureResource.initialize(&copy_src.dstPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src.pSetupReferenceSlot);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }
}

VideoDecodeInfoKHR& VideoDecodeInfoKHR::operator=(const VideoDecodeInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    srcBuffer = copy_src.srcBuffer;
    srcBufferOffset = copy_src.srcBufferOffset;
    srcBufferRange = copy_src.srcBufferRange;
    dstPictureResource.initialize(&copy_src.dstPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src.pSetupReferenceSlot);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }

    return *this;
}

VideoDecodeInfoKHR::~VideoDecodeInfoKHR() {
    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
}

void VideoDecodeInfoKHR::initialize(const VkVideoDecodeInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    srcBuffer = in_struct->srcBuffer;
    srcBufferOffset = in_struct->srcBufferOffset;
    srcBufferRange = in_struct->srcBufferRange;
    dstPictureResource.initialize(&in_struct->dstPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = in_struct->referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(in_struct->pSetupReferenceSlot);
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

void VideoDecodeInfoKHR::initialize(const VideoDecodeInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    srcBuffer = copy_src->srcBuffer;
    srcBufferOffset = copy_src->srcBufferOffset;
    srcBufferRange = copy_src->srcBufferRange;
    dstPictureResource.initialize(&copy_src->dstPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src->referenceSlotCount;
    pReferenceSlots = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src->pSetupReferenceSlot);
    if (referenceSlotCount && copy_src->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src->pReferenceSlots[i]);
        }
    }
}

VideoEncodeH264CapabilitiesKHR::VideoEncodeH264CapabilitiesKHR(const VkVideoEncodeH264CapabilitiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      maxLevelIdc(in_struct->maxLevelIdc),
      maxSliceCount(in_struct->maxSliceCount),
      maxPPictureL0ReferenceCount(in_struct->maxPPictureL0ReferenceCount),
      maxBPictureL0ReferenceCount(in_struct->maxBPictureL0ReferenceCount),
      maxL1ReferenceCount(in_struct->maxL1ReferenceCount),
      maxTemporalLayerCount(in_struct->maxTemporalLayerCount),
      expectDyadicTemporalLayerPattern(in_struct->expectDyadicTemporalLayerPattern),
      minQp(in_struct->minQp),
      maxQp(in_struct->maxQp),
      prefersGopRemainingFrames(in_struct->prefersGopRemainingFrames),
      requiresGopRemainingFrames(in_struct->requiresGopRemainingFrames),
      stdSyntaxFlags(in_struct->stdSyntaxFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264CapabilitiesKHR::VideoEncodeH264CapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR),
      pNext(nullptr),
      flags(),
      maxLevelIdc(),
      maxSliceCount(),
      maxPPictureL0ReferenceCount(),
      maxBPictureL0ReferenceCount(),
      maxL1ReferenceCount(),
      maxTemporalLayerCount(),
      expectDyadicTemporalLayerPattern(),
      minQp(),
      maxQp(),
      prefersGopRemainingFrames(),
      requiresGopRemainingFrames(),
      stdSyntaxFlags() {}

VideoEncodeH264CapabilitiesKHR::VideoEncodeH264CapabilitiesKHR(const VideoEncodeH264CapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    maxLevelIdc = copy_src.maxLevelIdc;
    maxSliceCount = copy_src.maxSliceCount;
    maxPPictureL0ReferenceCount = copy_src.maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src.maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src.maxL1ReferenceCount;
    maxTemporalLayerCount = copy_src.maxTemporalLayerCount;
    expectDyadicTemporalLayerPattern = copy_src.expectDyadicTemporalLayerPattern;
    minQp = copy_src.minQp;
    maxQp = copy_src.maxQp;
    prefersGopRemainingFrames = copy_src.prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src.requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src.stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264CapabilitiesKHR& VideoEncodeH264CapabilitiesKHR::operator=(const VideoEncodeH264CapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    maxLevelIdc = copy_src.maxLevelIdc;
    maxSliceCount = copy_src.maxSliceCount;
    maxPPictureL0ReferenceCount = copy_src.maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src.maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src.maxL1ReferenceCount;
    maxTemporalLayerCount = copy_src.maxTemporalLayerCount;
    expectDyadicTemporalLayerPattern = copy_src.expectDyadicTemporalLayerPattern;
    minQp = copy_src.minQp;
    maxQp = copy_src.maxQp;
    prefersGopRemainingFrames = copy_src.prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src.requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src.stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264CapabilitiesKHR::~VideoEncodeH264CapabilitiesKHR() { FreePnextChain(pNext); }

void VideoEncodeH264CapabilitiesKHR::initialize(const VkVideoEncodeH264CapabilitiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    maxLevelIdc = in_struct->maxLevelIdc;
    maxSliceCount = in_struct->maxSliceCount;
    maxPPictureL0ReferenceCount = in_struct->maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = in_struct->maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = in_struct->maxL1ReferenceCount;
    maxTemporalLayerCount = in_struct->maxTemporalLayerCount;
    expectDyadicTemporalLayerPattern = in_struct->expectDyadicTemporalLayerPattern;
    minQp = in_struct->minQp;
    maxQp = in_struct->maxQp;
    prefersGopRemainingFrames = in_struct->prefersGopRemainingFrames;
    requiresGopRemainingFrames = in_struct->requiresGopRemainingFrames;
    stdSyntaxFlags = in_struct->stdSyntaxFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264CapabilitiesKHR::initialize(const VideoEncodeH264CapabilitiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    maxLevelIdc = copy_src->maxLevelIdc;
    maxSliceCount = copy_src->maxSliceCount;
    maxPPictureL0ReferenceCount = copy_src->maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src->maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src->maxL1ReferenceCount;
    maxTemporalLayerCount = copy_src->maxTemporalLayerCount;
    expectDyadicTemporalLayerPattern = copy_src->expectDyadicTemporalLayerPattern;
    minQp = copy_src->minQp;
    maxQp = copy_src->maxQp;
    prefersGopRemainingFrames = copy_src->prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src->requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src->stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264QualityLevelPropertiesKHR::VideoEncodeH264QualityLevelPropertiesKHR(
    const VkVideoEncodeH264QualityLevelPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      preferredRateControlFlags(in_struct->preferredRateControlFlags),
      preferredGopFrameCount(in_struct->preferredGopFrameCount),
      preferredIdrPeriod(in_struct->preferredIdrPeriod),
      preferredConsecutiveBFrameCount(in_struct->preferredConsecutiveBFrameCount),
      preferredTemporalLayerCount(in_struct->preferredTemporalLayerCount),
      preferredConstantQp(in_struct->preferredConstantQp),
      preferredMaxL0ReferenceCount(in_struct->preferredMaxL0ReferenceCount),
      preferredMaxL1ReferenceCount(in_struct->preferredMaxL1ReferenceCount),
      preferredStdEntropyCodingModeFlag(in_struct->preferredStdEntropyCodingModeFlag) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264QualityLevelPropertiesKHR::VideoEncodeH264QualityLevelPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR),
      pNext(nullptr),
      preferredRateControlFlags(),
      preferredGopFrameCount(),
      preferredIdrPeriod(),
      preferredConsecutiveBFrameCount(),
      preferredTemporalLayerCount(),
      preferredConstantQp(),
      preferredMaxL0ReferenceCount(),
      preferredMaxL1ReferenceCount(),
      preferredStdEntropyCodingModeFlag() {}

VideoEncodeH264QualityLevelPropertiesKHR::VideoEncodeH264QualityLevelPropertiesKHR(
    const VideoEncodeH264QualityLevelPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    preferredRateControlFlags = copy_src.preferredRateControlFlags;
    preferredGopFrameCount = copy_src.preferredGopFrameCount;
    preferredIdrPeriod = copy_src.preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src.preferredConsecutiveBFrameCount;
    preferredTemporalLayerCount = copy_src.preferredTemporalLayerCount;
    preferredConstantQp = copy_src.preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src.preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src.preferredMaxL1ReferenceCount;
    preferredStdEntropyCodingModeFlag = copy_src.preferredStdEntropyCodingModeFlag;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264QualityLevelPropertiesKHR& VideoEncodeH264QualityLevelPropertiesKHR::operator=(
    const VideoEncodeH264QualityLevelPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    preferredRateControlFlags = copy_src.preferredRateControlFlags;
    preferredGopFrameCount = copy_src.preferredGopFrameCount;
    preferredIdrPeriod = copy_src.preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src.preferredConsecutiveBFrameCount;
    preferredTemporalLayerCount = copy_src.preferredTemporalLayerCount;
    preferredConstantQp = copy_src.preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src.preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src.preferredMaxL1ReferenceCount;
    preferredStdEntropyCodingModeFlag = copy_src.preferredStdEntropyCodingModeFlag;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264QualityLevelPropertiesKHR::~VideoEncodeH264QualityLevelPropertiesKHR() { FreePnextChain(pNext); }

void VideoEncodeH264QualityLevelPropertiesKHR::initialize(const VkVideoEncodeH264QualityLevelPropertiesKHR* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    preferredRateControlFlags = in_struct->preferredRateControlFlags;
    preferredGopFrameCount = in_struct->preferredGopFrameCount;
    preferredIdrPeriod = in_struct->preferredIdrPeriod;
    preferredConsecutiveBFrameCount = in_struct->preferredConsecutiveBFrameCount;
    preferredTemporalLayerCount = in_struct->preferredTemporalLayerCount;
    preferredConstantQp = in_struct->preferredConstantQp;
    preferredMaxL0ReferenceCount = in_struct->preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = in_struct->preferredMaxL1ReferenceCount;
    preferredStdEntropyCodingModeFlag = in_struct->preferredStdEntropyCodingModeFlag;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264QualityLevelPropertiesKHR::initialize(const VideoEncodeH264QualityLevelPropertiesKHR* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    preferredRateControlFlags = copy_src->preferredRateControlFlags;
    preferredGopFrameCount = copy_src->preferredGopFrameCount;
    preferredIdrPeriod = copy_src->preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src->preferredConsecutiveBFrameCount;
    preferredTemporalLayerCount = copy_src->preferredTemporalLayerCount;
    preferredConstantQp = copy_src->preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src->preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src->preferredMaxL1ReferenceCount;
    preferredStdEntropyCodingModeFlag = copy_src->preferredStdEntropyCodingModeFlag;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264SessionCreateInfoKHR::VideoEncodeH264SessionCreateInfoKHR(const VkVideoEncodeH264SessionCreateInfoKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), useMaxLevelIdc(in_struct->useMaxLevelIdc), maxLevelIdc(in_struct->maxLevelIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264SessionCreateInfoKHR::VideoEncodeH264SessionCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR), pNext(nullptr), useMaxLevelIdc(), maxLevelIdc() {}

VideoEncodeH264SessionCreateInfoKHR::VideoEncodeH264SessionCreateInfoKHR(const VideoEncodeH264SessionCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    useMaxLevelIdc = copy_src.useMaxLevelIdc;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264SessionCreateInfoKHR& VideoEncodeH264SessionCreateInfoKHR::operator=(
    const VideoEncodeH264SessionCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useMaxLevelIdc = copy_src.useMaxLevelIdc;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264SessionCreateInfoKHR::~VideoEncodeH264SessionCreateInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264SessionCreateInfoKHR::initialize(const VkVideoEncodeH264SessionCreateInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useMaxLevelIdc = in_struct->useMaxLevelIdc;
    maxLevelIdc = in_struct->maxLevelIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264SessionCreateInfoKHR::initialize(const VideoEncodeH264SessionCreateInfoKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useMaxLevelIdc = copy_src->useMaxLevelIdc;
    maxLevelIdc = copy_src->maxLevelIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264SessionParametersAddInfoKHR::VideoEncodeH264SessionParametersAddInfoKHR(
    const VkVideoEncodeH264SessionParametersAddInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stdSPSCount(in_struct->stdSPSCount),
      pStdSPSs(nullptr),
      stdPPSCount(in_struct->stdPPSCount),
      pStdPPSs(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * in_struct->stdPPSCount);
    }
}

VideoEncodeH264SessionParametersAddInfoKHR::VideoEncodeH264SessionParametersAddInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR),
      pNext(nullptr),
      stdSPSCount(),
      pStdSPSs(nullptr),
      stdPPSCount(),
      pStdPPSs(nullptr) {}

VideoEncodeH264SessionParametersAddInfoKHR::VideoEncodeH264SessionParametersAddInfoKHR(
    const VideoEncodeH264SessionParametersAddInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src.stdPPSCount);
    }
}

VideoEncodeH264SessionParametersAddInfoKHR& VideoEncodeH264SessionParametersAddInfoKHR::operator=(
    const VideoEncodeH264SessionParametersAddInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src.stdPPSCount);
    }

    return *this;
}

VideoEncodeH264SessionParametersAddInfoKHR::~VideoEncodeH264SessionParametersAddInfoKHR() {
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
}

void VideoEncodeH264SessionParametersAddInfoKHR::initialize(const VkVideoEncodeH264SessionParametersAddInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdSPSCount = in_struct->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = in_struct->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * in_struct->stdPPSCount);
    }
}

void VideoEncodeH264SessionParametersAddInfoKHR::initialize(const VideoEncodeH264SessionParametersAddInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdSPSCount = copy_src->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src->stdSPSCount);
    }

    if (copy_src->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src->stdPPSCount);
    }
}

VideoEncodeH264SessionParametersCreateInfoKHR::VideoEncodeH264SessionParametersCreateInfoKHR(
    const VkVideoEncodeH264SessionParametersCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxStdSPSCount(in_struct->maxStdSPSCount),
      maxStdPPSCount(in_struct->maxStdPPSCount),
      pParametersAddInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH264SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

VideoEncodeH264SessionParametersCreateInfoKHR::VideoEncodeH264SessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR),
      pNext(nullptr),
      maxStdSPSCount(),
      maxStdPPSCount(),
      pParametersAddInfo(nullptr) {}

VideoEncodeH264SessionParametersCreateInfoKHR::VideoEncodeH264SessionParametersCreateInfoKHR(
    const VideoEncodeH264SessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH264SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);
}

VideoEncodeH264SessionParametersCreateInfoKHR& VideoEncodeH264SessionParametersCreateInfoKHR::operator=(
    const VideoEncodeH264SessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH264SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);

    return *this;
}

VideoEncodeH264SessionParametersCreateInfoKHR::~VideoEncodeH264SessionParametersCreateInfoKHR() {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH264SessionParametersCreateInfoKHR::initialize(const VkVideoEncodeH264SessionParametersCreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxStdSPSCount = in_struct->maxStdSPSCount;
    maxStdPPSCount = in_struct->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH264SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

void VideoEncodeH264SessionParametersCreateInfoKHR::initialize(const VideoEncodeH264SessionParametersCreateInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxStdSPSCount = copy_src->maxStdSPSCount;
    maxStdPPSCount = copy_src->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH264SessionParametersAddInfoKHR(*copy_src->pParametersAddInfo);
}

VideoEncodeH264SessionParametersGetInfoKHR::VideoEncodeH264SessionParametersGetInfoKHR(
    const VkVideoEncodeH264SessionParametersGetInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      writeStdSPS(in_struct->writeStdSPS),
      writeStdPPS(in_struct->writeStdPPS),
      stdSPSId(in_struct->stdSPSId),
      stdPPSId(in_struct->stdPPSId) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264SessionParametersGetInfoKHR::VideoEncodeH264SessionParametersGetInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR),
      pNext(nullptr),
      writeStdSPS(),
      writeStdPPS(),
      stdSPSId(),
      stdPPSId() {}

VideoEncodeH264SessionParametersGetInfoKHR::VideoEncodeH264SessionParametersGetInfoKHR(
    const VideoEncodeH264SessionParametersGetInfoKHR& copy_src) {
    sType = copy_src.sType;
    writeStdSPS = copy_src.writeStdSPS;
    writeStdPPS = copy_src.writeStdPPS;
    stdSPSId = copy_src.stdSPSId;
    stdPPSId = copy_src.stdPPSId;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264SessionParametersGetInfoKHR& VideoEncodeH264SessionParametersGetInfoKHR::operator=(
    const VideoEncodeH264SessionParametersGetInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    writeStdSPS = copy_src.writeStdSPS;
    writeStdPPS = copy_src.writeStdPPS;
    stdSPSId = copy_src.stdSPSId;
    stdPPSId = copy_src.stdPPSId;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264SessionParametersGetInfoKHR::~VideoEncodeH264SessionParametersGetInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264SessionParametersGetInfoKHR::initialize(const VkVideoEncodeH264SessionParametersGetInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    writeStdSPS = in_struct->writeStdSPS;
    writeStdPPS = in_struct->writeStdPPS;
    stdSPSId = in_struct->stdSPSId;
    stdPPSId = in_struct->stdPPSId;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264SessionParametersGetInfoKHR::initialize(const VideoEncodeH264SessionParametersGetInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    writeStdSPS = copy_src->writeStdSPS;
    writeStdPPS = copy_src->writeStdPPS;
    stdSPSId = copy_src->stdSPSId;
    stdPPSId = copy_src->stdPPSId;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::VideoEncodeH264SessionParametersFeedbackInfoKHR(
    const VkVideoEncodeH264SessionParametersFeedbackInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      hasStdSPSOverrides(in_struct->hasStdSPSOverrides),
      hasStdPPSOverrides(in_struct->hasStdPPSOverrides) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::VideoEncodeH264SessionParametersFeedbackInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR),
      pNext(nullptr),
      hasStdSPSOverrides(),
      hasStdPPSOverrides() {}

VideoEncodeH264SessionParametersFeedbackInfoKHR::VideoEncodeH264SessionParametersFeedbackInfoKHR(
    const VideoEncodeH264SessionParametersFeedbackInfoKHR& copy_src) {
    sType = copy_src.sType;
    hasStdSPSOverrides = copy_src.hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src.hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR& VideoEncodeH264SessionParametersFeedbackInfoKHR::operator=(
    const VideoEncodeH264SessionParametersFeedbackInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hasStdSPSOverrides = copy_src.hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src.hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::~VideoEncodeH264SessionParametersFeedbackInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264SessionParametersFeedbackInfoKHR::initialize(const VkVideoEncodeH264SessionParametersFeedbackInfoKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hasStdSPSOverrides = in_struct->hasStdSPSOverrides;
    hasStdPPSOverrides = in_struct->hasStdPPSOverrides;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264SessionParametersFeedbackInfoKHR::initialize(const VideoEncodeH264SessionParametersFeedbackInfoKHR* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hasStdSPSOverrides = copy_src->hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src->hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264NaluSliceInfoKHR::VideoEncodeH264NaluSliceInfoKHR(const VkVideoEncodeH264NaluSliceInfoKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), constantQp(in_struct->constantQp), pStdSliceHeader(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdSliceHeader) {
        pStdSliceHeader = new StdVideoEncodeH264SliceHeader(*in_struct->pStdSliceHeader);
    }
}

VideoEncodeH264NaluSliceInfoKHR::VideoEncodeH264NaluSliceInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR), pNext(nullptr), constantQp(), pStdSliceHeader(nullptr) {}

VideoEncodeH264NaluSliceInfoKHR::VideoEncodeH264NaluSliceInfoKHR(const VideoEncodeH264NaluSliceInfoKHR& copy_src) {
    sType = copy_src.sType;
    constantQp = copy_src.constantQp;
    pStdSliceHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSliceHeader) {
        pStdSliceHeader = new StdVideoEncodeH264SliceHeader(*copy_src.pStdSliceHeader);
    }
}

VideoEncodeH264NaluSliceInfoKHR& VideoEncodeH264NaluSliceInfoKHR::operator=(const VideoEncodeH264NaluSliceInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdSliceHeader) delete pStdSliceHeader;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    constantQp = copy_src.constantQp;
    pStdSliceHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSliceHeader) {
        pStdSliceHeader = new StdVideoEncodeH264SliceHeader(*copy_src.pStdSliceHeader);
    }

    return *this;
}

VideoEncodeH264NaluSliceInfoKHR::~VideoEncodeH264NaluSliceInfoKHR() {
    if (pStdSliceHeader) delete pStdSliceHeader;
    FreePnextChain(pNext);
}

void VideoEncodeH264NaluSliceInfoKHR::initialize(const VkVideoEncodeH264NaluSliceInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdSliceHeader) delete pStdSliceHeader;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    constantQp = in_struct->constantQp;
    pStdSliceHeader = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdSliceHeader) {
        pStdSliceHeader = new StdVideoEncodeH264SliceHeader(*in_struct->pStdSliceHeader);
    }
}

void VideoEncodeH264NaluSliceInfoKHR::initialize(const VideoEncodeH264NaluSliceInfoKHR* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    constantQp = copy_src->constantQp;
    pStdSliceHeader = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdSliceHeader) {
        pStdSliceHeader = new StdVideoEncodeH264SliceHeader(*copy_src->pStdSliceHeader);
    }
}

VideoEncodeH264PictureInfoKHR::VideoEncodeH264PictureInfoKHR(const VkVideoEncodeH264PictureInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      naluSliceEntryCount(in_struct->naluSliceEntryCount),
      pNaluSliceEntries(nullptr),
      pStdPictureInfo(nullptr),
      generatePrefixNalu(in_struct->generatePrefixNalu) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (naluSliceEntryCount && in_struct->pNaluSliceEntries) {
        pNaluSliceEntries = new VideoEncodeH264NaluSliceInfoKHR[naluSliceEntryCount];
        for (uint32_t i = 0; i < naluSliceEntryCount; ++i) {
            pNaluSliceEntries[i].initialize(&in_struct->pNaluSliceEntries[i]);
        }
    }

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH264PictureInfo(*in_struct->pStdPictureInfo);
    }
}

VideoEncodeH264PictureInfoKHR::VideoEncodeH264PictureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR),
      pNext(nullptr),
      naluSliceEntryCount(),
      pNaluSliceEntries(nullptr),
      pStdPictureInfo(nullptr),
      generatePrefixNalu() {}

VideoEncodeH264PictureInfoKHR::VideoEncodeH264PictureInfoKHR(const VideoEncodeH264PictureInfoKHR& copy_src) {
    sType = copy_src.sType;
    naluSliceEntryCount = copy_src.naluSliceEntryCount;
    pNaluSliceEntries = nullptr;
    pStdPictureInfo = nullptr;
    generatePrefixNalu = copy_src.generatePrefixNalu;
    pNext = SafePnextCopy(copy_src.pNext);
    if (naluSliceEntryCount && copy_src.pNaluSliceEntries) {
        pNaluSliceEntries = new VideoEncodeH264NaluSliceInfoKHR[naluSliceEntryCount];
        for (uint32_t i = 0; i < naluSliceEntryCount; ++i) {
            pNaluSliceEntries[i].initialize(&copy_src.pNaluSliceEntries[i]);
        }
    }

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH264PictureInfo(*copy_src.pStdPictureInfo);
    }
}

VideoEncodeH264PictureInfoKHR& VideoEncodeH264PictureInfoKHR::operator=(const VideoEncodeH264PictureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pNaluSliceEntries) delete[] pNaluSliceEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    naluSliceEntryCount = copy_src.naluSliceEntryCount;
    pNaluSliceEntries = nullptr;
    pStdPictureInfo = nullptr;
    generatePrefixNalu = copy_src.generatePrefixNalu;
    pNext = SafePnextCopy(copy_src.pNext);
    if (naluSliceEntryCount && copy_src.pNaluSliceEntries) {
        pNaluSliceEntries = new VideoEncodeH264NaluSliceInfoKHR[naluSliceEntryCount];
        for (uint32_t i = 0; i < naluSliceEntryCount; ++i) {
            pNaluSliceEntries[i].initialize(&copy_src.pNaluSliceEntries[i]);
        }
    }

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH264PictureInfo(*copy_src.pStdPictureInfo);
    }

    return *this;
}

VideoEncodeH264PictureInfoKHR::~VideoEncodeH264PictureInfoKHR() {
    if (pNaluSliceEntries) delete[] pNaluSliceEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH264PictureInfoKHR::initialize(const VkVideoEncodeH264PictureInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pNaluSliceEntries) delete[] pNaluSliceEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    naluSliceEntryCount = in_struct->naluSliceEntryCount;
    pNaluSliceEntries = nullptr;
    pStdPictureInfo = nullptr;
    generatePrefixNalu = in_struct->generatePrefixNalu;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (naluSliceEntryCount && in_struct->pNaluSliceEntries) {
        pNaluSliceEntries = new VideoEncodeH264NaluSliceInfoKHR[naluSliceEntryCount];
        for (uint32_t i = 0; i < naluSliceEntryCount; ++i) {
            pNaluSliceEntries[i].initialize(&in_struct->pNaluSliceEntries[i]);
        }
    }

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH264PictureInfo(*in_struct->pStdPictureInfo);
    }
}

void VideoEncodeH264PictureInfoKHR::initialize(const VideoEncodeH264PictureInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    naluSliceEntryCount = copy_src->naluSliceEntryCount;
    pNaluSliceEntries = nullptr;
    pStdPictureInfo = nullptr;
    generatePrefixNalu = copy_src->generatePrefixNalu;
    pNext = SafePnextCopy(copy_src->pNext);
    if (naluSliceEntryCount && copy_src->pNaluSliceEntries) {
        pNaluSliceEntries = new VideoEncodeH264NaluSliceInfoKHR[naluSliceEntryCount];
        for (uint32_t i = 0; i < naluSliceEntryCount; ++i) {
            pNaluSliceEntries[i].initialize(&copy_src->pNaluSliceEntries[i]);
        }
    }

    if (copy_src->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH264PictureInfo(*copy_src->pStdPictureInfo);
    }
}

VideoEncodeH264DpbSlotInfoKHR::VideoEncodeH264DpbSlotInfoKHR(const VkVideoEncodeH264DpbSlotInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdReferenceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH264ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

VideoEncodeH264DpbSlotInfoKHR::VideoEncodeH264DpbSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR), pNext(nullptr), pStdReferenceInfo(nullptr) {}

VideoEncodeH264DpbSlotInfoKHR::VideoEncodeH264DpbSlotInfoKHR(const VideoEncodeH264DpbSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH264ReferenceInfo(*copy_src.pStdReferenceInfo);
    }
}

VideoEncodeH264DpbSlotInfoKHR& VideoEncodeH264DpbSlotInfoKHR::operator=(const VideoEncodeH264DpbSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH264ReferenceInfo(*copy_src.pStdReferenceInfo);
    }

    return *this;
}

VideoEncodeH264DpbSlotInfoKHR::~VideoEncodeH264DpbSlotInfoKHR() {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH264DpbSlotInfoKHR::initialize(const VkVideoEncodeH264DpbSlotInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH264ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

void VideoEncodeH264DpbSlotInfoKHR::initialize(const VideoEncodeH264DpbSlotInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH264ReferenceInfo(*copy_src->pStdReferenceInfo);
    }
}

VideoEncodeH264ProfileInfoKHR::VideoEncodeH264ProfileInfoKHR(const VkVideoEncodeH264ProfileInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stdProfileIdc(in_struct->stdProfileIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264ProfileInfoKHR::VideoEncodeH264ProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR), pNext(nullptr), stdProfileIdc() {}

VideoEncodeH264ProfileInfoKHR::VideoEncodeH264ProfileInfoKHR(const VideoEncodeH264ProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264ProfileInfoKHR& VideoEncodeH264ProfileInfoKHR::operator=(const VideoEncodeH264ProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264ProfileInfoKHR::~VideoEncodeH264ProfileInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264ProfileInfoKHR::initialize(const VkVideoEncodeH264ProfileInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdProfileIdc = in_struct->stdProfileIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264ProfileInfoKHR::initialize(const VideoEncodeH264ProfileInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdProfileIdc = copy_src->stdProfileIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264RateControlInfoKHR::VideoEncodeH264RateControlInfoKHR(const VkVideoEncodeH264RateControlInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      gopFrameCount(in_struct->gopFrameCount),
      idrPeriod(in_struct->idrPeriod),
      consecutiveBFrameCount(in_struct->consecutiveBFrameCount),
      temporalLayerCount(in_struct->temporalLayerCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264RateControlInfoKHR::VideoEncodeH264RateControlInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR),
      pNext(nullptr),
      flags(),
      gopFrameCount(),
      idrPeriod(),
      consecutiveBFrameCount(),
      temporalLayerCount() {}

VideoEncodeH264RateControlInfoKHR::VideoEncodeH264RateControlInfoKHR(const VideoEncodeH264RateControlInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    gopFrameCount = copy_src.gopFrameCount;
    idrPeriod = copy_src.idrPeriod;
    consecutiveBFrameCount = copy_src.consecutiveBFrameCount;
    temporalLayerCount = copy_src.temporalLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264RateControlInfoKHR& VideoEncodeH264RateControlInfoKHR::operator=(const VideoEncodeH264RateControlInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    gopFrameCount = copy_src.gopFrameCount;
    idrPeriod = copy_src.idrPeriod;
    consecutiveBFrameCount = copy_src.consecutiveBFrameCount;
    temporalLayerCount = copy_src.temporalLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264RateControlInfoKHR::~VideoEncodeH264RateControlInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264RateControlInfoKHR::initialize(const VkVideoEncodeH264RateControlInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    gopFrameCount = in_struct->gopFrameCount;
    idrPeriod = in_struct->idrPeriod;
    consecutiveBFrameCount = in_struct->consecutiveBFrameCount;
    temporalLayerCount = in_struct->temporalLayerCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264RateControlInfoKHR::initialize(const VideoEncodeH264RateControlInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    gopFrameCount = copy_src->gopFrameCount;
    idrPeriod = copy_src->idrPeriod;
    consecutiveBFrameCount = copy_src->consecutiveBFrameCount;
    temporalLayerCount = copy_src->temporalLayerCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264RateControlLayerInfoKHR::VideoEncodeH264RateControlLayerInfoKHR(
    const VkVideoEncodeH264RateControlLayerInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      useMinQp(in_struct->useMinQp),
      minQp(in_struct->minQp),
      useMaxQp(in_struct->useMaxQp),
      maxQp(in_struct->maxQp),
      useMaxFrameSize(in_struct->useMaxFrameSize),
      maxFrameSize(in_struct->maxFrameSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264RateControlLayerInfoKHR::VideoEncodeH264RateControlLayerInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR),
      pNext(nullptr),
      useMinQp(),
      minQp(),
      useMaxQp(),
      maxQp(),
      useMaxFrameSize(),
      maxFrameSize() {}

VideoEncodeH264RateControlLayerInfoKHR::VideoEncodeH264RateControlLayerInfoKHR(
    const VideoEncodeH264RateControlLayerInfoKHR& copy_src) {
    sType = copy_src.sType;
    useMinQp = copy_src.useMinQp;
    minQp = copy_src.minQp;
    useMaxQp = copy_src.useMaxQp;
    maxQp = copy_src.maxQp;
    useMaxFrameSize = copy_src.useMaxFrameSize;
    maxFrameSize = copy_src.maxFrameSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264RateControlLayerInfoKHR& VideoEncodeH264RateControlLayerInfoKHR::operator=(
    const VideoEncodeH264RateControlLayerInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useMinQp = copy_src.useMinQp;
    minQp = copy_src.minQp;
    useMaxQp = copy_src.useMaxQp;
    maxQp = copy_src.maxQp;
    useMaxFrameSize = copy_src.useMaxFrameSize;
    maxFrameSize = copy_src.maxFrameSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264RateControlLayerInfoKHR::~VideoEncodeH264RateControlLayerInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264RateControlLayerInfoKHR::initialize(const VkVideoEncodeH264RateControlLayerInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useMinQp = in_struct->useMinQp;
    minQp = in_struct->minQp;
    useMaxQp = in_struct->useMaxQp;
    maxQp = in_struct->maxQp;
    useMaxFrameSize = in_struct->useMaxFrameSize;
    maxFrameSize = in_struct->maxFrameSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264RateControlLayerInfoKHR::initialize(const VideoEncodeH264RateControlLayerInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useMinQp = copy_src->useMinQp;
    minQp = copy_src->minQp;
    useMaxQp = copy_src->useMaxQp;
    maxQp = copy_src->maxQp;
    useMaxFrameSize = copy_src->useMaxFrameSize;
    maxFrameSize = copy_src->maxFrameSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH264GopRemainingFrameInfoKHR::VideoEncodeH264GopRemainingFrameInfoKHR(
    const VkVideoEncodeH264GopRemainingFrameInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      useGopRemainingFrames(in_struct->useGopRemainingFrames),
      gopRemainingI(in_struct->gopRemainingI),
      gopRemainingP(in_struct->gopRemainingP),
      gopRemainingB(in_struct->gopRemainingB) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH264GopRemainingFrameInfoKHR::VideoEncodeH264GopRemainingFrameInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR),
      pNext(nullptr),
      useGopRemainingFrames(),
      gopRemainingI(),
      gopRemainingP(),
      gopRemainingB() {}

VideoEncodeH264GopRemainingFrameInfoKHR::VideoEncodeH264GopRemainingFrameInfoKHR(
    const VideoEncodeH264GopRemainingFrameInfoKHR& copy_src) {
    sType = copy_src.sType;
    useGopRemainingFrames = copy_src.useGopRemainingFrames;
    gopRemainingI = copy_src.gopRemainingI;
    gopRemainingP = copy_src.gopRemainingP;
    gopRemainingB = copy_src.gopRemainingB;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH264GopRemainingFrameInfoKHR& VideoEncodeH264GopRemainingFrameInfoKHR::operator=(
    const VideoEncodeH264GopRemainingFrameInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useGopRemainingFrames = copy_src.useGopRemainingFrames;
    gopRemainingI = copy_src.gopRemainingI;
    gopRemainingP = copy_src.gopRemainingP;
    gopRemainingB = copy_src.gopRemainingB;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH264GopRemainingFrameInfoKHR::~VideoEncodeH264GopRemainingFrameInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH264GopRemainingFrameInfoKHR::initialize(const VkVideoEncodeH264GopRemainingFrameInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useGopRemainingFrames = in_struct->useGopRemainingFrames;
    gopRemainingI = in_struct->gopRemainingI;
    gopRemainingP = in_struct->gopRemainingP;
    gopRemainingB = in_struct->gopRemainingB;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH264GopRemainingFrameInfoKHR::initialize(const VideoEncodeH264GopRemainingFrameInfoKHR* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useGopRemainingFrames = copy_src->useGopRemainingFrames;
    gopRemainingI = copy_src->gopRemainingI;
    gopRemainingP = copy_src->gopRemainingP;
    gopRemainingB = copy_src->gopRemainingB;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265CapabilitiesKHR::VideoEncodeH265CapabilitiesKHR(const VkVideoEncodeH265CapabilitiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      maxLevelIdc(in_struct->maxLevelIdc),
      maxSliceSegmentCount(in_struct->maxSliceSegmentCount),
      maxTiles(in_struct->maxTiles),
      ctbSizes(in_struct->ctbSizes),
      transformBlockSizes(in_struct->transformBlockSizes),
      maxPPictureL0ReferenceCount(in_struct->maxPPictureL0ReferenceCount),
      maxBPictureL0ReferenceCount(in_struct->maxBPictureL0ReferenceCount),
      maxL1ReferenceCount(in_struct->maxL1ReferenceCount),
      maxSubLayerCount(in_struct->maxSubLayerCount),
      expectDyadicTemporalSubLayerPattern(in_struct->expectDyadicTemporalSubLayerPattern),
      minQp(in_struct->minQp),
      maxQp(in_struct->maxQp),
      prefersGopRemainingFrames(in_struct->prefersGopRemainingFrames),
      requiresGopRemainingFrames(in_struct->requiresGopRemainingFrames),
      stdSyntaxFlags(in_struct->stdSyntaxFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265CapabilitiesKHR::VideoEncodeH265CapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR),
      pNext(nullptr),
      flags(),
      maxLevelIdc(),
      maxSliceSegmentCount(),
      maxTiles(),
      ctbSizes(),
      transformBlockSizes(),
      maxPPictureL0ReferenceCount(),
      maxBPictureL0ReferenceCount(),
      maxL1ReferenceCount(),
      maxSubLayerCount(),
      expectDyadicTemporalSubLayerPattern(),
      minQp(),
      maxQp(),
      prefersGopRemainingFrames(),
      requiresGopRemainingFrames(),
      stdSyntaxFlags() {}

VideoEncodeH265CapabilitiesKHR::VideoEncodeH265CapabilitiesKHR(const VideoEncodeH265CapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    maxLevelIdc = copy_src.maxLevelIdc;
    maxSliceSegmentCount = copy_src.maxSliceSegmentCount;
    maxTiles = copy_src.maxTiles;
    ctbSizes = copy_src.ctbSizes;
    transformBlockSizes = copy_src.transformBlockSizes;
    maxPPictureL0ReferenceCount = copy_src.maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src.maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src.maxL1ReferenceCount;
    maxSubLayerCount = copy_src.maxSubLayerCount;
    expectDyadicTemporalSubLayerPattern = copy_src.expectDyadicTemporalSubLayerPattern;
    minQp = copy_src.minQp;
    maxQp = copy_src.maxQp;
    prefersGopRemainingFrames = copy_src.prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src.requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src.stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265CapabilitiesKHR& VideoEncodeH265CapabilitiesKHR::operator=(const VideoEncodeH265CapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    maxLevelIdc = copy_src.maxLevelIdc;
    maxSliceSegmentCount = copy_src.maxSliceSegmentCount;
    maxTiles = copy_src.maxTiles;
    ctbSizes = copy_src.ctbSizes;
    transformBlockSizes = copy_src.transformBlockSizes;
    maxPPictureL0ReferenceCount = copy_src.maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src.maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src.maxL1ReferenceCount;
    maxSubLayerCount = copy_src.maxSubLayerCount;
    expectDyadicTemporalSubLayerPattern = copy_src.expectDyadicTemporalSubLayerPattern;
    minQp = copy_src.minQp;
    maxQp = copy_src.maxQp;
    prefersGopRemainingFrames = copy_src.prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src.requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src.stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265CapabilitiesKHR::~VideoEncodeH265CapabilitiesKHR() { FreePnextChain(pNext); }

void VideoEncodeH265CapabilitiesKHR::initialize(const VkVideoEncodeH265CapabilitiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    maxLevelIdc = in_struct->maxLevelIdc;
    maxSliceSegmentCount = in_struct->maxSliceSegmentCount;
    maxTiles = in_struct->maxTiles;
    ctbSizes = in_struct->ctbSizes;
    transformBlockSizes = in_struct->transformBlockSizes;
    maxPPictureL0ReferenceCount = in_struct->maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = in_struct->maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = in_struct->maxL1ReferenceCount;
    maxSubLayerCount = in_struct->maxSubLayerCount;
    expectDyadicTemporalSubLayerPattern = in_struct->expectDyadicTemporalSubLayerPattern;
    minQp = in_struct->minQp;
    maxQp = in_struct->maxQp;
    prefersGopRemainingFrames = in_struct->prefersGopRemainingFrames;
    requiresGopRemainingFrames = in_struct->requiresGopRemainingFrames;
    stdSyntaxFlags = in_struct->stdSyntaxFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265CapabilitiesKHR::initialize(const VideoEncodeH265CapabilitiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    maxLevelIdc = copy_src->maxLevelIdc;
    maxSliceSegmentCount = copy_src->maxSliceSegmentCount;
    maxTiles = copy_src->maxTiles;
    ctbSizes = copy_src->ctbSizes;
    transformBlockSizes = copy_src->transformBlockSizes;
    maxPPictureL0ReferenceCount = copy_src->maxPPictureL0ReferenceCount;
    maxBPictureL0ReferenceCount = copy_src->maxBPictureL0ReferenceCount;
    maxL1ReferenceCount = copy_src->maxL1ReferenceCount;
    maxSubLayerCount = copy_src->maxSubLayerCount;
    expectDyadicTemporalSubLayerPattern = copy_src->expectDyadicTemporalSubLayerPattern;
    minQp = copy_src->minQp;
    maxQp = copy_src->maxQp;
    prefersGopRemainingFrames = copy_src->prefersGopRemainingFrames;
    requiresGopRemainingFrames = copy_src->requiresGopRemainingFrames;
    stdSyntaxFlags = copy_src->stdSyntaxFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265SessionCreateInfoKHR::VideoEncodeH265SessionCreateInfoKHR(const VkVideoEncodeH265SessionCreateInfoKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), useMaxLevelIdc(in_struct->useMaxLevelIdc), maxLevelIdc(in_struct->maxLevelIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265SessionCreateInfoKHR::VideoEncodeH265SessionCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR), pNext(nullptr), useMaxLevelIdc(), maxLevelIdc() {}

VideoEncodeH265SessionCreateInfoKHR::VideoEncodeH265SessionCreateInfoKHR(const VideoEncodeH265SessionCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    useMaxLevelIdc = copy_src.useMaxLevelIdc;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265SessionCreateInfoKHR& VideoEncodeH265SessionCreateInfoKHR::operator=(
    const VideoEncodeH265SessionCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useMaxLevelIdc = copy_src.useMaxLevelIdc;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265SessionCreateInfoKHR::~VideoEncodeH265SessionCreateInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265SessionCreateInfoKHR::initialize(const VkVideoEncodeH265SessionCreateInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useMaxLevelIdc = in_struct->useMaxLevelIdc;
    maxLevelIdc = in_struct->maxLevelIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265SessionCreateInfoKHR::initialize(const VideoEncodeH265SessionCreateInfoKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useMaxLevelIdc = copy_src->useMaxLevelIdc;
    maxLevelIdc = copy_src->maxLevelIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265QualityLevelPropertiesKHR::VideoEncodeH265QualityLevelPropertiesKHR(
    const VkVideoEncodeH265QualityLevelPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      preferredRateControlFlags(in_struct->preferredRateControlFlags),
      preferredGopFrameCount(in_struct->preferredGopFrameCount),
      preferredIdrPeriod(in_struct->preferredIdrPeriod),
      preferredConsecutiveBFrameCount(in_struct->preferredConsecutiveBFrameCount),
      preferredSubLayerCount(in_struct->preferredSubLayerCount),
      preferredConstantQp(in_struct->preferredConstantQp),
      preferredMaxL0ReferenceCount(in_struct->preferredMaxL0ReferenceCount),
      preferredMaxL1ReferenceCount(in_struct->preferredMaxL1ReferenceCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265QualityLevelPropertiesKHR::VideoEncodeH265QualityLevelPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR),
      pNext(nullptr),
      preferredRateControlFlags(),
      preferredGopFrameCount(),
      preferredIdrPeriod(),
      preferredConsecutiveBFrameCount(),
      preferredSubLayerCount(),
      preferredConstantQp(),
      preferredMaxL0ReferenceCount(),
      preferredMaxL1ReferenceCount() {}

VideoEncodeH265QualityLevelPropertiesKHR::VideoEncodeH265QualityLevelPropertiesKHR(
    const VideoEncodeH265QualityLevelPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    preferredRateControlFlags = copy_src.preferredRateControlFlags;
    preferredGopFrameCount = copy_src.preferredGopFrameCount;
    preferredIdrPeriod = copy_src.preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src.preferredConsecutiveBFrameCount;
    preferredSubLayerCount = copy_src.preferredSubLayerCount;
    preferredConstantQp = copy_src.preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src.preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src.preferredMaxL1ReferenceCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265QualityLevelPropertiesKHR& VideoEncodeH265QualityLevelPropertiesKHR::operator=(
    const VideoEncodeH265QualityLevelPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    preferredRateControlFlags = copy_src.preferredRateControlFlags;
    preferredGopFrameCount = copy_src.preferredGopFrameCount;
    preferredIdrPeriod = copy_src.preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src.preferredConsecutiveBFrameCount;
    preferredSubLayerCount = copy_src.preferredSubLayerCount;
    preferredConstantQp = copy_src.preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src.preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src.preferredMaxL1ReferenceCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265QualityLevelPropertiesKHR::~VideoEncodeH265QualityLevelPropertiesKHR() { FreePnextChain(pNext); }

void VideoEncodeH265QualityLevelPropertiesKHR::initialize(const VkVideoEncodeH265QualityLevelPropertiesKHR* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    preferredRateControlFlags = in_struct->preferredRateControlFlags;
    preferredGopFrameCount = in_struct->preferredGopFrameCount;
    preferredIdrPeriod = in_struct->preferredIdrPeriod;
    preferredConsecutiveBFrameCount = in_struct->preferredConsecutiveBFrameCount;
    preferredSubLayerCount = in_struct->preferredSubLayerCount;
    preferredConstantQp = in_struct->preferredConstantQp;
    preferredMaxL0ReferenceCount = in_struct->preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = in_struct->preferredMaxL1ReferenceCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265QualityLevelPropertiesKHR::initialize(const VideoEncodeH265QualityLevelPropertiesKHR* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    preferredRateControlFlags = copy_src->preferredRateControlFlags;
    preferredGopFrameCount = copy_src->preferredGopFrameCount;
    preferredIdrPeriod = copy_src->preferredIdrPeriod;
    preferredConsecutiveBFrameCount = copy_src->preferredConsecutiveBFrameCount;
    preferredSubLayerCount = copy_src->preferredSubLayerCount;
    preferredConstantQp = copy_src->preferredConstantQp;
    preferredMaxL0ReferenceCount = copy_src->preferredMaxL0ReferenceCount;
    preferredMaxL1ReferenceCount = copy_src->preferredMaxL1ReferenceCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265SessionParametersAddInfoKHR::VideoEncodeH265SessionParametersAddInfoKHR(
    const VkVideoEncodeH265SessionParametersAddInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stdVPSCount(in_struct->stdVPSCount),
      pStdVPSs(nullptr),
      stdSPSCount(in_struct->stdSPSCount),
      pStdSPSs(nullptr),
      stdPPSCount(in_struct->stdPPSCount),
      pStdPPSs(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[in_struct->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)in_struct->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * in_struct->stdVPSCount);
    }

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * in_struct->stdPPSCount);
    }
}

VideoEncodeH265SessionParametersAddInfoKHR::VideoEncodeH265SessionParametersAddInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR),
      pNext(nullptr),
      stdVPSCount(),
      pStdVPSs(nullptr),
      stdSPSCount(),
      pStdSPSs(nullptr),
      stdPPSCount(),
      pStdPPSs(nullptr) {}

VideoEncodeH265SessionParametersAddInfoKHR::VideoEncodeH265SessionParametersAddInfoKHR(
    const VideoEncodeH265SessionParametersAddInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdVPSCount = copy_src.stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src.stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src.pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src.stdVPSCount);
    }

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src.stdPPSCount);
    }
}

VideoEncodeH265SessionParametersAddInfoKHR& VideoEncodeH265SessionParametersAddInfoKHR::operator=(
    const VideoEncodeH265SessionParametersAddInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdVPSCount = copy_src.stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src.stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src.pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src.stdVPSCount);
    }

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src.stdPPSCount);
    }

    return *this;
}

VideoEncodeH265SessionParametersAddInfoKHR::~VideoEncodeH265SessionParametersAddInfoKHR() {
    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
}

void VideoEncodeH265SessionParametersAddInfoKHR::initialize(const VkVideoEncodeH265SessionParametersAddInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdVPSCount = in_struct->stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = in_struct->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = in_struct->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[in_struct->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)in_struct->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * in_struct->stdVPSCount);
    }

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * in_struct->stdPPSCount);
    }
}

void VideoEncodeH265SessionParametersAddInfoKHR::initialize(const VideoEncodeH265SessionParametersAddInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdVPSCount = copy_src->stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src->stdVPSCount);
    }

    if (copy_src->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src->stdSPSCount);
    }

    if (copy_src->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src->stdPPSCount);
    }
}

VideoEncodeH265SessionParametersCreateInfoKHR::VideoEncodeH265SessionParametersCreateInfoKHR(
    const VkVideoEncodeH265SessionParametersCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxStdVPSCount(in_struct->maxStdVPSCount),
      maxStdSPSCount(in_struct->maxStdSPSCount),
      maxStdPPSCount(in_struct->maxStdPPSCount),
      pParametersAddInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH265SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

VideoEncodeH265SessionParametersCreateInfoKHR::VideoEncodeH265SessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR),
      pNext(nullptr),
      maxStdVPSCount(),
      maxStdSPSCount(),
      maxStdPPSCount(),
      pParametersAddInfo(nullptr) {}

VideoEncodeH265SessionParametersCreateInfoKHR::VideoEncodeH265SessionParametersCreateInfoKHR(
    const VideoEncodeH265SessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    maxStdVPSCount = copy_src.maxStdVPSCount;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH265SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);
}

VideoEncodeH265SessionParametersCreateInfoKHR& VideoEncodeH265SessionParametersCreateInfoKHR::operator=(
    const VideoEncodeH265SessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxStdVPSCount = copy_src.maxStdVPSCount;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH265SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);

    return *this;
}

VideoEncodeH265SessionParametersCreateInfoKHR::~VideoEncodeH265SessionParametersCreateInfoKHR() {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH265SessionParametersCreateInfoKHR::initialize(const VkVideoEncodeH265SessionParametersCreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxStdVPSCount = in_struct->maxStdVPSCount;
    maxStdSPSCount = in_struct->maxStdSPSCount;
    maxStdPPSCount = in_struct->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH265SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

void VideoEncodeH265SessionParametersCreateInfoKHR::initialize(const VideoEncodeH265SessionParametersCreateInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxStdVPSCount = copy_src->maxStdVPSCount;
    maxStdSPSCount = copy_src->maxStdSPSCount;
    maxStdPPSCount = copy_src->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pParametersAddInfo)
        pParametersAddInfo = new VideoEncodeH265SessionParametersAddInfoKHR(*copy_src->pParametersAddInfo);
}

VideoEncodeH265SessionParametersGetInfoKHR::VideoEncodeH265SessionParametersGetInfoKHR(
    const VkVideoEncodeH265SessionParametersGetInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      writeStdVPS(in_struct->writeStdVPS),
      writeStdSPS(in_struct->writeStdSPS),
      writeStdPPS(in_struct->writeStdPPS),
      stdVPSId(in_struct->stdVPSId),
      stdSPSId(in_struct->stdSPSId),
      stdPPSId(in_struct->stdPPSId) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265SessionParametersGetInfoKHR::VideoEncodeH265SessionParametersGetInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR),
      pNext(nullptr),
      writeStdVPS(),
      writeStdSPS(),
      writeStdPPS(),
      stdVPSId(),
      stdSPSId(),
      stdPPSId() {}

VideoEncodeH265SessionParametersGetInfoKHR::VideoEncodeH265SessionParametersGetInfoKHR(
    const VideoEncodeH265SessionParametersGetInfoKHR& copy_src) {
    sType = copy_src.sType;
    writeStdVPS = copy_src.writeStdVPS;
    writeStdSPS = copy_src.writeStdSPS;
    writeStdPPS = copy_src.writeStdPPS;
    stdVPSId = copy_src.stdVPSId;
    stdSPSId = copy_src.stdSPSId;
    stdPPSId = copy_src.stdPPSId;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265SessionParametersGetInfoKHR& VideoEncodeH265SessionParametersGetInfoKHR::operator=(
    const VideoEncodeH265SessionParametersGetInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    writeStdVPS = copy_src.writeStdVPS;
    writeStdSPS = copy_src.writeStdSPS;
    writeStdPPS = copy_src.writeStdPPS;
    stdVPSId = copy_src.stdVPSId;
    stdSPSId = copy_src.stdSPSId;
    stdPPSId = copy_src.stdPPSId;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265SessionParametersGetInfoKHR::~VideoEncodeH265SessionParametersGetInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265SessionParametersGetInfoKHR::initialize(const VkVideoEncodeH265SessionParametersGetInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    writeStdVPS = in_struct->writeStdVPS;
    writeStdSPS = in_struct->writeStdSPS;
    writeStdPPS = in_struct->writeStdPPS;
    stdVPSId = in_struct->stdVPSId;
    stdSPSId = in_struct->stdSPSId;
    stdPPSId = in_struct->stdPPSId;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265SessionParametersGetInfoKHR::initialize(const VideoEncodeH265SessionParametersGetInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    writeStdVPS = copy_src->writeStdVPS;
    writeStdSPS = copy_src->writeStdSPS;
    writeStdPPS = copy_src->writeStdPPS;
    stdVPSId = copy_src->stdVPSId;
    stdSPSId = copy_src->stdSPSId;
    stdPPSId = copy_src->stdPPSId;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::VideoEncodeH265SessionParametersFeedbackInfoKHR(
    const VkVideoEncodeH265SessionParametersFeedbackInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      hasStdVPSOverrides(in_struct->hasStdVPSOverrides),
      hasStdSPSOverrides(in_struct->hasStdSPSOverrides),
      hasStdPPSOverrides(in_struct->hasStdPPSOverrides) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::VideoEncodeH265SessionParametersFeedbackInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR),
      pNext(nullptr),
      hasStdVPSOverrides(),
      hasStdSPSOverrides(),
      hasStdPPSOverrides() {}

VideoEncodeH265SessionParametersFeedbackInfoKHR::VideoEncodeH265SessionParametersFeedbackInfoKHR(
    const VideoEncodeH265SessionParametersFeedbackInfoKHR& copy_src) {
    sType = copy_src.sType;
    hasStdVPSOverrides = copy_src.hasStdVPSOverrides;
    hasStdSPSOverrides = copy_src.hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src.hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR& VideoEncodeH265SessionParametersFeedbackInfoKHR::operator=(
    const VideoEncodeH265SessionParametersFeedbackInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hasStdVPSOverrides = copy_src.hasStdVPSOverrides;
    hasStdSPSOverrides = copy_src.hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src.hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::~VideoEncodeH265SessionParametersFeedbackInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265SessionParametersFeedbackInfoKHR::initialize(const VkVideoEncodeH265SessionParametersFeedbackInfoKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hasStdVPSOverrides = in_struct->hasStdVPSOverrides;
    hasStdSPSOverrides = in_struct->hasStdSPSOverrides;
    hasStdPPSOverrides = in_struct->hasStdPPSOverrides;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265SessionParametersFeedbackInfoKHR::initialize(const VideoEncodeH265SessionParametersFeedbackInfoKHR* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hasStdVPSOverrides = copy_src->hasStdVPSOverrides;
    hasStdSPSOverrides = copy_src->hasStdSPSOverrides;
    hasStdPPSOverrides = copy_src->hasStdPPSOverrides;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265NaluSliceSegmentInfoKHR::VideoEncodeH265NaluSliceSegmentInfoKHR(
    const VkVideoEncodeH265NaluSliceSegmentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), constantQp(in_struct->constantQp), pStdSliceSegmentHeader(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdSliceSegmentHeader) {
        pStdSliceSegmentHeader = new StdVideoEncodeH265SliceSegmentHeader(*in_struct->pStdSliceSegmentHeader);
    }
}

VideoEncodeH265NaluSliceSegmentInfoKHR::VideoEncodeH265NaluSliceSegmentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR),
      pNext(nullptr),
      constantQp(),
      pStdSliceSegmentHeader(nullptr) {}

VideoEncodeH265NaluSliceSegmentInfoKHR::VideoEncodeH265NaluSliceSegmentInfoKHR(
    const VideoEncodeH265NaluSliceSegmentInfoKHR& copy_src) {
    sType = copy_src.sType;
    constantQp = copy_src.constantQp;
    pStdSliceSegmentHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSliceSegmentHeader) {
        pStdSliceSegmentHeader = new StdVideoEncodeH265SliceSegmentHeader(*copy_src.pStdSliceSegmentHeader);
    }
}

VideoEncodeH265NaluSliceSegmentInfoKHR& VideoEncodeH265NaluSliceSegmentInfoKHR::operator=(
    const VideoEncodeH265NaluSliceSegmentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdSliceSegmentHeader) delete pStdSliceSegmentHeader;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    constantQp = copy_src.constantQp;
    pStdSliceSegmentHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSliceSegmentHeader) {
        pStdSliceSegmentHeader = new StdVideoEncodeH265SliceSegmentHeader(*copy_src.pStdSliceSegmentHeader);
    }

    return *this;
}

VideoEncodeH265NaluSliceSegmentInfoKHR::~VideoEncodeH265NaluSliceSegmentInfoKHR() {
    if (pStdSliceSegmentHeader) delete pStdSliceSegmentHeader;
    FreePnextChain(pNext);
}

void VideoEncodeH265NaluSliceSegmentInfoKHR::initialize(const VkVideoEncodeH265NaluSliceSegmentInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdSliceSegmentHeader) delete pStdSliceSegmentHeader;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    constantQp = in_struct->constantQp;
    pStdSliceSegmentHeader = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdSliceSegmentHeader) {
        pStdSliceSegmentHeader = new StdVideoEncodeH265SliceSegmentHeader(*in_struct->pStdSliceSegmentHeader);
    }
}

void VideoEncodeH265NaluSliceSegmentInfoKHR::initialize(const VideoEncodeH265NaluSliceSegmentInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    constantQp = copy_src->constantQp;
    pStdSliceSegmentHeader = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdSliceSegmentHeader) {
        pStdSliceSegmentHeader = new StdVideoEncodeH265SliceSegmentHeader(*copy_src->pStdSliceSegmentHeader);
    }
}

VideoEncodeH265PictureInfoKHR::VideoEncodeH265PictureInfoKHR(const VkVideoEncodeH265PictureInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      naluSliceSegmentEntryCount(in_struct->naluSliceSegmentEntryCount),
      pNaluSliceSegmentEntries(nullptr),
      pStdPictureInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (naluSliceSegmentEntryCount && in_struct->pNaluSliceSegmentEntries) {
        pNaluSliceSegmentEntries = new VideoEncodeH265NaluSliceSegmentInfoKHR[naluSliceSegmentEntryCount];
        for (uint32_t i = 0; i < naluSliceSegmentEntryCount; ++i) {
            pNaluSliceSegmentEntries[i].initialize(&in_struct->pNaluSliceSegmentEntries[i]);
        }
    }

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH265PictureInfo(*in_struct->pStdPictureInfo);
    }
}

VideoEncodeH265PictureInfoKHR::VideoEncodeH265PictureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR),
      pNext(nullptr),
      naluSliceSegmentEntryCount(),
      pNaluSliceSegmentEntries(nullptr),
      pStdPictureInfo(nullptr) {}

VideoEncodeH265PictureInfoKHR::VideoEncodeH265PictureInfoKHR(const VideoEncodeH265PictureInfoKHR& copy_src) {
    sType = copy_src.sType;
    naluSliceSegmentEntryCount = copy_src.naluSliceSegmentEntryCount;
    pNaluSliceSegmentEntries = nullptr;
    pStdPictureInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (naluSliceSegmentEntryCount && copy_src.pNaluSliceSegmentEntries) {
        pNaluSliceSegmentEntries = new VideoEncodeH265NaluSliceSegmentInfoKHR[naluSliceSegmentEntryCount];
        for (uint32_t i = 0; i < naluSliceSegmentEntryCount; ++i) {
            pNaluSliceSegmentEntries[i].initialize(&copy_src.pNaluSliceSegmentEntries[i]);
        }
    }

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH265PictureInfo(*copy_src.pStdPictureInfo);
    }
}

VideoEncodeH265PictureInfoKHR& VideoEncodeH265PictureInfoKHR::operator=(const VideoEncodeH265PictureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pNaluSliceSegmentEntries) delete[] pNaluSliceSegmentEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    naluSliceSegmentEntryCount = copy_src.naluSliceSegmentEntryCount;
    pNaluSliceSegmentEntries = nullptr;
    pStdPictureInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (naluSliceSegmentEntryCount && copy_src.pNaluSliceSegmentEntries) {
        pNaluSliceSegmentEntries = new VideoEncodeH265NaluSliceSegmentInfoKHR[naluSliceSegmentEntryCount];
        for (uint32_t i = 0; i < naluSliceSegmentEntryCount; ++i) {
            pNaluSliceSegmentEntries[i].initialize(&copy_src.pNaluSliceSegmentEntries[i]);
        }
    }

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH265PictureInfo(*copy_src.pStdPictureInfo);
    }

    return *this;
}

VideoEncodeH265PictureInfoKHR::~VideoEncodeH265PictureInfoKHR() {
    if (pNaluSliceSegmentEntries) delete[] pNaluSliceSegmentEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH265PictureInfoKHR::initialize(const VkVideoEncodeH265PictureInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pNaluSliceSegmentEntries) delete[] pNaluSliceSegmentEntries;
    if (pStdPictureInfo) delete pStdPictureInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    naluSliceSegmentEntryCount = in_struct->naluSliceSegmentEntryCount;
    pNaluSliceSegmentEntries = nullptr;
    pStdPictureInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (naluSliceSegmentEntryCount && in_struct->pNaluSliceSegmentEntries) {
        pNaluSliceSegmentEntries = new VideoEncodeH265NaluSliceSegmentInfoKHR[naluSliceSegmentEntryCount];
        for (uint32_t i = 0; i < naluSliceSegmentEntryCount; ++i) {
            pNaluSliceSegmentEntries[i].initialize(&in_struct->pNaluSliceSegmentEntries[i]);
        }
    }

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH265PictureInfo(*in_struct->pStdPictureInfo);
    }
}

void VideoEncodeH265PictureInfoKHR::initialize(const VideoEncodeH265PictureInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    naluSliceSegmentEntryCount = copy_src->naluSliceSegmentEntryCount;
    pNaluSliceSegmentEntries = nullptr;
    pStdPictureInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (naluSliceSegmentEntryCount && copy_src->pNaluSliceSegmentEntries) {
        pNaluSliceSegmentEntries = new VideoEncodeH265NaluSliceSegmentInfoKHR[naluSliceSegmentEntryCount];
        for (uint32_t i = 0; i < naluSliceSegmentEntryCount; ++i) {
            pNaluSliceSegmentEntries[i].initialize(&copy_src->pNaluSliceSegmentEntries[i]);
        }
    }

    if (copy_src->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoEncodeH265PictureInfo(*copy_src->pStdPictureInfo);
    }
}

VideoEncodeH265DpbSlotInfoKHR::VideoEncodeH265DpbSlotInfoKHR(const VkVideoEncodeH265DpbSlotInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdReferenceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH265ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

VideoEncodeH265DpbSlotInfoKHR::VideoEncodeH265DpbSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR), pNext(nullptr), pStdReferenceInfo(nullptr) {}

VideoEncodeH265DpbSlotInfoKHR::VideoEncodeH265DpbSlotInfoKHR(const VideoEncodeH265DpbSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH265ReferenceInfo(*copy_src.pStdReferenceInfo);
    }
}

VideoEncodeH265DpbSlotInfoKHR& VideoEncodeH265DpbSlotInfoKHR::operator=(const VideoEncodeH265DpbSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH265ReferenceInfo(*copy_src.pStdReferenceInfo);
    }

    return *this;
}

VideoEncodeH265DpbSlotInfoKHR::~VideoEncodeH265DpbSlotInfoKHR() {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
}

void VideoEncodeH265DpbSlotInfoKHR::initialize(const VkVideoEncodeH265DpbSlotInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH265ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

void VideoEncodeH265DpbSlotInfoKHR::initialize(const VideoEncodeH265DpbSlotInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoEncodeH265ReferenceInfo(*copy_src->pStdReferenceInfo);
    }
}

VideoEncodeH265ProfileInfoKHR::VideoEncodeH265ProfileInfoKHR(const VkVideoEncodeH265ProfileInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stdProfileIdc(in_struct->stdProfileIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265ProfileInfoKHR::VideoEncodeH265ProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR), pNext(nullptr), stdProfileIdc() {}

VideoEncodeH265ProfileInfoKHR::VideoEncodeH265ProfileInfoKHR(const VideoEncodeH265ProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265ProfileInfoKHR& VideoEncodeH265ProfileInfoKHR::operator=(const VideoEncodeH265ProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265ProfileInfoKHR::~VideoEncodeH265ProfileInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265ProfileInfoKHR::initialize(const VkVideoEncodeH265ProfileInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdProfileIdc = in_struct->stdProfileIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265ProfileInfoKHR::initialize(const VideoEncodeH265ProfileInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdProfileIdc = copy_src->stdProfileIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265RateControlInfoKHR::VideoEncodeH265RateControlInfoKHR(const VkVideoEncodeH265RateControlInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      gopFrameCount(in_struct->gopFrameCount),
      idrPeriod(in_struct->idrPeriod),
      consecutiveBFrameCount(in_struct->consecutiveBFrameCount),
      subLayerCount(in_struct->subLayerCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265RateControlInfoKHR::VideoEncodeH265RateControlInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR),
      pNext(nullptr),
      flags(),
      gopFrameCount(),
      idrPeriod(),
      consecutiveBFrameCount(),
      subLayerCount() {}

VideoEncodeH265RateControlInfoKHR::VideoEncodeH265RateControlInfoKHR(const VideoEncodeH265RateControlInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    gopFrameCount = copy_src.gopFrameCount;
    idrPeriod = copy_src.idrPeriod;
    consecutiveBFrameCount = copy_src.consecutiveBFrameCount;
    subLayerCount = copy_src.subLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265RateControlInfoKHR& VideoEncodeH265RateControlInfoKHR::operator=(const VideoEncodeH265RateControlInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    gopFrameCount = copy_src.gopFrameCount;
    idrPeriod = copy_src.idrPeriod;
    consecutiveBFrameCount = copy_src.consecutiveBFrameCount;
    subLayerCount = copy_src.subLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265RateControlInfoKHR::~VideoEncodeH265RateControlInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265RateControlInfoKHR::initialize(const VkVideoEncodeH265RateControlInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    gopFrameCount = in_struct->gopFrameCount;
    idrPeriod = in_struct->idrPeriod;
    consecutiveBFrameCount = in_struct->consecutiveBFrameCount;
    subLayerCount = in_struct->subLayerCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265RateControlInfoKHR::initialize(const VideoEncodeH265RateControlInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    gopFrameCount = copy_src->gopFrameCount;
    idrPeriod = copy_src->idrPeriod;
    consecutiveBFrameCount = copy_src->consecutiveBFrameCount;
    subLayerCount = copy_src->subLayerCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265RateControlLayerInfoKHR::VideoEncodeH265RateControlLayerInfoKHR(
    const VkVideoEncodeH265RateControlLayerInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      useMinQp(in_struct->useMinQp),
      minQp(in_struct->minQp),
      useMaxQp(in_struct->useMaxQp),
      maxQp(in_struct->maxQp),
      useMaxFrameSize(in_struct->useMaxFrameSize),
      maxFrameSize(in_struct->maxFrameSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265RateControlLayerInfoKHR::VideoEncodeH265RateControlLayerInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR),
      pNext(nullptr),
      useMinQp(),
      minQp(),
      useMaxQp(),
      maxQp(),
      useMaxFrameSize(),
      maxFrameSize() {}

VideoEncodeH265RateControlLayerInfoKHR::VideoEncodeH265RateControlLayerInfoKHR(
    const VideoEncodeH265RateControlLayerInfoKHR& copy_src) {
    sType = copy_src.sType;
    useMinQp = copy_src.useMinQp;
    minQp = copy_src.minQp;
    useMaxQp = copy_src.useMaxQp;
    maxQp = copy_src.maxQp;
    useMaxFrameSize = copy_src.useMaxFrameSize;
    maxFrameSize = copy_src.maxFrameSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265RateControlLayerInfoKHR& VideoEncodeH265RateControlLayerInfoKHR::operator=(
    const VideoEncodeH265RateControlLayerInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useMinQp = copy_src.useMinQp;
    minQp = copy_src.minQp;
    useMaxQp = copy_src.useMaxQp;
    maxQp = copy_src.maxQp;
    useMaxFrameSize = copy_src.useMaxFrameSize;
    maxFrameSize = copy_src.maxFrameSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265RateControlLayerInfoKHR::~VideoEncodeH265RateControlLayerInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265RateControlLayerInfoKHR::initialize(const VkVideoEncodeH265RateControlLayerInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useMinQp = in_struct->useMinQp;
    minQp = in_struct->minQp;
    useMaxQp = in_struct->useMaxQp;
    maxQp = in_struct->maxQp;
    useMaxFrameSize = in_struct->useMaxFrameSize;
    maxFrameSize = in_struct->maxFrameSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265RateControlLayerInfoKHR::initialize(const VideoEncodeH265RateControlLayerInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useMinQp = copy_src->useMinQp;
    minQp = copy_src->minQp;
    useMaxQp = copy_src->useMaxQp;
    maxQp = copy_src->maxQp;
    useMaxFrameSize = copy_src->useMaxFrameSize;
    maxFrameSize = copy_src->maxFrameSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeH265GopRemainingFrameInfoKHR::VideoEncodeH265GopRemainingFrameInfoKHR(
    const VkVideoEncodeH265GopRemainingFrameInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      useGopRemainingFrames(in_struct->useGopRemainingFrames),
      gopRemainingI(in_struct->gopRemainingI),
      gopRemainingP(in_struct->gopRemainingP),
      gopRemainingB(in_struct->gopRemainingB) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeH265GopRemainingFrameInfoKHR::VideoEncodeH265GopRemainingFrameInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR),
      pNext(nullptr),
      useGopRemainingFrames(),
      gopRemainingI(),
      gopRemainingP(),
      gopRemainingB() {}

VideoEncodeH265GopRemainingFrameInfoKHR::VideoEncodeH265GopRemainingFrameInfoKHR(
    const VideoEncodeH265GopRemainingFrameInfoKHR& copy_src) {
    sType = copy_src.sType;
    useGopRemainingFrames = copy_src.useGopRemainingFrames;
    gopRemainingI = copy_src.gopRemainingI;
    gopRemainingP = copy_src.gopRemainingP;
    gopRemainingB = copy_src.gopRemainingB;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeH265GopRemainingFrameInfoKHR& VideoEncodeH265GopRemainingFrameInfoKHR::operator=(
    const VideoEncodeH265GopRemainingFrameInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    useGopRemainingFrames = copy_src.useGopRemainingFrames;
    gopRemainingI = copy_src.gopRemainingI;
    gopRemainingP = copy_src.gopRemainingP;
    gopRemainingB = copy_src.gopRemainingB;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeH265GopRemainingFrameInfoKHR::~VideoEncodeH265GopRemainingFrameInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeH265GopRemainingFrameInfoKHR::initialize(const VkVideoEncodeH265GopRemainingFrameInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    useGopRemainingFrames = in_struct->useGopRemainingFrames;
    gopRemainingI = in_struct->gopRemainingI;
    gopRemainingP = in_struct->gopRemainingP;
    gopRemainingB = in_struct->gopRemainingB;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeH265GopRemainingFrameInfoKHR::initialize(const VideoEncodeH265GopRemainingFrameInfoKHR* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    useGopRemainingFrames = copy_src->useGopRemainingFrames;
    gopRemainingI = copy_src->gopRemainingI;
    gopRemainingP = copy_src->gopRemainingP;
    gopRemainingB = copy_src->gopRemainingB;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH264ProfileInfoKHR::VideoDecodeH264ProfileInfoKHR(const VkVideoDecodeH264ProfileInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stdProfileIdc(in_struct->stdProfileIdc), pictureLayout(in_struct->pictureLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeH264ProfileInfoKHR::VideoDecodeH264ProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR), pNext(nullptr), stdProfileIdc(), pictureLayout() {}

VideoDecodeH264ProfileInfoKHR::VideoDecodeH264ProfileInfoKHR(const VideoDecodeH264ProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pictureLayout = copy_src.pictureLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeH264ProfileInfoKHR& VideoDecodeH264ProfileInfoKHR::operator=(const VideoDecodeH264ProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pictureLayout = copy_src.pictureLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeH264ProfileInfoKHR::~VideoDecodeH264ProfileInfoKHR() { FreePnextChain(pNext); }

void VideoDecodeH264ProfileInfoKHR::initialize(const VkVideoDecodeH264ProfileInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdProfileIdc = in_struct->stdProfileIdc;
    pictureLayout = in_struct->pictureLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeH264ProfileInfoKHR::initialize(const VideoDecodeH264ProfileInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdProfileIdc = copy_src->stdProfileIdc;
    pictureLayout = copy_src->pictureLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH264CapabilitiesKHR::VideoDecodeH264CapabilitiesKHR(const VkVideoDecodeH264CapabilitiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxLevelIdc(in_struct->maxLevelIdc), fieldOffsetGranularity(in_struct->fieldOffsetGranularity) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeH264CapabilitiesKHR::VideoDecodeH264CapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR), pNext(nullptr), maxLevelIdc(), fieldOffsetGranularity() {}

VideoDecodeH264CapabilitiesKHR::VideoDecodeH264CapabilitiesKHR(const VideoDecodeH264CapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    maxLevelIdc = copy_src.maxLevelIdc;
    fieldOffsetGranularity = copy_src.fieldOffsetGranularity;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeH264CapabilitiesKHR& VideoDecodeH264CapabilitiesKHR::operator=(const VideoDecodeH264CapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxLevelIdc = copy_src.maxLevelIdc;
    fieldOffsetGranularity = copy_src.fieldOffsetGranularity;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeH264CapabilitiesKHR::~VideoDecodeH264CapabilitiesKHR() { FreePnextChain(pNext); }

void VideoDecodeH264CapabilitiesKHR::initialize(const VkVideoDecodeH264CapabilitiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxLevelIdc = in_struct->maxLevelIdc;
    fieldOffsetGranularity = in_struct->fieldOffsetGranularity;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeH264CapabilitiesKHR::initialize(const VideoDecodeH264CapabilitiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxLevelIdc = copy_src->maxLevelIdc;
    fieldOffsetGranularity = copy_src->fieldOffsetGranularity;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH264SessionParametersAddInfoKHR::VideoDecodeH264SessionParametersAddInfoKHR(
    const VkVideoDecodeH264SessionParametersAddInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stdSPSCount(in_struct->stdSPSCount),
      pStdSPSs(nullptr),
      stdPPSCount(in_struct->stdPPSCount),
      pStdPPSs(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * in_struct->stdPPSCount);
    }
}

VideoDecodeH264SessionParametersAddInfoKHR::VideoDecodeH264SessionParametersAddInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR),
      pNext(nullptr),
      stdSPSCount(),
      pStdSPSs(nullptr),
      stdPPSCount(),
      pStdPPSs(nullptr) {}

VideoDecodeH264SessionParametersAddInfoKHR::VideoDecodeH264SessionParametersAddInfoKHR(
    const VideoDecodeH264SessionParametersAddInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src.stdPPSCount);
    }
}

VideoDecodeH264SessionParametersAddInfoKHR& VideoDecodeH264SessionParametersAddInfoKHR::operator=(
    const VideoDecodeH264SessionParametersAddInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src.stdPPSCount);
    }

    return *this;
}

VideoDecodeH264SessionParametersAddInfoKHR::~VideoDecodeH264SessionParametersAddInfoKHR() {
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
}

void VideoDecodeH264SessionParametersAddInfoKHR::initialize(const VkVideoDecodeH264SessionParametersAddInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdSPSCount = in_struct->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = in_struct->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * in_struct->stdPPSCount);
    }
}

void VideoDecodeH264SessionParametersAddInfoKHR::initialize(const VideoDecodeH264SessionParametersAddInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdSPSCount = copy_src->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdSPSs) {
        pStdSPSs = new StdVideoH264SequenceParameterSet[copy_src->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src->pStdSPSs, sizeof(StdVideoH264SequenceParameterSet) * copy_src->stdSPSCount);
    }

    if (copy_src->pStdPPSs) {
        pStdPPSs = new StdVideoH264PictureParameterSet[copy_src->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src->pStdPPSs, sizeof(StdVideoH264PictureParameterSet) * copy_src->stdPPSCount);
    }
}

VideoDecodeH264SessionParametersCreateInfoKHR::VideoDecodeH264SessionParametersCreateInfoKHR(
    const VkVideoDecodeH264SessionParametersCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxStdSPSCount(in_struct->maxStdSPSCount),
      maxStdPPSCount(in_struct->maxStdPPSCount),
      pParametersAddInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH264SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

VideoDecodeH264SessionParametersCreateInfoKHR::VideoDecodeH264SessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR),
      pNext(nullptr),
      maxStdSPSCount(),
      maxStdPPSCount(),
      pParametersAddInfo(nullptr) {}

VideoDecodeH264SessionParametersCreateInfoKHR::VideoDecodeH264SessionParametersCreateInfoKHR(
    const VideoDecodeH264SessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH264SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);
}

VideoDecodeH264SessionParametersCreateInfoKHR& VideoDecodeH264SessionParametersCreateInfoKHR::operator=(
    const VideoDecodeH264SessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH264SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);

    return *this;
}

VideoDecodeH264SessionParametersCreateInfoKHR::~VideoDecodeH264SessionParametersCreateInfoKHR() {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
}

void VideoDecodeH264SessionParametersCreateInfoKHR::initialize(const VkVideoDecodeH264SessionParametersCreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxStdSPSCount = in_struct->maxStdSPSCount;
    maxStdPPSCount = in_struct->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH264SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

void VideoDecodeH264SessionParametersCreateInfoKHR::initialize(const VideoDecodeH264SessionParametersCreateInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxStdSPSCount = copy_src->maxStdSPSCount;
    maxStdPPSCount = copy_src->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH264SessionParametersAddInfoKHR(*copy_src->pParametersAddInfo);
}

VideoDecodeH264PictureInfoKHR::VideoDecodeH264PictureInfoKHR(const VkVideoDecodeH264PictureInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdPictureInfo(nullptr), sliceCount(in_struct->sliceCount), pSliceOffsets(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH264PictureInfo(*in_struct->pStdPictureInfo);
    }

    if (in_struct->pSliceOffsets) {
        pSliceOffsets = new uint32_t[in_struct->sliceCount];
        memcpy((void*)pSliceOffsets, (void*)in_struct->pSliceOffsets, sizeof(uint32_t) * in_struct->sliceCount);
    }
}

VideoDecodeH264PictureInfoKHR::VideoDecodeH264PictureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR),
      pNext(nullptr),
      pStdPictureInfo(nullptr),
      sliceCount(),
      pSliceOffsets(nullptr) {}

VideoDecodeH264PictureInfoKHR::VideoDecodeH264PictureInfoKHR(const VideoDecodeH264PictureInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    sliceCount = copy_src.sliceCount;
    pSliceOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH264PictureInfo(*copy_src.pStdPictureInfo);
    }

    if (copy_src.pSliceOffsets) {
        pSliceOffsets = new uint32_t[copy_src.sliceCount];
        memcpy((void*)pSliceOffsets, (void*)copy_src.pSliceOffsets, sizeof(uint32_t) * copy_src.sliceCount);
    }
}

VideoDecodeH264PictureInfoKHR& VideoDecodeH264PictureInfoKHR::operator=(const VideoDecodeH264PictureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceOffsets) delete[] pSliceOffsets;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    sliceCount = copy_src.sliceCount;
    pSliceOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH264PictureInfo(*copy_src.pStdPictureInfo);
    }

    if (copy_src.pSliceOffsets) {
        pSliceOffsets = new uint32_t[copy_src.sliceCount];
        memcpy((void*)pSliceOffsets, (void*)copy_src.pSliceOffsets, sizeof(uint32_t) * copy_src.sliceCount);
    }

    return *this;
}

VideoDecodeH264PictureInfoKHR::~VideoDecodeH264PictureInfoKHR() {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceOffsets) delete[] pSliceOffsets;
    FreePnextChain(pNext);
}

void VideoDecodeH264PictureInfoKHR::initialize(const VkVideoDecodeH264PictureInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceOffsets) delete[] pSliceOffsets;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdPictureInfo = nullptr;
    sliceCount = in_struct->sliceCount;
    pSliceOffsets = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH264PictureInfo(*in_struct->pStdPictureInfo);
    }

    if (in_struct->pSliceOffsets) {
        pSliceOffsets = new uint32_t[in_struct->sliceCount];
        memcpy((void*)pSliceOffsets, (void*)in_struct->pSliceOffsets, sizeof(uint32_t) * in_struct->sliceCount);
    }
}

void VideoDecodeH264PictureInfoKHR::initialize(const VideoDecodeH264PictureInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdPictureInfo = nullptr;
    sliceCount = copy_src->sliceCount;
    pSliceOffsets = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH264PictureInfo(*copy_src->pStdPictureInfo);
    }

    if (copy_src->pSliceOffsets) {
        pSliceOffsets = new uint32_t[copy_src->sliceCount];
        memcpy((void*)pSliceOffsets, (void*)copy_src->pSliceOffsets, sizeof(uint32_t) * copy_src->sliceCount);
    }
}

VideoDecodeH264DpbSlotInfoKHR::VideoDecodeH264DpbSlotInfoKHR(const VkVideoDecodeH264DpbSlotInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdReferenceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH264ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

VideoDecodeH264DpbSlotInfoKHR::VideoDecodeH264DpbSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR), pNext(nullptr), pStdReferenceInfo(nullptr) {}

VideoDecodeH264DpbSlotInfoKHR::VideoDecodeH264DpbSlotInfoKHR(const VideoDecodeH264DpbSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH264ReferenceInfo(*copy_src.pStdReferenceInfo);
    }
}

VideoDecodeH264DpbSlotInfoKHR& VideoDecodeH264DpbSlotInfoKHR::operator=(const VideoDecodeH264DpbSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH264ReferenceInfo(*copy_src.pStdReferenceInfo);
    }

    return *this;
}

VideoDecodeH264DpbSlotInfoKHR::~VideoDecodeH264DpbSlotInfoKHR() {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
}

void VideoDecodeH264DpbSlotInfoKHR::initialize(const VkVideoDecodeH264DpbSlotInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH264ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

void VideoDecodeH264DpbSlotInfoKHR::initialize(const VideoDecodeH264DpbSlotInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH264ReferenceInfo(*copy_src->pStdReferenceInfo);
    }
}

RenderingFragmentShadingRateAttachmentInfoKHR::RenderingFragmentShadingRateAttachmentInfoKHR(
    const VkRenderingFragmentShadingRateAttachmentInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageView(in_struct->imageView),
      imageLayout(in_struct->imageLayout),
      shadingRateAttachmentTexelSize(in_struct->shadingRateAttachmentTexelSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RenderingFragmentShadingRateAttachmentInfoKHR::RenderingFragmentShadingRateAttachmentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR),
      pNext(nullptr),
      imageView(),
      imageLayout(),
      shadingRateAttachmentTexelSize() {}

RenderingFragmentShadingRateAttachmentInfoKHR::RenderingFragmentShadingRateAttachmentInfoKHR(
    const RenderingFragmentShadingRateAttachmentInfoKHR& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    shadingRateAttachmentTexelSize = copy_src.shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

RenderingFragmentShadingRateAttachmentInfoKHR& RenderingFragmentShadingRateAttachmentInfoKHR::operator=(
    const RenderingFragmentShadingRateAttachmentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    shadingRateAttachmentTexelSize = copy_src.shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RenderingFragmentShadingRateAttachmentInfoKHR::~RenderingFragmentShadingRateAttachmentInfoKHR() { FreePnextChain(pNext); }

void RenderingFragmentShadingRateAttachmentInfoKHR::initialize(const VkRenderingFragmentShadingRateAttachmentInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    imageLayout = in_struct->imageLayout;
    shadingRateAttachmentTexelSize = in_struct->shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RenderingFragmentShadingRateAttachmentInfoKHR::initialize(const RenderingFragmentShadingRateAttachmentInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    imageLayout = copy_src->imageLayout;
    shadingRateAttachmentTexelSize = copy_src->shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

ImportMemoryWin32HandleInfoKHR::ImportMemoryWin32HandleInfoKHR(const VkImportMemoryWin32HandleInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), handle(in_struct->handle), name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryWin32HandleInfoKHR::ImportMemoryWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR), pNext(nullptr), handleType(), handle(), name() {}

ImportMemoryWin32HandleInfoKHR::ImportMemoryWin32HandleInfoKHR(const ImportMemoryWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryWin32HandleInfoKHR& ImportMemoryWin32HandleInfoKHR::operator=(const ImportMemoryWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryWin32HandleInfoKHR::~ImportMemoryWin32HandleInfoKHR() { FreePnextChain(pNext); }

void ImportMemoryWin32HandleInfoKHR::initialize(const VkImportMemoryWin32HandleInfoKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryWin32HandleInfoKHR::initialize(const ImportMemoryWin32HandleInfoKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    handle = copy_src->handle;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportMemoryWin32HandleInfoKHR::ExportMemoryWin32HandleInfoKHR(const VkExportMemoryWin32HandleInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pAttributes(nullptr), dwAccess(in_struct->dwAccess), name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

ExportMemoryWin32HandleInfoKHR::ExportMemoryWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR), pNext(nullptr), pAttributes(nullptr), dwAccess(), name() {}

ExportMemoryWin32HandleInfoKHR::ExportMemoryWin32HandleInfoKHR(const ExportMemoryWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }
}

ExportMemoryWin32HandleInfoKHR& ExportMemoryWin32HandleInfoKHR::operator=(const ExportMemoryWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }

    return *this;
}

ExportMemoryWin32HandleInfoKHR::~ExportMemoryWin32HandleInfoKHR() {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
}

void ExportMemoryWin32HandleInfoKHR::initialize(const VkExportMemoryWin32HandleInfoKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void ExportMemoryWin32HandleInfoKHR::initialize(const ExportMemoryWin32HandleInfoKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pAttributes = nullptr;
    dwAccess = copy_src->dwAccess;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src->pAttributes);
    }
}

MemoryWin32HandlePropertiesKHR::MemoryWin32HandlePropertiesKHR(const VkMemoryWin32HandlePropertiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryWin32HandlePropertiesKHR::MemoryWin32HandlePropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR), pNext(nullptr), memoryTypeBits() {}

MemoryWin32HandlePropertiesKHR::MemoryWin32HandlePropertiesKHR(const MemoryWin32HandlePropertiesKHR& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryWin32HandlePropertiesKHR& MemoryWin32HandlePropertiesKHR::operator=(const MemoryWin32HandlePropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryWin32HandlePropertiesKHR::~MemoryWin32HandlePropertiesKHR() { FreePnextChain(pNext); }

void MemoryWin32HandlePropertiesKHR::initialize(const VkMemoryWin32HandlePropertiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryWin32HandlePropertiesKHR::initialize(const MemoryWin32HandlePropertiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryGetWin32HandleInfoKHR::MemoryGetWin32HandleInfoKHR(const VkMemoryGetWin32HandleInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryGetWin32HandleInfoKHR::MemoryGetWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR), pNext(nullptr), memory(), handleType() {}

MemoryGetWin32HandleInfoKHR::MemoryGetWin32HandleInfoKHR(const MemoryGetWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryGetWin32HandleInfoKHR& MemoryGetWin32HandleInfoKHR::operator=(const MemoryGetWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryGetWin32HandleInfoKHR::~MemoryGetWin32HandleInfoKHR() { FreePnextChain(pNext); }

void MemoryGetWin32HandleInfoKHR::initialize(const VkMemoryGetWin32HandleInfoKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryGetWin32HandleInfoKHR::initialize(const MemoryGetWin32HandleInfoKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

ImportMemoryFdInfoKHR::ImportMemoryFdInfoKHR(const VkImportMemoryFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType), fd(in_struct->fd) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportMemoryFdInfoKHR::ImportMemoryFdInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR), pNext(nullptr), handleType(), fd() {}

ImportMemoryFdInfoKHR::ImportMemoryFdInfoKHR(const ImportMemoryFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportMemoryFdInfoKHR& ImportMemoryFdInfoKHR::operator=(const ImportMemoryFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportMemoryFdInfoKHR::~ImportMemoryFdInfoKHR() { FreePnextChain(pNext); }

void ImportMemoryFdInfoKHR::initialize(const VkImportMemoryFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportMemoryFdInfoKHR::initialize(const ImportMemoryFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    fd = copy_src->fd;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryFdPropertiesKHR::MemoryFdPropertiesKHR(const VkMemoryFdPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), memoryTypeBits(in_struct->memoryTypeBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryFdPropertiesKHR::MemoryFdPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR), pNext(nullptr), memoryTypeBits() {}

MemoryFdPropertiesKHR::MemoryFdPropertiesKHR(const MemoryFdPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryFdPropertiesKHR& MemoryFdPropertiesKHR::operator=(const MemoryFdPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryTypeBits = copy_src.memoryTypeBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryFdPropertiesKHR::~MemoryFdPropertiesKHR() { FreePnextChain(pNext); }

void MemoryFdPropertiesKHR::initialize(const VkMemoryFdPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryTypeBits = in_struct->memoryTypeBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryFdPropertiesKHR::initialize(const MemoryFdPropertiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryTypeBits = copy_src->memoryTypeBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryGetFdInfoKHR::MemoryGetFdInfoKHR(const VkMemoryGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryGetFdInfoKHR::MemoryGetFdInfoKHR()
    : sType(VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR), pNext(nullptr), memory(), handleType() {}

MemoryGetFdInfoKHR::MemoryGetFdInfoKHR(const MemoryGetFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryGetFdInfoKHR& MemoryGetFdInfoKHR::operator=(const MemoryGetFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryGetFdInfoKHR::~MemoryGetFdInfoKHR() { FreePnextChain(pNext); }

void MemoryGetFdInfoKHR::initialize(const VkMemoryGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryGetFdInfoKHR::initialize(const MemoryGetFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

Win32KeyedMutexAcquireReleaseInfoKHR::Win32KeyedMutexAcquireReleaseInfoKHR(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      acquireCount(in_struct->acquireCount),
      pAcquireSyncs(nullptr),
      pAcquireKeys(nullptr),
      pAcquireTimeouts(nullptr),
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

    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy((void*)pAcquireTimeouts, (void*)in_struct->pAcquireTimeouts, sizeof(uint32_t) * in_struct->acquireCount);
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

Win32KeyedMutexAcquireReleaseInfoKHR::Win32KeyedMutexAcquireReleaseInfoKHR()
    : sType(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR),
      pNext(nullptr),
      acquireCount(),
      pAcquireSyncs(nullptr),
      pAcquireKeys(nullptr),
      pAcquireTimeouts(nullptr),
      releaseCount(),
      pReleaseSyncs(nullptr),
      pReleaseKeys(nullptr) {}

Win32KeyedMutexAcquireReleaseInfoKHR::Win32KeyedMutexAcquireReleaseInfoKHR(const Win32KeyedMutexAcquireReleaseInfoKHR& copy_src) {
    sType = copy_src.sType;
    acquireCount = copy_src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
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

    if (copy_src.pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[copy_src.acquireCount];
        memcpy((void*)pAcquireTimeouts, (void*)copy_src.pAcquireTimeouts, sizeof(uint32_t) * copy_src.acquireCount);
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

Win32KeyedMutexAcquireReleaseInfoKHR& Win32KeyedMutexAcquireReleaseInfoKHR::operator=(
    const Win32KeyedMutexAcquireReleaseInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeouts) delete[] pAcquireTimeouts;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    acquireCount = copy_src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
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

    if (copy_src.pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[copy_src.acquireCount];
        memcpy((void*)pAcquireTimeouts, (void*)copy_src.pAcquireTimeouts, sizeof(uint32_t) * copy_src.acquireCount);
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

Win32KeyedMutexAcquireReleaseInfoKHR::~Win32KeyedMutexAcquireReleaseInfoKHR() {
    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeouts) delete[] pAcquireTimeouts;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);
}

void Win32KeyedMutexAcquireReleaseInfoKHR::initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAcquireSyncs) delete[] pAcquireSyncs;
    if (pAcquireKeys) delete[] pAcquireKeys;
    if (pAcquireTimeouts) delete[] pAcquireTimeouts;
    if (pReleaseSyncs) delete[] pReleaseSyncs;
    if (pReleaseKeys) delete[] pReleaseKeys;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
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

    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy((void*)pAcquireTimeouts, (void*)in_struct->pAcquireTimeouts, sizeof(uint32_t) * in_struct->acquireCount);
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

void Win32KeyedMutexAcquireReleaseInfoKHR::initialize(const Win32KeyedMutexAcquireReleaseInfoKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    acquireCount = copy_src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
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

    if (copy_src->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[copy_src->acquireCount];
        memcpy((void*)pAcquireTimeouts, (void*)copy_src->pAcquireTimeouts, sizeof(uint32_t) * copy_src->acquireCount);
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

ImportSemaphoreWin32HandleInfoKHR::ImportSemaphoreWin32HandleInfoKHR(const VkImportSemaphoreWin32HandleInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      semaphore(in_struct->semaphore),
      flags(in_struct->flags),
      handleType(in_struct->handleType),
      handle(in_struct->handle),
      name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportSemaphoreWin32HandleInfoKHR::ImportSemaphoreWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR),
      pNext(nullptr),
      semaphore(),
      flags(),
      handleType(),
      handle(),
      name() {}

ImportSemaphoreWin32HandleInfoKHR::ImportSemaphoreWin32HandleInfoKHR(const ImportSemaphoreWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportSemaphoreWin32HandleInfoKHR& ImportSemaphoreWin32HandleInfoKHR::operator=(const ImportSemaphoreWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportSemaphoreWin32HandleInfoKHR::~ImportSemaphoreWin32HandleInfoKHR() { FreePnextChain(pNext); }

void ImportSemaphoreWin32HandleInfoKHR::initialize(const VkImportSemaphoreWin32HandleInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportSemaphoreWin32HandleInfoKHR::initialize(const ImportSemaphoreWin32HandleInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    flags = copy_src->flags;
    handleType = copy_src->handleType;
    handle = copy_src->handle;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportSemaphoreWin32HandleInfoKHR::ExportSemaphoreWin32HandleInfoKHR(const VkExportSemaphoreWin32HandleInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pAttributes(nullptr), dwAccess(in_struct->dwAccess), name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

ExportSemaphoreWin32HandleInfoKHR::ExportSemaphoreWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR), pNext(nullptr), pAttributes(nullptr), dwAccess(), name() {}

ExportSemaphoreWin32HandleInfoKHR::ExportSemaphoreWin32HandleInfoKHR(const ExportSemaphoreWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }
}

ExportSemaphoreWin32HandleInfoKHR& ExportSemaphoreWin32HandleInfoKHR::operator=(const ExportSemaphoreWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }

    return *this;
}

ExportSemaphoreWin32HandleInfoKHR::~ExportSemaphoreWin32HandleInfoKHR() {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
}

void ExportSemaphoreWin32HandleInfoKHR::initialize(const VkExportSemaphoreWin32HandleInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void ExportSemaphoreWin32HandleInfoKHR::initialize(const ExportSemaphoreWin32HandleInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pAttributes = nullptr;
    dwAccess = copy_src->dwAccess;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src->pAttributes);
    }
}

D3D12FenceSubmitInfoKHR::D3D12FenceSubmitInfoKHR(const VkD3D12FenceSubmitInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreValuesCount(in_struct->waitSemaphoreValuesCount),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValuesCount(in_struct->signalSemaphoreValuesCount),
      pSignalSemaphoreValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValuesCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValuesCount);
    }
}

D3D12FenceSubmitInfoKHR::D3D12FenceSubmitInfoKHR()
    : sType(VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR),
      pNext(nullptr),
      waitSemaphoreValuesCount(),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValuesCount(),
      pSignalSemaphoreValues(nullptr) {}

D3D12FenceSubmitInfoKHR::D3D12FenceSubmitInfoKHR(const D3D12FenceSubmitInfoKHR& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreValuesCount = copy_src.waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = copy_src.signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValuesCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValuesCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValuesCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValuesCount);
    }
}

D3D12FenceSubmitInfoKHR& D3D12FenceSubmitInfoKHR::operator=(const D3D12FenceSubmitInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreValuesCount = copy_src.waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = copy_src.signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValuesCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValuesCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValuesCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValuesCount);
    }

    return *this;
}

D3D12FenceSubmitInfoKHR::~D3D12FenceSubmitInfoKHR() {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
}

void D3D12FenceSubmitInfoKHR::initialize(const VkD3D12FenceSubmitInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreValuesCount = in_struct->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = in_struct->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValuesCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValuesCount);
    }
}

void D3D12FenceSubmitInfoKHR::initialize(const D3D12FenceSubmitInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreValuesCount = copy_src->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = copy_src->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src->waitSemaphoreValuesCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src->pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src->waitSemaphoreValuesCount);
    }

    if (copy_src->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src->signalSemaphoreValuesCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src->pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src->signalSemaphoreValuesCount);
    }
}

SemaphoreGetWin32HandleInfoKHR::SemaphoreGetWin32HandleInfoKHR(const VkSemaphoreGetWin32HandleInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreGetWin32HandleInfoKHR::SemaphoreGetWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR), pNext(nullptr), semaphore(), handleType() {}

SemaphoreGetWin32HandleInfoKHR::SemaphoreGetWin32HandleInfoKHR(const SemaphoreGetWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreGetWin32HandleInfoKHR& SemaphoreGetWin32HandleInfoKHR::operator=(const SemaphoreGetWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreGetWin32HandleInfoKHR::~SemaphoreGetWin32HandleInfoKHR() { FreePnextChain(pNext); }

void SemaphoreGetWin32HandleInfoKHR::initialize(const VkSemaphoreGetWin32HandleInfoKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreGetWin32HandleInfoKHR::initialize(const SemaphoreGetWin32HandleInfoKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

ImportSemaphoreFdInfoKHR::ImportSemaphoreFdInfoKHR(const VkImportSemaphoreFdInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      semaphore(in_struct->semaphore),
      flags(in_struct->flags),
      handleType(in_struct->handleType),
      fd(in_struct->fd) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportSemaphoreFdInfoKHR::ImportSemaphoreFdInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR), pNext(nullptr), semaphore(), flags(), handleType(), fd() {}

ImportSemaphoreFdInfoKHR::ImportSemaphoreFdInfoKHR(const ImportSemaphoreFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportSemaphoreFdInfoKHR& ImportSemaphoreFdInfoKHR::operator=(const ImportSemaphoreFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportSemaphoreFdInfoKHR::~ImportSemaphoreFdInfoKHR() { FreePnextChain(pNext); }

void ImportSemaphoreFdInfoKHR::initialize(const VkImportSemaphoreFdInfoKHR* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportSemaphoreFdInfoKHR::initialize(const ImportSemaphoreFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    flags = copy_src->flags;
    handleType = copy_src->handleType;
    fd = copy_src->fd;
    pNext = SafePnextCopy(copy_src->pNext);
}

SemaphoreGetFdInfoKHR::SemaphoreGetFdInfoKHR(const VkSemaphoreGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SemaphoreGetFdInfoKHR::SemaphoreGetFdInfoKHR()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR), pNext(nullptr), semaphore(), handleType() {}

SemaphoreGetFdInfoKHR::SemaphoreGetFdInfoKHR(const SemaphoreGetFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

SemaphoreGetFdInfoKHR& SemaphoreGetFdInfoKHR::operator=(const SemaphoreGetFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SemaphoreGetFdInfoKHR::~SemaphoreGetFdInfoKHR() { FreePnextChain(pNext); }

void SemaphoreGetFdInfoKHR::initialize(const VkSemaphoreGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SemaphoreGetFdInfoKHR::initialize(const SemaphoreGetFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePushDescriptorPropertiesKHR::PhysicalDevicePushDescriptorPropertiesKHR(
    const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxPushDescriptors(in_struct->maxPushDescriptors) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePushDescriptorPropertiesKHR::PhysicalDevicePushDescriptorPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR), pNext(nullptr), maxPushDescriptors() {}

PhysicalDevicePushDescriptorPropertiesKHR::PhysicalDevicePushDescriptorPropertiesKHR(
    const PhysicalDevicePushDescriptorPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    maxPushDescriptors = copy_src.maxPushDescriptors;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePushDescriptorPropertiesKHR& PhysicalDevicePushDescriptorPropertiesKHR::operator=(
    const PhysicalDevicePushDescriptorPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxPushDescriptors = copy_src.maxPushDescriptors;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePushDescriptorPropertiesKHR::~PhysicalDevicePushDescriptorPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePushDescriptorPropertiesKHR::initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxPushDescriptors = in_struct->maxPushDescriptors;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePushDescriptorPropertiesKHR::initialize(const PhysicalDevicePushDescriptorPropertiesKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxPushDescriptors = copy_src->maxPushDescriptors;
    pNext = SafePnextCopy(copy_src->pNext);
}

PresentRegionKHR::PresentRegionKHR(const VkPresentRegionKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state)
    : rectangleCount(in_struct->rectangleCount), pRectangles(nullptr) {
    if (in_struct->pRectangles) {
        pRectangles = new VkRectLayerKHR[in_struct->rectangleCount];
        memcpy((void*)pRectangles, (void*)in_struct->pRectangles, sizeof(VkRectLayerKHR) * in_struct->rectangleCount);
    }
}

PresentRegionKHR::PresentRegionKHR() : rectangleCount(), pRectangles(nullptr) {}

PresentRegionKHR::PresentRegionKHR(const PresentRegionKHR& copy_src) {
    rectangleCount = copy_src.rectangleCount;
    pRectangles = nullptr;

    if (copy_src.pRectangles) {
        pRectangles = new VkRectLayerKHR[copy_src.rectangleCount];
        memcpy((void*)pRectangles, (void*)copy_src.pRectangles, sizeof(VkRectLayerKHR) * copy_src.rectangleCount);
    }
}

PresentRegionKHR& PresentRegionKHR::operator=(const PresentRegionKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pRectangles) delete[] pRectangles;

    rectangleCount = copy_src.rectangleCount;
    pRectangles = nullptr;

    if (copy_src.pRectangles) {
        pRectangles = new VkRectLayerKHR[copy_src.rectangleCount];
        memcpy((void*)pRectangles, (void*)copy_src.pRectangles, sizeof(VkRectLayerKHR) * copy_src.rectangleCount);
    }

    return *this;
}

PresentRegionKHR::~PresentRegionKHR() {
    if (pRectangles) delete[] pRectangles;
}

void PresentRegionKHR::initialize(const VkPresentRegionKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRectangles) delete[] pRectangles;
    rectangleCount = in_struct->rectangleCount;
    pRectangles = nullptr;

    if (in_struct->pRectangles) {
        pRectangles = new VkRectLayerKHR[in_struct->rectangleCount];
        memcpy((void*)pRectangles, (void*)in_struct->pRectangles, sizeof(VkRectLayerKHR) * in_struct->rectangleCount);
    }
}

void PresentRegionKHR::initialize(const PresentRegionKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    rectangleCount = copy_src->rectangleCount;
    pRectangles = nullptr;

    if (copy_src->pRectangles) {
        pRectangles = new VkRectLayerKHR[copy_src->rectangleCount];
        memcpy((void*)pRectangles, (void*)copy_src->pRectangles, sizeof(VkRectLayerKHR) * copy_src->rectangleCount);
    }
}

PresentRegionsKHR::PresentRegionsKHR(const VkPresentRegionsKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (swapchainCount && in_struct->pRegions) {
        pRegions = new PresentRegionKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

PresentRegionsKHR::PresentRegionsKHR()
    : sType(VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR), pNext(nullptr), swapchainCount(), pRegions(nullptr) {}

PresentRegionsKHR::PresentRegionsKHR(const PresentRegionsKHR& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (swapchainCount && copy_src.pRegions) {
        pRegions = new PresentRegionKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

PresentRegionsKHR& PresentRegionsKHR::operator=(const PresentRegionsKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (swapchainCount && copy_src.pRegions) {
        pRegions = new PresentRegionKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

PresentRegionsKHR::~PresentRegionsKHR() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void PresentRegionsKHR::initialize(const VkPresentRegionsKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (swapchainCount && in_struct->pRegions) {
        pRegions = new PresentRegionKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void PresentRegionsKHR::initialize(const PresentRegionsKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (swapchainCount && copy_src->pRegions) {
        pRegions = new PresentRegionKHR[swapchainCount];
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

SharedPresentSurfaceCapabilitiesKHR::SharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), sharedPresentSupportedUsageFlags(in_struct->sharedPresentSupportedUsageFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SharedPresentSurfaceCapabilitiesKHR::SharedPresentSurfaceCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR), pNext(nullptr), sharedPresentSupportedUsageFlags() {}

SharedPresentSurfaceCapabilitiesKHR::SharedPresentSurfaceCapabilitiesKHR(const SharedPresentSurfaceCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    sharedPresentSupportedUsageFlags = copy_src.sharedPresentSupportedUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

SharedPresentSurfaceCapabilitiesKHR& SharedPresentSurfaceCapabilitiesKHR::operator=(
    const SharedPresentSurfaceCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sharedPresentSupportedUsageFlags = copy_src.sharedPresentSupportedUsageFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SharedPresentSurfaceCapabilitiesKHR::~SharedPresentSurfaceCapabilitiesKHR() { FreePnextChain(pNext); }

void SharedPresentSurfaceCapabilitiesKHR::initialize(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sharedPresentSupportedUsageFlags = in_struct->sharedPresentSupportedUsageFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SharedPresentSurfaceCapabilitiesKHR::initialize(const SharedPresentSurfaceCapabilitiesKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sharedPresentSupportedUsageFlags = copy_src->sharedPresentSupportedUsageFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

ImportFenceWin32HandleInfoKHR::ImportFenceWin32HandleInfoKHR(const VkImportFenceWin32HandleInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      fence(in_struct->fence),
      flags(in_struct->flags),
      handleType(in_struct->handleType),
      handle(in_struct->handle),
      name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportFenceWin32HandleInfoKHR::ImportFenceWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR),
      pNext(nullptr),
      fence(),
      flags(),
      handleType(),
      handle(),
      name() {}

ImportFenceWin32HandleInfoKHR::ImportFenceWin32HandleInfoKHR(const ImportFenceWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    fence = copy_src.fence;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportFenceWin32HandleInfoKHR& ImportFenceWin32HandleInfoKHR::operator=(const ImportFenceWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fence = copy_src.fence;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    handle = copy_src.handle;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportFenceWin32HandleInfoKHR::~ImportFenceWin32HandleInfoKHR() { FreePnextChain(pNext); }

void ImportFenceWin32HandleInfoKHR::initialize(const VkImportFenceWin32HandleInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fence = in_struct->fence;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportFenceWin32HandleInfoKHR::initialize(const ImportFenceWin32HandleInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fence = copy_src->fence;
    flags = copy_src->flags;
    handleType = copy_src->handleType;
    handle = copy_src->handle;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);
}

ExportFenceWin32HandleInfoKHR::ExportFenceWin32HandleInfoKHR(const VkExportFenceWin32HandleInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pAttributes(nullptr), dwAccess(in_struct->dwAccess), name(in_struct->name) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

ExportFenceWin32HandleInfoKHR::ExportFenceWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR), pNext(nullptr), pAttributes(nullptr), dwAccess(), name() {}

ExportFenceWin32HandleInfoKHR::ExportFenceWin32HandleInfoKHR(const ExportFenceWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }
}

ExportFenceWin32HandleInfoKHR& ExportFenceWin32HandleInfoKHR::operator=(const ExportFenceWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pAttributes = nullptr;
    dwAccess = copy_src.dwAccess;
    name = copy_src.name;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src.pAttributes);
    }

    return *this;
}

ExportFenceWin32HandleInfoKHR::~ExportFenceWin32HandleInfoKHR() {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
}

void ExportFenceWin32HandleInfoKHR::initialize(const VkExportFenceWin32HandleInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttributes) delete pAttributes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void ExportFenceWin32HandleInfoKHR::initialize(const ExportFenceWin32HandleInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pAttributes = nullptr;
    dwAccess = copy_src->dwAccess;
    name = copy_src->name;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*copy_src->pAttributes);
    }
}

FenceGetWin32HandleInfoKHR::FenceGetWin32HandleInfoKHR(const VkFenceGetWin32HandleInfoKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fence(in_struct->fence), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FenceGetWin32HandleInfoKHR::FenceGetWin32HandleInfoKHR()
    : sType(VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR), pNext(nullptr), fence(), handleType() {}

FenceGetWin32HandleInfoKHR::FenceGetWin32HandleInfoKHR(const FenceGetWin32HandleInfoKHR& copy_src) {
    sType = copy_src.sType;
    fence = copy_src.fence;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

FenceGetWin32HandleInfoKHR& FenceGetWin32HandleInfoKHR::operator=(const FenceGetWin32HandleInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fence = copy_src.fence;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FenceGetWin32HandleInfoKHR::~FenceGetWin32HandleInfoKHR() { FreePnextChain(pNext); }

void FenceGetWin32HandleInfoKHR::initialize(const VkFenceGetWin32HandleInfoKHR* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fence = in_struct->fence;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FenceGetWin32HandleInfoKHR::initialize(const FenceGetWin32HandleInfoKHR* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fence = copy_src->fence;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

ImportFenceFdInfoKHR::ImportFenceFdInfoKHR(const VkImportFenceFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      fence(in_struct->fence),
      flags(in_struct->flags),
      handleType(in_struct->handleType),
      fd(in_struct->fd) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImportFenceFdInfoKHR::ImportFenceFdInfoKHR()
    : sType(VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR), pNext(nullptr), fence(), flags(), handleType(), fd() {}

ImportFenceFdInfoKHR::ImportFenceFdInfoKHR(const ImportFenceFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    fence = copy_src.fence;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImportFenceFdInfoKHR& ImportFenceFdInfoKHR::operator=(const ImportFenceFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fence = copy_src.fence;
    flags = copy_src.flags;
    handleType = copy_src.handleType;
    fd = copy_src.fd;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImportFenceFdInfoKHR::~ImportFenceFdInfoKHR() { FreePnextChain(pNext); }

void ImportFenceFdInfoKHR::initialize(const VkImportFenceFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fence = in_struct->fence;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImportFenceFdInfoKHR::initialize(const ImportFenceFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fence = copy_src->fence;
    flags = copy_src->flags;
    handleType = copy_src->handleType;
    fd = copy_src->fd;
    pNext = SafePnextCopy(copy_src->pNext);
}

FenceGetFdInfoKHR::FenceGetFdInfoKHR(const VkFenceGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), fence(in_struct->fence), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

FenceGetFdInfoKHR::FenceGetFdInfoKHR() : sType(VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR), pNext(nullptr), fence(), handleType() {}

FenceGetFdInfoKHR::FenceGetFdInfoKHR(const FenceGetFdInfoKHR& copy_src) {
    sType = copy_src.sType;
    fence = copy_src.fence;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

FenceGetFdInfoKHR& FenceGetFdInfoKHR::operator=(const FenceGetFdInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fence = copy_src.fence;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

FenceGetFdInfoKHR::~FenceGetFdInfoKHR() { FreePnextChain(pNext); }

void FenceGetFdInfoKHR::initialize(const VkFenceGetFdInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fence = in_struct->fence;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void FenceGetFdInfoKHR::initialize(const FenceGetFdInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fence = copy_src->fence;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePerformanceQueryFeaturesKHR::PhysicalDevicePerformanceQueryFeaturesKHR(
    const VkPhysicalDevicePerformanceQueryFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      performanceCounterQueryPools(in_struct->performanceCounterQueryPools),
      performanceCounterMultipleQueryPools(in_struct->performanceCounterMultipleQueryPools) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePerformanceQueryFeaturesKHR::PhysicalDevicePerformanceQueryFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR),
      pNext(nullptr),
      performanceCounterQueryPools(),
      performanceCounterMultipleQueryPools() {}

PhysicalDevicePerformanceQueryFeaturesKHR::PhysicalDevicePerformanceQueryFeaturesKHR(
    const PhysicalDevicePerformanceQueryFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    performanceCounterQueryPools = copy_src.performanceCounterQueryPools;
    performanceCounterMultipleQueryPools = copy_src.performanceCounterMultipleQueryPools;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePerformanceQueryFeaturesKHR& PhysicalDevicePerformanceQueryFeaturesKHR::operator=(
    const PhysicalDevicePerformanceQueryFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    performanceCounterQueryPools = copy_src.performanceCounterQueryPools;
    performanceCounterMultipleQueryPools = copy_src.performanceCounterMultipleQueryPools;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePerformanceQueryFeaturesKHR::~PhysicalDevicePerformanceQueryFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePerformanceQueryFeaturesKHR::initialize(const VkPhysicalDevicePerformanceQueryFeaturesKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    performanceCounterQueryPools = in_struct->performanceCounterQueryPools;
    performanceCounterMultipleQueryPools = in_struct->performanceCounterMultipleQueryPools;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePerformanceQueryFeaturesKHR::initialize(const PhysicalDevicePerformanceQueryFeaturesKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    performanceCounterQueryPools = copy_src->performanceCounterQueryPools;
    performanceCounterMultipleQueryPools = copy_src->performanceCounterMultipleQueryPools;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePerformanceQueryPropertiesKHR::PhysicalDevicePerformanceQueryPropertiesKHR(
    const VkPhysicalDevicePerformanceQueryPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), allowCommandBufferQueryCopies(in_struct->allowCommandBufferQueryCopies) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePerformanceQueryPropertiesKHR::PhysicalDevicePerformanceQueryPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR), pNext(nullptr), allowCommandBufferQueryCopies() {}

PhysicalDevicePerformanceQueryPropertiesKHR::PhysicalDevicePerformanceQueryPropertiesKHR(
    const PhysicalDevicePerformanceQueryPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    allowCommandBufferQueryCopies = copy_src.allowCommandBufferQueryCopies;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePerformanceQueryPropertiesKHR& PhysicalDevicePerformanceQueryPropertiesKHR::operator=(
    const PhysicalDevicePerformanceQueryPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    allowCommandBufferQueryCopies = copy_src.allowCommandBufferQueryCopies;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePerformanceQueryPropertiesKHR::~PhysicalDevicePerformanceQueryPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePerformanceQueryPropertiesKHR::initialize(const VkPhysicalDevicePerformanceQueryPropertiesKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    allowCommandBufferQueryCopies = in_struct->allowCommandBufferQueryCopies;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePerformanceQueryPropertiesKHR::initialize(const PhysicalDevicePerformanceQueryPropertiesKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    allowCommandBufferQueryCopies = copy_src->allowCommandBufferQueryCopies;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceCounterKHR::PerformanceCounterKHR(const VkPerformanceCounterKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), unit(in_struct->unit), scope(in_struct->scope), storage(in_struct->storage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        uuid[i] = in_struct->uuid[i];
    }
}

PerformanceCounterKHR::PerformanceCounterKHR()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR), pNext(nullptr), unit(), scope(), storage() {}

PerformanceCounterKHR::PerformanceCounterKHR(const PerformanceCounterKHR& copy_src) {
    sType = copy_src.sType;
    unit = copy_src.unit;
    scope = copy_src.scope;
    storage = copy_src.storage;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        uuid[i] = copy_src.uuid[i];
    }
}

PerformanceCounterKHR& PerformanceCounterKHR::operator=(const PerformanceCounterKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    unit = copy_src.unit;
    scope = copy_src.scope;
    storage = copy_src.storage;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        uuid[i] = copy_src.uuid[i];
    }

    return *this;
}

PerformanceCounterKHR::~PerformanceCounterKHR() { FreePnextChain(pNext); }

void PerformanceCounterKHR::initialize(const VkPerformanceCounterKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    unit = in_struct->unit;
    scope = in_struct->scope;
    storage = in_struct->storage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        uuid[i] = in_struct->uuid[i];
    }
}

void PerformanceCounterKHR::initialize(const PerformanceCounterKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    unit = copy_src->unit;
    scope = copy_src->scope;
    storage = copy_src->storage;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        uuid[i] = copy_src->uuid[i];
    }
}

PerformanceCounterDescriptionKHR::PerformanceCounterDescriptionKHR(const VkPerformanceCounterDescriptionKHR* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        category[i] = in_struct->category[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

PerformanceCounterDescriptionKHR::PerformanceCounterDescriptionKHR()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR), pNext(nullptr), flags() {}

PerformanceCounterDescriptionKHR::PerformanceCounterDescriptionKHR(const PerformanceCounterDescriptionKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        category[i] = copy_src.category[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }
}

PerformanceCounterDescriptionKHR& PerformanceCounterDescriptionKHR::operator=(const PerformanceCounterDescriptionKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        category[i] = copy_src.category[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    return *this;
}

PerformanceCounterDescriptionKHR::~PerformanceCounterDescriptionKHR() { FreePnextChain(pNext); }

void PerformanceCounterDescriptionKHR::initialize(const VkPerformanceCounterDescriptionKHR* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        category[i] = in_struct->category[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

void PerformanceCounterDescriptionKHR::initialize(const PerformanceCounterDescriptionKHR* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        category[i] = copy_src->category[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }
}

QueryPoolPerformanceCreateInfoKHR::QueryPoolPerformanceCreateInfoKHR(const VkQueryPoolPerformanceCreateInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      counterIndexCount(in_struct->counterIndexCount),
      pCounterIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCounterIndices) {
        pCounterIndices = new uint32_t[in_struct->counterIndexCount];
        memcpy((void*)pCounterIndices, (void*)in_struct->pCounterIndices, sizeof(uint32_t) * in_struct->counterIndexCount);
    }
}

QueryPoolPerformanceCreateInfoKHR::QueryPoolPerformanceCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR),
      pNext(nullptr),
      queueFamilyIndex(),
      counterIndexCount(),
      pCounterIndices(nullptr) {}

QueryPoolPerformanceCreateInfoKHR::QueryPoolPerformanceCreateInfoKHR(const QueryPoolPerformanceCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    counterIndexCount = copy_src.counterIndexCount;
    pCounterIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCounterIndices) {
        pCounterIndices = new uint32_t[copy_src.counterIndexCount];
        memcpy((void*)pCounterIndices, (void*)copy_src.pCounterIndices, sizeof(uint32_t) * copy_src.counterIndexCount);
    }
}

QueryPoolPerformanceCreateInfoKHR& QueryPoolPerformanceCreateInfoKHR::operator=(const QueryPoolPerformanceCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pCounterIndices) delete[] pCounterIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    counterIndexCount = copy_src.counterIndexCount;
    pCounterIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCounterIndices) {
        pCounterIndices = new uint32_t[copy_src.counterIndexCount];
        memcpy((void*)pCounterIndices, (void*)copy_src.pCounterIndices, sizeof(uint32_t) * copy_src.counterIndexCount);
    }

    return *this;
}

QueryPoolPerformanceCreateInfoKHR::~QueryPoolPerformanceCreateInfoKHR() {
    if (pCounterIndices) delete[] pCounterIndices;
    FreePnextChain(pNext);
}

void QueryPoolPerformanceCreateInfoKHR::initialize(const VkQueryPoolPerformanceCreateInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCounterIndices) delete[] pCounterIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    counterIndexCount = in_struct->counterIndexCount;
    pCounterIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pCounterIndices) {
        pCounterIndices = new uint32_t[in_struct->counterIndexCount];
        memcpy((void*)pCounterIndices, (void*)in_struct->pCounterIndices, sizeof(uint32_t) * in_struct->counterIndexCount);
    }
}

void QueryPoolPerformanceCreateInfoKHR::initialize(const QueryPoolPerformanceCreateInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    counterIndexCount = copy_src->counterIndexCount;
    pCounterIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pCounterIndices) {
        pCounterIndices = new uint32_t[copy_src->counterIndexCount];
        memcpy((void*)pCounterIndices, (void*)copy_src->pCounterIndices, sizeof(uint32_t) * copy_src->counterIndexCount);
    }
}

AcquireProfilingLockInfoKHR::AcquireProfilingLockInfoKHR(const VkAcquireProfilingLockInfoKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), timeout(in_struct->timeout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AcquireProfilingLockInfoKHR::AcquireProfilingLockInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR), pNext(nullptr), flags(), timeout() {}

AcquireProfilingLockInfoKHR::AcquireProfilingLockInfoKHR(const AcquireProfilingLockInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    timeout = copy_src.timeout;
    pNext = SafePnextCopy(copy_src.pNext);
}

AcquireProfilingLockInfoKHR& AcquireProfilingLockInfoKHR::operator=(const AcquireProfilingLockInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    timeout = copy_src.timeout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AcquireProfilingLockInfoKHR::~AcquireProfilingLockInfoKHR() { FreePnextChain(pNext); }

void AcquireProfilingLockInfoKHR::initialize(const VkAcquireProfilingLockInfoKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    timeout = in_struct->timeout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AcquireProfilingLockInfoKHR::initialize(const AcquireProfilingLockInfoKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    timeout = copy_src->timeout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PerformanceQuerySubmitInfoKHR::PerformanceQuerySubmitInfoKHR(const VkPerformanceQuerySubmitInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), counterPassIndex(in_struct->counterPassIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PerformanceQuerySubmitInfoKHR::PerformanceQuerySubmitInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR), pNext(nullptr), counterPassIndex() {}

PerformanceQuerySubmitInfoKHR::PerformanceQuerySubmitInfoKHR(const PerformanceQuerySubmitInfoKHR& copy_src) {
    sType = copy_src.sType;
    counterPassIndex = copy_src.counterPassIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PerformanceQuerySubmitInfoKHR& PerformanceQuerySubmitInfoKHR::operator=(const PerformanceQuerySubmitInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    counterPassIndex = copy_src.counterPassIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PerformanceQuerySubmitInfoKHR::~PerformanceQuerySubmitInfoKHR() { FreePnextChain(pNext); }

void PerformanceQuerySubmitInfoKHR::initialize(const VkPerformanceQuerySubmitInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    counterPassIndex = in_struct->counterPassIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PerformanceQuerySubmitInfoKHR::initialize(const PerformanceQuerySubmitInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    counterPassIndex = copy_src->counterPassIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceSurfaceInfo2KHR::PhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), surface(in_struct->surface) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceSurfaceInfo2KHR::PhysicalDeviceSurfaceInfo2KHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR), pNext(nullptr), surface() {}

PhysicalDeviceSurfaceInfo2KHR::PhysicalDeviceSurfaceInfo2KHR(const PhysicalDeviceSurfaceInfo2KHR& copy_src) {
    sType = copy_src.sType;
    surface = copy_src.surface;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceSurfaceInfo2KHR& PhysicalDeviceSurfaceInfo2KHR::operator=(const PhysicalDeviceSurfaceInfo2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    surface = copy_src.surface;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceSurfaceInfo2KHR::~PhysicalDeviceSurfaceInfo2KHR() { FreePnextChain(pNext); }

void PhysicalDeviceSurfaceInfo2KHR::initialize(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    surface = in_struct->surface;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceSurfaceInfo2KHR::initialize(const PhysicalDeviceSurfaceInfo2KHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    surface = copy_src->surface;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceCapabilities2KHR::SurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), surfaceCapabilities(in_struct->surfaceCapabilities) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceCapabilities2KHR::SurfaceCapabilities2KHR()
    : sType(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR), pNext(nullptr), surfaceCapabilities() {}

SurfaceCapabilities2KHR::SurfaceCapabilities2KHR(const SurfaceCapabilities2KHR& copy_src) {
    sType = copy_src.sType;
    surfaceCapabilities = copy_src.surfaceCapabilities;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceCapabilities2KHR& SurfaceCapabilities2KHR::operator=(const SurfaceCapabilities2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    surfaceCapabilities = copy_src.surfaceCapabilities;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceCapabilities2KHR::~SurfaceCapabilities2KHR() { FreePnextChain(pNext); }

void SurfaceCapabilities2KHR::initialize(const VkSurfaceCapabilities2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    surfaceCapabilities = in_struct->surfaceCapabilities;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceCapabilities2KHR::initialize(const SurfaceCapabilities2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    surfaceCapabilities = copy_src->surfaceCapabilities;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceFormat2KHR::SurfaceFormat2KHR(const VkSurfaceFormat2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                     bool copy_pnext)
    : sType(in_struct->sType), surfaceFormat(in_struct->surfaceFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceFormat2KHR::SurfaceFormat2KHR() : sType(VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR), pNext(nullptr), surfaceFormat() {}

SurfaceFormat2KHR::SurfaceFormat2KHR(const SurfaceFormat2KHR& copy_src) {
    sType = copy_src.sType;
    surfaceFormat = copy_src.surfaceFormat;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceFormat2KHR& SurfaceFormat2KHR::operator=(const SurfaceFormat2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    surfaceFormat = copy_src.surfaceFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceFormat2KHR::~SurfaceFormat2KHR() { FreePnextChain(pNext); }

void SurfaceFormat2KHR::initialize(const VkSurfaceFormat2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    surfaceFormat = in_struct->surfaceFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceFormat2KHR::initialize(const SurfaceFormat2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    surfaceFormat = copy_src->surfaceFormat;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayProperties2KHR::DisplayProperties2KHR(const VkDisplayProperties2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), displayProperties(&in_struct->displayProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayProperties2KHR::DisplayProperties2KHR() : sType(VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR), pNext(nullptr) {}

DisplayProperties2KHR::DisplayProperties2KHR(const DisplayProperties2KHR& copy_src) {
    sType = copy_src.sType;
    displayProperties.initialize(&copy_src.displayProperties);
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayProperties2KHR& DisplayProperties2KHR::operator=(const DisplayProperties2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayProperties.initialize(&copy_src.displayProperties);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayProperties2KHR::~DisplayProperties2KHR() { FreePnextChain(pNext); }

void DisplayProperties2KHR::initialize(const VkDisplayProperties2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayProperties.initialize(&in_struct->displayProperties);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayProperties2KHR::initialize(const DisplayProperties2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayProperties.initialize(&copy_src->displayProperties);
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPlaneProperties2KHR::DisplayPlaneProperties2KHR(const VkDisplayPlaneProperties2KHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), displayPlaneProperties(in_struct->displayPlaneProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayPlaneProperties2KHR::DisplayPlaneProperties2KHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR), pNext(nullptr), displayPlaneProperties() {}

DisplayPlaneProperties2KHR::DisplayPlaneProperties2KHR(const DisplayPlaneProperties2KHR& copy_src) {
    sType = copy_src.sType;
    displayPlaneProperties = copy_src.displayPlaneProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayPlaneProperties2KHR& DisplayPlaneProperties2KHR::operator=(const DisplayPlaneProperties2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayPlaneProperties = copy_src.displayPlaneProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayPlaneProperties2KHR::~DisplayPlaneProperties2KHR() { FreePnextChain(pNext); }

void DisplayPlaneProperties2KHR::initialize(const VkDisplayPlaneProperties2KHR* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayPlaneProperties = in_struct->displayPlaneProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayPlaneProperties2KHR::initialize(const DisplayPlaneProperties2KHR* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayPlaneProperties = copy_src->displayPlaneProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayModeProperties2KHR::DisplayModeProperties2KHR(const VkDisplayModeProperties2KHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), displayModeProperties(in_struct->displayModeProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayModeProperties2KHR::DisplayModeProperties2KHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR), pNext(nullptr), displayModeProperties() {}

DisplayModeProperties2KHR::DisplayModeProperties2KHR(const DisplayModeProperties2KHR& copy_src) {
    sType = copy_src.sType;
    displayModeProperties = copy_src.displayModeProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayModeProperties2KHR& DisplayModeProperties2KHR::operator=(const DisplayModeProperties2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    displayModeProperties = copy_src.displayModeProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayModeProperties2KHR::~DisplayModeProperties2KHR() { FreePnextChain(pNext); }

void DisplayModeProperties2KHR::initialize(const VkDisplayModeProperties2KHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    displayModeProperties = in_struct->displayModeProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayModeProperties2KHR::initialize(const DisplayModeProperties2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    displayModeProperties = copy_src->displayModeProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPlaneInfo2KHR::DisplayPlaneInfo2KHR(const VkDisplayPlaneInfo2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), mode(in_struct->mode), planeIndex(in_struct->planeIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayPlaneInfo2KHR::DisplayPlaneInfo2KHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR), pNext(nullptr), mode(), planeIndex() {}

DisplayPlaneInfo2KHR::DisplayPlaneInfo2KHR(const DisplayPlaneInfo2KHR& copy_src) {
    sType = copy_src.sType;
    mode = copy_src.mode;
    planeIndex = copy_src.planeIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayPlaneInfo2KHR& DisplayPlaneInfo2KHR::operator=(const DisplayPlaneInfo2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    mode = copy_src.mode;
    planeIndex = copy_src.planeIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayPlaneInfo2KHR::~DisplayPlaneInfo2KHR() { FreePnextChain(pNext); }

void DisplayPlaneInfo2KHR::initialize(const VkDisplayPlaneInfo2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    mode = in_struct->mode;
    planeIndex = in_struct->planeIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayPlaneInfo2KHR::initialize(const DisplayPlaneInfo2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    mode = copy_src->mode;
    planeIndex = copy_src->planeIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

DisplayPlaneCapabilities2KHR::DisplayPlaneCapabilities2KHR(const VkDisplayPlaneCapabilities2KHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), capabilities(in_struct->capabilities) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DisplayPlaneCapabilities2KHR::DisplayPlaneCapabilities2KHR()
    : sType(VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR), pNext(nullptr), capabilities() {}

DisplayPlaneCapabilities2KHR::DisplayPlaneCapabilities2KHR(const DisplayPlaneCapabilities2KHR& copy_src) {
    sType = copy_src.sType;
    capabilities = copy_src.capabilities;
    pNext = SafePnextCopy(copy_src.pNext);
}

DisplayPlaneCapabilities2KHR& DisplayPlaneCapabilities2KHR::operator=(const DisplayPlaneCapabilities2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    capabilities = copy_src.capabilities;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DisplayPlaneCapabilities2KHR::~DisplayPlaneCapabilities2KHR() { FreePnextChain(pNext); }

void DisplayPlaneCapabilities2KHR::initialize(const VkDisplayPlaneCapabilities2KHR* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    capabilities = in_struct->capabilities;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DisplayPlaneCapabilities2KHR::initialize(const DisplayPlaneCapabilities2KHR* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    capabilities = copy_src->capabilities;
    pNext = SafePnextCopy(copy_src->pNext);
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

PhysicalDevicePortabilitySubsetFeaturesKHR::PhysicalDevicePortabilitySubsetFeaturesKHR(
    const VkPhysicalDevicePortabilitySubsetFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      constantAlphaColorBlendFactors(in_struct->constantAlphaColorBlendFactors),
      events(in_struct->events),
      imageViewFormatReinterpretation(in_struct->imageViewFormatReinterpretation),
      imageViewFormatSwizzle(in_struct->imageViewFormatSwizzle),
      imageView2DOn3DImage(in_struct->imageView2DOn3DImage),
      multisampleArrayImage(in_struct->multisampleArrayImage),
      mutableComparisonSamplers(in_struct->mutableComparisonSamplers),
      pointPolygons(in_struct->pointPolygons),
      samplerMipLodBias(in_struct->samplerMipLodBias),
      separateStencilMaskRef(in_struct->separateStencilMaskRef),
      shaderSampleRateInterpolationFunctions(in_struct->shaderSampleRateInterpolationFunctions),
      tessellationIsolines(in_struct->tessellationIsolines),
      tessellationPointMode(in_struct->tessellationPointMode),
      triangleFans(in_struct->triangleFans),
      vertexAttributeAccessBeyondStride(in_struct->vertexAttributeAccessBeyondStride) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePortabilitySubsetFeaturesKHR::PhysicalDevicePortabilitySubsetFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR),
      pNext(nullptr),
      constantAlphaColorBlendFactors(),
      events(),
      imageViewFormatReinterpretation(),
      imageViewFormatSwizzle(),
      imageView2DOn3DImage(),
      multisampleArrayImage(),
      mutableComparisonSamplers(),
      pointPolygons(),
      samplerMipLodBias(),
      separateStencilMaskRef(),
      shaderSampleRateInterpolationFunctions(),
      tessellationIsolines(),
      tessellationPointMode(),
      triangleFans(),
      vertexAttributeAccessBeyondStride() {}

PhysicalDevicePortabilitySubsetFeaturesKHR::PhysicalDevicePortabilitySubsetFeaturesKHR(
    const PhysicalDevicePortabilitySubsetFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    constantAlphaColorBlendFactors = copy_src.constantAlphaColorBlendFactors;
    events = copy_src.events;
    imageViewFormatReinterpretation = copy_src.imageViewFormatReinterpretation;
    imageViewFormatSwizzle = copy_src.imageViewFormatSwizzle;
    imageView2DOn3DImage = copy_src.imageView2DOn3DImage;
    multisampleArrayImage = copy_src.multisampleArrayImage;
    mutableComparisonSamplers = copy_src.mutableComparisonSamplers;
    pointPolygons = copy_src.pointPolygons;
    samplerMipLodBias = copy_src.samplerMipLodBias;
    separateStencilMaskRef = copy_src.separateStencilMaskRef;
    shaderSampleRateInterpolationFunctions = copy_src.shaderSampleRateInterpolationFunctions;
    tessellationIsolines = copy_src.tessellationIsolines;
    tessellationPointMode = copy_src.tessellationPointMode;
    triangleFans = copy_src.triangleFans;
    vertexAttributeAccessBeyondStride = copy_src.vertexAttributeAccessBeyondStride;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePortabilitySubsetFeaturesKHR& PhysicalDevicePortabilitySubsetFeaturesKHR::operator=(
    const PhysicalDevicePortabilitySubsetFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    constantAlphaColorBlendFactors = copy_src.constantAlphaColorBlendFactors;
    events = copy_src.events;
    imageViewFormatReinterpretation = copy_src.imageViewFormatReinterpretation;
    imageViewFormatSwizzle = copy_src.imageViewFormatSwizzle;
    imageView2DOn3DImage = copy_src.imageView2DOn3DImage;
    multisampleArrayImage = copy_src.multisampleArrayImage;
    mutableComparisonSamplers = copy_src.mutableComparisonSamplers;
    pointPolygons = copy_src.pointPolygons;
    samplerMipLodBias = copy_src.samplerMipLodBias;
    separateStencilMaskRef = copy_src.separateStencilMaskRef;
    shaderSampleRateInterpolationFunctions = copy_src.shaderSampleRateInterpolationFunctions;
    tessellationIsolines = copy_src.tessellationIsolines;
    tessellationPointMode = copy_src.tessellationPointMode;
    triangleFans = copy_src.triangleFans;
    vertexAttributeAccessBeyondStride = copy_src.vertexAttributeAccessBeyondStride;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePortabilitySubsetFeaturesKHR::~PhysicalDevicePortabilitySubsetFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePortabilitySubsetFeaturesKHR::initialize(const VkPhysicalDevicePortabilitySubsetFeaturesKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    constantAlphaColorBlendFactors = in_struct->constantAlphaColorBlendFactors;
    events = in_struct->events;
    imageViewFormatReinterpretation = in_struct->imageViewFormatReinterpretation;
    imageViewFormatSwizzle = in_struct->imageViewFormatSwizzle;
    imageView2DOn3DImage = in_struct->imageView2DOn3DImage;
    multisampleArrayImage = in_struct->multisampleArrayImage;
    mutableComparisonSamplers = in_struct->mutableComparisonSamplers;
    pointPolygons = in_struct->pointPolygons;
    samplerMipLodBias = in_struct->samplerMipLodBias;
    separateStencilMaskRef = in_struct->separateStencilMaskRef;
    shaderSampleRateInterpolationFunctions = in_struct->shaderSampleRateInterpolationFunctions;
    tessellationIsolines = in_struct->tessellationIsolines;
    tessellationPointMode = in_struct->tessellationPointMode;
    triangleFans = in_struct->triangleFans;
    vertexAttributeAccessBeyondStride = in_struct->vertexAttributeAccessBeyondStride;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePortabilitySubsetFeaturesKHR::initialize(const PhysicalDevicePortabilitySubsetFeaturesKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    constantAlphaColorBlendFactors = copy_src->constantAlphaColorBlendFactors;
    events = copy_src->events;
    imageViewFormatReinterpretation = copy_src->imageViewFormatReinterpretation;
    imageViewFormatSwizzle = copy_src->imageViewFormatSwizzle;
    imageView2DOn3DImage = copy_src->imageView2DOn3DImage;
    multisampleArrayImage = copy_src->multisampleArrayImage;
    mutableComparisonSamplers = copy_src->mutableComparisonSamplers;
    pointPolygons = copy_src->pointPolygons;
    samplerMipLodBias = copy_src->samplerMipLodBias;
    separateStencilMaskRef = copy_src->separateStencilMaskRef;
    shaderSampleRateInterpolationFunctions = copy_src->shaderSampleRateInterpolationFunctions;
    tessellationIsolines = copy_src->tessellationIsolines;
    tessellationPointMode = copy_src->tessellationPointMode;
    triangleFans = copy_src->triangleFans;
    vertexAttributeAccessBeyondStride = copy_src->vertexAttributeAccessBeyondStride;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePortabilitySubsetPropertiesKHR::PhysicalDevicePortabilitySubsetPropertiesKHR(
    const VkPhysicalDevicePortabilitySubsetPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), minVertexInputBindingStrideAlignment(in_struct->minVertexInputBindingStrideAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePortabilitySubsetPropertiesKHR::PhysicalDevicePortabilitySubsetPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR),
      pNext(nullptr),
      minVertexInputBindingStrideAlignment() {}

PhysicalDevicePortabilitySubsetPropertiesKHR::PhysicalDevicePortabilitySubsetPropertiesKHR(
    const PhysicalDevicePortabilitySubsetPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    minVertexInputBindingStrideAlignment = copy_src.minVertexInputBindingStrideAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePortabilitySubsetPropertiesKHR& PhysicalDevicePortabilitySubsetPropertiesKHR::operator=(
    const PhysicalDevicePortabilitySubsetPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minVertexInputBindingStrideAlignment = copy_src.minVertexInputBindingStrideAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePortabilitySubsetPropertiesKHR::~PhysicalDevicePortabilitySubsetPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePortabilitySubsetPropertiesKHR::initialize(const VkPhysicalDevicePortabilitySubsetPropertiesKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minVertexInputBindingStrideAlignment = in_struct->minVertexInputBindingStrideAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePortabilitySubsetPropertiesKHR::initialize(const PhysicalDevicePortabilitySubsetPropertiesKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minVertexInputBindingStrideAlignment = copy_src->minVertexInputBindingStrideAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

PhysicalDeviceShaderClockFeaturesKHR::PhysicalDeviceShaderClockFeaturesKHR(const VkPhysicalDeviceShaderClockFeaturesKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      shaderSubgroupClock(in_struct->shaderSubgroupClock),
      shaderDeviceClock(in_struct->shaderDeviceClock) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderClockFeaturesKHR::PhysicalDeviceShaderClockFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR),
      pNext(nullptr),
      shaderSubgroupClock(),
      shaderDeviceClock() {}

PhysicalDeviceShaderClockFeaturesKHR::PhysicalDeviceShaderClockFeaturesKHR(const PhysicalDeviceShaderClockFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderSubgroupClock = copy_src.shaderSubgroupClock;
    shaderDeviceClock = copy_src.shaderDeviceClock;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderClockFeaturesKHR& PhysicalDeviceShaderClockFeaturesKHR::operator=(
    const PhysicalDeviceShaderClockFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSubgroupClock = copy_src.shaderSubgroupClock;
    shaderDeviceClock = copy_src.shaderDeviceClock;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderClockFeaturesKHR::~PhysicalDeviceShaderClockFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceShaderClockFeaturesKHR::initialize(const VkPhysicalDeviceShaderClockFeaturesKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSubgroupClock = in_struct->shaderSubgroupClock;
    shaderDeviceClock = in_struct->shaderDeviceClock;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderClockFeaturesKHR::initialize(const PhysicalDeviceShaderClockFeaturesKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSubgroupClock = copy_src->shaderSubgroupClock;
    shaderDeviceClock = copy_src->shaderDeviceClock;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH265ProfileInfoKHR::VideoDecodeH265ProfileInfoKHR(const VkVideoDecodeH265ProfileInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stdProfileIdc(in_struct->stdProfileIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeH265ProfileInfoKHR::VideoDecodeH265ProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR), pNext(nullptr), stdProfileIdc() {}

VideoDecodeH265ProfileInfoKHR::VideoDecodeH265ProfileInfoKHR(const VideoDecodeH265ProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeH265ProfileInfoKHR& VideoDecodeH265ProfileInfoKHR::operator=(const VideoDecodeH265ProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdProfileIdc = copy_src.stdProfileIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeH265ProfileInfoKHR::~VideoDecodeH265ProfileInfoKHR() { FreePnextChain(pNext); }

void VideoDecodeH265ProfileInfoKHR::initialize(const VkVideoDecodeH265ProfileInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdProfileIdc = in_struct->stdProfileIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeH265ProfileInfoKHR::initialize(const VideoDecodeH265ProfileInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdProfileIdc = copy_src->stdProfileIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH265CapabilitiesKHR::VideoDecodeH265CapabilitiesKHR(const VkVideoDecodeH265CapabilitiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxLevelIdc(in_struct->maxLevelIdc) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeH265CapabilitiesKHR::VideoDecodeH265CapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR), pNext(nullptr), maxLevelIdc() {}

VideoDecodeH265CapabilitiesKHR::VideoDecodeH265CapabilitiesKHR(const VideoDecodeH265CapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeH265CapabilitiesKHR& VideoDecodeH265CapabilitiesKHR::operator=(const VideoDecodeH265CapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxLevelIdc = copy_src.maxLevelIdc;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeH265CapabilitiesKHR::~VideoDecodeH265CapabilitiesKHR() { FreePnextChain(pNext); }

void VideoDecodeH265CapabilitiesKHR::initialize(const VkVideoDecodeH265CapabilitiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxLevelIdc = in_struct->maxLevelIdc;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeH265CapabilitiesKHR::initialize(const VideoDecodeH265CapabilitiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxLevelIdc = copy_src->maxLevelIdc;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeH265SessionParametersAddInfoKHR::VideoDecodeH265SessionParametersAddInfoKHR(
    const VkVideoDecodeH265SessionParametersAddInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stdVPSCount(in_struct->stdVPSCount),
      pStdVPSs(nullptr),
      stdSPSCount(in_struct->stdSPSCount),
      pStdSPSs(nullptr),
      stdPPSCount(in_struct->stdPPSCount),
      pStdPPSs(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[in_struct->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)in_struct->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * in_struct->stdVPSCount);
    }

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * in_struct->stdPPSCount);
    }
}

VideoDecodeH265SessionParametersAddInfoKHR::VideoDecodeH265SessionParametersAddInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR),
      pNext(nullptr),
      stdVPSCount(),
      pStdVPSs(nullptr),
      stdSPSCount(),
      pStdSPSs(nullptr),
      stdPPSCount(),
      pStdPPSs(nullptr) {}

VideoDecodeH265SessionParametersAddInfoKHR::VideoDecodeH265SessionParametersAddInfoKHR(
    const VideoDecodeH265SessionParametersAddInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdVPSCount = copy_src.stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src.stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src.pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src.stdVPSCount);
    }

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src.stdPPSCount);
    }
}

VideoDecodeH265SessionParametersAddInfoKHR& VideoDecodeH265SessionParametersAddInfoKHR::operator=(
    const VideoDecodeH265SessionParametersAddInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdVPSCount = copy_src.stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src.stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src.stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src.stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src.pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src.stdVPSCount);
    }

    if (copy_src.pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src.stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src.pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src.stdSPSCount);
    }

    if (copy_src.pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src.stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src.pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src.stdPPSCount);
    }

    return *this;
}

VideoDecodeH265SessionParametersAddInfoKHR::~VideoDecodeH265SessionParametersAddInfoKHR() {
    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
}

void VideoDecodeH265SessionParametersAddInfoKHR::initialize(const VkVideoDecodeH265SessionParametersAddInfoKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdVPSs) delete[] pStdVPSs;
    if (pStdSPSs) delete[] pStdSPSs;
    if (pStdPPSs) delete[] pStdPPSs;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdVPSCount = in_struct->stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = in_struct->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = in_struct->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[in_struct->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)in_struct->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * in_struct->stdVPSCount);
    }

    if (in_struct->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[in_struct->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)in_struct->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * in_struct->stdSPSCount);
    }

    if (in_struct->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[in_struct->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)in_struct->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * in_struct->stdPPSCount);
    }
}

void VideoDecodeH265SessionParametersAddInfoKHR::initialize(const VideoDecodeH265SessionParametersAddInfoKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdVPSCount = copy_src->stdVPSCount;
    pStdVPSs = nullptr;
    stdSPSCount = copy_src->stdSPSCount;
    pStdSPSs = nullptr;
    stdPPSCount = copy_src->stdPPSCount;
    pStdPPSs = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdVPSs) {
        pStdVPSs = new StdVideoH265VideoParameterSet[copy_src->stdVPSCount];
        memcpy((void*)pStdVPSs, (void*)copy_src->pStdVPSs, sizeof(StdVideoH265VideoParameterSet) * copy_src->stdVPSCount);
    }

    if (copy_src->pStdSPSs) {
        pStdSPSs = new StdVideoH265SequenceParameterSet[copy_src->stdSPSCount];
        memcpy((void*)pStdSPSs, (void*)copy_src->pStdSPSs, sizeof(StdVideoH265SequenceParameterSet) * copy_src->stdSPSCount);
    }

    if (copy_src->pStdPPSs) {
        pStdPPSs = new StdVideoH265PictureParameterSet[copy_src->stdPPSCount];
        memcpy((void*)pStdPPSs, (void*)copy_src->pStdPPSs, sizeof(StdVideoH265PictureParameterSet) * copy_src->stdPPSCount);
    }
}

VideoDecodeH265SessionParametersCreateInfoKHR::VideoDecodeH265SessionParametersCreateInfoKHR(
    const VkVideoDecodeH265SessionParametersCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxStdVPSCount(in_struct->maxStdVPSCount),
      maxStdSPSCount(in_struct->maxStdSPSCount),
      maxStdPPSCount(in_struct->maxStdPPSCount),
      pParametersAddInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH265SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

VideoDecodeH265SessionParametersCreateInfoKHR::VideoDecodeH265SessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR),
      pNext(nullptr),
      maxStdVPSCount(),
      maxStdSPSCount(),
      maxStdPPSCount(),
      pParametersAddInfo(nullptr) {}

VideoDecodeH265SessionParametersCreateInfoKHR::VideoDecodeH265SessionParametersCreateInfoKHR(
    const VideoDecodeH265SessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    maxStdVPSCount = copy_src.maxStdVPSCount;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH265SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);
}

VideoDecodeH265SessionParametersCreateInfoKHR& VideoDecodeH265SessionParametersCreateInfoKHR::operator=(
    const VideoDecodeH265SessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxStdVPSCount = copy_src.maxStdVPSCount;
    maxStdSPSCount = copy_src.maxStdSPSCount;
    maxStdPPSCount = copy_src.maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH265SessionParametersAddInfoKHR(*copy_src.pParametersAddInfo);

    return *this;
}

VideoDecodeH265SessionParametersCreateInfoKHR::~VideoDecodeH265SessionParametersCreateInfoKHR() {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
}

void VideoDecodeH265SessionParametersCreateInfoKHR::initialize(const VkVideoDecodeH265SessionParametersCreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pParametersAddInfo) delete pParametersAddInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxStdVPSCount = in_struct->maxStdVPSCount;
    maxStdSPSCount = in_struct->maxStdSPSCount;
    maxStdPPSCount = in_struct->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH265SessionParametersAddInfoKHR(in_struct->pParametersAddInfo);
}

void VideoDecodeH265SessionParametersCreateInfoKHR::initialize(const VideoDecodeH265SessionParametersCreateInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxStdVPSCount = copy_src->maxStdVPSCount;
    maxStdSPSCount = copy_src->maxStdSPSCount;
    maxStdPPSCount = copy_src->maxStdPPSCount;
    pParametersAddInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pParametersAddInfo)
        pParametersAddInfo = new VideoDecodeH265SessionParametersAddInfoKHR(*copy_src->pParametersAddInfo);
}

VideoDecodeH265PictureInfoKHR::VideoDecodeH265PictureInfoKHR(const VkVideoDecodeH265PictureInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pStdPictureInfo(nullptr),
      sliceSegmentCount(in_struct->sliceSegmentCount),
      pSliceSegmentOffsets(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH265PictureInfo(*in_struct->pStdPictureInfo);
    }

    if (in_struct->pSliceSegmentOffsets) {
        pSliceSegmentOffsets = new uint32_t[in_struct->sliceSegmentCount];
        memcpy((void*)pSliceSegmentOffsets, (void*)in_struct->pSliceSegmentOffsets,
               sizeof(uint32_t) * in_struct->sliceSegmentCount);
    }
}

VideoDecodeH265PictureInfoKHR::VideoDecodeH265PictureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR),
      pNext(nullptr),
      pStdPictureInfo(nullptr),
      sliceSegmentCount(),
      pSliceSegmentOffsets(nullptr) {}

VideoDecodeH265PictureInfoKHR::VideoDecodeH265PictureInfoKHR(const VideoDecodeH265PictureInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    sliceSegmentCount = copy_src.sliceSegmentCount;
    pSliceSegmentOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH265PictureInfo(*copy_src.pStdPictureInfo);
    }

    if (copy_src.pSliceSegmentOffsets) {
        pSliceSegmentOffsets = new uint32_t[copy_src.sliceSegmentCount];
        memcpy((void*)pSliceSegmentOffsets, (void*)copy_src.pSliceSegmentOffsets, sizeof(uint32_t) * copy_src.sliceSegmentCount);
    }
}

VideoDecodeH265PictureInfoKHR& VideoDecodeH265PictureInfoKHR::operator=(const VideoDecodeH265PictureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceSegmentOffsets) delete[] pSliceSegmentOffsets;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    sliceSegmentCount = copy_src.sliceSegmentCount;
    pSliceSegmentOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH265PictureInfo(*copy_src.pStdPictureInfo);
    }

    if (copy_src.pSliceSegmentOffsets) {
        pSliceSegmentOffsets = new uint32_t[copy_src.sliceSegmentCount];
        memcpy((void*)pSliceSegmentOffsets, (void*)copy_src.pSliceSegmentOffsets, sizeof(uint32_t) * copy_src.sliceSegmentCount);
    }

    return *this;
}

VideoDecodeH265PictureInfoKHR::~VideoDecodeH265PictureInfoKHR() {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceSegmentOffsets) delete[] pSliceSegmentOffsets;
    FreePnextChain(pNext);
}

void VideoDecodeH265PictureInfoKHR::initialize(const VkVideoDecodeH265PictureInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pSliceSegmentOffsets) delete[] pSliceSegmentOffsets;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdPictureInfo = nullptr;
    sliceSegmentCount = in_struct->sliceSegmentCount;
    pSliceSegmentOffsets = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH265PictureInfo(*in_struct->pStdPictureInfo);
    }

    if (in_struct->pSliceSegmentOffsets) {
        pSliceSegmentOffsets = new uint32_t[in_struct->sliceSegmentCount];
        memcpy((void*)pSliceSegmentOffsets, (void*)in_struct->pSliceSegmentOffsets,
               sizeof(uint32_t) * in_struct->sliceSegmentCount);
    }
}

void VideoDecodeH265PictureInfoKHR::initialize(const VideoDecodeH265PictureInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdPictureInfo = nullptr;
    sliceSegmentCount = copy_src->sliceSegmentCount;
    pSliceSegmentOffsets = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeH265PictureInfo(*copy_src->pStdPictureInfo);
    }

    if (copy_src->pSliceSegmentOffsets) {
        pSliceSegmentOffsets = new uint32_t[copy_src->sliceSegmentCount];
        memcpy((void*)pSliceSegmentOffsets, (void*)copy_src->pSliceSegmentOffsets, sizeof(uint32_t) * copy_src->sliceSegmentCount);
    }
}

VideoDecodeH265DpbSlotInfoKHR::VideoDecodeH265DpbSlotInfoKHR(const VkVideoDecodeH265DpbSlotInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdReferenceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH265ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

VideoDecodeH265DpbSlotInfoKHR::VideoDecodeH265DpbSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR), pNext(nullptr), pStdReferenceInfo(nullptr) {}

VideoDecodeH265DpbSlotInfoKHR::VideoDecodeH265DpbSlotInfoKHR(const VideoDecodeH265DpbSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH265ReferenceInfo(*copy_src.pStdReferenceInfo);
    }
}

VideoDecodeH265DpbSlotInfoKHR& VideoDecodeH265DpbSlotInfoKHR::operator=(const VideoDecodeH265DpbSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH265ReferenceInfo(*copy_src.pStdReferenceInfo);
    }

    return *this;
}

VideoDecodeH265DpbSlotInfoKHR::~VideoDecodeH265DpbSlotInfoKHR() {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
}

void VideoDecodeH265DpbSlotInfoKHR::initialize(const VkVideoDecodeH265DpbSlotInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH265ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

void VideoDecodeH265DpbSlotInfoKHR::initialize(const VideoDecodeH265DpbSlotInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeH265ReferenceInfo(*copy_src->pStdReferenceInfo);
    }
}

DeviceQueueGlobalPriorityCreateInfoKHR::DeviceQueueGlobalPriorityCreateInfoKHR(
    const VkDeviceQueueGlobalPriorityCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), globalPriority(in_struct->globalPriority) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

DeviceQueueGlobalPriorityCreateInfoKHR::DeviceQueueGlobalPriorityCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR), pNext(nullptr), globalPriority() {}

DeviceQueueGlobalPriorityCreateInfoKHR::DeviceQueueGlobalPriorityCreateInfoKHR(
    const DeviceQueueGlobalPriorityCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    globalPriority = copy_src.globalPriority;
    pNext = SafePnextCopy(copy_src.pNext);
}

DeviceQueueGlobalPriorityCreateInfoKHR& DeviceQueueGlobalPriorityCreateInfoKHR::operator=(
    const DeviceQueueGlobalPriorityCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    globalPriority = copy_src.globalPriority;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

DeviceQueueGlobalPriorityCreateInfoKHR::~DeviceQueueGlobalPriorityCreateInfoKHR() { FreePnextChain(pNext); }

void DeviceQueueGlobalPriorityCreateInfoKHR::initialize(const VkDeviceQueueGlobalPriorityCreateInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    globalPriority = in_struct->globalPriority;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void DeviceQueueGlobalPriorityCreateInfoKHR::initialize(const DeviceQueueGlobalPriorityCreateInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    globalPriority = copy_src->globalPriority;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::PhysicalDeviceGlobalPriorityQueryFeaturesKHR(
    const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), globalPriorityQuery(in_struct->globalPriorityQuery) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::PhysicalDeviceGlobalPriorityQueryFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR), pNext(nullptr), globalPriorityQuery() {}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::PhysicalDeviceGlobalPriorityQueryFeaturesKHR(
    const PhysicalDeviceGlobalPriorityQueryFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    globalPriorityQuery = copy_src.globalPriorityQuery;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR& PhysicalDeviceGlobalPriorityQueryFeaturesKHR::operator=(
    const PhysicalDeviceGlobalPriorityQueryFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    globalPriorityQuery = copy_src.globalPriorityQuery;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::~PhysicalDeviceGlobalPriorityQueryFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceGlobalPriorityQueryFeaturesKHR::initialize(const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    globalPriorityQuery = in_struct->globalPriorityQuery;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceGlobalPriorityQueryFeaturesKHR::initialize(const PhysicalDeviceGlobalPriorityQueryFeaturesKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    globalPriorityQuery = copy_src->globalPriorityQuery;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueueFamilyGlobalPriorityPropertiesKHR::QueueFamilyGlobalPriorityPropertiesKHR(
    const VkQueueFamilyGlobalPriorityPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), priorityCount(in_struct->priorityCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_GLOBAL_PRIORITY_SIZE_KHR; ++i) {
        priorities[i] = in_struct->priorities[i];
    }
}

QueueFamilyGlobalPriorityPropertiesKHR::QueueFamilyGlobalPriorityPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR), pNext(nullptr), priorityCount() {}

QueueFamilyGlobalPriorityPropertiesKHR::QueueFamilyGlobalPriorityPropertiesKHR(
    const QueueFamilyGlobalPriorityPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    priorityCount = copy_src.priorityCount;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_GLOBAL_PRIORITY_SIZE_KHR; ++i) {
        priorities[i] = copy_src.priorities[i];
    }
}

QueueFamilyGlobalPriorityPropertiesKHR& QueueFamilyGlobalPriorityPropertiesKHR::operator=(
    const QueueFamilyGlobalPriorityPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    priorityCount = copy_src.priorityCount;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_GLOBAL_PRIORITY_SIZE_KHR; ++i) {
        priorities[i] = copy_src.priorities[i];
    }

    return *this;
}

QueueFamilyGlobalPriorityPropertiesKHR::~QueueFamilyGlobalPriorityPropertiesKHR() { FreePnextChain(pNext); }

void QueueFamilyGlobalPriorityPropertiesKHR::initialize(const VkQueueFamilyGlobalPriorityPropertiesKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    priorityCount = in_struct->priorityCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_GLOBAL_PRIORITY_SIZE_KHR; ++i) {
        priorities[i] = in_struct->priorities[i];
    }
}

void QueueFamilyGlobalPriorityPropertiesKHR::initialize(const QueueFamilyGlobalPriorityPropertiesKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    priorityCount = copy_src->priorityCount;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_GLOBAL_PRIORITY_SIZE_KHR; ++i) {
        priorities[i] = copy_src->priorities[i];
    }
}

FragmentShadingRateAttachmentInfoKHR::FragmentShadingRateAttachmentInfoKHR(const VkFragmentShadingRateAttachmentInfoKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      pFragmentShadingRateAttachment(nullptr),
      shadingRateAttachmentTexelSize(in_struct->shadingRateAttachmentTexelSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pFragmentShadingRateAttachment)
        pFragmentShadingRateAttachment = new AttachmentReference2(in_struct->pFragmentShadingRateAttachment);
}

FragmentShadingRateAttachmentInfoKHR::FragmentShadingRateAttachmentInfoKHR()
    : sType(VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR),
      pNext(nullptr),
      pFragmentShadingRateAttachment(nullptr),
      shadingRateAttachmentTexelSize() {}

FragmentShadingRateAttachmentInfoKHR::FragmentShadingRateAttachmentInfoKHR(const FragmentShadingRateAttachmentInfoKHR& copy_src) {
    sType = copy_src.sType;
    pFragmentShadingRateAttachment = nullptr;
    shadingRateAttachmentTexelSize = copy_src.shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pFragmentShadingRateAttachment)
        pFragmentShadingRateAttachment = new AttachmentReference2(*copy_src.pFragmentShadingRateAttachment);
}

FragmentShadingRateAttachmentInfoKHR& FragmentShadingRateAttachmentInfoKHR::operator=(
    const FragmentShadingRateAttachmentInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pFragmentShadingRateAttachment) delete pFragmentShadingRateAttachment;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pFragmentShadingRateAttachment = nullptr;
    shadingRateAttachmentTexelSize = copy_src.shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pFragmentShadingRateAttachment)
        pFragmentShadingRateAttachment = new AttachmentReference2(*copy_src.pFragmentShadingRateAttachment);

    return *this;
}

FragmentShadingRateAttachmentInfoKHR::~FragmentShadingRateAttachmentInfoKHR() {
    if (pFragmentShadingRateAttachment) delete pFragmentShadingRateAttachment;
    FreePnextChain(pNext);
}

void FragmentShadingRateAttachmentInfoKHR::initialize(const VkFragmentShadingRateAttachmentInfoKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pFragmentShadingRateAttachment) delete pFragmentShadingRateAttachment;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pFragmentShadingRateAttachment = nullptr;
    shadingRateAttachmentTexelSize = in_struct->shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pFragmentShadingRateAttachment)
        pFragmentShadingRateAttachment = new AttachmentReference2(in_struct->pFragmentShadingRateAttachment);
}

void FragmentShadingRateAttachmentInfoKHR::initialize(const FragmentShadingRateAttachmentInfoKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pFragmentShadingRateAttachment = nullptr;
    shadingRateAttachmentTexelSize = copy_src->shadingRateAttachmentTexelSize;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pFragmentShadingRateAttachment)
        pFragmentShadingRateAttachment = new AttachmentReference2(*copy_src->pFragmentShadingRateAttachment);
}

PipelineFragmentShadingRateStateCreateInfoKHR::PipelineFragmentShadingRateStateCreateInfoKHR(
    const VkPipelineFragmentShadingRateStateCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), fragmentSize(in_struct->fragmentSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = in_struct->combinerOps[i];
    }
}

PipelineFragmentShadingRateStateCreateInfoKHR::PipelineFragmentShadingRateStateCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR), pNext(nullptr), fragmentSize() {}

PipelineFragmentShadingRateStateCreateInfoKHR::PipelineFragmentShadingRateStateCreateInfoKHR(
    const PipelineFragmentShadingRateStateCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    fragmentSize = copy_src.fragmentSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src.combinerOps[i];
    }
}

PipelineFragmentShadingRateStateCreateInfoKHR& PipelineFragmentShadingRateStateCreateInfoKHR::operator=(
    const PipelineFragmentShadingRateStateCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentSize = copy_src.fragmentSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src.combinerOps[i];
    }

    return *this;
}

PipelineFragmentShadingRateStateCreateInfoKHR::~PipelineFragmentShadingRateStateCreateInfoKHR() { FreePnextChain(pNext); }

void PipelineFragmentShadingRateStateCreateInfoKHR::initialize(const VkPipelineFragmentShadingRateStateCreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentSize = in_struct->fragmentSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = in_struct->combinerOps[i];
    }
}

void PipelineFragmentShadingRateStateCreateInfoKHR::initialize(const PipelineFragmentShadingRateStateCreateInfoKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentSize = copy_src->fragmentSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        combinerOps[i] = copy_src->combinerOps[i];
    }
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::PhysicalDeviceFragmentShadingRateFeaturesKHR(
    const VkPhysicalDeviceFragmentShadingRateFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pipelineFragmentShadingRate(in_struct->pipelineFragmentShadingRate),
      primitiveFragmentShadingRate(in_struct->primitiveFragmentShadingRate),
      attachmentFragmentShadingRate(in_struct->attachmentFragmentShadingRate) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::PhysicalDeviceFragmentShadingRateFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR),
      pNext(nullptr),
      pipelineFragmentShadingRate(),
      primitiveFragmentShadingRate(),
      attachmentFragmentShadingRate() {}

PhysicalDeviceFragmentShadingRateFeaturesKHR::PhysicalDeviceFragmentShadingRateFeaturesKHR(
    const PhysicalDeviceFragmentShadingRateFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    pipelineFragmentShadingRate = copy_src.pipelineFragmentShadingRate;
    primitiveFragmentShadingRate = copy_src.primitiveFragmentShadingRate;
    attachmentFragmentShadingRate = copy_src.attachmentFragmentShadingRate;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShadingRateFeaturesKHR& PhysicalDeviceFragmentShadingRateFeaturesKHR::operator=(
    const PhysicalDeviceFragmentShadingRateFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineFragmentShadingRate = copy_src.pipelineFragmentShadingRate;
    primitiveFragmentShadingRate = copy_src.primitiveFragmentShadingRate;
    attachmentFragmentShadingRate = copy_src.attachmentFragmentShadingRate;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::~PhysicalDeviceFragmentShadingRateFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShadingRateFeaturesKHR::initialize(const VkPhysicalDeviceFragmentShadingRateFeaturesKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineFragmentShadingRate = in_struct->pipelineFragmentShadingRate;
    primitiveFragmentShadingRate = in_struct->primitiveFragmentShadingRate;
    attachmentFragmentShadingRate = in_struct->attachmentFragmentShadingRate;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShadingRateFeaturesKHR::initialize(const PhysicalDeviceFragmentShadingRateFeaturesKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineFragmentShadingRate = copy_src->pipelineFragmentShadingRate;
    primitiveFragmentShadingRate = copy_src->primitiveFragmentShadingRate;
    attachmentFragmentShadingRate = copy_src->attachmentFragmentShadingRate;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::PhysicalDeviceFragmentShadingRatePropertiesKHR(
    const VkPhysicalDeviceFragmentShadingRatePropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minFragmentShadingRateAttachmentTexelSize(in_struct->minFragmentShadingRateAttachmentTexelSize),
      maxFragmentShadingRateAttachmentTexelSize(in_struct->maxFragmentShadingRateAttachmentTexelSize),
      maxFragmentShadingRateAttachmentTexelSizeAspectRatio(in_struct->maxFragmentShadingRateAttachmentTexelSizeAspectRatio),
      primitiveFragmentShadingRateWithMultipleViewports(in_struct->primitiveFragmentShadingRateWithMultipleViewports),
      layeredShadingRateAttachments(in_struct->layeredShadingRateAttachments),
      fragmentShadingRateNonTrivialCombinerOps(in_struct->fragmentShadingRateNonTrivialCombinerOps),
      maxFragmentSize(in_struct->maxFragmentSize),
      maxFragmentSizeAspectRatio(in_struct->maxFragmentSizeAspectRatio),
      maxFragmentShadingRateCoverageSamples(in_struct->maxFragmentShadingRateCoverageSamples),
      maxFragmentShadingRateRasterizationSamples(in_struct->maxFragmentShadingRateRasterizationSamples),
      fragmentShadingRateWithShaderDepthStencilWrites(in_struct->fragmentShadingRateWithShaderDepthStencilWrites),
      fragmentShadingRateWithSampleMask(in_struct->fragmentShadingRateWithSampleMask),
      fragmentShadingRateWithShaderSampleMask(in_struct->fragmentShadingRateWithShaderSampleMask),
      fragmentShadingRateWithConservativeRasterization(in_struct->fragmentShadingRateWithConservativeRasterization),
      fragmentShadingRateWithFragmentShaderInterlock(in_struct->fragmentShadingRateWithFragmentShaderInterlock),
      fragmentShadingRateWithCustomSampleLocations(in_struct->fragmentShadingRateWithCustomSampleLocations),
      fragmentShadingRateStrictMultiplyCombiner(in_struct->fragmentShadingRateStrictMultiplyCombiner) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::PhysicalDeviceFragmentShadingRatePropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR),
      pNext(nullptr),
      minFragmentShadingRateAttachmentTexelSize(),
      maxFragmentShadingRateAttachmentTexelSize(),
      maxFragmentShadingRateAttachmentTexelSizeAspectRatio(),
      primitiveFragmentShadingRateWithMultipleViewports(),
      layeredShadingRateAttachments(),
      fragmentShadingRateNonTrivialCombinerOps(),
      maxFragmentSize(),
      maxFragmentSizeAspectRatio(),
      maxFragmentShadingRateCoverageSamples(),
      maxFragmentShadingRateRasterizationSamples(),
      fragmentShadingRateWithShaderDepthStencilWrites(),
      fragmentShadingRateWithSampleMask(),
      fragmentShadingRateWithShaderSampleMask(),
      fragmentShadingRateWithConservativeRasterization(),
      fragmentShadingRateWithFragmentShaderInterlock(),
      fragmentShadingRateWithCustomSampleLocations(),
      fragmentShadingRateStrictMultiplyCombiner() {}

PhysicalDeviceFragmentShadingRatePropertiesKHR::PhysicalDeviceFragmentShadingRatePropertiesKHR(
    const PhysicalDeviceFragmentShadingRatePropertiesKHR& copy_src) {
    sType = copy_src.sType;
    minFragmentShadingRateAttachmentTexelSize = copy_src.minFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSize = copy_src.maxFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSizeAspectRatio = copy_src.maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    primitiveFragmentShadingRateWithMultipleViewports = copy_src.primitiveFragmentShadingRateWithMultipleViewports;
    layeredShadingRateAttachments = copy_src.layeredShadingRateAttachments;
    fragmentShadingRateNonTrivialCombinerOps = copy_src.fragmentShadingRateNonTrivialCombinerOps;
    maxFragmentSize = copy_src.maxFragmentSize;
    maxFragmentSizeAspectRatio = copy_src.maxFragmentSizeAspectRatio;
    maxFragmentShadingRateCoverageSamples = copy_src.maxFragmentShadingRateCoverageSamples;
    maxFragmentShadingRateRasterizationSamples = copy_src.maxFragmentShadingRateRasterizationSamples;
    fragmentShadingRateWithShaderDepthStencilWrites = copy_src.fragmentShadingRateWithShaderDepthStencilWrites;
    fragmentShadingRateWithSampleMask = copy_src.fragmentShadingRateWithSampleMask;
    fragmentShadingRateWithShaderSampleMask = copy_src.fragmentShadingRateWithShaderSampleMask;
    fragmentShadingRateWithConservativeRasterization = copy_src.fragmentShadingRateWithConservativeRasterization;
    fragmentShadingRateWithFragmentShaderInterlock = copy_src.fragmentShadingRateWithFragmentShaderInterlock;
    fragmentShadingRateWithCustomSampleLocations = copy_src.fragmentShadingRateWithCustomSampleLocations;
    fragmentShadingRateStrictMultiplyCombiner = copy_src.fragmentShadingRateStrictMultiplyCombiner;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR& PhysicalDeviceFragmentShadingRatePropertiesKHR::operator=(
    const PhysicalDeviceFragmentShadingRatePropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minFragmentShadingRateAttachmentTexelSize = copy_src.minFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSize = copy_src.maxFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSizeAspectRatio = copy_src.maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    primitiveFragmentShadingRateWithMultipleViewports = copy_src.primitiveFragmentShadingRateWithMultipleViewports;
    layeredShadingRateAttachments = copy_src.layeredShadingRateAttachments;
    fragmentShadingRateNonTrivialCombinerOps = copy_src.fragmentShadingRateNonTrivialCombinerOps;
    maxFragmentSize = copy_src.maxFragmentSize;
    maxFragmentSizeAspectRatio = copy_src.maxFragmentSizeAspectRatio;
    maxFragmentShadingRateCoverageSamples = copy_src.maxFragmentShadingRateCoverageSamples;
    maxFragmentShadingRateRasterizationSamples = copy_src.maxFragmentShadingRateRasterizationSamples;
    fragmentShadingRateWithShaderDepthStencilWrites = copy_src.fragmentShadingRateWithShaderDepthStencilWrites;
    fragmentShadingRateWithSampleMask = copy_src.fragmentShadingRateWithSampleMask;
    fragmentShadingRateWithShaderSampleMask = copy_src.fragmentShadingRateWithShaderSampleMask;
    fragmentShadingRateWithConservativeRasterization = copy_src.fragmentShadingRateWithConservativeRasterization;
    fragmentShadingRateWithFragmentShaderInterlock = copy_src.fragmentShadingRateWithFragmentShaderInterlock;
    fragmentShadingRateWithCustomSampleLocations = copy_src.fragmentShadingRateWithCustomSampleLocations;
    fragmentShadingRateStrictMultiplyCombiner = copy_src.fragmentShadingRateStrictMultiplyCombiner;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::~PhysicalDeviceFragmentShadingRatePropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShadingRatePropertiesKHR::initialize(const VkPhysicalDeviceFragmentShadingRatePropertiesKHR* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minFragmentShadingRateAttachmentTexelSize = in_struct->minFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSize = in_struct->maxFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSizeAspectRatio = in_struct->maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    primitiveFragmentShadingRateWithMultipleViewports = in_struct->primitiveFragmentShadingRateWithMultipleViewports;
    layeredShadingRateAttachments = in_struct->layeredShadingRateAttachments;
    fragmentShadingRateNonTrivialCombinerOps = in_struct->fragmentShadingRateNonTrivialCombinerOps;
    maxFragmentSize = in_struct->maxFragmentSize;
    maxFragmentSizeAspectRatio = in_struct->maxFragmentSizeAspectRatio;
    maxFragmentShadingRateCoverageSamples = in_struct->maxFragmentShadingRateCoverageSamples;
    maxFragmentShadingRateRasterizationSamples = in_struct->maxFragmentShadingRateRasterizationSamples;
    fragmentShadingRateWithShaderDepthStencilWrites = in_struct->fragmentShadingRateWithShaderDepthStencilWrites;
    fragmentShadingRateWithSampleMask = in_struct->fragmentShadingRateWithSampleMask;
    fragmentShadingRateWithShaderSampleMask = in_struct->fragmentShadingRateWithShaderSampleMask;
    fragmentShadingRateWithConservativeRasterization = in_struct->fragmentShadingRateWithConservativeRasterization;
    fragmentShadingRateWithFragmentShaderInterlock = in_struct->fragmentShadingRateWithFragmentShaderInterlock;
    fragmentShadingRateWithCustomSampleLocations = in_struct->fragmentShadingRateWithCustomSampleLocations;
    fragmentShadingRateStrictMultiplyCombiner = in_struct->fragmentShadingRateStrictMultiplyCombiner;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShadingRatePropertiesKHR::initialize(const PhysicalDeviceFragmentShadingRatePropertiesKHR* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minFragmentShadingRateAttachmentTexelSize = copy_src->minFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSize = copy_src->maxFragmentShadingRateAttachmentTexelSize;
    maxFragmentShadingRateAttachmentTexelSizeAspectRatio = copy_src->maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    primitiveFragmentShadingRateWithMultipleViewports = copy_src->primitiveFragmentShadingRateWithMultipleViewports;
    layeredShadingRateAttachments = copy_src->layeredShadingRateAttachments;
    fragmentShadingRateNonTrivialCombinerOps = copy_src->fragmentShadingRateNonTrivialCombinerOps;
    maxFragmentSize = copy_src->maxFragmentSize;
    maxFragmentSizeAspectRatio = copy_src->maxFragmentSizeAspectRatio;
    maxFragmentShadingRateCoverageSamples = copy_src->maxFragmentShadingRateCoverageSamples;
    maxFragmentShadingRateRasterizationSamples = copy_src->maxFragmentShadingRateRasterizationSamples;
    fragmentShadingRateWithShaderDepthStencilWrites = copy_src->fragmentShadingRateWithShaderDepthStencilWrites;
    fragmentShadingRateWithSampleMask = copy_src->fragmentShadingRateWithSampleMask;
    fragmentShadingRateWithShaderSampleMask = copy_src->fragmentShadingRateWithShaderSampleMask;
    fragmentShadingRateWithConservativeRasterization = copy_src->fragmentShadingRateWithConservativeRasterization;
    fragmentShadingRateWithFragmentShaderInterlock = copy_src->fragmentShadingRateWithFragmentShaderInterlock;
    fragmentShadingRateWithCustomSampleLocations = copy_src->fragmentShadingRateWithCustomSampleLocations;
    fragmentShadingRateStrictMultiplyCombiner = copy_src->fragmentShadingRateStrictMultiplyCombiner;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShadingRateKHR::PhysicalDeviceFragmentShadingRateKHR(const VkPhysicalDeviceFragmentShadingRateKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), sampleCounts(in_struct->sampleCounts), fragmentSize(in_struct->fragmentSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShadingRateKHR::PhysicalDeviceFragmentShadingRateKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR), pNext(nullptr), sampleCounts(), fragmentSize() {}

PhysicalDeviceFragmentShadingRateKHR::PhysicalDeviceFragmentShadingRateKHR(const PhysicalDeviceFragmentShadingRateKHR& copy_src) {
    sType = copy_src.sType;
    sampleCounts = copy_src.sampleCounts;
    fragmentSize = copy_src.fragmentSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShadingRateKHR& PhysicalDeviceFragmentShadingRateKHR::operator=(
    const PhysicalDeviceFragmentShadingRateKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    sampleCounts = copy_src.sampleCounts;
    fragmentSize = copy_src.fragmentSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShadingRateKHR::~PhysicalDeviceFragmentShadingRateKHR() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShadingRateKHR::initialize(const VkPhysicalDeviceFragmentShadingRateKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    sampleCounts = in_struct->sampleCounts;
    fragmentSize = in_struct->fragmentSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShadingRateKHR::initialize(const PhysicalDeviceFragmentShadingRateKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    sampleCounts = copy_src->sampleCounts;
    fragmentSize = copy_src->fragmentSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(
    const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), dynamicRenderingLocalRead(in_struct->dynamicRenderingLocalRead) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR),
      pNext(nullptr),
      dynamicRenderingLocalRead() {}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(
    const PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    dynamicRenderingLocalRead = copy_src.dynamicRenderingLocalRead;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR& PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::operator=(
    const PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicRenderingLocalRead = copy_src.dynamicRenderingLocalRead;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::~PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::initialize(
    const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicRenderingLocalRead = in_struct->dynamicRenderingLocalRead;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::initialize(
    const PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicRenderingLocalRead = copy_src->dynamicRenderingLocalRead;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderingAttachmentLocationInfoKHR::RenderingAttachmentLocationInfoKHR(const VkRenderingAttachmentLocationInfoKHR* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), colorAttachmentCount(in_struct->colorAttachmentCount), pColorAttachmentLocations(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentLocations) {
        pColorAttachmentLocations = new uint32_t[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentLocations, (void*)in_struct->pColorAttachmentLocations,
               sizeof(uint32_t) * in_struct->colorAttachmentCount);
    }
}

RenderingAttachmentLocationInfoKHR::RenderingAttachmentLocationInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO_KHR),
      pNext(nullptr),
      colorAttachmentCount(),
      pColorAttachmentLocations(nullptr) {}

RenderingAttachmentLocationInfoKHR::RenderingAttachmentLocationInfoKHR(const RenderingAttachmentLocationInfoKHR& copy_src) {
    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentLocations) {
        pColorAttachmentLocations = new uint32_t[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentLocations, (void*)copy_src.pColorAttachmentLocations,
               sizeof(uint32_t) * copy_src.colorAttachmentCount);
    }
}

RenderingAttachmentLocationInfoKHR& RenderingAttachmentLocationInfoKHR::operator=(
    const RenderingAttachmentLocationInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentLocations) delete[] pColorAttachmentLocations;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentLocations = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentLocations) {
        pColorAttachmentLocations = new uint32_t[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentLocations, (void*)copy_src.pColorAttachmentLocations,
               sizeof(uint32_t) * copy_src.colorAttachmentCount);
    }

    return *this;
}

RenderingAttachmentLocationInfoKHR::~RenderingAttachmentLocationInfoKHR() {
    if (pColorAttachmentLocations) delete[] pColorAttachmentLocations;
    FreePnextChain(pNext);
}

void RenderingAttachmentLocationInfoKHR::initialize(const VkRenderingAttachmentLocationInfoKHR* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentLocations) delete[] pColorAttachmentLocations;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentLocations = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentLocations) {
        pColorAttachmentLocations = new uint32_t[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentLocations, (void*)in_struct->pColorAttachmentLocations,
               sizeof(uint32_t) * in_struct->colorAttachmentCount);
    }
}

void RenderingAttachmentLocationInfoKHR::initialize(const RenderingAttachmentLocationInfoKHR* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentLocations = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentLocations) {
        pColorAttachmentLocations = new uint32_t[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentLocations, (void*)copy_src->pColorAttachmentLocations,
               sizeof(uint32_t) * copy_src->colorAttachmentCount);
    }
}

RenderingInputAttachmentIndexInfoKHR::RenderingInputAttachmentIndexInfoKHR(const VkRenderingInputAttachmentIndexInfoKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentInputIndices(nullptr),
      pDepthInputAttachmentIndex(nullptr),
      pStencilInputAttachmentIndex(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentInputIndices) {
        pColorAttachmentInputIndices = new uint32_t[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentInputIndices, (void*)in_struct->pColorAttachmentInputIndices,
               sizeof(uint32_t) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthInputAttachmentIndex) {
        pDepthInputAttachmentIndex = new uint32_t(*in_struct->pDepthInputAttachmentIndex);
    }

    if (in_struct->pStencilInputAttachmentIndex) {
        pStencilInputAttachmentIndex = new uint32_t(*in_struct->pStencilInputAttachmentIndex);
    }
}

RenderingInputAttachmentIndexInfoKHR::RenderingInputAttachmentIndexInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR),
      pNext(nullptr),
      colorAttachmentCount(),
      pColorAttachmentInputIndices(nullptr),
      pDepthInputAttachmentIndex(nullptr),
      pStencilInputAttachmentIndex(nullptr) {}

RenderingInputAttachmentIndexInfoKHR::RenderingInputAttachmentIndexInfoKHR(const RenderingInputAttachmentIndexInfoKHR& copy_src) {
    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentInputIndices = nullptr;
    pDepthInputAttachmentIndex = nullptr;
    pStencilInputAttachmentIndex = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentInputIndices) {
        pColorAttachmentInputIndices = new uint32_t[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentInputIndices, (void*)copy_src.pColorAttachmentInputIndices,
               sizeof(uint32_t) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthInputAttachmentIndex) {
        pDepthInputAttachmentIndex = new uint32_t(*copy_src.pDepthInputAttachmentIndex);
    }

    if (copy_src.pStencilInputAttachmentIndex) {
        pStencilInputAttachmentIndex = new uint32_t(*copy_src.pStencilInputAttachmentIndex);
    }
}

RenderingInputAttachmentIndexInfoKHR& RenderingInputAttachmentIndexInfoKHR::operator=(
    const RenderingInputAttachmentIndexInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentInputIndices) delete[] pColorAttachmentInputIndices;
    if (pDepthInputAttachmentIndex) delete pDepthInputAttachmentIndex;
    if (pStencilInputAttachmentIndex) delete pStencilInputAttachmentIndex;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentInputIndices = nullptr;
    pDepthInputAttachmentIndex = nullptr;
    pStencilInputAttachmentIndex = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentInputIndices) {
        pColorAttachmentInputIndices = new uint32_t[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentInputIndices, (void*)copy_src.pColorAttachmentInputIndices,
               sizeof(uint32_t) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthInputAttachmentIndex) {
        pDepthInputAttachmentIndex = new uint32_t(*copy_src.pDepthInputAttachmentIndex);
    }

    if (copy_src.pStencilInputAttachmentIndex) {
        pStencilInputAttachmentIndex = new uint32_t(*copy_src.pStencilInputAttachmentIndex);
    }

    return *this;
}

RenderingInputAttachmentIndexInfoKHR::~RenderingInputAttachmentIndexInfoKHR() {
    if (pColorAttachmentInputIndices) delete[] pColorAttachmentInputIndices;
    if (pDepthInputAttachmentIndex) delete pDepthInputAttachmentIndex;
    if (pStencilInputAttachmentIndex) delete pStencilInputAttachmentIndex;
    FreePnextChain(pNext);
}

void RenderingInputAttachmentIndexInfoKHR::initialize(const VkRenderingInputAttachmentIndexInfoKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentInputIndices) delete[] pColorAttachmentInputIndices;
    if (pDepthInputAttachmentIndex) delete pDepthInputAttachmentIndex;
    if (pStencilInputAttachmentIndex) delete pStencilInputAttachmentIndex;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentInputIndices = nullptr;
    pDepthInputAttachmentIndex = nullptr;
    pStencilInputAttachmentIndex = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentInputIndices) {
        pColorAttachmentInputIndices = new uint32_t[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentInputIndices, (void*)in_struct->pColorAttachmentInputIndices,
               sizeof(uint32_t) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthInputAttachmentIndex) {
        pDepthInputAttachmentIndex = new uint32_t(*in_struct->pDepthInputAttachmentIndex);
    }

    if (in_struct->pStencilInputAttachmentIndex) {
        pStencilInputAttachmentIndex = new uint32_t(*in_struct->pStencilInputAttachmentIndex);
    }
}

void RenderingInputAttachmentIndexInfoKHR::initialize(const RenderingInputAttachmentIndexInfoKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentInputIndices = nullptr;
    pDepthInputAttachmentIndex = nullptr;
    pStencilInputAttachmentIndex = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentInputIndices) {
        pColorAttachmentInputIndices = new uint32_t[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentInputIndices, (void*)copy_src->pColorAttachmentInputIndices,
               sizeof(uint32_t) * copy_src->colorAttachmentCount);
    }

    if (copy_src->pDepthInputAttachmentIndex) {
        pDepthInputAttachmentIndex = new uint32_t(*copy_src->pDepthInputAttachmentIndex);
    }

    if (copy_src->pStencilInputAttachmentIndex) {
        pStencilInputAttachmentIndex = new uint32_t(*copy_src->pStencilInputAttachmentIndex);
    }
}

PhysicalDeviceShaderQuadControlFeaturesKHR::PhysicalDeviceShaderQuadControlFeaturesKHR(
    const VkPhysicalDeviceShaderQuadControlFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderQuadControl(in_struct->shaderQuadControl) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderQuadControlFeaturesKHR::PhysicalDeviceShaderQuadControlFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR), pNext(nullptr), shaderQuadControl() {}

PhysicalDeviceShaderQuadControlFeaturesKHR::PhysicalDeviceShaderQuadControlFeaturesKHR(
    const PhysicalDeviceShaderQuadControlFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderQuadControl = copy_src.shaderQuadControl;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderQuadControlFeaturesKHR& PhysicalDeviceShaderQuadControlFeaturesKHR::operator=(
    const PhysicalDeviceShaderQuadControlFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderQuadControl = copy_src.shaderQuadControl;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderQuadControlFeaturesKHR::~PhysicalDeviceShaderQuadControlFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceShaderQuadControlFeaturesKHR::initialize(const VkPhysicalDeviceShaderQuadControlFeaturesKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderQuadControl = in_struct->shaderQuadControl;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderQuadControlFeaturesKHR::initialize(const PhysicalDeviceShaderQuadControlFeaturesKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderQuadControl = copy_src->shaderQuadControl;
    pNext = SafePnextCopy(copy_src->pNext);
}

SurfaceProtectedCapabilitiesKHR::SurfaceProtectedCapabilitiesKHR(const VkSurfaceProtectedCapabilitiesKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), supportsProtected(in_struct->supportsProtected) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SurfaceProtectedCapabilitiesKHR::SurfaceProtectedCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR), pNext(nullptr), supportsProtected() {}

SurfaceProtectedCapabilitiesKHR::SurfaceProtectedCapabilitiesKHR(const SurfaceProtectedCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    supportsProtected = copy_src.supportsProtected;
    pNext = SafePnextCopy(copy_src.pNext);
}

SurfaceProtectedCapabilitiesKHR& SurfaceProtectedCapabilitiesKHR::operator=(const SurfaceProtectedCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportsProtected = copy_src.supportsProtected;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SurfaceProtectedCapabilitiesKHR::~SurfaceProtectedCapabilitiesKHR() { FreePnextChain(pNext); }

void SurfaceProtectedCapabilitiesKHR::initialize(const VkSurfaceProtectedCapabilitiesKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportsProtected = in_struct->supportsProtected;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SurfaceProtectedCapabilitiesKHR::initialize(const SurfaceProtectedCapabilitiesKHR* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportsProtected = copy_src->supportsProtected;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePresentWaitFeaturesKHR::PhysicalDevicePresentWaitFeaturesKHR(const VkPhysicalDevicePresentWaitFeaturesKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), presentWait(in_struct->presentWait) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePresentWaitFeaturesKHR::PhysicalDevicePresentWaitFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR), pNext(nullptr), presentWait() {}

PhysicalDevicePresentWaitFeaturesKHR::PhysicalDevicePresentWaitFeaturesKHR(const PhysicalDevicePresentWaitFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    presentWait = copy_src.presentWait;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePresentWaitFeaturesKHR& PhysicalDevicePresentWaitFeaturesKHR::operator=(
    const PhysicalDevicePresentWaitFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentWait = copy_src.presentWait;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePresentWaitFeaturesKHR::~PhysicalDevicePresentWaitFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePresentWaitFeaturesKHR::initialize(const VkPhysicalDevicePresentWaitFeaturesKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentWait = in_struct->presentWait;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePresentWaitFeaturesKHR::initialize(const PhysicalDevicePresentWaitFeaturesKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentWait = copy_src->presentWait;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(
    const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pipelineExecutableInfo(in_struct->pipelineExecutableInfo) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::PhysicalDevicePipelineExecutablePropertiesFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR),
      pNext(nullptr),
      pipelineExecutableInfo() {}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(
    const PhysicalDevicePipelineExecutablePropertiesFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    pipelineExecutableInfo = copy_src.pipelineExecutableInfo;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR& PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::operator=(
    const PhysicalDevicePipelineExecutablePropertiesFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineExecutableInfo = copy_src.pipelineExecutableInfo;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::~PhysicalDevicePipelineExecutablePropertiesFeaturesKHR() {
    FreePnextChain(pNext);
}

void PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::initialize(
    const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineExecutableInfo = in_struct->pipelineExecutableInfo;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::initialize(
    const PhysicalDevicePipelineExecutablePropertiesFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineExecutableInfo = copy_src->pipelineExecutableInfo;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineInfoKHR::PipelineInfoKHR(const VkPipelineInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pipeline(in_struct->pipeline) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineInfoKHR::PipelineInfoKHR() : sType(VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR), pNext(nullptr), pipeline() {}

PipelineInfoKHR::PipelineInfoKHR(const PipelineInfoKHR& copy_src) {
    sType = copy_src.sType;
    pipeline = copy_src.pipeline;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineInfoKHR& PipelineInfoKHR::operator=(const PipelineInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipeline = copy_src.pipeline;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineInfoKHR::~PipelineInfoKHR() { FreePnextChain(pNext); }

void PipelineInfoKHR::initialize(const VkPipelineInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipeline = in_struct->pipeline;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineInfoKHR::initialize(const PipelineInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipeline = copy_src->pipeline;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineExecutablePropertiesKHR::PipelineExecutablePropertiesKHR(const VkPipelineExecutablePropertiesKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stages(in_struct->stages), subgroupSize(in_struct->subgroupSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

PipelineExecutablePropertiesKHR::PipelineExecutablePropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR), pNext(nullptr), stages(), subgroupSize() {}

PipelineExecutablePropertiesKHR::PipelineExecutablePropertiesKHR(const PipelineExecutablePropertiesKHR& copy_src) {
    sType = copy_src.sType;
    stages = copy_src.stages;
    subgroupSize = copy_src.subgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }
}

PipelineExecutablePropertiesKHR& PipelineExecutablePropertiesKHR::operator=(const PipelineExecutablePropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stages = copy_src.stages;
    subgroupSize = copy_src.subgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    return *this;
}

PipelineExecutablePropertiesKHR::~PipelineExecutablePropertiesKHR() { FreePnextChain(pNext); }

void PipelineExecutablePropertiesKHR::initialize(const VkPipelineExecutablePropertiesKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stages = in_struct->stages;
    subgroupSize = in_struct->subgroupSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

void PipelineExecutablePropertiesKHR::initialize(const PipelineExecutablePropertiesKHR* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stages = copy_src->stages;
    subgroupSize = copy_src->subgroupSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }
}

PipelineExecutableInfoKHR::PipelineExecutableInfoKHR(const VkPipelineExecutableInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pipeline(in_struct->pipeline), executableIndex(in_struct->executableIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineExecutableInfoKHR::PipelineExecutableInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR), pNext(nullptr), pipeline(), executableIndex() {}

PipelineExecutableInfoKHR::PipelineExecutableInfoKHR(const PipelineExecutableInfoKHR& copy_src) {
    sType = copy_src.sType;
    pipeline = copy_src.pipeline;
    executableIndex = copy_src.executableIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineExecutableInfoKHR& PipelineExecutableInfoKHR::operator=(const PipelineExecutableInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipeline = copy_src.pipeline;
    executableIndex = copy_src.executableIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineExecutableInfoKHR::~PipelineExecutableInfoKHR() { FreePnextChain(pNext); }

void PipelineExecutableInfoKHR::initialize(const VkPipelineExecutableInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipeline = in_struct->pipeline;
    executableIndex = in_struct->executableIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineExecutableInfoKHR::initialize(const PipelineExecutableInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipeline = copy_src->pipeline;
    executableIndex = copy_src->executableIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineExecutableStatisticKHR::PipelineExecutableStatisticKHR(const VkPipelineExecutableStatisticKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), format(in_struct->format), value(in_struct->value) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

PipelineExecutableStatisticKHR::PipelineExecutableStatisticKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR), pNext(nullptr), format(), value() {}

PipelineExecutableStatisticKHR::PipelineExecutableStatisticKHR(const PipelineExecutableStatisticKHR& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }
}

PipelineExecutableStatisticKHR& PipelineExecutableStatisticKHR::operator=(const PipelineExecutableStatisticKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    return *this;
}

PipelineExecutableStatisticKHR::~PipelineExecutableStatisticKHR() { FreePnextChain(pNext); }

void PipelineExecutableStatisticKHR::initialize(const VkPipelineExecutableStatisticKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    value = in_struct->value;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }
}

void PipelineExecutableStatisticKHR::initialize(const PipelineExecutableStatisticKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    value = copy_src->value;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }
}

PipelineExecutableInternalRepresentationKHR::PipelineExecutableInternalRepresentationKHR(
    const VkPipelineExecutableInternalRepresentationKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), isText(in_struct->isText), dataSize(in_struct->dataSize), pData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

PipelineExecutableInternalRepresentationKHR::PipelineExecutableInternalRepresentationKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR),
      pNext(nullptr),
      isText(),
      dataSize(),
      pData(nullptr) {}

PipelineExecutableInternalRepresentationKHR::PipelineExecutableInternalRepresentationKHR(
    const PipelineExecutableInternalRepresentationKHR& copy_src) {
    sType = copy_src.sType;
    isText = copy_src.isText;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

PipelineExecutableInternalRepresentationKHR& PipelineExecutableInternalRepresentationKHR::operator=(
    const PipelineExecutableInternalRepresentationKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    isText = copy_src.isText;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

PipelineExecutableInternalRepresentationKHR::~PipelineExecutableInternalRepresentationKHR() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void PipelineExecutableInternalRepresentationKHR::initialize(const VkPipelineExecutableInternalRepresentationKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    isText = in_struct->isText;
    dataSize = in_struct->dataSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void PipelineExecutableInternalRepresentationKHR::initialize(const PipelineExecutableInternalRepresentationKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    isText = copy_src->isText;
    dataSize = copy_src->dataSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

MemoryMapInfoKHR::MemoryMapInfoKHR(const VkMemoryMapInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                   bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      memory(in_struct->memory),
      offset(in_struct->offset),
      size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryMapInfoKHR::MemoryMapInfoKHR()
    : sType(VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR), pNext(nullptr), flags(), memory(), offset(), size() {}

MemoryMapInfoKHR::MemoryMapInfoKHR(const MemoryMapInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryMapInfoKHR& MemoryMapInfoKHR::operator=(const MemoryMapInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryMapInfoKHR::~MemoryMapInfoKHR() { FreePnextChain(pNext); }

void MemoryMapInfoKHR::initialize(const VkMemoryMapInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    memory = in_struct->memory;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryMapInfoKHR::initialize(const MemoryMapInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    memory = copy_src->memory;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

MemoryUnmapInfoKHR::MemoryUnmapInfoKHR(const VkMemoryUnmapInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), memory(in_struct->memory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

MemoryUnmapInfoKHR::MemoryUnmapInfoKHR() : sType(VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR), pNext(nullptr), flags(), memory() {}

MemoryUnmapInfoKHR::MemoryUnmapInfoKHR(const MemoryUnmapInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);
}

MemoryUnmapInfoKHR& MemoryUnmapInfoKHR::operator=(const MemoryUnmapInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

MemoryUnmapInfoKHR::~MemoryUnmapInfoKHR() { FreePnextChain(pNext); }

void MemoryUnmapInfoKHR::initialize(const VkMemoryUnmapInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    memory = in_struct->memory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void MemoryUnmapInfoKHR::initialize(const MemoryUnmapInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    memory = copy_src->memory;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineLibraryCreateInfoKHR::PipelineLibraryCreateInfoKHR(const VkPipelineLibraryCreateInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), libraryCount(in_struct->libraryCount), pLibraries(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (libraryCount && in_struct->pLibraries) {
        pLibraries = new VkPipeline[libraryCount];
        for (uint32_t i = 0; i < libraryCount; ++i) {
            pLibraries[i] = in_struct->pLibraries[i];
        }
    }
}

PipelineLibraryCreateInfoKHR::PipelineLibraryCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR), pNext(nullptr), libraryCount(), pLibraries(nullptr) {}

PipelineLibraryCreateInfoKHR::PipelineLibraryCreateInfoKHR(const PipelineLibraryCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    libraryCount = copy_src.libraryCount;
    pLibraries = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (libraryCount && copy_src.pLibraries) {
        pLibraries = new VkPipeline[libraryCount];
        for (uint32_t i = 0; i < libraryCount; ++i) {
            pLibraries[i] = copy_src.pLibraries[i];
        }
    }
}

PipelineLibraryCreateInfoKHR& PipelineLibraryCreateInfoKHR::operator=(const PipelineLibraryCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pLibraries) delete[] pLibraries;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    libraryCount = copy_src.libraryCount;
    pLibraries = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (libraryCount && copy_src.pLibraries) {
        pLibraries = new VkPipeline[libraryCount];
        for (uint32_t i = 0; i < libraryCount; ++i) {
            pLibraries[i] = copy_src.pLibraries[i];
        }
    }

    return *this;
}

PipelineLibraryCreateInfoKHR::~PipelineLibraryCreateInfoKHR() {
    if (pLibraries) delete[] pLibraries;
    FreePnextChain(pNext);
}

void PipelineLibraryCreateInfoKHR::initialize(const VkPipelineLibraryCreateInfoKHR* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLibraries) delete[] pLibraries;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    libraryCount = in_struct->libraryCount;
    pLibraries = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (libraryCount && in_struct->pLibraries) {
        pLibraries = new VkPipeline[libraryCount];
        for (uint32_t i = 0; i < libraryCount; ++i) {
            pLibraries[i] = in_struct->pLibraries[i];
        }
    }
}

void PipelineLibraryCreateInfoKHR::initialize(const PipelineLibraryCreateInfoKHR* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    libraryCount = copy_src->libraryCount;
    pLibraries = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (libraryCount && copy_src->pLibraries) {
        pLibraries = new VkPipeline[libraryCount];
        for (uint32_t i = 0; i < libraryCount; ++i) {
            pLibraries[i] = copy_src->pLibraries[i];
        }
    }
}

PresentIdKHR::PresentIdKHR(const VkPresentIdKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), swapchainCount(in_struct->swapchainCount), pPresentIds(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPresentIds) {
        pPresentIds = new uint64_t[in_struct->swapchainCount];
        memcpy((void*)pPresentIds, (void*)in_struct->pPresentIds, sizeof(uint64_t) * in_struct->swapchainCount);
    }
}

PresentIdKHR::PresentIdKHR() : sType(VK_STRUCTURE_TYPE_PRESENT_ID_KHR), pNext(nullptr), swapchainCount(), pPresentIds(nullptr) {}

PresentIdKHR::PresentIdKHR(const PresentIdKHR& copy_src) {
    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pPresentIds = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentIds) {
        pPresentIds = new uint64_t[copy_src.swapchainCount];
        memcpy((void*)pPresentIds, (void*)copy_src.pPresentIds, sizeof(uint64_t) * copy_src.swapchainCount);
    }
}

PresentIdKHR& PresentIdKHR::operator=(const PresentIdKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pPresentIds) delete[] pPresentIds;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    swapchainCount = copy_src.swapchainCount;
    pPresentIds = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPresentIds) {
        pPresentIds = new uint64_t[copy_src.swapchainCount];
        memcpy((void*)pPresentIds, (void*)copy_src.pPresentIds, sizeof(uint64_t) * copy_src.swapchainCount);
    }

    return *this;
}

PresentIdKHR::~PresentIdKHR() {
    if (pPresentIds) delete[] pPresentIds;
    FreePnextChain(pNext);
}

void PresentIdKHR::initialize(const VkPresentIdKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPresentIds) delete[] pPresentIds;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    swapchainCount = in_struct->swapchainCount;
    pPresentIds = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPresentIds) {
        pPresentIds = new uint64_t[in_struct->swapchainCount];
        memcpy((void*)pPresentIds, (void*)in_struct->pPresentIds, sizeof(uint64_t) * in_struct->swapchainCount);
    }
}

void PresentIdKHR::initialize(const PresentIdKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    swapchainCount = copy_src->swapchainCount;
    pPresentIds = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPresentIds) {
        pPresentIds = new uint64_t[copy_src->swapchainCount];
        memcpy((void*)pPresentIds, (void*)copy_src->pPresentIds, sizeof(uint64_t) * copy_src->swapchainCount);
    }
}

PhysicalDevicePresentIdFeaturesKHR::PhysicalDevicePresentIdFeaturesKHR(const VkPhysicalDevicePresentIdFeaturesKHR* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), presentId(in_struct->presentId) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDevicePresentIdFeaturesKHR::PhysicalDevicePresentIdFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR), pNext(nullptr), presentId() {}

PhysicalDevicePresentIdFeaturesKHR::PhysicalDevicePresentIdFeaturesKHR(const PhysicalDevicePresentIdFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    presentId = copy_src.presentId;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDevicePresentIdFeaturesKHR& PhysicalDevicePresentIdFeaturesKHR::operator=(
    const PhysicalDevicePresentIdFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    presentId = copy_src.presentId;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDevicePresentIdFeaturesKHR::~PhysicalDevicePresentIdFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDevicePresentIdFeaturesKHR::initialize(const VkPhysicalDevicePresentIdFeaturesKHR* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    presentId = in_struct->presentId;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDevicePresentIdFeaturesKHR::initialize(const PhysicalDevicePresentIdFeaturesKHR* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    presentId = copy_src->presentId;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeInfoKHR::VideoEncodeInfoKHR(const VkVideoEncodeInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                       bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      dstBuffer(in_struct->dstBuffer),
      dstBufferOffset(in_struct->dstBufferOffset),
      dstBufferRange(in_struct->dstBufferRange),
      srcPictureResource(&in_struct->srcPictureResource),
      pSetupReferenceSlot(nullptr),
      referenceSlotCount(in_struct->referenceSlotCount),
      pReferenceSlots(nullptr),
      precedingExternallyEncodedBytes(in_struct->precedingExternallyEncodedBytes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(in_struct->pSetupReferenceSlot);
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

VideoEncodeInfoKHR::VideoEncodeInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR),
      pNext(nullptr),
      flags(),
      dstBuffer(),
      dstBufferOffset(),
      dstBufferRange(),
      pSetupReferenceSlot(nullptr),
      referenceSlotCount(),
      pReferenceSlots(nullptr),
      precedingExternallyEncodedBytes() {}

VideoEncodeInfoKHR::VideoEncodeInfoKHR(const VideoEncodeInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dstBuffer = copy_src.dstBuffer;
    dstBufferOffset = copy_src.dstBufferOffset;
    dstBufferRange = copy_src.dstBufferRange;
    srcPictureResource.initialize(&copy_src.srcPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    precedingExternallyEncodedBytes = copy_src.precedingExternallyEncodedBytes;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src.pSetupReferenceSlot);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }
}

VideoEncodeInfoKHR& VideoEncodeInfoKHR::operator=(const VideoEncodeInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    dstBuffer = copy_src.dstBuffer;
    dstBufferOffset = copy_src.dstBufferOffset;
    dstBufferRange = copy_src.dstBufferRange;
    srcPictureResource.initialize(&copy_src.srcPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src.referenceSlotCount;
    pReferenceSlots = nullptr;
    precedingExternallyEncodedBytes = copy_src.precedingExternallyEncodedBytes;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src.pSetupReferenceSlot);
    if (referenceSlotCount && copy_src.pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src.pReferenceSlots[i]);
        }
    }

    return *this;
}

VideoEncodeInfoKHR::~VideoEncodeInfoKHR() {
    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
}

void VideoEncodeInfoKHR::initialize(const VkVideoEncodeInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetupReferenceSlot) delete pSetupReferenceSlot;
    if (pReferenceSlots) delete[] pReferenceSlots;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    dstBuffer = in_struct->dstBuffer;
    dstBufferOffset = in_struct->dstBufferOffset;
    dstBufferRange = in_struct->dstBufferRange;
    srcPictureResource.initialize(&in_struct->srcPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = in_struct->referenceSlotCount;
    pReferenceSlots = nullptr;
    precedingExternallyEncodedBytes = in_struct->precedingExternallyEncodedBytes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(in_struct->pSetupReferenceSlot);
    if (referenceSlotCount && in_struct->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&in_struct->pReferenceSlots[i]);
        }
    }
}

void VideoEncodeInfoKHR::initialize(const VideoEncodeInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dstBuffer = copy_src->dstBuffer;
    dstBufferOffset = copy_src->dstBufferOffset;
    dstBufferRange = copy_src->dstBufferRange;
    srcPictureResource.initialize(&copy_src->srcPictureResource);
    pSetupReferenceSlot = nullptr;
    referenceSlotCount = copy_src->referenceSlotCount;
    pReferenceSlots = nullptr;
    precedingExternallyEncodedBytes = copy_src->precedingExternallyEncodedBytes;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pSetupReferenceSlot) pSetupReferenceSlot = new VideoReferenceSlotInfoKHR(*copy_src->pSetupReferenceSlot);
    if (referenceSlotCount && copy_src->pReferenceSlots) {
        pReferenceSlots = new VideoReferenceSlotInfoKHR[referenceSlotCount];
        for (uint32_t i = 0; i < referenceSlotCount; ++i) {
            pReferenceSlots[i].initialize(&copy_src->pReferenceSlots[i]);
        }
    }
}

VideoEncodeCapabilitiesKHR::VideoEncodeCapabilitiesKHR(const VkVideoEncodeCapabilitiesKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      rateControlModes(in_struct->rateControlModes),
      maxRateControlLayers(in_struct->maxRateControlLayers),
      maxBitrate(in_struct->maxBitrate),
      maxQualityLevels(in_struct->maxQualityLevels),
      encodeInputPictureGranularity(in_struct->encodeInputPictureGranularity),
      supportedEncodeFeedbackFlags(in_struct->supportedEncodeFeedbackFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeCapabilitiesKHR::VideoEncodeCapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR),
      pNext(nullptr),
      flags(),
      rateControlModes(),
      maxRateControlLayers(),
      maxBitrate(),
      maxQualityLevels(),
      encodeInputPictureGranularity(),
      supportedEncodeFeedbackFlags() {}

VideoEncodeCapabilitiesKHR::VideoEncodeCapabilitiesKHR(const VideoEncodeCapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rateControlModes = copy_src.rateControlModes;
    maxRateControlLayers = copy_src.maxRateControlLayers;
    maxBitrate = copy_src.maxBitrate;
    maxQualityLevels = copy_src.maxQualityLevels;
    encodeInputPictureGranularity = copy_src.encodeInputPictureGranularity;
    supportedEncodeFeedbackFlags = copy_src.supportedEncodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeCapabilitiesKHR& VideoEncodeCapabilitiesKHR::operator=(const VideoEncodeCapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rateControlModes = copy_src.rateControlModes;
    maxRateControlLayers = copy_src.maxRateControlLayers;
    maxBitrate = copy_src.maxBitrate;
    maxQualityLevels = copy_src.maxQualityLevels;
    encodeInputPictureGranularity = copy_src.encodeInputPictureGranularity;
    supportedEncodeFeedbackFlags = copy_src.supportedEncodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeCapabilitiesKHR::~VideoEncodeCapabilitiesKHR() { FreePnextChain(pNext); }

void VideoEncodeCapabilitiesKHR::initialize(const VkVideoEncodeCapabilitiesKHR* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rateControlModes = in_struct->rateControlModes;
    maxRateControlLayers = in_struct->maxRateControlLayers;
    maxBitrate = in_struct->maxBitrate;
    maxQualityLevels = in_struct->maxQualityLevels;
    encodeInputPictureGranularity = in_struct->encodeInputPictureGranularity;
    supportedEncodeFeedbackFlags = in_struct->supportedEncodeFeedbackFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeCapabilitiesKHR::initialize(const VideoEncodeCapabilitiesKHR* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rateControlModes = copy_src->rateControlModes;
    maxRateControlLayers = copy_src->maxRateControlLayers;
    maxBitrate = copy_src->maxBitrate;
    maxQualityLevels = copy_src->maxQualityLevels;
    encodeInputPictureGranularity = copy_src->encodeInputPictureGranularity;
    supportedEncodeFeedbackFlags = copy_src->supportedEncodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::QueryPoolVideoEncodeFeedbackCreateInfoKHR(
    const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), encodeFeedbackFlags(in_struct->encodeFeedbackFlags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::QueryPoolVideoEncodeFeedbackCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR), pNext(nullptr), encodeFeedbackFlags() {}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::QueryPoolVideoEncodeFeedbackCreateInfoKHR(
    const QueryPoolVideoEncodeFeedbackCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    encodeFeedbackFlags = copy_src.encodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src.pNext);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR& QueryPoolVideoEncodeFeedbackCreateInfoKHR::operator=(
    const QueryPoolVideoEncodeFeedbackCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    encodeFeedbackFlags = copy_src.encodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::~QueryPoolVideoEncodeFeedbackCreateInfoKHR() { FreePnextChain(pNext); }

void QueryPoolVideoEncodeFeedbackCreateInfoKHR::initialize(const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    encodeFeedbackFlags = in_struct->encodeFeedbackFlags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void QueryPoolVideoEncodeFeedbackCreateInfoKHR::initialize(const QueryPoolVideoEncodeFeedbackCreateInfoKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    encodeFeedbackFlags = copy_src->encodeFeedbackFlags;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeUsageInfoKHR::VideoEncodeUsageInfoKHR(const VkVideoEncodeUsageInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      videoUsageHints(in_struct->videoUsageHints),
      videoContentHints(in_struct->videoContentHints),
      tuningMode(in_struct->tuningMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeUsageInfoKHR::VideoEncodeUsageInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR), pNext(nullptr), videoUsageHints(), videoContentHints(), tuningMode() {}

VideoEncodeUsageInfoKHR::VideoEncodeUsageInfoKHR(const VideoEncodeUsageInfoKHR& copy_src) {
    sType = copy_src.sType;
    videoUsageHints = copy_src.videoUsageHints;
    videoContentHints = copy_src.videoContentHints;
    tuningMode = copy_src.tuningMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeUsageInfoKHR& VideoEncodeUsageInfoKHR::operator=(const VideoEncodeUsageInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoUsageHints = copy_src.videoUsageHints;
    videoContentHints = copy_src.videoContentHints;
    tuningMode = copy_src.tuningMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeUsageInfoKHR::~VideoEncodeUsageInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeUsageInfoKHR::initialize(const VkVideoEncodeUsageInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoUsageHints = in_struct->videoUsageHints;
    videoContentHints = in_struct->videoContentHints;
    tuningMode = in_struct->tuningMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeUsageInfoKHR::initialize(const VideoEncodeUsageInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoUsageHints = copy_src->videoUsageHints;
    videoContentHints = copy_src->videoContentHints;
    tuningMode = copy_src->tuningMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeRateControlLayerInfoKHR::VideoEncodeRateControlLayerInfoKHR(const VkVideoEncodeRateControlLayerInfoKHR* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      averageBitrate(in_struct->averageBitrate),
      maxBitrate(in_struct->maxBitrate),
      frameRateNumerator(in_struct->frameRateNumerator),
      frameRateDenominator(in_struct->frameRateDenominator) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeRateControlLayerInfoKHR::VideoEncodeRateControlLayerInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR),
      pNext(nullptr),
      averageBitrate(),
      maxBitrate(),
      frameRateNumerator(),
      frameRateDenominator() {}

VideoEncodeRateControlLayerInfoKHR::VideoEncodeRateControlLayerInfoKHR(const VideoEncodeRateControlLayerInfoKHR& copy_src) {
    sType = copy_src.sType;
    averageBitrate = copy_src.averageBitrate;
    maxBitrate = copy_src.maxBitrate;
    frameRateNumerator = copy_src.frameRateNumerator;
    frameRateDenominator = copy_src.frameRateDenominator;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeRateControlLayerInfoKHR& VideoEncodeRateControlLayerInfoKHR::operator=(
    const VideoEncodeRateControlLayerInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    averageBitrate = copy_src.averageBitrate;
    maxBitrate = copy_src.maxBitrate;
    frameRateNumerator = copy_src.frameRateNumerator;
    frameRateDenominator = copy_src.frameRateDenominator;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeRateControlLayerInfoKHR::~VideoEncodeRateControlLayerInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeRateControlLayerInfoKHR::initialize(const VkVideoEncodeRateControlLayerInfoKHR* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    averageBitrate = in_struct->averageBitrate;
    maxBitrate = in_struct->maxBitrate;
    frameRateNumerator = in_struct->frameRateNumerator;
    frameRateDenominator = in_struct->frameRateDenominator;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeRateControlLayerInfoKHR::initialize(const VideoEncodeRateControlLayerInfoKHR* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    averageBitrate = copy_src->averageBitrate;
    maxBitrate = copy_src->maxBitrate;
    frameRateNumerator = copy_src->frameRateNumerator;
    frameRateDenominator = copy_src->frameRateDenominator;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeRateControlInfoKHR::VideoEncodeRateControlInfoKHR(const VkVideoEncodeRateControlInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      rateControlMode(in_struct->rateControlMode),
      layerCount(in_struct->layerCount),
      pLayers(nullptr),
      virtualBufferSizeInMs(in_struct->virtualBufferSizeInMs),
      initialVirtualBufferSizeInMs(in_struct->initialVirtualBufferSizeInMs) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (layerCount && in_struct->pLayers) {
        pLayers = new VideoEncodeRateControlLayerInfoKHR[layerCount];
        for (uint32_t i = 0; i < layerCount; ++i) {
            pLayers[i].initialize(&in_struct->pLayers[i]);
        }
    }
}

VideoEncodeRateControlInfoKHR::VideoEncodeRateControlInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR),
      pNext(nullptr),
      flags(),
      rateControlMode(),
      layerCount(),
      pLayers(nullptr),
      virtualBufferSizeInMs(),
      initialVirtualBufferSizeInMs() {}

VideoEncodeRateControlInfoKHR::VideoEncodeRateControlInfoKHR(const VideoEncodeRateControlInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rateControlMode = copy_src.rateControlMode;
    layerCount = copy_src.layerCount;
    pLayers = nullptr;
    virtualBufferSizeInMs = copy_src.virtualBufferSizeInMs;
    initialVirtualBufferSizeInMs = copy_src.initialVirtualBufferSizeInMs;
    pNext = SafePnextCopy(copy_src.pNext);
    if (layerCount && copy_src.pLayers) {
        pLayers = new VideoEncodeRateControlLayerInfoKHR[layerCount];
        for (uint32_t i = 0; i < layerCount; ++i) {
            pLayers[i].initialize(&copy_src.pLayers[i]);
        }
    }
}

VideoEncodeRateControlInfoKHR& VideoEncodeRateControlInfoKHR::operator=(const VideoEncodeRateControlInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pLayers) delete[] pLayers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rateControlMode = copy_src.rateControlMode;
    layerCount = copy_src.layerCount;
    pLayers = nullptr;
    virtualBufferSizeInMs = copy_src.virtualBufferSizeInMs;
    initialVirtualBufferSizeInMs = copy_src.initialVirtualBufferSizeInMs;
    pNext = SafePnextCopy(copy_src.pNext);
    if (layerCount && copy_src.pLayers) {
        pLayers = new VideoEncodeRateControlLayerInfoKHR[layerCount];
        for (uint32_t i = 0; i < layerCount; ++i) {
            pLayers[i].initialize(&copy_src.pLayers[i]);
        }
    }

    return *this;
}

VideoEncodeRateControlInfoKHR::~VideoEncodeRateControlInfoKHR() {
    if (pLayers) delete[] pLayers;
    FreePnextChain(pNext);
}

void VideoEncodeRateControlInfoKHR::initialize(const VkVideoEncodeRateControlInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pLayers) delete[] pLayers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rateControlMode = in_struct->rateControlMode;
    layerCount = in_struct->layerCount;
    pLayers = nullptr;
    virtualBufferSizeInMs = in_struct->virtualBufferSizeInMs;
    initialVirtualBufferSizeInMs = in_struct->initialVirtualBufferSizeInMs;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (layerCount && in_struct->pLayers) {
        pLayers = new VideoEncodeRateControlLayerInfoKHR[layerCount];
        for (uint32_t i = 0; i < layerCount; ++i) {
            pLayers[i].initialize(&in_struct->pLayers[i]);
        }
    }
}

void VideoEncodeRateControlInfoKHR::initialize(const VideoEncodeRateControlInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rateControlMode = copy_src->rateControlMode;
    layerCount = copy_src->layerCount;
    pLayers = nullptr;
    virtualBufferSizeInMs = copy_src->virtualBufferSizeInMs;
    initialVirtualBufferSizeInMs = copy_src->initialVirtualBufferSizeInMs;
    pNext = SafePnextCopy(copy_src->pNext);
    if (layerCount && copy_src->pLayers) {
        pLayers = new VideoEncodeRateControlLayerInfoKHR[layerCount];
        for (uint32_t i = 0; i < layerCount; ++i) {
            pLayers[i].initialize(&copy_src->pLayers[i]);
        }
    }
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::PhysicalDeviceVideoEncodeQualityLevelInfoKHR(
    const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pVideoProfile(nullptr), qualityLevel(in_struct->qualityLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(in_struct->pVideoProfile);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::PhysicalDeviceVideoEncodeQualityLevelInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR),
      pNext(nullptr),
      pVideoProfile(nullptr),
      qualityLevel() {}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::PhysicalDeviceVideoEncodeQualityLevelInfoKHR(
    const PhysicalDeviceVideoEncodeQualityLevelInfoKHR& copy_src) {
    sType = copy_src.sType;
    pVideoProfile = nullptr;
    qualityLevel = copy_src.qualityLevel;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src.pVideoProfile);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR& PhysicalDeviceVideoEncodeQualityLevelInfoKHR::operator=(
    const PhysicalDeviceVideoEncodeQualityLevelInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pVideoProfile) delete pVideoProfile;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pVideoProfile = nullptr;
    qualityLevel = copy_src.qualityLevel;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src.pVideoProfile);

    return *this;
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::~PhysicalDeviceVideoEncodeQualityLevelInfoKHR() {
    if (pVideoProfile) delete pVideoProfile;
    FreePnextChain(pNext);
}

void PhysicalDeviceVideoEncodeQualityLevelInfoKHR::initialize(const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVideoProfile) delete pVideoProfile;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pVideoProfile = nullptr;
    qualityLevel = in_struct->qualityLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(in_struct->pVideoProfile);
}

void PhysicalDeviceVideoEncodeQualityLevelInfoKHR::initialize(const PhysicalDeviceVideoEncodeQualityLevelInfoKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pVideoProfile = nullptr;
    qualityLevel = copy_src->qualityLevel;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pVideoProfile) pVideoProfile = new VideoProfileInfoKHR(*copy_src->pVideoProfile);
}

VideoEncodeQualityLevelPropertiesKHR::VideoEncodeQualityLevelPropertiesKHR(const VkVideoEncodeQualityLevelPropertiesKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      preferredRateControlMode(in_struct->preferredRateControlMode),
      preferredRateControlLayerCount(in_struct->preferredRateControlLayerCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeQualityLevelPropertiesKHR::VideoEncodeQualityLevelPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR),
      pNext(nullptr),
      preferredRateControlMode(),
      preferredRateControlLayerCount() {}

VideoEncodeQualityLevelPropertiesKHR::VideoEncodeQualityLevelPropertiesKHR(const VideoEncodeQualityLevelPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    preferredRateControlMode = copy_src.preferredRateControlMode;
    preferredRateControlLayerCount = copy_src.preferredRateControlLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeQualityLevelPropertiesKHR& VideoEncodeQualityLevelPropertiesKHR::operator=(
    const VideoEncodeQualityLevelPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    preferredRateControlMode = copy_src.preferredRateControlMode;
    preferredRateControlLayerCount = copy_src.preferredRateControlLayerCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeQualityLevelPropertiesKHR::~VideoEncodeQualityLevelPropertiesKHR() { FreePnextChain(pNext); }

void VideoEncodeQualityLevelPropertiesKHR::initialize(const VkVideoEncodeQualityLevelPropertiesKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    preferredRateControlMode = in_struct->preferredRateControlMode;
    preferredRateControlLayerCount = in_struct->preferredRateControlLayerCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeQualityLevelPropertiesKHR::initialize(const VideoEncodeQualityLevelPropertiesKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    preferredRateControlMode = copy_src->preferredRateControlMode;
    preferredRateControlLayerCount = copy_src->preferredRateControlLayerCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeQualityLevelInfoKHR::VideoEncodeQualityLevelInfoKHR(const VkVideoEncodeQualityLevelInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), qualityLevel(in_struct->qualityLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeQualityLevelInfoKHR::VideoEncodeQualityLevelInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR), pNext(nullptr), qualityLevel() {}

VideoEncodeQualityLevelInfoKHR::VideoEncodeQualityLevelInfoKHR(const VideoEncodeQualityLevelInfoKHR& copy_src) {
    sType = copy_src.sType;
    qualityLevel = copy_src.qualityLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeQualityLevelInfoKHR& VideoEncodeQualityLevelInfoKHR::operator=(const VideoEncodeQualityLevelInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    qualityLevel = copy_src.qualityLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeQualityLevelInfoKHR::~VideoEncodeQualityLevelInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeQualityLevelInfoKHR::initialize(const VkVideoEncodeQualityLevelInfoKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    qualityLevel = in_struct->qualityLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeQualityLevelInfoKHR::initialize(const VideoEncodeQualityLevelInfoKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    qualityLevel = copy_src->qualityLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeSessionParametersGetInfoKHR::VideoEncodeSessionParametersGetInfoKHR(
    const VkVideoEncodeSessionParametersGetInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), videoSessionParameters(in_struct->videoSessionParameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeSessionParametersGetInfoKHR::VideoEncodeSessionParametersGetInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR), pNext(nullptr), videoSessionParameters() {}

VideoEncodeSessionParametersGetInfoKHR::VideoEncodeSessionParametersGetInfoKHR(
    const VideoEncodeSessionParametersGetInfoKHR& copy_src) {
    sType = copy_src.sType;
    videoSessionParameters = copy_src.videoSessionParameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeSessionParametersGetInfoKHR& VideoEncodeSessionParametersGetInfoKHR::operator=(
    const VideoEncodeSessionParametersGetInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoSessionParameters = copy_src.videoSessionParameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeSessionParametersGetInfoKHR::~VideoEncodeSessionParametersGetInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeSessionParametersGetInfoKHR::initialize(const VkVideoEncodeSessionParametersGetInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoSessionParameters = in_struct->videoSessionParameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeSessionParametersGetInfoKHR::initialize(const VideoEncodeSessionParametersGetInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoSessionParameters = copy_src->videoSessionParameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoEncodeSessionParametersFeedbackInfoKHR::VideoEncodeSessionParametersFeedbackInfoKHR(
    const VkVideoEncodeSessionParametersFeedbackInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), hasOverrides(in_struct->hasOverrides) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoEncodeSessionParametersFeedbackInfoKHR::VideoEncodeSessionParametersFeedbackInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR), pNext(nullptr), hasOverrides() {}

VideoEncodeSessionParametersFeedbackInfoKHR::VideoEncodeSessionParametersFeedbackInfoKHR(
    const VideoEncodeSessionParametersFeedbackInfoKHR& copy_src) {
    sType = copy_src.sType;
    hasOverrides = copy_src.hasOverrides;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoEncodeSessionParametersFeedbackInfoKHR& VideoEncodeSessionParametersFeedbackInfoKHR::operator=(
    const VideoEncodeSessionParametersFeedbackInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hasOverrides = copy_src.hasOverrides;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoEncodeSessionParametersFeedbackInfoKHR::~VideoEncodeSessionParametersFeedbackInfoKHR() { FreePnextChain(pNext); }

void VideoEncodeSessionParametersFeedbackInfoKHR::initialize(const VkVideoEncodeSessionParametersFeedbackInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hasOverrides = in_struct->hasOverrides;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoEncodeSessionParametersFeedbackInfoKHR::initialize(const VideoEncodeSessionParametersFeedbackInfoKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hasOverrides = copy_src->hasOverrides;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::PhysicalDeviceFragmentShaderBarycentricFeaturesKHR(
    const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), fragmentShaderBarycentric(in_struct->fragmentShaderBarycentric) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::PhysicalDeviceFragmentShaderBarycentricFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR),
      pNext(nullptr),
      fragmentShaderBarycentric() {}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::PhysicalDeviceFragmentShaderBarycentricFeaturesKHR(
    const PhysicalDeviceFragmentShaderBarycentricFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    fragmentShaderBarycentric = copy_src.fragmentShaderBarycentric;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR& PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::operator=(
    const PhysicalDeviceFragmentShaderBarycentricFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    fragmentShaderBarycentric = copy_src.fragmentShaderBarycentric;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::~PhysicalDeviceFragmentShaderBarycentricFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::initialize(
    const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    fragmentShaderBarycentric = in_struct->fragmentShaderBarycentric;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::initialize(
    const PhysicalDeviceFragmentShaderBarycentricFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    fragmentShaderBarycentric = copy_src->fragmentShaderBarycentric;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::PhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
    const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      triStripVertexOrderIndependentOfProvokingVertex(in_struct->triStripVertexOrderIndependentOfProvokingVertex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::PhysicalDeviceFragmentShaderBarycentricPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR),
      pNext(nullptr),
      triStripVertexOrderIndependentOfProvokingVertex() {}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::PhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
    const PhysicalDeviceFragmentShaderBarycentricPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    triStripVertexOrderIndependentOfProvokingVertex = copy_src.triStripVertexOrderIndependentOfProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR& PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::operator=(
    const PhysicalDeviceFragmentShaderBarycentricPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    triStripVertexOrderIndependentOfProvokingVertex = copy_src.triStripVertexOrderIndependentOfProvokingVertex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::~PhysicalDeviceFragmentShaderBarycentricPropertiesKHR() {
    FreePnextChain(pNext);
}

void PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::initialize(
    const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    triStripVertexOrderIndependentOfProvokingVertex = in_struct->triStripVertexOrderIndependentOfProvokingVertex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::initialize(
    const PhysicalDeviceFragmentShaderBarycentricPropertiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    triStripVertexOrderIndependentOfProvokingVertex = copy_src->triStripVertexOrderIndependentOfProvokingVertex;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(
    const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderSubgroupUniformControlFlow(in_struct->shaderSubgroupUniformControlFlow) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR),
      pNext(nullptr),
      shaderSubgroupUniformControlFlow() {}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(
    const PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderSubgroupUniformControlFlow = copy_src.shaderSubgroupUniformControlFlow;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::operator=(
    const PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSubgroupUniformControlFlow = copy_src.shaderSubgroupUniformControlFlow;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::~PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR() {
    FreePnextChain(pNext);
}

void PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::initialize(
    const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSubgroupUniformControlFlow = in_struct->shaderSubgroupUniformControlFlow;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::initialize(
    const PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSubgroupUniformControlFlow = copy_src->shaderSubgroupUniformControlFlow;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(
    const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      workgroupMemoryExplicitLayout(in_struct->workgroupMemoryExplicitLayout),
      workgroupMemoryExplicitLayoutScalarBlockLayout(in_struct->workgroupMemoryExplicitLayoutScalarBlockLayout),
      workgroupMemoryExplicitLayout8BitAccess(in_struct->workgroupMemoryExplicitLayout8BitAccess),
      workgroupMemoryExplicitLayout16BitAccess(in_struct->workgroupMemoryExplicitLayout16BitAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR),
      pNext(nullptr),
      workgroupMemoryExplicitLayout(),
      workgroupMemoryExplicitLayoutScalarBlockLayout(),
      workgroupMemoryExplicitLayout8BitAccess(),
      workgroupMemoryExplicitLayout16BitAccess() {}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(
    const PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    workgroupMemoryExplicitLayout = copy_src.workgroupMemoryExplicitLayout;
    workgroupMemoryExplicitLayoutScalarBlockLayout = copy_src.workgroupMemoryExplicitLayoutScalarBlockLayout;
    workgroupMemoryExplicitLayout8BitAccess = copy_src.workgroupMemoryExplicitLayout8BitAccess;
    workgroupMemoryExplicitLayout16BitAccess = copy_src.workgroupMemoryExplicitLayout16BitAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::operator=(
    const PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    workgroupMemoryExplicitLayout = copy_src.workgroupMemoryExplicitLayout;
    workgroupMemoryExplicitLayoutScalarBlockLayout = copy_src.workgroupMemoryExplicitLayoutScalarBlockLayout;
    workgroupMemoryExplicitLayout8BitAccess = copy_src.workgroupMemoryExplicitLayout8BitAccess;
    workgroupMemoryExplicitLayout16BitAccess = copy_src.workgroupMemoryExplicitLayout16BitAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::~PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR() {
    FreePnextChain(pNext);
}

void PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::initialize(
    const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    workgroupMemoryExplicitLayout = in_struct->workgroupMemoryExplicitLayout;
    workgroupMemoryExplicitLayoutScalarBlockLayout = in_struct->workgroupMemoryExplicitLayoutScalarBlockLayout;
    workgroupMemoryExplicitLayout8BitAccess = in_struct->workgroupMemoryExplicitLayout8BitAccess;
    workgroupMemoryExplicitLayout16BitAccess = in_struct->workgroupMemoryExplicitLayout16BitAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::initialize(
    const PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    workgroupMemoryExplicitLayout = copy_src->workgroupMemoryExplicitLayout;
    workgroupMemoryExplicitLayoutScalarBlockLayout = copy_src->workgroupMemoryExplicitLayoutScalarBlockLayout;
    workgroupMemoryExplicitLayout8BitAccess = copy_src->workgroupMemoryExplicitLayout8BitAccess;
    workgroupMemoryExplicitLayout16BitAccess = copy_src->workgroupMemoryExplicitLayout16BitAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::PhysicalDeviceRayTracingMaintenance1FeaturesKHR(
    const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      rayTracingMaintenance1(in_struct->rayTracingMaintenance1),
      rayTracingPipelineTraceRaysIndirect2(in_struct->rayTracingPipelineTraceRaysIndirect2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::PhysicalDeviceRayTracingMaintenance1FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR),
      pNext(nullptr),
      rayTracingMaintenance1(),
      rayTracingPipelineTraceRaysIndirect2() {}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::PhysicalDeviceRayTracingMaintenance1FeaturesKHR(
    const PhysicalDeviceRayTracingMaintenance1FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    rayTracingMaintenance1 = copy_src.rayTracingMaintenance1;
    rayTracingPipelineTraceRaysIndirect2 = copy_src.rayTracingPipelineTraceRaysIndirect2;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR& PhysicalDeviceRayTracingMaintenance1FeaturesKHR::operator=(
    const PhysicalDeviceRayTracingMaintenance1FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingMaintenance1 = copy_src.rayTracingMaintenance1;
    rayTracingPipelineTraceRaysIndirect2 = copy_src.rayTracingPipelineTraceRaysIndirect2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::~PhysicalDeviceRayTracingMaintenance1FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingMaintenance1FeaturesKHR::initialize(const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingMaintenance1 = in_struct->rayTracingMaintenance1;
    rayTracingPipelineTraceRaysIndirect2 = in_struct->rayTracingPipelineTraceRaysIndirect2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingMaintenance1FeaturesKHR::initialize(const PhysicalDeviceRayTracingMaintenance1FeaturesKHR* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingMaintenance1 = copy_src->rayTracingMaintenance1;
    rayTracingPipelineTraceRaysIndirect2 = copy_src->rayTracingPipelineTraceRaysIndirect2;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::PhysicalDeviceShaderSubgroupRotateFeaturesKHR(
    const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderSubgroupRotate(in_struct->shaderSubgroupRotate),
      shaderSubgroupRotateClustered(in_struct->shaderSubgroupRotateClustered) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::PhysicalDeviceShaderSubgroupRotateFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR),
      pNext(nullptr),
      shaderSubgroupRotate(),
      shaderSubgroupRotateClustered() {}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::PhysicalDeviceShaderSubgroupRotateFeaturesKHR(
    const PhysicalDeviceShaderSubgroupRotateFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderSubgroupRotate = copy_src.shaderSubgroupRotate;
    shaderSubgroupRotateClustered = copy_src.shaderSubgroupRotateClustered;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR& PhysicalDeviceShaderSubgroupRotateFeaturesKHR::operator=(
    const PhysicalDeviceShaderSubgroupRotateFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSubgroupRotate = copy_src.shaderSubgroupRotate;
    shaderSubgroupRotateClustered = copy_src.shaderSubgroupRotateClustered;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::~PhysicalDeviceShaderSubgroupRotateFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceShaderSubgroupRotateFeaturesKHR::initialize(const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSubgroupRotate = in_struct->shaderSubgroupRotate;
    shaderSubgroupRotateClustered = in_struct->shaderSubgroupRotateClustered;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderSubgroupRotateFeaturesKHR::initialize(const PhysicalDeviceShaderSubgroupRotateFeaturesKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSubgroupRotate = copy_src->shaderSubgroupRotate;
    shaderSubgroupRotateClustered = copy_src->shaderSubgroupRotateClustered;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(
    const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderMaximalReconvergence(in_struct->shaderMaximalReconvergence) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR),
      pNext(nullptr),
      shaderMaximalReconvergence() {}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(
    const PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderMaximalReconvergence = copy_src.shaderMaximalReconvergence;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR& PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::operator=(
    const PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderMaximalReconvergence = copy_src.shaderMaximalReconvergence;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::~PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR() {
    FreePnextChain(pNext);
}

void PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::initialize(
    const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderMaximalReconvergence = in_struct->shaderMaximalReconvergence;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::initialize(
    const PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderMaximalReconvergence = copy_src->shaderMaximalReconvergence;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance5FeaturesKHR::PhysicalDeviceMaintenance5FeaturesKHR(
    const VkPhysicalDeviceMaintenance5FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maintenance5(in_struct->maintenance5) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance5FeaturesKHR::PhysicalDeviceMaintenance5FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR), pNext(nullptr), maintenance5() {}

PhysicalDeviceMaintenance5FeaturesKHR::PhysicalDeviceMaintenance5FeaturesKHR(
    const PhysicalDeviceMaintenance5FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    maintenance5 = copy_src.maintenance5;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance5FeaturesKHR& PhysicalDeviceMaintenance5FeaturesKHR::operator=(
    const PhysicalDeviceMaintenance5FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maintenance5 = copy_src.maintenance5;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance5FeaturesKHR::~PhysicalDeviceMaintenance5FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance5FeaturesKHR::initialize(const VkPhysicalDeviceMaintenance5FeaturesKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maintenance5 = in_struct->maintenance5;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance5FeaturesKHR::initialize(const PhysicalDeviceMaintenance5FeaturesKHR* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maintenance5 = copy_src->maintenance5;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance5PropertiesKHR::PhysicalDeviceMaintenance5PropertiesKHR(
    const VkPhysicalDeviceMaintenance5PropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      earlyFragmentMultisampleCoverageAfterSampleCounting(in_struct->earlyFragmentMultisampleCoverageAfterSampleCounting),
      earlyFragmentSampleMaskTestBeforeSampleCounting(in_struct->earlyFragmentSampleMaskTestBeforeSampleCounting),
      depthStencilSwizzleOneSupport(in_struct->depthStencilSwizzleOneSupport),
      polygonModePointSize(in_struct->polygonModePointSize),
      nonStrictSinglePixelWideLinesUseParallelogram(in_struct->nonStrictSinglePixelWideLinesUseParallelogram),
      nonStrictWideLinesUseParallelogram(in_struct->nonStrictWideLinesUseParallelogram) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance5PropertiesKHR::PhysicalDeviceMaintenance5PropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR),
      pNext(nullptr),
      earlyFragmentMultisampleCoverageAfterSampleCounting(),
      earlyFragmentSampleMaskTestBeforeSampleCounting(),
      depthStencilSwizzleOneSupport(),
      polygonModePointSize(),
      nonStrictSinglePixelWideLinesUseParallelogram(),
      nonStrictWideLinesUseParallelogram() {}

PhysicalDeviceMaintenance5PropertiesKHR::PhysicalDeviceMaintenance5PropertiesKHR(
    const PhysicalDeviceMaintenance5PropertiesKHR& copy_src) {
    sType = copy_src.sType;
    earlyFragmentMultisampleCoverageAfterSampleCounting = copy_src.earlyFragmentMultisampleCoverageAfterSampleCounting;
    earlyFragmentSampleMaskTestBeforeSampleCounting = copy_src.earlyFragmentSampleMaskTestBeforeSampleCounting;
    depthStencilSwizzleOneSupport = copy_src.depthStencilSwizzleOneSupport;
    polygonModePointSize = copy_src.polygonModePointSize;
    nonStrictSinglePixelWideLinesUseParallelogram = copy_src.nonStrictSinglePixelWideLinesUseParallelogram;
    nonStrictWideLinesUseParallelogram = copy_src.nonStrictWideLinesUseParallelogram;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance5PropertiesKHR& PhysicalDeviceMaintenance5PropertiesKHR::operator=(
    const PhysicalDeviceMaintenance5PropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    earlyFragmentMultisampleCoverageAfterSampleCounting = copy_src.earlyFragmentMultisampleCoverageAfterSampleCounting;
    earlyFragmentSampleMaskTestBeforeSampleCounting = copy_src.earlyFragmentSampleMaskTestBeforeSampleCounting;
    depthStencilSwizzleOneSupport = copy_src.depthStencilSwizzleOneSupport;
    polygonModePointSize = copy_src.polygonModePointSize;
    nonStrictSinglePixelWideLinesUseParallelogram = copy_src.nonStrictSinglePixelWideLinesUseParallelogram;
    nonStrictWideLinesUseParallelogram = copy_src.nonStrictWideLinesUseParallelogram;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance5PropertiesKHR::~PhysicalDeviceMaintenance5PropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance5PropertiesKHR::initialize(const VkPhysicalDeviceMaintenance5PropertiesKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    earlyFragmentMultisampleCoverageAfterSampleCounting = in_struct->earlyFragmentMultisampleCoverageAfterSampleCounting;
    earlyFragmentSampleMaskTestBeforeSampleCounting = in_struct->earlyFragmentSampleMaskTestBeforeSampleCounting;
    depthStencilSwizzleOneSupport = in_struct->depthStencilSwizzleOneSupport;
    polygonModePointSize = in_struct->polygonModePointSize;
    nonStrictSinglePixelWideLinesUseParallelogram = in_struct->nonStrictSinglePixelWideLinesUseParallelogram;
    nonStrictWideLinesUseParallelogram = in_struct->nonStrictWideLinesUseParallelogram;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance5PropertiesKHR::initialize(const PhysicalDeviceMaintenance5PropertiesKHR* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    earlyFragmentMultisampleCoverageAfterSampleCounting = copy_src->earlyFragmentMultisampleCoverageAfterSampleCounting;
    earlyFragmentSampleMaskTestBeforeSampleCounting = copy_src->earlyFragmentSampleMaskTestBeforeSampleCounting;
    depthStencilSwizzleOneSupport = copy_src->depthStencilSwizzleOneSupport;
    polygonModePointSize = copy_src->polygonModePointSize;
    nonStrictSinglePixelWideLinesUseParallelogram = copy_src->nonStrictSinglePixelWideLinesUseParallelogram;
    nonStrictWideLinesUseParallelogram = copy_src->nonStrictWideLinesUseParallelogram;
    pNext = SafePnextCopy(copy_src->pNext);
}

RenderingAreaInfoKHR::RenderingAreaInfoKHR(const VkRenderingAreaInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(in_struct->depthAttachmentFormat),
      stencilAttachmentFormat(in_struct->stencilAttachmentFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

RenderingAreaInfoKHR::RenderingAreaInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR),
      pNext(nullptr),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(),
      stencilAttachmentFormat() {}

RenderingAreaInfoKHR::RenderingAreaInfoKHR(const RenderingAreaInfoKHR& copy_src) {
    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }
}

RenderingAreaInfoKHR& RenderingAreaInfoKHR::operator=(const RenderingAreaInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }

    return *this;
}

RenderingAreaInfoKHR::~RenderingAreaInfoKHR() {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
}

void RenderingAreaInfoKHR::initialize(const VkRenderingAreaInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = in_struct->depthAttachmentFormat;
    stencilAttachmentFormat = in_struct->stencilAttachmentFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

void RenderingAreaInfoKHR::initialize(const RenderingAreaInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src->depthAttachmentFormat;
    stencilAttachmentFormat = copy_src->stencilAttachmentFormat;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src->pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src->colorAttachmentCount);
    }
}

ImageSubresource2KHR::ImageSubresource2KHR(const VkImageSubresource2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), imageSubresource(in_struct->imageSubresource) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

ImageSubresource2KHR::ImageSubresource2KHR()
    : sType(VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR), pNext(nullptr), imageSubresource() {}

ImageSubresource2KHR::ImageSubresource2KHR(const ImageSubresource2KHR& copy_src) {
    sType = copy_src.sType;
    imageSubresource = copy_src.imageSubresource;
    pNext = SafePnextCopy(copy_src.pNext);
}

ImageSubresource2KHR& ImageSubresource2KHR::operator=(const ImageSubresource2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageSubresource = copy_src.imageSubresource;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

ImageSubresource2KHR::~ImageSubresource2KHR() { FreePnextChain(pNext); }

void ImageSubresource2KHR::initialize(const VkImageSubresource2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageSubresource = in_struct->imageSubresource;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void ImageSubresource2KHR::initialize(const ImageSubresource2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageSubresource = copy_src->imageSubresource;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceImageSubresourceInfoKHR::DeviceImageSubresourceInfoKHR(const VkDeviceImageSubresourceInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pCreateInfo(nullptr), pSubresource(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCreateInfo) pCreateInfo = new ImageCreateInfo(in_struct->pCreateInfo);
    if (in_struct->pSubresource) pSubresource = new ImageSubresource2KHR(in_struct->pSubresource);
}

DeviceImageSubresourceInfoKHR::DeviceImageSubresourceInfoKHR()
    : sType(VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR), pNext(nullptr), pCreateInfo(nullptr), pSubresource(nullptr) {}

DeviceImageSubresourceInfoKHR::DeviceImageSubresourceInfoKHR(const DeviceImageSubresourceInfoKHR& copy_src) {
    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pSubresource = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src.pCreateInfo);
    if (copy_src.pSubresource) pSubresource = new ImageSubresource2KHR(*copy_src.pSubresource);
}

DeviceImageSubresourceInfoKHR& DeviceImageSubresourceInfoKHR::operator=(const DeviceImageSubresourceInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pCreateInfo) delete pCreateInfo;
    if (pSubresource) delete pSubresource;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pSubresource = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src.pCreateInfo);
    if (copy_src.pSubresource) pSubresource = new ImageSubresource2KHR(*copy_src.pSubresource);

    return *this;
}

DeviceImageSubresourceInfoKHR::~DeviceImageSubresourceInfoKHR() {
    if (pCreateInfo) delete pCreateInfo;
    if (pSubresource) delete pSubresource;
    FreePnextChain(pNext);
}

void DeviceImageSubresourceInfoKHR::initialize(const VkDeviceImageSubresourceInfoKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCreateInfo) delete pCreateInfo;
    if (pSubresource) delete pSubresource;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pCreateInfo = nullptr;
    pSubresource = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pCreateInfo) pCreateInfo = new ImageCreateInfo(in_struct->pCreateInfo);
    if (in_struct->pSubresource) pSubresource = new ImageSubresource2KHR(in_struct->pSubresource);
}

void DeviceImageSubresourceInfoKHR::initialize(const DeviceImageSubresourceInfoKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pCreateInfo = nullptr;
    pSubresource = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pCreateInfo) pCreateInfo = new ImageCreateInfo(*copy_src->pCreateInfo);
    if (copy_src->pSubresource) pSubresource = new ImageSubresource2KHR(*copy_src->pSubresource);
}

SubresourceLayout2KHR::SubresourceLayout2KHR(const VkSubresourceLayout2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType), subresourceLayout(in_struct->subresourceLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

SubresourceLayout2KHR::SubresourceLayout2KHR()
    : sType(VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR), pNext(nullptr), subresourceLayout() {}

SubresourceLayout2KHR::SubresourceLayout2KHR(const SubresourceLayout2KHR& copy_src) {
    sType = copy_src.sType;
    subresourceLayout = copy_src.subresourceLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

SubresourceLayout2KHR& SubresourceLayout2KHR::operator=(const SubresourceLayout2KHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subresourceLayout = copy_src.subresourceLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

SubresourceLayout2KHR::~SubresourceLayout2KHR() { FreePnextChain(pNext); }

void SubresourceLayout2KHR::initialize(const VkSubresourceLayout2KHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subresourceLayout = in_struct->subresourceLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void SubresourceLayout2KHR::initialize(const SubresourceLayout2KHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subresourceLayout = copy_src->subresourceLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineCreateFlags2CreateInfoKHR::PipelineCreateFlags2CreateInfoKHR(const VkPipelineCreateFlags2CreateInfoKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineCreateFlags2CreateInfoKHR::PipelineCreateFlags2CreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR), pNext(nullptr), flags() {}

PipelineCreateFlags2CreateInfoKHR::PipelineCreateFlags2CreateInfoKHR(const PipelineCreateFlags2CreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineCreateFlags2CreateInfoKHR& PipelineCreateFlags2CreateInfoKHR::operator=(const PipelineCreateFlags2CreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineCreateFlags2CreateInfoKHR::~PipelineCreateFlags2CreateInfoKHR() { FreePnextChain(pNext); }

void PipelineCreateFlags2CreateInfoKHR::initialize(const VkPipelineCreateFlags2CreateInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineCreateFlags2CreateInfoKHR::initialize(const PipelineCreateFlags2CreateInfoKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

BufferUsageFlags2CreateInfoKHR::BufferUsageFlags2CreateInfoKHR(const VkBufferUsageFlags2CreateInfoKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

BufferUsageFlags2CreateInfoKHR::BufferUsageFlags2CreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR), pNext(nullptr), usage() {}

BufferUsageFlags2CreateInfoKHR::BufferUsageFlags2CreateInfoKHR(const BufferUsageFlags2CreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

BufferUsageFlags2CreateInfoKHR& BufferUsageFlags2CreateInfoKHR::operator=(const BufferUsageFlags2CreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

BufferUsageFlags2CreateInfoKHR::~BufferUsageFlags2CreateInfoKHR() { FreePnextChain(pNext); }

void BufferUsageFlags2CreateInfoKHR::initialize(const VkBufferUsageFlags2CreateInfoKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void BufferUsageFlags2CreateInfoKHR::initialize(const BufferUsageFlags2CreateInfoKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::PhysicalDeviceRayTracingPositionFetchFeaturesKHR(
    const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), rayTracingPositionFetch(in_struct->rayTracingPositionFetch) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::PhysicalDeviceRayTracingPositionFetchFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR), pNext(nullptr), rayTracingPositionFetch() {}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::PhysicalDeviceRayTracingPositionFetchFeaturesKHR(
    const PhysicalDeviceRayTracingPositionFetchFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    rayTracingPositionFetch = copy_src.rayTracingPositionFetch;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR& PhysicalDeviceRayTracingPositionFetchFeaturesKHR::operator=(
    const PhysicalDeviceRayTracingPositionFetchFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingPositionFetch = copy_src.rayTracingPositionFetch;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::~PhysicalDeviceRayTracingPositionFetchFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingPositionFetchFeaturesKHR::initialize(
    const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingPositionFetch = in_struct->rayTracingPositionFetch;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingPositionFetchFeaturesKHR::initialize(const PhysicalDeviceRayTracingPositionFetchFeaturesKHR* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingPositionFetch = copy_src->rayTracingPositionFetch;
    pNext = SafePnextCopy(copy_src->pNext);
}

CooperativeMatrixPropertiesKHR::CooperativeMatrixPropertiesKHR(const VkCooperativeMatrixPropertiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      MSize(in_struct->MSize),
      NSize(in_struct->NSize),
      KSize(in_struct->KSize),
      AType(in_struct->AType),
      BType(in_struct->BType),
      CType(in_struct->CType),
      ResultType(in_struct->ResultType),
      saturatingAccumulation(in_struct->saturatingAccumulation),
      scope(in_struct->scope) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CooperativeMatrixPropertiesKHR::CooperativeMatrixPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR),
      pNext(nullptr),
      MSize(),
      NSize(),
      KSize(),
      AType(),
      BType(),
      CType(),
      ResultType(),
      saturatingAccumulation(),
      scope() {}

CooperativeMatrixPropertiesKHR::CooperativeMatrixPropertiesKHR(const CooperativeMatrixPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    MSize = copy_src.MSize;
    NSize = copy_src.NSize;
    KSize = copy_src.KSize;
    AType = copy_src.AType;
    BType = copy_src.BType;
    CType = copy_src.CType;
    ResultType = copy_src.ResultType;
    saturatingAccumulation = copy_src.saturatingAccumulation;
    scope = copy_src.scope;
    pNext = SafePnextCopy(copy_src.pNext);
}

CooperativeMatrixPropertiesKHR& CooperativeMatrixPropertiesKHR::operator=(const CooperativeMatrixPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    MSize = copy_src.MSize;
    NSize = copy_src.NSize;
    KSize = copy_src.KSize;
    AType = copy_src.AType;
    BType = copy_src.BType;
    CType = copy_src.CType;
    ResultType = copy_src.ResultType;
    saturatingAccumulation = copy_src.saturatingAccumulation;
    scope = copy_src.scope;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CooperativeMatrixPropertiesKHR::~CooperativeMatrixPropertiesKHR() { FreePnextChain(pNext); }

void CooperativeMatrixPropertiesKHR::initialize(const VkCooperativeMatrixPropertiesKHR* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    MSize = in_struct->MSize;
    NSize = in_struct->NSize;
    KSize = in_struct->KSize;
    AType = in_struct->AType;
    BType = in_struct->BType;
    CType = in_struct->CType;
    ResultType = in_struct->ResultType;
    saturatingAccumulation = in_struct->saturatingAccumulation;
    scope = in_struct->scope;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CooperativeMatrixPropertiesKHR::initialize(const CooperativeMatrixPropertiesKHR* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    MSize = copy_src->MSize;
    NSize = copy_src->NSize;
    KSize = copy_src->KSize;
    AType = copy_src->AType;
    BType = copy_src->BType;
    CType = copy_src->CType;
    ResultType = copy_src->ResultType;
    saturatingAccumulation = copy_src->saturatingAccumulation;
    scope = copy_src->scope;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::PhysicalDeviceCooperativeMatrixFeaturesKHR(
    const VkPhysicalDeviceCooperativeMatrixFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      cooperativeMatrix(in_struct->cooperativeMatrix),
      cooperativeMatrixRobustBufferAccess(in_struct->cooperativeMatrixRobustBufferAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::PhysicalDeviceCooperativeMatrixFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR),
      pNext(nullptr),
      cooperativeMatrix(),
      cooperativeMatrixRobustBufferAccess() {}

PhysicalDeviceCooperativeMatrixFeaturesKHR::PhysicalDeviceCooperativeMatrixFeaturesKHR(
    const PhysicalDeviceCooperativeMatrixFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    cooperativeMatrix = copy_src.cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src.cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR& PhysicalDeviceCooperativeMatrixFeaturesKHR::operator=(
    const PhysicalDeviceCooperativeMatrixFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cooperativeMatrix = copy_src.cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src.cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::~PhysicalDeviceCooperativeMatrixFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceCooperativeMatrixFeaturesKHR::initialize(const VkPhysicalDeviceCooperativeMatrixFeaturesKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cooperativeMatrix = in_struct->cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = in_struct->cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCooperativeMatrixFeaturesKHR::initialize(const PhysicalDeviceCooperativeMatrixFeaturesKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cooperativeMatrix = copy_src->cooperativeMatrix;
    cooperativeMatrixRobustBufferAccess = copy_src->cooperativeMatrixRobustBufferAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::PhysicalDeviceCooperativeMatrixPropertiesKHR(
    const VkPhysicalDeviceCooperativeMatrixPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), cooperativeMatrixSupportedStages(in_struct->cooperativeMatrixSupportedStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::PhysicalDeviceCooperativeMatrixPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR),
      pNext(nullptr),
      cooperativeMatrixSupportedStages() {}

PhysicalDeviceCooperativeMatrixPropertiesKHR::PhysicalDeviceCooperativeMatrixPropertiesKHR(
    const PhysicalDeviceCooperativeMatrixPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    cooperativeMatrixSupportedStages = copy_src.cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR& PhysicalDeviceCooperativeMatrixPropertiesKHR::operator=(
    const PhysicalDeviceCooperativeMatrixPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    cooperativeMatrixSupportedStages = copy_src.cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::~PhysicalDeviceCooperativeMatrixPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceCooperativeMatrixPropertiesKHR::initialize(const VkPhysicalDeviceCooperativeMatrixPropertiesKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    cooperativeMatrixSupportedStages = in_struct->cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceCooperativeMatrixPropertiesKHR::initialize(const PhysicalDeviceCooperativeMatrixPropertiesKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    cooperativeMatrixSupportedStages = copy_src->cooperativeMatrixSupportedStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeAV1ProfileInfoKHR::VideoDecodeAV1ProfileInfoKHR(const VkVideoDecodeAV1ProfileInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stdProfile(in_struct->stdProfile), filmGrainSupport(in_struct->filmGrainSupport) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeAV1ProfileInfoKHR::VideoDecodeAV1ProfileInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR), pNext(nullptr), stdProfile(), filmGrainSupport() {}

VideoDecodeAV1ProfileInfoKHR::VideoDecodeAV1ProfileInfoKHR(const VideoDecodeAV1ProfileInfoKHR& copy_src) {
    sType = copy_src.sType;
    stdProfile = copy_src.stdProfile;
    filmGrainSupport = copy_src.filmGrainSupport;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeAV1ProfileInfoKHR& VideoDecodeAV1ProfileInfoKHR::operator=(const VideoDecodeAV1ProfileInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stdProfile = copy_src.stdProfile;
    filmGrainSupport = copy_src.filmGrainSupport;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeAV1ProfileInfoKHR::~VideoDecodeAV1ProfileInfoKHR() { FreePnextChain(pNext); }

void VideoDecodeAV1ProfileInfoKHR::initialize(const VkVideoDecodeAV1ProfileInfoKHR* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stdProfile = in_struct->stdProfile;
    filmGrainSupport = in_struct->filmGrainSupport;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeAV1ProfileInfoKHR::initialize(const VideoDecodeAV1ProfileInfoKHR* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stdProfile = copy_src->stdProfile;
    filmGrainSupport = copy_src->filmGrainSupport;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeAV1CapabilitiesKHR::VideoDecodeAV1CapabilitiesKHR(const VkVideoDecodeAV1CapabilitiesKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxLevel(in_struct->maxLevel) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoDecodeAV1CapabilitiesKHR::VideoDecodeAV1CapabilitiesKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR), pNext(nullptr), maxLevel() {}

VideoDecodeAV1CapabilitiesKHR::VideoDecodeAV1CapabilitiesKHR(const VideoDecodeAV1CapabilitiesKHR& copy_src) {
    sType = copy_src.sType;
    maxLevel = copy_src.maxLevel;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoDecodeAV1CapabilitiesKHR& VideoDecodeAV1CapabilitiesKHR::operator=(const VideoDecodeAV1CapabilitiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxLevel = copy_src.maxLevel;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoDecodeAV1CapabilitiesKHR::~VideoDecodeAV1CapabilitiesKHR() { FreePnextChain(pNext); }

void VideoDecodeAV1CapabilitiesKHR::initialize(const VkVideoDecodeAV1CapabilitiesKHR* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxLevel = in_struct->maxLevel;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoDecodeAV1CapabilitiesKHR::initialize(const VideoDecodeAV1CapabilitiesKHR* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxLevel = copy_src->maxLevel;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoDecodeAV1SessionParametersCreateInfoKHR::VideoDecodeAV1SessionParametersCreateInfoKHR(
    const VkVideoDecodeAV1SessionParametersCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdSequenceHeader(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdSequenceHeader) {
        pStdSequenceHeader = new StdVideoAV1SequenceHeader(*in_struct->pStdSequenceHeader);
    }
}

VideoDecodeAV1SessionParametersCreateInfoKHR::VideoDecodeAV1SessionParametersCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR), pNext(nullptr), pStdSequenceHeader(nullptr) {}

VideoDecodeAV1SessionParametersCreateInfoKHR::VideoDecodeAV1SessionParametersCreateInfoKHR(
    const VideoDecodeAV1SessionParametersCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdSequenceHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSequenceHeader) {
        pStdSequenceHeader = new StdVideoAV1SequenceHeader(*copy_src.pStdSequenceHeader);
    }
}

VideoDecodeAV1SessionParametersCreateInfoKHR& VideoDecodeAV1SessionParametersCreateInfoKHR::operator=(
    const VideoDecodeAV1SessionParametersCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdSequenceHeader) delete pStdSequenceHeader;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdSequenceHeader = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdSequenceHeader) {
        pStdSequenceHeader = new StdVideoAV1SequenceHeader(*copy_src.pStdSequenceHeader);
    }

    return *this;
}

VideoDecodeAV1SessionParametersCreateInfoKHR::~VideoDecodeAV1SessionParametersCreateInfoKHR() {
    if (pStdSequenceHeader) delete pStdSequenceHeader;
    FreePnextChain(pNext);
}

void VideoDecodeAV1SessionParametersCreateInfoKHR::initialize(const VkVideoDecodeAV1SessionParametersCreateInfoKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdSequenceHeader) delete pStdSequenceHeader;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdSequenceHeader = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdSequenceHeader) {
        pStdSequenceHeader = new StdVideoAV1SequenceHeader(*in_struct->pStdSequenceHeader);
    }
}

void VideoDecodeAV1SessionParametersCreateInfoKHR::initialize(const VideoDecodeAV1SessionParametersCreateInfoKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdSequenceHeader = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdSequenceHeader) {
        pStdSequenceHeader = new StdVideoAV1SequenceHeader(*copy_src->pStdSequenceHeader);
    }
}

VideoDecodeAV1PictureInfoKHR::VideoDecodeAV1PictureInfoKHR(const VkVideoDecodeAV1PictureInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pStdPictureInfo(nullptr),
      frameHeaderOffset(in_struct->frameHeaderOffset),
      tileCount(in_struct->tileCount),
      pTileOffsets(nullptr),
      pTileSizes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeAV1PictureInfo(*in_struct->pStdPictureInfo);
    }

    for (uint32_t i = 0; i < VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR; ++i) {
        referenceNameSlotIndices[i] = in_struct->referenceNameSlotIndices[i];
    }

    if (in_struct->pTileOffsets) {
        pTileOffsets = new uint32_t[in_struct->tileCount];
        memcpy((void*)pTileOffsets, (void*)in_struct->pTileOffsets, sizeof(uint32_t) * in_struct->tileCount);
    }

    if (in_struct->pTileSizes) {
        pTileSizes = new uint32_t[in_struct->tileCount];
        memcpy((void*)pTileSizes, (void*)in_struct->pTileSizes, sizeof(uint32_t) * in_struct->tileCount);
    }
}

VideoDecodeAV1PictureInfoKHR::VideoDecodeAV1PictureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR),
      pNext(nullptr),
      pStdPictureInfo(nullptr),
      frameHeaderOffset(),
      tileCount(),
      pTileOffsets(nullptr),
      pTileSizes(nullptr) {}

VideoDecodeAV1PictureInfoKHR::VideoDecodeAV1PictureInfoKHR(const VideoDecodeAV1PictureInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    frameHeaderOffset = copy_src.frameHeaderOffset;
    tileCount = copy_src.tileCount;
    pTileOffsets = nullptr;
    pTileSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeAV1PictureInfo(*copy_src.pStdPictureInfo);
    }

    for (uint32_t i = 0; i < VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR; ++i) {
        referenceNameSlotIndices[i] = copy_src.referenceNameSlotIndices[i];
    }

    if (copy_src.pTileOffsets) {
        pTileOffsets = new uint32_t[copy_src.tileCount];
        memcpy((void*)pTileOffsets, (void*)copy_src.pTileOffsets, sizeof(uint32_t) * copy_src.tileCount);
    }

    if (copy_src.pTileSizes) {
        pTileSizes = new uint32_t[copy_src.tileCount];
        memcpy((void*)pTileSizes, (void*)copy_src.pTileSizes, sizeof(uint32_t) * copy_src.tileCount);
    }
}

VideoDecodeAV1PictureInfoKHR& VideoDecodeAV1PictureInfoKHR::operator=(const VideoDecodeAV1PictureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pTileOffsets) delete[] pTileOffsets;
    if (pTileSizes) delete[] pTileSizes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdPictureInfo = nullptr;
    frameHeaderOffset = copy_src.frameHeaderOffset;
    tileCount = copy_src.tileCount;
    pTileOffsets = nullptr;
    pTileSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeAV1PictureInfo(*copy_src.pStdPictureInfo);
    }

    for (uint32_t i = 0; i < VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR; ++i) {
        referenceNameSlotIndices[i] = copy_src.referenceNameSlotIndices[i];
    }

    if (copy_src.pTileOffsets) {
        pTileOffsets = new uint32_t[copy_src.tileCount];
        memcpy((void*)pTileOffsets, (void*)copy_src.pTileOffsets, sizeof(uint32_t) * copy_src.tileCount);
    }

    if (copy_src.pTileSizes) {
        pTileSizes = new uint32_t[copy_src.tileCount];
        memcpy((void*)pTileSizes, (void*)copy_src.pTileSizes, sizeof(uint32_t) * copy_src.tileCount);
    }

    return *this;
}

VideoDecodeAV1PictureInfoKHR::~VideoDecodeAV1PictureInfoKHR() {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pTileOffsets) delete[] pTileOffsets;
    if (pTileSizes) delete[] pTileSizes;
    FreePnextChain(pNext);
}

void VideoDecodeAV1PictureInfoKHR::initialize(const VkVideoDecodeAV1PictureInfoKHR* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdPictureInfo) delete pStdPictureInfo;
    if (pTileOffsets) delete[] pTileOffsets;
    if (pTileSizes) delete[] pTileSizes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdPictureInfo = nullptr;
    frameHeaderOffset = in_struct->frameHeaderOffset;
    tileCount = in_struct->tileCount;
    pTileOffsets = nullptr;
    pTileSizes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeAV1PictureInfo(*in_struct->pStdPictureInfo);
    }

    for (uint32_t i = 0; i < VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR; ++i) {
        referenceNameSlotIndices[i] = in_struct->referenceNameSlotIndices[i];
    }

    if (in_struct->pTileOffsets) {
        pTileOffsets = new uint32_t[in_struct->tileCount];
        memcpy((void*)pTileOffsets, (void*)in_struct->pTileOffsets, sizeof(uint32_t) * in_struct->tileCount);
    }

    if (in_struct->pTileSizes) {
        pTileSizes = new uint32_t[in_struct->tileCount];
        memcpy((void*)pTileSizes, (void*)in_struct->pTileSizes, sizeof(uint32_t) * in_struct->tileCount);
    }
}

void VideoDecodeAV1PictureInfoKHR::initialize(const VideoDecodeAV1PictureInfoKHR* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdPictureInfo = nullptr;
    frameHeaderOffset = copy_src->frameHeaderOffset;
    tileCount = copy_src->tileCount;
    pTileOffsets = nullptr;
    pTileSizes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdPictureInfo) {
        pStdPictureInfo = new StdVideoDecodeAV1PictureInfo(*copy_src->pStdPictureInfo);
    }

    for (uint32_t i = 0; i < VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR; ++i) {
        referenceNameSlotIndices[i] = copy_src->referenceNameSlotIndices[i];
    }

    if (copy_src->pTileOffsets) {
        pTileOffsets = new uint32_t[copy_src->tileCount];
        memcpy((void*)pTileOffsets, (void*)copy_src->pTileOffsets, sizeof(uint32_t) * copy_src->tileCount);
    }

    if (copy_src->pTileSizes) {
        pTileSizes = new uint32_t[copy_src->tileCount];
        memcpy((void*)pTileSizes, (void*)copy_src->pTileSizes, sizeof(uint32_t) * copy_src->tileCount);
    }
}

VideoDecodeAV1DpbSlotInfoKHR::VideoDecodeAV1DpbSlotInfoKHR(const VkVideoDecodeAV1DpbSlotInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pStdReferenceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeAV1ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

VideoDecodeAV1DpbSlotInfoKHR::VideoDecodeAV1DpbSlotInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR), pNext(nullptr), pStdReferenceInfo(nullptr) {}

VideoDecodeAV1DpbSlotInfoKHR::VideoDecodeAV1DpbSlotInfoKHR(const VideoDecodeAV1DpbSlotInfoKHR& copy_src) {
    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeAV1ReferenceInfo(*copy_src.pStdReferenceInfo);
    }
}

VideoDecodeAV1DpbSlotInfoKHR& VideoDecodeAV1DpbSlotInfoKHR::operator=(const VideoDecodeAV1DpbSlotInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeAV1ReferenceInfo(*copy_src.pStdReferenceInfo);
    }

    return *this;
}

VideoDecodeAV1DpbSlotInfoKHR::~VideoDecodeAV1DpbSlotInfoKHR() {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
}

void VideoDecodeAV1DpbSlotInfoKHR::initialize(const VkVideoDecodeAV1DpbSlotInfoKHR* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStdReferenceInfo) delete pStdReferenceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeAV1ReferenceInfo(*in_struct->pStdReferenceInfo);
    }
}

void VideoDecodeAV1DpbSlotInfoKHR::initialize(const VideoDecodeAV1DpbSlotInfoKHR* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pStdReferenceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pStdReferenceInfo) {
        pStdReferenceInfo = new StdVideoDecodeAV1ReferenceInfo(*copy_src->pStdReferenceInfo);
    }
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::PhysicalDeviceVideoMaintenance1FeaturesKHR(
    const VkPhysicalDeviceVideoMaintenance1FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), videoMaintenance1(in_struct->videoMaintenance1) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::PhysicalDeviceVideoMaintenance1FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR), pNext(nullptr), videoMaintenance1() {}

PhysicalDeviceVideoMaintenance1FeaturesKHR::PhysicalDeviceVideoMaintenance1FeaturesKHR(
    const PhysicalDeviceVideoMaintenance1FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    videoMaintenance1 = copy_src.videoMaintenance1;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVideoMaintenance1FeaturesKHR& PhysicalDeviceVideoMaintenance1FeaturesKHR::operator=(
    const PhysicalDeviceVideoMaintenance1FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    videoMaintenance1 = copy_src.videoMaintenance1;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::~PhysicalDeviceVideoMaintenance1FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceVideoMaintenance1FeaturesKHR::initialize(const VkPhysicalDeviceVideoMaintenance1FeaturesKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    videoMaintenance1 = in_struct->videoMaintenance1;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVideoMaintenance1FeaturesKHR::initialize(const PhysicalDeviceVideoMaintenance1FeaturesKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    videoMaintenance1 = copy_src->videoMaintenance1;
    pNext = SafePnextCopy(copy_src->pNext);
}

VideoInlineQueryInfoKHR::VideoInlineQueryInfoKHR(const VkVideoInlineQueryInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      queryPool(in_struct->queryPool),
      firstQuery(in_struct->firstQuery),
      queryCount(in_struct->queryCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

VideoInlineQueryInfoKHR::VideoInlineQueryInfoKHR()
    : sType(VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR), pNext(nullptr), queryPool(), firstQuery(), queryCount() {}

VideoInlineQueryInfoKHR::VideoInlineQueryInfoKHR(const VideoInlineQueryInfoKHR& copy_src) {
    sType = copy_src.sType;
    queryPool = copy_src.queryPool;
    firstQuery = copy_src.firstQuery;
    queryCount = copy_src.queryCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

VideoInlineQueryInfoKHR& VideoInlineQueryInfoKHR::operator=(const VideoInlineQueryInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queryPool = copy_src.queryPool;
    firstQuery = copy_src.firstQuery;
    queryCount = copy_src.queryCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

VideoInlineQueryInfoKHR::~VideoInlineQueryInfoKHR() { FreePnextChain(pNext); }

void VideoInlineQueryInfoKHR::initialize(const VkVideoInlineQueryInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queryPool = in_struct->queryPool;
    firstQuery = in_struct->firstQuery;
    queryCount = in_struct->queryCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void VideoInlineQueryInfoKHR::initialize(const VideoInlineQueryInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queryPool = copy_src->queryPool;
    firstQuery = copy_src->firstQuery;
    queryCount = copy_src->queryCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::PhysicalDeviceVertexAttributeDivisorPropertiesKHR(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      maxVertexAttribDivisor(in_struct->maxVertexAttribDivisor),
      supportsNonZeroFirstInstance(in_struct->supportsNonZeroFirstInstance) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::PhysicalDeviceVertexAttributeDivisorPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR),
      pNext(nullptr),
      maxVertexAttribDivisor(),
      supportsNonZeroFirstInstance() {}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::PhysicalDeviceVertexAttributeDivisorPropertiesKHR(
    const PhysicalDeviceVertexAttributeDivisorPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    supportsNonZeroFirstInstance = copy_src.supportsNonZeroFirstInstance;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR& PhysicalDeviceVertexAttributeDivisorPropertiesKHR::operator=(
    const PhysicalDeviceVertexAttributeDivisorPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxVertexAttribDivisor = copy_src.maxVertexAttribDivisor;
    supportsNonZeroFirstInstance = copy_src.supportsNonZeroFirstInstance;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::~PhysicalDeviceVertexAttributeDivisorPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceVertexAttributeDivisorPropertiesKHR::initialize(
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxVertexAttribDivisor = in_struct->maxVertexAttribDivisor;
    supportsNonZeroFirstInstance = in_struct->supportsNonZeroFirstInstance;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVertexAttributeDivisorPropertiesKHR::initialize(
    const PhysicalDeviceVertexAttributeDivisorPropertiesKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxVertexAttribDivisor = copy_src->maxVertexAttribDivisor;
    supportsNonZeroFirstInstance = copy_src->supportsNonZeroFirstInstance;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineVertexInputDivisorStateCreateInfoKHR::PipelineVertexInputDivisorStateCreateInfoKHR(
    const VkPipelineVertexInputDivisorStateCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), vertexBindingDivisorCount(in_struct->vertexBindingDivisorCount), pVertexBindingDivisors(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVertexBindingDivisors) {
        pVertexBindingDivisors = new VkVertexInputBindingDivisorDescriptionKHR[in_struct->vertexBindingDivisorCount];
        memcpy((void*)pVertexBindingDivisors, (void*)in_struct->pVertexBindingDivisors,
               sizeof(VkVertexInputBindingDivisorDescriptionKHR) * in_struct->vertexBindingDivisorCount);
    }
}

PipelineVertexInputDivisorStateCreateInfoKHR::PipelineVertexInputDivisorStateCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR),
      pNext(nullptr),
      vertexBindingDivisorCount(),
      pVertexBindingDivisors(nullptr) {}

PipelineVertexInputDivisorStateCreateInfoKHR::PipelineVertexInputDivisorStateCreateInfoKHR(
    const PipelineVertexInputDivisorStateCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    vertexBindingDivisorCount = copy_src.vertexBindingDivisorCount;
    pVertexBindingDivisors = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDivisors) {
        pVertexBindingDivisors = new VkVertexInputBindingDivisorDescriptionKHR[copy_src.vertexBindingDivisorCount];
        memcpy((void*)pVertexBindingDivisors, (void*)copy_src.pVertexBindingDivisors,
               sizeof(VkVertexInputBindingDivisorDescriptionKHR) * copy_src.vertexBindingDivisorCount);
    }
}

PipelineVertexInputDivisorStateCreateInfoKHR& PipelineVertexInputDivisorStateCreateInfoKHR::operator=(
    const PipelineVertexInputDivisorStateCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pVertexBindingDivisors) delete[] pVertexBindingDivisors;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexBindingDivisorCount = copy_src.vertexBindingDivisorCount;
    pVertexBindingDivisors = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDivisors) {
        pVertexBindingDivisors = new VkVertexInputBindingDivisorDescriptionKHR[copy_src.vertexBindingDivisorCount];
        memcpy((void*)pVertexBindingDivisors, (void*)copy_src.pVertexBindingDivisors,
               sizeof(VkVertexInputBindingDivisorDescriptionKHR) * copy_src.vertexBindingDivisorCount);
    }

    return *this;
}

PipelineVertexInputDivisorStateCreateInfoKHR::~PipelineVertexInputDivisorStateCreateInfoKHR() {
    if (pVertexBindingDivisors) delete[] pVertexBindingDivisors;
    FreePnextChain(pNext);
}

void PipelineVertexInputDivisorStateCreateInfoKHR::initialize(const VkPipelineVertexInputDivisorStateCreateInfoKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVertexBindingDivisors) delete[] pVertexBindingDivisors;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexBindingDivisorCount = in_struct->vertexBindingDivisorCount;
    pVertexBindingDivisors = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pVertexBindingDivisors) {
        pVertexBindingDivisors = new VkVertexInputBindingDivisorDescriptionKHR[in_struct->vertexBindingDivisorCount];
        memcpy((void*)pVertexBindingDivisors, (void*)in_struct->pVertexBindingDivisors,
               sizeof(VkVertexInputBindingDivisorDescriptionKHR) * in_struct->vertexBindingDivisorCount);
    }
}

void PipelineVertexInputDivisorStateCreateInfoKHR::initialize(const PipelineVertexInputDivisorStateCreateInfoKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexBindingDivisorCount = copy_src->vertexBindingDivisorCount;
    pVertexBindingDivisors = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVertexBindingDivisors) {
        pVertexBindingDivisors = new VkVertexInputBindingDivisorDescriptionKHR[copy_src->vertexBindingDivisorCount];
        memcpy((void*)pVertexBindingDivisors, (void*)copy_src->pVertexBindingDivisors,
               sizeof(VkVertexInputBindingDivisorDescriptionKHR) * copy_src->vertexBindingDivisorCount);
    }
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::PhysicalDeviceVertexAttributeDivisorFeaturesKHR(
    const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      vertexAttributeInstanceRateDivisor(in_struct->vertexAttributeInstanceRateDivisor),
      vertexAttributeInstanceRateZeroDivisor(in_struct->vertexAttributeInstanceRateZeroDivisor) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::PhysicalDeviceVertexAttributeDivisorFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR),
      pNext(nullptr),
      vertexAttributeInstanceRateDivisor(),
      vertexAttributeInstanceRateZeroDivisor() {}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::PhysicalDeviceVertexAttributeDivisorFeaturesKHR(
    const PhysicalDeviceVertexAttributeDivisorFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    vertexAttributeInstanceRateDivisor = copy_src.vertexAttributeInstanceRateDivisor;
    vertexAttributeInstanceRateZeroDivisor = copy_src.vertexAttributeInstanceRateZeroDivisor;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR& PhysicalDeviceVertexAttributeDivisorFeaturesKHR::operator=(
    const PhysicalDeviceVertexAttributeDivisorFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexAttributeInstanceRateDivisor = copy_src.vertexAttributeInstanceRateDivisor;
    vertexAttributeInstanceRateZeroDivisor = copy_src.vertexAttributeInstanceRateZeroDivisor;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::~PhysicalDeviceVertexAttributeDivisorFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceVertexAttributeDivisorFeaturesKHR::initialize(const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexAttributeInstanceRateDivisor = in_struct->vertexAttributeInstanceRateDivisor;
    vertexAttributeInstanceRateZeroDivisor = in_struct->vertexAttributeInstanceRateZeroDivisor;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceVertexAttributeDivisorFeaturesKHR::initialize(const PhysicalDeviceVertexAttributeDivisorFeaturesKHR* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexAttributeInstanceRateDivisor = copy_src->vertexAttributeInstanceRateDivisor;
    vertexAttributeInstanceRateZeroDivisor = copy_src->vertexAttributeInstanceRateZeroDivisor;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::PhysicalDeviceShaderFloatControls2FeaturesKHR(
    const VkPhysicalDeviceShaderFloatControls2FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderFloatControls2(in_struct->shaderFloatControls2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::PhysicalDeviceShaderFloatControls2FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR), pNext(nullptr), shaderFloatControls2() {}

PhysicalDeviceShaderFloatControls2FeaturesKHR::PhysicalDeviceShaderFloatControls2FeaturesKHR(
    const PhysicalDeviceShaderFloatControls2FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderFloatControls2 = copy_src.shaderFloatControls2;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR& PhysicalDeviceShaderFloatControls2FeaturesKHR::operator=(
    const PhysicalDeviceShaderFloatControls2FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderFloatControls2 = copy_src.shaderFloatControls2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::~PhysicalDeviceShaderFloatControls2FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceShaderFloatControls2FeaturesKHR::initialize(const VkPhysicalDeviceShaderFloatControls2FeaturesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderFloatControls2 = in_struct->shaderFloatControls2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderFloatControls2FeaturesKHR::initialize(const PhysicalDeviceShaderFloatControls2FeaturesKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderFloatControls2 = copy_src->shaderFloatControls2;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::PhysicalDeviceIndexTypeUint8FeaturesKHR(
    const VkPhysicalDeviceIndexTypeUint8FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), indexTypeUint8(in_struct->indexTypeUint8) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::PhysicalDeviceIndexTypeUint8FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR), pNext(nullptr), indexTypeUint8() {}

PhysicalDeviceIndexTypeUint8FeaturesKHR::PhysicalDeviceIndexTypeUint8FeaturesKHR(
    const PhysicalDeviceIndexTypeUint8FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    indexTypeUint8 = copy_src.indexTypeUint8;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR& PhysicalDeviceIndexTypeUint8FeaturesKHR::operator=(
    const PhysicalDeviceIndexTypeUint8FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    indexTypeUint8 = copy_src.indexTypeUint8;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::~PhysicalDeviceIndexTypeUint8FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceIndexTypeUint8FeaturesKHR::initialize(const VkPhysicalDeviceIndexTypeUint8FeaturesKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    indexTypeUint8 = in_struct->indexTypeUint8;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceIndexTypeUint8FeaturesKHR::initialize(const PhysicalDeviceIndexTypeUint8FeaturesKHR* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    indexTypeUint8 = copy_src->indexTypeUint8;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceLineRasterizationFeaturesKHR::PhysicalDeviceLineRasterizationFeaturesKHR(
    const VkPhysicalDeviceLineRasterizationFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      rectangularLines(in_struct->rectangularLines),
      bresenhamLines(in_struct->bresenhamLines),
      smoothLines(in_struct->smoothLines),
      stippledRectangularLines(in_struct->stippledRectangularLines),
      stippledBresenhamLines(in_struct->stippledBresenhamLines),
      stippledSmoothLines(in_struct->stippledSmoothLines) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceLineRasterizationFeaturesKHR::PhysicalDeviceLineRasterizationFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR),
      pNext(nullptr),
      rectangularLines(),
      bresenhamLines(),
      smoothLines(),
      stippledRectangularLines(),
      stippledBresenhamLines(),
      stippledSmoothLines() {}

PhysicalDeviceLineRasterizationFeaturesKHR::PhysicalDeviceLineRasterizationFeaturesKHR(
    const PhysicalDeviceLineRasterizationFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    rectangularLines = copy_src.rectangularLines;
    bresenhamLines = copy_src.bresenhamLines;
    smoothLines = copy_src.smoothLines;
    stippledRectangularLines = copy_src.stippledRectangularLines;
    stippledBresenhamLines = copy_src.stippledBresenhamLines;
    stippledSmoothLines = copy_src.stippledSmoothLines;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceLineRasterizationFeaturesKHR& PhysicalDeviceLineRasterizationFeaturesKHR::operator=(
    const PhysicalDeviceLineRasterizationFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rectangularLines = copy_src.rectangularLines;
    bresenhamLines = copy_src.bresenhamLines;
    smoothLines = copy_src.smoothLines;
    stippledRectangularLines = copy_src.stippledRectangularLines;
    stippledBresenhamLines = copy_src.stippledBresenhamLines;
    stippledSmoothLines = copy_src.stippledSmoothLines;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceLineRasterizationFeaturesKHR::~PhysicalDeviceLineRasterizationFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceLineRasterizationFeaturesKHR::initialize(const VkPhysicalDeviceLineRasterizationFeaturesKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rectangularLines = in_struct->rectangularLines;
    bresenhamLines = in_struct->bresenhamLines;
    smoothLines = in_struct->smoothLines;
    stippledRectangularLines = in_struct->stippledRectangularLines;
    stippledBresenhamLines = in_struct->stippledBresenhamLines;
    stippledSmoothLines = in_struct->stippledSmoothLines;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceLineRasterizationFeaturesKHR::initialize(const PhysicalDeviceLineRasterizationFeaturesKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rectangularLines = copy_src->rectangularLines;
    bresenhamLines = copy_src->bresenhamLines;
    smoothLines = copy_src->smoothLines;
    stippledRectangularLines = copy_src->stippledRectangularLines;
    stippledBresenhamLines = copy_src->stippledBresenhamLines;
    stippledSmoothLines = copy_src->stippledSmoothLines;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceLineRasterizationPropertiesKHR::PhysicalDeviceLineRasterizationPropertiesKHR(
    const VkPhysicalDeviceLineRasterizationPropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), lineSubPixelPrecisionBits(in_struct->lineSubPixelPrecisionBits) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceLineRasterizationPropertiesKHR::PhysicalDeviceLineRasterizationPropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR), pNext(nullptr), lineSubPixelPrecisionBits() {}

PhysicalDeviceLineRasterizationPropertiesKHR::PhysicalDeviceLineRasterizationPropertiesKHR(
    const PhysicalDeviceLineRasterizationPropertiesKHR& copy_src) {
    sType = copy_src.sType;
    lineSubPixelPrecisionBits = copy_src.lineSubPixelPrecisionBits;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceLineRasterizationPropertiesKHR& PhysicalDeviceLineRasterizationPropertiesKHR::operator=(
    const PhysicalDeviceLineRasterizationPropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    lineSubPixelPrecisionBits = copy_src.lineSubPixelPrecisionBits;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceLineRasterizationPropertiesKHR::~PhysicalDeviceLineRasterizationPropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceLineRasterizationPropertiesKHR::initialize(const VkPhysicalDeviceLineRasterizationPropertiesKHR* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    lineSubPixelPrecisionBits = in_struct->lineSubPixelPrecisionBits;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceLineRasterizationPropertiesKHR::initialize(const PhysicalDeviceLineRasterizationPropertiesKHR* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    lineSubPixelPrecisionBits = copy_src->lineSubPixelPrecisionBits;
    pNext = SafePnextCopy(copy_src->pNext);
}

PipelineRasterizationLineStateCreateInfoKHR::PipelineRasterizationLineStateCreateInfoKHR(
    const VkPipelineRasterizationLineStateCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      lineRasterizationMode(in_struct->lineRasterizationMode),
      stippledLineEnable(in_struct->stippledLineEnable),
      lineStippleFactor(in_struct->lineStippleFactor),
      lineStipplePattern(in_struct->lineStipplePattern) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PipelineRasterizationLineStateCreateInfoKHR::PipelineRasterizationLineStateCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR),
      pNext(nullptr),
      lineRasterizationMode(),
      stippledLineEnable(),
      lineStippleFactor(),
      lineStipplePattern() {}

PipelineRasterizationLineStateCreateInfoKHR::PipelineRasterizationLineStateCreateInfoKHR(
    const PipelineRasterizationLineStateCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    lineRasterizationMode = copy_src.lineRasterizationMode;
    stippledLineEnable = copy_src.stippledLineEnable;
    lineStippleFactor = copy_src.lineStippleFactor;
    lineStipplePattern = copy_src.lineStipplePattern;
    pNext = SafePnextCopy(copy_src.pNext);
}

PipelineRasterizationLineStateCreateInfoKHR& PipelineRasterizationLineStateCreateInfoKHR::operator=(
    const PipelineRasterizationLineStateCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    lineRasterizationMode = copy_src.lineRasterizationMode;
    stippledLineEnable = copy_src.stippledLineEnable;
    lineStippleFactor = copy_src.lineStippleFactor;
    lineStipplePattern = copy_src.lineStipplePattern;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PipelineRasterizationLineStateCreateInfoKHR::~PipelineRasterizationLineStateCreateInfoKHR() { FreePnextChain(pNext); }

void PipelineRasterizationLineStateCreateInfoKHR::initialize(const VkPipelineRasterizationLineStateCreateInfoKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    lineRasterizationMode = in_struct->lineRasterizationMode;
    stippledLineEnable = in_struct->stippledLineEnable;
    lineStippleFactor = in_struct->lineStippleFactor;
    lineStipplePattern = in_struct->lineStipplePattern;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PipelineRasterizationLineStateCreateInfoKHR::initialize(const PipelineRasterizationLineStateCreateInfoKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    lineRasterizationMode = copy_src->lineRasterizationMode;
    stippledLineEnable = copy_src->stippledLineEnable;
    lineStippleFactor = copy_src->lineStippleFactor;
    lineStipplePattern = copy_src->lineStipplePattern;
    pNext = SafePnextCopy(copy_src->pNext);
}

CalibratedTimestampInfoKHR::CalibratedTimestampInfoKHR(const VkCalibratedTimestampInfoKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), timeDomain(in_struct->timeDomain) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CalibratedTimestampInfoKHR::CalibratedTimestampInfoKHR()
    : sType(VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_KHR), pNext(nullptr), timeDomain() {}

CalibratedTimestampInfoKHR::CalibratedTimestampInfoKHR(const CalibratedTimestampInfoKHR& copy_src) {
    sType = copy_src.sType;
    timeDomain = copy_src.timeDomain;
    pNext = SafePnextCopy(copy_src.pNext);
}

CalibratedTimestampInfoKHR& CalibratedTimestampInfoKHR::operator=(const CalibratedTimestampInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    timeDomain = copy_src.timeDomain;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CalibratedTimestampInfoKHR::~CalibratedTimestampInfoKHR() { FreePnextChain(pNext); }

void CalibratedTimestampInfoKHR::initialize(const VkCalibratedTimestampInfoKHR* in_struct,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    timeDomain = in_struct->timeDomain;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CalibratedTimestampInfoKHR::initialize(const CalibratedTimestampInfoKHR* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    timeDomain = copy_src->timeDomain;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::PhysicalDeviceShaderExpectAssumeFeaturesKHR(
    const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderExpectAssume(in_struct->shaderExpectAssume) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::PhysicalDeviceShaderExpectAssumeFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR), pNext(nullptr), shaderExpectAssume() {}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::PhysicalDeviceShaderExpectAssumeFeaturesKHR(
    const PhysicalDeviceShaderExpectAssumeFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    shaderExpectAssume = copy_src.shaderExpectAssume;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR& PhysicalDeviceShaderExpectAssumeFeaturesKHR::operator=(
    const PhysicalDeviceShaderExpectAssumeFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderExpectAssume = copy_src.shaderExpectAssume;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::~PhysicalDeviceShaderExpectAssumeFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceShaderExpectAssumeFeaturesKHR::initialize(const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderExpectAssume = in_struct->shaderExpectAssume;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceShaderExpectAssumeFeaturesKHR::initialize(const PhysicalDeviceShaderExpectAssumeFeaturesKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderExpectAssume = copy_src->shaderExpectAssume;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance6FeaturesKHR::PhysicalDeviceMaintenance6FeaturesKHR(
    const VkPhysicalDeviceMaintenance6FeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maintenance6(in_struct->maintenance6) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance6FeaturesKHR::PhysicalDeviceMaintenance6FeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR), pNext(nullptr), maintenance6() {}

PhysicalDeviceMaintenance6FeaturesKHR::PhysicalDeviceMaintenance6FeaturesKHR(
    const PhysicalDeviceMaintenance6FeaturesKHR& copy_src) {
    sType = copy_src.sType;
    maintenance6 = copy_src.maintenance6;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance6FeaturesKHR& PhysicalDeviceMaintenance6FeaturesKHR::operator=(
    const PhysicalDeviceMaintenance6FeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maintenance6 = copy_src.maintenance6;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance6FeaturesKHR::~PhysicalDeviceMaintenance6FeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance6FeaturesKHR::initialize(const VkPhysicalDeviceMaintenance6FeaturesKHR* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maintenance6 = in_struct->maintenance6;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance6FeaturesKHR::initialize(const PhysicalDeviceMaintenance6FeaturesKHR* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maintenance6 = copy_src->maintenance6;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceMaintenance6PropertiesKHR::PhysicalDeviceMaintenance6PropertiesKHR(
    const VkPhysicalDeviceMaintenance6PropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      blockTexelViewCompatibleMultipleLayers(in_struct->blockTexelViewCompatibleMultipleLayers),
      maxCombinedImageSamplerDescriptorCount(in_struct->maxCombinedImageSamplerDescriptorCount),
      fragmentShadingRateClampCombinerInputs(in_struct->fragmentShadingRateClampCombinerInputs) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceMaintenance6PropertiesKHR::PhysicalDeviceMaintenance6PropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR),
      pNext(nullptr),
      blockTexelViewCompatibleMultipleLayers(),
      maxCombinedImageSamplerDescriptorCount(),
      fragmentShadingRateClampCombinerInputs() {}

PhysicalDeviceMaintenance6PropertiesKHR::PhysicalDeviceMaintenance6PropertiesKHR(
    const PhysicalDeviceMaintenance6PropertiesKHR& copy_src) {
    sType = copy_src.sType;
    blockTexelViewCompatibleMultipleLayers = copy_src.blockTexelViewCompatibleMultipleLayers;
    maxCombinedImageSamplerDescriptorCount = copy_src.maxCombinedImageSamplerDescriptorCount;
    fragmentShadingRateClampCombinerInputs = copy_src.fragmentShadingRateClampCombinerInputs;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceMaintenance6PropertiesKHR& PhysicalDeviceMaintenance6PropertiesKHR::operator=(
    const PhysicalDeviceMaintenance6PropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    blockTexelViewCompatibleMultipleLayers = copy_src.blockTexelViewCompatibleMultipleLayers;
    maxCombinedImageSamplerDescriptorCount = copy_src.maxCombinedImageSamplerDescriptorCount;
    fragmentShadingRateClampCombinerInputs = copy_src.fragmentShadingRateClampCombinerInputs;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceMaintenance6PropertiesKHR::~PhysicalDeviceMaintenance6PropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceMaintenance6PropertiesKHR::initialize(const VkPhysicalDeviceMaintenance6PropertiesKHR* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    blockTexelViewCompatibleMultipleLayers = in_struct->blockTexelViewCompatibleMultipleLayers;
    maxCombinedImageSamplerDescriptorCount = in_struct->maxCombinedImageSamplerDescriptorCount;
    fragmentShadingRateClampCombinerInputs = in_struct->fragmentShadingRateClampCombinerInputs;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceMaintenance6PropertiesKHR::initialize(const PhysicalDeviceMaintenance6PropertiesKHR* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    blockTexelViewCompatibleMultipleLayers = copy_src->blockTexelViewCompatibleMultipleLayers;
    maxCombinedImageSamplerDescriptorCount = copy_src->maxCombinedImageSamplerDescriptorCount;
    fragmentShadingRateClampCombinerInputs = copy_src->fragmentShadingRateClampCombinerInputs;
    pNext = SafePnextCopy(copy_src->pNext);
}

BindMemoryStatusKHR::BindMemoryStatusKHR(const VkBindMemoryStatusKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                         bool copy_pnext)
    : sType(in_struct->sType), pResult(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pResult) {
        pResult = new VkResult(*in_struct->pResult);
    }
}

BindMemoryStatusKHR::BindMemoryStatusKHR() : sType(VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS_KHR), pNext(nullptr), pResult(nullptr) {}

BindMemoryStatusKHR::BindMemoryStatusKHR(const BindMemoryStatusKHR& copy_src) {
    sType = copy_src.sType;
    pResult = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pResult) {
        pResult = new VkResult(*copy_src.pResult);
    }
}

BindMemoryStatusKHR& BindMemoryStatusKHR::operator=(const BindMemoryStatusKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pResult) delete pResult;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pResult = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pResult) {
        pResult = new VkResult(*copy_src.pResult);
    }

    return *this;
}

BindMemoryStatusKHR::~BindMemoryStatusKHR() {
    if (pResult) delete pResult;
    FreePnextChain(pNext);
}

void BindMemoryStatusKHR::initialize(const VkBindMemoryStatusKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pResult) delete pResult;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pResult = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pResult) {
        pResult = new VkResult(*in_struct->pResult);
    }
}

void BindMemoryStatusKHR::initialize(const BindMemoryStatusKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pResult = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pResult) {
        pResult = new VkResult(*copy_src->pResult);
    }
}

BindDescriptorSetsInfoKHR::BindDescriptorSetsInfoKHR(const VkBindDescriptorSetsInfoKHR* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stageFlags(in_struct->stageFlags),
      layout(in_struct->layout),
      firstSet(in_struct->firstSet),
      descriptorSetCount(in_struct->descriptorSetCount),
      pDescriptorSets(nullptr),
      dynamicOffsetCount(in_struct->dynamicOffsetCount),
      pDynamicOffsets(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (descriptorSetCount && in_struct->pDescriptorSets) {
        pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pDescriptorSets[i] = in_struct->pDescriptorSets[i];
        }
    }

    if (in_struct->pDynamicOffsets) {
        pDynamicOffsets = new uint32_t[in_struct->dynamicOffsetCount];
        memcpy((void*)pDynamicOffsets, (void*)in_struct->pDynamicOffsets, sizeof(uint32_t) * in_struct->dynamicOffsetCount);
    }
}

BindDescriptorSetsInfoKHR::BindDescriptorSetsInfoKHR()
    : sType(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO_KHR),
      pNext(nullptr),
      stageFlags(),
      layout(),
      firstSet(),
      descriptorSetCount(),
      pDescriptorSets(nullptr),
      dynamicOffsetCount(),
      pDynamicOffsets(nullptr) {}

BindDescriptorSetsInfoKHR::BindDescriptorSetsInfoKHR(const BindDescriptorSetsInfoKHR& copy_src) {
    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    firstSet = copy_src.firstSet;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorSets = nullptr;
    dynamicOffsetCount = copy_src.dynamicOffsetCount;
    pDynamicOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pDescriptorSets) {
        pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pDescriptorSets[i] = copy_src.pDescriptorSets[i];
        }
    }

    if (copy_src.pDynamicOffsets) {
        pDynamicOffsets = new uint32_t[copy_src.dynamicOffsetCount];
        memcpy((void*)pDynamicOffsets, (void*)copy_src.pDynamicOffsets, sizeof(uint32_t) * copy_src.dynamicOffsetCount);
    }
}

BindDescriptorSetsInfoKHR& BindDescriptorSetsInfoKHR::operator=(const BindDescriptorSetsInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorSets) delete[] pDescriptorSets;
    if (pDynamicOffsets) delete[] pDynamicOffsets;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    firstSet = copy_src.firstSet;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorSets = nullptr;
    dynamicOffsetCount = copy_src.dynamicOffsetCount;
    pDynamicOffsets = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pDescriptorSets) {
        pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pDescriptorSets[i] = copy_src.pDescriptorSets[i];
        }
    }

    if (copy_src.pDynamicOffsets) {
        pDynamicOffsets = new uint32_t[copy_src.dynamicOffsetCount];
        memcpy((void*)pDynamicOffsets, (void*)copy_src.pDynamicOffsets, sizeof(uint32_t) * copy_src.dynamicOffsetCount);
    }

    return *this;
}

BindDescriptorSetsInfoKHR::~BindDescriptorSetsInfoKHR() {
    if (pDescriptorSets) delete[] pDescriptorSets;
    if (pDynamicOffsets) delete[] pDynamicOffsets;
    FreePnextChain(pNext);
}

void BindDescriptorSetsInfoKHR::initialize(const VkBindDescriptorSetsInfoKHR* in_struct,
                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorSets) delete[] pDescriptorSets;
    if (pDynamicOffsets) delete[] pDynamicOffsets;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageFlags = in_struct->stageFlags;
    layout = in_struct->layout;
    firstSet = in_struct->firstSet;
    descriptorSetCount = in_struct->descriptorSetCount;
    pDescriptorSets = nullptr;
    dynamicOffsetCount = in_struct->dynamicOffsetCount;
    pDynamicOffsets = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (descriptorSetCount && in_struct->pDescriptorSets) {
        pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pDescriptorSets[i] = in_struct->pDescriptorSets[i];
        }
    }

    if (in_struct->pDynamicOffsets) {
        pDynamicOffsets = new uint32_t[in_struct->dynamicOffsetCount];
        memcpy((void*)pDynamicOffsets, (void*)in_struct->pDynamicOffsets, sizeof(uint32_t) * in_struct->dynamicOffsetCount);
    }
}

void BindDescriptorSetsInfoKHR::initialize(const BindDescriptorSetsInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageFlags = copy_src->stageFlags;
    layout = copy_src->layout;
    firstSet = copy_src->firstSet;
    descriptorSetCount = copy_src->descriptorSetCount;
    pDescriptorSets = nullptr;
    dynamicOffsetCount = copy_src->dynamicOffsetCount;
    pDynamicOffsets = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (descriptorSetCount && copy_src->pDescriptorSets) {
        pDescriptorSets = new VkDescriptorSet[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pDescriptorSets[i] = copy_src->pDescriptorSets[i];
        }
    }

    if (copy_src->pDynamicOffsets) {
        pDynamicOffsets = new uint32_t[copy_src->dynamicOffsetCount];
        memcpy((void*)pDynamicOffsets, (void*)copy_src->pDynamicOffsets, sizeof(uint32_t) * copy_src->dynamicOffsetCount);
    }
}

PushConstantsInfoKHR::PushConstantsInfoKHR(const VkPushConstantsInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      layout(in_struct->layout),
      stageFlags(in_struct->stageFlags),
      offset(in_struct->offset),
      size(in_struct->size),
      pValues(in_struct->pValues) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PushConstantsInfoKHR::PushConstantsInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO_KHR),
      pNext(nullptr),
      layout(),
      stageFlags(),
      offset(),
      size(),
      pValues(nullptr) {}

PushConstantsInfoKHR::PushConstantsInfoKHR(const PushConstantsInfoKHR& copy_src) {
    sType = copy_src.sType;
    layout = copy_src.layout;
    stageFlags = copy_src.stageFlags;
    offset = copy_src.offset;
    size = copy_src.size;
    pValues = copy_src.pValues;
    pNext = SafePnextCopy(copy_src.pNext);
}

PushConstantsInfoKHR& PushConstantsInfoKHR::operator=(const PushConstantsInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    layout = copy_src.layout;
    stageFlags = copy_src.stageFlags;
    offset = copy_src.offset;
    size = copy_src.size;
    pValues = copy_src.pValues;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PushConstantsInfoKHR::~PushConstantsInfoKHR() { FreePnextChain(pNext); }

void PushConstantsInfoKHR::initialize(const VkPushConstantsInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    layout = in_struct->layout;
    stageFlags = in_struct->stageFlags;
    offset = in_struct->offset;
    size = in_struct->size;
    pValues = in_struct->pValues;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PushConstantsInfoKHR::initialize(const PushConstantsInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    layout = copy_src->layout;
    stageFlags = copy_src->stageFlags;
    offset = copy_src->offset;
    size = copy_src->size;
    pValues = copy_src->pValues;
    pNext = SafePnextCopy(copy_src->pNext);
}

PushDescriptorSetInfoKHR::PushDescriptorSetInfoKHR(const VkPushDescriptorSetInfoKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stageFlags(in_struct->stageFlags),
      layout(in_struct->layout),
      set(in_struct->set),
      descriptorWriteCount(in_struct->descriptorWriteCount),
      pDescriptorWrites(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (descriptorWriteCount && in_struct->pDescriptorWrites) {
        pDescriptorWrites = new WriteDescriptorSet[descriptorWriteCount];
        for (uint32_t i = 0; i < descriptorWriteCount; ++i) {
            pDescriptorWrites[i].initialize(&in_struct->pDescriptorWrites[i]);
        }
    }
}

PushDescriptorSetInfoKHR::PushDescriptorSetInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO_KHR),
      pNext(nullptr),
      stageFlags(),
      layout(),
      set(),
      descriptorWriteCount(),
      pDescriptorWrites(nullptr) {}

PushDescriptorSetInfoKHR::PushDescriptorSetInfoKHR(const PushDescriptorSetInfoKHR& copy_src) {
    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    descriptorWriteCount = copy_src.descriptorWriteCount;
    pDescriptorWrites = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorWriteCount && copy_src.pDescriptorWrites) {
        pDescriptorWrites = new WriteDescriptorSet[descriptorWriteCount];
        for (uint32_t i = 0; i < descriptorWriteCount; ++i) {
            pDescriptorWrites[i].initialize(&copy_src.pDescriptorWrites[i]);
        }
    }
}

PushDescriptorSetInfoKHR& PushDescriptorSetInfoKHR::operator=(const PushDescriptorSetInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorWrites) delete[] pDescriptorWrites;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    stageFlags = copy_src.stageFlags;
    layout = copy_src.layout;
    set = copy_src.set;
    descriptorWriteCount = copy_src.descriptorWriteCount;
    pDescriptorWrites = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorWriteCount && copy_src.pDescriptorWrites) {
        pDescriptorWrites = new WriteDescriptorSet[descriptorWriteCount];
        for (uint32_t i = 0; i < descriptorWriteCount; ++i) {
            pDescriptorWrites[i].initialize(&copy_src.pDescriptorWrites[i]);
        }
    }

    return *this;
}

PushDescriptorSetInfoKHR::~PushDescriptorSetInfoKHR() {
    if (pDescriptorWrites) delete[] pDescriptorWrites;
    FreePnextChain(pNext);
}

void PushDescriptorSetInfoKHR::initialize(const VkPushDescriptorSetInfoKHR* in_struct,
                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorWrites) delete[] pDescriptorWrites;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stageFlags = in_struct->stageFlags;
    layout = in_struct->layout;
    set = in_struct->set;
    descriptorWriteCount = in_struct->descriptorWriteCount;
    pDescriptorWrites = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (descriptorWriteCount && in_struct->pDescriptorWrites) {
        pDescriptorWrites = new WriteDescriptorSet[descriptorWriteCount];
        for (uint32_t i = 0; i < descriptorWriteCount; ++i) {
            pDescriptorWrites[i].initialize(&in_struct->pDescriptorWrites[i]);
        }
    }
}

void PushDescriptorSetInfoKHR::initialize(const PushDescriptorSetInfoKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stageFlags = copy_src->stageFlags;
    layout = copy_src->layout;
    set = copy_src->set;
    descriptorWriteCount = copy_src->descriptorWriteCount;
    pDescriptorWrites = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (descriptorWriteCount && copy_src->pDescriptorWrites) {
        pDescriptorWrites = new WriteDescriptorSet[descriptorWriteCount];
        for (uint32_t i = 0; i < descriptorWriteCount; ++i) {
            pDescriptorWrites[i].initialize(&copy_src->pDescriptorWrites[i]);
        }
    }
}

PushDescriptorSetWithTemplateInfoKHR::PushDescriptorSetWithTemplateInfoKHR(const VkPushDescriptorSetWithTemplateInfoKHR* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      descriptorUpdateTemplate(in_struct->descriptorUpdateTemplate),
      layout(in_struct->layout),
      set(in_struct->set),
      pData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PushDescriptorSetWithTemplateInfoKHR::PushDescriptorSetWithTemplateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR),
      pNext(nullptr),
      descriptorUpdateTemplate(),
      layout(),
      set(),
      pData(nullptr) {}

PushDescriptorSetWithTemplateInfoKHR::PushDescriptorSetWithTemplateInfoKHR(const PushDescriptorSetWithTemplateInfoKHR& copy_src) {
    sType = copy_src.sType;
    descriptorUpdateTemplate = copy_src.descriptorUpdateTemplate;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);
}

PushDescriptorSetWithTemplateInfoKHR& PushDescriptorSetWithTemplateInfoKHR::operator=(
    const PushDescriptorSetWithTemplateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorUpdateTemplate = copy_src.descriptorUpdateTemplate;
    layout = copy_src.layout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PushDescriptorSetWithTemplateInfoKHR::~PushDescriptorSetWithTemplateInfoKHR() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void PushDescriptorSetWithTemplateInfoKHR::initialize(const VkPushDescriptorSetWithTemplateInfoKHR* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorUpdateTemplate = in_struct->descriptorUpdateTemplate;
    layout = in_struct->layout;
    set = in_struct->set;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PushDescriptorSetWithTemplateInfoKHR::initialize(const PushDescriptorSetWithTemplateInfoKHR* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorUpdateTemplate = copy_src->descriptorUpdateTemplate;
    layout = copy_src->layout;
    set = copy_src->set;
    pNext = SafePnextCopy(copy_src->pNext);
}

DeviceOrHostAddressConstKHR::DeviceOrHostAddressConstKHR(const VkDeviceOrHostAddressConstKHR* in_struct, PNextCopyState*) {
    initialize(in_struct);
}

DeviceOrHostAddressConstKHR::DeviceOrHostAddressConstKHR() : hostAddress(nullptr) {}

DeviceOrHostAddressConstKHR::DeviceOrHostAddressConstKHR(const DeviceOrHostAddressConstKHR& copy_src) {
    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;
}

DeviceOrHostAddressConstKHR& DeviceOrHostAddressConstKHR::operator=(const DeviceOrHostAddressConstKHR& copy_src) {
    if (&copy_src == this) return *this;

    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;

    return *this;
}

DeviceOrHostAddressConstKHR::~DeviceOrHostAddressConstKHR() {}

void DeviceOrHostAddressConstKHR::initialize(const VkDeviceOrHostAddressConstKHR* in_struct,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = in_struct->deviceAddress;
    hostAddress = in_struct->hostAddress;
}

void DeviceOrHostAddressConstKHR::initialize(const DeviceOrHostAddressConstKHR* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = copy_src->deviceAddress;
    hostAddress = copy_src->hostAddress;
}

DeviceOrHostAddressKHR::DeviceOrHostAddressKHR(const VkDeviceOrHostAddressKHR* in_struct, PNextCopyState*) {
    initialize(in_struct);
}

DeviceOrHostAddressKHR::DeviceOrHostAddressKHR() : hostAddress(nullptr) {}

DeviceOrHostAddressKHR::DeviceOrHostAddressKHR(const DeviceOrHostAddressKHR& copy_src) {
    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;
}

DeviceOrHostAddressKHR& DeviceOrHostAddressKHR::operator=(const DeviceOrHostAddressKHR& copy_src) {
    if (&copy_src == this) return *this;

    deviceAddress = copy_src.deviceAddress;
    hostAddress = copy_src.hostAddress;

    return *this;
}

DeviceOrHostAddressKHR::~DeviceOrHostAddressKHR() {}

void DeviceOrHostAddressKHR::initialize(const VkDeviceOrHostAddressKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = in_struct->deviceAddress;
    hostAddress = in_struct->hostAddress;
}

void DeviceOrHostAddressKHR::initialize(const DeviceOrHostAddressKHR* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    deviceAddress = copy_src->deviceAddress;
    hostAddress = copy_src->hostAddress;
}

AccelerationStructureGeometryTrianglesDataKHR::AccelerationStructureGeometryTrianglesDataKHR(
    const VkAccelerationStructureGeometryTrianglesDataKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      vertexFormat(in_struct->vertexFormat),
      vertexData(&in_struct->vertexData),
      vertexStride(in_struct->vertexStride),
      maxVertex(in_struct->maxVertex),
      indexType(in_struct->indexType),
      indexData(&in_struct->indexData),
      transformData(&in_struct->transformData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureGeometryTrianglesDataKHR::AccelerationStructureGeometryTrianglesDataKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR),
      pNext(nullptr),
      vertexFormat(),
      vertexStride(),
      maxVertex(),
      indexType() {}

AccelerationStructureGeometryTrianglesDataKHR::AccelerationStructureGeometryTrianglesDataKHR(
    const AccelerationStructureGeometryTrianglesDataKHR& copy_src) {
    sType = copy_src.sType;
    vertexFormat = copy_src.vertexFormat;
    vertexData.initialize(&copy_src.vertexData);
    vertexStride = copy_src.vertexStride;
    maxVertex = copy_src.maxVertex;
    indexType = copy_src.indexType;
    indexData.initialize(&copy_src.indexData);
    transformData.initialize(&copy_src.transformData);
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureGeometryTrianglesDataKHR& AccelerationStructureGeometryTrianglesDataKHR::operator=(
    const AccelerationStructureGeometryTrianglesDataKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vertexFormat = copy_src.vertexFormat;
    vertexData.initialize(&copy_src.vertexData);
    vertexStride = copy_src.vertexStride;
    maxVertex = copy_src.maxVertex;
    indexType = copy_src.indexType;
    indexData.initialize(&copy_src.indexData);
    transformData.initialize(&copy_src.transformData);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureGeometryTrianglesDataKHR::~AccelerationStructureGeometryTrianglesDataKHR() { FreePnextChain(pNext); }

void AccelerationStructureGeometryTrianglesDataKHR::initialize(const VkAccelerationStructureGeometryTrianglesDataKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vertexFormat = in_struct->vertexFormat;
    vertexData.initialize(&in_struct->vertexData);
    vertexStride = in_struct->vertexStride;
    maxVertex = in_struct->maxVertex;
    indexType = in_struct->indexType;
    indexData.initialize(&in_struct->indexData);
    transformData.initialize(&in_struct->transformData);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureGeometryTrianglesDataKHR::initialize(const AccelerationStructureGeometryTrianglesDataKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vertexFormat = copy_src->vertexFormat;
    vertexData.initialize(&copy_src->vertexData);
    vertexStride = copy_src->vertexStride;
    maxVertex = copy_src->maxVertex;
    indexType = copy_src->indexType;
    indexData.initialize(&copy_src->indexData);
    transformData.initialize(&copy_src->transformData);
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureGeometryAabbsDataKHR::AccelerationStructureGeometryAabbsDataKHR(
    const VkAccelerationStructureGeometryAabbsDataKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), data(&in_struct->data), stride(in_struct->stride) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureGeometryAabbsDataKHR::AccelerationStructureGeometryAabbsDataKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR), pNext(nullptr), stride() {}

AccelerationStructureGeometryAabbsDataKHR::AccelerationStructureGeometryAabbsDataKHR(
    const AccelerationStructureGeometryAabbsDataKHR& copy_src) {
    sType = copy_src.sType;
    data.initialize(&copy_src.data);
    stride = copy_src.stride;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureGeometryAabbsDataKHR& AccelerationStructureGeometryAabbsDataKHR::operator=(
    const AccelerationStructureGeometryAabbsDataKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    data.initialize(&copy_src.data);
    stride = copy_src.stride;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureGeometryAabbsDataKHR::~AccelerationStructureGeometryAabbsDataKHR() { FreePnextChain(pNext); }

void AccelerationStructureGeometryAabbsDataKHR::initialize(const VkAccelerationStructureGeometryAabbsDataKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    data.initialize(&in_struct->data);
    stride = in_struct->stride;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureGeometryAabbsDataKHR::initialize(const AccelerationStructureGeometryAabbsDataKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    data.initialize(&copy_src->data);
    stride = copy_src->stride;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureGeometryInstancesDataKHR::AccelerationStructureGeometryInstancesDataKHR(
    const VkAccelerationStructureGeometryInstancesDataKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), arrayOfPointers(in_struct->arrayOfPointers), data(&in_struct->data) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureGeometryInstancesDataKHR::AccelerationStructureGeometryInstancesDataKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR), pNext(nullptr), arrayOfPointers() {}

AccelerationStructureGeometryInstancesDataKHR::AccelerationStructureGeometryInstancesDataKHR(
    const AccelerationStructureGeometryInstancesDataKHR& copy_src) {
    sType = copy_src.sType;
    arrayOfPointers = copy_src.arrayOfPointers;
    data.initialize(&copy_src.data);
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureGeometryInstancesDataKHR& AccelerationStructureGeometryInstancesDataKHR::operator=(
    const AccelerationStructureGeometryInstancesDataKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    arrayOfPointers = copy_src.arrayOfPointers;
    data.initialize(&copy_src.data);
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureGeometryInstancesDataKHR::~AccelerationStructureGeometryInstancesDataKHR() { FreePnextChain(pNext); }

void AccelerationStructureGeometryInstancesDataKHR::initialize(const VkAccelerationStructureGeometryInstancesDataKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    arrayOfPointers = in_struct->arrayOfPointers;
    data.initialize(&in_struct->data);
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureGeometryInstancesDataKHR::initialize(const AccelerationStructureGeometryInstancesDataKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    arrayOfPointers = copy_src->arrayOfPointers;
    data.initialize(&copy_src->data);
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureCreateInfoKHR::AccelerationStructureCreateInfoKHR(const VkAccelerationStructureCreateInfoKHR* in_struct,
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

AccelerationStructureCreateInfoKHR::AccelerationStructureCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR),
      pNext(nullptr),
      createFlags(),
      buffer(),
      offset(),
      size(),
      type(),
      deviceAddress() {}

AccelerationStructureCreateInfoKHR::AccelerationStructureCreateInfoKHR(const AccelerationStructureCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    createFlags = copy_src.createFlags;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    type = copy_src.type;
    deviceAddress = copy_src.deviceAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureCreateInfoKHR& AccelerationStructureCreateInfoKHR::operator=(
    const AccelerationStructureCreateInfoKHR& copy_src) {
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

AccelerationStructureCreateInfoKHR::~AccelerationStructureCreateInfoKHR() { FreePnextChain(pNext); }

void AccelerationStructureCreateInfoKHR::initialize(const VkAccelerationStructureCreateInfoKHR* in_struct,
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

void AccelerationStructureCreateInfoKHR::initialize(const AccelerationStructureCreateInfoKHR* copy_src,
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

WriteDescriptorSetAccelerationStructureKHR::WriteDescriptorSetAccelerationStructureKHR(
    const VkWriteDescriptorSetAccelerationStructureKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), accelerationStructureCount(in_struct->accelerationStructureCount), pAccelerationStructures(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (accelerationStructureCount && in_struct->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureKHR[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = in_struct->pAccelerationStructures[i];
        }
    }
}

WriteDescriptorSetAccelerationStructureKHR::WriteDescriptorSetAccelerationStructureKHR()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR),
      pNext(nullptr),
      accelerationStructureCount(),
      pAccelerationStructures(nullptr) {}

WriteDescriptorSetAccelerationStructureKHR::WriteDescriptorSetAccelerationStructureKHR(
    const WriteDescriptorSetAccelerationStructureKHR& copy_src) {
    sType = copy_src.sType;
    accelerationStructureCount = copy_src.accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (accelerationStructureCount && copy_src.pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureKHR[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src.pAccelerationStructures[i];
        }
    }
}

WriteDescriptorSetAccelerationStructureKHR& WriteDescriptorSetAccelerationStructureKHR::operator=(
    const WriteDescriptorSetAccelerationStructureKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructureCount = copy_src.accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (accelerationStructureCount && copy_src.pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureKHR[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src.pAccelerationStructures[i];
        }
    }

    return *this;
}

WriteDescriptorSetAccelerationStructureKHR::~WriteDescriptorSetAccelerationStructureKHR() {
    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);
}

void WriteDescriptorSetAccelerationStructureKHR::initialize(const VkWriteDescriptorSetAccelerationStructureKHR* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAccelerationStructures) delete[] pAccelerationStructures;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructureCount = in_struct->accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (accelerationStructureCount && in_struct->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureKHR[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = in_struct->pAccelerationStructures[i];
        }
    }
}

void WriteDescriptorSetAccelerationStructureKHR::initialize(const WriteDescriptorSetAccelerationStructureKHR* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructureCount = copy_src->accelerationStructureCount;
    pAccelerationStructures = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (accelerationStructureCount && copy_src->pAccelerationStructures) {
        pAccelerationStructures = new VkAccelerationStructureKHR[accelerationStructureCount];
        for (uint32_t i = 0; i < accelerationStructureCount; ++i) {
            pAccelerationStructures[i] = copy_src->pAccelerationStructures[i];
        }
    }
}

PhysicalDeviceAccelerationStructureFeaturesKHR::PhysicalDeviceAccelerationStructureFeaturesKHR(
    const VkPhysicalDeviceAccelerationStructureFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      accelerationStructure(in_struct->accelerationStructure),
      accelerationStructureCaptureReplay(in_struct->accelerationStructureCaptureReplay),
      accelerationStructureIndirectBuild(in_struct->accelerationStructureIndirectBuild),
      accelerationStructureHostCommands(in_struct->accelerationStructureHostCommands),
      descriptorBindingAccelerationStructureUpdateAfterBind(in_struct->descriptorBindingAccelerationStructureUpdateAfterBind) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAccelerationStructureFeaturesKHR::PhysicalDeviceAccelerationStructureFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR),
      pNext(nullptr),
      accelerationStructure(),
      accelerationStructureCaptureReplay(),
      accelerationStructureIndirectBuild(),
      accelerationStructureHostCommands(),
      descriptorBindingAccelerationStructureUpdateAfterBind() {}

PhysicalDeviceAccelerationStructureFeaturesKHR::PhysicalDeviceAccelerationStructureFeaturesKHR(
    const PhysicalDeviceAccelerationStructureFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureCaptureReplay = copy_src.accelerationStructureCaptureReplay;
    accelerationStructureIndirectBuild = copy_src.accelerationStructureIndirectBuild;
    accelerationStructureHostCommands = copy_src.accelerationStructureHostCommands;
    descriptorBindingAccelerationStructureUpdateAfterBind = copy_src.descriptorBindingAccelerationStructureUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAccelerationStructureFeaturesKHR& PhysicalDeviceAccelerationStructureFeaturesKHR::operator=(
    const PhysicalDeviceAccelerationStructureFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    accelerationStructureCaptureReplay = copy_src.accelerationStructureCaptureReplay;
    accelerationStructureIndirectBuild = copy_src.accelerationStructureIndirectBuild;
    accelerationStructureHostCommands = copy_src.accelerationStructureHostCommands;
    descriptorBindingAccelerationStructureUpdateAfterBind = copy_src.descriptorBindingAccelerationStructureUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAccelerationStructureFeaturesKHR::~PhysicalDeviceAccelerationStructureFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceAccelerationStructureFeaturesKHR::initialize(const VkPhysicalDeviceAccelerationStructureFeaturesKHR* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructure = in_struct->accelerationStructure;
    accelerationStructureCaptureReplay = in_struct->accelerationStructureCaptureReplay;
    accelerationStructureIndirectBuild = in_struct->accelerationStructureIndirectBuild;
    accelerationStructureHostCommands = in_struct->accelerationStructureHostCommands;
    descriptorBindingAccelerationStructureUpdateAfterBind = in_struct->descriptorBindingAccelerationStructureUpdateAfterBind;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAccelerationStructureFeaturesKHR::initialize(const PhysicalDeviceAccelerationStructureFeaturesKHR* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructure = copy_src->accelerationStructure;
    accelerationStructureCaptureReplay = copy_src->accelerationStructureCaptureReplay;
    accelerationStructureIndirectBuild = copy_src->accelerationStructureIndirectBuild;
    accelerationStructureHostCommands = copy_src->accelerationStructureHostCommands;
    descriptorBindingAccelerationStructureUpdateAfterBind = copy_src->descriptorBindingAccelerationStructureUpdateAfterBind;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceAccelerationStructurePropertiesKHR::PhysicalDeviceAccelerationStructurePropertiesKHR(
    const VkPhysicalDeviceAccelerationStructurePropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      maxGeometryCount(in_struct->maxGeometryCount),
      maxInstanceCount(in_struct->maxInstanceCount),
      maxPrimitiveCount(in_struct->maxPrimitiveCount),
      maxPerStageDescriptorAccelerationStructures(in_struct->maxPerStageDescriptorAccelerationStructures),
      maxPerStageDescriptorUpdateAfterBindAccelerationStructures(
          in_struct->maxPerStageDescriptorUpdateAfterBindAccelerationStructures),
      maxDescriptorSetAccelerationStructures(in_struct->maxDescriptorSetAccelerationStructures),
      maxDescriptorSetUpdateAfterBindAccelerationStructures(in_struct->maxDescriptorSetUpdateAfterBindAccelerationStructures),
      minAccelerationStructureScratchOffsetAlignment(in_struct->minAccelerationStructureScratchOffsetAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceAccelerationStructurePropertiesKHR::PhysicalDeviceAccelerationStructurePropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR),
      pNext(nullptr),
      maxGeometryCount(),
      maxInstanceCount(),
      maxPrimitiveCount(),
      maxPerStageDescriptorAccelerationStructures(),
      maxPerStageDescriptorUpdateAfterBindAccelerationStructures(),
      maxDescriptorSetAccelerationStructures(),
      maxDescriptorSetUpdateAfterBindAccelerationStructures(),
      minAccelerationStructureScratchOffsetAlignment() {}

PhysicalDeviceAccelerationStructurePropertiesKHR::PhysicalDeviceAccelerationStructurePropertiesKHR(
    const PhysicalDeviceAccelerationStructurePropertiesKHR& copy_src) {
    sType = copy_src.sType;
    maxGeometryCount = copy_src.maxGeometryCount;
    maxInstanceCount = copy_src.maxInstanceCount;
    maxPrimitiveCount = copy_src.maxPrimitiveCount;
    maxPerStageDescriptorAccelerationStructures = copy_src.maxPerStageDescriptorAccelerationStructures;
    maxPerStageDescriptorUpdateAfterBindAccelerationStructures =
        copy_src.maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    maxDescriptorSetAccelerationStructures = copy_src.maxDescriptorSetAccelerationStructures;
    maxDescriptorSetUpdateAfterBindAccelerationStructures = copy_src.maxDescriptorSetUpdateAfterBindAccelerationStructures;
    minAccelerationStructureScratchOffsetAlignment = copy_src.minAccelerationStructureScratchOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceAccelerationStructurePropertiesKHR& PhysicalDeviceAccelerationStructurePropertiesKHR::operator=(
    const PhysicalDeviceAccelerationStructurePropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxGeometryCount = copy_src.maxGeometryCount;
    maxInstanceCount = copy_src.maxInstanceCount;
    maxPrimitiveCount = copy_src.maxPrimitiveCount;
    maxPerStageDescriptorAccelerationStructures = copy_src.maxPerStageDescriptorAccelerationStructures;
    maxPerStageDescriptorUpdateAfterBindAccelerationStructures =
        copy_src.maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    maxDescriptorSetAccelerationStructures = copy_src.maxDescriptorSetAccelerationStructures;
    maxDescriptorSetUpdateAfterBindAccelerationStructures = copy_src.maxDescriptorSetUpdateAfterBindAccelerationStructures;
    minAccelerationStructureScratchOffsetAlignment = copy_src.minAccelerationStructureScratchOffsetAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceAccelerationStructurePropertiesKHR::~PhysicalDeviceAccelerationStructurePropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceAccelerationStructurePropertiesKHR::initialize(
    const VkPhysicalDeviceAccelerationStructurePropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxGeometryCount = in_struct->maxGeometryCount;
    maxInstanceCount = in_struct->maxInstanceCount;
    maxPrimitiveCount = in_struct->maxPrimitiveCount;
    maxPerStageDescriptorAccelerationStructures = in_struct->maxPerStageDescriptorAccelerationStructures;
    maxPerStageDescriptorUpdateAfterBindAccelerationStructures =
        in_struct->maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    maxDescriptorSetAccelerationStructures = in_struct->maxDescriptorSetAccelerationStructures;
    maxDescriptorSetUpdateAfterBindAccelerationStructures = in_struct->maxDescriptorSetUpdateAfterBindAccelerationStructures;
    minAccelerationStructureScratchOffsetAlignment = in_struct->minAccelerationStructureScratchOffsetAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceAccelerationStructurePropertiesKHR::initialize(const PhysicalDeviceAccelerationStructurePropertiesKHR* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxGeometryCount = copy_src->maxGeometryCount;
    maxInstanceCount = copy_src->maxInstanceCount;
    maxPrimitiveCount = copy_src->maxPrimitiveCount;
    maxPerStageDescriptorAccelerationStructures = copy_src->maxPerStageDescriptorAccelerationStructures;
    maxPerStageDescriptorUpdateAfterBindAccelerationStructures =
        copy_src->maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    maxDescriptorSetAccelerationStructures = copy_src->maxDescriptorSetAccelerationStructures;
    maxDescriptorSetUpdateAfterBindAccelerationStructures = copy_src->maxDescriptorSetUpdateAfterBindAccelerationStructures;
    minAccelerationStructureScratchOffsetAlignment = copy_src->minAccelerationStructureScratchOffsetAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureDeviceAddressInfoKHR::AccelerationStructureDeviceAddressInfoKHR(
    const VkAccelerationStructureDeviceAddressInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), accelerationStructure(in_struct->accelerationStructure) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureDeviceAddressInfoKHR::AccelerationStructureDeviceAddressInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR), pNext(nullptr), accelerationStructure() {}

AccelerationStructureDeviceAddressInfoKHR::AccelerationStructureDeviceAddressInfoKHR(
    const AccelerationStructureDeviceAddressInfoKHR& copy_src) {
    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureDeviceAddressInfoKHR& AccelerationStructureDeviceAddressInfoKHR::operator=(
    const AccelerationStructureDeviceAddressInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructure = copy_src.accelerationStructure;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureDeviceAddressInfoKHR::~AccelerationStructureDeviceAddressInfoKHR() { FreePnextChain(pNext); }

void AccelerationStructureDeviceAddressInfoKHR::initialize(const VkAccelerationStructureDeviceAddressInfoKHR* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructure = in_struct->accelerationStructure;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureDeviceAddressInfoKHR::initialize(const AccelerationStructureDeviceAddressInfoKHR* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructure = copy_src->accelerationStructure;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureVersionInfoKHR::AccelerationStructureVersionInfoKHR(const VkAccelerationStructureVersionInfoKHR* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), pVersionData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)in_struct->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

AccelerationStructureVersionInfoKHR::AccelerationStructureVersionInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR), pNext(nullptr), pVersionData(nullptr) {}

AccelerationStructureVersionInfoKHR::AccelerationStructureVersionInfoKHR(const AccelerationStructureVersionInfoKHR& copy_src) {
    sType = copy_src.sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src.pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

AccelerationStructureVersionInfoKHR& AccelerationStructureVersionInfoKHR::operator=(
    const AccelerationStructureVersionInfoKHR& copy_src) {
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

AccelerationStructureVersionInfoKHR::~AccelerationStructureVersionInfoKHR() {
    if (pVersionData) delete[] pVersionData;
    FreePnextChain(pNext);
}

void AccelerationStructureVersionInfoKHR::initialize(const VkAccelerationStructureVersionInfoKHR* in_struct,
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

void AccelerationStructureVersionInfoKHR::initialize(const AccelerationStructureVersionInfoKHR* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pVersionData = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVersionData) {
        pVersionData = new uint8_t[2 * VK_UUID_SIZE];
        memcpy((void*)pVersionData, (void*)copy_src->pVersionData, sizeof(uint8_t) * 2 * VK_UUID_SIZE);
    }
}

CopyAccelerationStructureToMemoryInfoKHR::CopyAccelerationStructureToMemoryInfoKHR(
    const VkCopyAccelerationStructureToMemoryInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(&in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyAccelerationStructureToMemoryInfoKHR::CopyAccelerationStructureToMemoryInfoKHR()
    : sType(VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR), pNext(nullptr), src(), mode() {}

CopyAccelerationStructureToMemoryInfoKHR::CopyAccelerationStructureToMemoryInfoKHR(
    const CopyAccelerationStructureToMemoryInfoKHR& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyAccelerationStructureToMemoryInfoKHR& CopyAccelerationStructureToMemoryInfoKHR::operator=(
    const CopyAccelerationStructureToMemoryInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst.initialize(&copy_src.dst);
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyAccelerationStructureToMemoryInfoKHR::~CopyAccelerationStructureToMemoryInfoKHR() { FreePnextChain(pNext); }

void CopyAccelerationStructureToMemoryInfoKHR::initialize(const VkCopyAccelerationStructureToMemoryInfoKHR* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst.initialize(&in_struct->dst);
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyAccelerationStructureToMemoryInfoKHR::initialize(const CopyAccelerationStructureToMemoryInfoKHR* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst.initialize(&copy_src->dst);
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyMemoryToAccelerationStructureInfoKHR::CopyMemoryToAccelerationStructureInfoKHR(
    const VkCopyMemoryToAccelerationStructureInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(&in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyMemoryToAccelerationStructureInfoKHR::CopyMemoryToAccelerationStructureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR), pNext(nullptr), dst(), mode() {}

CopyMemoryToAccelerationStructureInfoKHR::CopyMemoryToAccelerationStructureInfoKHR(
    const CopyMemoryToAccelerationStructureInfoKHR& copy_src) {
    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyMemoryToAccelerationStructureInfoKHR& CopyMemoryToAccelerationStructureInfoKHR::operator=(
    const CopyMemoryToAccelerationStructureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src.initialize(&copy_src.src);
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyMemoryToAccelerationStructureInfoKHR::~CopyMemoryToAccelerationStructureInfoKHR() { FreePnextChain(pNext); }

void CopyMemoryToAccelerationStructureInfoKHR::initialize(const VkCopyMemoryToAccelerationStructureInfoKHR* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src.initialize(&in_struct->src);
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyMemoryToAccelerationStructureInfoKHR::initialize(const CopyMemoryToAccelerationStructureInfoKHR* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src.initialize(&copy_src->src);
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

CopyAccelerationStructureInfoKHR::CopyAccelerationStructureInfoKHR(const VkCopyAccelerationStructureInfoKHR* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), src(in_struct->src), dst(in_struct->dst), mode(in_struct->mode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

CopyAccelerationStructureInfoKHR::CopyAccelerationStructureInfoKHR()
    : sType(VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR), pNext(nullptr), src(), dst(), mode() {}

CopyAccelerationStructureInfoKHR::CopyAccelerationStructureInfoKHR(const CopyAccelerationStructureInfoKHR& copy_src) {
    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);
}

CopyAccelerationStructureInfoKHR& CopyAccelerationStructureInfoKHR::operator=(const CopyAccelerationStructureInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    src = copy_src.src;
    dst = copy_src.dst;
    mode = copy_src.mode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

CopyAccelerationStructureInfoKHR::~CopyAccelerationStructureInfoKHR() { FreePnextChain(pNext); }

void CopyAccelerationStructureInfoKHR::initialize(const VkCopyAccelerationStructureInfoKHR* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    src = in_struct->src;
    dst = in_struct->dst;
    mode = in_struct->mode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void CopyAccelerationStructureInfoKHR::initialize(const CopyAccelerationStructureInfoKHR* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    src = copy_src->src;
    dst = copy_src->dst;
    mode = copy_src->mode;
    pNext = SafePnextCopy(copy_src->pNext);
}

AccelerationStructureBuildSizesInfoKHR::AccelerationStructureBuildSizesInfoKHR(
    const VkAccelerationStructureBuildSizesInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      accelerationStructureSize(in_struct->accelerationStructureSize),
      updateScratchSize(in_struct->updateScratchSize),
      buildScratchSize(in_struct->buildScratchSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

AccelerationStructureBuildSizesInfoKHR::AccelerationStructureBuildSizesInfoKHR()
    : sType(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR),
      pNext(nullptr),
      accelerationStructureSize(),
      updateScratchSize(),
      buildScratchSize() {}

AccelerationStructureBuildSizesInfoKHR::AccelerationStructureBuildSizesInfoKHR(
    const AccelerationStructureBuildSizesInfoKHR& copy_src) {
    sType = copy_src.sType;
    accelerationStructureSize = copy_src.accelerationStructureSize;
    updateScratchSize = copy_src.updateScratchSize;
    buildScratchSize = copy_src.buildScratchSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

AccelerationStructureBuildSizesInfoKHR& AccelerationStructureBuildSizesInfoKHR::operator=(
    const AccelerationStructureBuildSizesInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    accelerationStructureSize = copy_src.accelerationStructureSize;
    updateScratchSize = copy_src.updateScratchSize;
    buildScratchSize = copy_src.buildScratchSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

AccelerationStructureBuildSizesInfoKHR::~AccelerationStructureBuildSizesInfoKHR() { FreePnextChain(pNext); }

void AccelerationStructureBuildSizesInfoKHR::initialize(const VkAccelerationStructureBuildSizesInfoKHR* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    accelerationStructureSize = in_struct->accelerationStructureSize;
    updateScratchSize = in_struct->updateScratchSize;
    buildScratchSize = in_struct->buildScratchSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void AccelerationStructureBuildSizesInfoKHR::initialize(const AccelerationStructureBuildSizesInfoKHR* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    accelerationStructureSize = copy_src->accelerationStructureSize;
    updateScratchSize = copy_src->updateScratchSize;
    buildScratchSize = copy_src->buildScratchSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

RayTracingShaderGroupCreateInfoKHR::RayTracingShaderGroupCreateInfoKHR(const VkRayTracingShaderGroupCreateInfoKHR* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      type(in_struct->type),
      generalShader(in_struct->generalShader),
      closestHitShader(in_struct->closestHitShader),
      anyHitShader(in_struct->anyHitShader),
      intersectionShader(in_struct->intersectionShader),
      pShaderGroupCaptureReplayHandle(in_struct->pShaderGroupCaptureReplayHandle) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RayTracingShaderGroupCreateInfoKHR::RayTracingShaderGroupCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR),
      pNext(nullptr),
      type(),
      generalShader(),
      closestHitShader(),
      anyHitShader(),
      intersectionShader(),
      pShaderGroupCaptureReplayHandle(nullptr) {}

RayTracingShaderGroupCreateInfoKHR::RayTracingShaderGroupCreateInfoKHR(const RayTracingShaderGroupCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    type = copy_src.type;
    generalShader = copy_src.generalShader;
    closestHitShader = copy_src.closestHitShader;
    anyHitShader = copy_src.anyHitShader;
    intersectionShader = copy_src.intersectionShader;
    pShaderGroupCaptureReplayHandle = copy_src.pShaderGroupCaptureReplayHandle;
    pNext = SafePnextCopy(copy_src.pNext);
}

RayTracingShaderGroupCreateInfoKHR& RayTracingShaderGroupCreateInfoKHR::operator=(
    const RayTracingShaderGroupCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    type = copy_src.type;
    generalShader = copy_src.generalShader;
    closestHitShader = copy_src.closestHitShader;
    anyHitShader = copy_src.anyHitShader;
    intersectionShader = copy_src.intersectionShader;
    pShaderGroupCaptureReplayHandle = copy_src.pShaderGroupCaptureReplayHandle;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RayTracingShaderGroupCreateInfoKHR::~RayTracingShaderGroupCreateInfoKHR() { FreePnextChain(pNext); }

void RayTracingShaderGroupCreateInfoKHR::initialize(const VkRayTracingShaderGroupCreateInfoKHR* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    type = in_struct->type;
    generalShader = in_struct->generalShader;
    closestHitShader = in_struct->closestHitShader;
    anyHitShader = in_struct->anyHitShader;
    intersectionShader = in_struct->intersectionShader;
    pShaderGroupCaptureReplayHandle = in_struct->pShaderGroupCaptureReplayHandle;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RayTracingShaderGroupCreateInfoKHR::initialize(const RayTracingShaderGroupCreateInfoKHR* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    type = copy_src->type;
    generalShader = copy_src->generalShader;
    closestHitShader = copy_src->closestHitShader;
    anyHitShader = copy_src->anyHitShader;
    intersectionShader = copy_src->intersectionShader;
    pShaderGroupCaptureReplayHandle = copy_src->pShaderGroupCaptureReplayHandle;
    pNext = SafePnextCopy(copy_src->pNext);
}

RayTracingPipelineInterfaceCreateInfoKHR::RayTracingPipelineInterfaceCreateInfoKHR(
    const VkRayTracingPipelineInterfaceCreateInfoKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxPipelineRayPayloadSize(in_struct->maxPipelineRayPayloadSize),
      maxPipelineRayHitAttributeSize(in_struct->maxPipelineRayHitAttributeSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

RayTracingPipelineInterfaceCreateInfoKHR::RayTracingPipelineInterfaceCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR),
      pNext(nullptr),
      maxPipelineRayPayloadSize(),
      maxPipelineRayHitAttributeSize() {}

RayTracingPipelineInterfaceCreateInfoKHR::RayTracingPipelineInterfaceCreateInfoKHR(
    const RayTracingPipelineInterfaceCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    maxPipelineRayPayloadSize = copy_src.maxPipelineRayPayloadSize;
    maxPipelineRayHitAttributeSize = copy_src.maxPipelineRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

RayTracingPipelineInterfaceCreateInfoKHR& RayTracingPipelineInterfaceCreateInfoKHR::operator=(
    const RayTracingPipelineInterfaceCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxPipelineRayPayloadSize = copy_src.maxPipelineRayPayloadSize;
    maxPipelineRayHitAttributeSize = copy_src.maxPipelineRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

RayTracingPipelineInterfaceCreateInfoKHR::~RayTracingPipelineInterfaceCreateInfoKHR() { FreePnextChain(pNext); }

void RayTracingPipelineInterfaceCreateInfoKHR::initialize(const VkRayTracingPipelineInterfaceCreateInfoKHR* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxPipelineRayPayloadSize = in_struct->maxPipelineRayPayloadSize;
    maxPipelineRayHitAttributeSize = in_struct->maxPipelineRayHitAttributeSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void RayTracingPipelineInterfaceCreateInfoKHR::initialize(const RayTracingPipelineInterfaceCreateInfoKHR* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxPipelineRayPayloadSize = copy_src->maxPipelineRayPayloadSize;
    maxPipelineRayHitAttributeSize = copy_src->maxPipelineRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

RayTracingPipelineCreateInfoKHR::RayTracingPipelineCreateInfoKHR(const VkRayTracingPipelineCreateInfoKHR* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      groupCount(in_struct->groupCount),
      pGroups(nullptr),
      maxPipelineRayRecursionDepth(in_struct->maxPipelineRayRecursionDepth),
      pLibraryInfo(nullptr),
      pLibraryInterface(nullptr),
      pDynamicState(nullptr),
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
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
    if (in_struct->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(in_struct->pLibraryInfo);
    if (in_struct->pLibraryInterface)
        pLibraryInterface = new RayTracingPipelineInterfaceCreateInfoKHR(in_struct->pLibraryInterface);
    if (in_struct->pDynamicState) pDynamicState = new PipelineDynamicStateCreateInfo(in_struct->pDynamicState);
}

RayTracingPipelineCreateInfoKHR::RayTracingPipelineCreateInfoKHR()
    : sType(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR),
      pNext(nullptr),
      flags(),
      stageCount(),
      pStages(nullptr),
      groupCount(),
      pGroups(nullptr),
      maxPipelineRayRecursionDepth(),
      pLibraryInfo(nullptr),
      pLibraryInterface(nullptr),
      pDynamicState(nullptr),
      layout(),
      basePipelineHandle(),
      basePipelineIndex() {}

RayTracingPipelineCreateInfoKHR::RayTracingPipelineCreateInfoKHR(const RayTracingPipelineCreateInfoKHR& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    maxPipelineRayRecursionDepth = copy_src.maxPipelineRayRecursionDepth;
    pLibraryInfo = nullptr;
    pLibraryInterface = nullptr;
    pDynamicState = nullptr;
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
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }
    if (copy_src.pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src.pLibraryInfo);
    if (copy_src.pLibraryInterface) pLibraryInterface = new RayTracingPipelineInterfaceCreateInfoKHR(*copy_src.pLibraryInterface);
    if (copy_src.pDynamicState) pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src.pDynamicState);
}

RayTracingPipelineCreateInfoKHR& RayTracingPipelineCreateInfoKHR::operator=(const RayTracingPipelineCreateInfoKHR& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    if (pLibraryInfo) delete pLibraryInfo;
    if (pLibraryInterface) delete pLibraryInterface;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    groupCount = copy_src.groupCount;
    pGroups = nullptr;
    maxPipelineRayRecursionDepth = copy_src.maxPipelineRayRecursionDepth;
    pLibraryInfo = nullptr;
    pLibraryInterface = nullptr;
    pDynamicState = nullptr;
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
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src.pGroups[i]);
        }
    }
    if (copy_src.pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src.pLibraryInfo);
    if (copy_src.pLibraryInterface) pLibraryInterface = new RayTracingPipelineInterfaceCreateInfoKHR(*copy_src.pLibraryInterface);
    if (copy_src.pDynamicState) pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src.pDynamicState);

    return *this;
}

RayTracingPipelineCreateInfoKHR::~RayTracingPipelineCreateInfoKHR() {
    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    if (pLibraryInfo) delete pLibraryInfo;
    if (pLibraryInterface) delete pLibraryInterface;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
}

void RayTracingPipelineCreateInfoKHR::initialize(const VkRayTracingPipelineCreateInfoKHR* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pGroups) delete[] pGroups;
    if (pLibraryInfo) delete pLibraryInfo;
    if (pLibraryInterface) delete pLibraryInterface;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    groupCount = in_struct->groupCount;
    pGroups = nullptr;
    maxPipelineRayRecursionDepth = in_struct->maxPipelineRayRecursionDepth;
    pLibraryInfo = nullptr;
    pLibraryInterface = nullptr;
    pDynamicState = nullptr;
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
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&in_struct->pGroups[i]);
        }
    }
    if (in_struct->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(in_struct->pLibraryInfo);
    if (in_struct->pLibraryInterface)
        pLibraryInterface = new RayTracingPipelineInterfaceCreateInfoKHR(in_struct->pLibraryInterface);
    if (in_struct->pDynamicState) pDynamicState = new PipelineDynamicStateCreateInfo(in_struct->pDynamicState);
}

void RayTracingPipelineCreateInfoKHR::initialize(const RayTracingPipelineCreateInfoKHR* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    groupCount = copy_src->groupCount;
    pGroups = nullptr;
    maxPipelineRayRecursionDepth = copy_src->maxPipelineRayRecursionDepth;
    pLibraryInfo = nullptr;
    pLibraryInterface = nullptr;
    pDynamicState = nullptr;
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
        pGroups = new RayTracingShaderGroupCreateInfoKHR[groupCount];
        for (uint32_t i = 0; i < groupCount; ++i) {
            pGroups[i].initialize(&copy_src->pGroups[i]);
        }
    }
    if (copy_src->pLibraryInfo) pLibraryInfo = new PipelineLibraryCreateInfoKHR(*copy_src->pLibraryInfo);
    if (copy_src->pLibraryInterface) pLibraryInterface = new RayTracingPipelineInterfaceCreateInfoKHR(*copy_src->pLibraryInterface);
    if (copy_src->pDynamicState) pDynamicState = new PipelineDynamicStateCreateInfo(*copy_src->pDynamicState);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::PhysicalDeviceRayTracingPipelineFeaturesKHR(
    const VkPhysicalDeviceRayTracingPipelineFeaturesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      rayTracingPipeline(in_struct->rayTracingPipeline),
      rayTracingPipelineShaderGroupHandleCaptureReplay(in_struct->rayTracingPipelineShaderGroupHandleCaptureReplay),
      rayTracingPipelineShaderGroupHandleCaptureReplayMixed(in_struct->rayTracingPipelineShaderGroupHandleCaptureReplayMixed),
      rayTracingPipelineTraceRaysIndirect(in_struct->rayTracingPipelineTraceRaysIndirect),
      rayTraversalPrimitiveCulling(in_struct->rayTraversalPrimitiveCulling) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::PhysicalDeviceRayTracingPipelineFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR),
      pNext(nullptr),
      rayTracingPipeline(),
      rayTracingPipelineShaderGroupHandleCaptureReplay(),
      rayTracingPipelineShaderGroupHandleCaptureReplayMixed(),
      rayTracingPipelineTraceRaysIndirect(),
      rayTraversalPrimitiveCulling() {}

PhysicalDeviceRayTracingPipelineFeaturesKHR::PhysicalDeviceRayTracingPipelineFeaturesKHR(
    const PhysicalDeviceRayTracingPipelineFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    rayTracingPipeline = copy_src.rayTracingPipeline;
    rayTracingPipelineShaderGroupHandleCaptureReplay = copy_src.rayTracingPipelineShaderGroupHandleCaptureReplay;
    rayTracingPipelineShaderGroupHandleCaptureReplayMixed = copy_src.rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    rayTracingPipelineTraceRaysIndirect = copy_src.rayTracingPipelineTraceRaysIndirect;
    rayTraversalPrimitiveCulling = copy_src.rayTraversalPrimitiveCulling;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR& PhysicalDeviceRayTracingPipelineFeaturesKHR::operator=(
    const PhysicalDeviceRayTracingPipelineFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayTracingPipeline = copy_src.rayTracingPipeline;
    rayTracingPipelineShaderGroupHandleCaptureReplay = copy_src.rayTracingPipelineShaderGroupHandleCaptureReplay;
    rayTracingPipelineShaderGroupHandleCaptureReplayMixed = copy_src.rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    rayTracingPipelineTraceRaysIndirect = copy_src.rayTracingPipelineTraceRaysIndirect;
    rayTraversalPrimitiveCulling = copy_src.rayTraversalPrimitiveCulling;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::~PhysicalDeviceRayTracingPipelineFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingPipelineFeaturesKHR::initialize(const VkPhysicalDeviceRayTracingPipelineFeaturesKHR* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayTracingPipeline = in_struct->rayTracingPipeline;
    rayTracingPipelineShaderGroupHandleCaptureReplay = in_struct->rayTracingPipelineShaderGroupHandleCaptureReplay;
    rayTracingPipelineShaderGroupHandleCaptureReplayMixed = in_struct->rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    rayTracingPipelineTraceRaysIndirect = in_struct->rayTracingPipelineTraceRaysIndirect;
    rayTraversalPrimitiveCulling = in_struct->rayTraversalPrimitiveCulling;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingPipelineFeaturesKHR::initialize(const PhysicalDeviceRayTracingPipelineFeaturesKHR* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayTracingPipeline = copy_src->rayTracingPipeline;
    rayTracingPipelineShaderGroupHandleCaptureReplay = copy_src->rayTracingPipelineShaderGroupHandleCaptureReplay;
    rayTracingPipelineShaderGroupHandleCaptureReplayMixed = copy_src->rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    rayTracingPipelineTraceRaysIndirect = copy_src->rayTracingPipelineTraceRaysIndirect;
    rayTraversalPrimitiveCulling = copy_src->rayTraversalPrimitiveCulling;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::PhysicalDeviceRayTracingPipelinePropertiesKHR(
    const VkPhysicalDeviceRayTracingPipelinePropertiesKHR* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderGroupHandleSize(in_struct->shaderGroupHandleSize),
      maxRayRecursionDepth(in_struct->maxRayRecursionDepth),
      maxShaderGroupStride(in_struct->maxShaderGroupStride),
      shaderGroupBaseAlignment(in_struct->shaderGroupBaseAlignment),
      shaderGroupHandleCaptureReplaySize(in_struct->shaderGroupHandleCaptureReplaySize),
      maxRayDispatchInvocationCount(in_struct->maxRayDispatchInvocationCount),
      shaderGroupHandleAlignment(in_struct->shaderGroupHandleAlignment),
      maxRayHitAttributeSize(in_struct->maxRayHitAttributeSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::PhysicalDeviceRayTracingPipelinePropertiesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR),
      pNext(nullptr),
      shaderGroupHandleSize(),
      maxRayRecursionDepth(),
      maxShaderGroupStride(),
      shaderGroupBaseAlignment(),
      shaderGroupHandleCaptureReplaySize(),
      maxRayDispatchInvocationCount(),
      shaderGroupHandleAlignment(),
      maxRayHitAttributeSize() {}

PhysicalDeviceRayTracingPipelinePropertiesKHR::PhysicalDeviceRayTracingPipelinePropertiesKHR(
    const PhysicalDeviceRayTracingPipelinePropertiesKHR& copy_src) {
    sType = copy_src.sType;
    shaderGroupHandleSize = copy_src.shaderGroupHandleSize;
    maxRayRecursionDepth = copy_src.maxRayRecursionDepth;
    maxShaderGroupStride = copy_src.maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src.shaderGroupBaseAlignment;
    shaderGroupHandleCaptureReplaySize = copy_src.shaderGroupHandleCaptureReplaySize;
    maxRayDispatchInvocationCount = copy_src.maxRayDispatchInvocationCount;
    shaderGroupHandleAlignment = copy_src.shaderGroupHandleAlignment;
    maxRayHitAttributeSize = copy_src.maxRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR& PhysicalDeviceRayTracingPipelinePropertiesKHR::operator=(
    const PhysicalDeviceRayTracingPipelinePropertiesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderGroupHandleSize = copy_src.shaderGroupHandleSize;
    maxRayRecursionDepth = copy_src.maxRayRecursionDepth;
    maxShaderGroupStride = copy_src.maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src.shaderGroupBaseAlignment;
    shaderGroupHandleCaptureReplaySize = copy_src.shaderGroupHandleCaptureReplaySize;
    maxRayDispatchInvocationCount = copy_src.maxRayDispatchInvocationCount;
    shaderGroupHandleAlignment = copy_src.shaderGroupHandleAlignment;
    maxRayHitAttributeSize = copy_src.maxRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::~PhysicalDeviceRayTracingPipelinePropertiesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceRayTracingPipelinePropertiesKHR::initialize(const VkPhysicalDeviceRayTracingPipelinePropertiesKHR* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderGroupHandleSize = in_struct->shaderGroupHandleSize;
    maxRayRecursionDepth = in_struct->maxRayRecursionDepth;
    maxShaderGroupStride = in_struct->maxShaderGroupStride;
    shaderGroupBaseAlignment = in_struct->shaderGroupBaseAlignment;
    shaderGroupHandleCaptureReplaySize = in_struct->shaderGroupHandleCaptureReplaySize;
    maxRayDispatchInvocationCount = in_struct->maxRayDispatchInvocationCount;
    shaderGroupHandleAlignment = in_struct->shaderGroupHandleAlignment;
    maxRayHitAttributeSize = in_struct->maxRayHitAttributeSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayTracingPipelinePropertiesKHR::initialize(const PhysicalDeviceRayTracingPipelinePropertiesKHR* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderGroupHandleSize = copy_src->shaderGroupHandleSize;
    maxRayRecursionDepth = copy_src->maxRayRecursionDepth;
    maxShaderGroupStride = copy_src->maxShaderGroupStride;
    shaderGroupBaseAlignment = copy_src->shaderGroupBaseAlignment;
    shaderGroupHandleCaptureReplaySize = copy_src->shaderGroupHandleCaptureReplaySize;
    maxRayDispatchInvocationCount = copy_src->maxRayDispatchInvocationCount;
    shaderGroupHandleAlignment = copy_src->shaderGroupHandleAlignment;
    maxRayHitAttributeSize = copy_src->maxRayHitAttributeSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

PhysicalDeviceRayQueryFeaturesKHR::PhysicalDeviceRayQueryFeaturesKHR(const VkPhysicalDeviceRayQueryFeaturesKHR* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), rayQuery(in_struct->rayQuery) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

PhysicalDeviceRayQueryFeaturesKHR::PhysicalDeviceRayQueryFeaturesKHR()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR), pNext(nullptr), rayQuery() {}

PhysicalDeviceRayQueryFeaturesKHR::PhysicalDeviceRayQueryFeaturesKHR(const PhysicalDeviceRayQueryFeaturesKHR& copy_src) {
    sType = copy_src.sType;
    rayQuery = copy_src.rayQuery;
    pNext = SafePnextCopy(copy_src.pNext);
}

PhysicalDeviceRayQueryFeaturesKHR& PhysicalDeviceRayQueryFeaturesKHR::operator=(const PhysicalDeviceRayQueryFeaturesKHR& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    rayQuery = copy_src.rayQuery;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

PhysicalDeviceRayQueryFeaturesKHR::~PhysicalDeviceRayQueryFeaturesKHR() { FreePnextChain(pNext); }

void PhysicalDeviceRayQueryFeaturesKHR::initialize(const VkPhysicalDeviceRayQueryFeaturesKHR* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    rayQuery = in_struct->rayQuery;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void PhysicalDeviceRayQueryFeaturesKHR::initialize(const PhysicalDeviceRayQueryFeaturesKHR* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    rayQuery = copy_src->rayQuery;
    pNext = SafePnextCopy(copy_src->pNext);
}

}  // namespace safe
}  // namespace vku

// NOLINTEND
