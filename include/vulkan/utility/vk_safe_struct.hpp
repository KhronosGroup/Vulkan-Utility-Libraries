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

#pragma once
#include <vulkan/vulkan.h>
#include <algorithm>

#include <vulkan/utility/vk_safe_struct_utils.hpp>

namespace vku {

struct safe_VkBufferMemoryBarrier {
    VkStructureType sType;
    const void* pNext{};
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;

    safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& copy_src);
    safe_VkBufferMemoryBarrier& operator=(const safe_VkBufferMemoryBarrier& copy_src);
    safe_VkBufferMemoryBarrier();
    ~safe_VkBufferMemoryBarrier();
    void initialize(const VkBufferMemoryBarrier* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferMemoryBarrier* copy_src, PNextCopyState* copy_state = {});
    VkBufferMemoryBarrier* ptr() { return reinterpret_cast<VkBufferMemoryBarrier*>(this); }
    VkBufferMemoryBarrier const* ptr() const { return reinterpret_cast<VkBufferMemoryBarrier const*>(this); }
};
struct safe_VkImageMemoryBarrier {
    VkStructureType sType;
    const void* pNext{};
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkImage image;
    VkImageSubresourceRange subresourceRange;

    safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& copy_src);
    safe_VkImageMemoryBarrier& operator=(const safe_VkImageMemoryBarrier& copy_src);
    safe_VkImageMemoryBarrier();
    ~safe_VkImageMemoryBarrier();
    void initialize(const VkImageMemoryBarrier* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageMemoryBarrier* copy_src, PNextCopyState* copy_state = {});
    VkImageMemoryBarrier* ptr() { return reinterpret_cast<VkImageMemoryBarrier*>(this); }
    VkImageMemoryBarrier const* ptr() const { return reinterpret_cast<VkImageMemoryBarrier const*>(this); }
};
struct safe_VkMemoryBarrier {
    VkStructureType sType;
    const void* pNext{};
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;

    safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryBarrier(const safe_VkMemoryBarrier& copy_src);
    safe_VkMemoryBarrier& operator=(const safe_VkMemoryBarrier& copy_src);
    safe_VkMemoryBarrier();
    ~safe_VkMemoryBarrier();
    void initialize(const VkMemoryBarrier* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryBarrier* copy_src, PNextCopyState* copy_state = {});
    VkMemoryBarrier* ptr() { return reinterpret_cast<VkMemoryBarrier*>(this); }
    VkMemoryBarrier const* ptr() const { return reinterpret_cast<VkMemoryBarrier const*>(this); }
};
struct safe_VkAllocationCallbacks {
    void* pUserData{};
    PFN_vkAllocationFunction pfnAllocation;
    PFN_vkReallocationFunction pfnReallocation;
    PFN_vkFreeFunction pfnFree;
    PFN_vkInternalAllocationNotification pfnInternalAllocation;
    PFN_vkInternalFreeNotification pfnInternalFree;

    safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct, PNextCopyState* copy_state = {});
    safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& copy_src);
    safe_VkAllocationCallbacks& operator=(const safe_VkAllocationCallbacks& copy_src);
    safe_VkAllocationCallbacks();
    ~safe_VkAllocationCallbacks();
    void initialize(const VkAllocationCallbacks* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAllocationCallbacks* copy_src, PNextCopyState* copy_state = {});
    VkAllocationCallbacks* ptr() { return reinterpret_cast<VkAllocationCallbacks*>(this); }
    VkAllocationCallbacks const* ptr() const { return reinterpret_cast<VkAllocationCallbacks const*>(this); }
};
struct safe_VkApplicationInfo {
    VkStructureType sType;
    const void* pNext{};
    const char* pApplicationName{};
    uint32_t applicationVersion;
    const char* pEngineName{};
    uint32_t engineVersion;
    uint32_t apiVersion;

    safe_VkApplicationInfo(const VkApplicationInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkApplicationInfo(const safe_VkApplicationInfo& copy_src);
    safe_VkApplicationInfo& operator=(const safe_VkApplicationInfo& copy_src);
    safe_VkApplicationInfo();
    ~safe_VkApplicationInfo();
    void initialize(const VkApplicationInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkApplicationInfo* copy_src, PNextCopyState* copy_state = {});
    VkApplicationInfo* ptr() { return reinterpret_cast<VkApplicationInfo*>(this); }
    VkApplicationInfo const* ptr() const { return reinterpret_cast<VkApplicationInfo const*>(this); }
};
struct safe_VkInstanceCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkInstanceCreateFlags flags;
    safe_VkApplicationInfo* pApplicationInfo{};
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames{};
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames{};

    safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& copy_src);
    safe_VkInstanceCreateInfo& operator=(const safe_VkInstanceCreateInfo& copy_src);
    safe_VkInstanceCreateInfo();
    ~safe_VkInstanceCreateInfo();
    void initialize(const VkInstanceCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkInstanceCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkInstanceCreateInfo* ptr() { return reinterpret_cast<VkInstanceCreateInfo*>(this); }
    VkInstanceCreateInfo const* ptr() const { return reinterpret_cast<VkInstanceCreateInfo const*>(this); }
};
struct safe_VkDeviceQueueCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceQueueCreateFlags flags;
    uint32_t queueFamilyIndex;
    uint32_t queueCount;
    const float* pQueuePriorities{};

    safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& copy_src);
    safe_VkDeviceQueueCreateInfo& operator=(const safe_VkDeviceQueueCreateInfo& copy_src);
    safe_VkDeviceQueueCreateInfo();
    ~safe_VkDeviceQueueCreateInfo();
    void initialize(const VkDeviceQueueCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceQueueCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceQueueCreateInfo* ptr() { return reinterpret_cast<VkDeviceQueueCreateInfo*>(this); }
    VkDeviceQueueCreateInfo const* ptr() const { return reinterpret_cast<VkDeviceQueueCreateInfo const*>(this); }
};
struct safe_VkDeviceCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceCreateFlags flags;
    uint32_t queueCreateInfoCount;
    safe_VkDeviceQueueCreateInfo* pQueueCreateInfos{};
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames{};
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames{};
    const VkPhysicalDeviceFeatures* pEnabledFeatures{};

    safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& copy_src);
    safe_VkDeviceCreateInfo& operator=(const safe_VkDeviceCreateInfo& copy_src);
    safe_VkDeviceCreateInfo();
    ~safe_VkDeviceCreateInfo();
    void initialize(const VkDeviceCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceCreateInfo* ptr() { return reinterpret_cast<VkDeviceCreateInfo*>(this); }
    VkDeviceCreateInfo const* ptr() const { return reinterpret_cast<VkDeviceCreateInfo const*>(this); }
};
struct safe_VkSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores{};
    const VkPipelineStageFlags* pWaitDstStageMask{};
    uint32_t commandBufferCount;
    VkCommandBuffer* pCommandBuffers{};
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores{};

    safe_VkSubmitInfo(const VkSubmitInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubmitInfo(const safe_VkSubmitInfo& copy_src);
    safe_VkSubmitInfo& operator=(const safe_VkSubmitInfo& copy_src);
    safe_VkSubmitInfo();
    ~safe_VkSubmitInfo();
    void initialize(const VkSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkSubmitInfo* ptr() { return reinterpret_cast<VkSubmitInfo*>(this); }
    VkSubmitInfo const* ptr() const { return reinterpret_cast<VkSubmitInfo const*>(this); }
};
struct safe_VkMappedMemoryRange {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;

    safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& copy_src);
    safe_VkMappedMemoryRange& operator=(const safe_VkMappedMemoryRange& copy_src);
    safe_VkMappedMemoryRange();
    ~safe_VkMappedMemoryRange();
    void initialize(const VkMappedMemoryRange* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMappedMemoryRange* copy_src, PNextCopyState* copy_state = {});
    VkMappedMemoryRange* ptr() { return reinterpret_cast<VkMappedMemoryRange*>(this); }
    VkMappedMemoryRange const* ptr() const { return reinterpret_cast<VkMappedMemoryRange const*>(this); }
};
struct safe_VkMemoryAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize allocationSize;
    uint32_t memoryTypeIndex;

    safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& copy_src);
    safe_VkMemoryAllocateInfo& operator=(const safe_VkMemoryAllocateInfo& copy_src);
    safe_VkMemoryAllocateInfo();
    ~safe_VkMemoryAllocateInfo();
    void initialize(const VkMemoryAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkMemoryAllocateInfo* ptr() { return reinterpret_cast<VkMemoryAllocateInfo*>(this); }
    VkMemoryAllocateInfo const* ptr() const { return reinterpret_cast<VkMemoryAllocateInfo const*>(this); }
};
struct safe_VkSparseBufferMemoryBindInfo {
    VkBuffer buffer;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds{};

    safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& copy_src);
    safe_VkSparseBufferMemoryBindInfo& operator=(const safe_VkSparseBufferMemoryBindInfo& copy_src);
    safe_VkSparseBufferMemoryBindInfo();
    ~safe_VkSparseBufferMemoryBindInfo();
    void initialize(const VkSparseBufferMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSparseBufferMemoryBindInfo* copy_src, PNextCopyState* copy_state = {});
    VkSparseBufferMemoryBindInfo* ptr() { return reinterpret_cast<VkSparseBufferMemoryBindInfo*>(this); }
    VkSparseBufferMemoryBindInfo const* ptr() const { return reinterpret_cast<VkSparseBufferMemoryBindInfo const*>(this); }
};
struct safe_VkSparseImageOpaqueMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds{};

    safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    safe_VkSparseImageOpaqueMemoryBindInfo(const safe_VkSparseImageOpaqueMemoryBindInfo& copy_src);
    safe_VkSparseImageOpaqueMemoryBindInfo& operator=(const safe_VkSparseImageOpaqueMemoryBindInfo& copy_src);
    safe_VkSparseImageOpaqueMemoryBindInfo();
    ~safe_VkSparseImageOpaqueMemoryBindInfo();
    void initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* copy_src, PNextCopyState* copy_state = {});
    VkSparseImageOpaqueMemoryBindInfo* ptr() { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo*>(this); }
    VkSparseImageOpaqueMemoryBindInfo const* ptr() const {
        return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo const*>(this);
    }
};
struct safe_VkSparseImageMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseImageMemoryBind* pBinds{};

    safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& copy_src);
    safe_VkSparseImageMemoryBindInfo& operator=(const safe_VkSparseImageMemoryBindInfo& copy_src);
    safe_VkSparseImageMemoryBindInfo();
    ~safe_VkSparseImageMemoryBindInfo();
    void initialize(const VkSparseImageMemoryBindInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSparseImageMemoryBindInfo* copy_src, PNextCopyState* copy_state = {});
    VkSparseImageMemoryBindInfo* ptr() { return reinterpret_cast<VkSparseImageMemoryBindInfo*>(this); }
    VkSparseImageMemoryBindInfo const* ptr() const { return reinterpret_cast<VkSparseImageMemoryBindInfo const*>(this); }
};
struct safe_VkBindSparseInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores{};
    uint32_t bufferBindCount;
    safe_VkSparseBufferMemoryBindInfo* pBufferBinds{};
    uint32_t imageOpaqueBindCount;
    safe_VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds{};
    uint32_t imageBindCount;
    safe_VkSparseImageMemoryBindInfo* pImageBinds{};
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores{};

    safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindSparseInfo(const safe_VkBindSparseInfo& copy_src);
    safe_VkBindSparseInfo& operator=(const safe_VkBindSparseInfo& copy_src);
    safe_VkBindSparseInfo();
    ~safe_VkBindSparseInfo();
    void initialize(const VkBindSparseInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindSparseInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindSparseInfo* ptr() { return reinterpret_cast<VkBindSparseInfo*>(this); }
    VkBindSparseInfo const* ptr() const { return reinterpret_cast<VkBindSparseInfo const*>(this); }
};
struct safe_VkFenceCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkFenceCreateFlags flags;

    safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& copy_src);
    safe_VkFenceCreateInfo& operator=(const safe_VkFenceCreateInfo& copy_src);
    safe_VkFenceCreateInfo();
    ~safe_VkFenceCreateInfo();
    void initialize(const VkFenceCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFenceCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkFenceCreateInfo* ptr() { return reinterpret_cast<VkFenceCreateInfo*>(this); }
    VkFenceCreateInfo const* ptr() const { return reinterpret_cast<VkFenceCreateInfo const*>(this); }
};
struct safe_VkSemaphoreCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphoreCreateFlags flags;

    safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& copy_src);
    safe_VkSemaphoreCreateInfo& operator=(const safe_VkSemaphoreCreateInfo& copy_src);
    safe_VkSemaphoreCreateInfo();
    ~safe_VkSemaphoreCreateInfo();
    void initialize(const VkSemaphoreCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreCreateInfo* ptr() { return reinterpret_cast<VkSemaphoreCreateInfo*>(this); }
    VkSemaphoreCreateInfo const* ptr() const { return reinterpret_cast<VkSemaphoreCreateInfo const*>(this); }
};
struct safe_VkEventCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkEventCreateFlags flags;

    safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkEventCreateInfo(const safe_VkEventCreateInfo& copy_src);
    safe_VkEventCreateInfo& operator=(const safe_VkEventCreateInfo& copy_src);
    safe_VkEventCreateInfo();
    ~safe_VkEventCreateInfo();
    void initialize(const VkEventCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkEventCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkEventCreateInfo* ptr() { return reinterpret_cast<VkEventCreateInfo*>(this); }
    VkEventCreateInfo const* ptr() const { return reinterpret_cast<VkEventCreateInfo const*>(this); }
};
struct safe_VkQueryPoolCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkQueryPoolCreateFlags flags;
    VkQueryType queryType;
    uint32_t queryCount;
    VkQueryPipelineStatisticFlags pipelineStatistics;

    safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& copy_src);
    safe_VkQueryPoolCreateInfo& operator=(const safe_VkQueryPoolCreateInfo& copy_src);
    safe_VkQueryPoolCreateInfo();
    ~safe_VkQueryPoolCreateInfo();
    void initialize(const VkQueryPoolCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueryPoolCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkQueryPoolCreateInfo* ptr() { return reinterpret_cast<VkQueryPoolCreateInfo*>(this); }
    VkQueryPoolCreateInfo const* ptr() const { return reinterpret_cast<VkQueryPoolCreateInfo const*>(this); }
};
struct safe_VkBufferCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBufferCreateFlags flags;
    VkDeviceSize size;
    VkBufferUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices{};

    safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& copy_src);
    safe_VkBufferCreateInfo& operator=(const safe_VkBufferCreateInfo& copy_src);
    safe_VkBufferCreateInfo();
    ~safe_VkBufferCreateInfo();
    void initialize(const VkBufferCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkBufferCreateInfo* ptr() { return reinterpret_cast<VkBufferCreateInfo*>(this); }
    VkBufferCreateInfo const* ptr() const { return reinterpret_cast<VkBufferCreateInfo const*>(this); }
};
struct safe_VkBufferViewCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBufferViewCreateFlags flags;
    VkBuffer buffer;
    VkFormat format;
    VkDeviceSize offset;
    VkDeviceSize range;

    safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& copy_src);
    safe_VkBufferViewCreateInfo& operator=(const safe_VkBufferViewCreateInfo& copy_src);
    safe_VkBufferViewCreateInfo();
    ~safe_VkBufferViewCreateInfo();
    void initialize(const VkBufferViewCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferViewCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkBufferViewCreateInfo* ptr() { return reinterpret_cast<VkBufferViewCreateInfo*>(this); }
    VkBufferViewCreateInfo const* ptr() const { return reinterpret_cast<VkBufferViewCreateInfo const*>(this); }
};
struct safe_VkImageCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageCreateFlags flags;
    VkImageType imageType;
    VkFormat format;
    VkExtent3D extent;
    uint32_t mipLevels;
    uint32_t arrayLayers;
    VkSampleCountFlagBits samples;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices{};
    VkImageLayout initialLayout;

    safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageCreateInfo(const safe_VkImageCreateInfo& copy_src);
    safe_VkImageCreateInfo& operator=(const safe_VkImageCreateInfo& copy_src);
    safe_VkImageCreateInfo();
    ~safe_VkImageCreateInfo();
    void initialize(const VkImageCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkImageCreateInfo* ptr() { return reinterpret_cast<VkImageCreateInfo*>(this); }
    VkImageCreateInfo const* ptr() const { return reinterpret_cast<VkImageCreateInfo const*>(this); }
};
struct safe_VkImageViewCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageViewCreateFlags flags;
    VkImage image;
    VkImageViewType viewType;
    VkFormat format;
    VkComponentMapping components;
    VkImageSubresourceRange subresourceRange;

    safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& copy_src);
    safe_VkImageViewCreateInfo& operator=(const safe_VkImageViewCreateInfo& copy_src);
    safe_VkImageViewCreateInfo();
    ~safe_VkImageViewCreateInfo();
    void initialize(const VkImageViewCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkImageViewCreateInfo* ptr() { return reinterpret_cast<VkImageViewCreateInfo*>(this); }
    VkImageViewCreateInfo const* ptr() const { return reinterpret_cast<VkImageViewCreateInfo const*>(this); }
};
struct safe_VkShaderModuleCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkShaderModuleCreateFlags flags;
    size_t codeSize;
    const uint32_t* pCode{};

    safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& copy_src);
    safe_VkShaderModuleCreateInfo& operator=(const safe_VkShaderModuleCreateInfo& copy_src);
    safe_VkShaderModuleCreateInfo();
    ~safe_VkShaderModuleCreateInfo();
    void initialize(const VkShaderModuleCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkShaderModuleCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkShaderModuleCreateInfo* ptr() { return reinterpret_cast<VkShaderModuleCreateInfo*>(this); }
    VkShaderModuleCreateInfo const* ptr() const { return reinterpret_cast<VkShaderModuleCreateInfo const*>(this); }

    // Primarily intended for use by GPUAV when replacing shader module code with instrumented code
    template <typename Container>
    void SetCode(const Container& code) {
        delete[] pCode;
        codeSize = static_cast<uint32_t>(code.size() * sizeof(uint32_t));
        pCode = new uint32_t[code.size()];
        std::copy(&code.front(), &code.back() + 1, const_cast<uint32_t*>(pCode));
    }
};
struct safe_VkPipelineCacheCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCacheCreateFlags flags;
    size_t initialDataSize;
    const void* pInitialData{};

    safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& copy_src);
    safe_VkPipelineCacheCreateInfo& operator=(const safe_VkPipelineCacheCreateInfo& copy_src);
    safe_VkPipelineCacheCreateInfo();
    ~safe_VkPipelineCacheCreateInfo();
    void initialize(const VkPipelineCacheCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCacheCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCacheCreateInfo* ptr() { return reinterpret_cast<VkPipelineCacheCreateInfo*>(this); }
    VkPipelineCacheCreateInfo const* ptr() const { return reinterpret_cast<VkPipelineCacheCreateInfo const*>(this); }
};
struct safe_VkSpecializationInfo {
    uint32_t mapEntryCount;
    const VkSpecializationMapEntry* pMapEntries{};
    size_t dataSize;
    const void* pData{};

    safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct, PNextCopyState* copy_state = {});
    safe_VkSpecializationInfo(const safe_VkSpecializationInfo& copy_src);
    safe_VkSpecializationInfo& operator=(const safe_VkSpecializationInfo& copy_src);
    safe_VkSpecializationInfo();
    ~safe_VkSpecializationInfo();
    void initialize(const VkSpecializationInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSpecializationInfo* copy_src, PNextCopyState* copy_state = {});
    VkSpecializationInfo* ptr() { return reinterpret_cast<VkSpecializationInfo*>(this); }
    VkSpecializationInfo const* ptr() const { return reinterpret_cast<VkSpecializationInfo const*>(this); }
};
struct safe_VkPipelineShaderStageCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineShaderStageCreateFlags flags;
    VkShaderStageFlagBits stage;
    VkShaderModule module;
    const char* pName{};
    safe_VkSpecializationInfo* pSpecializationInfo{};

    safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& copy_src);
    safe_VkPipelineShaderStageCreateInfo& operator=(const safe_VkPipelineShaderStageCreateInfo& copy_src);
    safe_VkPipelineShaderStageCreateInfo();
    ~safe_VkPipelineShaderStageCreateInfo();
    void initialize(const VkPipelineShaderStageCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineShaderStageCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineShaderStageCreateInfo* ptr() { return reinterpret_cast<VkPipelineShaderStageCreateInfo*>(this); }
    VkPipelineShaderStageCreateInfo const* ptr() const { return reinterpret_cast<VkPipelineShaderStageCreateInfo const*>(this); }
};
struct safe_VkComputePipelineCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags flags;
    safe_VkPipelineShaderStageCreateInfo stage;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;

    safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& copy_src);
    safe_VkComputePipelineCreateInfo& operator=(const safe_VkComputePipelineCreateInfo& copy_src);
    safe_VkComputePipelineCreateInfo();
    ~safe_VkComputePipelineCreateInfo();
    void initialize(const VkComputePipelineCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkComputePipelineCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkComputePipelineCreateInfo* ptr() { return reinterpret_cast<VkComputePipelineCreateInfo*>(this); }
    VkComputePipelineCreateInfo const* ptr() const { return reinterpret_cast<VkComputePipelineCreateInfo const*>(this); }
};
struct safe_VkPipelineVertexInputStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineVertexInputStateCreateFlags flags;
    uint32_t vertexBindingDescriptionCount;
    const VkVertexInputBindingDescription* pVertexBindingDescriptions{};
    uint32_t vertexAttributeDescriptionCount;
    const VkVertexInputAttributeDescription* pVertexAttributeDescriptions{};

    safe_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineVertexInputStateCreateInfo(const safe_VkPipelineVertexInputStateCreateInfo& copy_src);
    safe_VkPipelineVertexInputStateCreateInfo& operator=(const safe_VkPipelineVertexInputStateCreateInfo& copy_src);
    safe_VkPipelineVertexInputStateCreateInfo();
    ~safe_VkPipelineVertexInputStateCreateInfo();
    void initialize(const VkPipelineVertexInputStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineVertexInputStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineVertexInputStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo*>(this); }
    VkPipelineVertexInputStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineVertexInputStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineInputAssemblyStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineInputAssemblyStateCreateFlags flags;
    VkPrimitiveTopology topology;
    VkBool32 primitiveRestartEnable;

    safe_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineInputAssemblyStateCreateInfo(const safe_VkPipelineInputAssemblyStateCreateInfo& copy_src);
    safe_VkPipelineInputAssemblyStateCreateInfo& operator=(const safe_VkPipelineInputAssemblyStateCreateInfo& copy_src);
    safe_VkPipelineInputAssemblyStateCreateInfo();
    ~safe_VkPipelineInputAssemblyStateCreateInfo();
    void initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineInputAssemblyStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo*>(this); }
    VkPipelineInputAssemblyStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineTessellationStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineTessellationStateCreateFlags flags;
    uint32_t patchControlPoints;

    safe_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineTessellationStateCreateInfo(const safe_VkPipelineTessellationStateCreateInfo& copy_src);
    safe_VkPipelineTessellationStateCreateInfo& operator=(const safe_VkPipelineTessellationStateCreateInfo& copy_src);
    safe_VkPipelineTessellationStateCreateInfo();
    ~safe_VkPipelineTessellationStateCreateInfo();
    void initialize(const VkPipelineTessellationStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineTessellationStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineTessellationStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineTessellationStateCreateInfo*>(this); }
    VkPipelineTessellationStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineTessellationStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineViewportStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineViewportStateCreateFlags flags;
    uint32_t viewportCount;
    const VkViewport* pViewports{};
    uint32_t scissorCount;
    const VkRect2D* pScissors{};

    safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports,
                                           const bool is_dynamic_scissors, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportStateCreateInfo(const safe_VkPipelineViewportStateCreateInfo& copy_src);
    safe_VkPipelineViewportStateCreateInfo& operator=(const safe_VkPipelineViewportStateCreateInfo& copy_src);
    safe_VkPipelineViewportStateCreateInfo();
    ~safe_VkPipelineViewportStateCreateInfo();
    void initialize(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports,
                    const bool is_dynamic_scissors, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineViewportStateCreateInfo*>(this); }
    VkPipelineViewportStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineViewportStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineRasterizationStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineRasterizationStateCreateFlags flags;
    VkBool32 depthClampEnable;
    VkBool32 rasterizerDiscardEnable;
    VkPolygonMode polygonMode;
    VkCullModeFlags cullMode;
    VkFrontFace frontFace;
    VkBool32 depthBiasEnable;
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;
    float lineWidth;

    safe_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineRasterizationStateCreateInfo(const safe_VkPipelineRasterizationStateCreateInfo& copy_src);
    safe_VkPipelineRasterizationStateCreateInfo& operator=(const safe_VkPipelineRasterizationStateCreateInfo& copy_src);
    safe_VkPipelineRasterizationStateCreateInfo();
    ~safe_VkPipelineRasterizationStateCreateInfo();
    void initialize(const VkPipelineRasterizationStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo*>(this); }
    VkPipelineRasterizationStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineMultisampleStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineMultisampleStateCreateFlags flags;
    VkSampleCountFlagBits rasterizationSamples;
    VkBool32 sampleShadingEnable;
    float minSampleShading;
    const VkSampleMask* pSampleMask{};
    VkBool32 alphaToCoverageEnable;
    VkBool32 alphaToOneEnable;

    safe_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineMultisampleStateCreateInfo(const safe_VkPipelineMultisampleStateCreateInfo& copy_src);
    safe_VkPipelineMultisampleStateCreateInfo& operator=(const safe_VkPipelineMultisampleStateCreateInfo& copy_src);
    safe_VkPipelineMultisampleStateCreateInfo();
    ~safe_VkPipelineMultisampleStateCreateInfo();
    void initialize(const VkPipelineMultisampleStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineMultisampleStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineMultisampleStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo*>(this); }
    VkPipelineMultisampleStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineMultisampleStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineDepthStencilStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineDepthStencilStateCreateFlags flags;
    VkBool32 depthTestEnable;
    VkBool32 depthWriteEnable;
    VkCompareOp depthCompareOp;
    VkBool32 depthBoundsTestEnable;
    VkBool32 stencilTestEnable;
    VkStencilOpState front;
    VkStencilOpState back;
    float minDepthBounds;
    float maxDepthBounds;

    safe_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineDepthStencilStateCreateInfo(const safe_VkPipelineDepthStencilStateCreateInfo& copy_src);
    safe_VkPipelineDepthStencilStateCreateInfo& operator=(const safe_VkPipelineDepthStencilStateCreateInfo& copy_src);
    safe_VkPipelineDepthStencilStateCreateInfo();
    ~safe_VkPipelineDepthStencilStateCreateInfo();
    void initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineDepthStencilStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineDepthStencilStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo*>(this); }
    VkPipelineDepthStencilStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineColorBlendStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineColorBlendStateCreateFlags flags;
    VkBool32 logicOpEnable;
    VkLogicOp logicOp;
    uint32_t attachmentCount;
    const VkPipelineColorBlendAttachmentState* pAttachments{};
    float blendConstants[4];

    safe_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkPipelineColorBlendStateCreateInfo(const safe_VkPipelineColorBlendStateCreateInfo& copy_src);
    safe_VkPipelineColorBlendStateCreateInfo& operator=(const safe_VkPipelineColorBlendStateCreateInfo& copy_src);
    safe_VkPipelineColorBlendStateCreateInfo();
    ~safe_VkPipelineColorBlendStateCreateInfo();
    void initialize(const VkPipelineColorBlendStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineColorBlendStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineColorBlendStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo*>(this); }
    VkPipelineColorBlendStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineColorBlendStateCreateInfo const*>(this);
    }
};
struct safe_VkPipelineDynamicStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineDynamicStateCreateFlags flags;
    uint32_t dynamicStateCount;
    const VkDynamicState* pDynamicStates{};

    safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkPipelineDynamicStateCreateInfo(const safe_VkPipelineDynamicStateCreateInfo& copy_src);
    safe_VkPipelineDynamicStateCreateInfo& operator=(const safe_VkPipelineDynamicStateCreateInfo& copy_src);
    safe_VkPipelineDynamicStateCreateInfo();
    ~safe_VkPipelineDynamicStateCreateInfo();
    void initialize(const VkPipelineDynamicStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineDynamicStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineDynamicStateCreateInfo* ptr() { return reinterpret_cast<VkPipelineDynamicStateCreateInfo*>(this); }
    VkPipelineDynamicStateCreateInfo const* ptr() const { return reinterpret_cast<VkPipelineDynamicStateCreateInfo const*>(this); }
};
struct safe_VkGraphicsPipelineCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages{};
    safe_VkPipelineVertexInputStateCreateInfo* pVertexInputState{};
    safe_VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState{};
    safe_VkPipelineTessellationStateCreateInfo* pTessellationState{};
    safe_VkPipelineViewportStateCreateInfo* pViewportState{};
    safe_VkPipelineRasterizationStateCreateInfo* pRasterizationState{};
    safe_VkPipelineMultisampleStateCreateInfo* pMultisampleState{};
    safe_VkPipelineDepthStencilStateCreateInfo* pDepthStencilState{};
    safe_VkPipelineColorBlendStateCreateInfo* pColorBlendState{};
    safe_VkPipelineDynamicStateCreateInfo* pDynamicState{};
    VkPipelineLayout layout;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;

    safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment,
                                      const bool uses_depthstencil_attachment, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& copy_src);
    safe_VkGraphicsPipelineCreateInfo& operator=(const safe_VkGraphicsPipelineCreateInfo& copy_src);
    safe_VkGraphicsPipelineCreateInfo();
    ~safe_VkGraphicsPipelineCreateInfo();
    void initialize(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment,
                    const bool uses_depthstencil_attachment, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGraphicsPipelineCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkGraphicsPipelineCreateInfo* ptr() { return reinterpret_cast<VkGraphicsPipelineCreateInfo*>(this); }
    VkGraphicsPipelineCreateInfo const* ptr() const { return reinterpret_cast<VkGraphicsPipelineCreateInfo const*>(this); }
};
struct safe_VkPipelineLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineLayoutCreateFlags flags;
    uint32_t setLayoutCount;
    VkDescriptorSetLayout* pSetLayouts{};
    uint32_t pushConstantRangeCount;
    const VkPushConstantRange* pPushConstantRanges{};

    safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& copy_src);
    safe_VkPipelineLayoutCreateInfo& operator=(const safe_VkPipelineLayoutCreateInfo& copy_src);
    safe_VkPipelineLayoutCreateInfo();
    ~safe_VkPipelineLayoutCreateInfo();
    void initialize(const VkPipelineLayoutCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineLayoutCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineLayoutCreateInfo* ptr() { return reinterpret_cast<VkPipelineLayoutCreateInfo*>(this); }
    VkPipelineLayoutCreateInfo const* ptr() const { return reinterpret_cast<VkPipelineLayoutCreateInfo const*>(this); }
};
struct safe_VkSamplerCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSamplerCreateFlags flags;
    VkFilter magFilter;
    VkFilter minFilter;
    VkSamplerMipmapMode mipmapMode;
    VkSamplerAddressMode addressModeU;
    VkSamplerAddressMode addressModeV;
    VkSamplerAddressMode addressModeW;
    float mipLodBias;
    VkBool32 anisotropyEnable;
    float maxAnisotropy;
    VkBool32 compareEnable;
    VkCompareOp compareOp;
    float minLod;
    float maxLod;
    VkBorderColor borderColor;
    VkBool32 unnormalizedCoordinates;

    safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& copy_src);
    safe_VkSamplerCreateInfo& operator=(const safe_VkSamplerCreateInfo& copy_src);
    safe_VkSamplerCreateInfo();
    ~safe_VkSamplerCreateInfo();
    void initialize(const VkSamplerCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkSamplerCreateInfo* ptr() { return reinterpret_cast<VkSamplerCreateInfo*>(this); }
    VkSamplerCreateInfo const* ptr() const { return reinterpret_cast<VkSamplerCreateInfo const*>(this); }
};
struct safe_VkCopyDescriptorSet {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorSet srcSet;
    uint32_t srcBinding;
    uint32_t srcArrayElement;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;

    safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& copy_src);
    safe_VkCopyDescriptorSet& operator=(const safe_VkCopyDescriptorSet& copy_src);
    safe_VkCopyDescriptorSet();
    ~safe_VkCopyDescriptorSet();
    void initialize(const VkCopyDescriptorSet* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyDescriptorSet* copy_src, PNextCopyState* copy_state = {});
    VkCopyDescriptorSet* ptr() { return reinterpret_cast<VkCopyDescriptorSet*>(this); }
    VkCopyDescriptorSet const* ptr() const { return reinterpret_cast<VkCopyDescriptorSet const*>(this); }
};
struct safe_VkDescriptorPoolCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorPoolCreateFlags flags;
    uint32_t maxSets;
    uint32_t poolSizeCount;
    const VkDescriptorPoolSize* pPoolSizes{};

    safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& copy_src);
    safe_VkDescriptorPoolCreateInfo& operator=(const safe_VkDescriptorPoolCreateInfo& copy_src);
    safe_VkDescriptorPoolCreateInfo();
    ~safe_VkDescriptorPoolCreateInfo();
    void initialize(const VkDescriptorPoolCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorPoolCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorPoolCreateInfo* ptr() { return reinterpret_cast<VkDescriptorPoolCreateInfo*>(this); }
    VkDescriptorPoolCreateInfo const* ptr() const { return reinterpret_cast<VkDescriptorPoolCreateInfo const*>(this); }
};
struct safe_VkDescriptorSetAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorPool descriptorPool;
    uint32_t descriptorSetCount;
    VkDescriptorSetLayout* pSetLayouts{};

    safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& copy_src);
    safe_VkDescriptorSetAllocateInfo& operator=(const safe_VkDescriptorSetAllocateInfo& copy_src);
    safe_VkDescriptorSetAllocateInfo();
    ~safe_VkDescriptorSetAllocateInfo();
    void initialize(const VkDescriptorSetAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetAllocateInfo* ptr() { return reinterpret_cast<VkDescriptorSetAllocateInfo*>(this); }
    VkDescriptorSetAllocateInfo const* ptr() const { return reinterpret_cast<VkDescriptorSetAllocateInfo const*>(this); }
};
struct safe_VkDescriptorSetLayoutBinding {
    uint32_t binding;
    VkDescriptorType descriptorType;
    uint32_t descriptorCount;
    VkShaderStageFlags stageFlags;
    VkSampler* pImmutableSamplers{};

    safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct, PNextCopyState* copy_state = {});
    safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& copy_src);
    safe_VkDescriptorSetLayoutBinding& operator=(const safe_VkDescriptorSetLayoutBinding& copy_src);
    safe_VkDescriptorSetLayoutBinding();
    ~safe_VkDescriptorSetLayoutBinding();
    void initialize(const VkDescriptorSetLayoutBinding* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetLayoutBinding* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetLayoutBinding* ptr() { return reinterpret_cast<VkDescriptorSetLayoutBinding*>(this); }
    VkDescriptorSetLayoutBinding const* ptr() const { return reinterpret_cast<VkDescriptorSetLayoutBinding const*>(this); }
};
struct safe_VkDescriptorSetLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorSetLayoutCreateFlags flags;
    uint32_t bindingCount;
    safe_VkDescriptorSetLayoutBinding* pBindings{};

    safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& copy_src);
    safe_VkDescriptorSetLayoutCreateInfo& operator=(const safe_VkDescriptorSetLayoutCreateInfo& copy_src);
    safe_VkDescriptorSetLayoutCreateInfo();
    ~safe_VkDescriptorSetLayoutCreateInfo();
    void initialize(const VkDescriptorSetLayoutCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetLayoutCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetLayoutCreateInfo* ptr() { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo*>(this); }
    VkDescriptorSetLayoutCreateInfo const* ptr() const { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo const*>(this); }
};
struct safe_VkWriteDescriptorSet {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    VkDescriptorType descriptorType;
    VkDescriptorImageInfo* pImageInfo{};
    VkDescriptorBufferInfo* pBufferInfo{};
    VkBufferView* pTexelBufferView{};

    safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& copy_src);
    safe_VkWriteDescriptorSet& operator=(const safe_VkWriteDescriptorSet& copy_src);
    safe_VkWriteDescriptorSet();
    ~safe_VkWriteDescriptorSet();
    void initialize(const VkWriteDescriptorSet* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWriteDescriptorSet* copy_src, PNextCopyState* copy_state = {});
    VkWriteDescriptorSet* ptr() { return reinterpret_cast<VkWriteDescriptorSet*>(this); }
    VkWriteDescriptorSet const* ptr() const { return reinterpret_cast<VkWriteDescriptorSet const*>(this); }
};
struct safe_VkFramebufferCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkFramebufferCreateFlags flags;
    VkRenderPass renderPass;
    uint32_t attachmentCount;
    VkImageView* pAttachments{};
    uint32_t width;
    uint32_t height;
    uint32_t layers;

    safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& copy_src);
    safe_VkFramebufferCreateInfo& operator=(const safe_VkFramebufferCreateInfo& copy_src);
    safe_VkFramebufferCreateInfo();
    ~safe_VkFramebufferCreateInfo();
    void initialize(const VkFramebufferCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFramebufferCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkFramebufferCreateInfo* ptr() { return reinterpret_cast<VkFramebufferCreateInfo*>(this); }
    VkFramebufferCreateInfo const* ptr() const { return reinterpret_cast<VkFramebufferCreateInfo const*>(this); }
};
struct safe_VkSubpassDescription {
    VkSubpassDescriptionFlags flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t inputAttachmentCount;
    const VkAttachmentReference* pInputAttachments{};
    uint32_t colorAttachmentCount;
    const VkAttachmentReference* pColorAttachments{};
    const VkAttachmentReference* pResolveAttachments{};
    const VkAttachmentReference* pDepthStencilAttachment{};
    uint32_t preserveAttachmentCount;
    const uint32_t* pPreserveAttachments{};

    safe_VkSubpassDescription(const VkSubpassDescription* in_struct, PNextCopyState* copy_state = {});
    safe_VkSubpassDescription(const safe_VkSubpassDescription& copy_src);
    safe_VkSubpassDescription& operator=(const safe_VkSubpassDescription& copy_src);
    safe_VkSubpassDescription();
    ~safe_VkSubpassDescription();
    void initialize(const VkSubpassDescription* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassDescription* copy_src, PNextCopyState* copy_state = {});
    VkSubpassDescription* ptr() { return reinterpret_cast<VkSubpassDescription*>(this); }
    VkSubpassDescription const* ptr() const { return reinterpret_cast<VkSubpassDescription const*>(this); }
};
struct safe_VkRenderPassCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPassCreateFlags flags;
    uint32_t attachmentCount;
    const VkAttachmentDescription* pAttachments{};
    uint32_t subpassCount;
    safe_VkSubpassDescription* pSubpasses{};
    uint32_t dependencyCount;
    const VkSubpassDependency* pDependencies{};

    safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& copy_src);
    safe_VkRenderPassCreateInfo& operator=(const safe_VkRenderPassCreateInfo& copy_src);
    safe_VkRenderPassCreateInfo();
    ~safe_VkRenderPassCreateInfo();
    void initialize(const VkRenderPassCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassCreateInfo* ptr() { return reinterpret_cast<VkRenderPassCreateInfo*>(this); }
    VkRenderPassCreateInfo const* ptr() const { return reinterpret_cast<VkRenderPassCreateInfo const*>(this); }
};
struct safe_VkCommandPoolCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkCommandPoolCreateFlags flags;
    uint32_t queueFamilyIndex;

    safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& copy_src);
    safe_VkCommandPoolCreateInfo& operator=(const safe_VkCommandPoolCreateInfo& copy_src);
    safe_VkCommandPoolCreateInfo();
    ~safe_VkCommandPoolCreateInfo();
    void initialize(const VkCommandPoolCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandPoolCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandPoolCreateInfo* ptr() { return reinterpret_cast<VkCommandPoolCreateInfo*>(this); }
    VkCommandPoolCreateInfo const* ptr() const { return reinterpret_cast<VkCommandPoolCreateInfo const*>(this); }
};
struct safe_VkCommandBufferAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkCommandPool commandPool;
    VkCommandBufferLevel level;
    uint32_t commandBufferCount;

    safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& copy_src);
    safe_VkCommandBufferAllocateInfo& operator=(const safe_VkCommandBufferAllocateInfo& copy_src);
    safe_VkCommandBufferAllocateInfo();
    ~safe_VkCommandBufferAllocateInfo();
    void initialize(const VkCommandBufferAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferAllocateInfo* ptr() { return reinterpret_cast<VkCommandBufferAllocateInfo*>(this); }
    VkCommandBufferAllocateInfo const* ptr() const { return reinterpret_cast<VkCommandBufferAllocateInfo const*>(this); }
};
struct safe_VkCommandBufferInheritanceInfo {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPass renderPass;
    uint32_t subpass;
    VkFramebuffer framebuffer;
    VkBool32 occlusionQueryEnable;
    VkQueryControlFlags queryFlags;
    VkQueryPipelineStatisticFlags pipelineStatistics;

    safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& copy_src);
    safe_VkCommandBufferInheritanceInfo& operator=(const safe_VkCommandBufferInheritanceInfo& copy_src);
    safe_VkCommandBufferInheritanceInfo();
    ~safe_VkCommandBufferInheritanceInfo();
    void initialize(const VkCommandBufferInheritanceInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferInheritanceInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferInheritanceInfo* ptr() { return reinterpret_cast<VkCommandBufferInheritanceInfo*>(this); }
    VkCommandBufferInheritanceInfo const* ptr() const { return reinterpret_cast<VkCommandBufferInheritanceInfo const*>(this); }
};
struct safe_VkCommandBufferBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    VkCommandBufferUsageFlags flags;
    safe_VkCommandBufferInheritanceInfo* pInheritanceInfo{};

    safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& copy_src);
    safe_VkCommandBufferBeginInfo& operator=(const safe_VkCommandBufferBeginInfo& copy_src);
    safe_VkCommandBufferBeginInfo();
    ~safe_VkCommandBufferBeginInfo();
    void initialize(const VkCommandBufferBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferBeginInfo* ptr() { return reinterpret_cast<VkCommandBufferBeginInfo*>(this); }
    VkCommandBufferBeginInfo const* ptr() const { return reinterpret_cast<VkCommandBufferBeginInfo const*>(this); }
};
struct safe_VkRenderPassBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPass renderPass;
    VkFramebuffer framebuffer;
    VkRect2D renderArea;
    uint32_t clearValueCount;
    const VkClearValue* pClearValues{};

    safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& copy_src);
    safe_VkRenderPassBeginInfo& operator=(const safe_VkRenderPassBeginInfo& copy_src);
    safe_VkRenderPassBeginInfo();
    ~safe_VkRenderPassBeginInfo();
    void initialize(const VkRenderPassBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassBeginInfo* ptr() { return reinterpret_cast<VkRenderPassBeginInfo*>(this); }
    VkRenderPassBeginInfo const* ptr() const { return reinterpret_cast<VkRenderPassBeginInfo const*>(this); }
};
struct safe_VkPhysicalDeviceSubgroupProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t subgroupSize;
    VkShaderStageFlags supportedStages;
    VkSubgroupFeatureFlags supportedOperations;
    VkBool32 quadOperationsInAllStages;

    safe_VkPhysicalDeviceSubgroupProperties(const VkPhysicalDeviceSubgroupProperties* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceSubgroupProperties(const safe_VkPhysicalDeviceSubgroupProperties& copy_src);
    safe_VkPhysicalDeviceSubgroupProperties& operator=(const safe_VkPhysicalDeviceSubgroupProperties& copy_src);
    safe_VkPhysicalDeviceSubgroupProperties();
    ~safe_VkPhysicalDeviceSubgroupProperties();
    void initialize(const VkPhysicalDeviceSubgroupProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSubgroupProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSubgroupProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceSubgroupProperties*>(this); }
    VkPhysicalDeviceSubgroupProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSubgroupProperties const*>(this);
    }
};
struct safe_VkBindBufferMemoryInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer buffer;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;

    safe_VkBindBufferMemoryInfo(const VkBindBufferMemoryInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindBufferMemoryInfo(const safe_VkBindBufferMemoryInfo& copy_src);
    safe_VkBindBufferMemoryInfo& operator=(const safe_VkBindBufferMemoryInfo& copy_src);
    safe_VkBindBufferMemoryInfo();
    ~safe_VkBindBufferMemoryInfo();
    void initialize(const VkBindBufferMemoryInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindBufferMemoryInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindBufferMemoryInfo* ptr() { return reinterpret_cast<VkBindBufferMemoryInfo*>(this); }
    VkBindBufferMemoryInfo const* ptr() const { return reinterpret_cast<VkBindBufferMemoryInfo const*>(this); }
};
struct safe_VkBindImageMemoryInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;

    safe_VkBindImageMemoryInfo(const VkBindImageMemoryInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindImageMemoryInfo(const safe_VkBindImageMemoryInfo& copy_src);
    safe_VkBindImageMemoryInfo& operator=(const safe_VkBindImageMemoryInfo& copy_src);
    safe_VkBindImageMemoryInfo();
    ~safe_VkBindImageMemoryInfo();
    void initialize(const VkBindImageMemoryInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindImageMemoryInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindImageMemoryInfo* ptr() { return reinterpret_cast<VkBindImageMemoryInfo*>(this); }
    VkBindImageMemoryInfo const* ptr() const { return reinterpret_cast<VkBindImageMemoryInfo const*>(this); }
};
struct safe_VkMemoryDedicatedRequirements {
    VkStructureType sType;
    void* pNext{};
    VkBool32 prefersDedicatedAllocation;
    VkBool32 requiresDedicatedAllocation;

    safe_VkMemoryDedicatedRequirements(const VkMemoryDedicatedRequirements* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkMemoryDedicatedRequirements(const safe_VkMemoryDedicatedRequirements& copy_src);
    safe_VkMemoryDedicatedRequirements& operator=(const safe_VkMemoryDedicatedRequirements& copy_src);
    safe_VkMemoryDedicatedRequirements();
    ~safe_VkMemoryDedicatedRequirements();
    void initialize(const VkMemoryDedicatedRequirements* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryDedicatedRequirements* copy_src, PNextCopyState* copy_state = {});
    VkMemoryDedicatedRequirements* ptr() { return reinterpret_cast<VkMemoryDedicatedRequirements*>(this); }
    VkMemoryDedicatedRequirements const* ptr() const { return reinterpret_cast<VkMemoryDedicatedRequirements const*>(this); }
};
struct safe_VkMemoryDedicatedAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    VkBuffer buffer;

    safe_VkMemoryDedicatedAllocateInfo(const VkMemoryDedicatedAllocateInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkMemoryDedicatedAllocateInfo(const safe_VkMemoryDedicatedAllocateInfo& copy_src);
    safe_VkMemoryDedicatedAllocateInfo& operator=(const safe_VkMemoryDedicatedAllocateInfo& copy_src);
    safe_VkMemoryDedicatedAllocateInfo();
    ~safe_VkMemoryDedicatedAllocateInfo();
    void initialize(const VkMemoryDedicatedAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryDedicatedAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkMemoryDedicatedAllocateInfo* ptr() { return reinterpret_cast<VkMemoryDedicatedAllocateInfo*>(this); }
    VkMemoryDedicatedAllocateInfo const* ptr() const { return reinterpret_cast<VkMemoryDedicatedAllocateInfo const*>(this); }
};
struct safe_VkMemoryAllocateFlagsInfo {
    VkStructureType sType;
    const void* pNext{};
    VkMemoryAllocateFlags flags;
    uint32_t deviceMask;

    safe_VkMemoryAllocateFlagsInfo(const VkMemoryAllocateFlagsInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkMemoryAllocateFlagsInfo(const safe_VkMemoryAllocateFlagsInfo& copy_src);
    safe_VkMemoryAllocateFlagsInfo& operator=(const safe_VkMemoryAllocateFlagsInfo& copy_src);
    safe_VkMemoryAllocateFlagsInfo();
    ~safe_VkMemoryAllocateFlagsInfo();
    void initialize(const VkMemoryAllocateFlagsInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryAllocateFlagsInfo* copy_src, PNextCopyState* copy_state = {});
    VkMemoryAllocateFlagsInfo* ptr() { return reinterpret_cast<VkMemoryAllocateFlagsInfo*>(this); }
    VkMemoryAllocateFlagsInfo const* ptr() const { return reinterpret_cast<VkMemoryAllocateFlagsInfo const*>(this); }
};
struct safe_VkDeviceGroupRenderPassBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t deviceMask;
    uint32_t deviceRenderAreaCount;
    const VkRect2D* pDeviceRenderAreas{};

    safe_VkDeviceGroupRenderPassBeginInfo(const VkDeviceGroupRenderPassBeginInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkDeviceGroupRenderPassBeginInfo(const safe_VkDeviceGroupRenderPassBeginInfo& copy_src);
    safe_VkDeviceGroupRenderPassBeginInfo& operator=(const safe_VkDeviceGroupRenderPassBeginInfo& copy_src);
    safe_VkDeviceGroupRenderPassBeginInfo();
    ~safe_VkDeviceGroupRenderPassBeginInfo();
    void initialize(const VkDeviceGroupRenderPassBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupRenderPassBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupRenderPassBeginInfo* ptr() { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfo*>(this); }
    VkDeviceGroupRenderPassBeginInfo const* ptr() const { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfo const*>(this); }
};
struct safe_VkDeviceGroupCommandBufferBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t deviceMask;

    safe_VkDeviceGroupCommandBufferBeginInfo(const VkDeviceGroupCommandBufferBeginInfo* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkDeviceGroupCommandBufferBeginInfo(const safe_VkDeviceGroupCommandBufferBeginInfo& copy_src);
    safe_VkDeviceGroupCommandBufferBeginInfo& operator=(const safe_VkDeviceGroupCommandBufferBeginInfo& copy_src);
    safe_VkDeviceGroupCommandBufferBeginInfo();
    ~safe_VkDeviceGroupCommandBufferBeginInfo();
    void initialize(const VkDeviceGroupCommandBufferBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupCommandBufferBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupCommandBufferBeginInfo* ptr() { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo*>(this); }
    VkDeviceGroupCommandBufferBeginInfo const* ptr() const {
        return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo const*>(this);
    }
};
struct safe_VkDeviceGroupSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreCount;
    const uint32_t* pWaitSemaphoreDeviceIndices{};
    uint32_t commandBufferCount;
    const uint32_t* pCommandBufferDeviceMasks{};
    uint32_t signalSemaphoreCount;
    const uint32_t* pSignalSemaphoreDeviceIndices{};

    safe_VkDeviceGroupSubmitInfo(const VkDeviceGroupSubmitInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceGroupSubmitInfo(const safe_VkDeviceGroupSubmitInfo& copy_src);
    safe_VkDeviceGroupSubmitInfo& operator=(const safe_VkDeviceGroupSubmitInfo& copy_src);
    safe_VkDeviceGroupSubmitInfo();
    ~safe_VkDeviceGroupSubmitInfo();
    void initialize(const VkDeviceGroupSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupSubmitInfo* ptr() { return reinterpret_cast<VkDeviceGroupSubmitInfo*>(this); }
    VkDeviceGroupSubmitInfo const* ptr() const { return reinterpret_cast<VkDeviceGroupSubmitInfo const*>(this); }
};
struct safe_VkDeviceGroupBindSparseInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t resourceDeviceIndex;
    uint32_t memoryDeviceIndex;

    safe_VkDeviceGroupBindSparseInfo(const VkDeviceGroupBindSparseInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkDeviceGroupBindSparseInfo(const safe_VkDeviceGroupBindSparseInfo& copy_src);
    safe_VkDeviceGroupBindSparseInfo& operator=(const safe_VkDeviceGroupBindSparseInfo& copy_src);
    safe_VkDeviceGroupBindSparseInfo();
    ~safe_VkDeviceGroupBindSparseInfo();
    void initialize(const VkDeviceGroupBindSparseInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupBindSparseInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupBindSparseInfo* ptr() { return reinterpret_cast<VkDeviceGroupBindSparseInfo*>(this); }
    VkDeviceGroupBindSparseInfo const* ptr() const { return reinterpret_cast<VkDeviceGroupBindSparseInfo const*>(this); }
};
struct safe_VkBindBufferMemoryDeviceGroupInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices{};

    safe_VkBindBufferMemoryDeviceGroupInfo(const VkBindBufferMemoryDeviceGroupInfo* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkBindBufferMemoryDeviceGroupInfo(const safe_VkBindBufferMemoryDeviceGroupInfo& copy_src);
    safe_VkBindBufferMemoryDeviceGroupInfo& operator=(const safe_VkBindBufferMemoryDeviceGroupInfo& copy_src);
    safe_VkBindBufferMemoryDeviceGroupInfo();
    ~safe_VkBindBufferMemoryDeviceGroupInfo();
    void initialize(const VkBindBufferMemoryDeviceGroupInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindBufferMemoryDeviceGroupInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindBufferMemoryDeviceGroupInfo* ptr() { return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo*>(this); }
    VkBindBufferMemoryDeviceGroupInfo const* ptr() const {
        return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo const*>(this);
    }
};
struct safe_VkBindImageMemoryDeviceGroupInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices{};
    uint32_t splitInstanceBindRegionCount;
    const VkRect2D* pSplitInstanceBindRegions{};

    safe_VkBindImageMemoryDeviceGroupInfo(const VkBindImageMemoryDeviceGroupInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkBindImageMemoryDeviceGroupInfo(const safe_VkBindImageMemoryDeviceGroupInfo& copy_src);
    safe_VkBindImageMemoryDeviceGroupInfo& operator=(const safe_VkBindImageMemoryDeviceGroupInfo& copy_src);
    safe_VkBindImageMemoryDeviceGroupInfo();
    ~safe_VkBindImageMemoryDeviceGroupInfo();
    void initialize(const VkBindImageMemoryDeviceGroupInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindImageMemoryDeviceGroupInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindImageMemoryDeviceGroupInfo* ptr() { return reinterpret_cast<VkBindImageMemoryDeviceGroupInfo*>(this); }
    VkBindImageMemoryDeviceGroupInfo const* ptr() const { return reinterpret_cast<VkBindImageMemoryDeviceGroupInfo const*>(this); }
};
struct safe_VkPhysicalDeviceGroupProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t physicalDeviceCount;
    VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
    VkBool32 subsetAllocation;

    safe_VkPhysicalDeviceGroupProperties(const VkPhysicalDeviceGroupProperties* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkPhysicalDeviceGroupProperties(const safe_VkPhysicalDeviceGroupProperties& copy_src);
    safe_VkPhysicalDeviceGroupProperties& operator=(const safe_VkPhysicalDeviceGroupProperties& copy_src);
    safe_VkPhysicalDeviceGroupProperties();
    ~safe_VkPhysicalDeviceGroupProperties();
    void initialize(const VkPhysicalDeviceGroupProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceGroupProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceGroupProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceGroupProperties*>(this); }
    VkPhysicalDeviceGroupProperties const* ptr() const { return reinterpret_cast<VkPhysicalDeviceGroupProperties const*>(this); }
};
struct safe_VkDeviceGroupDeviceCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t physicalDeviceCount;
    VkPhysicalDevice* pPhysicalDevices{};

    safe_VkDeviceGroupDeviceCreateInfo(const VkDeviceGroupDeviceCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkDeviceGroupDeviceCreateInfo(const safe_VkDeviceGroupDeviceCreateInfo& copy_src);
    safe_VkDeviceGroupDeviceCreateInfo& operator=(const safe_VkDeviceGroupDeviceCreateInfo& copy_src);
    safe_VkDeviceGroupDeviceCreateInfo();
    ~safe_VkDeviceGroupDeviceCreateInfo();
    void initialize(const VkDeviceGroupDeviceCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupDeviceCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupDeviceCreateInfo* ptr() { return reinterpret_cast<VkDeviceGroupDeviceCreateInfo*>(this); }
    VkDeviceGroupDeviceCreateInfo const* ptr() const { return reinterpret_cast<VkDeviceGroupDeviceCreateInfo const*>(this); }
};
struct safe_VkBufferMemoryRequirementsInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer buffer;

    safe_VkBufferMemoryRequirementsInfo2(const VkBufferMemoryRequirementsInfo2* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkBufferMemoryRequirementsInfo2(const safe_VkBufferMemoryRequirementsInfo2& copy_src);
    safe_VkBufferMemoryRequirementsInfo2& operator=(const safe_VkBufferMemoryRequirementsInfo2& copy_src);
    safe_VkBufferMemoryRequirementsInfo2();
    ~safe_VkBufferMemoryRequirementsInfo2();
    void initialize(const VkBufferMemoryRequirementsInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferMemoryRequirementsInfo2* copy_src, PNextCopyState* copy_state = {});
    VkBufferMemoryRequirementsInfo2* ptr() { return reinterpret_cast<VkBufferMemoryRequirementsInfo2*>(this); }
    VkBufferMemoryRequirementsInfo2 const* ptr() const { return reinterpret_cast<VkBufferMemoryRequirementsInfo2 const*>(this); }
};
struct safe_VkImageMemoryRequirementsInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;

    safe_VkImageMemoryRequirementsInfo2(const VkImageMemoryRequirementsInfo2* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkImageMemoryRequirementsInfo2(const safe_VkImageMemoryRequirementsInfo2& copy_src);
    safe_VkImageMemoryRequirementsInfo2& operator=(const safe_VkImageMemoryRequirementsInfo2& copy_src);
    safe_VkImageMemoryRequirementsInfo2();
    ~safe_VkImageMemoryRequirementsInfo2();
    void initialize(const VkImageMemoryRequirementsInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageMemoryRequirementsInfo2* copy_src, PNextCopyState* copy_state = {});
    VkImageMemoryRequirementsInfo2* ptr() { return reinterpret_cast<VkImageMemoryRequirementsInfo2*>(this); }
    VkImageMemoryRequirementsInfo2 const* ptr() const { return reinterpret_cast<VkImageMemoryRequirementsInfo2 const*>(this); }
};
struct safe_VkImageSparseMemoryRequirementsInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;

    safe_VkImageSparseMemoryRequirementsInfo2(const VkImageSparseMemoryRequirementsInfo2* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageSparseMemoryRequirementsInfo2(const safe_VkImageSparseMemoryRequirementsInfo2& copy_src);
    safe_VkImageSparseMemoryRequirementsInfo2& operator=(const safe_VkImageSparseMemoryRequirementsInfo2& copy_src);
    safe_VkImageSparseMemoryRequirementsInfo2();
    ~safe_VkImageSparseMemoryRequirementsInfo2();
    void initialize(const VkImageSparseMemoryRequirementsInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageSparseMemoryRequirementsInfo2* copy_src, PNextCopyState* copy_state = {});
    VkImageSparseMemoryRequirementsInfo2* ptr() { return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2*>(this); }
    VkImageSparseMemoryRequirementsInfo2 const* ptr() const {
        return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2 const*>(this);
    }
};
struct safe_VkMemoryRequirements2 {
    VkStructureType sType;
    void* pNext{};
    VkMemoryRequirements memoryRequirements;

    safe_VkMemoryRequirements2(const VkMemoryRequirements2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryRequirements2(const safe_VkMemoryRequirements2& copy_src);
    safe_VkMemoryRequirements2& operator=(const safe_VkMemoryRequirements2& copy_src);
    safe_VkMemoryRequirements2();
    ~safe_VkMemoryRequirements2();
    void initialize(const VkMemoryRequirements2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryRequirements2* copy_src, PNextCopyState* copy_state = {});
    VkMemoryRequirements2* ptr() { return reinterpret_cast<VkMemoryRequirements2*>(this); }
    VkMemoryRequirements2 const* ptr() const { return reinterpret_cast<VkMemoryRequirements2 const*>(this); }
};
struct safe_VkSparseImageMemoryRequirements2 {
    VkStructureType sType;
    void* pNext{};
    VkSparseImageMemoryRequirements memoryRequirements;

    safe_VkSparseImageMemoryRequirements2(const VkSparseImageMemoryRequirements2* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkSparseImageMemoryRequirements2(const safe_VkSparseImageMemoryRequirements2& copy_src);
    safe_VkSparseImageMemoryRequirements2& operator=(const safe_VkSparseImageMemoryRequirements2& copy_src);
    safe_VkSparseImageMemoryRequirements2();
    ~safe_VkSparseImageMemoryRequirements2();
    void initialize(const VkSparseImageMemoryRequirements2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSparseImageMemoryRequirements2* copy_src, PNextCopyState* copy_state = {});
    VkSparseImageMemoryRequirements2* ptr() { return reinterpret_cast<VkSparseImageMemoryRequirements2*>(this); }
    VkSparseImageMemoryRequirements2 const* ptr() const { return reinterpret_cast<VkSparseImageMemoryRequirements2 const*>(this); }
};
struct safe_VkPhysicalDeviceFeatures2 {
    VkStructureType sType;
    void* pNext{};
    VkPhysicalDeviceFeatures features;

    safe_VkPhysicalDeviceFeatures2(const VkPhysicalDeviceFeatures2* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkPhysicalDeviceFeatures2(const safe_VkPhysicalDeviceFeatures2& copy_src);
    safe_VkPhysicalDeviceFeatures2& operator=(const safe_VkPhysicalDeviceFeatures2& copy_src);
    safe_VkPhysicalDeviceFeatures2();
    ~safe_VkPhysicalDeviceFeatures2();
    void initialize(const VkPhysicalDeviceFeatures2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFeatures2* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFeatures2* ptr() { return reinterpret_cast<VkPhysicalDeviceFeatures2*>(this); }
    VkPhysicalDeviceFeatures2 const* ptr() const { return reinterpret_cast<VkPhysicalDeviceFeatures2 const*>(this); }
};
struct safe_VkPhysicalDeviceProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkPhysicalDeviceProperties properties;

    safe_VkPhysicalDeviceProperties2(const VkPhysicalDeviceProperties2* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkPhysicalDeviceProperties2(const safe_VkPhysicalDeviceProperties2& copy_src);
    safe_VkPhysicalDeviceProperties2& operator=(const safe_VkPhysicalDeviceProperties2& copy_src);
    safe_VkPhysicalDeviceProperties2();
    ~safe_VkPhysicalDeviceProperties2();
    void initialize(const VkPhysicalDeviceProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceProperties2* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceProperties2* ptr() { return reinterpret_cast<VkPhysicalDeviceProperties2*>(this); }
    VkPhysicalDeviceProperties2 const* ptr() const { return reinterpret_cast<VkPhysicalDeviceProperties2 const*>(this); }
};
struct safe_VkFormatProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkFormatProperties formatProperties;

    safe_VkFormatProperties2(const VkFormatProperties2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFormatProperties2(const safe_VkFormatProperties2& copy_src);
    safe_VkFormatProperties2& operator=(const safe_VkFormatProperties2& copy_src);
    safe_VkFormatProperties2();
    ~safe_VkFormatProperties2();
    void initialize(const VkFormatProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFormatProperties2* copy_src, PNextCopyState* copy_state = {});
    VkFormatProperties2* ptr() { return reinterpret_cast<VkFormatProperties2*>(this); }
    VkFormatProperties2 const* ptr() const { return reinterpret_cast<VkFormatProperties2 const*>(this); }
};
struct safe_VkImageFormatProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkImageFormatProperties imageFormatProperties;

    safe_VkImageFormatProperties2(const VkImageFormatProperties2* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkImageFormatProperties2(const safe_VkImageFormatProperties2& copy_src);
    safe_VkImageFormatProperties2& operator=(const safe_VkImageFormatProperties2& copy_src);
    safe_VkImageFormatProperties2();
    ~safe_VkImageFormatProperties2();
    void initialize(const VkImageFormatProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageFormatProperties2* copy_src, PNextCopyState* copy_state = {});
    VkImageFormatProperties2* ptr() { return reinterpret_cast<VkImageFormatProperties2*>(this); }
    VkImageFormatProperties2 const* ptr() const { return reinterpret_cast<VkImageFormatProperties2 const*>(this); }
};
struct safe_VkPhysicalDeviceImageFormatInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;

    safe_VkPhysicalDeviceImageFormatInfo2(const VkPhysicalDeviceImageFormatInfo2* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkPhysicalDeviceImageFormatInfo2(const safe_VkPhysicalDeviceImageFormatInfo2& copy_src);
    safe_VkPhysicalDeviceImageFormatInfo2& operator=(const safe_VkPhysicalDeviceImageFormatInfo2& copy_src);
    safe_VkPhysicalDeviceImageFormatInfo2();
    ~safe_VkPhysicalDeviceImageFormatInfo2();
    void initialize(const VkPhysicalDeviceImageFormatInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageFormatInfo2* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageFormatInfo2* ptr() { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2*>(this); }
    VkPhysicalDeviceImageFormatInfo2 const* ptr() const { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2 const*>(this); }
};
struct safe_VkQueueFamilyProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkQueueFamilyProperties queueFamilyProperties;

    safe_VkQueueFamilyProperties2(const VkQueueFamilyProperties2* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkQueueFamilyProperties2(const safe_VkQueueFamilyProperties2& copy_src);
    safe_VkQueueFamilyProperties2& operator=(const safe_VkQueueFamilyProperties2& copy_src);
    safe_VkQueueFamilyProperties2();
    ~safe_VkQueueFamilyProperties2();
    void initialize(const VkQueueFamilyProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyProperties2* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyProperties2* ptr() { return reinterpret_cast<VkQueueFamilyProperties2*>(this); }
    VkQueueFamilyProperties2 const* ptr() const { return reinterpret_cast<VkQueueFamilyProperties2 const*>(this); }
};
struct safe_VkPhysicalDeviceMemoryProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkPhysicalDeviceMemoryProperties memoryProperties;

    safe_VkPhysicalDeviceMemoryProperties2(const VkPhysicalDeviceMemoryProperties2* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPhysicalDeviceMemoryProperties2(const safe_VkPhysicalDeviceMemoryProperties2& copy_src);
    safe_VkPhysicalDeviceMemoryProperties2& operator=(const safe_VkPhysicalDeviceMemoryProperties2& copy_src);
    safe_VkPhysicalDeviceMemoryProperties2();
    ~safe_VkPhysicalDeviceMemoryProperties2();
    void initialize(const VkPhysicalDeviceMemoryProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMemoryProperties2* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMemoryProperties2* ptr() { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2*>(this); }
    VkPhysicalDeviceMemoryProperties2 const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMemoryProperties2 const*>(this);
    }
};
struct safe_VkSparseImageFormatProperties2 {
    VkStructureType sType;
    void* pNext{};
    VkSparseImageFormatProperties properties;

    safe_VkSparseImageFormatProperties2(const VkSparseImageFormatProperties2* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkSparseImageFormatProperties2(const safe_VkSparseImageFormatProperties2& copy_src);
    safe_VkSparseImageFormatProperties2& operator=(const safe_VkSparseImageFormatProperties2& copy_src);
    safe_VkSparseImageFormatProperties2();
    ~safe_VkSparseImageFormatProperties2();
    void initialize(const VkSparseImageFormatProperties2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSparseImageFormatProperties2* copy_src, PNextCopyState* copy_state = {});
    VkSparseImageFormatProperties2* ptr() { return reinterpret_cast<VkSparseImageFormatProperties2*>(this); }
    VkSparseImageFormatProperties2 const* ptr() const { return reinterpret_cast<VkSparseImageFormatProperties2 const*>(this); }
};
struct safe_VkPhysicalDeviceSparseImageFormatInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkFormat format;
    VkImageType type;
    VkSampleCountFlagBits samples;
    VkImageUsageFlags usage;
    VkImageTiling tiling;

    safe_VkPhysicalDeviceSparseImageFormatInfo2(const VkPhysicalDeviceSparseImageFormatInfo2* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSparseImageFormatInfo2(const safe_VkPhysicalDeviceSparseImageFormatInfo2& copy_src);
    safe_VkPhysicalDeviceSparseImageFormatInfo2& operator=(const safe_VkPhysicalDeviceSparseImageFormatInfo2& copy_src);
    safe_VkPhysicalDeviceSparseImageFormatInfo2();
    ~safe_VkPhysicalDeviceSparseImageFormatInfo2();
    void initialize(const VkPhysicalDeviceSparseImageFormatInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSparseImageFormatInfo2* ptr() { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2*>(this); }
    VkPhysicalDeviceSparseImageFormatInfo2 const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2 const*>(this);
    }
};
struct safe_VkPhysicalDevicePointClippingProperties {
    VkStructureType sType;
    void* pNext{};
    VkPointClippingBehavior pointClippingBehavior;

    safe_VkPhysicalDevicePointClippingProperties(const VkPhysicalDevicePointClippingProperties* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePointClippingProperties(const safe_VkPhysicalDevicePointClippingProperties& copy_src);
    safe_VkPhysicalDevicePointClippingProperties& operator=(const safe_VkPhysicalDevicePointClippingProperties& copy_src);
    safe_VkPhysicalDevicePointClippingProperties();
    ~safe_VkPhysicalDevicePointClippingProperties();
    void initialize(const VkPhysicalDevicePointClippingProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePointClippingProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePointClippingProperties* ptr() { return reinterpret_cast<VkPhysicalDevicePointClippingProperties*>(this); }
    VkPhysicalDevicePointClippingProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePointClippingProperties const*>(this);
    }
};
struct safe_VkRenderPassInputAttachmentAspectCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t aspectReferenceCount;
    const VkInputAttachmentAspectReference* pAspectReferences{};

    safe_VkRenderPassInputAttachmentAspectCreateInfo(const VkRenderPassInputAttachmentAspectCreateInfo* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassInputAttachmentAspectCreateInfo(const safe_VkRenderPassInputAttachmentAspectCreateInfo& copy_src);
    safe_VkRenderPassInputAttachmentAspectCreateInfo& operator=(const safe_VkRenderPassInputAttachmentAspectCreateInfo& copy_src);
    safe_VkRenderPassInputAttachmentAspectCreateInfo();
    ~safe_VkRenderPassInputAttachmentAspectCreateInfo();
    void initialize(const VkRenderPassInputAttachmentAspectCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassInputAttachmentAspectCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassInputAttachmentAspectCreateInfo* ptr() {
        return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo*>(this);
    }
    VkRenderPassInputAttachmentAspectCreateInfo const* ptr() const {
        return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo const*>(this);
    }
};
struct safe_VkImageViewUsageCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageUsageFlags usage;

    safe_VkImageViewUsageCreateInfo(const VkImageViewUsageCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkImageViewUsageCreateInfo(const safe_VkImageViewUsageCreateInfo& copy_src);
    safe_VkImageViewUsageCreateInfo& operator=(const safe_VkImageViewUsageCreateInfo& copy_src);
    safe_VkImageViewUsageCreateInfo();
    ~safe_VkImageViewUsageCreateInfo();
    void initialize(const VkImageViewUsageCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewUsageCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkImageViewUsageCreateInfo* ptr() { return reinterpret_cast<VkImageViewUsageCreateInfo*>(this); }
    VkImageViewUsageCreateInfo const* ptr() const { return reinterpret_cast<VkImageViewUsageCreateInfo const*>(this); }
};
struct safe_VkPipelineTessellationDomainOriginStateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkTessellationDomainOrigin domainOrigin;

    safe_VkPipelineTessellationDomainOriginStateCreateInfo(const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineTessellationDomainOriginStateCreateInfo(const safe_VkPipelineTessellationDomainOriginStateCreateInfo& copy_src);
    safe_VkPipelineTessellationDomainOriginStateCreateInfo& operator=(
        const safe_VkPipelineTessellationDomainOriginStateCreateInfo& copy_src);
    safe_VkPipelineTessellationDomainOriginStateCreateInfo();
    ~safe_VkPipelineTessellationDomainOriginStateCreateInfo();
    void initialize(const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineTessellationDomainOriginStateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineTessellationDomainOriginStateCreateInfo* ptr() {
        return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo*>(this);
    }
    VkPipelineTessellationDomainOriginStateCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo const*>(this);
    }
};
struct safe_VkRenderPassMultiviewCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t subpassCount;
    const uint32_t* pViewMasks{};
    uint32_t dependencyCount;
    const int32_t* pViewOffsets{};
    uint32_t correlationMaskCount;
    const uint32_t* pCorrelationMasks{};

    safe_VkRenderPassMultiviewCreateInfo(const VkRenderPassMultiviewCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkRenderPassMultiviewCreateInfo(const safe_VkRenderPassMultiviewCreateInfo& copy_src);
    safe_VkRenderPassMultiviewCreateInfo& operator=(const safe_VkRenderPassMultiviewCreateInfo& copy_src);
    safe_VkRenderPassMultiviewCreateInfo();
    ~safe_VkRenderPassMultiviewCreateInfo();
    void initialize(const VkRenderPassMultiviewCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassMultiviewCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassMultiviewCreateInfo* ptr() { return reinterpret_cast<VkRenderPassMultiviewCreateInfo*>(this); }
    VkRenderPassMultiviewCreateInfo const* ptr() const { return reinterpret_cast<VkRenderPassMultiviewCreateInfo const*>(this); }
};
struct safe_VkPhysicalDeviceMultiviewProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxMultiviewViewCount;
    uint32_t maxMultiviewInstanceIndex;

    safe_VkPhysicalDeviceMultiviewProperties(const VkPhysicalDeviceMultiviewProperties* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkPhysicalDeviceMultiviewProperties(const safe_VkPhysicalDeviceMultiviewProperties& copy_src);
    safe_VkPhysicalDeviceMultiviewProperties& operator=(const safe_VkPhysicalDeviceMultiviewProperties& copy_src);
    safe_VkPhysicalDeviceMultiviewProperties();
    ~safe_VkPhysicalDeviceMultiviewProperties();
    void initialize(const VkPhysicalDeviceMultiviewProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMultiviewProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMultiviewProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewProperties*>(this); }
    VkPhysicalDeviceMultiviewProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMultiviewProperties const*>(this);
    }
};
struct safe_VkPhysicalDeviceProtectedMemoryProperties {
    VkStructureType sType;
    void* pNext{};
    VkBool32 protectedNoFault;

    safe_VkPhysicalDeviceProtectedMemoryProperties(const VkPhysicalDeviceProtectedMemoryProperties* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceProtectedMemoryProperties(const safe_VkPhysicalDeviceProtectedMemoryProperties& copy_src);
    safe_VkPhysicalDeviceProtectedMemoryProperties& operator=(const safe_VkPhysicalDeviceProtectedMemoryProperties& copy_src);
    safe_VkPhysicalDeviceProtectedMemoryProperties();
    ~safe_VkPhysicalDeviceProtectedMemoryProperties();
    void initialize(const VkPhysicalDeviceProtectedMemoryProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceProtectedMemoryProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceProtectedMemoryProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties*>(this); }
    VkPhysicalDeviceProtectedMemoryProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties const*>(this);
    }
};
struct safe_VkDeviceQueueInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceQueueCreateFlags flags;
    uint32_t queueFamilyIndex;
    uint32_t queueIndex;

    safe_VkDeviceQueueInfo2(const VkDeviceQueueInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceQueueInfo2(const safe_VkDeviceQueueInfo2& copy_src);
    safe_VkDeviceQueueInfo2& operator=(const safe_VkDeviceQueueInfo2& copy_src);
    safe_VkDeviceQueueInfo2();
    ~safe_VkDeviceQueueInfo2();
    void initialize(const VkDeviceQueueInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceQueueInfo2* copy_src, PNextCopyState* copy_state = {});
    VkDeviceQueueInfo2* ptr() { return reinterpret_cast<VkDeviceQueueInfo2*>(this); }
    VkDeviceQueueInfo2 const* ptr() const { return reinterpret_cast<VkDeviceQueueInfo2 const*>(this); }
};
struct safe_VkProtectedSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 protectedSubmit;

    safe_VkProtectedSubmitInfo(const VkProtectedSubmitInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkProtectedSubmitInfo(const safe_VkProtectedSubmitInfo& copy_src);
    safe_VkProtectedSubmitInfo& operator=(const safe_VkProtectedSubmitInfo& copy_src);
    safe_VkProtectedSubmitInfo();
    ~safe_VkProtectedSubmitInfo();
    void initialize(const VkProtectedSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkProtectedSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkProtectedSubmitInfo* ptr() { return reinterpret_cast<VkProtectedSubmitInfo*>(this); }
    VkProtectedSubmitInfo const* ptr() const { return reinterpret_cast<VkProtectedSubmitInfo const*>(this); }
};
struct safe_VkSamplerYcbcrConversionCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkFormat format;
    VkSamplerYcbcrModelConversion ycbcrModel;
    VkSamplerYcbcrRange ycbcrRange;
    VkComponentMapping components;
    VkChromaLocation xChromaOffset;
    VkChromaLocation yChromaOffset;
    VkFilter chromaFilter;
    VkBool32 forceExplicitReconstruction;

    safe_VkSamplerYcbcrConversionCreateInfo(const VkSamplerYcbcrConversionCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkSamplerYcbcrConversionCreateInfo(const safe_VkSamplerYcbcrConversionCreateInfo& copy_src);
    safe_VkSamplerYcbcrConversionCreateInfo& operator=(const safe_VkSamplerYcbcrConversionCreateInfo& copy_src);
    safe_VkSamplerYcbcrConversionCreateInfo();
    ~safe_VkSamplerYcbcrConversionCreateInfo();
    void initialize(const VkSamplerYcbcrConversionCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerYcbcrConversionCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkSamplerYcbcrConversionCreateInfo* ptr() { return reinterpret_cast<VkSamplerYcbcrConversionCreateInfo*>(this); }
    VkSamplerYcbcrConversionCreateInfo const* ptr() const {
        return reinterpret_cast<VkSamplerYcbcrConversionCreateInfo const*>(this);
    }
};
struct safe_VkSamplerYcbcrConversionInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSamplerYcbcrConversion conversion;

    safe_VkSamplerYcbcrConversionInfo(const VkSamplerYcbcrConversionInfo* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkSamplerYcbcrConversionInfo(const safe_VkSamplerYcbcrConversionInfo& copy_src);
    safe_VkSamplerYcbcrConversionInfo& operator=(const safe_VkSamplerYcbcrConversionInfo& copy_src);
    safe_VkSamplerYcbcrConversionInfo();
    ~safe_VkSamplerYcbcrConversionInfo();
    void initialize(const VkSamplerYcbcrConversionInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerYcbcrConversionInfo* copy_src, PNextCopyState* copy_state = {});
    VkSamplerYcbcrConversionInfo* ptr() { return reinterpret_cast<VkSamplerYcbcrConversionInfo*>(this); }
    VkSamplerYcbcrConversionInfo const* ptr() const { return reinterpret_cast<VkSamplerYcbcrConversionInfo const*>(this); }
};
struct safe_VkBindImagePlaneMemoryInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageAspectFlagBits planeAspect;

    safe_VkBindImagePlaneMemoryInfo(const VkBindImagePlaneMemoryInfo* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkBindImagePlaneMemoryInfo(const safe_VkBindImagePlaneMemoryInfo& copy_src);
    safe_VkBindImagePlaneMemoryInfo& operator=(const safe_VkBindImagePlaneMemoryInfo& copy_src);
    safe_VkBindImagePlaneMemoryInfo();
    ~safe_VkBindImagePlaneMemoryInfo();
    void initialize(const VkBindImagePlaneMemoryInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindImagePlaneMemoryInfo* copy_src, PNextCopyState* copy_state = {});
    VkBindImagePlaneMemoryInfo* ptr() { return reinterpret_cast<VkBindImagePlaneMemoryInfo*>(this); }
    VkBindImagePlaneMemoryInfo const* ptr() const { return reinterpret_cast<VkBindImagePlaneMemoryInfo const*>(this); }
};
struct safe_VkImagePlaneMemoryRequirementsInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageAspectFlagBits planeAspect;

    safe_VkImagePlaneMemoryRequirementsInfo(const VkImagePlaneMemoryRequirementsInfo* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkImagePlaneMemoryRequirementsInfo(const safe_VkImagePlaneMemoryRequirementsInfo& copy_src);
    safe_VkImagePlaneMemoryRequirementsInfo& operator=(const safe_VkImagePlaneMemoryRequirementsInfo& copy_src);
    safe_VkImagePlaneMemoryRequirementsInfo();
    ~safe_VkImagePlaneMemoryRequirementsInfo();
    void initialize(const VkImagePlaneMemoryRequirementsInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImagePlaneMemoryRequirementsInfo* copy_src, PNextCopyState* copy_state = {});
    VkImagePlaneMemoryRequirementsInfo* ptr() { return reinterpret_cast<VkImagePlaneMemoryRequirementsInfo*>(this); }
    VkImagePlaneMemoryRequirementsInfo const* ptr() const {
        return reinterpret_cast<VkImagePlaneMemoryRequirementsInfo const*>(this);
    }
};
struct safe_VkSamplerYcbcrConversionImageFormatProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t combinedImageSamplerDescriptorCount;

    safe_VkSamplerYcbcrConversionImageFormatProperties(const VkSamplerYcbcrConversionImageFormatProperties* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerYcbcrConversionImageFormatProperties(const safe_VkSamplerYcbcrConversionImageFormatProperties& copy_src);
    safe_VkSamplerYcbcrConversionImageFormatProperties& operator=(
        const safe_VkSamplerYcbcrConversionImageFormatProperties& copy_src);
    safe_VkSamplerYcbcrConversionImageFormatProperties();
    ~safe_VkSamplerYcbcrConversionImageFormatProperties();
    void initialize(const VkSamplerYcbcrConversionImageFormatProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerYcbcrConversionImageFormatProperties* copy_src, PNextCopyState* copy_state = {});
    VkSamplerYcbcrConversionImageFormatProperties* ptr() {
        return reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties*>(this);
    }
    VkSamplerYcbcrConversionImageFormatProperties const* ptr() const {
        return reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties const*>(this);
    }
};
struct safe_VkDescriptorUpdateTemplateCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorUpdateTemplateCreateFlags flags;
    uint32_t descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntry* pDescriptorUpdateEntries{};
    VkDescriptorUpdateTemplateType templateType;
    VkDescriptorSetLayout descriptorSetLayout;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout pipelineLayout;
    uint32_t set;

    safe_VkDescriptorUpdateTemplateCreateInfo(const VkDescriptorUpdateTemplateCreateInfo* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorUpdateTemplateCreateInfo(const safe_VkDescriptorUpdateTemplateCreateInfo& copy_src);
    safe_VkDescriptorUpdateTemplateCreateInfo& operator=(const safe_VkDescriptorUpdateTemplateCreateInfo& copy_src);
    safe_VkDescriptorUpdateTemplateCreateInfo();
    ~safe_VkDescriptorUpdateTemplateCreateInfo();
    void initialize(const VkDescriptorUpdateTemplateCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorUpdateTemplateCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorUpdateTemplateCreateInfo* ptr() { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo*>(this); }
    VkDescriptorUpdateTemplateCreateInfo const* ptr() const {
        return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceExternalImageFormatInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkPhysicalDeviceExternalImageFormatInfo(const VkPhysicalDeviceExternalImageFormatInfo* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalImageFormatInfo(const safe_VkPhysicalDeviceExternalImageFormatInfo& copy_src);
    safe_VkPhysicalDeviceExternalImageFormatInfo& operator=(const safe_VkPhysicalDeviceExternalImageFormatInfo& copy_src);
    safe_VkPhysicalDeviceExternalImageFormatInfo();
    ~safe_VkPhysicalDeviceExternalImageFormatInfo();
    void initialize(const VkPhysicalDeviceExternalImageFormatInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalImageFormatInfo* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalImageFormatInfo* ptr() { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo*>(this); }
    VkPhysicalDeviceExternalImageFormatInfo const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo const*>(this);
    }
};
struct safe_VkExternalImageFormatProperties {
    VkStructureType sType;
    void* pNext{};
    VkExternalMemoryProperties externalMemoryProperties;

    safe_VkExternalImageFormatProperties(const VkExternalImageFormatProperties* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkExternalImageFormatProperties(const safe_VkExternalImageFormatProperties& copy_src);
    safe_VkExternalImageFormatProperties& operator=(const safe_VkExternalImageFormatProperties& copy_src);
    safe_VkExternalImageFormatProperties();
    ~safe_VkExternalImageFormatProperties();
    void initialize(const VkExternalImageFormatProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalImageFormatProperties* copy_src, PNextCopyState* copy_state = {});
    VkExternalImageFormatProperties* ptr() { return reinterpret_cast<VkExternalImageFormatProperties*>(this); }
    VkExternalImageFormatProperties const* ptr() const { return reinterpret_cast<VkExternalImageFormatProperties const*>(this); }
};
struct safe_VkPhysicalDeviceExternalBufferInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBufferCreateFlags flags;
    VkBufferUsageFlags usage;
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkPhysicalDeviceExternalBufferInfo(const VkPhysicalDeviceExternalBufferInfo* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalBufferInfo(const safe_VkPhysicalDeviceExternalBufferInfo& copy_src);
    safe_VkPhysicalDeviceExternalBufferInfo& operator=(const safe_VkPhysicalDeviceExternalBufferInfo& copy_src);
    safe_VkPhysicalDeviceExternalBufferInfo();
    ~safe_VkPhysicalDeviceExternalBufferInfo();
    void initialize(const VkPhysicalDeviceExternalBufferInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalBufferInfo* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalBufferInfo* ptr() { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfo*>(this); }
    VkPhysicalDeviceExternalBufferInfo const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalBufferInfo const*>(this);
    }
};
struct safe_VkExternalBufferProperties {
    VkStructureType sType;
    void* pNext{};
    VkExternalMemoryProperties externalMemoryProperties;

    safe_VkExternalBufferProperties(const VkExternalBufferProperties* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkExternalBufferProperties(const safe_VkExternalBufferProperties& copy_src);
    safe_VkExternalBufferProperties& operator=(const safe_VkExternalBufferProperties& copy_src);
    safe_VkExternalBufferProperties();
    ~safe_VkExternalBufferProperties();
    void initialize(const VkExternalBufferProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalBufferProperties* copy_src, PNextCopyState* copy_state = {});
    VkExternalBufferProperties* ptr() { return reinterpret_cast<VkExternalBufferProperties*>(this); }
    VkExternalBufferProperties const* ptr() const { return reinterpret_cast<VkExternalBufferProperties const*>(this); }
};
struct safe_VkPhysicalDeviceIDProperties {
    VkStructureType sType;
    void* pNext{};
    uint8_t deviceUUID[VK_UUID_SIZE];
    uint8_t driverUUID[VK_UUID_SIZE];
    uint8_t deviceLUID[VK_LUID_SIZE];
    uint32_t deviceNodeMask;
    VkBool32 deviceLUIDValid;

    safe_VkPhysicalDeviceIDProperties(const VkPhysicalDeviceIDProperties* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkPhysicalDeviceIDProperties(const safe_VkPhysicalDeviceIDProperties& copy_src);
    safe_VkPhysicalDeviceIDProperties& operator=(const safe_VkPhysicalDeviceIDProperties& copy_src);
    safe_VkPhysicalDeviceIDProperties();
    ~safe_VkPhysicalDeviceIDProperties();
    void initialize(const VkPhysicalDeviceIDProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceIDProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceIDProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceIDProperties*>(this); }
    VkPhysicalDeviceIDProperties const* ptr() const { return reinterpret_cast<VkPhysicalDeviceIDProperties const*>(this); }
};
struct safe_VkExternalMemoryImageCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlags handleTypes;

    safe_VkExternalMemoryImageCreateInfo(const VkExternalMemoryImageCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkExternalMemoryImageCreateInfo(const safe_VkExternalMemoryImageCreateInfo& copy_src);
    safe_VkExternalMemoryImageCreateInfo& operator=(const safe_VkExternalMemoryImageCreateInfo& copy_src);
    safe_VkExternalMemoryImageCreateInfo();
    ~safe_VkExternalMemoryImageCreateInfo();
    void initialize(const VkExternalMemoryImageCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalMemoryImageCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkExternalMemoryImageCreateInfo* ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfo*>(this); }
    VkExternalMemoryImageCreateInfo const* ptr() const { return reinterpret_cast<VkExternalMemoryImageCreateInfo const*>(this); }
};
struct safe_VkExternalMemoryBufferCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlags handleTypes;

    safe_VkExternalMemoryBufferCreateInfo(const VkExternalMemoryBufferCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkExternalMemoryBufferCreateInfo(const safe_VkExternalMemoryBufferCreateInfo& copy_src);
    safe_VkExternalMemoryBufferCreateInfo& operator=(const safe_VkExternalMemoryBufferCreateInfo& copy_src);
    safe_VkExternalMemoryBufferCreateInfo();
    ~safe_VkExternalMemoryBufferCreateInfo();
    void initialize(const VkExternalMemoryBufferCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalMemoryBufferCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkExternalMemoryBufferCreateInfo* ptr() { return reinterpret_cast<VkExternalMemoryBufferCreateInfo*>(this); }
    VkExternalMemoryBufferCreateInfo const* ptr() const { return reinterpret_cast<VkExternalMemoryBufferCreateInfo const*>(this); }
};
struct safe_VkExportMemoryAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlags handleTypes;

    safe_VkExportMemoryAllocateInfo(const VkExportMemoryAllocateInfo* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkExportMemoryAllocateInfo(const safe_VkExportMemoryAllocateInfo& copy_src);
    safe_VkExportMemoryAllocateInfo& operator=(const safe_VkExportMemoryAllocateInfo& copy_src);
    safe_VkExportMemoryAllocateInfo();
    ~safe_VkExportMemoryAllocateInfo();
    void initialize(const VkExportMemoryAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMemoryAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkExportMemoryAllocateInfo* ptr() { return reinterpret_cast<VkExportMemoryAllocateInfo*>(this); }
    VkExportMemoryAllocateInfo const* ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfo const*>(this); }
};
struct safe_VkPhysicalDeviceExternalFenceInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalFenceHandleTypeFlagBits handleType;

    safe_VkPhysicalDeviceExternalFenceInfo(const VkPhysicalDeviceExternalFenceInfo* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalFenceInfo(const safe_VkPhysicalDeviceExternalFenceInfo& copy_src);
    safe_VkPhysicalDeviceExternalFenceInfo& operator=(const safe_VkPhysicalDeviceExternalFenceInfo& copy_src);
    safe_VkPhysicalDeviceExternalFenceInfo();
    ~safe_VkPhysicalDeviceExternalFenceInfo();
    void initialize(const VkPhysicalDeviceExternalFenceInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalFenceInfo* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalFenceInfo* ptr() { return reinterpret_cast<VkPhysicalDeviceExternalFenceInfo*>(this); }
    VkPhysicalDeviceExternalFenceInfo const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalFenceInfo const*>(this);
    }
};
struct safe_VkExternalFenceProperties {
    VkStructureType sType;
    void* pNext{};
    VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes;
    VkExternalFenceHandleTypeFlags compatibleHandleTypes;
    VkExternalFenceFeatureFlags externalFenceFeatures;

    safe_VkExternalFenceProperties(const VkExternalFenceProperties* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkExternalFenceProperties(const safe_VkExternalFenceProperties& copy_src);
    safe_VkExternalFenceProperties& operator=(const safe_VkExternalFenceProperties& copy_src);
    safe_VkExternalFenceProperties();
    ~safe_VkExternalFenceProperties();
    void initialize(const VkExternalFenceProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalFenceProperties* copy_src, PNextCopyState* copy_state = {});
    VkExternalFenceProperties* ptr() { return reinterpret_cast<VkExternalFenceProperties*>(this); }
    VkExternalFenceProperties const* ptr() const { return reinterpret_cast<VkExternalFenceProperties const*>(this); }
};
struct safe_VkExportFenceCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalFenceHandleTypeFlags handleTypes;

    safe_VkExportFenceCreateInfo(const VkExportFenceCreateInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExportFenceCreateInfo(const safe_VkExportFenceCreateInfo& copy_src);
    safe_VkExportFenceCreateInfo& operator=(const safe_VkExportFenceCreateInfo& copy_src);
    safe_VkExportFenceCreateInfo();
    ~safe_VkExportFenceCreateInfo();
    void initialize(const VkExportFenceCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportFenceCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkExportFenceCreateInfo* ptr() { return reinterpret_cast<VkExportFenceCreateInfo*>(this); }
    VkExportFenceCreateInfo const* ptr() const { return reinterpret_cast<VkExportFenceCreateInfo const*>(this); }
};
struct safe_VkExportSemaphoreCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalSemaphoreHandleTypeFlags handleTypes;

    safe_VkExportSemaphoreCreateInfo(const VkExportSemaphoreCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkExportSemaphoreCreateInfo(const safe_VkExportSemaphoreCreateInfo& copy_src);
    safe_VkExportSemaphoreCreateInfo& operator=(const safe_VkExportSemaphoreCreateInfo& copy_src);
    safe_VkExportSemaphoreCreateInfo();
    ~safe_VkExportSemaphoreCreateInfo();
    void initialize(const VkExportSemaphoreCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportSemaphoreCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkExportSemaphoreCreateInfo* ptr() { return reinterpret_cast<VkExportSemaphoreCreateInfo*>(this); }
    VkExportSemaphoreCreateInfo const* ptr() const { return reinterpret_cast<VkExportSemaphoreCreateInfo const*>(this); }
};
struct safe_VkPhysicalDeviceExternalSemaphoreInfo {
    VkStructureType sType;
    const void* pNext{};
    VkExternalSemaphoreHandleTypeFlagBits handleType;

    safe_VkPhysicalDeviceExternalSemaphoreInfo(const VkPhysicalDeviceExternalSemaphoreInfo* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalSemaphoreInfo(const safe_VkPhysicalDeviceExternalSemaphoreInfo& copy_src);
    safe_VkPhysicalDeviceExternalSemaphoreInfo& operator=(const safe_VkPhysicalDeviceExternalSemaphoreInfo& copy_src);
    safe_VkPhysicalDeviceExternalSemaphoreInfo();
    ~safe_VkPhysicalDeviceExternalSemaphoreInfo();
    void initialize(const VkPhysicalDeviceExternalSemaphoreInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfo* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalSemaphoreInfo* ptr() { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo*>(this); }
    VkPhysicalDeviceExternalSemaphoreInfo const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo const*>(this);
    }
};
struct safe_VkExternalSemaphoreProperties {
    VkStructureType sType;
    void* pNext{};
    VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes;
    VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes;
    VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures;

    safe_VkExternalSemaphoreProperties(const VkExternalSemaphoreProperties* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkExternalSemaphoreProperties(const safe_VkExternalSemaphoreProperties& copy_src);
    safe_VkExternalSemaphoreProperties& operator=(const safe_VkExternalSemaphoreProperties& copy_src);
    safe_VkExternalSemaphoreProperties();
    ~safe_VkExternalSemaphoreProperties();
    void initialize(const VkExternalSemaphoreProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalSemaphoreProperties* copy_src, PNextCopyState* copy_state = {});
    VkExternalSemaphoreProperties* ptr() { return reinterpret_cast<VkExternalSemaphoreProperties*>(this); }
    VkExternalSemaphoreProperties const* ptr() const { return reinterpret_cast<VkExternalSemaphoreProperties const*>(this); }
};
struct safe_VkPhysicalDeviceMaintenance3Properties {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxPerSetDescriptors;
    VkDeviceSize maxMemoryAllocationSize;

    safe_VkPhysicalDeviceMaintenance3Properties(const VkPhysicalDeviceMaintenance3Properties* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMaintenance3Properties(const safe_VkPhysicalDeviceMaintenance3Properties& copy_src);
    safe_VkPhysicalDeviceMaintenance3Properties& operator=(const safe_VkPhysicalDeviceMaintenance3Properties& copy_src);
    safe_VkPhysicalDeviceMaintenance3Properties();
    ~safe_VkPhysicalDeviceMaintenance3Properties();
    void initialize(const VkPhysicalDeviceMaintenance3Properties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMaintenance3Properties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMaintenance3Properties* ptr() { return reinterpret_cast<VkPhysicalDeviceMaintenance3Properties*>(this); }
    VkPhysicalDeviceMaintenance3Properties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMaintenance3Properties const*>(this);
    }
};
struct safe_VkDescriptorSetLayoutSupport {
    VkStructureType sType;
    void* pNext{};
    VkBool32 supported;

    safe_VkDescriptorSetLayoutSupport(const VkDescriptorSetLayoutSupport* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkDescriptorSetLayoutSupport(const safe_VkDescriptorSetLayoutSupport& copy_src);
    safe_VkDescriptorSetLayoutSupport& operator=(const safe_VkDescriptorSetLayoutSupport& copy_src);
    safe_VkDescriptorSetLayoutSupport();
    ~safe_VkDescriptorSetLayoutSupport();
    void initialize(const VkDescriptorSetLayoutSupport* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetLayoutSupport* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetLayoutSupport* ptr() { return reinterpret_cast<VkDescriptorSetLayoutSupport*>(this); }
    VkDescriptorSetLayoutSupport const* ptr() const { return reinterpret_cast<VkDescriptorSetLayoutSupport const*>(this); }
};
struct safe_VkPhysicalDeviceVulkan11Properties {
    VkStructureType sType;
    void* pNext{};
    uint8_t deviceUUID[VK_UUID_SIZE];
    uint8_t driverUUID[VK_UUID_SIZE];
    uint8_t deviceLUID[VK_LUID_SIZE];
    uint32_t deviceNodeMask;
    VkBool32 deviceLUIDValid;
    uint32_t subgroupSize;
    VkShaderStageFlags subgroupSupportedStages;
    VkSubgroupFeatureFlags subgroupSupportedOperations;
    VkBool32 subgroupQuadOperationsInAllStages;
    VkPointClippingBehavior pointClippingBehavior;
    uint32_t maxMultiviewViewCount;
    uint32_t maxMultiviewInstanceIndex;
    VkBool32 protectedNoFault;
    uint32_t maxPerSetDescriptors;
    VkDeviceSize maxMemoryAllocationSize;

    safe_VkPhysicalDeviceVulkan11Properties(const VkPhysicalDeviceVulkan11Properties* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceVulkan11Properties(const safe_VkPhysicalDeviceVulkan11Properties& copy_src);
    safe_VkPhysicalDeviceVulkan11Properties& operator=(const safe_VkPhysicalDeviceVulkan11Properties& copy_src);
    safe_VkPhysicalDeviceVulkan11Properties();
    ~safe_VkPhysicalDeviceVulkan11Properties();
    void initialize(const VkPhysicalDeviceVulkan11Properties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVulkan11Properties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVulkan11Properties* ptr() { return reinterpret_cast<VkPhysicalDeviceVulkan11Properties*>(this); }
    VkPhysicalDeviceVulkan11Properties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVulkan11Properties const*>(this);
    }
};
struct safe_VkPhysicalDeviceVulkan12Properties {
    VkStructureType sType;
    void* pNext{};
    VkDriverId driverID;
    char driverName[VK_MAX_DRIVER_NAME_SIZE];
    char driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion conformanceVersion;
    VkShaderFloatControlsIndependence denormBehaviorIndependence;
    VkShaderFloatControlsIndependence roundingModeIndependence;
    VkBool32 shaderSignedZeroInfNanPreserveFloat16;
    VkBool32 shaderSignedZeroInfNanPreserveFloat32;
    VkBool32 shaderSignedZeroInfNanPreserveFloat64;
    VkBool32 shaderDenormPreserveFloat16;
    VkBool32 shaderDenormPreserveFloat32;
    VkBool32 shaderDenormPreserveFloat64;
    VkBool32 shaderDenormFlushToZeroFloat16;
    VkBool32 shaderDenormFlushToZeroFloat32;
    VkBool32 shaderDenormFlushToZeroFloat64;
    VkBool32 shaderRoundingModeRTEFloat16;
    VkBool32 shaderRoundingModeRTEFloat32;
    VkBool32 shaderRoundingModeRTEFloat64;
    VkBool32 shaderRoundingModeRTZFloat16;
    VkBool32 shaderRoundingModeRTZFloat32;
    VkBool32 shaderRoundingModeRTZFloat64;
    uint32_t maxUpdateAfterBindDescriptorsInAllPools;
    VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
    VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
    VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
    VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
    VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
    VkBool32 robustBufferAccessUpdateAfterBind;
    VkBool32 quadDivergentImplicitLod;
    uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
    uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
    uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
    uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
    uint32_t maxPerStageUpdateAfterBindResources;
    uint32_t maxDescriptorSetUpdateAfterBindSamplers;
    uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
    uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
    uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
    uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
    uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;
    VkResolveModeFlags supportedDepthResolveModes;
    VkResolveModeFlags supportedStencilResolveModes;
    VkBool32 independentResolveNone;
    VkBool32 independentResolve;
    VkBool32 filterMinmaxSingleComponentFormats;
    VkBool32 filterMinmaxImageComponentMapping;
    uint64_t maxTimelineSemaphoreValueDifference;
    VkSampleCountFlags framebufferIntegerColorSampleCounts;

    safe_VkPhysicalDeviceVulkan12Properties(const VkPhysicalDeviceVulkan12Properties* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceVulkan12Properties(const safe_VkPhysicalDeviceVulkan12Properties& copy_src);
    safe_VkPhysicalDeviceVulkan12Properties& operator=(const safe_VkPhysicalDeviceVulkan12Properties& copy_src);
    safe_VkPhysicalDeviceVulkan12Properties();
    ~safe_VkPhysicalDeviceVulkan12Properties();
    void initialize(const VkPhysicalDeviceVulkan12Properties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVulkan12Properties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVulkan12Properties* ptr() { return reinterpret_cast<VkPhysicalDeviceVulkan12Properties*>(this); }
    VkPhysicalDeviceVulkan12Properties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVulkan12Properties const*>(this);
    }
};
struct safe_VkImageFormatListCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t viewFormatCount;
    const VkFormat* pViewFormats{};

    safe_VkImageFormatListCreateInfo(const VkImageFormatListCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkImageFormatListCreateInfo(const safe_VkImageFormatListCreateInfo& copy_src);
    safe_VkImageFormatListCreateInfo& operator=(const safe_VkImageFormatListCreateInfo& copy_src);
    safe_VkImageFormatListCreateInfo();
    ~safe_VkImageFormatListCreateInfo();
    void initialize(const VkImageFormatListCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageFormatListCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkImageFormatListCreateInfo* ptr() { return reinterpret_cast<VkImageFormatListCreateInfo*>(this); }
    VkImageFormatListCreateInfo const* ptr() const { return reinterpret_cast<VkImageFormatListCreateInfo const*>(this); }
};
struct safe_VkAttachmentDescription2 {
    VkStructureType sType;
    const void* pNext{};
    VkAttachmentDescriptionFlags flags;
    VkFormat format;
    VkSampleCountFlagBits samples;
    VkAttachmentLoadOp loadOp;
    VkAttachmentStoreOp storeOp;
    VkAttachmentLoadOp stencilLoadOp;
    VkAttachmentStoreOp stencilStoreOp;
    VkImageLayout initialLayout;
    VkImageLayout finalLayout;

    safe_VkAttachmentDescription2(const VkAttachmentDescription2* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkAttachmentDescription2(const safe_VkAttachmentDescription2& copy_src);
    safe_VkAttachmentDescription2& operator=(const safe_VkAttachmentDescription2& copy_src);
    safe_VkAttachmentDescription2();
    ~safe_VkAttachmentDescription2();
    void initialize(const VkAttachmentDescription2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAttachmentDescription2* copy_src, PNextCopyState* copy_state = {});
    VkAttachmentDescription2* ptr() { return reinterpret_cast<VkAttachmentDescription2*>(this); }
    VkAttachmentDescription2 const* ptr() const { return reinterpret_cast<VkAttachmentDescription2 const*>(this); }
};
struct safe_VkAttachmentReference2 {
    VkStructureType sType;
    const void* pNext{};
    uint32_t attachment;
    VkImageLayout layout;
    VkImageAspectFlags aspectMask;

    safe_VkAttachmentReference2(const VkAttachmentReference2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAttachmentReference2(const safe_VkAttachmentReference2& copy_src);
    safe_VkAttachmentReference2& operator=(const safe_VkAttachmentReference2& copy_src);
    safe_VkAttachmentReference2();
    ~safe_VkAttachmentReference2();
    void initialize(const VkAttachmentReference2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAttachmentReference2* copy_src, PNextCopyState* copy_state = {});
    VkAttachmentReference2* ptr() { return reinterpret_cast<VkAttachmentReference2*>(this); }
    VkAttachmentReference2 const* ptr() const { return reinterpret_cast<VkAttachmentReference2 const*>(this); }
};
struct safe_VkSubpassDescription2 {
    VkStructureType sType;
    const void* pNext{};
    VkSubpassDescriptionFlags flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t viewMask;
    uint32_t inputAttachmentCount;
    safe_VkAttachmentReference2* pInputAttachments{};
    uint32_t colorAttachmentCount;
    safe_VkAttachmentReference2* pColorAttachments{};
    safe_VkAttachmentReference2* pResolveAttachments{};
    safe_VkAttachmentReference2* pDepthStencilAttachment{};
    uint32_t preserveAttachmentCount;
    const uint32_t* pPreserveAttachments{};

    safe_VkSubpassDescription2(const VkSubpassDescription2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassDescription2(const safe_VkSubpassDescription2& copy_src);
    safe_VkSubpassDescription2& operator=(const safe_VkSubpassDescription2& copy_src);
    safe_VkSubpassDescription2();
    ~safe_VkSubpassDescription2();
    void initialize(const VkSubpassDescription2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassDescription2* copy_src, PNextCopyState* copy_state = {});
    VkSubpassDescription2* ptr() { return reinterpret_cast<VkSubpassDescription2*>(this); }
    VkSubpassDescription2 const* ptr() const { return reinterpret_cast<VkSubpassDescription2 const*>(this); }
};
struct safe_VkSubpassDependency2 {
    VkStructureType sType;
    const void* pNext{};
    uint32_t srcSubpass;
    uint32_t dstSubpass;
    VkPipelineStageFlags srcStageMask;
    VkPipelineStageFlags dstStageMask;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    VkDependencyFlags dependencyFlags;
    int32_t viewOffset;

    safe_VkSubpassDependency2(const VkSubpassDependency2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassDependency2(const safe_VkSubpassDependency2& copy_src);
    safe_VkSubpassDependency2& operator=(const safe_VkSubpassDependency2& copy_src);
    safe_VkSubpassDependency2();
    ~safe_VkSubpassDependency2();
    void initialize(const VkSubpassDependency2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassDependency2* copy_src, PNextCopyState* copy_state = {});
    VkSubpassDependency2* ptr() { return reinterpret_cast<VkSubpassDependency2*>(this); }
    VkSubpassDependency2 const* ptr() const { return reinterpret_cast<VkSubpassDependency2 const*>(this); }
};
struct safe_VkRenderPassCreateInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPassCreateFlags flags;
    uint32_t attachmentCount;
    safe_VkAttachmentDescription2* pAttachments{};
    uint32_t subpassCount;
    safe_VkSubpassDescription2* pSubpasses{};
    uint32_t dependencyCount;
    safe_VkSubpassDependency2* pDependencies{};
    uint32_t correlatedViewMaskCount;
    const uint32_t* pCorrelatedViewMasks{};

    safe_VkRenderPassCreateInfo2(const VkRenderPassCreateInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassCreateInfo2(const safe_VkRenderPassCreateInfo2& copy_src);
    safe_VkRenderPassCreateInfo2& operator=(const safe_VkRenderPassCreateInfo2& copy_src);
    safe_VkRenderPassCreateInfo2();
    ~safe_VkRenderPassCreateInfo2();
    void initialize(const VkRenderPassCreateInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassCreateInfo2* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassCreateInfo2* ptr() { return reinterpret_cast<VkRenderPassCreateInfo2*>(this); }
    VkRenderPassCreateInfo2 const* ptr() const { return reinterpret_cast<VkRenderPassCreateInfo2 const*>(this); }
};
struct safe_VkSubpassBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSubpassContents contents;

    safe_VkSubpassBeginInfo(const VkSubpassBeginInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassBeginInfo(const safe_VkSubpassBeginInfo& copy_src);
    safe_VkSubpassBeginInfo& operator=(const safe_VkSubpassBeginInfo& copy_src);
    safe_VkSubpassBeginInfo();
    ~safe_VkSubpassBeginInfo();
    void initialize(const VkSubpassBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkSubpassBeginInfo* ptr() { return reinterpret_cast<VkSubpassBeginInfo*>(this); }
    VkSubpassBeginInfo const* ptr() const { return reinterpret_cast<VkSubpassBeginInfo const*>(this); }
};
struct safe_VkSubpassEndInfo {
    VkStructureType sType;
    const void* pNext{};

    safe_VkSubpassEndInfo(const VkSubpassEndInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassEndInfo(const safe_VkSubpassEndInfo& copy_src);
    safe_VkSubpassEndInfo& operator=(const safe_VkSubpassEndInfo& copy_src);
    safe_VkSubpassEndInfo();
    ~safe_VkSubpassEndInfo();
    void initialize(const VkSubpassEndInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassEndInfo* copy_src, PNextCopyState* copy_state = {});
    VkSubpassEndInfo* ptr() { return reinterpret_cast<VkSubpassEndInfo*>(this); }
    VkSubpassEndInfo const* ptr() const { return reinterpret_cast<VkSubpassEndInfo const*>(this); }
};
struct safe_VkPhysicalDeviceDriverProperties {
    VkStructureType sType;
    void* pNext{};
    VkDriverId driverID;
    char driverName[VK_MAX_DRIVER_NAME_SIZE];
    char driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion conformanceVersion;

    safe_VkPhysicalDeviceDriverProperties(const VkPhysicalDeviceDriverProperties* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkPhysicalDeviceDriverProperties(const safe_VkPhysicalDeviceDriverProperties& copy_src);
    safe_VkPhysicalDeviceDriverProperties& operator=(const safe_VkPhysicalDeviceDriverProperties& copy_src);
    safe_VkPhysicalDeviceDriverProperties();
    ~safe_VkPhysicalDeviceDriverProperties();
    void initialize(const VkPhysicalDeviceDriverProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDriverProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDriverProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceDriverProperties*>(this); }
    VkPhysicalDeviceDriverProperties const* ptr() const { return reinterpret_cast<VkPhysicalDeviceDriverProperties const*>(this); }
};
struct safe_VkPhysicalDeviceFloatControlsProperties {
    VkStructureType sType;
    void* pNext{};
    VkShaderFloatControlsIndependence denormBehaviorIndependence;
    VkShaderFloatControlsIndependence roundingModeIndependence;
    VkBool32 shaderSignedZeroInfNanPreserveFloat16;
    VkBool32 shaderSignedZeroInfNanPreserveFloat32;
    VkBool32 shaderSignedZeroInfNanPreserveFloat64;
    VkBool32 shaderDenormPreserveFloat16;
    VkBool32 shaderDenormPreserveFloat32;
    VkBool32 shaderDenormPreserveFloat64;
    VkBool32 shaderDenormFlushToZeroFloat16;
    VkBool32 shaderDenormFlushToZeroFloat32;
    VkBool32 shaderDenormFlushToZeroFloat64;
    VkBool32 shaderRoundingModeRTEFloat16;
    VkBool32 shaderRoundingModeRTEFloat32;
    VkBool32 shaderRoundingModeRTEFloat64;
    VkBool32 shaderRoundingModeRTZFloat16;
    VkBool32 shaderRoundingModeRTZFloat32;
    VkBool32 shaderRoundingModeRTZFloat64;

    safe_VkPhysicalDeviceFloatControlsProperties(const VkPhysicalDeviceFloatControlsProperties* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFloatControlsProperties(const safe_VkPhysicalDeviceFloatControlsProperties& copy_src);
    safe_VkPhysicalDeviceFloatControlsProperties& operator=(const safe_VkPhysicalDeviceFloatControlsProperties& copy_src);
    safe_VkPhysicalDeviceFloatControlsProperties();
    ~safe_VkPhysicalDeviceFloatControlsProperties();
    void initialize(const VkPhysicalDeviceFloatControlsProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFloatControlsProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFloatControlsProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceFloatControlsProperties*>(this); }
    VkPhysicalDeviceFloatControlsProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFloatControlsProperties const*>(this);
    }
};
struct safe_VkDescriptorSetLayoutBindingFlagsCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t bindingCount;
    const VkDescriptorBindingFlags* pBindingFlags{};

    safe_VkDescriptorSetLayoutBindingFlagsCreateInfo(const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorSetLayoutBindingFlagsCreateInfo(const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& copy_src);
    safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& operator=(const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& copy_src);
    safe_VkDescriptorSetLayoutBindingFlagsCreateInfo();
    ~safe_VkDescriptorSetLayoutBindingFlagsCreateInfo();
    void initialize(const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetLayoutBindingFlagsCreateInfo* ptr() {
        return reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfo*>(this);
    }
    VkDescriptorSetLayoutBindingFlagsCreateInfo const* ptr() const {
        return reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceDescriptorIndexingProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxUpdateAfterBindDescriptorsInAllPools;
    VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
    VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
    VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
    VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
    VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
    VkBool32 robustBufferAccessUpdateAfterBind;
    VkBool32 quadDivergentImplicitLod;
    uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
    uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
    uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
    uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
    uint32_t maxPerStageUpdateAfterBindResources;
    uint32_t maxDescriptorSetUpdateAfterBindSamplers;
    uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
    uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
    uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
    uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
    uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;

    safe_VkPhysicalDeviceDescriptorIndexingProperties(const VkPhysicalDeviceDescriptorIndexingProperties* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDescriptorIndexingProperties(const safe_VkPhysicalDeviceDescriptorIndexingProperties& copy_src);
    safe_VkPhysicalDeviceDescriptorIndexingProperties& operator=(const safe_VkPhysicalDeviceDescriptorIndexingProperties& copy_src);
    safe_VkPhysicalDeviceDescriptorIndexingProperties();
    ~safe_VkPhysicalDeviceDescriptorIndexingProperties();
    void initialize(const VkPhysicalDeviceDescriptorIndexingProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDescriptorIndexingProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDescriptorIndexingProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties*>(this);
    }
    VkPhysicalDeviceDescriptorIndexingProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties const*>(this);
    }
};
struct safe_VkDescriptorSetVariableDescriptorCountAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t descriptorSetCount;
    const uint32_t* pDescriptorCounts{};

    safe_VkDescriptorSetVariableDescriptorCountAllocateInfo(const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorSetVariableDescriptorCountAllocateInfo(
        const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& copy_src);
    safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& operator=(
        const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& copy_src);
    safe_VkDescriptorSetVariableDescriptorCountAllocateInfo();
    ~safe_VkDescriptorSetVariableDescriptorCountAllocateInfo();
    void initialize(const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetVariableDescriptorCountAllocateInfo* ptr() {
        return reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfo*>(this);
    }
    VkDescriptorSetVariableDescriptorCountAllocateInfo const* ptr() const {
        return reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfo const*>(this);
    }
};
struct safe_VkDescriptorSetVariableDescriptorCountLayoutSupport {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxVariableDescriptorCount;

    safe_VkDescriptorSetVariableDescriptorCountLayoutSupport(const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorSetVariableDescriptorCountLayoutSupport(
        const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& copy_src);
    safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& operator=(
        const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& copy_src);
    safe_VkDescriptorSetVariableDescriptorCountLayoutSupport();
    ~safe_VkDescriptorSetVariableDescriptorCountLayoutSupport();
    void initialize(const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetVariableDescriptorCountLayoutSupport* ptr() {
        return reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport*>(this);
    }
    VkDescriptorSetVariableDescriptorCountLayoutSupport const* ptr() const {
        return reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport const*>(this);
    }
};
struct safe_VkSubpassDescriptionDepthStencilResolve {
    VkStructureType sType;
    const void* pNext{};
    VkResolveModeFlagBits depthResolveMode;
    VkResolveModeFlagBits stencilResolveMode;
    safe_VkAttachmentReference2* pDepthStencilResolveAttachment{};

    safe_VkSubpassDescriptionDepthStencilResolve(const VkSubpassDescriptionDepthStencilResolve* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassDescriptionDepthStencilResolve(const safe_VkSubpassDescriptionDepthStencilResolve& copy_src);
    safe_VkSubpassDescriptionDepthStencilResolve& operator=(const safe_VkSubpassDescriptionDepthStencilResolve& copy_src);
    safe_VkSubpassDescriptionDepthStencilResolve();
    ~safe_VkSubpassDescriptionDepthStencilResolve();
    void initialize(const VkSubpassDescriptionDepthStencilResolve* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassDescriptionDepthStencilResolve* copy_src, PNextCopyState* copy_state = {});
    VkSubpassDescriptionDepthStencilResolve* ptr() { return reinterpret_cast<VkSubpassDescriptionDepthStencilResolve*>(this); }
    VkSubpassDescriptionDepthStencilResolve const* ptr() const {
        return reinterpret_cast<VkSubpassDescriptionDepthStencilResolve const*>(this);
    }
};
struct safe_VkPhysicalDeviceDepthStencilResolveProperties {
    VkStructureType sType;
    void* pNext{};
    VkResolveModeFlags supportedDepthResolveModes;
    VkResolveModeFlags supportedStencilResolveModes;
    VkBool32 independentResolveNone;
    VkBool32 independentResolve;

    safe_VkPhysicalDeviceDepthStencilResolveProperties(const VkPhysicalDeviceDepthStencilResolveProperties* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDepthStencilResolveProperties(const safe_VkPhysicalDeviceDepthStencilResolveProperties& copy_src);
    safe_VkPhysicalDeviceDepthStencilResolveProperties& operator=(
        const safe_VkPhysicalDeviceDepthStencilResolveProperties& copy_src);
    safe_VkPhysicalDeviceDepthStencilResolveProperties();
    ~safe_VkPhysicalDeviceDepthStencilResolveProperties();
    void initialize(const VkPhysicalDeviceDepthStencilResolveProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDepthStencilResolveProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDepthStencilResolveProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties*>(this);
    }
    VkPhysicalDeviceDepthStencilResolveProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties const*>(this);
    }
};
struct safe_VkImageStencilUsageCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageUsageFlags stencilUsage;

    safe_VkImageStencilUsageCreateInfo(const VkImageStencilUsageCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkImageStencilUsageCreateInfo(const safe_VkImageStencilUsageCreateInfo& copy_src);
    safe_VkImageStencilUsageCreateInfo& operator=(const safe_VkImageStencilUsageCreateInfo& copy_src);
    safe_VkImageStencilUsageCreateInfo();
    ~safe_VkImageStencilUsageCreateInfo();
    void initialize(const VkImageStencilUsageCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageStencilUsageCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkImageStencilUsageCreateInfo* ptr() { return reinterpret_cast<VkImageStencilUsageCreateInfo*>(this); }
    VkImageStencilUsageCreateInfo const* ptr() const { return reinterpret_cast<VkImageStencilUsageCreateInfo const*>(this); }
};
struct safe_VkSamplerReductionModeCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSamplerReductionMode reductionMode;

    safe_VkSamplerReductionModeCreateInfo(const VkSamplerReductionModeCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkSamplerReductionModeCreateInfo(const safe_VkSamplerReductionModeCreateInfo& copy_src);
    safe_VkSamplerReductionModeCreateInfo& operator=(const safe_VkSamplerReductionModeCreateInfo& copy_src);
    safe_VkSamplerReductionModeCreateInfo();
    ~safe_VkSamplerReductionModeCreateInfo();
    void initialize(const VkSamplerReductionModeCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerReductionModeCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkSamplerReductionModeCreateInfo* ptr() { return reinterpret_cast<VkSamplerReductionModeCreateInfo*>(this); }
    VkSamplerReductionModeCreateInfo const* ptr() const { return reinterpret_cast<VkSamplerReductionModeCreateInfo const*>(this); }
};
struct safe_VkPhysicalDeviceSamplerFilterMinmaxProperties {
    VkStructureType sType;
    void* pNext{};
    VkBool32 filterMinmaxSingleComponentFormats;
    VkBool32 filterMinmaxImageComponentMapping;

    safe_VkPhysicalDeviceSamplerFilterMinmaxProperties(const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSamplerFilterMinmaxProperties(const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& copy_src);
    safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& operator=(
        const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& copy_src);
    safe_VkPhysicalDeviceSamplerFilterMinmaxProperties();
    ~safe_VkPhysicalDeviceSamplerFilterMinmaxProperties();
    void initialize(const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSamplerFilterMinmaxProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties*>(this);
    }
    VkPhysicalDeviceSamplerFilterMinmaxProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties const*>(this);
    }
};
struct safe_VkFramebufferAttachmentImageInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageCreateFlags flags;
    VkImageUsageFlags usage;
    uint32_t width;
    uint32_t height;
    uint32_t layerCount;
    uint32_t viewFormatCount;
    const VkFormat* pViewFormats{};

    safe_VkFramebufferAttachmentImageInfo(const VkFramebufferAttachmentImageInfo* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkFramebufferAttachmentImageInfo(const safe_VkFramebufferAttachmentImageInfo& copy_src);
    safe_VkFramebufferAttachmentImageInfo& operator=(const safe_VkFramebufferAttachmentImageInfo& copy_src);
    safe_VkFramebufferAttachmentImageInfo();
    ~safe_VkFramebufferAttachmentImageInfo();
    void initialize(const VkFramebufferAttachmentImageInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFramebufferAttachmentImageInfo* copy_src, PNextCopyState* copy_state = {});
    VkFramebufferAttachmentImageInfo* ptr() { return reinterpret_cast<VkFramebufferAttachmentImageInfo*>(this); }
    VkFramebufferAttachmentImageInfo const* ptr() const { return reinterpret_cast<VkFramebufferAttachmentImageInfo const*>(this); }
};
struct safe_VkFramebufferAttachmentsCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t attachmentImageInfoCount;
    safe_VkFramebufferAttachmentImageInfo* pAttachmentImageInfos{};

    safe_VkFramebufferAttachmentsCreateInfo(const VkFramebufferAttachmentsCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkFramebufferAttachmentsCreateInfo(const safe_VkFramebufferAttachmentsCreateInfo& copy_src);
    safe_VkFramebufferAttachmentsCreateInfo& operator=(const safe_VkFramebufferAttachmentsCreateInfo& copy_src);
    safe_VkFramebufferAttachmentsCreateInfo();
    ~safe_VkFramebufferAttachmentsCreateInfo();
    void initialize(const VkFramebufferAttachmentsCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFramebufferAttachmentsCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkFramebufferAttachmentsCreateInfo* ptr() { return reinterpret_cast<VkFramebufferAttachmentsCreateInfo*>(this); }
    VkFramebufferAttachmentsCreateInfo const* ptr() const {
        return reinterpret_cast<VkFramebufferAttachmentsCreateInfo const*>(this);
    }
};
struct safe_VkRenderPassAttachmentBeginInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t attachmentCount;
    VkImageView* pAttachments{};

    safe_VkRenderPassAttachmentBeginInfo(const VkRenderPassAttachmentBeginInfo* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkRenderPassAttachmentBeginInfo(const safe_VkRenderPassAttachmentBeginInfo& copy_src);
    safe_VkRenderPassAttachmentBeginInfo& operator=(const safe_VkRenderPassAttachmentBeginInfo& copy_src);
    safe_VkRenderPassAttachmentBeginInfo();
    ~safe_VkRenderPassAttachmentBeginInfo();
    void initialize(const VkRenderPassAttachmentBeginInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassAttachmentBeginInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassAttachmentBeginInfo* ptr() { return reinterpret_cast<VkRenderPassAttachmentBeginInfo*>(this); }
    VkRenderPassAttachmentBeginInfo const* ptr() const { return reinterpret_cast<VkRenderPassAttachmentBeginInfo const*>(this); }
};
struct safe_VkAttachmentReferenceStencilLayout {
    VkStructureType sType;
    void* pNext{};
    VkImageLayout stencilLayout;

    safe_VkAttachmentReferenceStencilLayout(const VkAttachmentReferenceStencilLayout* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkAttachmentReferenceStencilLayout(const safe_VkAttachmentReferenceStencilLayout& copy_src);
    safe_VkAttachmentReferenceStencilLayout& operator=(const safe_VkAttachmentReferenceStencilLayout& copy_src);
    safe_VkAttachmentReferenceStencilLayout();
    ~safe_VkAttachmentReferenceStencilLayout();
    void initialize(const VkAttachmentReferenceStencilLayout* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAttachmentReferenceStencilLayout* copy_src, PNextCopyState* copy_state = {});
    VkAttachmentReferenceStencilLayout* ptr() { return reinterpret_cast<VkAttachmentReferenceStencilLayout*>(this); }
    VkAttachmentReferenceStencilLayout const* ptr() const {
        return reinterpret_cast<VkAttachmentReferenceStencilLayout const*>(this);
    }
};
struct safe_VkAttachmentDescriptionStencilLayout {
    VkStructureType sType;
    void* pNext{};
    VkImageLayout stencilInitialLayout;
    VkImageLayout stencilFinalLayout;

    safe_VkAttachmentDescriptionStencilLayout(const VkAttachmentDescriptionStencilLayout* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAttachmentDescriptionStencilLayout(const safe_VkAttachmentDescriptionStencilLayout& copy_src);
    safe_VkAttachmentDescriptionStencilLayout& operator=(const safe_VkAttachmentDescriptionStencilLayout& copy_src);
    safe_VkAttachmentDescriptionStencilLayout();
    ~safe_VkAttachmentDescriptionStencilLayout();
    void initialize(const VkAttachmentDescriptionStencilLayout* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAttachmentDescriptionStencilLayout* copy_src, PNextCopyState* copy_state = {});
    VkAttachmentDescriptionStencilLayout* ptr() { return reinterpret_cast<VkAttachmentDescriptionStencilLayout*>(this); }
    VkAttachmentDescriptionStencilLayout const* ptr() const {
        return reinterpret_cast<VkAttachmentDescriptionStencilLayout const*>(this);
    }
};
struct safe_VkPhysicalDeviceTimelineSemaphoreProperties {
    VkStructureType sType;
    void* pNext{};
    uint64_t maxTimelineSemaphoreValueDifference;

    safe_VkPhysicalDeviceTimelineSemaphoreProperties(const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceTimelineSemaphoreProperties(const safe_VkPhysicalDeviceTimelineSemaphoreProperties& copy_src);
    safe_VkPhysicalDeviceTimelineSemaphoreProperties& operator=(const safe_VkPhysicalDeviceTimelineSemaphoreProperties& copy_src);
    safe_VkPhysicalDeviceTimelineSemaphoreProperties();
    ~safe_VkPhysicalDeviceTimelineSemaphoreProperties();
    void initialize(const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceTimelineSemaphoreProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceTimelineSemaphoreProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties*>(this);
    }
    VkPhysicalDeviceTimelineSemaphoreProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties const*>(this);
    }
};
struct safe_VkSemaphoreTypeCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphoreType semaphoreType;
    uint64_t initialValue;

    safe_VkSemaphoreTypeCreateInfo(const VkSemaphoreTypeCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkSemaphoreTypeCreateInfo(const safe_VkSemaphoreTypeCreateInfo& copy_src);
    safe_VkSemaphoreTypeCreateInfo& operator=(const safe_VkSemaphoreTypeCreateInfo& copy_src);
    safe_VkSemaphoreTypeCreateInfo();
    ~safe_VkSemaphoreTypeCreateInfo();
    void initialize(const VkSemaphoreTypeCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreTypeCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreTypeCreateInfo* ptr() { return reinterpret_cast<VkSemaphoreTypeCreateInfo*>(this); }
    VkSemaphoreTypeCreateInfo const* ptr() const { return reinterpret_cast<VkSemaphoreTypeCreateInfo const*>(this); }
};
struct safe_VkTimelineSemaphoreSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreValueCount;
    const uint64_t* pWaitSemaphoreValues{};
    uint32_t signalSemaphoreValueCount;
    const uint64_t* pSignalSemaphoreValues{};

    safe_VkTimelineSemaphoreSubmitInfo(const VkTimelineSemaphoreSubmitInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkTimelineSemaphoreSubmitInfo(const safe_VkTimelineSemaphoreSubmitInfo& copy_src);
    safe_VkTimelineSemaphoreSubmitInfo& operator=(const safe_VkTimelineSemaphoreSubmitInfo& copy_src);
    safe_VkTimelineSemaphoreSubmitInfo();
    ~safe_VkTimelineSemaphoreSubmitInfo();
    void initialize(const VkTimelineSemaphoreSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkTimelineSemaphoreSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkTimelineSemaphoreSubmitInfo* ptr() { return reinterpret_cast<VkTimelineSemaphoreSubmitInfo*>(this); }
    VkTimelineSemaphoreSubmitInfo const* ptr() const { return reinterpret_cast<VkTimelineSemaphoreSubmitInfo const*>(this); }
};
struct safe_VkSemaphoreWaitInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphoreWaitFlags flags;
    uint32_t semaphoreCount;
    VkSemaphore* pSemaphores{};
    const uint64_t* pValues{};

    safe_VkSemaphoreWaitInfo(const VkSemaphoreWaitInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreWaitInfo(const safe_VkSemaphoreWaitInfo& copy_src);
    safe_VkSemaphoreWaitInfo& operator=(const safe_VkSemaphoreWaitInfo& copy_src);
    safe_VkSemaphoreWaitInfo();
    ~safe_VkSemaphoreWaitInfo();
    void initialize(const VkSemaphoreWaitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreWaitInfo* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreWaitInfo* ptr() { return reinterpret_cast<VkSemaphoreWaitInfo*>(this); }
    VkSemaphoreWaitInfo const* ptr() const { return reinterpret_cast<VkSemaphoreWaitInfo const*>(this); }
};
struct safe_VkSemaphoreSignalInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    uint64_t value;

    safe_VkSemaphoreSignalInfo(const VkSemaphoreSignalInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreSignalInfo(const safe_VkSemaphoreSignalInfo& copy_src);
    safe_VkSemaphoreSignalInfo& operator=(const safe_VkSemaphoreSignalInfo& copy_src);
    safe_VkSemaphoreSignalInfo();
    ~safe_VkSemaphoreSignalInfo();
    void initialize(const VkSemaphoreSignalInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreSignalInfo* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreSignalInfo* ptr() { return reinterpret_cast<VkSemaphoreSignalInfo*>(this); }
    VkSemaphoreSignalInfo const* ptr() const { return reinterpret_cast<VkSemaphoreSignalInfo const*>(this); }
};
struct safe_VkBufferDeviceAddressInfo {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer buffer;

    safe_VkBufferDeviceAddressInfo(const VkBufferDeviceAddressInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkBufferDeviceAddressInfo(const safe_VkBufferDeviceAddressInfo& copy_src);
    safe_VkBufferDeviceAddressInfo& operator=(const safe_VkBufferDeviceAddressInfo& copy_src);
    safe_VkBufferDeviceAddressInfo();
    ~safe_VkBufferDeviceAddressInfo();
    void initialize(const VkBufferDeviceAddressInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferDeviceAddressInfo* copy_src, PNextCopyState* copy_state = {});
    VkBufferDeviceAddressInfo* ptr() { return reinterpret_cast<VkBufferDeviceAddressInfo*>(this); }
    VkBufferDeviceAddressInfo const* ptr() const { return reinterpret_cast<VkBufferDeviceAddressInfo const*>(this); }
};
struct safe_VkBufferOpaqueCaptureAddressCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint64_t opaqueCaptureAddress;

    safe_VkBufferOpaqueCaptureAddressCreateInfo(const VkBufferOpaqueCaptureAddressCreateInfo* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferOpaqueCaptureAddressCreateInfo(const safe_VkBufferOpaqueCaptureAddressCreateInfo& copy_src);
    safe_VkBufferOpaqueCaptureAddressCreateInfo& operator=(const safe_VkBufferOpaqueCaptureAddressCreateInfo& copy_src);
    safe_VkBufferOpaqueCaptureAddressCreateInfo();
    ~safe_VkBufferOpaqueCaptureAddressCreateInfo();
    void initialize(const VkBufferOpaqueCaptureAddressCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferOpaqueCaptureAddressCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkBufferOpaqueCaptureAddressCreateInfo* ptr() { return reinterpret_cast<VkBufferOpaqueCaptureAddressCreateInfo*>(this); }
    VkBufferOpaqueCaptureAddressCreateInfo const* ptr() const {
        return reinterpret_cast<VkBufferOpaqueCaptureAddressCreateInfo const*>(this);
    }
};
struct safe_VkMemoryOpaqueCaptureAddressAllocateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint64_t opaqueCaptureAddress;

    safe_VkMemoryOpaqueCaptureAddressAllocateInfo(const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryOpaqueCaptureAddressAllocateInfo(const safe_VkMemoryOpaqueCaptureAddressAllocateInfo& copy_src);
    safe_VkMemoryOpaqueCaptureAddressAllocateInfo& operator=(const safe_VkMemoryOpaqueCaptureAddressAllocateInfo& copy_src);
    safe_VkMemoryOpaqueCaptureAddressAllocateInfo();
    ~safe_VkMemoryOpaqueCaptureAddressAllocateInfo();
    void initialize(const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryOpaqueCaptureAddressAllocateInfo* copy_src, PNextCopyState* copy_state = {});
    VkMemoryOpaqueCaptureAddressAllocateInfo* ptr() { return reinterpret_cast<VkMemoryOpaqueCaptureAddressAllocateInfo*>(this); }
    VkMemoryOpaqueCaptureAddressAllocateInfo const* ptr() const {
        return reinterpret_cast<VkMemoryOpaqueCaptureAddressAllocateInfo const*>(this);
    }
};
struct safe_VkDeviceMemoryOpaqueCaptureAddressInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;

    safe_VkDeviceMemoryOpaqueCaptureAddressInfo(const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceMemoryOpaqueCaptureAddressInfo(const safe_VkDeviceMemoryOpaqueCaptureAddressInfo& copy_src);
    safe_VkDeviceMemoryOpaqueCaptureAddressInfo& operator=(const safe_VkDeviceMemoryOpaqueCaptureAddressInfo& copy_src);
    safe_VkDeviceMemoryOpaqueCaptureAddressInfo();
    ~safe_VkDeviceMemoryOpaqueCaptureAddressInfo();
    void initialize(const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceMemoryOpaqueCaptureAddressInfo* copy_src, PNextCopyState* copy_state = {});
    VkDeviceMemoryOpaqueCaptureAddressInfo* ptr() { return reinterpret_cast<VkDeviceMemoryOpaqueCaptureAddressInfo*>(this); }
    VkDeviceMemoryOpaqueCaptureAddressInfo const* ptr() const {
        return reinterpret_cast<VkDeviceMemoryOpaqueCaptureAddressInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceVulkan13Properties {
    VkStructureType sType;
    void* pNext{};
    uint32_t minSubgroupSize;
    uint32_t maxSubgroupSize;
    uint32_t maxComputeWorkgroupSubgroups;
    VkShaderStageFlags requiredSubgroupSizeStages;
    uint32_t maxInlineUniformBlockSize;
    uint32_t maxPerStageDescriptorInlineUniformBlocks;
    uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    uint32_t maxDescriptorSetInlineUniformBlocks;
    uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    uint32_t maxInlineUniformTotalSize;
    VkBool32 integerDotProduct8BitUnsignedAccelerated;
    VkBool32 integerDotProduct8BitSignedAccelerated;
    VkBool32 integerDotProduct8BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated;
    VkBool32 integerDotProduct4x8BitPackedSignedAccelerated;
    VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    VkBool32 integerDotProduct16BitUnsignedAccelerated;
    VkBool32 integerDotProduct16BitSignedAccelerated;
    VkBool32 integerDotProduct16BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct32BitUnsignedAccelerated;
    VkBool32 integerDotProduct32BitSignedAccelerated;
    VkBool32 integerDotProduct32BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct64BitUnsignedAccelerated;
    VkBool32 integerDotProduct64BitSignedAccelerated;
    VkBool32 integerDotProduct64BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    VkDeviceSize storageTexelBufferOffsetAlignmentBytes;
    VkBool32 storageTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize uniformTexelBufferOffsetAlignmentBytes;
    VkBool32 uniformTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize maxBufferSize;

    safe_VkPhysicalDeviceVulkan13Properties(const VkPhysicalDeviceVulkan13Properties* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceVulkan13Properties(const safe_VkPhysicalDeviceVulkan13Properties& copy_src);
    safe_VkPhysicalDeviceVulkan13Properties& operator=(const safe_VkPhysicalDeviceVulkan13Properties& copy_src);
    safe_VkPhysicalDeviceVulkan13Properties();
    ~safe_VkPhysicalDeviceVulkan13Properties();
    void initialize(const VkPhysicalDeviceVulkan13Properties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVulkan13Properties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVulkan13Properties* ptr() { return reinterpret_cast<VkPhysicalDeviceVulkan13Properties*>(this); }
    VkPhysicalDeviceVulkan13Properties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVulkan13Properties const*>(this);
    }
};
struct safe_VkPipelineCreationFeedbackCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreationFeedback* pPipelineCreationFeedback{};
    uint32_t pipelineStageCreationFeedbackCount;
    VkPipelineCreationFeedback* pPipelineStageCreationFeedbacks{};

    safe_VkPipelineCreationFeedbackCreateInfo(const VkPipelineCreationFeedbackCreateInfo* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineCreationFeedbackCreateInfo(const safe_VkPipelineCreationFeedbackCreateInfo& copy_src);
    safe_VkPipelineCreationFeedbackCreateInfo& operator=(const safe_VkPipelineCreationFeedbackCreateInfo& copy_src);
    safe_VkPipelineCreationFeedbackCreateInfo();
    ~safe_VkPipelineCreationFeedbackCreateInfo();
    void initialize(const VkPipelineCreationFeedbackCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCreationFeedbackCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCreationFeedbackCreateInfo* ptr() { return reinterpret_cast<VkPipelineCreationFeedbackCreateInfo*>(this); }
    VkPipelineCreationFeedbackCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineCreationFeedbackCreateInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceToolProperties {
    VkStructureType sType;
    void* pNext{};
    char name[VK_MAX_EXTENSION_NAME_SIZE];
    char version[VK_MAX_EXTENSION_NAME_SIZE];
    VkToolPurposeFlags purposes;
    char description[VK_MAX_DESCRIPTION_SIZE];
    char layer[VK_MAX_EXTENSION_NAME_SIZE];

    safe_VkPhysicalDeviceToolProperties(const VkPhysicalDeviceToolProperties* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkPhysicalDeviceToolProperties(const safe_VkPhysicalDeviceToolProperties& copy_src);
    safe_VkPhysicalDeviceToolProperties& operator=(const safe_VkPhysicalDeviceToolProperties& copy_src);
    safe_VkPhysicalDeviceToolProperties();
    ~safe_VkPhysicalDeviceToolProperties();
    void initialize(const VkPhysicalDeviceToolProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceToolProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceToolProperties* ptr() { return reinterpret_cast<VkPhysicalDeviceToolProperties*>(this); }
    VkPhysicalDeviceToolProperties const* ptr() const { return reinterpret_cast<VkPhysicalDeviceToolProperties const*>(this); }
};
struct safe_VkDevicePrivateDataCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t privateDataSlotRequestCount;

    safe_VkDevicePrivateDataCreateInfo(const VkDevicePrivateDataCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkDevicePrivateDataCreateInfo(const safe_VkDevicePrivateDataCreateInfo& copy_src);
    safe_VkDevicePrivateDataCreateInfo& operator=(const safe_VkDevicePrivateDataCreateInfo& copy_src);
    safe_VkDevicePrivateDataCreateInfo();
    ~safe_VkDevicePrivateDataCreateInfo();
    void initialize(const VkDevicePrivateDataCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDevicePrivateDataCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDevicePrivateDataCreateInfo* ptr() { return reinterpret_cast<VkDevicePrivateDataCreateInfo*>(this); }
    VkDevicePrivateDataCreateInfo const* ptr() const { return reinterpret_cast<VkDevicePrivateDataCreateInfo const*>(this); }
};
struct safe_VkPrivateDataSlotCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    VkPrivateDataSlotCreateFlags flags;

    safe_VkPrivateDataSlotCreateInfo(const VkPrivateDataSlotCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkPrivateDataSlotCreateInfo(const safe_VkPrivateDataSlotCreateInfo& copy_src);
    safe_VkPrivateDataSlotCreateInfo& operator=(const safe_VkPrivateDataSlotCreateInfo& copy_src);
    safe_VkPrivateDataSlotCreateInfo();
    ~safe_VkPrivateDataSlotCreateInfo();
    void initialize(const VkPrivateDataSlotCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPrivateDataSlotCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPrivateDataSlotCreateInfo* ptr() { return reinterpret_cast<VkPrivateDataSlotCreateInfo*>(this); }
    VkPrivateDataSlotCreateInfo const* ptr() const { return reinterpret_cast<VkPrivateDataSlotCreateInfo const*>(this); }
};
struct safe_VkMemoryBarrier2 {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineStageFlags2 srcStageMask;
    VkAccessFlags2 srcAccessMask;
    VkPipelineStageFlags2 dstStageMask;
    VkAccessFlags2 dstAccessMask;

    safe_VkMemoryBarrier2(const VkMemoryBarrier2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryBarrier2(const safe_VkMemoryBarrier2& copy_src);
    safe_VkMemoryBarrier2& operator=(const safe_VkMemoryBarrier2& copy_src);
    safe_VkMemoryBarrier2();
    ~safe_VkMemoryBarrier2();
    void initialize(const VkMemoryBarrier2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryBarrier2* copy_src, PNextCopyState* copy_state = {});
    VkMemoryBarrier2* ptr() { return reinterpret_cast<VkMemoryBarrier2*>(this); }
    VkMemoryBarrier2 const* ptr() const { return reinterpret_cast<VkMemoryBarrier2 const*>(this); }
};
struct safe_VkBufferMemoryBarrier2 {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineStageFlags2 srcStageMask;
    VkAccessFlags2 srcAccessMask;
    VkPipelineStageFlags2 dstStageMask;
    VkAccessFlags2 dstAccessMask;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;

    safe_VkBufferMemoryBarrier2(const VkBufferMemoryBarrier2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferMemoryBarrier2(const safe_VkBufferMemoryBarrier2& copy_src);
    safe_VkBufferMemoryBarrier2& operator=(const safe_VkBufferMemoryBarrier2& copy_src);
    safe_VkBufferMemoryBarrier2();
    ~safe_VkBufferMemoryBarrier2();
    void initialize(const VkBufferMemoryBarrier2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferMemoryBarrier2* copy_src, PNextCopyState* copy_state = {});
    VkBufferMemoryBarrier2* ptr() { return reinterpret_cast<VkBufferMemoryBarrier2*>(this); }
    VkBufferMemoryBarrier2 const* ptr() const { return reinterpret_cast<VkBufferMemoryBarrier2 const*>(this); }
};
struct safe_VkImageMemoryBarrier2 {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineStageFlags2 srcStageMask;
    VkAccessFlags2 srcAccessMask;
    VkPipelineStageFlags2 dstStageMask;
    VkAccessFlags2 dstAccessMask;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkImage image;
    VkImageSubresourceRange subresourceRange;

    safe_VkImageMemoryBarrier2(const VkImageMemoryBarrier2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageMemoryBarrier2(const safe_VkImageMemoryBarrier2& copy_src);
    safe_VkImageMemoryBarrier2& operator=(const safe_VkImageMemoryBarrier2& copy_src);
    safe_VkImageMemoryBarrier2();
    ~safe_VkImageMemoryBarrier2();
    void initialize(const VkImageMemoryBarrier2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageMemoryBarrier2* copy_src, PNextCopyState* copy_state = {});
    VkImageMemoryBarrier2* ptr() { return reinterpret_cast<VkImageMemoryBarrier2*>(this); }
    VkImageMemoryBarrier2 const* ptr() const { return reinterpret_cast<VkImageMemoryBarrier2 const*>(this); }
};
struct safe_VkDependencyInfo {
    VkStructureType sType;
    const void* pNext{};
    VkDependencyFlags dependencyFlags;
    uint32_t memoryBarrierCount;
    safe_VkMemoryBarrier2* pMemoryBarriers{};
    uint32_t bufferMemoryBarrierCount;
    safe_VkBufferMemoryBarrier2* pBufferMemoryBarriers{};
    uint32_t imageMemoryBarrierCount;
    safe_VkImageMemoryBarrier2* pImageMemoryBarriers{};

    safe_VkDependencyInfo(const VkDependencyInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDependencyInfo(const safe_VkDependencyInfo& copy_src);
    safe_VkDependencyInfo& operator=(const safe_VkDependencyInfo& copy_src);
    safe_VkDependencyInfo();
    ~safe_VkDependencyInfo();
    void initialize(const VkDependencyInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDependencyInfo* copy_src, PNextCopyState* copy_state = {});
    VkDependencyInfo* ptr() { return reinterpret_cast<VkDependencyInfo*>(this); }
    VkDependencyInfo const* ptr() const { return reinterpret_cast<VkDependencyInfo const*>(this); }
};
struct safe_VkSemaphoreSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    uint64_t value;
    VkPipelineStageFlags2 stageMask;
    uint32_t deviceIndex;

    safe_VkSemaphoreSubmitInfo(const VkSemaphoreSubmitInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreSubmitInfo(const safe_VkSemaphoreSubmitInfo& copy_src);
    safe_VkSemaphoreSubmitInfo& operator=(const safe_VkSemaphoreSubmitInfo& copy_src);
    safe_VkSemaphoreSubmitInfo();
    ~safe_VkSemaphoreSubmitInfo();
    void initialize(const VkSemaphoreSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreSubmitInfo* ptr() { return reinterpret_cast<VkSemaphoreSubmitInfo*>(this); }
    VkSemaphoreSubmitInfo const* ptr() const { return reinterpret_cast<VkSemaphoreSubmitInfo const*>(this); }
};
struct safe_VkCommandBufferSubmitInfo {
    VkStructureType sType;
    const void* pNext{};
    VkCommandBuffer commandBuffer;
    uint32_t deviceMask;

    safe_VkCommandBufferSubmitInfo(const VkCommandBufferSubmitInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkCommandBufferSubmitInfo(const safe_VkCommandBufferSubmitInfo& copy_src);
    safe_VkCommandBufferSubmitInfo& operator=(const safe_VkCommandBufferSubmitInfo& copy_src);
    safe_VkCommandBufferSubmitInfo();
    ~safe_VkCommandBufferSubmitInfo();
    void initialize(const VkCommandBufferSubmitInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferSubmitInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferSubmitInfo* ptr() { return reinterpret_cast<VkCommandBufferSubmitInfo*>(this); }
    VkCommandBufferSubmitInfo const* ptr() const { return reinterpret_cast<VkCommandBufferSubmitInfo const*>(this); }
};
struct safe_VkSubmitInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkSubmitFlags flags;
    uint32_t waitSemaphoreInfoCount;
    safe_VkSemaphoreSubmitInfo* pWaitSemaphoreInfos{};
    uint32_t commandBufferInfoCount;
    safe_VkCommandBufferSubmitInfo* pCommandBufferInfos{};
    uint32_t signalSemaphoreInfoCount;
    safe_VkSemaphoreSubmitInfo* pSignalSemaphoreInfos{};

    safe_VkSubmitInfo2(const VkSubmitInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubmitInfo2(const safe_VkSubmitInfo2& copy_src);
    safe_VkSubmitInfo2& operator=(const safe_VkSubmitInfo2& copy_src);
    safe_VkSubmitInfo2();
    ~safe_VkSubmitInfo2();
    void initialize(const VkSubmitInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubmitInfo2* copy_src, PNextCopyState* copy_state = {});
    VkSubmitInfo2* ptr() { return reinterpret_cast<VkSubmitInfo2*>(this); }
    VkSubmitInfo2 const* ptr() const { return reinterpret_cast<VkSubmitInfo2 const*>(this); }
};
struct safe_VkBufferCopy2 {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize srcOffset;
    VkDeviceSize dstOffset;
    VkDeviceSize size;

    safe_VkBufferCopy2(const VkBufferCopy2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCopy2(const safe_VkBufferCopy2& copy_src);
    safe_VkBufferCopy2& operator=(const safe_VkBufferCopy2& copy_src);
    safe_VkBufferCopy2();
    ~safe_VkBufferCopy2();
    void initialize(const VkBufferCopy2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCopy2* copy_src, PNextCopyState* copy_state = {});
    VkBufferCopy2* ptr() { return reinterpret_cast<VkBufferCopy2*>(this); }
    VkBufferCopy2 const* ptr() const { return reinterpret_cast<VkBufferCopy2 const*>(this); }
};
struct safe_VkCopyBufferInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer srcBuffer;
    VkBuffer dstBuffer;
    uint32_t regionCount;
    safe_VkBufferCopy2* pRegions{};

    safe_VkCopyBufferInfo2(const VkCopyBufferInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyBufferInfo2(const safe_VkCopyBufferInfo2& copy_src);
    safe_VkCopyBufferInfo2& operator=(const safe_VkCopyBufferInfo2& copy_src);
    safe_VkCopyBufferInfo2();
    ~safe_VkCopyBufferInfo2();
    void initialize(const VkCopyBufferInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyBufferInfo2* copy_src, PNextCopyState* copy_state = {});
    VkCopyBufferInfo2* ptr() { return reinterpret_cast<VkCopyBufferInfo2*>(this); }
    VkCopyBufferInfo2 const* ptr() const { return reinterpret_cast<VkCopyBufferInfo2 const*>(this); }
};
struct safe_VkImageCopy2 {
    VkStructureType sType;
    const void* pNext{};
    VkImageSubresourceLayers srcSubresource;
    VkOffset3D srcOffset;
    VkImageSubresourceLayers dstSubresource;
    VkOffset3D dstOffset;
    VkExtent3D extent;

    safe_VkImageCopy2(const VkImageCopy2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageCopy2(const safe_VkImageCopy2& copy_src);
    safe_VkImageCopy2& operator=(const safe_VkImageCopy2& copy_src);
    safe_VkImageCopy2();
    ~safe_VkImageCopy2();
    void initialize(const VkImageCopy2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageCopy2* copy_src, PNextCopyState* copy_state = {});
    VkImageCopy2* ptr() { return reinterpret_cast<VkImageCopy2*>(this); }
    VkImageCopy2 const* ptr() const { return reinterpret_cast<VkImageCopy2 const*>(this); }
};
struct safe_VkCopyImageInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkImageCopy2* pRegions{};

    safe_VkCopyImageInfo2(const VkCopyImageInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyImageInfo2(const safe_VkCopyImageInfo2& copy_src);
    safe_VkCopyImageInfo2& operator=(const safe_VkCopyImageInfo2& copy_src);
    safe_VkCopyImageInfo2();
    ~safe_VkCopyImageInfo2();
    void initialize(const VkCopyImageInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyImageInfo2* copy_src, PNextCopyState* copy_state = {});
    VkCopyImageInfo2* ptr() { return reinterpret_cast<VkCopyImageInfo2*>(this); }
    VkCopyImageInfo2 const* ptr() const { return reinterpret_cast<VkCopyImageInfo2 const*>(this); }
};
struct safe_VkBufferImageCopy2 {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize bufferOffset;
    uint32_t bufferRowLength;
    uint32_t bufferImageHeight;
    VkImageSubresourceLayers imageSubresource;
    VkOffset3D imageOffset;
    VkExtent3D imageExtent;

    safe_VkBufferImageCopy2(const VkBufferImageCopy2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferImageCopy2(const safe_VkBufferImageCopy2& copy_src);
    safe_VkBufferImageCopy2& operator=(const safe_VkBufferImageCopy2& copy_src);
    safe_VkBufferImageCopy2();
    ~safe_VkBufferImageCopy2();
    void initialize(const VkBufferImageCopy2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferImageCopy2* copy_src, PNextCopyState* copy_state = {});
    VkBufferImageCopy2* ptr() { return reinterpret_cast<VkBufferImageCopy2*>(this); }
    VkBufferImageCopy2 const* ptr() const { return reinterpret_cast<VkBufferImageCopy2 const*>(this); }
};
struct safe_VkCopyBufferToImageInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer srcBuffer;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkBufferImageCopy2* pRegions{};

    safe_VkCopyBufferToImageInfo2(const VkCopyBufferToImageInfo2* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkCopyBufferToImageInfo2(const safe_VkCopyBufferToImageInfo2& copy_src);
    safe_VkCopyBufferToImageInfo2& operator=(const safe_VkCopyBufferToImageInfo2& copy_src);
    safe_VkCopyBufferToImageInfo2();
    ~safe_VkCopyBufferToImageInfo2();
    void initialize(const VkCopyBufferToImageInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyBufferToImageInfo2* copy_src, PNextCopyState* copy_state = {});
    VkCopyBufferToImageInfo2* ptr() { return reinterpret_cast<VkCopyBufferToImageInfo2*>(this); }
    VkCopyBufferToImageInfo2 const* ptr() const { return reinterpret_cast<VkCopyBufferToImageInfo2 const*>(this); }
};
struct safe_VkCopyImageToBufferInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkBuffer dstBuffer;
    uint32_t regionCount;
    safe_VkBufferImageCopy2* pRegions{};

    safe_VkCopyImageToBufferInfo2(const VkCopyImageToBufferInfo2* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkCopyImageToBufferInfo2(const safe_VkCopyImageToBufferInfo2& copy_src);
    safe_VkCopyImageToBufferInfo2& operator=(const safe_VkCopyImageToBufferInfo2& copy_src);
    safe_VkCopyImageToBufferInfo2();
    ~safe_VkCopyImageToBufferInfo2();
    void initialize(const VkCopyImageToBufferInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyImageToBufferInfo2* copy_src, PNextCopyState* copy_state = {});
    VkCopyImageToBufferInfo2* ptr() { return reinterpret_cast<VkCopyImageToBufferInfo2*>(this); }
    VkCopyImageToBufferInfo2 const* ptr() const { return reinterpret_cast<VkCopyImageToBufferInfo2 const*>(this); }
};
struct safe_VkImageBlit2 {
    VkStructureType sType;
    const void* pNext{};
    VkImageSubresourceLayers srcSubresource;
    VkOffset3D srcOffsets[2];
    VkImageSubresourceLayers dstSubresource;
    VkOffset3D dstOffsets[2];

    safe_VkImageBlit2(const VkImageBlit2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageBlit2(const safe_VkImageBlit2& copy_src);
    safe_VkImageBlit2& operator=(const safe_VkImageBlit2& copy_src);
    safe_VkImageBlit2();
    ~safe_VkImageBlit2();
    void initialize(const VkImageBlit2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageBlit2* copy_src, PNextCopyState* copy_state = {});
    VkImageBlit2* ptr() { return reinterpret_cast<VkImageBlit2*>(this); }
    VkImageBlit2 const* ptr() const { return reinterpret_cast<VkImageBlit2 const*>(this); }
};
struct safe_VkBlitImageInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkImageBlit2* pRegions{};
    VkFilter filter;

    safe_VkBlitImageInfo2(const VkBlitImageInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBlitImageInfo2(const safe_VkBlitImageInfo2& copy_src);
    safe_VkBlitImageInfo2& operator=(const safe_VkBlitImageInfo2& copy_src);
    safe_VkBlitImageInfo2();
    ~safe_VkBlitImageInfo2();
    void initialize(const VkBlitImageInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBlitImageInfo2* copy_src, PNextCopyState* copy_state = {});
    VkBlitImageInfo2* ptr() { return reinterpret_cast<VkBlitImageInfo2*>(this); }
    VkBlitImageInfo2 const* ptr() const { return reinterpret_cast<VkBlitImageInfo2 const*>(this); }
};
struct safe_VkImageResolve2 {
    VkStructureType sType;
    const void* pNext{};
    VkImageSubresourceLayers srcSubresource;
    VkOffset3D srcOffset;
    VkImageSubresourceLayers dstSubresource;
    VkOffset3D dstOffset;
    VkExtent3D extent;

    safe_VkImageResolve2(const VkImageResolve2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageResolve2(const safe_VkImageResolve2& copy_src);
    safe_VkImageResolve2& operator=(const safe_VkImageResolve2& copy_src);
    safe_VkImageResolve2();
    ~safe_VkImageResolve2();
    void initialize(const VkImageResolve2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageResolve2* copy_src, PNextCopyState* copy_state = {});
    VkImageResolve2* ptr() { return reinterpret_cast<VkImageResolve2*>(this); }
    VkImageResolve2 const* ptr() const { return reinterpret_cast<VkImageResolve2 const*>(this); }
};
struct safe_VkResolveImageInfo2 {
    VkStructureType sType;
    const void* pNext{};
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkImageResolve2* pRegions{};

    safe_VkResolveImageInfo2(const VkResolveImageInfo2* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkResolveImageInfo2(const safe_VkResolveImageInfo2& copy_src);
    safe_VkResolveImageInfo2& operator=(const safe_VkResolveImageInfo2& copy_src);
    safe_VkResolveImageInfo2();
    ~safe_VkResolveImageInfo2();
    void initialize(const VkResolveImageInfo2* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkResolveImageInfo2* copy_src, PNextCopyState* copy_state = {});
    VkResolveImageInfo2* ptr() { return reinterpret_cast<VkResolveImageInfo2*>(this); }
    VkResolveImageInfo2 const* ptr() const { return reinterpret_cast<VkResolveImageInfo2 const*>(this); }
};
struct safe_VkPhysicalDeviceSubgroupSizeControlProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t minSubgroupSize;
    uint32_t maxSubgroupSize;
    uint32_t maxComputeWorkgroupSubgroups;
    VkShaderStageFlags requiredSubgroupSizeStages;

    safe_VkPhysicalDeviceSubgroupSizeControlProperties(const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSubgroupSizeControlProperties(const safe_VkPhysicalDeviceSubgroupSizeControlProperties& copy_src);
    safe_VkPhysicalDeviceSubgroupSizeControlProperties& operator=(
        const safe_VkPhysicalDeviceSubgroupSizeControlProperties& copy_src);
    safe_VkPhysicalDeviceSubgroupSizeControlProperties();
    ~safe_VkPhysicalDeviceSubgroupSizeControlProperties();
    void initialize(const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSubgroupSizeControlProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSubgroupSizeControlProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlProperties*>(this);
    }
    VkPhysicalDeviceSubgroupSizeControlProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlProperties const*>(this);
    }
};
struct safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo {
    VkStructureType sType;
    void* pNext{};
    uint32_t requiredSubgroupSize;

    safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(
        const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src);
    safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& operator=(
        const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src);
    safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo();
    ~safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo();
    void initialize(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* ptr() {
        return reinterpret_cast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo*>(this);
    }
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfo const* ptr() const {
        return reinterpret_cast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceInlineUniformBlockProperties {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxInlineUniformBlockSize;
    uint32_t maxPerStageDescriptorInlineUniformBlocks;
    uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    uint32_t maxDescriptorSetInlineUniformBlocks;
    uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;

    safe_VkPhysicalDeviceInlineUniformBlockProperties(const VkPhysicalDeviceInlineUniformBlockProperties* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceInlineUniformBlockProperties(const safe_VkPhysicalDeviceInlineUniformBlockProperties& copy_src);
    safe_VkPhysicalDeviceInlineUniformBlockProperties& operator=(const safe_VkPhysicalDeviceInlineUniformBlockProperties& copy_src);
    safe_VkPhysicalDeviceInlineUniformBlockProperties();
    ~safe_VkPhysicalDeviceInlineUniformBlockProperties();
    void initialize(const VkPhysicalDeviceInlineUniformBlockProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceInlineUniformBlockProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceInlineUniformBlockProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockProperties*>(this);
    }
    VkPhysicalDeviceInlineUniformBlockProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockProperties const*>(this);
    }
};
struct safe_VkWriteDescriptorSetInlineUniformBlock {
    VkStructureType sType;
    const void* pNext{};
    uint32_t dataSize;
    const void* pData{};

    safe_VkWriteDescriptorSetInlineUniformBlock(const VkWriteDescriptorSetInlineUniformBlock* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWriteDescriptorSetInlineUniformBlock(const safe_VkWriteDescriptorSetInlineUniformBlock& copy_src);
    safe_VkWriteDescriptorSetInlineUniformBlock& operator=(const safe_VkWriteDescriptorSetInlineUniformBlock& copy_src);
    safe_VkWriteDescriptorSetInlineUniformBlock();
    ~safe_VkWriteDescriptorSetInlineUniformBlock();
    void initialize(const VkWriteDescriptorSetInlineUniformBlock* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWriteDescriptorSetInlineUniformBlock* copy_src, PNextCopyState* copy_state = {});
    VkWriteDescriptorSetInlineUniformBlock* ptr() { return reinterpret_cast<VkWriteDescriptorSetInlineUniformBlock*>(this); }
    VkWriteDescriptorSetInlineUniformBlock const* ptr() const {
        return reinterpret_cast<VkWriteDescriptorSetInlineUniformBlock const*>(this);
    }
};
struct safe_VkDescriptorPoolInlineUniformBlockCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxInlineUniformBlockBindings;

    safe_VkDescriptorPoolInlineUniformBlockCreateInfo(const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorPoolInlineUniformBlockCreateInfo(const safe_VkDescriptorPoolInlineUniformBlockCreateInfo& copy_src);
    safe_VkDescriptorPoolInlineUniformBlockCreateInfo& operator=(const safe_VkDescriptorPoolInlineUniformBlockCreateInfo& copy_src);
    safe_VkDescriptorPoolInlineUniformBlockCreateInfo();
    ~safe_VkDescriptorPoolInlineUniformBlockCreateInfo();
    void initialize(const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorPoolInlineUniformBlockCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorPoolInlineUniformBlockCreateInfo* ptr() {
        return reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfo*>(this);
    }
    VkDescriptorPoolInlineUniformBlockCreateInfo const* ptr() const {
        return reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfo const*>(this);
    }
};
struct safe_VkRenderingAttachmentInfo {
    VkStructureType sType;
    const void* pNext{};
    VkImageView imageView;
    VkImageLayout imageLayout;
    VkResolveModeFlagBits resolveMode;
    VkImageView resolveImageView;
    VkImageLayout resolveImageLayout;
    VkAttachmentLoadOp loadOp;
    VkAttachmentStoreOp storeOp;
    VkClearValue clearValue;

    safe_VkRenderingAttachmentInfo(const VkRenderingAttachmentInfo* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkRenderingAttachmentInfo(const safe_VkRenderingAttachmentInfo& copy_src);
    safe_VkRenderingAttachmentInfo& operator=(const safe_VkRenderingAttachmentInfo& copy_src);
    safe_VkRenderingAttachmentInfo();
    ~safe_VkRenderingAttachmentInfo();
    void initialize(const VkRenderingAttachmentInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingAttachmentInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderingAttachmentInfo* ptr() { return reinterpret_cast<VkRenderingAttachmentInfo*>(this); }
    VkRenderingAttachmentInfo const* ptr() const { return reinterpret_cast<VkRenderingAttachmentInfo const*>(this); }
};
struct safe_VkRenderingInfo {
    VkStructureType sType;
    const void* pNext{};
    VkRenderingFlags flags;
    VkRect2D renderArea;
    uint32_t layerCount;
    uint32_t viewMask;
    uint32_t colorAttachmentCount;
    safe_VkRenderingAttachmentInfo* pColorAttachments{};
    safe_VkRenderingAttachmentInfo* pDepthAttachment{};
    safe_VkRenderingAttachmentInfo* pStencilAttachment{};

    safe_VkRenderingInfo(const VkRenderingInfo* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingInfo(const safe_VkRenderingInfo& copy_src);
    safe_VkRenderingInfo& operator=(const safe_VkRenderingInfo& copy_src);
    safe_VkRenderingInfo();
    ~safe_VkRenderingInfo();
    void initialize(const VkRenderingInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingInfo* copy_src, PNextCopyState* copy_state = {});
    VkRenderingInfo* ptr() { return reinterpret_cast<VkRenderingInfo*>(this); }
    VkRenderingInfo const* ptr() const { return reinterpret_cast<VkRenderingInfo const*>(this); }
};
struct safe_VkPipelineRenderingCreateInfo {
    VkStructureType sType;
    const void* pNext{};
    uint32_t viewMask;
    uint32_t colorAttachmentCount;
    const VkFormat* pColorAttachmentFormats{};
    VkFormat depthAttachmentFormat;
    VkFormat stencilAttachmentFormat;

    safe_VkPipelineRenderingCreateInfo(const VkPipelineRenderingCreateInfo* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkPipelineRenderingCreateInfo(const safe_VkPipelineRenderingCreateInfo& copy_src);
    safe_VkPipelineRenderingCreateInfo& operator=(const safe_VkPipelineRenderingCreateInfo& copy_src);
    safe_VkPipelineRenderingCreateInfo();
    ~safe_VkPipelineRenderingCreateInfo();
    void initialize(const VkPipelineRenderingCreateInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRenderingCreateInfo* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRenderingCreateInfo* ptr() { return reinterpret_cast<VkPipelineRenderingCreateInfo*>(this); }
    VkPipelineRenderingCreateInfo const* ptr() const { return reinterpret_cast<VkPipelineRenderingCreateInfo const*>(this); }
};
struct safe_VkCommandBufferInheritanceRenderingInfo {
    VkStructureType sType;
    const void* pNext{};
    VkRenderingFlags flags;
    uint32_t viewMask;
    uint32_t colorAttachmentCount;
    const VkFormat* pColorAttachmentFormats{};
    VkFormat depthAttachmentFormat;
    VkFormat stencilAttachmentFormat;
    VkSampleCountFlagBits rasterizationSamples;

    safe_VkCommandBufferInheritanceRenderingInfo(const VkCommandBufferInheritanceRenderingInfo* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCommandBufferInheritanceRenderingInfo(const safe_VkCommandBufferInheritanceRenderingInfo& copy_src);
    safe_VkCommandBufferInheritanceRenderingInfo& operator=(const safe_VkCommandBufferInheritanceRenderingInfo& copy_src);
    safe_VkCommandBufferInheritanceRenderingInfo();
    ~safe_VkCommandBufferInheritanceRenderingInfo();
    void initialize(const VkCommandBufferInheritanceRenderingInfo* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferInheritanceRenderingInfo* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferInheritanceRenderingInfo* ptr() { return reinterpret_cast<VkCommandBufferInheritanceRenderingInfo*>(this); }
    VkCommandBufferInheritanceRenderingInfo const* ptr() const {
        return reinterpret_cast<VkCommandBufferInheritanceRenderingInfo const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderIntegerDotProductProperties {
    VkStructureType sType;
    void* pNext{};
    VkBool32 integerDotProduct8BitUnsignedAccelerated;
    VkBool32 integerDotProduct8BitSignedAccelerated;
    VkBool32 integerDotProduct8BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated;
    VkBool32 integerDotProduct4x8BitPackedSignedAccelerated;
    VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    VkBool32 integerDotProduct16BitUnsignedAccelerated;
    VkBool32 integerDotProduct16BitSignedAccelerated;
    VkBool32 integerDotProduct16BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct32BitUnsignedAccelerated;
    VkBool32 integerDotProduct32BitSignedAccelerated;
    VkBool32 integerDotProduct32BitMixedSignednessAccelerated;
    VkBool32 integerDotProduct64BitUnsignedAccelerated;
    VkBool32 integerDotProduct64BitSignedAccelerated;
    VkBool32 integerDotProduct64BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;

    safe_VkPhysicalDeviceShaderIntegerDotProductProperties(const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderIntegerDotProductProperties(const safe_VkPhysicalDeviceShaderIntegerDotProductProperties& copy_src);
    safe_VkPhysicalDeviceShaderIntegerDotProductProperties& operator=(
        const safe_VkPhysicalDeviceShaderIntegerDotProductProperties& copy_src);
    safe_VkPhysicalDeviceShaderIntegerDotProductProperties();
    ~safe_VkPhysicalDeviceShaderIntegerDotProductProperties();
    void initialize(const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderIntegerDotProductProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderIntegerDotProductProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductProperties*>(this);
    }
    VkPhysicalDeviceShaderIntegerDotProductProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductProperties const*>(this);
    }
};
struct safe_VkPhysicalDeviceTexelBufferAlignmentProperties {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize storageTexelBufferOffsetAlignmentBytes;
    VkBool32 storageTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize uniformTexelBufferOffsetAlignmentBytes;
    VkBool32 uniformTexelBufferOffsetSingleTexelAlignment;

    safe_VkPhysicalDeviceTexelBufferAlignmentProperties(const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceTexelBufferAlignmentProperties(const safe_VkPhysicalDeviceTexelBufferAlignmentProperties& copy_src);
    safe_VkPhysicalDeviceTexelBufferAlignmentProperties& operator=(
        const safe_VkPhysicalDeviceTexelBufferAlignmentProperties& copy_src);
    safe_VkPhysicalDeviceTexelBufferAlignmentProperties();
    ~safe_VkPhysicalDeviceTexelBufferAlignmentProperties();
    void initialize(const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceTexelBufferAlignmentProperties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceTexelBufferAlignmentProperties* ptr() {
        return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentProperties*>(this);
    }
    VkPhysicalDeviceTexelBufferAlignmentProperties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentProperties const*>(this);
    }
};
struct safe_VkFormatProperties3 {
    VkStructureType sType;
    void* pNext{};
    VkFormatFeatureFlags2 linearTilingFeatures;
    VkFormatFeatureFlags2 optimalTilingFeatures;
    VkFormatFeatureFlags2 bufferFeatures;

    safe_VkFormatProperties3(const VkFormatProperties3* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFormatProperties3(const safe_VkFormatProperties3& copy_src);
    safe_VkFormatProperties3& operator=(const safe_VkFormatProperties3& copy_src);
    safe_VkFormatProperties3();
    ~safe_VkFormatProperties3();
    void initialize(const VkFormatProperties3* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFormatProperties3* copy_src, PNextCopyState* copy_state = {});
    VkFormatProperties3* ptr() { return reinterpret_cast<VkFormatProperties3*>(this); }
    VkFormatProperties3 const* ptr() const { return reinterpret_cast<VkFormatProperties3 const*>(this); }
};
struct safe_VkPhysicalDeviceMaintenance4Properties {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize maxBufferSize;

    safe_VkPhysicalDeviceMaintenance4Properties(const VkPhysicalDeviceMaintenance4Properties* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMaintenance4Properties(const safe_VkPhysicalDeviceMaintenance4Properties& copy_src);
    safe_VkPhysicalDeviceMaintenance4Properties& operator=(const safe_VkPhysicalDeviceMaintenance4Properties& copy_src);
    safe_VkPhysicalDeviceMaintenance4Properties();
    ~safe_VkPhysicalDeviceMaintenance4Properties();
    void initialize(const VkPhysicalDeviceMaintenance4Properties* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMaintenance4Properties* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMaintenance4Properties* ptr() { return reinterpret_cast<VkPhysicalDeviceMaintenance4Properties*>(this); }
    VkPhysicalDeviceMaintenance4Properties const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMaintenance4Properties const*>(this);
    }
};
struct safe_VkDeviceBufferMemoryRequirements {
    VkStructureType sType;
    const void* pNext{};
    safe_VkBufferCreateInfo* pCreateInfo{};

    safe_VkDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkDeviceBufferMemoryRequirements(const safe_VkDeviceBufferMemoryRequirements& copy_src);
    safe_VkDeviceBufferMemoryRequirements& operator=(const safe_VkDeviceBufferMemoryRequirements& copy_src);
    safe_VkDeviceBufferMemoryRequirements();
    ~safe_VkDeviceBufferMemoryRequirements();
    void initialize(const VkDeviceBufferMemoryRequirements* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceBufferMemoryRequirements* copy_src, PNextCopyState* copy_state = {});
    VkDeviceBufferMemoryRequirements* ptr() { return reinterpret_cast<VkDeviceBufferMemoryRequirements*>(this); }
    VkDeviceBufferMemoryRequirements const* ptr() const { return reinterpret_cast<VkDeviceBufferMemoryRequirements const*>(this); }
};
struct safe_VkDeviceImageMemoryRequirements {
    VkStructureType sType;
    const void* pNext{};
    safe_VkImageCreateInfo* pCreateInfo{};
    VkImageAspectFlagBits planeAspect;

    safe_VkDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkDeviceImageMemoryRequirements(const safe_VkDeviceImageMemoryRequirements& copy_src);
    safe_VkDeviceImageMemoryRequirements& operator=(const safe_VkDeviceImageMemoryRequirements& copy_src);
    safe_VkDeviceImageMemoryRequirements();
    ~safe_VkDeviceImageMemoryRequirements();
    void initialize(const VkDeviceImageMemoryRequirements* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceImageMemoryRequirements* copy_src, PNextCopyState* copy_state = {});
    VkDeviceImageMemoryRequirements* ptr() { return reinterpret_cast<VkDeviceImageMemoryRequirements*>(this); }
    VkDeviceImageMemoryRequirements const* ptr() const { return reinterpret_cast<VkDeviceImageMemoryRequirements const*>(this); }
};
struct safe_VkSwapchainCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSwapchainCreateFlagsKHR flags;
    VkSurfaceKHR surface;
    uint32_t minImageCount;
    VkFormat imageFormat;
    VkColorSpaceKHR imageColorSpace;
    VkExtent2D imageExtent;
    uint32_t imageArrayLayers;
    VkImageUsageFlags imageUsage;
    VkSharingMode imageSharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices{};
    VkSurfaceTransformFlagBitsKHR preTransform;
    VkCompositeAlphaFlagBitsKHR compositeAlpha;
    VkPresentModeKHR presentMode;
    VkBool32 clipped;
    VkSwapchainKHR oldSwapchain;

    safe_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkSwapchainCreateInfoKHR(const safe_VkSwapchainCreateInfoKHR& copy_src);
    safe_VkSwapchainCreateInfoKHR& operator=(const safe_VkSwapchainCreateInfoKHR& copy_src);
    safe_VkSwapchainCreateInfoKHR();
    ~safe_VkSwapchainCreateInfoKHR();
    void initialize(const VkSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainCreateInfoKHR* ptr() { return reinterpret_cast<VkSwapchainCreateInfoKHR*>(this); }
    VkSwapchainCreateInfoKHR const* ptr() const { return reinterpret_cast<VkSwapchainCreateInfoKHR const*>(this); }
};
struct safe_VkPresentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores{};
    uint32_t swapchainCount;
    VkSwapchainKHR* pSwapchains{};
    const uint32_t* pImageIndices{};
    VkResult* pResults{};

    safe_VkPresentInfoKHR(const VkPresentInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPresentInfoKHR(const safe_VkPresentInfoKHR& copy_src);
    safe_VkPresentInfoKHR& operator=(const safe_VkPresentInfoKHR& copy_src);
    safe_VkPresentInfoKHR();
    ~safe_VkPresentInfoKHR();
    void initialize(const VkPresentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPresentInfoKHR* ptr() { return reinterpret_cast<VkPresentInfoKHR*>(this); }
    VkPresentInfoKHR const* ptr() const { return reinterpret_cast<VkPresentInfoKHR const*>(this); }
};
struct safe_VkImageSwapchainCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSwapchainKHR swapchain;

    safe_VkImageSwapchainCreateInfoKHR(const VkImageSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkImageSwapchainCreateInfoKHR(const safe_VkImageSwapchainCreateInfoKHR& copy_src);
    safe_VkImageSwapchainCreateInfoKHR& operator=(const safe_VkImageSwapchainCreateInfoKHR& copy_src);
    safe_VkImageSwapchainCreateInfoKHR();
    ~safe_VkImageSwapchainCreateInfoKHR();
    void initialize(const VkImageSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageSwapchainCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImageSwapchainCreateInfoKHR* ptr() { return reinterpret_cast<VkImageSwapchainCreateInfoKHR*>(this); }
    VkImageSwapchainCreateInfoKHR const* ptr() const { return reinterpret_cast<VkImageSwapchainCreateInfoKHR const*>(this); }
};
struct safe_VkBindImageMemorySwapchainInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSwapchainKHR swapchain;
    uint32_t imageIndex;

    safe_VkBindImageMemorySwapchainInfoKHR(const VkBindImageMemorySwapchainInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkBindImageMemorySwapchainInfoKHR(const safe_VkBindImageMemorySwapchainInfoKHR& copy_src);
    safe_VkBindImageMemorySwapchainInfoKHR& operator=(const safe_VkBindImageMemorySwapchainInfoKHR& copy_src);
    safe_VkBindImageMemorySwapchainInfoKHR();
    ~safe_VkBindImageMemorySwapchainInfoKHR();
    void initialize(const VkBindImageMemorySwapchainInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindImageMemorySwapchainInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkBindImageMemorySwapchainInfoKHR* ptr() { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHR*>(this); }
    VkBindImageMemorySwapchainInfoKHR const* ptr() const {
        return reinterpret_cast<VkBindImageMemorySwapchainInfoKHR const*>(this);
    }
};
struct safe_VkAcquireNextImageInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSwapchainKHR swapchain;
    uint64_t timeout;
    VkSemaphore semaphore;
    VkFence fence;
    uint32_t deviceMask;

    safe_VkAcquireNextImageInfoKHR(const VkAcquireNextImageInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkAcquireNextImageInfoKHR(const safe_VkAcquireNextImageInfoKHR& copy_src);
    safe_VkAcquireNextImageInfoKHR& operator=(const safe_VkAcquireNextImageInfoKHR& copy_src);
    safe_VkAcquireNextImageInfoKHR();
    ~safe_VkAcquireNextImageInfoKHR();
    void initialize(const VkAcquireNextImageInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAcquireNextImageInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAcquireNextImageInfoKHR* ptr() { return reinterpret_cast<VkAcquireNextImageInfoKHR*>(this); }
    VkAcquireNextImageInfoKHR const* ptr() const { return reinterpret_cast<VkAcquireNextImageInfoKHR const*>(this); }
};
struct safe_VkDeviceGroupPresentCapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE];
    VkDeviceGroupPresentModeFlagsKHR modes;

    safe_VkDeviceGroupPresentCapabilitiesKHR(const VkDeviceGroupPresentCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkDeviceGroupPresentCapabilitiesKHR(const safe_VkDeviceGroupPresentCapabilitiesKHR& copy_src);
    safe_VkDeviceGroupPresentCapabilitiesKHR& operator=(const safe_VkDeviceGroupPresentCapabilitiesKHR& copy_src);
    safe_VkDeviceGroupPresentCapabilitiesKHR();
    ~safe_VkDeviceGroupPresentCapabilitiesKHR();
    void initialize(const VkDeviceGroupPresentCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupPresentCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupPresentCapabilitiesKHR* ptr() { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR*>(this); }
    VkDeviceGroupPresentCapabilitiesKHR const* ptr() const {
        return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR const*>(this);
    }
};
struct safe_VkDeviceGroupPresentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    const uint32_t* pDeviceMasks{};
    VkDeviceGroupPresentModeFlagBitsKHR mode;

    safe_VkDeviceGroupPresentInfoKHR(const VkDeviceGroupPresentInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkDeviceGroupPresentInfoKHR(const safe_VkDeviceGroupPresentInfoKHR& copy_src);
    safe_VkDeviceGroupPresentInfoKHR& operator=(const safe_VkDeviceGroupPresentInfoKHR& copy_src);
    safe_VkDeviceGroupPresentInfoKHR();
    ~safe_VkDeviceGroupPresentInfoKHR();
    void initialize(const VkDeviceGroupPresentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupPresentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupPresentInfoKHR* ptr() { return reinterpret_cast<VkDeviceGroupPresentInfoKHR*>(this); }
    VkDeviceGroupPresentInfoKHR const* ptr() const { return reinterpret_cast<VkDeviceGroupPresentInfoKHR const*>(this); }
};
struct safe_VkDeviceGroupSwapchainCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceGroupPresentModeFlagsKHR modes;

    safe_VkDeviceGroupSwapchainCreateInfoKHR(const VkDeviceGroupSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkDeviceGroupSwapchainCreateInfoKHR(const safe_VkDeviceGroupSwapchainCreateInfoKHR& copy_src);
    safe_VkDeviceGroupSwapchainCreateInfoKHR& operator=(const safe_VkDeviceGroupSwapchainCreateInfoKHR& copy_src);
    safe_VkDeviceGroupSwapchainCreateInfoKHR();
    ~safe_VkDeviceGroupSwapchainCreateInfoKHR();
    void initialize(const VkDeviceGroupSwapchainCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceGroupSwapchainCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceGroupSwapchainCreateInfoKHR* ptr() { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR*>(this); }
    VkDeviceGroupSwapchainCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR const*>(this);
    }
};
struct safe_VkDisplayModeCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDisplayModeCreateFlagsKHR flags;
    VkDisplayModeParametersKHR parameters;

    safe_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkDisplayModeCreateInfoKHR(const safe_VkDisplayModeCreateInfoKHR& copy_src);
    safe_VkDisplayModeCreateInfoKHR& operator=(const safe_VkDisplayModeCreateInfoKHR& copy_src);
    safe_VkDisplayModeCreateInfoKHR();
    ~safe_VkDisplayModeCreateInfoKHR();
    void initialize(const VkDisplayModeCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayModeCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayModeCreateInfoKHR* ptr() { return reinterpret_cast<VkDisplayModeCreateInfoKHR*>(this); }
    VkDisplayModeCreateInfoKHR const* ptr() const { return reinterpret_cast<VkDisplayModeCreateInfoKHR const*>(this); }
};
struct safe_VkDisplayPropertiesKHR {
    VkDisplayKHR display;
    const char* displayName{};
    VkExtent2D physicalDimensions;
    VkExtent2D physicalResolution;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkBool32 planeReorderPossible;
    VkBool32 persistentContent;

    safe_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    safe_VkDisplayPropertiesKHR(const safe_VkDisplayPropertiesKHR& copy_src);
    safe_VkDisplayPropertiesKHR& operator=(const safe_VkDisplayPropertiesKHR& copy_src);
    safe_VkDisplayPropertiesKHR();
    ~safe_VkDisplayPropertiesKHR();
    void initialize(const VkDisplayPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPropertiesKHR* ptr() { return reinterpret_cast<VkDisplayPropertiesKHR*>(this); }
    VkDisplayPropertiesKHR const* ptr() const { return reinterpret_cast<VkDisplayPropertiesKHR const*>(this); }
};
struct safe_VkDisplaySurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDisplaySurfaceCreateFlagsKHR flags;
    VkDisplayModeKHR displayMode;
    uint32_t planeIndex;
    uint32_t planeStackIndex;
    VkSurfaceTransformFlagBitsKHR transform;
    float globalAlpha;
    VkDisplayPlaneAlphaFlagBitsKHR alphaMode;
    VkExtent2D imageExtent;

    safe_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkDisplaySurfaceCreateInfoKHR(const safe_VkDisplaySurfaceCreateInfoKHR& copy_src);
    safe_VkDisplaySurfaceCreateInfoKHR& operator=(const safe_VkDisplaySurfaceCreateInfoKHR& copy_src);
    safe_VkDisplaySurfaceCreateInfoKHR();
    ~safe_VkDisplaySurfaceCreateInfoKHR();
    void initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplaySurfaceCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplaySurfaceCreateInfoKHR* ptr() { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR*>(this); }
    VkDisplaySurfaceCreateInfoKHR const* ptr() const { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR const*>(this); }
};
struct safe_VkDisplayPresentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkRect2D srcRect;
    VkRect2D dstRect;
    VkBool32 persistent;

    safe_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayPresentInfoKHR(const safe_VkDisplayPresentInfoKHR& copy_src);
    safe_VkDisplayPresentInfoKHR& operator=(const safe_VkDisplayPresentInfoKHR& copy_src);
    safe_VkDisplayPresentInfoKHR();
    ~safe_VkDisplayPresentInfoKHR();
    void initialize(const VkDisplayPresentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPresentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPresentInfoKHR* ptr() { return reinterpret_cast<VkDisplayPresentInfoKHR*>(this); }
    VkDisplayPresentInfoKHR const* ptr() const { return reinterpret_cast<VkDisplayPresentInfoKHR const*>(this); }
};
struct safe_VkQueueFamilyQueryResultStatusPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 queryResultStatusSupport;

    safe_VkQueueFamilyQueryResultStatusPropertiesKHR(const VkQueueFamilyQueryResultStatusPropertiesKHR* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueueFamilyQueryResultStatusPropertiesKHR(const safe_VkQueueFamilyQueryResultStatusPropertiesKHR& copy_src);
    safe_VkQueueFamilyQueryResultStatusPropertiesKHR& operator=(const safe_VkQueueFamilyQueryResultStatusPropertiesKHR& copy_src);
    safe_VkQueueFamilyQueryResultStatusPropertiesKHR();
    ~safe_VkQueueFamilyQueryResultStatusPropertiesKHR();
    void initialize(const VkQueueFamilyQueryResultStatusPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyQueryResultStatusPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyQueryResultStatusPropertiesKHR* ptr() {
        return reinterpret_cast<VkQueueFamilyQueryResultStatusPropertiesKHR*>(this);
    }
    VkQueueFamilyQueryResultStatusPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkQueueFamilyQueryResultStatusPropertiesKHR const*>(this);
    }
};
struct safe_VkQueueFamilyVideoPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoCodecOperationFlagsKHR videoCodecOperations;

    safe_VkQueueFamilyVideoPropertiesKHR(const VkQueueFamilyVideoPropertiesKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkQueueFamilyVideoPropertiesKHR(const safe_VkQueueFamilyVideoPropertiesKHR& copy_src);
    safe_VkQueueFamilyVideoPropertiesKHR& operator=(const safe_VkQueueFamilyVideoPropertiesKHR& copy_src);
    safe_VkQueueFamilyVideoPropertiesKHR();
    ~safe_VkQueueFamilyVideoPropertiesKHR();
    void initialize(const VkQueueFamilyVideoPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyVideoPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyVideoPropertiesKHR* ptr() { return reinterpret_cast<VkQueueFamilyVideoPropertiesKHR*>(this); }
    VkQueueFamilyVideoPropertiesKHR const* ptr() const { return reinterpret_cast<VkQueueFamilyVideoPropertiesKHR const*>(this); }
};
struct safe_VkVideoProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoCodecOperationFlagBitsKHR videoCodecOperation;
    VkVideoChromaSubsamplingFlagsKHR chromaSubsampling;
    VkVideoComponentBitDepthFlagsKHR lumaBitDepth;
    VkVideoComponentBitDepthFlagsKHR chromaBitDepth;

    safe_VkVideoProfileInfoKHR(const VkVideoProfileInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoProfileInfoKHR(const safe_VkVideoProfileInfoKHR& copy_src);
    safe_VkVideoProfileInfoKHR& operator=(const safe_VkVideoProfileInfoKHR& copy_src);
    safe_VkVideoProfileInfoKHR();
    ~safe_VkVideoProfileInfoKHR();
    void initialize(const VkVideoProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoProfileInfoKHR*>(this); }
    VkVideoProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoProfileInfoKHR const*>(this); }
};
struct safe_VkVideoProfileListInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t profileCount;
    safe_VkVideoProfileInfoKHR* pProfiles{};

    safe_VkVideoProfileListInfoKHR(const VkVideoProfileListInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkVideoProfileListInfoKHR(const safe_VkVideoProfileListInfoKHR& copy_src);
    safe_VkVideoProfileListInfoKHR& operator=(const safe_VkVideoProfileListInfoKHR& copy_src);
    safe_VkVideoProfileListInfoKHR();
    ~safe_VkVideoProfileListInfoKHR();
    void initialize(const VkVideoProfileListInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoProfileListInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoProfileListInfoKHR* ptr() { return reinterpret_cast<VkVideoProfileListInfoKHR*>(this); }
    VkVideoProfileListInfoKHR const* ptr() const { return reinterpret_cast<VkVideoProfileListInfoKHR const*>(this); }
};
struct safe_VkVideoCapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoCapabilityFlagsKHR flags;
    VkDeviceSize minBitstreamBufferOffsetAlignment;
    VkDeviceSize minBitstreamBufferSizeAlignment;
    VkExtent2D pictureAccessGranularity;
    VkExtent2D minCodedExtent;
    VkExtent2D maxCodedExtent;
    uint32_t maxDpbSlots;
    uint32_t maxActiveReferencePictures;
    VkExtensionProperties stdHeaderVersion;

    safe_VkVideoCapabilitiesKHR(const VkVideoCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoCapabilitiesKHR(const safe_VkVideoCapabilitiesKHR& copy_src);
    safe_VkVideoCapabilitiesKHR& operator=(const safe_VkVideoCapabilitiesKHR& copy_src);
    safe_VkVideoCapabilitiesKHR();
    ~safe_VkVideoCapabilitiesKHR();
    void initialize(const VkVideoCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoCapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoCapabilitiesKHR*>(this); }
    VkVideoCapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoCapabilitiesKHR const*>(this); }
};
struct safe_VkPhysicalDeviceVideoFormatInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkImageUsageFlags imageUsage;

    safe_VkPhysicalDeviceVideoFormatInfoKHR(const VkPhysicalDeviceVideoFormatInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPhysicalDeviceVideoFormatInfoKHR(const safe_VkPhysicalDeviceVideoFormatInfoKHR& copy_src);
    safe_VkPhysicalDeviceVideoFormatInfoKHR& operator=(const safe_VkPhysicalDeviceVideoFormatInfoKHR& copy_src);
    safe_VkPhysicalDeviceVideoFormatInfoKHR();
    ~safe_VkPhysicalDeviceVideoFormatInfoKHR();
    void initialize(const VkPhysicalDeviceVideoFormatInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVideoFormatInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVideoFormatInfoKHR* ptr() { return reinterpret_cast<VkPhysicalDeviceVideoFormatInfoKHR*>(this); }
    VkPhysicalDeviceVideoFormatInfoKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVideoFormatInfoKHR const*>(this);
    }
};
struct safe_VkVideoFormatPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkFormat format;
    VkComponentMapping componentMapping;
    VkImageCreateFlags imageCreateFlags;
    VkImageType imageType;
    VkImageTiling imageTiling;
    VkImageUsageFlags imageUsageFlags;

    safe_VkVideoFormatPropertiesKHR(const VkVideoFormatPropertiesKHR* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkVideoFormatPropertiesKHR(const safe_VkVideoFormatPropertiesKHR& copy_src);
    safe_VkVideoFormatPropertiesKHR& operator=(const safe_VkVideoFormatPropertiesKHR& copy_src);
    safe_VkVideoFormatPropertiesKHR();
    ~safe_VkVideoFormatPropertiesKHR();
    void initialize(const VkVideoFormatPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoFormatPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoFormatPropertiesKHR* ptr() { return reinterpret_cast<VkVideoFormatPropertiesKHR*>(this); }
    VkVideoFormatPropertiesKHR const* ptr() const { return reinterpret_cast<VkVideoFormatPropertiesKHR const*>(this); }
};
struct safe_VkVideoPictureResourceInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkOffset2D codedOffset;
    VkExtent2D codedExtent;
    uint32_t baseArrayLayer;
    VkImageView imageViewBinding;

    safe_VkVideoPictureResourceInfoKHR(const VkVideoPictureResourceInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkVideoPictureResourceInfoKHR(const safe_VkVideoPictureResourceInfoKHR& copy_src);
    safe_VkVideoPictureResourceInfoKHR& operator=(const safe_VkVideoPictureResourceInfoKHR& copy_src);
    safe_VkVideoPictureResourceInfoKHR();
    ~safe_VkVideoPictureResourceInfoKHR();
    void initialize(const VkVideoPictureResourceInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoPictureResourceInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoPictureResourceInfoKHR* ptr() { return reinterpret_cast<VkVideoPictureResourceInfoKHR*>(this); }
    VkVideoPictureResourceInfoKHR const* ptr() const { return reinterpret_cast<VkVideoPictureResourceInfoKHR const*>(this); }
};
struct safe_VkVideoReferenceSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    int32_t slotIndex;
    safe_VkVideoPictureResourceInfoKHR* pPictureResource{};

    safe_VkVideoReferenceSlotInfoKHR(const VkVideoReferenceSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkVideoReferenceSlotInfoKHR(const safe_VkVideoReferenceSlotInfoKHR& copy_src);
    safe_VkVideoReferenceSlotInfoKHR& operator=(const safe_VkVideoReferenceSlotInfoKHR& copy_src);
    safe_VkVideoReferenceSlotInfoKHR();
    ~safe_VkVideoReferenceSlotInfoKHR();
    void initialize(const VkVideoReferenceSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoReferenceSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoReferenceSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoReferenceSlotInfoKHR*>(this); }
    VkVideoReferenceSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoReferenceSlotInfoKHR const*>(this); }
};
struct safe_VkVideoSessionMemoryRequirementsKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryBindIndex;
    VkMemoryRequirements memoryRequirements;

    safe_VkVideoSessionMemoryRequirementsKHR(const VkVideoSessionMemoryRequirementsKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkVideoSessionMemoryRequirementsKHR(const safe_VkVideoSessionMemoryRequirementsKHR& copy_src);
    safe_VkVideoSessionMemoryRequirementsKHR& operator=(const safe_VkVideoSessionMemoryRequirementsKHR& copy_src);
    safe_VkVideoSessionMemoryRequirementsKHR();
    ~safe_VkVideoSessionMemoryRequirementsKHR();
    void initialize(const VkVideoSessionMemoryRequirementsKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoSessionMemoryRequirementsKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoSessionMemoryRequirementsKHR* ptr() { return reinterpret_cast<VkVideoSessionMemoryRequirementsKHR*>(this); }
    VkVideoSessionMemoryRequirementsKHR const* ptr() const {
        return reinterpret_cast<VkVideoSessionMemoryRequirementsKHR const*>(this);
    }
};
struct safe_VkBindVideoSessionMemoryInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t memoryBindIndex;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    VkDeviceSize memorySize;

    safe_VkBindVideoSessionMemoryInfoKHR(const VkBindVideoSessionMemoryInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkBindVideoSessionMemoryInfoKHR(const safe_VkBindVideoSessionMemoryInfoKHR& copy_src);
    safe_VkBindVideoSessionMemoryInfoKHR& operator=(const safe_VkBindVideoSessionMemoryInfoKHR& copy_src);
    safe_VkBindVideoSessionMemoryInfoKHR();
    ~safe_VkBindVideoSessionMemoryInfoKHR();
    void initialize(const VkBindVideoSessionMemoryInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindVideoSessionMemoryInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkBindVideoSessionMemoryInfoKHR* ptr() { return reinterpret_cast<VkBindVideoSessionMemoryInfoKHR*>(this); }
    VkBindVideoSessionMemoryInfoKHR const* ptr() const { return reinterpret_cast<VkBindVideoSessionMemoryInfoKHR const*>(this); }
};
struct safe_VkVideoSessionCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t queueFamilyIndex;
    VkVideoSessionCreateFlagsKHR flags;
    safe_VkVideoProfileInfoKHR* pVideoProfile{};
    VkFormat pictureFormat;
    VkExtent2D maxCodedExtent;
    VkFormat referencePictureFormat;
    uint32_t maxDpbSlots;
    uint32_t maxActiveReferencePictures;
    const VkExtensionProperties* pStdHeaderVersion{};

    safe_VkVideoSessionCreateInfoKHR(const VkVideoSessionCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkVideoSessionCreateInfoKHR(const safe_VkVideoSessionCreateInfoKHR& copy_src);
    safe_VkVideoSessionCreateInfoKHR& operator=(const safe_VkVideoSessionCreateInfoKHR& copy_src);
    safe_VkVideoSessionCreateInfoKHR();
    ~safe_VkVideoSessionCreateInfoKHR();
    void initialize(const VkVideoSessionCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoSessionCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoSessionCreateInfoKHR* ptr() { return reinterpret_cast<VkVideoSessionCreateInfoKHR*>(this); }
    VkVideoSessionCreateInfoKHR const* ptr() const { return reinterpret_cast<VkVideoSessionCreateInfoKHR const*>(this); }
};
struct safe_VkVideoSessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoSessionParametersCreateFlagsKHR flags;
    VkVideoSessionParametersKHR videoSessionParametersTemplate;
    VkVideoSessionKHR videoSession;

    safe_VkVideoSessionParametersCreateInfoKHR(const VkVideoSessionParametersCreateInfoKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoSessionParametersCreateInfoKHR(const safe_VkVideoSessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoSessionParametersCreateInfoKHR& operator=(const safe_VkVideoSessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoSessionParametersCreateInfoKHR();
    ~safe_VkVideoSessionParametersCreateInfoKHR();
    void initialize(const VkVideoSessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoSessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoSessionParametersCreateInfoKHR* ptr() { return reinterpret_cast<VkVideoSessionParametersCreateInfoKHR*>(this); }
    VkVideoSessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoSessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoSessionParametersUpdateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t updateSequenceCount;

    safe_VkVideoSessionParametersUpdateInfoKHR(const VkVideoSessionParametersUpdateInfoKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoSessionParametersUpdateInfoKHR(const safe_VkVideoSessionParametersUpdateInfoKHR& copy_src);
    safe_VkVideoSessionParametersUpdateInfoKHR& operator=(const safe_VkVideoSessionParametersUpdateInfoKHR& copy_src);
    safe_VkVideoSessionParametersUpdateInfoKHR();
    ~safe_VkVideoSessionParametersUpdateInfoKHR();
    void initialize(const VkVideoSessionParametersUpdateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoSessionParametersUpdateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoSessionParametersUpdateInfoKHR* ptr() { return reinterpret_cast<VkVideoSessionParametersUpdateInfoKHR*>(this); }
    VkVideoSessionParametersUpdateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoSessionParametersUpdateInfoKHR const*>(this);
    }
};
struct safe_VkVideoBeginCodingInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoBeginCodingFlagsKHR flags;
    VkVideoSessionKHR videoSession;
    VkVideoSessionParametersKHR videoSessionParameters;
    uint32_t referenceSlotCount;
    safe_VkVideoReferenceSlotInfoKHR* pReferenceSlots{};

    safe_VkVideoBeginCodingInfoKHR(const VkVideoBeginCodingInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkVideoBeginCodingInfoKHR(const safe_VkVideoBeginCodingInfoKHR& copy_src);
    safe_VkVideoBeginCodingInfoKHR& operator=(const safe_VkVideoBeginCodingInfoKHR& copy_src);
    safe_VkVideoBeginCodingInfoKHR();
    ~safe_VkVideoBeginCodingInfoKHR();
    void initialize(const VkVideoBeginCodingInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoBeginCodingInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoBeginCodingInfoKHR* ptr() { return reinterpret_cast<VkVideoBeginCodingInfoKHR*>(this); }
    VkVideoBeginCodingInfoKHR const* ptr() const { return reinterpret_cast<VkVideoBeginCodingInfoKHR const*>(this); }
};
struct safe_VkVideoEndCodingInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEndCodingFlagsKHR flags;

    safe_VkVideoEndCodingInfoKHR(const VkVideoEndCodingInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEndCodingInfoKHR(const safe_VkVideoEndCodingInfoKHR& copy_src);
    safe_VkVideoEndCodingInfoKHR& operator=(const safe_VkVideoEndCodingInfoKHR& copy_src);
    safe_VkVideoEndCodingInfoKHR();
    ~safe_VkVideoEndCodingInfoKHR();
    void initialize(const VkVideoEndCodingInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEndCodingInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEndCodingInfoKHR* ptr() { return reinterpret_cast<VkVideoEndCodingInfoKHR*>(this); }
    VkVideoEndCodingInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEndCodingInfoKHR const*>(this); }
};
struct safe_VkVideoCodingControlInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoCodingControlFlagsKHR flags;

    safe_VkVideoCodingControlInfoKHR(const VkVideoCodingControlInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkVideoCodingControlInfoKHR(const safe_VkVideoCodingControlInfoKHR& copy_src);
    safe_VkVideoCodingControlInfoKHR& operator=(const safe_VkVideoCodingControlInfoKHR& copy_src);
    safe_VkVideoCodingControlInfoKHR();
    ~safe_VkVideoCodingControlInfoKHR();
    void initialize(const VkVideoCodingControlInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoCodingControlInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoCodingControlInfoKHR* ptr() { return reinterpret_cast<VkVideoCodingControlInfoKHR*>(this); }
    VkVideoCodingControlInfoKHR const* ptr() const { return reinterpret_cast<VkVideoCodingControlInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeCapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoDecodeCapabilityFlagsKHR flags;

    safe_VkVideoDecodeCapabilitiesKHR(const VkVideoDecodeCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkVideoDecodeCapabilitiesKHR(const safe_VkVideoDecodeCapabilitiesKHR& copy_src);
    safe_VkVideoDecodeCapabilitiesKHR& operator=(const safe_VkVideoDecodeCapabilitiesKHR& copy_src);
    safe_VkVideoDecodeCapabilitiesKHR();
    ~safe_VkVideoDecodeCapabilitiesKHR();
    void initialize(const VkVideoDecodeCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeCapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoDecodeCapabilitiesKHR*>(this); }
    VkVideoDecodeCapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeCapabilitiesKHR const*>(this); }
};
struct safe_VkVideoDecodeUsageInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoDecodeUsageFlagsKHR videoUsageHints;

    safe_VkVideoDecodeUsageInfoKHR(const VkVideoDecodeUsageInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkVideoDecodeUsageInfoKHR(const safe_VkVideoDecodeUsageInfoKHR& copy_src);
    safe_VkVideoDecodeUsageInfoKHR& operator=(const safe_VkVideoDecodeUsageInfoKHR& copy_src);
    safe_VkVideoDecodeUsageInfoKHR();
    ~safe_VkVideoDecodeUsageInfoKHR();
    void initialize(const VkVideoDecodeUsageInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeUsageInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeUsageInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeUsageInfoKHR*>(this); }
    VkVideoDecodeUsageInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeUsageInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoDecodeFlagsKHR flags;
    VkBuffer srcBuffer;
    VkDeviceSize srcBufferOffset;
    VkDeviceSize srcBufferRange;
    safe_VkVideoPictureResourceInfoKHR dstPictureResource;
    safe_VkVideoReferenceSlotInfoKHR* pSetupReferenceSlot{};
    uint32_t referenceSlotCount;
    safe_VkVideoReferenceSlotInfoKHR* pReferenceSlots{};

    safe_VkVideoDecodeInfoKHR(const VkVideoDecodeInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeInfoKHR(const safe_VkVideoDecodeInfoKHR& copy_src);
    safe_VkVideoDecodeInfoKHR& operator=(const safe_VkVideoDecodeInfoKHR& copy_src);
    safe_VkVideoDecodeInfoKHR();
    ~safe_VkVideoDecodeInfoKHR();
    void initialize(const VkVideoDecodeInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeInfoKHR*>(this); }
    VkVideoDecodeInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH264CapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeH264CapabilityFlagsKHR flags;
    StdVideoH264LevelIdc maxLevelIdc;
    uint32_t maxSliceCount;
    uint32_t maxPPictureL0ReferenceCount;
    uint32_t maxBPictureL0ReferenceCount;
    uint32_t maxL1ReferenceCount;
    uint32_t maxTemporalLayerCount;
    VkBool32 expectDyadicTemporalLayerPattern;
    int32_t minQp;
    int32_t maxQp;
    VkBool32 prefersGopRemainingFrames;
    VkBool32 requiresGopRemainingFrames;
    VkVideoEncodeH264StdFlagsKHR stdSyntaxFlags;

    safe_VkVideoEncodeH264CapabilitiesKHR(const VkVideoEncodeH264CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkVideoEncodeH264CapabilitiesKHR(const safe_VkVideoEncodeH264CapabilitiesKHR& copy_src);
    safe_VkVideoEncodeH264CapabilitiesKHR& operator=(const safe_VkVideoEncodeH264CapabilitiesKHR& copy_src);
    safe_VkVideoEncodeH264CapabilitiesKHR();
    ~safe_VkVideoEncodeH264CapabilitiesKHR();
    void initialize(const VkVideoEncodeH264CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264CapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264CapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264CapabilitiesKHR*>(this); }
    VkVideoEncodeH264CapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH264CapabilitiesKHR const*>(this); }
};
struct safe_VkVideoEncodeH264QualityLevelPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeH264RateControlFlagsKHR preferredRateControlFlags;
    uint32_t preferredGopFrameCount;
    uint32_t preferredIdrPeriod;
    uint32_t preferredConsecutiveBFrameCount;
    uint32_t preferredTemporalLayerCount;
    VkVideoEncodeH264QpKHR preferredConstantQp;
    uint32_t preferredMaxL0ReferenceCount;
    uint32_t preferredMaxL1ReferenceCount;
    VkBool32 preferredStdEntropyCodingModeFlag;

    safe_VkVideoEncodeH264QualityLevelPropertiesKHR(const VkVideoEncodeH264QualityLevelPropertiesKHR* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264QualityLevelPropertiesKHR(const safe_VkVideoEncodeH264QualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeH264QualityLevelPropertiesKHR& operator=(const safe_VkVideoEncodeH264QualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeH264QualityLevelPropertiesKHR();
    ~safe_VkVideoEncodeH264QualityLevelPropertiesKHR();
    void initialize(const VkVideoEncodeH264QualityLevelPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264QualityLevelPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264QualityLevelPropertiesKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH264QualityLevelPropertiesKHR*>(this);
    }
    VkVideoEncodeH264QualityLevelPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264QualityLevelPropertiesKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264SessionCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useMaxLevelIdc;
    StdVideoH264LevelIdc maxLevelIdc;

    safe_VkVideoEncodeH264SessionCreateInfoKHR(const VkVideoEncodeH264SessionCreateInfoKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264SessionCreateInfoKHR(const safe_VkVideoEncodeH264SessionCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionCreateInfoKHR& operator=(const safe_VkVideoEncodeH264SessionCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionCreateInfoKHR();
    ~safe_VkVideoEncodeH264SessionCreateInfoKHR();
    void initialize(const VkVideoEncodeH264SessionCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264SessionCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264SessionCreateInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264SessionCreateInfoKHR*>(this); }
    VkVideoEncodeH264SessionCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264SessionCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264SessionParametersAddInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stdSPSCount;
    const StdVideoH264SequenceParameterSet* pStdSPSs{};
    uint32_t stdPPSCount;
    const StdVideoH264PictureParameterSet* pStdPPSs{};

    safe_VkVideoEncodeH264SessionParametersAddInfoKHR(const VkVideoEncodeH264SessionParametersAddInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264SessionParametersAddInfoKHR(const safe_VkVideoEncodeH264SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersAddInfoKHR& operator=(const safe_VkVideoEncodeH264SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersAddInfoKHR();
    ~safe_VkVideoEncodeH264SessionParametersAddInfoKHR();
    void initialize(const VkVideoEncodeH264SessionParametersAddInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264SessionParametersAddInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264SessionParametersAddInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersAddInfoKHR*>(this);
    }
    VkVideoEncodeH264SessionParametersAddInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersAddInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264SessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxStdSPSCount;
    uint32_t maxStdPPSCount;
    safe_VkVideoEncodeH264SessionParametersAddInfoKHR* pParametersAddInfo{};

    safe_VkVideoEncodeH264SessionParametersCreateInfoKHR(const VkVideoEncodeH264SessionParametersCreateInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264SessionParametersCreateInfoKHR(const safe_VkVideoEncodeH264SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersCreateInfoKHR& operator=(
        const safe_VkVideoEncodeH264SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersCreateInfoKHR();
    ~safe_VkVideoEncodeH264SessionParametersCreateInfoKHR();
    void initialize(const VkVideoEncodeH264SessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264SessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264SessionParametersCreateInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersCreateInfoKHR*>(this);
    }
    VkVideoEncodeH264SessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264SessionParametersGetInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 writeStdSPS;
    VkBool32 writeStdPPS;
    uint32_t stdSPSId;
    uint32_t stdPPSId;

    safe_VkVideoEncodeH264SessionParametersGetInfoKHR(const VkVideoEncodeH264SessionParametersGetInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264SessionParametersGetInfoKHR(const safe_VkVideoEncodeH264SessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersGetInfoKHR& operator=(const safe_VkVideoEncodeH264SessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersGetInfoKHR();
    ~safe_VkVideoEncodeH264SessionParametersGetInfoKHR();
    void initialize(const VkVideoEncodeH264SessionParametersGetInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264SessionParametersGetInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264SessionParametersGetInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersGetInfoKHR*>(this);
    }
    VkVideoEncodeH264SessionParametersGetInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersGetInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 hasStdSPSOverrides;
    VkBool32 hasStdPPSOverrides;

    safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(const VkVideoEncodeH264SessionParametersFeedbackInfoKHR* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(const safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR& operator=(
        const safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR();
    ~safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR();
    void initialize(const VkVideoEncodeH264SessionParametersFeedbackInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264SessionParametersFeedbackInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264SessionParametersFeedbackInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersFeedbackInfoKHR*>(this);
    }
    VkVideoEncodeH264SessionParametersFeedbackInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264SessionParametersFeedbackInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264NaluSliceInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    int32_t constantQp;
    const StdVideoEncodeH264SliceHeader* pStdSliceHeader{};

    safe_VkVideoEncodeH264NaluSliceInfoKHR(const VkVideoEncodeH264NaluSliceInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkVideoEncodeH264NaluSliceInfoKHR(const safe_VkVideoEncodeH264NaluSliceInfoKHR& copy_src);
    safe_VkVideoEncodeH264NaluSliceInfoKHR& operator=(const safe_VkVideoEncodeH264NaluSliceInfoKHR& copy_src);
    safe_VkVideoEncodeH264NaluSliceInfoKHR();
    ~safe_VkVideoEncodeH264NaluSliceInfoKHR();
    void initialize(const VkVideoEncodeH264NaluSliceInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264NaluSliceInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264NaluSliceInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264NaluSliceInfoKHR*>(this); }
    VkVideoEncodeH264NaluSliceInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264NaluSliceInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264PictureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t naluSliceEntryCount;
    safe_VkVideoEncodeH264NaluSliceInfoKHR* pNaluSliceEntries{};
    const StdVideoEncodeH264PictureInfo* pStdPictureInfo{};
    VkBool32 generatePrefixNalu;

    safe_VkVideoEncodeH264PictureInfoKHR(const VkVideoEncodeH264PictureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH264PictureInfoKHR(const safe_VkVideoEncodeH264PictureInfoKHR& copy_src);
    safe_VkVideoEncodeH264PictureInfoKHR& operator=(const safe_VkVideoEncodeH264PictureInfoKHR& copy_src);
    safe_VkVideoEncodeH264PictureInfoKHR();
    ~safe_VkVideoEncodeH264PictureInfoKHR();
    void initialize(const VkVideoEncodeH264PictureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264PictureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264PictureInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264PictureInfoKHR*>(this); }
    VkVideoEncodeH264PictureInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH264PictureInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH264DpbSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoEncodeH264ReferenceInfo* pStdReferenceInfo{};

    safe_VkVideoEncodeH264DpbSlotInfoKHR(const VkVideoEncodeH264DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH264DpbSlotInfoKHR(const safe_VkVideoEncodeH264DpbSlotInfoKHR& copy_src);
    safe_VkVideoEncodeH264DpbSlotInfoKHR& operator=(const safe_VkVideoEncodeH264DpbSlotInfoKHR& copy_src);
    safe_VkVideoEncodeH264DpbSlotInfoKHR();
    ~safe_VkVideoEncodeH264DpbSlotInfoKHR();
    void initialize(const VkVideoEncodeH264DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264DpbSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264DpbSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264DpbSlotInfoKHR*>(this); }
    VkVideoEncodeH264DpbSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH264DpbSlotInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH264ProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    StdVideoH264ProfileIdc stdProfileIdc;

    safe_VkVideoEncodeH264ProfileInfoKHR(const VkVideoEncodeH264ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH264ProfileInfoKHR(const safe_VkVideoEncodeH264ProfileInfoKHR& copy_src);
    safe_VkVideoEncodeH264ProfileInfoKHR& operator=(const safe_VkVideoEncodeH264ProfileInfoKHR& copy_src);
    safe_VkVideoEncodeH264ProfileInfoKHR();
    ~safe_VkVideoEncodeH264ProfileInfoKHR();
    void initialize(const VkVideoEncodeH264ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264ProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264ProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264ProfileInfoKHR*>(this); }
    VkVideoEncodeH264ProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH264ProfileInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH264RateControlInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeH264RateControlFlagsKHR flags;
    uint32_t gopFrameCount;
    uint32_t idrPeriod;
    uint32_t consecutiveBFrameCount;
    uint32_t temporalLayerCount;

    safe_VkVideoEncodeH264RateControlInfoKHR(const VkVideoEncodeH264RateControlInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkVideoEncodeH264RateControlInfoKHR(const safe_VkVideoEncodeH264RateControlInfoKHR& copy_src);
    safe_VkVideoEncodeH264RateControlInfoKHR& operator=(const safe_VkVideoEncodeH264RateControlInfoKHR& copy_src);
    safe_VkVideoEncodeH264RateControlInfoKHR();
    ~safe_VkVideoEncodeH264RateControlInfoKHR();
    void initialize(const VkVideoEncodeH264RateControlInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264RateControlInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264RateControlInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264RateControlInfoKHR*>(this); }
    VkVideoEncodeH264RateControlInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264RateControlInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264RateControlLayerInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useMinQp;
    VkVideoEncodeH264QpKHR minQp;
    VkBool32 useMaxQp;
    VkVideoEncodeH264QpKHR maxQp;
    VkBool32 useMaxFrameSize;
    VkVideoEncodeH264FrameSizeKHR maxFrameSize;

    safe_VkVideoEncodeH264RateControlLayerInfoKHR(const VkVideoEncodeH264RateControlLayerInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264RateControlLayerInfoKHR(const safe_VkVideoEncodeH264RateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeH264RateControlLayerInfoKHR& operator=(const safe_VkVideoEncodeH264RateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeH264RateControlLayerInfoKHR();
    ~safe_VkVideoEncodeH264RateControlLayerInfoKHR();
    void initialize(const VkVideoEncodeH264RateControlLayerInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264RateControlLayerInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264RateControlLayerInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264RateControlLayerInfoKHR*>(this); }
    VkVideoEncodeH264RateControlLayerInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264RateControlLayerInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH264GopRemainingFrameInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useGopRemainingFrames;
    uint32_t gopRemainingI;
    uint32_t gopRemainingP;
    uint32_t gopRemainingB;

    safe_VkVideoEncodeH264GopRemainingFrameInfoKHR(const VkVideoEncodeH264GopRemainingFrameInfoKHR* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH264GopRemainingFrameInfoKHR(const safe_VkVideoEncodeH264GopRemainingFrameInfoKHR& copy_src);
    safe_VkVideoEncodeH264GopRemainingFrameInfoKHR& operator=(const safe_VkVideoEncodeH264GopRemainingFrameInfoKHR& copy_src);
    safe_VkVideoEncodeH264GopRemainingFrameInfoKHR();
    ~safe_VkVideoEncodeH264GopRemainingFrameInfoKHR();
    void initialize(const VkVideoEncodeH264GopRemainingFrameInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH264GopRemainingFrameInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH264GopRemainingFrameInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH264GopRemainingFrameInfoKHR*>(this); }
    VkVideoEncodeH264GopRemainingFrameInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH264GopRemainingFrameInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265CapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeH265CapabilityFlagsKHR flags;
    StdVideoH265LevelIdc maxLevelIdc;
    uint32_t maxSliceSegmentCount;
    VkExtent2D maxTiles;
    VkVideoEncodeH265CtbSizeFlagsKHR ctbSizes;
    VkVideoEncodeH265TransformBlockSizeFlagsKHR transformBlockSizes;
    uint32_t maxPPictureL0ReferenceCount;
    uint32_t maxBPictureL0ReferenceCount;
    uint32_t maxL1ReferenceCount;
    uint32_t maxSubLayerCount;
    VkBool32 expectDyadicTemporalSubLayerPattern;
    int32_t minQp;
    int32_t maxQp;
    VkBool32 prefersGopRemainingFrames;
    VkBool32 requiresGopRemainingFrames;
    VkVideoEncodeH265StdFlagsKHR stdSyntaxFlags;

    safe_VkVideoEncodeH265CapabilitiesKHR(const VkVideoEncodeH265CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkVideoEncodeH265CapabilitiesKHR(const safe_VkVideoEncodeH265CapabilitiesKHR& copy_src);
    safe_VkVideoEncodeH265CapabilitiesKHR& operator=(const safe_VkVideoEncodeH265CapabilitiesKHR& copy_src);
    safe_VkVideoEncodeH265CapabilitiesKHR();
    ~safe_VkVideoEncodeH265CapabilitiesKHR();
    void initialize(const VkVideoEncodeH265CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265CapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265CapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265CapabilitiesKHR*>(this); }
    VkVideoEncodeH265CapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH265CapabilitiesKHR const*>(this); }
};
struct safe_VkVideoEncodeH265SessionCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useMaxLevelIdc;
    StdVideoH265LevelIdc maxLevelIdc;

    safe_VkVideoEncodeH265SessionCreateInfoKHR(const VkVideoEncodeH265SessionCreateInfoKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265SessionCreateInfoKHR(const safe_VkVideoEncodeH265SessionCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionCreateInfoKHR& operator=(const safe_VkVideoEncodeH265SessionCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionCreateInfoKHR();
    ~safe_VkVideoEncodeH265SessionCreateInfoKHR();
    void initialize(const VkVideoEncodeH265SessionCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265SessionCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265SessionCreateInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265SessionCreateInfoKHR*>(this); }
    VkVideoEncodeH265SessionCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265SessionCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265QualityLevelPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeH265RateControlFlagsKHR preferredRateControlFlags;
    uint32_t preferredGopFrameCount;
    uint32_t preferredIdrPeriod;
    uint32_t preferredConsecutiveBFrameCount;
    uint32_t preferredSubLayerCount;
    VkVideoEncodeH265QpKHR preferredConstantQp;
    uint32_t preferredMaxL0ReferenceCount;
    uint32_t preferredMaxL1ReferenceCount;

    safe_VkVideoEncodeH265QualityLevelPropertiesKHR(const VkVideoEncodeH265QualityLevelPropertiesKHR* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265QualityLevelPropertiesKHR(const safe_VkVideoEncodeH265QualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeH265QualityLevelPropertiesKHR& operator=(const safe_VkVideoEncodeH265QualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeH265QualityLevelPropertiesKHR();
    ~safe_VkVideoEncodeH265QualityLevelPropertiesKHR();
    void initialize(const VkVideoEncodeH265QualityLevelPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265QualityLevelPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265QualityLevelPropertiesKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH265QualityLevelPropertiesKHR*>(this);
    }
    VkVideoEncodeH265QualityLevelPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265QualityLevelPropertiesKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265SessionParametersAddInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stdVPSCount;
    const StdVideoH265VideoParameterSet* pStdVPSs{};
    uint32_t stdSPSCount;
    const StdVideoH265SequenceParameterSet* pStdSPSs{};
    uint32_t stdPPSCount;
    const StdVideoH265PictureParameterSet* pStdPPSs{};

    safe_VkVideoEncodeH265SessionParametersAddInfoKHR(const VkVideoEncodeH265SessionParametersAddInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265SessionParametersAddInfoKHR(const safe_VkVideoEncodeH265SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersAddInfoKHR& operator=(const safe_VkVideoEncodeH265SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersAddInfoKHR();
    ~safe_VkVideoEncodeH265SessionParametersAddInfoKHR();
    void initialize(const VkVideoEncodeH265SessionParametersAddInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265SessionParametersAddInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265SessionParametersAddInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersAddInfoKHR*>(this);
    }
    VkVideoEncodeH265SessionParametersAddInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersAddInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265SessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxStdVPSCount;
    uint32_t maxStdSPSCount;
    uint32_t maxStdPPSCount;
    safe_VkVideoEncodeH265SessionParametersAddInfoKHR* pParametersAddInfo{};

    safe_VkVideoEncodeH265SessionParametersCreateInfoKHR(const VkVideoEncodeH265SessionParametersCreateInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265SessionParametersCreateInfoKHR(const safe_VkVideoEncodeH265SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersCreateInfoKHR& operator=(
        const safe_VkVideoEncodeH265SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersCreateInfoKHR();
    ~safe_VkVideoEncodeH265SessionParametersCreateInfoKHR();
    void initialize(const VkVideoEncodeH265SessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265SessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265SessionParametersCreateInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersCreateInfoKHR*>(this);
    }
    VkVideoEncodeH265SessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265SessionParametersGetInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 writeStdVPS;
    VkBool32 writeStdSPS;
    VkBool32 writeStdPPS;
    uint32_t stdVPSId;
    uint32_t stdSPSId;
    uint32_t stdPPSId;

    safe_VkVideoEncodeH265SessionParametersGetInfoKHR(const VkVideoEncodeH265SessionParametersGetInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265SessionParametersGetInfoKHR(const safe_VkVideoEncodeH265SessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersGetInfoKHR& operator=(const safe_VkVideoEncodeH265SessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersGetInfoKHR();
    ~safe_VkVideoEncodeH265SessionParametersGetInfoKHR();
    void initialize(const VkVideoEncodeH265SessionParametersGetInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265SessionParametersGetInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265SessionParametersGetInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersGetInfoKHR*>(this);
    }
    VkVideoEncodeH265SessionParametersGetInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersGetInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 hasStdVPSOverrides;
    VkBool32 hasStdSPSOverrides;
    VkBool32 hasStdPPSOverrides;

    safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(const VkVideoEncodeH265SessionParametersFeedbackInfoKHR* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(const safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR& operator=(
        const safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR();
    ~safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR();
    void initialize(const VkVideoEncodeH265SessionParametersFeedbackInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265SessionParametersFeedbackInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265SessionParametersFeedbackInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersFeedbackInfoKHR*>(this);
    }
    VkVideoEncodeH265SessionParametersFeedbackInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265SessionParametersFeedbackInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    int32_t constantQp;
    const StdVideoEncodeH265SliceSegmentHeader* pStdSliceSegmentHeader{};

    safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR(const VkVideoEncodeH265NaluSliceSegmentInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR(const safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR& copy_src);
    safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR& operator=(const safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR& copy_src);
    safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR();
    ~safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR();
    void initialize(const VkVideoEncodeH265NaluSliceSegmentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265NaluSliceSegmentInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265NaluSliceSegmentInfoKHR*>(this); }
    VkVideoEncodeH265NaluSliceSegmentInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265NaluSliceSegmentInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265PictureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t naluSliceSegmentEntryCount;
    safe_VkVideoEncodeH265NaluSliceSegmentInfoKHR* pNaluSliceSegmentEntries{};
    const StdVideoEncodeH265PictureInfo* pStdPictureInfo{};

    safe_VkVideoEncodeH265PictureInfoKHR(const VkVideoEncodeH265PictureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH265PictureInfoKHR(const safe_VkVideoEncodeH265PictureInfoKHR& copy_src);
    safe_VkVideoEncodeH265PictureInfoKHR& operator=(const safe_VkVideoEncodeH265PictureInfoKHR& copy_src);
    safe_VkVideoEncodeH265PictureInfoKHR();
    ~safe_VkVideoEncodeH265PictureInfoKHR();
    void initialize(const VkVideoEncodeH265PictureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265PictureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265PictureInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265PictureInfoKHR*>(this); }
    VkVideoEncodeH265PictureInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH265PictureInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH265DpbSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoEncodeH265ReferenceInfo* pStdReferenceInfo{};

    safe_VkVideoEncodeH265DpbSlotInfoKHR(const VkVideoEncodeH265DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH265DpbSlotInfoKHR(const safe_VkVideoEncodeH265DpbSlotInfoKHR& copy_src);
    safe_VkVideoEncodeH265DpbSlotInfoKHR& operator=(const safe_VkVideoEncodeH265DpbSlotInfoKHR& copy_src);
    safe_VkVideoEncodeH265DpbSlotInfoKHR();
    ~safe_VkVideoEncodeH265DpbSlotInfoKHR();
    void initialize(const VkVideoEncodeH265DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265DpbSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265DpbSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265DpbSlotInfoKHR*>(this); }
    VkVideoEncodeH265DpbSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH265DpbSlotInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH265ProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    StdVideoH265ProfileIdc stdProfileIdc;

    safe_VkVideoEncodeH265ProfileInfoKHR(const VkVideoEncodeH265ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeH265ProfileInfoKHR(const safe_VkVideoEncodeH265ProfileInfoKHR& copy_src);
    safe_VkVideoEncodeH265ProfileInfoKHR& operator=(const safe_VkVideoEncodeH265ProfileInfoKHR& copy_src);
    safe_VkVideoEncodeH265ProfileInfoKHR();
    ~safe_VkVideoEncodeH265ProfileInfoKHR();
    void initialize(const VkVideoEncodeH265ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265ProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265ProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265ProfileInfoKHR*>(this); }
    VkVideoEncodeH265ProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeH265ProfileInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeH265RateControlInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeH265RateControlFlagsKHR flags;
    uint32_t gopFrameCount;
    uint32_t idrPeriod;
    uint32_t consecutiveBFrameCount;
    uint32_t subLayerCount;

    safe_VkVideoEncodeH265RateControlInfoKHR(const VkVideoEncodeH265RateControlInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkVideoEncodeH265RateControlInfoKHR(const safe_VkVideoEncodeH265RateControlInfoKHR& copy_src);
    safe_VkVideoEncodeH265RateControlInfoKHR& operator=(const safe_VkVideoEncodeH265RateControlInfoKHR& copy_src);
    safe_VkVideoEncodeH265RateControlInfoKHR();
    ~safe_VkVideoEncodeH265RateControlInfoKHR();
    void initialize(const VkVideoEncodeH265RateControlInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265RateControlInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265RateControlInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265RateControlInfoKHR*>(this); }
    VkVideoEncodeH265RateControlInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265RateControlInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265RateControlLayerInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useMinQp;
    VkVideoEncodeH265QpKHR minQp;
    VkBool32 useMaxQp;
    VkVideoEncodeH265QpKHR maxQp;
    VkBool32 useMaxFrameSize;
    VkVideoEncodeH265FrameSizeKHR maxFrameSize;

    safe_VkVideoEncodeH265RateControlLayerInfoKHR(const VkVideoEncodeH265RateControlLayerInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265RateControlLayerInfoKHR(const safe_VkVideoEncodeH265RateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeH265RateControlLayerInfoKHR& operator=(const safe_VkVideoEncodeH265RateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeH265RateControlLayerInfoKHR();
    ~safe_VkVideoEncodeH265RateControlLayerInfoKHR();
    void initialize(const VkVideoEncodeH265RateControlLayerInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265RateControlLayerInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265RateControlLayerInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265RateControlLayerInfoKHR*>(this); }
    VkVideoEncodeH265RateControlLayerInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265RateControlLayerInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeH265GopRemainingFrameInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 useGopRemainingFrames;
    uint32_t gopRemainingI;
    uint32_t gopRemainingP;
    uint32_t gopRemainingB;

    safe_VkVideoEncodeH265GopRemainingFrameInfoKHR(const VkVideoEncodeH265GopRemainingFrameInfoKHR* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeH265GopRemainingFrameInfoKHR(const safe_VkVideoEncodeH265GopRemainingFrameInfoKHR& copy_src);
    safe_VkVideoEncodeH265GopRemainingFrameInfoKHR& operator=(const safe_VkVideoEncodeH265GopRemainingFrameInfoKHR& copy_src);
    safe_VkVideoEncodeH265GopRemainingFrameInfoKHR();
    ~safe_VkVideoEncodeH265GopRemainingFrameInfoKHR();
    void initialize(const VkVideoEncodeH265GopRemainingFrameInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeH265GopRemainingFrameInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeH265GopRemainingFrameInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeH265GopRemainingFrameInfoKHR*>(this); }
    VkVideoEncodeH265GopRemainingFrameInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeH265GopRemainingFrameInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeH264ProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    StdVideoH264ProfileIdc stdProfileIdc;
    VkVideoDecodeH264PictureLayoutFlagBitsKHR pictureLayout;

    safe_VkVideoDecodeH264ProfileInfoKHR(const VkVideoDecodeH264ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH264ProfileInfoKHR(const safe_VkVideoDecodeH264ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeH264ProfileInfoKHR& operator=(const safe_VkVideoDecodeH264ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeH264ProfileInfoKHR();
    ~safe_VkVideoDecodeH264ProfileInfoKHR();
    void initialize(const VkVideoDecodeH264ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264ProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264ProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH264ProfileInfoKHR*>(this); }
    VkVideoDecodeH264ProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH264ProfileInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeH264CapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    StdVideoH264LevelIdc maxLevelIdc;
    VkOffset2D fieldOffsetGranularity;

    safe_VkVideoDecodeH264CapabilitiesKHR(const VkVideoDecodeH264CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkVideoDecodeH264CapabilitiesKHR(const safe_VkVideoDecodeH264CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeH264CapabilitiesKHR& operator=(const safe_VkVideoDecodeH264CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeH264CapabilitiesKHR();
    ~safe_VkVideoDecodeH264CapabilitiesKHR();
    void initialize(const VkVideoDecodeH264CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264CapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264CapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoDecodeH264CapabilitiesKHR*>(this); }
    VkVideoDecodeH264CapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH264CapabilitiesKHR const*>(this); }
};
struct safe_VkVideoDecodeH264SessionParametersAddInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stdSPSCount;
    const StdVideoH264SequenceParameterSet* pStdSPSs{};
    uint32_t stdPPSCount;
    const StdVideoH264PictureParameterSet* pStdPPSs{};

    safe_VkVideoDecodeH264SessionParametersAddInfoKHR(const VkVideoDecodeH264SessionParametersAddInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeH264SessionParametersAddInfoKHR(const safe_VkVideoDecodeH264SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoDecodeH264SessionParametersAddInfoKHR& operator=(const safe_VkVideoDecodeH264SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoDecodeH264SessionParametersAddInfoKHR();
    ~safe_VkVideoDecodeH264SessionParametersAddInfoKHR();
    void initialize(const VkVideoDecodeH264SessionParametersAddInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264SessionParametersAddInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264SessionParametersAddInfoKHR* ptr() {
        return reinterpret_cast<VkVideoDecodeH264SessionParametersAddInfoKHR*>(this);
    }
    VkVideoDecodeH264SessionParametersAddInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoDecodeH264SessionParametersAddInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeH264SessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxStdSPSCount;
    uint32_t maxStdPPSCount;
    safe_VkVideoDecodeH264SessionParametersAddInfoKHR* pParametersAddInfo{};

    safe_VkVideoDecodeH264SessionParametersCreateInfoKHR(const VkVideoDecodeH264SessionParametersCreateInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeH264SessionParametersCreateInfoKHR(const safe_VkVideoDecodeH264SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeH264SessionParametersCreateInfoKHR& operator=(
        const safe_VkVideoDecodeH264SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeH264SessionParametersCreateInfoKHR();
    ~safe_VkVideoDecodeH264SessionParametersCreateInfoKHR();
    void initialize(const VkVideoDecodeH264SessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264SessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264SessionParametersCreateInfoKHR* ptr() {
        return reinterpret_cast<VkVideoDecodeH264SessionParametersCreateInfoKHR*>(this);
    }
    VkVideoDecodeH264SessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoDecodeH264SessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeH264PictureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeH264PictureInfo* pStdPictureInfo{};
    uint32_t sliceCount;
    const uint32_t* pSliceOffsets{};

    safe_VkVideoDecodeH264PictureInfoKHR(const VkVideoDecodeH264PictureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH264PictureInfoKHR(const safe_VkVideoDecodeH264PictureInfoKHR& copy_src);
    safe_VkVideoDecodeH264PictureInfoKHR& operator=(const safe_VkVideoDecodeH264PictureInfoKHR& copy_src);
    safe_VkVideoDecodeH264PictureInfoKHR();
    ~safe_VkVideoDecodeH264PictureInfoKHR();
    void initialize(const VkVideoDecodeH264PictureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264PictureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264PictureInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH264PictureInfoKHR*>(this); }
    VkVideoDecodeH264PictureInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH264PictureInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeH264DpbSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeH264ReferenceInfo* pStdReferenceInfo{};

    safe_VkVideoDecodeH264DpbSlotInfoKHR(const VkVideoDecodeH264DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH264DpbSlotInfoKHR(const safe_VkVideoDecodeH264DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeH264DpbSlotInfoKHR& operator=(const safe_VkVideoDecodeH264DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeH264DpbSlotInfoKHR();
    ~safe_VkVideoDecodeH264DpbSlotInfoKHR();
    void initialize(const VkVideoDecodeH264DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH264DpbSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH264DpbSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH264DpbSlotInfoKHR*>(this); }
    VkVideoDecodeH264DpbSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH264DpbSlotInfoKHR const*>(this); }
};
struct safe_VkRenderingFragmentShadingRateAttachmentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkImageView imageView;
    VkImageLayout imageLayout;
    VkExtent2D shadingRateAttachmentTexelSize;

    safe_VkRenderingFragmentShadingRateAttachmentInfoKHR(const VkRenderingFragmentShadingRateAttachmentInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingFragmentShadingRateAttachmentInfoKHR(const safe_VkRenderingFragmentShadingRateAttachmentInfoKHR& copy_src);
    safe_VkRenderingFragmentShadingRateAttachmentInfoKHR& operator=(
        const safe_VkRenderingFragmentShadingRateAttachmentInfoKHR& copy_src);
    safe_VkRenderingFragmentShadingRateAttachmentInfoKHR();
    ~safe_VkRenderingFragmentShadingRateAttachmentInfoKHR();
    void initialize(const VkRenderingFragmentShadingRateAttachmentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingFragmentShadingRateAttachmentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRenderingFragmentShadingRateAttachmentInfoKHR* ptr() {
        return reinterpret_cast<VkRenderingFragmentShadingRateAttachmentInfoKHR*>(this);
    }
    VkRenderingFragmentShadingRateAttachmentInfoKHR const* ptr() const {
        return reinterpret_cast<VkRenderingFragmentShadingRateAttachmentInfoKHR const*>(this);
    }
};
struct safe_VkRenderingFragmentDensityMapAttachmentInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImageView imageView;
    VkImageLayout imageLayout;

    safe_VkRenderingFragmentDensityMapAttachmentInfoEXT(const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingFragmentDensityMapAttachmentInfoEXT(const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& copy_src);
    safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& operator=(
        const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT& copy_src);
    safe_VkRenderingFragmentDensityMapAttachmentInfoEXT();
    ~safe_VkRenderingFragmentDensityMapAttachmentInfoEXT();
    void initialize(const VkRenderingFragmentDensityMapAttachmentInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingFragmentDensityMapAttachmentInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderingFragmentDensityMapAttachmentInfoEXT* ptr() {
        return reinterpret_cast<VkRenderingFragmentDensityMapAttachmentInfoEXT*>(this);
    }
    VkRenderingFragmentDensityMapAttachmentInfoEXT const* ptr() const {
        return reinterpret_cast<VkRenderingFragmentDensityMapAttachmentInfoEXT const*>(this);
    }
};
struct safe_VkAttachmentSampleCountInfoAMD {
    VkStructureType sType;
    const void* pNext{};
    uint32_t colorAttachmentCount;
    const VkSampleCountFlagBits* pColorAttachmentSamples{};
    VkSampleCountFlagBits depthStencilAttachmentSamples;

    safe_VkAttachmentSampleCountInfoAMD(const VkAttachmentSampleCountInfoAMD* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkAttachmentSampleCountInfoAMD(const safe_VkAttachmentSampleCountInfoAMD& copy_src);
    safe_VkAttachmentSampleCountInfoAMD& operator=(const safe_VkAttachmentSampleCountInfoAMD& copy_src);
    safe_VkAttachmentSampleCountInfoAMD();
    ~safe_VkAttachmentSampleCountInfoAMD();
    void initialize(const VkAttachmentSampleCountInfoAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAttachmentSampleCountInfoAMD* copy_src, PNextCopyState* copy_state = {});
    VkAttachmentSampleCountInfoAMD* ptr() { return reinterpret_cast<VkAttachmentSampleCountInfoAMD*>(this); }
    VkAttachmentSampleCountInfoAMD const* ptr() const { return reinterpret_cast<VkAttachmentSampleCountInfoAMD const*>(this); }
};
struct safe_VkMultiviewPerViewAttributesInfoNVX {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 perViewAttributes;
    VkBool32 perViewAttributesPositionXOnly;

    safe_VkMultiviewPerViewAttributesInfoNVX(const VkMultiviewPerViewAttributesInfoNVX* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkMultiviewPerViewAttributesInfoNVX(const safe_VkMultiviewPerViewAttributesInfoNVX& copy_src);
    safe_VkMultiviewPerViewAttributesInfoNVX& operator=(const safe_VkMultiviewPerViewAttributesInfoNVX& copy_src);
    safe_VkMultiviewPerViewAttributesInfoNVX();
    ~safe_VkMultiviewPerViewAttributesInfoNVX();
    void initialize(const VkMultiviewPerViewAttributesInfoNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMultiviewPerViewAttributesInfoNVX* copy_src, PNextCopyState* copy_state = {});
    VkMultiviewPerViewAttributesInfoNVX* ptr() { return reinterpret_cast<VkMultiviewPerViewAttributesInfoNVX*>(this); }
    VkMultiviewPerViewAttributesInfoNVX const* ptr() const {
        return reinterpret_cast<VkMultiviewPerViewAttributesInfoNVX const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagBits handleType;
    HANDLE handle;
    LPCWSTR name;

    safe_VkImportMemoryWin32HandleInfoKHR(const VkImportMemoryWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkImportMemoryWin32HandleInfoKHR(const safe_VkImportMemoryWin32HandleInfoKHR& copy_src);
    safe_VkImportMemoryWin32HandleInfoKHR& operator=(const safe_VkImportMemoryWin32HandleInfoKHR& copy_src);
    safe_VkImportMemoryWin32HandleInfoKHR();
    ~safe_VkImportMemoryWin32HandleInfoKHR();
    void initialize(const VkImportMemoryWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHR*>(this); }
    VkImportMemoryWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHR const*>(this); }
};
struct safe_VkExportMemoryWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const SECURITY_ATTRIBUTES* pAttributes{};
    DWORD dwAccess;
    LPCWSTR name;

    safe_VkExportMemoryWin32HandleInfoKHR(const VkExportMemoryWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkExportMemoryWin32HandleInfoKHR(const safe_VkExportMemoryWin32HandleInfoKHR& copy_src);
    safe_VkExportMemoryWin32HandleInfoKHR& operator=(const safe_VkExportMemoryWin32HandleInfoKHR& copy_src);
    safe_VkExportMemoryWin32HandleInfoKHR();
    ~safe_VkExportMemoryWin32HandleInfoKHR();
    void initialize(const VkExportMemoryWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMemoryWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkExportMemoryWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHR*>(this); }
    VkExportMemoryWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHR const*>(this); }
};
struct safe_VkMemoryWin32HandlePropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryTypeBits;

    safe_VkMemoryWin32HandlePropertiesKHR(const VkMemoryWin32HandlePropertiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkMemoryWin32HandlePropertiesKHR(const safe_VkMemoryWin32HandlePropertiesKHR& copy_src);
    safe_VkMemoryWin32HandlePropertiesKHR& operator=(const safe_VkMemoryWin32HandlePropertiesKHR& copy_src);
    safe_VkMemoryWin32HandlePropertiesKHR();
    ~safe_VkMemoryWin32HandlePropertiesKHR();
    void initialize(const VkMemoryWin32HandlePropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryWin32HandlePropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryWin32HandlePropertiesKHR* ptr() { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHR*>(this); }
    VkMemoryWin32HandlePropertiesKHR const* ptr() const { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHR const*>(this); }
};
struct safe_VkMemoryGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkMemoryGetWin32HandleInfoKHR(const VkMemoryGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkMemoryGetWin32HandleInfoKHR(const safe_VkMemoryGetWin32HandleInfoKHR& copy_src);
    safe_VkMemoryGetWin32HandleInfoKHR& operator=(const safe_VkMemoryGetWin32HandleInfoKHR& copy_src);
    safe_VkMemoryGetWin32HandleInfoKHR();
    ~safe_VkMemoryGetWin32HandleInfoKHR();
    void initialize(const VkMemoryGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryGetWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryGetWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkMemoryGetWin32HandleInfoKHR*>(this); }
    VkMemoryGetWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkMemoryGetWin32HandleInfoKHR const*>(this); }
};
#endif  // VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagBits handleType;
    int fd;

    safe_VkImportMemoryFdInfoKHR(const VkImportMemoryFdInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportMemoryFdInfoKHR(const safe_VkImportMemoryFdInfoKHR& copy_src);
    safe_VkImportMemoryFdInfoKHR& operator=(const safe_VkImportMemoryFdInfoKHR& copy_src);
    safe_VkImportMemoryFdInfoKHR();
    ~safe_VkImportMemoryFdInfoKHR();
    void initialize(const VkImportMemoryFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryFdInfoKHR* ptr() { return reinterpret_cast<VkImportMemoryFdInfoKHR*>(this); }
    VkImportMemoryFdInfoKHR const* ptr() const { return reinterpret_cast<VkImportMemoryFdInfoKHR const*>(this); }
};
struct safe_VkMemoryFdPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryTypeBits;

    safe_VkMemoryFdPropertiesKHR(const VkMemoryFdPropertiesKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryFdPropertiesKHR(const safe_VkMemoryFdPropertiesKHR& copy_src);
    safe_VkMemoryFdPropertiesKHR& operator=(const safe_VkMemoryFdPropertiesKHR& copy_src);
    safe_VkMemoryFdPropertiesKHR();
    ~safe_VkMemoryFdPropertiesKHR();
    void initialize(const VkMemoryFdPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryFdPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryFdPropertiesKHR* ptr() { return reinterpret_cast<VkMemoryFdPropertiesKHR*>(this); }
    VkMemoryFdPropertiesKHR const* ptr() const { return reinterpret_cast<VkMemoryFdPropertiesKHR const*>(this); }
};
struct safe_VkMemoryGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkMemoryGetFdInfoKHR(const VkMemoryGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryGetFdInfoKHR(const safe_VkMemoryGetFdInfoKHR& copy_src);
    safe_VkMemoryGetFdInfoKHR& operator=(const safe_VkMemoryGetFdInfoKHR& copy_src);
    safe_VkMemoryGetFdInfoKHR();
    ~safe_VkMemoryGetFdInfoKHR();
    void initialize(const VkMemoryGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryGetFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryGetFdInfoKHR* ptr() { return reinterpret_cast<VkMemoryGetFdInfoKHR*>(this); }
    VkMemoryGetFdInfoKHR const* ptr() const { return reinterpret_cast<VkMemoryGetFdInfoKHR const*>(this); }
};
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32KeyedMutexAcquireReleaseInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs{};
    const uint64_t* pAcquireKeys{};
    const uint32_t* pAcquireTimeouts{};
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs{};
    const uint64_t* pReleaseKeys{};

    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& copy_src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& copy_src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoKHR();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkWin32KeyedMutexAcquireReleaseInfoKHR* ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR*>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoKHR const* ptr() const {
        return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR const*>(this);
    }
};
struct safe_VkImportSemaphoreWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkSemaphoreImportFlags flags;
    VkExternalSemaphoreHandleTypeFlagBits handleType;
    HANDLE handle;
    LPCWSTR name;

    safe_VkImportSemaphoreWin32HandleInfoKHR(const VkImportSemaphoreWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkImportSemaphoreWin32HandleInfoKHR(const safe_VkImportSemaphoreWin32HandleInfoKHR& copy_src);
    safe_VkImportSemaphoreWin32HandleInfoKHR& operator=(const safe_VkImportSemaphoreWin32HandleInfoKHR& copy_src);
    safe_VkImportSemaphoreWin32HandleInfoKHR();
    ~safe_VkImportSemaphoreWin32HandleInfoKHR();
    void initialize(const VkImportSemaphoreWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportSemaphoreWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportSemaphoreWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR*>(this); }
    VkImportSemaphoreWin32HandleInfoKHR const* ptr() const {
        return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR const*>(this);
    }
};
struct safe_VkExportSemaphoreWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const SECURITY_ATTRIBUTES* pAttributes{};
    DWORD dwAccess;
    LPCWSTR name;

    safe_VkExportSemaphoreWin32HandleInfoKHR(const VkExportSemaphoreWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkExportSemaphoreWin32HandleInfoKHR(const safe_VkExportSemaphoreWin32HandleInfoKHR& copy_src);
    safe_VkExportSemaphoreWin32HandleInfoKHR& operator=(const safe_VkExportSemaphoreWin32HandleInfoKHR& copy_src);
    safe_VkExportSemaphoreWin32HandleInfoKHR();
    ~safe_VkExportSemaphoreWin32HandleInfoKHR();
    void initialize(const VkExportSemaphoreWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportSemaphoreWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkExportSemaphoreWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR*>(this); }
    VkExportSemaphoreWin32HandleInfoKHR const* ptr() const {
        return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR const*>(this);
    }
};
struct safe_VkD3D12FenceSubmitInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t waitSemaphoreValuesCount;
    const uint64_t* pWaitSemaphoreValues{};
    uint32_t signalSemaphoreValuesCount;
    const uint64_t* pSignalSemaphoreValues{};

    safe_VkD3D12FenceSubmitInfoKHR(const VkD3D12FenceSubmitInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkD3D12FenceSubmitInfoKHR(const safe_VkD3D12FenceSubmitInfoKHR& copy_src);
    safe_VkD3D12FenceSubmitInfoKHR& operator=(const safe_VkD3D12FenceSubmitInfoKHR& copy_src);
    safe_VkD3D12FenceSubmitInfoKHR();
    ~safe_VkD3D12FenceSubmitInfoKHR();
    void initialize(const VkD3D12FenceSubmitInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkD3D12FenceSubmitInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkD3D12FenceSubmitInfoKHR* ptr() { return reinterpret_cast<VkD3D12FenceSubmitInfoKHR*>(this); }
    VkD3D12FenceSubmitInfoKHR const* ptr() const { return reinterpret_cast<VkD3D12FenceSubmitInfoKHR const*>(this); }
};
struct safe_VkSemaphoreGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBits handleType;

    safe_VkSemaphoreGetWin32HandleInfoKHR(const VkSemaphoreGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkSemaphoreGetWin32HandleInfoKHR(const safe_VkSemaphoreGetWin32HandleInfoKHR& copy_src);
    safe_VkSemaphoreGetWin32HandleInfoKHR& operator=(const safe_VkSemaphoreGetWin32HandleInfoKHR& copy_src);
    safe_VkSemaphoreGetWin32HandleInfoKHR();
    ~safe_VkSemaphoreGetWin32HandleInfoKHR();
    void initialize(const VkSemaphoreGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreGetWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreGetWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR*>(this); }
    VkSemaphoreGetWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR const*>(this); }
};
#endif  // VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportSemaphoreFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkSemaphoreImportFlags flags;
    VkExternalSemaphoreHandleTypeFlagBits handleType;
    int fd;

    safe_VkImportSemaphoreFdInfoKHR(const VkImportSemaphoreFdInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkImportSemaphoreFdInfoKHR(const safe_VkImportSemaphoreFdInfoKHR& copy_src);
    safe_VkImportSemaphoreFdInfoKHR& operator=(const safe_VkImportSemaphoreFdInfoKHR& copy_src);
    safe_VkImportSemaphoreFdInfoKHR();
    ~safe_VkImportSemaphoreFdInfoKHR();
    void initialize(const VkImportSemaphoreFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportSemaphoreFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportSemaphoreFdInfoKHR* ptr() { return reinterpret_cast<VkImportSemaphoreFdInfoKHR*>(this); }
    VkImportSemaphoreFdInfoKHR const* ptr() const { return reinterpret_cast<VkImportSemaphoreFdInfoKHR const*>(this); }
};
struct safe_VkSemaphoreGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBits handleType;

    safe_VkSemaphoreGetFdInfoKHR(const VkSemaphoreGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreGetFdInfoKHR(const safe_VkSemaphoreGetFdInfoKHR& copy_src);
    safe_VkSemaphoreGetFdInfoKHR& operator=(const safe_VkSemaphoreGetFdInfoKHR& copy_src);
    safe_VkSemaphoreGetFdInfoKHR();
    ~safe_VkSemaphoreGetFdInfoKHR();
    void initialize(const VkSemaphoreGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreGetFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreGetFdInfoKHR* ptr() { return reinterpret_cast<VkSemaphoreGetFdInfoKHR*>(this); }
    VkSemaphoreGetFdInfoKHR const* ptr() const { return reinterpret_cast<VkSemaphoreGetFdInfoKHR const*>(this); }
};
struct safe_VkPhysicalDevicePushDescriptorPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxPushDescriptors;

    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR& operator=(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    ~safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    void initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePushDescriptorPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR*>(this);
    }
    VkPhysicalDevicePushDescriptorPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR const*>(this);
    }
};
struct safe_VkPresentRegionKHR {
    uint32_t rectangleCount;
    const VkRectLayerKHR* pRectangles{};

    safe_VkPresentRegionKHR(const VkPresentRegionKHR* in_struct, PNextCopyState* copy_state = {});
    safe_VkPresentRegionKHR(const safe_VkPresentRegionKHR& copy_src);
    safe_VkPresentRegionKHR& operator=(const safe_VkPresentRegionKHR& copy_src);
    safe_VkPresentRegionKHR();
    ~safe_VkPresentRegionKHR();
    void initialize(const VkPresentRegionKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentRegionKHR* copy_src, PNextCopyState* copy_state = {});
    VkPresentRegionKHR* ptr() { return reinterpret_cast<VkPresentRegionKHR*>(this); }
    VkPresentRegionKHR const* ptr() const { return reinterpret_cast<VkPresentRegionKHR const*>(this); }
};
struct safe_VkPresentRegionsKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    safe_VkPresentRegionKHR* pRegions{};

    safe_VkPresentRegionsKHR(const VkPresentRegionsKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPresentRegionsKHR(const safe_VkPresentRegionsKHR& copy_src);
    safe_VkPresentRegionsKHR& operator=(const safe_VkPresentRegionsKHR& copy_src);
    safe_VkPresentRegionsKHR();
    ~safe_VkPresentRegionsKHR();
    void initialize(const VkPresentRegionsKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentRegionsKHR* copy_src, PNextCopyState* copy_state = {});
    VkPresentRegionsKHR* ptr() { return reinterpret_cast<VkPresentRegionsKHR*>(this); }
    VkPresentRegionsKHR const* ptr() const { return reinterpret_cast<VkPresentRegionsKHR const*>(this); }
};
struct safe_VkSharedPresentSurfaceCapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkImageUsageFlags sharedPresentSupportedUsageFlags;

    safe_VkSharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSharedPresentSurfaceCapabilitiesKHR(const safe_VkSharedPresentSurfaceCapabilitiesKHR& copy_src);
    safe_VkSharedPresentSurfaceCapabilitiesKHR& operator=(const safe_VkSharedPresentSurfaceCapabilitiesKHR& copy_src);
    safe_VkSharedPresentSurfaceCapabilitiesKHR();
    ~safe_VkSharedPresentSurfaceCapabilitiesKHR();
    void initialize(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSharedPresentSurfaceCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkSharedPresentSurfaceCapabilitiesKHR* ptr() { return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(this); }
    VkSharedPresentSurfaceCapabilitiesKHR const* ptr() const {
        return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportFenceWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkFence fence;
    VkFenceImportFlags flags;
    VkExternalFenceHandleTypeFlagBits handleType;
    HANDLE handle;
    LPCWSTR name;

    safe_VkImportFenceWin32HandleInfoKHR(const VkImportFenceWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkImportFenceWin32HandleInfoKHR(const safe_VkImportFenceWin32HandleInfoKHR& copy_src);
    safe_VkImportFenceWin32HandleInfoKHR& operator=(const safe_VkImportFenceWin32HandleInfoKHR& copy_src);
    safe_VkImportFenceWin32HandleInfoKHR();
    ~safe_VkImportFenceWin32HandleInfoKHR();
    void initialize(const VkImportFenceWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportFenceWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportFenceWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkImportFenceWin32HandleInfoKHR*>(this); }
    VkImportFenceWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkImportFenceWin32HandleInfoKHR const*>(this); }
};
struct safe_VkExportFenceWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const SECURITY_ATTRIBUTES* pAttributes{};
    DWORD dwAccess;
    LPCWSTR name;

    safe_VkExportFenceWin32HandleInfoKHR(const VkExportFenceWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkExportFenceWin32HandleInfoKHR(const safe_VkExportFenceWin32HandleInfoKHR& copy_src);
    safe_VkExportFenceWin32HandleInfoKHR& operator=(const safe_VkExportFenceWin32HandleInfoKHR& copy_src);
    safe_VkExportFenceWin32HandleInfoKHR();
    ~safe_VkExportFenceWin32HandleInfoKHR();
    void initialize(const VkExportFenceWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportFenceWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkExportFenceWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkExportFenceWin32HandleInfoKHR*>(this); }
    VkExportFenceWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkExportFenceWin32HandleInfoKHR const*>(this); }
};
struct safe_VkFenceGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkFence fence;
    VkExternalFenceHandleTypeFlagBits handleType;

    safe_VkFenceGetWin32HandleInfoKHR(const VkFenceGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkFenceGetWin32HandleInfoKHR(const safe_VkFenceGetWin32HandleInfoKHR& copy_src);
    safe_VkFenceGetWin32HandleInfoKHR& operator=(const safe_VkFenceGetWin32HandleInfoKHR& copy_src);
    safe_VkFenceGetWin32HandleInfoKHR();
    ~safe_VkFenceGetWin32HandleInfoKHR();
    void initialize(const VkFenceGetWin32HandleInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFenceGetWin32HandleInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkFenceGetWin32HandleInfoKHR* ptr() { return reinterpret_cast<VkFenceGetWin32HandleInfoKHR*>(this); }
    VkFenceGetWin32HandleInfoKHR const* ptr() const { return reinterpret_cast<VkFenceGetWin32HandleInfoKHR const*>(this); }
};
#endif  // VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportFenceFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkFence fence;
    VkFenceImportFlags flags;
    VkExternalFenceHandleTypeFlagBits handleType;
    int fd;

    safe_VkImportFenceFdInfoKHR(const VkImportFenceFdInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportFenceFdInfoKHR(const safe_VkImportFenceFdInfoKHR& copy_src);
    safe_VkImportFenceFdInfoKHR& operator=(const safe_VkImportFenceFdInfoKHR& copy_src);
    safe_VkImportFenceFdInfoKHR();
    ~safe_VkImportFenceFdInfoKHR();
    void initialize(const VkImportFenceFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportFenceFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkImportFenceFdInfoKHR* ptr() { return reinterpret_cast<VkImportFenceFdInfoKHR*>(this); }
    VkImportFenceFdInfoKHR const* ptr() const { return reinterpret_cast<VkImportFenceFdInfoKHR const*>(this); }
};
struct safe_VkFenceGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkFence fence;
    VkExternalFenceHandleTypeFlagBits handleType;

    safe_VkFenceGetFdInfoKHR(const VkFenceGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFenceGetFdInfoKHR(const safe_VkFenceGetFdInfoKHR& copy_src);
    safe_VkFenceGetFdInfoKHR& operator=(const safe_VkFenceGetFdInfoKHR& copy_src);
    safe_VkFenceGetFdInfoKHR();
    ~safe_VkFenceGetFdInfoKHR();
    void initialize(const VkFenceGetFdInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFenceGetFdInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkFenceGetFdInfoKHR* ptr() { return reinterpret_cast<VkFenceGetFdInfoKHR*>(this); }
    VkFenceGetFdInfoKHR const* ptr() const { return reinterpret_cast<VkFenceGetFdInfoKHR const*>(this); }
};
struct safe_VkPhysicalDevicePerformanceQueryPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 allowCommandBufferQueryCopies;

    safe_VkPhysicalDevicePerformanceQueryPropertiesKHR(const VkPhysicalDevicePerformanceQueryPropertiesKHR* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePerformanceQueryPropertiesKHR(const safe_VkPhysicalDevicePerformanceQueryPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePerformanceQueryPropertiesKHR& operator=(
        const safe_VkPhysicalDevicePerformanceQueryPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePerformanceQueryPropertiesKHR();
    ~safe_VkPhysicalDevicePerformanceQueryPropertiesKHR();
    void initialize(const VkPhysicalDevicePerformanceQueryPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePerformanceQueryPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePerformanceQueryPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR*>(this);
    }
    VkPhysicalDevicePerformanceQueryPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR const*>(this);
    }
};
struct safe_VkPerformanceCounterKHR {
    VkStructureType sType;
    void* pNext{};
    VkPerformanceCounterUnitKHR unit;
    VkPerformanceCounterScopeKHR scope;
    VkPerformanceCounterStorageKHR storage;
    uint8_t uuid[VK_UUID_SIZE];

    safe_VkPerformanceCounterKHR(const VkPerformanceCounterKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPerformanceCounterKHR(const safe_VkPerformanceCounterKHR& copy_src);
    safe_VkPerformanceCounterKHR& operator=(const safe_VkPerformanceCounterKHR& copy_src);
    safe_VkPerformanceCounterKHR();
    ~safe_VkPerformanceCounterKHR();
    void initialize(const VkPerformanceCounterKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceCounterKHR* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceCounterKHR* ptr() { return reinterpret_cast<VkPerformanceCounterKHR*>(this); }
    VkPerformanceCounterKHR const* ptr() const { return reinterpret_cast<VkPerformanceCounterKHR const*>(this); }
};
struct safe_VkPerformanceCounterDescriptionKHR {
    VkStructureType sType;
    void* pNext{};
    VkPerformanceCounterDescriptionFlagsKHR flags;
    char name[VK_MAX_DESCRIPTION_SIZE];
    char category[VK_MAX_DESCRIPTION_SIZE];
    char description[VK_MAX_DESCRIPTION_SIZE];

    safe_VkPerformanceCounterDescriptionKHR(const VkPerformanceCounterDescriptionKHR* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPerformanceCounterDescriptionKHR(const safe_VkPerformanceCounterDescriptionKHR& copy_src);
    safe_VkPerformanceCounterDescriptionKHR& operator=(const safe_VkPerformanceCounterDescriptionKHR& copy_src);
    safe_VkPerformanceCounterDescriptionKHR();
    ~safe_VkPerformanceCounterDescriptionKHR();
    void initialize(const VkPerformanceCounterDescriptionKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceCounterDescriptionKHR* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceCounterDescriptionKHR* ptr() { return reinterpret_cast<VkPerformanceCounterDescriptionKHR*>(this); }
    VkPerformanceCounterDescriptionKHR const* ptr() const {
        return reinterpret_cast<VkPerformanceCounterDescriptionKHR const*>(this);
    }
};
struct safe_VkQueryPoolPerformanceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t queueFamilyIndex;
    uint32_t counterIndexCount;
    const uint32_t* pCounterIndices{};

    safe_VkQueryPoolPerformanceCreateInfoKHR(const VkQueryPoolPerformanceCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkQueryPoolPerformanceCreateInfoKHR(const safe_VkQueryPoolPerformanceCreateInfoKHR& copy_src);
    safe_VkQueryPoolPerformanceCreateInfoKHR& operator=(const safe_VkQueryPoolPerformanceCreateInfoKHR& copy_src);
    safe_VkQueryPoolPerformanceCreateInfoKHR();
    ~safe_VkQueryPoolPerformanceCreateInfoKHR();
    void initialize(const VkQueryPoolPerformanceCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueryPoolPerformanceCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkQueryPoolPerformanceCreateInfoKHR* ptr() { return reinterpret_cast<VkQueryPoolPerformanceCreateInfoKHR*>(this); }
    VkQueryPoolPerformanceCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkQueryPoolPerformanceCreateInfoKHR const*>(this);
    }
};
struct safe_VkAcquireProfilingLockInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAcquireProfilingLockFlagsKHR flags;
    uint64_t timeout;

    safe_VkAcquireProfilingLockInfoKHR(const VkAcquireProfilingLockInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkAcquireProfilingLockInfoKHR(const safe_VkAcquireProfilingLockInfoKHR& copy_src);
    safe_VkAcquireProfilingLockInfoKHR& operator=(const safe_VkAcquireProfilingLockInfoKHR& copy_src);
    safe_VkAcquireProfilingLockInfoKHR();
    ~safe_VkAcquireProfilingLockInfoKHR();
    void initialize(const VkAcquireProfilingLockInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAcquireProfilingLockInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAcquireProfilingLockInfoKHR* ptr() { return reinterpret_cast<VkAcquireProfilingLockInfoKHR*>(this); }
    VkAcquireProfilingLockInfoKHR const* ptr() const { return reinterpret_cast<VkAcquireProfilingLockInfoKHR const*>(this); }
};
struct safe_VkPerformanceQuerySubmitInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t counterPassIndex;

    safe_VkPerformanceQuerySubmitInfoKHR(const VkPerformanceQuerySubmitInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkPerformanceQuerySubmitInfoKHR(const safe_VkPerformanceQuerySubmitInfoKHR& copy_src);
    safe_VkPerformanceQuerySubmitInfoKHR& operator=(const safe_VkPerformanceQuerySubmitInfoKHR& copy_src);
    safe_VkPerformanceQuerySubmitInfoKHR();
    ~safe_VkPerformanceQuerySubmitInfoKHR();
    void initialize(const VkPerformanceQuerySubmitInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceQuerySubmitInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceQuerySubmitInfoKHR* ptr() { return reinterpret_cast<VkPerformanceQuerySubmitInfoKHR*>(this); }
    VkPerformanceQuerySubmitInfoKHR const* ptr() const { return reinterpret_cast<VkPerformanceQuerySubmitInfoKHR const*>(this); }
};
struct safe_VkPhysicalDeviceSurfaceInfo2KHR {
    VkStructureType sType;
    const void* pNext{};
    VkSurfaceKHR surface;

    safe_VkPhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkPhysicalDeviceSurfaceInfo2KHR(const safe_VkPhysicalDeviceSurfaceInfo2KHR& copy_src);
    safe_VkPhysicalDeviceSurfaceInfo2KHR& operator=(const safe_VkPhysicalDeviceSurfaceInfo2KHR& copy_src);
    safe_VkPhysicalDeviceSurfaceInfo2KHR();
    ~safe_VkPhysicalDeviceSurfaceInfo2KHR();
    void initialize(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSurfaceInfo2KHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSurfaceInfo2KHR* ptr() { return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR*>(this); }
    VkPhysicalDeviceSurfaceInfo2KHR const* ptr() const { return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR const*>(this); }
};
struct safe_VkSurfaceCapabilities2KHR {
    VkStructureType sType;
    void* pNext{};
    VkSurfaceCapabilitiesKHR surfaceCapabilities;

    safe_VkSurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkSurfaceCapabilities2KHR(const safe_VkSurfaceCapabilities2KHR& copy_src);
    safe_VkSurfaceCapabilities2KHR& operator=(const safe_VkSurfaceCapabilities2KHR& copy_src);
    safe_VkSurfaceCapabilities2KHR();
    ~safe_VkSurfaceCapabilities2KHR();
    void initialize(const VkSurfaceCapabilities2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceCapabilities2KHR* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceCapabilities2KHR* ptr() { return reinterpret_cast<VkSurfaceCapabilities2KHR*>(this); }
    VkSurfaceCapabilities2KHR const* ptr() const { return reinterpret_cast<VkSurfaceCapabilities2KHR const*>(this); }
};
struct safe_VkSurfaceFormat2KHR {
    VkStructureType sType;
    void* pNext{};
    VkSurfaceFormatKHR surfaceFormat;

    safe_VkSurfaceFormat2KHR(const VkSurfaceFormat2KHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfaceFormat2KHR(const safe_VkSurfaceFormat2KHR& copy_src);
    safe_VkSurfaceFormat2KHR& operator=(const safe_VkSurfaceFormat2KHR& copy_src);
    safe_VkSurfaceFormat2KHR();
    ~safe_VkSurfaceFormat2KHR();
    void initialize(const VkSurfaceFormat2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceFormat2KHR* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceFormat2KHR* ptr() { return reinterpret_cast<VkSurfaceFormat2KHR*>(this); }
    VkSurfaceFormat2KHR const* ptr() const { return reinterpret_cast<VkSurfaceFormat2KHR const*>(this); }
};
struct safe_VkDisplayProperties2KHR {
    VkStructureType sType;
    void* pNext{};
    safe_VkDisplayPropertiesKHR displayProperties;

    safe_VkDisplayProperties2KHR(const VkDisplayProperties2KHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayProperties2KHR(const safe_VkDisplayProperties2KHR& copy_src);
    safe_VkDisplayProperties2KHR& operator=(const safe_VkDisplayProperties2KHR& copy_src);
    safe_VkDisplayProperties2KHR();
    ~safe_VkDisplayProperties2KHR();
    void initialize(const VkDisplayProperties2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayProperties2KHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayProperties2KHR* ptr() { return reinterpret_cast<VkDisplayProperties2KHR*>(this); }
    VkDisplayProperties2KHR const* ptr() const { return reinterpret_cast<VkDisplayProperties2KHR const*>(this); }
};
struct safe_VkDisplayPlaneProperties2KHR {
    VkStructureType sType;
    void* pNext{};
    VkDisplayPlanePropertiesKHR displayPlaneProperties;

    safe_VkDisplayPlaneProperties2KHR(const VkDisplayPlaneProperties2KHR* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkDisplayPlaneProperties2KHR(const safe_VkDisplayPlaneProperties2KHR& copy_src);
    safe_VkDisplayPlaneProperties2KHR& operator=(const safe_VkDisplayPlaneProperties2KHR& copy_src);
    safe_VkDisplayPlaneProperties2KHR();
    ~safe_VkDisplayPlaneProperties2KHR();
    void initialize(const VkDisplayPlaneProperties2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPlaneProperties2KHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPlaneProperties2KHR* ptr() { return reinterpret_cast<VkDisplayPlaneProperties2KHR*>(this); }
    VkDisplayPlaneProperties2KHR const* ptr() const { return reinterpret_cast<VkDisplayPlaneProperties2KHR const*>(this); }
};
struct safe_VkDisplayModeProperties2KHR {
    VkStructureType sType;
    void* pNext{};
    VkDisplayModePropertiesKHR displayModeProperties;

    safe_VkDisplayModeProperties2KHR(const VkDisplayModeProperties2KHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkDisplayModeProperties2KHR(const safe_VkDisplayModeProperties2KHR& copy_src);
    safe_VkDisplayModeProperties2KHR& operator=(const safe_VkDisplayModeProperties2KHR& copy_src);
    safe_VkDisplayModeProperties2KHR();
    ~safe_VkDisplayModeProperties2KHR();
    void initialize(const VkDisplayModeProperties2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayModeProperties2KHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayModeProperties2KHR* ptr() { return reinterpret_cast<VkDisplayModeProperties2KHR*>(this); }
    VkDisplayModeProperties2KHR const* ptr() const { return reinterpret_cast<VkDisplayModeProperties2KHR const*>(this); }
};
struct safe_VkDisplayPlaneInfo2KHR {
    VkStructureType sType;
    const void* pNext{};
    VkDisplayModeKHR mode;
    uint32_t planeIndex;

    safe_VkDisplayPlaneInfo2KHR(const VkDisplayPlaneInfo2KHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayPlaneInfo2KHR(const safe_VkDisplayPlaneInfo2KHR& copy_src);
    safe_VkDisplayPlaneInfo2KHR& operator=(const safe_VkDisplayPlaneInfo2KHR& copy_src);
    safe_VkDisplayPlaneInfo2KHR();
    ~safe_VkDisplayPlaneInfo2KHR();
    void initialize(const VkDisplayPlaneInfo2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPlaneInfo2KHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPlaneInfo2KHR* ptr() { return reinterpret_cast<VkDisplayPlaneInfo2KHR*>(this); }
    VkDisplayPlaneInfo2KHR const* ptr() const { return reinterpret_cast<VkDisplayPlaneInfo2KHR const*>(this); }
};
struct safe_VkDisplayPlaneCapabilities2KHR {
    VkStructureType sType;
    void* pNext{};
    VkDisplayPlaneCapabilitiesKHR capabilities;

    safe_VkDisplayPlaneCapabilities2KHR(const VkDisplayPlaneCapabilities2KHR* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkDisplayPlaneCapabilities2KHR(const safe_VkDisplayPlaneCapabilities2KHR& copy_src);
    safe_VkDisplayPlaneCapabilities2KHR& operator=(const safe_VkDisplayPlaneCapabilities2KHR& copy_src);
    safe_VkDisplayPlaneCapabilities2KHR();
    ~safe_VkDisplayPlaneCapabilities2KHR();
    void initialize(const VkDisplayPlaneCapabilities2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPlaneCapabilities2KHR* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPlaneCapabilities2KHR* ptr() { return reinterpret_cast<VkDisplayPlaneCapabilities2KHR*>(this); }
    VkDisplayPlaneCapabilities2KHR const* ptr() const { return reinterpret_cast<VkDisplayPlaneCapabilities2KHR const*>(this); }
};
#ifdef VK_ENABLE_BETA_EXTENSIONS
struct safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t minVertexInputBindingStrideAlignment;

    safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR(const VkPhysicalDevicePortabilitySubsetPropertiesKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR(const safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR& operator=(
        const safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR& copy_src);
    safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR();
    ~safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR();
    void initialize(const VkPhysicalDevicePortabilitySubsetPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePortabilitySubsetPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePortabilitySubsetPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDevicePortabilitySubsetPropertiesKHR*>(this);
    }
    VkPhysicalDevicePortabilitySubsetPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePortabilitySubsetPropertiesKHR const*>(this);
    }
};
#endif  // VK_ENABLE_BETA_EXTENSIONS
struct safe_VkVideoDecodeH265ProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    StdVideoH265ProfileIdc stdProfileIdc;

    safe_VkVideoDecodeH265ProfileInfoKHR(const VkVideoDecodeH265ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH265ProfileInfoKHR(const safe_VkVideoDecodeH265ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeH265ProfileInfoKHR& operator=(const safe_VkVideoDecodeH265ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeH265ProfileInfoKHR();
    ~safe_VkVideoDecodeH265ProfileInfoKHR();
    void initialize(const VkVideoDecodeH265ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265ProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265ProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH265ProfileInfoKHR*>(this); }
    VkVideoDecodeH265ProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH265ProfileInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeH265CapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    StdVideoH265LevelIdc maxLevelIdc;

    safe_VkVideoDecodeH265CapabilitiesKHR(const VkVideoDecodeH265CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkVideoDecodeH265CapabilitiesKHR(const safe_VkVideoDecodeH265CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeH265CapabilitiesKHR& operator=(const safe_VkVideoDecodeH265CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeH265CapabilitiesKHR();
    ~safe_VkVideoDecodeH265CapabilitiesKHR();
    void initialize(const VkVideoDecodeH265CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265CapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265CapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoDecodeH265CapabilitiesKHR*>(this); }
    VkVideoDecodeH265CapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH265CapabilitiesKHR const*>(this); }
};
struct safe_VkVideoDecodeH265SessionParametersAddInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stdVPSCount;
    const StdVideoH265VideoParameterSet* pStdVPSs{};
    uint32_t stdSPSCount;
    const StdVideoH265SequenceParameterSet* pStdSPSs{};
    uint32_t stdPPSCount;
    const StdVideoH265PictureParameterSet* pStdPPSs{};

    safe_VkVideoDecodeH265SessionParametersAddInfoKHR(const VkVideoDecodeH265SessionParametersAddInfoKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeH265SessionParametersAddInfoKHR(const safe_VkVideoDecodeH265SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoDecodeH265SessionParametersAddInfoKHR& operator=(const safe_VkVideoDecodeH265SessionParametersAddInfoKHR& copy_src);
    safe_VkVideoDecodeH265SessionParametersAddInfoKHR();
    ~safe_VkVideoDecodeH265SessionParametersAddInfoKHR();
    void initialize(const VkVideoDecodeH265SessionParametersAddInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265SessionParametersAddInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265SessionParametersAddInfoKHR* ptr() {
        return reinterpret_cast<VkVideoDecodeH265SessionParametersAddInfoKHR*>(this);
    }
    VkVideoDecodeH265SessionParametersAddInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoDecodeH265SessionParametersAddInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeH265SessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxStdVPSCount;
    uint32_t maxStdSPSCount;
    uint32_t maxStdPPSCount;
    safe_VkVideoDecodeH265SessionParametersAddInfoKHR* pParametersAddInfo{};

    safe_VkVideoDecodeH265SessionParametersCreateInfoKHR(const VkVideoDecodeH265SessionParametersCreateInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeH265SessionParametersCreateInfoKHR(const safe_VkVideoDecodeH265SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeH265SessionParametersCreateInfoKHR& operator=(
        const safe_VkVideoDecodeH265SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeH265SessionParametersCreateInfoKHR();
    ~safe_VkVideoDecodeH265SessionParametersCreateInfoKHR();
    void initialize(const VkVideoDecodeH265SessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265SessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265SessionParametersCreateInfoKHR* ptr() {
        return reinterpret_cast<VkVideoDecodeH265SessionParametersCreateInfoKHR*>(this);
    }
    VkVideoDecodeH265SessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoDecodeH265SessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeH265PictureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeH265PictureInfo* pStdPictureInfo{};
    uint32_t sliceSegmentCount;
    const uint32_t* pSliceSegmentOffsets{};

    safe_VkVideoDecodeH265PictureInfoKHR(const VkVideoDecodeH265PictureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH265PictureInfoKHR(const safe_VkVideoDecodeH265PictureInfoKHR& copy_src);
    safe_VkVideoDecodeH265PictureInfoKHR& operator=(const safe_VkVideoDecodeH265PictureInfoKHR& copy_src);
    safe_VkVideoDecodeH265PictureInfoKHR();
    ~safe_VkVideoDecodeH265PictureInfoKHR();
    void initialize(const VkVideoDecodeH265PictureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265PictureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265PictureInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH265PictureInfoKHR*>(this); }
    VkVideoDecodeH265PictureInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH265PictureInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeH265DpbSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeH265ReferenceInfo* pStdReferenceInfo{};

    safe_VkVideoDecodeH265DpbSlotInfoKHR(const VkVideoDecodeH265DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeH265DpbSlotInfoKHR(const safe_VkVideoDecodeH265DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeH265DpbSlotInfoKHR& operator=(const safe_VkVideoDecodeH265DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeH265DpbSlotInfoKHR();
    ~safe_VkVideoDecodeH265DpbSlotInfoKHR();
    void initialize(const VkVideoDecodeH265DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeH265DpbSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeH265DpbSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeH265DpbSlotInfoKHR*>(this); }
    VkVideoDecodeH265DpbSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeH265DpbSlotInfoKHR const*>(this); }
};
struct safe_VkDeviceQueueGlobalPriorityCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkQueueGlobalPriorityKHR globalPriority;

    safe_VkDeviceQueueGlobalPriorityCreateInfoKHR(const VkDeviceQueueGlobalPriorityCreateInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceQueueGlobalPriorityCreateInfoKHR(const safe_VkDeviceQueueGlobalPriorityCreateInfoKHR& copy_src);
    safe_VkDeviceQueueGlobalPriorityCreateInfoKHR& operator=(const safe_VkDeviceQueueGlobalPriorityCreateInfoKHR& copy_src);
    safe_VkDeviceQueueGlobalPriorityCreateInfoKHR();
    ~safe_VkDeviceQueueGlobalPriorityCreateInfoKHR();
    void initialize(const VkDeviceQueueGlobalPriorityCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceQueueGlobalPriorityCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceQueueGlobalPriorityCreateInfoKHR* ptr() { return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoKHR*>(this); }
    VkDeviceQueueGlobalPriorityCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoKHR const*>(this);
    }
};
struct safe_VkQueueFamilyGlobalPriorityPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t priorityCount;
    VkQueueGlobalPriorityKHR priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR];

    safe_VkQueueFamilyGlobalPriorityPropertiesKHR(const VkQueueFamilyGlobalPriorityPropertiesKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueueFamilyGlobalPriorityPropertiesKHR(const safe_VkQueueFamilyGlobalPriorityPropertiesKHR& copy_src);
    safe_VkQueueFamilyGlobalPriorityPropertiesKHR& operator=(const safe_VkQueueFamilyGlobalPriorityPropertiesKHR& copy_src);
    safe_VkQueueFamilyGlobalPriorityPropertiesKHR();
    ~safe_VkQueueFamilyGlobalPriorityPropertiesKHR();
    void initialize(const VkQueueFamilyGlobalPriorityPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyGlobalPriorityPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyGlobalPriorityPropertiesKHR* ptr() { return reinterpret_cast<VkQueueFamilyGlobalPriorityPropertiesKHR*>(this); }
    VkQueueFamilyGlobalPriorityPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkQueueFamilyGlobalPriorityPropertiesKHR const*>(this);
    }
};
struct safe_VkFragmentShadingRateAttachmentInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    safe_VkAttachmentReference2* pFragmentShadingRateAttachment{};
    VkExtent2D shadingRateAttachmentTexelSize;

    safe_VkFragmentShadingRateAttachmentInfoKHR(const VkFragmentShadingRateAttachmentInfoKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFragmentShadingRateAttachmentInfoKHR(const safe_VkFragmentShadingRateAttachmentInfoKHR& copy_src);
    safe_VkFragmentShadingRateAttachmentInfoKHR& operator=(const safe_VkFragmentShadingRateAttachmentInfoKHR& copy_src);
    safe_VkFragmentShadingRateAttachmentInfoKHR();
    ~safe_VkFragmentShadingRateAttachmentInfoKHR();
    void initialize(const VkFragmentShadingRateAttachmentInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFragmentShadingRateAttachmentInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkFragmentShadingRateAttachmentInfoKHR* ptr() { return reinterpret_cast<VkFragmentShadingRateAttachmentInfoKHR*>(this); }
    VkFragmentShadingRateAttachmentInfoKHR const* ptr() const {
        return reinterpret_cast<VkFragmentShadingRateAttachmentInfoKHR const*>(this);
    }
};
struct safe_VkPipelineFragmentShadingRateStateCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkExtent2D fragmentSize;
    VkFragmentShadingRateCombinerOpKHR combinerOps[2];

    safe_VkPipelineFragmentShadingRateStateCreateInfoKHR(const VkPipelineFragmentShadingRateStateCreateInfoKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineFragmentShadingRateStateCreateInfoKHR(const safe_VkPipelineFragmentShadingRateStateCreateInfoKHR& copy_src);
    safe_VkPipelineFragmentShadingRateStateCreateInfoKHR& operator=(
        const safe_VkPipelineFragmentShadingRateStateCreateInfoKHR& copy_src);
    safe_VkPipelineFragmentShadingRateStateCreateInfoKHR();
    ~safe_VkPipelineFragmentShadingRateStateCreateInfoKHR();
    void initialize(const VkPipelineFragmentShadingRateStateCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineFragmentShadingRateStateCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineFragmentShadingRateStateCreateInfoKHR* ptr() {
        return reinterpret_cast<VkPipelineFragmentShadingRateStateCreateInfoKHR*>(this);
    }
    VkPipelineFragmentShadingRateStateCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkPipelineFragmentShadingRateStateCreateInfoKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D minFragmentShadingRateAttachmentTexelSize;
    VkExtent2D maxFragmentShadingRateAttachmentTexelSize;
    uint32_t maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
    VkBool32 primitiveFragmentShadingRateWithMultipleViewports;
    VkBool32 layeredShadingRateAttachments;
    VkBool32 fragmentShadingRateNonTrivialCombinerOps;
    VkExtent2D maxFragmentSize;
    uint32_t maxFragmentSizeAspectRatio;
    uint32_t maxFragmentShadingRateCoverageSamples;
    VkSampleCountFlagBits maxFragmentShadingRateRasterizationSamples;
    VkBool32 fragmentShadingRateWithShaderDepthStencilWrites;
    VkBool32 fragmentShadingRateWithSampleMask;
    VkBool32 fragmentShadingRateWithShaderSampleMask;
    VkBool32 fragmentShadingRateWithConservativeRasterization;
    VkBool32 fragmentShadingRateWithFragmentShaderInterlock;
    VkBool32 fragmentShadingRateWithCustomSampleLocations;
    VkBool32 fragmentShadingRateStrictMultiplyCombiner;

    safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(const VkPhysicalDeviceFragmentShadingRatePropertiesKHR* in_struct,
                                                          PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(const safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR& operator=(
        const safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR();
    ~safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR();
    void initialize(const VkPhysicalDeviceFragmentShadingRatePropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentShadingRatePropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR*>(this);
    }
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceFragmentShadingRateKHR {
    VkStructureType sType;
    void* pNext{};
    VkSampleCountFlags sampleCounts;
    VkExtent2D fragmentSize;

    safe_VkPhysicalDeviceFragmentShadingRateKHR(const VkPhysicalDeviceFragmentShadingRateKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentShadingRateKHR(const safe_VkPhysicalDeviceFragmentShadingRateKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRateKHR& operator=(const safe_VkPhysicalDeviceFragmentShadingRateKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRateKHR();
    ~safe_VkPhysicalDeviceFragmentShadingRateKHR();
    void initialize(const VkPhysicalDeviceFragmentShadingRateKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentShadingRateKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentShadingRateKHR* ptr() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR*>(this); }
    VkPhysicalDeviceFragmentShadingRateKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR const*>(this);
    }
};
struct safe_VkRenderingAttachmentLocationInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t colorAttachmentCount;
    const uint32_t* pColorAttachmentLocations{};

    safe_VkRenderingAttachmentLocationInfoKHR(const VkRenderingAttachmentLocationInfoKHR* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingAttachmentLocationInfoKHR(const safe_VkRenderingAttachmentLocationInfoKHR& copy_src);
    safe_VkRenderingAttachmentLocationInfoKHR& operator=(const safe_VkRenderingAttachmentLocationInfoKHR& copy_src);
    safe_VkRenderingAttachmentLocationInfoKHR();
    ~safe_VkRenderingAttachmentLocationInfoKHR();
    void initialize(const VkRenderingAttachmentLocationInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingAttachmentLocationInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRenderingAttachmentLocationInfoKHR* ptr() { return reinterpret_cast<VkRenderingAttachmentLocationInfoKHR*>(this); }
    VkRenderingAttachmentLocationInfoKHR const* ptr() const {
        return reinterpret_cast<VkRenderingAttachmentLocationInfoKHR const*>(this);
    }
};
struct safe_VkRenderingInputAttachmentIndexInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t colorAttachmentCount;
    const uint32_t* pColorAttachmentInputIndices{};
    const uint32_t* pDepthInputAttachmentIndex{};
    const uint32_t* pStencilInputAttachmentIndex{};

    safe_VkRenderingInputAttachmentIndexInfoKHR(const VkRenderingInputAttachmentIndexInfoKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingInputAttachmentIndexInfoKHR(const safe_VkRenderingInputAttachmentIndexInfoKHR& copy_src);
    safe_VkRenderingInputAttachmentIndexInfoKHR& operator=(const safe_VkRenderingInputAttachmentIndexInfoKHR& copy_src);
    safe_VkRenderingInputAttachmentIndexInfoKHR();
    ~safe_VkRenderingInputAttachmentIndexInfoKHR();
    void initialize(const VkRenderingInputAttachmentIndexInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingInputAttachmentIndexInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRenderingInputAttachmentIndexInfoKHR* ptr() { return reinterpret_cast<VkRenderingInputAttachmentIndexInfoKHR*>(this); }
    VkRenderingInputAttachmentIndexInfoKHR const* ptr() const {
        return reinterpret_cast<VkRenderingInputAttachmentIndexInfoKHR const*>(this);
    }
};
struct safe_VkSurfaceProtectedCapabilitiesKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 supportsProtected;

    safe_VkSurfaceProtectedCapabilitiesKHR(const VkSurfaceProtectedCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkSurfaceProtectedCapabilitiesKHR(const safe_VkSurfaceProtectedCapabilitiesKHR& copy_src);
    safe_VkSurfaceProtectedCapabilitiesKHR& operator=(const safe_VkSurfaceProtectedCapabilitiesKHR& copy_src);
    safe_VkSurfaceProtectedCapabilitiesKHR();
    ~safe_VkSurfaceProtectedCapabilitiesKHR();
    void initialize(const VkSurfaceProtectedCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceProtectedCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceProtectedCapabilitiesKHR* ptr() { return reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR*>(this); }
    VkSurfaceProtectedCapabilitiesKHR const* ptr() const {
        return reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR const*>(this);
    }
};
struct safe_VkPipelineInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkPipeline pipeline;

    safe_VkPipelineInfoKHR(const VkPipelineInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineInfoKHR(const safe_VkPipelineInfoKHR& copy_src);
    safe_VkPipelineInfoKHR& operator=(const safe_VkPipelineInfoKHR& copy_src);
    safe_VkPipelineInfoKHR();
    ~safe_VkPipelineInfoKHR();
    void initialize(const VkPipelineInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineInfoKHR* ptr() { return reinterpret_cast<VkPipelineInfoKHR*>(this); }
    VkPipelineInfoKHR const* ptr() const { return reinterpret_cast<VkPipelineInfoKHR const*>(this); }
};
struct safe_VkPipelineExecutablePropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkShaderStageFlags stages;
    char name[VK_MAX_DESCRIPTION_SIZE];
    char description[VK_MAX_DESCRIPTION_SIZE];
    uint32_t subgroupSize;

    safe_VkPipelineExecutablePropertiesKHR(const VkPipelineExecutablePropertiesKHR* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPipelineExecutablePropertiesKHR(const safe_VkPipelineExecutablePropertiesKHR& copy_src);
    safe_VkPipelineExecutablePropertiesKHR& operator=(const safe_VkPipelineExecutablePropertiesKHR& copy_src);
    safe_VkPipelineExecutablePropertiesKHR();
    ~safe_VkPipelineExecutablePropertiesKHR();
    void initialize(const VkPipelineExecutablePropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineExecutablePropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineExecutablePropertiesKHR* ptr() { return reinterpret_cast<VkPipelineExecutablePropertiesKHR*>(this); }
    VkPipelineExecutablePropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPipelineExecutablePropertiesKHR const*>(this);
    }
};
struct safe_VkPipelineExecutableInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkPipeline pipeline;
    uint32_t executableIndex;

    safe_VkPipelineExecutableInfoKHR(const VkPipelineExecutableInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkPipelineExecutableInfoKHR(const safe_VkPipelineExecutableInfoKHR& copy_src);
    safe_VkPipelineExecutableInfoKHR& operator=(const safe_VkPipelineExecutableInfoKHR& copy_src);
    safe_VkPipelineExecutableInfoKHR();
    ~safe_VkPipelineExecutableInfoKHR();
    void initialize(const VkPipelineExecutableInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineExecutableInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineExecutableInfoKHR* ptr() { return reinterpret_cast<VkPipelineExecutableInfoKHR*>(this); }
    VkPipelineExecutableInfoKHR const* ptr() const { return reinterpret_cast<VkPipelineExecutableInfoKHR const*>(this); }
};
struct safe_VkPipelineExecutableStatisticKHR {
    VkStructureType sType;
    void* pNext{};
    char name[VK_MAX_DESCRIPTION_SIZE];
    char description[VK_MAX_DESCRIPTION_SIZE];
    VkPipelineExecutableStatisticFormatKHR format;
    VkPipelineExecutableStatisticValueKHR value;

    safe_VkPipelineExecutableStatisticKHR(const VkPipelineExecutableStatisticKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkPipelineExecutableStatisticKHR(const safe_VkPipelineExecutableStatisticKHR& copy_src);
    safe_VkPipelineExecutableStatisticKHR& operator=(const safe_VkPipelineExecutableStatisticKHR& copy_src);
    safe_VkPipelineExecutableStatisticKHR();
    ~safe_VkPipelineExecutableStatisticKHR();
    void initialize(const VkPipelineExecutableStatisticKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineExecutableStatisticKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineExecutableStatisticKHR* ptr() { return reinterpret_cast<VkPipelineExecutableStatisticKHR*>(this); }
    VkPipelineExecutableStatisticKHR const* ptr() const { return reinterpret_cast<VkPipelineExecutableStatisticKHR const*>(this); }
};
struct safe_VkPipelineExecutableInternalRepresentationKHR {
    VkStructureType sType;
    void* pNext{};
    char name[VK_MAX_DESCRIPTION_SIZE];
    char description[VK_MAX_DESCRIPTION_SIZE];
    VkBool32 isText;
    size_t dataSize;
    void* pData{};

    safe_VkPipelineExecutableInternalRepresentationKHR(const VkPipelineExecutableInternalRepresentationKHR* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineExecutableInternalRepresentationKHR(const safe_VkPipelineExecutableInternalRepresentationKHR& copy_src);
    safe_VkPipelineExecutableInternalRepresentationKHR& operator=(
        const safe_VkPipelineExecutableInternalRepresentationKHR& copy_src);
    safe_VkPipelineExecutableInternalRepresentationKHR();
    ~safe_VkPipelineExecutableInternalRepresentationKHR();
    void initialize(const VkPipelineExecutableInternalRepresentationKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineExecutableInternalRepresentationKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineExecutableInternalRepresentationKHR* ptr() {
        return reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR*>(this);
    }
    VkPipelineExecutableInternalRepresentationKHR const* ptr() const {
        return reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR const*>(this);
    }
};
struct safe_VkMemoryMapInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkMemoryMapFlags flags;
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;

    safe_VkMemoryMapInfoKHR(const VkMemoryMapInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryMapInfoKHR(const safe_VkMemoryMapInfoKHR& copy_src);
    safe_VkMemoryMapInfoKHR& operator=(const safe_VkMemoryMapInfoKHR& copy_src);
    safe_VkMemoryMapInfoKHR();
    ~safe_VkMemoryMapInfoKHR();
    void initialize(const VkMemoryMapInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryMapInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryMapInfoKHR* ptr() { return reinterpret_cast<VkMemoryMapInfoKHR*>(this); }
    VkMemoryMapInfoKHR const* ptr() const { return reinterpret_cast<VkMemoryMapInfoKHR const*>(this); }
};
struct safe_VkMemoryUnmapInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkMemoryUnmapFlagsKHR flags;
    VkDeviceMemory memory;

    safe_VkMemoryUnmapInfoKHR(const VkMemoryUnmapInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryUnmapInfoKHR(const safe_VkMemoryUnmapInfoKHR& copy_src);
    safe_VkMemoryUnmapInfoKHR& operator=(const safe_VkMemoryUnmapInfoKHR& copy_src);
    safe_VkMemoryUnmapInfoKHR();
    ~safe_VkMemoryUnmapInfoKHR();
    void initialize(const VkMemoryUnmapInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryUnmapInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkMemoryUnmapInfoKHR* ptr() { return reinterpret_cast<VkMemoryUnmapInfoKHR*>(this); }
    VkMemoryUnmapInfoKHR const* ptr() const { return reinterpret_cast<VkMemoryUnmapInfoKHR const*>(this); }
};
struct safe_VkPipelineLibraryCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t libraryCount;
    VkPipeline* pLibraries{};

    safe_VkPipelineLibraryCreateInfoKHR(const VkPipelineLibraryCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkPipelineLibraryCreateInfoKHR(const safe_VkPipelineLibraryCreateInfoKHR& copy_src);
    safe_VkPipelineLibraryCreateInfoKHR& operator=(const safe_VkPipelineLibraryCreateInfoKHR& copy_src);
    safe_VkPipelineLibraryCreateInfoKHR();
    ~safe_VkPipelineLibraryCreateInfoKHR();
    void initialize(const VkPipelineLibraryCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineLibraryCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineLibraryCreateInfoKHR* ptr() { return reinterpret_cast<VkPipelineLibraryCreateInfoKHR*>(this); }
    VkPipelineLibraryCreateInfoKHR const* ptr() const { return reinterpret_cast<VkPipelineLibraryCreateInfoKHR const*>(this); }
};
struct safe_VkPresentIdKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    const uint64_t* pPresentIds{};

    safe_VkPresentIdKHR(const VkPresentIdKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPresentIdKHR(const safe_VkPresentIdKHR& copy_src);
    safe_VkPresentIdKHR& operator=(const safe_VkPresentIdKHR& copy_src);
    safe_VkPresentIdKHR();
    ~safe_VkPresentIdKHR();
    void initialize(const VkPresentIdKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentIdKHR* copy_src, PNextCopyState* copy_state = {});
    VkPresentIdKHR* ptr() { return reinterpret_cast<VkPresentIdKHR*>(this); }
    VkPresentIdKHR const* ptr() const { return reinterpret_cast<VkPresentIdKHR const*>(this); }
};
struct safe_VkVideoEncodeInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeFlagsKHR flags;
    VkBuffer dstBuffer;
    VkDeviceSize dstBufferOffset;
    VkDeviceSize dstBufferRange;
    safe_VkVideoPictureResourceInfoKHR srcPictureResource;
    safe_VkVideoReferenceSlotInfoKHR* pSetupReferenceSlot{};
    uint32_t referenceSlotCount;
    safe_VkVideoReferenceSlotInfoKHR* pReferenceSlots{};
    uint32_t precedingExternallyEncodedBytes;

    safe_VkVideoEncodeInfoKHR(const VkVideoEncodeInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeInfoKHR(const safe_VkVideoEncodeInfoKHR& copy_src);
    safe_VkVideoEncodeInfoKHR& operator=(const safe_VkVideoEncodeInfoKHR& copy_src);
    safe_VkVideoEncodeInfoKHR();
    ~safe_VkVideoEncodeInfoKHR();
    void initialize(const VkVideoEncodeInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeInfoKHR*>(this); }
    VkVideoEncodeInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeCapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeCapabilityFlagsKHR flags;
    VkVideoEncodeRateControlModeFlagsKHR rateControlModes;
    uint32_t maxRateControlLayers;
    uint64_t maxBitrate;
    uint32_t maxQualityLevels;
    VkExtent2D encodeInputPictureGranularity;
    VkVideoEncodeFeedbackFlagsKHR supportedEncodeFeedbackFlags;

    safe_VkVideoEncodeCapabilitiesKHR(const VkVideoEncodeCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkVideoEncodeCapabilitiesKHR(const safe_VkVideoEncodeCapabilitiesKHR& copy_src);
    safe_VkVideoEncodeCapabilitiesKHR& operator=(const safe_VkVideoEncodeCapabilitiesKHR& copy_src);
    safe_VkVideoEncodeCapabilitiesKHR();
    ~safe_VkVideoEncodeCapabilitiesKHR();
    void initialize(const VkVideoEncodeCapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeCapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeCapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoEncodeCapabilitiesKHR*>(this); }
    VkVideoEncodeCapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeCapabilitiesKHR const*>(this); }
};
struct safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeFeedbackFlagsKHR encodeFeedbackFlags;

    safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(const safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR& copy_src);
    safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR& operator=(const safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR& copy_src);
    safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR();
    ~safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR();
    void initialize(const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkQueryPoolVideoEncodeFeedbackCreateInfoKHR* ptr() {
        return reinterpret_cast<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR*>(this);
    }
    VkQueryPoolVideoEncodeFeedbackCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeUsageInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeUsageFlagsKHR videoUsageHints;
    VkVideoEncodeContentFlagsKHR videoContentHints;
    VkVideoEncodeTuningModeKHR tuningMode;

    safe_VkVideoEncodeUsageInfoKHR(const VkVideoEncodeUsageInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkVideoEncodeUsageInfoKHR(const safe_VkVideoEncodeUsageInfoKHR& copy_src);
    safe_VkVideoEncodeUsageInfoKHR& operator=(const safe_VkVideoEncodeUsageInfoKHR& copy_src);
    safe_VkVideoEncodeUsageInfoKHR();
    ~safe_VkVideoEncodeUsageInfoKHR();
    void initialize(const VkVideoEncodeUsageInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeUsageInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeUsageInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeUsageInfoKHR*>(this); }
    VkVideoEncodeUsageInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeUsageInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeRateControlLayerInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint64_t averageBitrate;
    uint64_t maxBitrate;
    uint32_t frameRateNumerator;
    uint32_t frameRateDenominator;

    safe_VkVideoEncodeRateControlLayerInfoKHR(const VkVideoEncodeRateControlLayerInfoKHR* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeRateControlLayerInfoKHR(const safe_VkVideoEncodeRateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeRateControlLayerInfoKHR& operator=(const safe_VkVideoEncodeRateControlLayerInfoKHR& copy_src);
    safe_VkVideoEncodeRateControlLayerInfoKHR();
    ~safe_VkVideoEncodeRateControlLayerInfoKHR();
    void initialize(const VkVideoEncodeRateControlLayerInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeRateControlLayerInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeRateControlLayerInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeRateControlLayerInfoKHR*>(this); }
    VkVideoEncodeRateControlLayerInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeRateControlLayerInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeRateControlInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoEncodeRateControlFlagsKHR flags;
    VkVideoEncodeRateControlModeFlagBitsKHR rateControlMode;
    uint32_t layerCount;
    safe_VkVideoEncodeRateControlLayerInfoKHR* pLayers{};
    uint32_t virtualBufferSizeInMs;
    uint32_t initialVirtualBufferSizeInMs;

    safe_VkVideoEncodeRateControlInfoKHR(const VkVideoEncodeRateControlInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoEncodeRateControlInfoKHR(const safe_VkVideoEncodeRateControlInfoKHR& copy_src);
    safe_VkVideoEncodeRateControlInfoKHR& operator=(const safe_VkVideoEncodeRateControlInfoKHR& copy_src);
    safe_VkVideoEncodeRateControlInfoKHR();
    ~safe_VkVideoEncodeRateControlInfoKHR();
    void initialize(const VkVideoEncodeRateControlInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeRateControlInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeRateControlInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeRateControlInfoKHR*>(this); }
    VkVideoEncodeRateControlInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeRateControlInfoKHR const*>(this); }
};
struct safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    safe_VkVideoProfileInfoKHR* pVideoProfile{};
    uint32_t qualityLevel;

    safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(const safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR& copy_src);
    safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR& operator=(
        const safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR& copy_src);
    safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR();
    ~safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR();
    void initialize(const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR*>(this);
    }
    VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeQualityLevelPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkVideoEncodeRateControlModeFlagBitsKHR preferredRateControlMode;
    uint32_t preferredRateControlLayerCount;

    safe_VkVideoEncodeQualityLevelPropertiesKHR(const VkVideoEncodeQualityLevelPropertiesKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeQualityLevelPropertiesKHR(const safe_VkVideoEncodeQualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeQualityLevelPropertiesKHR& operator=(const safe_VkVideoEncodeQualityLevelPropertiesKHR& copy_src);
    safe_VkVideoEncodeQualityLevelPropertiesKHR();
    ~safe_VkVideoEncodeQualityLevelPropertiesKHR();
    void initialize(const VkVideoEncodeQualityLevelPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeQualityLevelPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeQualityLevelPropertiesKHR* ptr() { return reinterpret_cast<VkVideoEncodeQualityLevelPropertiesKHR*>(this); }
    VkVideoEncodeQualityLevelPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeQualityLevelPropertiesKHR const*>(this);
    }
};
struct safe_VkVideoEncodeQualityLevelInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t qualityLevel;

    safe_VkVideoEncodeQualityLevelInfoKHR(const VkVideoEncodeQualityLevelInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkVideoEncodeQualityLevelInfoKHR(const safe_VkVideoEncodeQualityLevelInfoKHR& copy_src);
    safe_VkVideoEncodeQualityLevelInfoKHR& operator=(const safe_VkVideoEncodeQualityLevelInfoKHR& copy_src);
    safe_VkVideoEncodeQualityLevelInfoKHR();
    ~safe_VkVideoEncodeQualityLevelInfoKHR();
    void initialize(const VkVideoEncodeQualityLevelInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeQualityLevelInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeQualityLevelInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeQualityLevelInfoKHR*>(this); }
    VkVideoEncodeQualityLevelInfoKHR const* ptr() const { return reinterpret_cast<VkVideoEncodeQualityLevelInfoKHR const*>(this); }
};
struct safe_VkVideoEncodeSessionParametersGetInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkVideoSessionParametersKHR videoSessionParameters;

    safe_VkVideoEncodeSessionParametersGetInfoKHR(const VkVideoEncodeSessionParametersGetInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeSessionParametersGetInfoKHR(const safe_VkVideoEncodeSessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeSessionParametersGetInfoKHR& operator=(const safe_VkVideoEncodeSessionParametersGetInfoKHR& copy_src);
    safe_VkVideoEncodeSessionParametersGetInfoKHR();
    ~safe_VkVideoEncodeSessionParametersGetInfoKHR();
    void initialize(const VkVideoEncodeSessionParametersGetInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeSessionParametersGetInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeSessionParametersGetInfoKHR* ptr() { return reinterpret_cast<VkVideoEncodeSessionParametersGetInfoKHR*>(this); }
    VkVideoEncodeSessionParametersGetInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeSessionParametersGetInfoKHR const*>(this);
    }
};
struct safe_VkVideoEncodeSessionParametersFeedbackInfoKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 hasOverrides;

    safe_VkVideoEncodeSessionParametersFeedbackInfoKHR(const VkVideoEncodeSessionParametersFeedbackInfoKHR* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoEncodeSessionParametersFeedbackInfoKHR(const safe_VkVideoEncodeSessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeSessionParametersFeedbackInfoKHR& operator=(
        const safe_VkVideoEncodeSessionParametersFeedbackInfoKHR& copy_src);
    safe_VkVideoEncodeSessionParametersFeedbackInfoKHR();
    ~safe_VkVideoEncodeSessionParametersFeedbackInfoKHR();
    void initialize(const VkVideoEncodeSessionParametersFeedbackInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoEncodeSessionParametersFeedbackInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoEncodeSessionParametersFeedbackInfoKHR* ptr() {
        return reinterpret_cast<VkVideoEncodeSessionParametersFeedbackInfoKHR*>(this);
    }
    VkVideoEncodeSessionParametersFeedbackInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoEncodeSessionParametersFeedbackInfoKHR const*>(this);
    }
};
struct safe_VkQueueFamilyCheckpointProperties2NV {
    VkStructureType sType;
    void* pNext{};
    VkPipelineStageFlags2 checkpointExecutionStageMask;

    safe_VkQueueFamilyCheckpointProperties2NV(const VkQueueFamilyCheckpointProperties2NV* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueueFamilyCheckpointProperties2NV(const safe_VkQueueFamilyCheckpointProperties2NV& copy_src);
    safe_VkQueueFamilyCheckpointProperties2NV& operator=(const safe_VkQueueFamilyCheckpointProperties2NV& copy_src);
    safe_VkQueueFamilyCheckpointProperties2NV();
    ~safe_VkQueueFamilyCheckpointProperties2NV();
    void initialize(const VkQueueFamilyCheckpointProperties2NV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyCheckpointProperties2NV* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyCheckpointProperties2NV* ptr() { return reinterpret_cast<VkQueueFamilyCheckpointProperties2NV*>(this); }
    VkQueueFamilyCheckpointProperties2NV const* ptr() const {
        return reinterpret_cast<VkQueueFamilyCheckpointProperties2NV const*>(this);
    }
};
struct safe_VkCheckpointData2NV {
    VkStructureType sType;
    void* pNext{};
    VkPipelineStageFlags2 stage;
    void* pCheckpointMarker{};

    safe_VkCheckpointData2NV(const VkCheckpointData2NV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCheckpointData2NV(const safe_VkCheckpointData2NV& copy_src);
    safe_VkCheckpointData2NV& operator=(const safe_VkCheckpointData2NV& copy_src);
    safe_VkCheckpointData2NV();
    ~safe_VkCheckpointData2NV();
    void initialize(const VkCheckpointData2NV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCheckpointData2NV* copy_src, PNextCopyState* copy_state = {});
    VkCheckpointData2NV* ptr() { return reinterpret_cast<VkCheckpointData2NV*>(this); }
    VkCheckpointData2NV const* ptr() const { return reinterpret_cast<VkCheckpointData2NV const*>(this); }
};
struct safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 triStripVertexOrderIndependentOfProvokingVertex;

    safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
        const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
        const safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& operator=(
        const safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR();
    ~safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR();
    void initialize(const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR*>(this);
    }
    VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceMaintenance5PropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 earlyFragmentMultisampleCoverageAfterSampleCounting;
    VkBool32 earlyFragmentSampleMaskTestBeforeSampleCounting;
    VkBool32 depthStencilSwizzleOneSupport;
    VkBool32 polygonModePointSize;
    VkBool32 nonStrictSinglePixelWideLinesUseParallelogram;
    VkBool32 nonStrictWideLinesUseParallelogram;

    safe_VkPhysicalDeviceMaintenance5PropertiesKHR(const VkPhysicalDeviceMaintenance5PropertiesKHR* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMaintenance5PropertiesKHR(const safe_VkPhysicalDeviceMaintenance5PropertiesKHR& copy_src);
    safe_VkPhysicalDeviceMaintenance5PropertiesKHR& operator=(const safe_VkPhysicalDeviceMaintenance5PropertiesKHR& copy_src);
    safe_VkPhysicalDeviceMaintenance5PropertiesKHR();
    ~safe_VkPhysicalDeviceMaintenance5PropertiesKHR();
    void initialize(const VkPhysicalDeviceMaintenance5PropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMaintenance5PropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMaintenance5PropertiesKHR* ptr() { return reinterpret_cast<VkPhysicalDeviceMaintenance5PropertiesKHR*>(this); }
    VkPhysicalDeviceMaintenance5PropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMaintenance5PropertiesKHR const*>(this);
    }
};
struct safe_VkRenderingAreaInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t viewMask;
    uint32_t colorAttachmentCount;
    const VkFormat* pColorAttachmentFormats{};
    VkFormat depthAttachmentFormat;
    VkFormat stencilAttachmentFormat;

    safe_VkRenderingAreaInfoKHR(const VkRenderingAreaInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderingAreaInfoKHR(const safe_VkRenderingAreaInfoKHR& copy_src);
    safe_VkRenderingAreaInfoKHR& operator=(const safe_VkRenderingAreaInfoKHR& copy_src);
    safe_VkRenderingAreaInfoKHR();
    ~safe_VkRenderingAreaInfoKHR();
    void initialize(const VkRenderingAreaInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderingAreaInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRenderingAreaInfoKHR* ptr() { return reinterpret_cast<VkRenderingAreaInfoKHR*>(this); }
    VkRenderingAreaInfoKHR const* ptr() const { return reinterpret_cast<VkRenderingAreaInfoKHR const*>(this); }
};
struct safe_VkImageSubresource2KHR {
    VkStructureType sType;
    void* pNext{};
    VkImageSubresource imageSubresource;

    safe_VkImageSubresource2KHR(const VkImageSubresource2KHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageSubresource2KHR(const safe_VkImageSubresource2KHR& copy_src);
    safe_VkImageSubresource2KHR& operator=(const safe_VkImageSubresource2KHR& copy_src);
    safe_VkImageSubresource2KHR();
    ~safe_VkImageSubresource2KHR();
    void initialize(const VkImageSubresource2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageSubresource2KHR* copy_src, PNextCopyState* copy_state = {});
    VkImageSubresource2KHR* ptr() { return reinterpret_cast<VkImageSubresource2KHR*>(this); }
    VkImageSubresource2KHR const* ptr() const { return reinterpret_cast<VkImageSubresource2KHR const*>(this); }
};
struct safe_VkDeviceImageSubresourceInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    safe_VkImageCreateInfo* pCreateInfo{};
    safe_VkImageSubresource2KHR* pSubresource{};

    safe_VkDeviceImageSubresourceInfoKHR(const VkDeviceImageSubresourceInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkDeviceImageSubresourceInfoKHR(const safe_VkDeviceImageSubresourceInfoKHR& copy_src);
    safe_VkDeviceImageSubresourceInfoKHR& operator=(const safe_VkDeviceImageSubresourceInfoKHR& copy_src);
    safe_VkDeviceImageSubresourceInfoKHR();
    ~safe_VkDeviceImageSubresourceInfoKHR();
    void initialize(const VkDeviceImageSubresourceInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceImageSubresourceInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceImageSubresourceInfoKHR* ptr() { return reinterpret_cast<VkDeviceImageSubresourceInfoKHR*>(this); }
    VkDeviceImageSubresourceInfoKHR const* ptr() const { return reinterpret_cast<VkDeviceImageSubresourceInfoKHR const*>(this); }
};
struct safe_VkSubresourceLayout2KHR {
    VkStructureType sType;
    void* pNext{};
    VkSubresourceLayout subresourceLayout;

    safe_VkSubresourceLayout2KHR(const VkSubresourceLayout2KHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubresourceLayout2KHR(const safe_VkSubresourceLayout2KHR& copy_src);
    safe_VkSubresourceLayout2KHR& operator=(const safe_VkSubresourceLayout2KHR& copy_src);
    safe_VkSubresourceLayout2KHR();
    ~safe_VkSubresourceLayout2KHR();
    void initialize(const VkSubresourceLayout2KHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubresourceLayout2KHR* copy_src, PNextCopyState* copy_state = {});
    VkSubresourceLayout2KHR* ptr() { return reinterpret_cast<VkSubresourceLayout2KHR*>(this); }
    VkSubresourceLayout2KHR const* ptr() const { return reinterpret_cast<VkSubresourceLayout2KHR const*>(this); }
};
struct safe_VkPipelineCreateFlags2CreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags2KHR flags;

    safe_VkPipelineCreateFlags2CreateInfoKHR(const VkPipelineCreateFlags2CreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkPipelineCreateFlags2CreateInfoKHR(const safe_VkPipelineCreateFlags2CreateInfoKHR& copy_src);
    safe_VkPipelineCreateFlags2CreateInfoKHR& operator=(const safe_VkPipelineCreateFlags2CreateInfoKHR& copy_src);
    safe_VkPipelineCreateFlags2CreateInfoKHR();
    ~safe_VkPipelineCreateFlags2CreateInfoKHR();
    void initialize(const VkPipelineCreateFlags2CreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCreateFlags2CreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCreateFlags2CreateInfoKHR* ptr() { return reinterpret_cast<VkPipelineCreateFlags2CreateInfoKHR*>(this); }
    VkPipelineCreateFlags2CreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkPipelineCreateFlags2CreateInfoKHR const*>(this);
    }
};
struct safe_VkBufferUsageFlags2CreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBufferUsageFlags2KHR usage;

    safe_VkBufferUsageFlags2CreateInfoKHR(const VkBufferUsageFlags2CreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkBufferUsageFlags2CreateInfoKHR(const safe_VkBufferUsageFlags2CreateInfoKHR& copy_src);
    safe_VkBufferUsageFlags2CreateInfoKHR& operator=(const safe_VkBufferUsageFlags2CreateInfoKHR& copy_src);
    safe_VkBufferUsageFlags2CreateInfoKHR();
    ~safe_VkBufferUsageFlags2CreateInfoKHR();
    void initialize(const VkBufferUsageFlags2CreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferUsageFlags2CreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkBufferUsageFlags2CreateInfoKHR* ptr() { return reinterpret_cast<VkBufferUsageFlags2CreateInfoKHR*>(this); }
    VkBufferUsageFlags2CreateInfoKHR const* ptr() const { return reinterpret_cast<VkBufferUsageFlags2CreateInfoKHR const*>(this); }
};
struct safe_VkCooperativeMatrixPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t MSize;
    uint32_t NSize;
    uint32_t KSize;
    VkComponentTypeKHR AType;
    VkComponentTypeKHR BType;
    VkComponentTypeKHR CType;
    VkComponentTypeKHR ResultType;
    VkBool32 saturatingAccumulation;
    VkScopeKHR scope;

    safe_VkCooperativeMatrixPropertiesKHR(const VkCooperativeMatrixPropertiesKHR* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkCooperativeMatrixPropertiesKHR(const safe_VkCooperativeMatrixPropertiesKHR& copy_src);
    safe_VkCooperativeMatrixPropertiesKHR& operator=(const safe_VkCooperativeMatrixPropertiesKHR& copy_src);
    safe_VkCooperativeMatrixPropertiesKHR();
    ~safe_VkCooperativeMatrixPropertiesKHR();
    void initialize(const VkCooperativeMatrixPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCooperativeMatrixPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkCooperativeMatrixPropertiesKHR* ptr() { return reinterpret_cast<VkCooperativeMatrixPropertiesKHR*>(this); }
    VkCooperativeMatrixPropertiesKHR const* ptr() const { return reinterpret_cast<VkCooperativeMatrixPropertiesKHR const*>(this); }
};
struct safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkShaderStageFlags cooperativeMatrixSupportedStages;

    safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(const VkPhysicalDeviceCooperativeMatrixPropertiesKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(const safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR& operator=(
        const safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR();
    ~safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR();
    void initialize(const VkPhysicalDeviceCooperativeMatrixPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceCooperativeMatrixPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceCooperativeMatrixPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesKHR*>(this);
    }
    VkPhysicalDeviceCooperativeMatrixPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesKHR const*>(this);
    }
};
struct safe_VkVideoDecodeAV1ProfileInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    StdVideoAV1Profile stdProfile;
    VkBool32 filmGrainSupport;

    safe_VkVideoDecodeAV1ProfileInfoKHR(const VkVideoDecodeAV1ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkVideoDecodeAV1ProfileInfoKHR(const safe_VkVideoDecodeAV1ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeAV1ProfileInfoKHR& operator=(const safe_VkVideoDecodeAV1ProfileInfoKHR& copy_src);
    safe_VkVideoDecodeAV1ProfileInfoKHR();
    ~safe_VkVideoDecodeAV1ProfileInfoKHR();
    void initialize(const VkVideoDecodeAV1ProfileInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeAV1ProfileInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeAV1ProfileInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeAV1ProfileInfoKHR*>(this); }
    VkVideoDecodeAV1ProfileInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeAV1ProfileInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeAV1CapabilitiesKHR {
    VkStructureType sType;
    void* pNext{};
    StdVideoAV1Level maxLevel;

    safe_VkVideoDecodeAV1CapabilitiesKHR(const VkVideoDecodeAV1CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkVideoDecodeAV1CapabilitiesKHR(const safe_VkVideoDecodeAV1CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeAV1CapabilitiesKHR& operator=(const safe_VkVideoDecodeAV1CapabilitiesKHR& copy_src);
    safe_VkVideoDecodeAV1CapabilitiesKHR();
    ~safe_VkVideoDecodeAV1CapabilitiesKHR();
    void initialize(const VkVideoDecodeAV1CapabilitiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeAV1CapabilitiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeAV1CapabilitiesKHR* ptr() { return reinterpret_cast<VkVideoDecodeAV1CapabilitiesKHR*>(this); }
    VkVideoDecodeAV1CapabilitiesKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeAV1CapabilitiesKHR const*>(this); }
};
struct safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoAV1SequenceHeader* pStdSequenceHeader{};

    safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR(const VkVideoDecodeAV1SessionParametersCreateInfoKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR(const safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR& operator=(
        const safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR& copy_src);
    safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR();
    ~safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR();
    void initialize(const VkVideoDecodeAV1SessionParametersCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeAV1SessionParametersCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeAV1SessionParametersCreateInfoKHR* ptr() {
        return reinterpret_cast<VkVideoDecodeAV1SessionParametersCreateInfoKHR*>(this);
    }
    VkVideoDecodeAV1SessionParametersCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkVideoDecodeAV1SessionParametersCreateInfoKHR const*>(this);
    }
};
struct safe_VkVideoDecodeAV1PictureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeAV1PictureInfo* pStdPictureInfo{};
    int32_t referenceNameSlotIndices[VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR];
    uint32_t frameHeaderOffset;
    uint32_t tileCount;
    const uint32_t* pTileOffsets{};
    const uint32_t* pTileSizes{};

    safe_VkVideoDecodeAV1PictureInfoKHR(const VkVideoDecodeAV1PictureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkVideoDecodeAV1PictureInfoKHR(const safe_VkVideoDecodeAV1PictureInfoKHR& copy_src);
    safe_VkVideoDecodeAV1PictureInfoKHR& operator=(const safe_VkVideoDecodeAV1PictureInfoKHR& copy_src);
    safe_VkVideoDecodeAV1PictureInfoKHR();
    ~safe_VkVideoDecodeAV1PictureInfoKHR();
    void initialize(const VkVideoDecodeAV1PictureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeAV1PictureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeAV1PictureInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeAV1PictureInfoKHR*>(this); }
    VkVideoDecodeAV1PictureInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeAV1PictureInfoKHR const*>(this); }
};
struct safe_VkVideoDecodeAV1DpbSlotInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const StdVideoDecodeAV1ReferenceInfo* pStdReferenceInfo{};

    safe_VkVideoDecodeAV1DpbSlotInfoKHR(const VkVideoDecodeAV1DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkVideoDecodeAV1DpbSlotInfoKHR(const safe_VkVideoDecodeAV1DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeAV1DpbSlotInfoKHR& operator=(const safe_VkVideoDecodeAV1DpbSlotInfoKHR& copy_src);
    safe_VkVideoDecodeAV1DpbSlotInfoKHR();
    ~safe_VkVideoDecodeAV1DpbSlotInfoKHR();
    void initialize(const VkVideoDecodeAV1DpbSlotInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoDecodeAV1DpbSlotInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoDecodeAV1DpbSlotInfoKHR* ptr() { return reinterpret_cast<VkVideoDecodeAV1DpbSlotInfoKHR*>(this); }
    VkVideoDecodeAV1DpbSlotInfoKHR const* ptr() const { return reinterpret_cast<VkVideoDecodeAV1DpbSlotInfoKHR const*>(this); }
};
struct safe_VkVideoInlineQueryInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;

    safe_VkVideoInlineQueryInfoKHR(const VkVideoInlineQueryInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkVideoInlineQueryInfoKHR(const safe_VkVideoInlineQueryInfoKHR& copy_src);
    safe_VkVideoInlineQueryInfoKHR& operator=(const safe_VkVideoInlineQueryInfoKHR& copy_src);
    safe_VkVideoInlineQueryInfoKHR();
    ~safe_VkVideoInlineQueryInfoKHR();
    void initialize(const VkVideoInlineQueryInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVideoInlineQueryInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkVideoInlineQueryInfoKHR* ptr() { return reinterpret_cast<VkVideoInlineQueryInfoKHR*>(this); }
    VkVideoInlineQueryInfoKHR const* ptr() const { return reinterpret_cast<VkVideoInlineQueryInfoKHR const*>(this); }
};
struct safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxVertexAttribDivisor;
    VkBool32 supportsNonZeroFirstInstance;

    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(
        const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR& operator=(
        const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR();
    ~safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR();
    void initialize(const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR*>(this);
    }
    VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR const*>(this);
    }
};
struct safe_VkPipelineVertexInputDivisorStateCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t vertexBindingDivisorCount;
    const VkVertexInputBindingDivisorDescriptionKHR* pVertexBindingDivisors{};

    safe_VkPipelineVertexInputDivisorStateCreateInfoKHR(const VkPipelineVertexInputDivisorStateCreateInfoKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineVertexInputDivisorStateCreateInfoKHR(const safe_VkPipelineVertexInputDivisorStateCreateInfoKHR& copy_src);
    safe_VkPipelineVertexInputDivisorStateCreateInfoKHR& operator=(
        const safe_VkPipelineVertexInputDivisorStateCreateInfoKHR& copy_src);
    safe_VkPipelineVertexInputDivisorStateCreateInfoKHR();
    ~safe_VkPipelineVertexInputDivisorStateCreateInfoKHR();
    void initialize(const VkPipelineVertexInputDivisorStateCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineVertexInputDivisorStateCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineVertexInputDivisorStateCreateInfoKHR* ptr() {
        return reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoKHR*>(this);
    }
    VkPipelineVertexInputDivisorStateCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceLineRasterizationPropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t lineSubPixelPrecisionBits;

    safe_VkPhysicalDeviceLineRasterizationPropertiesKHR(const VkPhysicalDeviceLineRasterizationPropertiesKHR* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceLineRasterizationPropertiesKHR(const safe_VkPhysicalDeviceLineRasterizationPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceLineRasterizationPropertiesKHR& operator=(
        const safe_VkPhysicalDeviceLineRasterizationPropertiesKHR& copy_src);
    safe_VkPhysicalDeviceLineRasterizationPropertiesKHR();
    ~safe_VkPhysicalDeviceLineRasterizationPropertiesKHR();
    void initialize(const VkPhysicalDeviceLineRasterizationPropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceLineRasterizationPropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceLineRasterizationPropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesKHR*>(this);
    }
    VkPhysicalDeviceLineRasterizationPropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesKHR const*>(this);
    }
};
struct safe_VkPipelineRasterizationLineStateCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkLineRasterizationModeKHR lineRasterizationMode;
    VkBool32 stippledLineEnable;
    uint32_t lineStippleFactor;
    uint16_t lineStipplePattern;

    safe_VkPipelineRasterizationLineStateCreateInfoKHR(const VkPipelineRasterizationLineStateCreateInfoKHR* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineRasterizationLineStateCreateInfoKHR(const safe_VkPipelineRasterizationLineStateCreateInfoKHR& copy_src);
    safe_VkPipelineRasterizationLineStateCreateInfoKHR& operator=(
        const safe_VkPipelineRasterizationLineStateCreateInfoKHR& copy_src);
    safe_VkPipelineRasterizationLineStateCreateInfoKHR();
    ~safe_VkPipelineRasterizationLineStateCreateInfoKHR();
    void initialize(const VkPipelineRasterizationLineStateCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationLineStateCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationLineStateCreateInfoKHR* ptr() {
        return reinterpret_cast<VkPipelineRasterizationLineStateCreateInfoKHR*>(this);
    }
    VkPipelineRasterizationLineStateCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationLineStateCreateInfoKHR const*>(this);
    }
};
struct safe_VkCalibratedTimestampInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkTimeDomainKHR timeDomain;

    safe_VkCalibratedTimestampInfoKHR(const VkCalibratedTimestampInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkCalibratedTimestampInfoKHR(const safe_VkCalibratedTimestampInfoKHR& copy_src);
    safe_VkCalibratedTimestampInfoKHR& operator=(const safe_VkCalibratedTimestampInfoKHR& copy_src);
    safe_VkCalibratedTimestampInfoKHR();
    ~safe_VkCalibratedTimestampInfoKHR();
    void initialize(const VkCalibratedTimestampInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCalibratedTimestampInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkCalibratedTimestampInfoKHR* ptr() { return reinterpret_cast<VkCalibratedTimestampInfoKHR*>(this); }
    VkCalibratedTimestampInfoKHR const* ptr() const { return reinterpret_cast<VkCalibratedTimestampInfoKHR const*>(this); }
};
struct safe_VkPhysicalDeviceMaintenance6PropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    VkBool32 blockTexelViewCompatibleMultipleLayers;
    uint32_t maxCombinedImageSamplerDescriptorCount;
    VkBool32 fragmentShadingRateClampCombinerInputs;

    safe_VkPhysicalDeviceMaintenance6PropertiesKHR(const VkPhysicalDeviceMaintenance6PropertiesKHR* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMaintenance6PropertiesKHR(const safe_VkPhysicalDeviceMaintenance6PropertiesKHR& copy_src);
    safe_VkPhysicalDeviceMaintenance6PropertiesKHR& operator=(const safe_VkPhysicalDeviceMaintenance6PropertiesKHR& copy_src);
    safe_VkPhysicalDeviceMaintenance6PropertiesKHR();
    ~safe_VkPhysicalDeviceMaintenance6PropertiesKHR();
    void initialize(const VkPhysicalDeviceMaintenance6PropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMaintenance6PropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMaintenance6PropertiesKHR* ptr() { return reinterpret_cast<VkPhysicalDeviceMaintenance6PropertiesKHR*>(this); }
    VkPhysicalDeviceMaintenance6PropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMaintenance6PropertiesKHR const*>(this);
    }
};
struct safe_VkBindMemoryStatusKHR {
    VkStructureType sType;
    const void* pNext{};
    VkResult* pResult{};

    safe_VkBindMemoryStatusKHR(const VkBindMemoryStatusKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindMemoryStatusKHR(const safe_VkBindMemoryStatusKHR& copy_src);
    safe_VkBindMemoryStatusKHR& operator=(const safe_VkBindMemoryStatusKHR& copy_src);
    safe_VkBindMemoryStatusKHR();
    ~safe_VkBindMemoryStatusKHR();
    void initialize(const VkBindMemoryStatusKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindMemoryStatusKHR* copy_src, PNextCopyState* copy_state = {});
    VkBindMemoryStatusKHR* ptr() { return reinterpret_cast<VkBindMemoryStatusKHR*>(this); }
    VkBindMemoryStatusKHR const* ptr() const { return reinterpret_cast<VkBindMemoryStatusKHR const*>(this); }
};
struct safe_VkBindDescriptorSetsInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkShaderStageFlags stageFlags;
    VkPipelineLayout layout;
    uint32_t firstSet;
    uint32_t descriptorSetCount;
    VkDescriptorSet* pDescriptorSets{};
    uint32_t dynamicOffsetCount;
    const uint32_t* pDynamicOffsets{};

    safe_VkBindDescriptorSetsInfoKHR(const VkBindDescriptorSetsInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkBindDescriptorSetsInfoKHR(const safe_VkBindDescriptorSetsInfoKHR& copy_src);
    safe_VkBindDescriptorSetsInfoKHR& operator=(const safe_VkBindDescriptorSetsInfoKHR& copy_src);
    safe_VkBindDescriptorSetsInfoKHR();
    ~safe_VkBindDescriptorSetsInfoKHR();
    void initialize(const VkBindDescriptorSetsInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindDescriptorSetsInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkBindDescriptorSetsInfoKHR* ptr() { return reinterpret_cast<VkBindDescriptorSetsInfoKHR*>(this); }
    VkBindDescriptorSetsInfoKHR const* ptr() const { return reinterpret_cast<VkBindDescriptorSetsInfoKHR const*>(this); }
};
struct safe_VkPushConstantsInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineLayout layout;
    VkShaderStageFlags stageFlags;
    uint32_t offset;
    uint32_t size;
    const void* pValues{};

    safe_VkPushConstantsInfoKHR(const VkPushConstantsInfoKHR* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPushConstantsInfoKHR(const safe_VkPushConstantsInfoKHR& copy_src);
    safe_VkPushConstantsInfoKHR& operator=(const safe_VkPushConstantsInfoKHR& copy_src);
    safe_VkPushConstantsInfoKHR();
    ~safe_VkPushConstantsInfoKHR();
    void initialize(const VkPushConstantsInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPushConstantsInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPushConstantsInfoKHR* ptr() { return reinterpret_cast<VkPushConstantsInfoKHR*>(this); }
    VkPushConstantsInfoKHR const* ptr() const { return reinterpret_cast<VkPushConstantsInfoKHR const*>(this); }
};
struct safe_VkPushDescriptorSetInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkShaderStageFlags stageFlags;
    VkPipelineLayout layout;
    uint32_t set;
    uint32_t descriptorWriteCount;
    safe_VkWriteDescriptorSet* pDescriptorWrites{};

    safe_VkPushDescriptorSetInfoKHR(const VkPushDescriptorSetInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkPushDescriptorSetInfoKHR(const safe_VkPushDescriptorSetInfoKHR& copy_src);
    safe_VkPushDescriptorSetInfoKHR& operator=(const safe_VkPushDescriptorSetInfoKHR& copy_src);
    safe_VkPushDescriptorSetInfoKHR();
    ~safe_VkPushDescriptorSetInfoKHR();
    void initialize(const VkPushDescriptorSetInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPushDescriptorSetInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPushDescriptorSetInfoKHR* ptr() { return reinterpret_cast<VkPushDescriptorSetInfoKHR*>(this); }
    VkPushDescriptorSetInfoKHR const* ptr() const { return reinterpret_cast<VkPushDescriptorSetInfoKHR const*>(this); }
};
struct safe_VkPushDescriptorSetWithTemplateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    VkPipelineLayout layout;
    uint32_t set;
    const void* pData{};

    safe_VkPushDescriptorSetWithTemplateInfoKHR(const VkPushDescriptorSetWithTemplateInfoKHR* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPushDescriptorSetWithTemplateInfoKHR(const safe_VkPushDescriptorSetWithTemplateInfoKHR& copy_src);
    safe_VkPushDescriptorSetWithTemplateInfoKHR& operator=(const safe_VkPushDescriptorSetWithTemplateInfoKHR& copy_src);
    safe_VkPushDescriptorSetWithTemplateInfoKHR();
    ~safe_VkPushDescriptorSetWithTemplateInfoKHR();
    void initialize(const VkPushDescriptorSetWithTemplateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPushDescriptorSetWithTemplateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkPushDescriptorSetWithTemplateInfoKHR* ptr() { return reinterpret_cast<VkPushDescriptorSetWithTemplateInfoKHR*>(this); }
    VkPushDescriptorSetWithTemplateInfoKHR const* ptr() const {
        return reinterpret_cast<VkPushDescriptorSetWithTemplateInfoKHR const*>(this);
    }
};
struct safe_VkSetDescriptorBufferOffsetsInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkShaderStageFlags stageFlags;
    VkPipelineLayout layout;
    uint32_t firstSet;
    uint32_t setCount;
    const uint32_t* pBufferIndices{};
    const VkDeviceSize* pOffsets{};

    safe_VkSetDescriptorBufferOffsetsInfoEXT(const VkSetDescriptorBufferOffsetsInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkSetDescriptorBufferOffsetsInfoEXT(const safe_VkSetDescriptorBufferOffsetsInfoEXT& copy_src);
    safe_VkSetDescriptorBufferOffsetsInfoEXT& operator=(const safe_VkSetDescriptorBufferOffsetsInfoEXT& copy_src);
    safe_VkSetDescriptorBufferOffsetsInfoEXT();
    ~safe_VkSetDescriptorBufferOffsetsInfoEXT();
    void initialize(const VkSetDescriptorBufferOffsetsInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSetDescriptorBufferOffsetsInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSetDescriptorBufferOffsetsInfoEXT* ptr() { return reinterpret_cast<VkSetDescriptorBufferOffsetsInfoEXT*>(this); }
    VkSetDescriptorBufferOffsetsInfoEXT const* ptr() const {
        return reinterpret_cast<VkSetDescriptorBufferOffsetsInfoEXT const*>(this);
    }
};
struct safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkShaderStageFlags stageFlags;
    VkPipelineLayout layout;
    uint32_t set;

    safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src);
    safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& operator=(
        const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT& copy_src);
    safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT();
    ~safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT();
    void initialize(const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindDescriptorBufferEmbeddedSamplersInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkBindDescriptorBufferEmbeddedSamplersInfoEXT* ptr() {
        return reinterpret_cast<VkBindDescriptorBufferEmbeddedSamplersInfoEXT*>(this);
    }
    VkBindDescriptorBufferEmbeddedSamplersInfoEXT const* ptr() const {
        return reinterpret_cast<VkBindDescriptorBufferEmbeddedSamplersInfoEXT const*>(this);
    }
};
struct safe_VkDebugReportCallbackCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDebugReportFlagsEXT flags;
    PFN_vkDebugReportCallbackEXT pfnCallback;
    void* pUserData{};

    safe_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkDebugReportCallbackCreateInfoEXT(const safe_VkDebugReportCallbackCreateInfoEXT& copy_src);
    safe_VkDebugReportCallbackCreateInfoEXT& operator=(const safe_VkDebugReportCallbackCreateInfoEXT& copy_src);
    safe_VkDebugReportCallbackCreateInfoEXT();
    ~safe_VkDebugReportCallbackCreateInfoEXT();
    void initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugReportCallbackCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugReportCallbackCreateInfoEXT* ptr() { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT*>(this); }
    VkDebugReportCallbackCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT const*>(this);
    }
};
struct safe_VkPipelineRasterizationStateRasterizationOrderAMD {
    VkStructureType sType;
    const void* pNext{};
    VkRasterizationOrderAMD rasterizationOrder;

    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& copy_src);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD& operator=(
        const safe_VkPipelineRasterizationStateRasterizationOrderAMD& copy_src);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    ~safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    void initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationStateRasterizationOrderAMD* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationStateRasterizationOrderAMD* ptr() {
        return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD*>(this);
    }
    VkPipelineRasterizationStateRasterizationOrderAMD const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD const*>(this);
    }
};
struct safe_VkDebugMarkerObjectNameInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    const char* pObjectName{};

    safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& copy_src);
    safe_VkDebugMarkerObjectNameInfoEXT& operator=(const safe_VkDebugMarkerObjectNameInfoEXT& copy_src);
    safe_VkDebugMarkerObjectNameInfoEXT();
    ~safe_VkDebugMarkerObjectNameInfoEXT();
    void initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugMarkerObjectNameInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugMarkerObjectNameInfoEXT* ptr() { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT*>(this); }
    VkDebugMarkerObjectNameInfoEXT const* ptr() const { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT const*>(this); }
};
struct safe_VkDebugMarkerObjectTagInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    uint64_t tagName;
    size_t tagSize;
    const void* pTag{};

    safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& copy_src);
    safe_VkDebugMarkerObjectTagInfoEXT& operator=(const safe_VkDebugMarkerObjectTagInfoEXT& copy_src);
    safe_VkDebugMarkerObjectTagInfoEXT();
    ~safe_VkDebugMarkerObjectTagInfoEXT();
    void initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugMarkerObjectTagInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugMarkerObjectTagInfoEXT* ptr() { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT*>(this); }
    VkDebugMarkerObjectTagInfoEXT const* ptr() const { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT const*>(this); }
};
struct safe_VkDebugMarkerMarkerInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    const char* pMarkerName{};
    float color[4];

    safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& copy_src);
    safe_VkDebugMarkerMarkerInfoEXT& operator=(const safe_VkDebugMarkerMarkerInfoEXT& copy_src);
    safe_VkDebugMarkerMarkerInfoEXT();
    ~safe_VkDebugMarkerMarkerInfoEXT();
    void initialize(const VkDebugMarkerMarkerInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugMarkerMarkerInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugMarkerMarkerInfoEXT* ptr() { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT*>(this); }
    VkDebugMarkerMarkerInfoEXT const* ptr() const { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT const*>(this); }
};
struct safe_VkDedicatedAllocationImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 dedicatedAllocation;

    safe_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDedicatedAllocationImageCreateInfoNV(const safe_VkDedicatedAllocationImageCreateInfoNV& copy_src);
    safe_VkDedicatedAllocationImageCreateInfoNV& operator=(const safe_VkDedicatedAllocationImageCreateInfoNV& copy_src);
    safe_VkDedicatedAllocationImageCreateInfoNV();
    ~safe_VkDedicatedAllocationImageCreateInfoNV();
    void initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDedicatedAllocationImageCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkDedicatedAllocationImageCreateInfoNV* ptr() { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV*>(this); }
    VkDedicatedAllocationImageCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV const*>(this);
    }
};
struct safe_VkDedicatedAllocationBufferCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 dedicatedAllocation;

    safe_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDedicatedAllocationBufferCreateInfoNV(const safe_VkDedicatedAllocationBufferCreateInfoNV& copy_src);
    safe_VkDedicatedAllocationBufferCreateInfoNV& operator=(const safe_VkDedicatedAllocationBufferCreateInfoNV& copy_src);
    safe_VkDedicatedAllocationBufferCreateInfoNV();
    ~safe_VkDedicatedAllocationBufferCreateInfoNV();
    void initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDedicatedAllocationBufferCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkDedicatedAllocationBufferCreateInfoNV* ptr() { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV*>(this); }
    VkDedicatedAllocationBufferCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV const*>(this);
    }
};
struct safe_VkDedicatedAllocationMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    VkBuffer buffer;

    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& copy_src);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV& operator=(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& copy_src);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    ~safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    void initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDedicatedAllocationMemoryAllocateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkDedicatedAllocationMemoryAllocateInfoNV* ptr() { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV*>(this); }
    VkDedicatedAllocationMemoryAllocateInfoNV const* ptr() const {
        return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxTransformFeedbackStreams;
    uint32_t maxTransformFeedbackBuffers;
    VkDeviceSize maxTransformFeedbackBufferSize;
    uint32_t maxTransformFeedbackStreamDataSize;
    uint32_t maxTransformFeedbackBufferDataSize;
    uint32_t maxTransformFeedbackBufferDataStride;
    VkBool32 transformFeedbackQueries;
    VkBool32 transformFeedbackStreamsLinesTriangles;
    VkBool32 transformFeedbackRasterizationStreamSelect;
    VkBool32 transformFeedbackDraw;

    safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT(const VkPhysicalDeviceTransformFeedbackPropertiesEXT* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT(const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT();
    ~safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT();
    void initialize(const VkPhysicalDeviceTransformFeedbackPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceTransformFeedbackPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceTransformFeedbackPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceTransformFeedbackPropertiesEXT*>(this);
    }
    VkPhysicalDeviceTransformFeedbackPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceTransformFeedbackPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineRasterizationStateStreamCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineRasterizationStateStreamCreateFlagsEXT flags;
    uint32_t rasterizationStream;

    safe_VkPipelineRasterizationStateStreamCreateInfoEXT(const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineRasterizationStateStreamCreateInfoEXT(const safe_VkPipelineRasterizationStateStreamCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationStateStreamCreateInfoEXT& operator=(
        const safe_VkPipelineRasterizationStateStreamCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationStateStreamCreateInfoEXT();
    ~safe_VkPipelineRasterizationStateStreamCreateInfoEXT();
    void initialize(const VkPipelineRasterizationStateStreamCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationStateStreamCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationStateStreamCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineRasterizationStateStreamCreateInfoEXT*>(this);
    }
    VkPipelineRasterizationStateStreamCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationStateStreamCreateInfoEXT const*>(this);
    }
};
struct safe_VkCuModuleCreateInfoNVX {
    VkStructureType sType;
    const void* pNext{};
    size_t dataSize;
    const void* pData{};

    safe_VkCuModuleCreateInfoNVX(const VkCuModuleCreateInfoNVX* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCuModuleCreateInfoNVX(const safe_VkCuModuleCreateInfoNVX& copy_src);
    safe_VkCuModuleCreateInfoNVX& operator=(const safe_VkCuModuleCreateInfoNVX& copy_src);
    safe_VkCuModuleCreateInfoNVX();
    ~safe_VkCuModuleCreateInfoNVX();
    void initialize(const VkCuModuleCreateInfoNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCuModuleCreateInfoNVX* copy_src, PNextCopyState* copy_state = {});
    VkCuModuleCreateInfoNVX* ptr() { return reinterpret_cast<VkCuModuleCreateInfoNVX*>(this); }
    VkCuModuleCreateInfoNVX const* ptr() const { return reinterpret_cast<VkCuModuleCreateInfoNVX const*>(this); }
};
struct safe_VkCuFunctionCreateInfoNVX {
    VkStructureType sType;
    const void* pNext{};
    VkCuModuleNVX module;
    const char* pName{};

    safe_VkCuFunctionCreateInfoNVX(const VkCuFunctionCreateInfoNVX* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkCuFunctionCreateInfoNVX(const safe_VkCuFunctionCreateInfoNVX& copy_src);
    safe_VkCuFunctionCreateInfoNVX& operator=(const safe_VkCuFunctionCreateInfoNVX& copy_src);
    safe_VkCuFunctionCreateInfoNVX();
    ~safe_VkCuFunctionCreateInfoNVX();
    void initialize(const VkCuFunctionCreateInfoNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCuFunctionCreateInfoNVX* copy_src, PNextCopyState* copy_state = {});
    VkCuFunctionCreateInfoNVX* ptr() { return reinterpret_cast<VkCuFunctionCreateInfoNVX*>(this); }
    VkCuFunctionCreateInfoNVX const* ptr() const { return reinterpret_cast<VkCuFunctionCreateInfoNVX const*>(this); }
};
struct safe_VkCuLaunchInfoNVX {
    VkStructureType sType;
    const void* pNext{};
    VkCuFunctionNVX function;
    uint32_t gridDimX;
    uint32_t gridDimY;
    uint32_t gridDimZ;
    uint32_t blockDimX;
    uint32_t blockDimY;
    uint32_t blockDimZ;
    uint32_t sharedMemBytes;
    size_t paramCount;
    const void* const* pParams{};
    size_t extraCount;
    const void* const* pExtras{};

    safe_VkCuLaunchInfoNVX(const VkCuLaunchInfoNVX* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCuLaunchInfoNVX(const safe_VkCuLaunchInfoNVX& copy_src);
    safe_VkCuLaunchInfoNVX& operator=(const safe_VkCuLaunchInfoNVX& copy_src);
    safe_VkCuLaunchInfoNVX();
    ~safe_VkCuLaunchInfoNVX();
    void initialize(const VkCuLaunchInfoNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCuLaunchInfoNVX* copy_src, PNextCopyState* copy_state = {});
    VkCuLaunchInfoNVX* ptr() { return reinterpret_cast<VkCuLaunchInfoNVX*>(this); }
    VkCuLaunchInfoNVX const* ptr() const { return reinterpret_cast<VkCuLaunchInfoNVX const*>(this); }
};
struct safe_VkImageViewHandleInfoNVX {
    VkStructureType sType;
    const void* pNext{};
    VkImageView imageView;
    VkDescriptorType descriptorType;
    VkSampler sampler;

    safe_VkImageViewHandleInfoNVX(const VkImageViewHandleInfoNVX* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkImageViewHandleInfoNVX(const safe_VkImageViewHandleInfoNVX& copy_src);
    safe_VkImageViewHandleInfoNVX& operator=(const safe_VkImageViewHandleInfoNVX& copy_src);
    safe_VkImageViewHandleInfoNVX();
    ~safe_VkImageViewHandleInfoNVX();
    void initialize(const VkImageViewHandleInfoNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewHandleInfoNVX* copy_src, PNextCopyState* copy_state = {});
    VkImageViewHandleInfoNVX* ptr() { return reinterpret_cast<VkImageViewHandleInfoNVX*>(this); }
    VkImageViewHandleInfoNVX const* ptr() const { return reinterpret_cast<VkImageViewHandleInfoNVX const*>(this); }
};
struct safe_VkImageViewAddressPropertiesNVX {
    VkStructureType sType;
    void* pNext{};
    VkDeviceAddress deviceAddress;
    VkDeviceSize size;

    safe_VkImageViewAddressPropertiesNVX(const VkImageViewAddressPropertiesNVX* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkImageViewAddressPropertiesNVX(const safe_VkImageViewAddressPropertiesNVX& copy_src);
    safe_VkImageViewAddressPropertiesNVX& operator=(const safe_VkImageViewAddressPropertiesNVX& copy_src);
    safe_VkImageViewAddressPropertiesNVX();
    ~safe_VkImageViewAddressPropertiesNVX();
    void initialize(const VkImageViewAddressPropertiesNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewAddressPropertiesNVX* copy_src, PNextCopyState* copy_state = {});
    VkImageViewAddressPropertiesNVX* ptr() { return reinterpret_cast<VkImageViewAddressPropertiesNVX*>(this); }
    VkImageViewAddressPropertiesNVX const* ptr() const { return reinterpret_cast<VkImageViewAddressPropertiesNVX const*>(this); }
};
struct safe_VkTextureLODGatherFormatPropertiesAMD {
    VkStructureType sType;
    void* pNext{};
    VkBool32 supportsTextureGatherLODBiasAMD;

    safe_VkTextureLODGatherFormatPropertiesAMD(const VkTextureLODGatherFormatPropertiesAMD* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkTextureLODGatherFormatPropertiesAMD(const safe_VkTextureLODGatherFormatPropertiesAMD& copy_src);
    safe_VkTextureLODGatherFormatPropertiesAMD& operator=(const safe_VkTextureLODGatherFormatPropertiesAMD& copy_src);
    safe_VkTextureLODGatherFormatPropertiesAMD();
    ~safe_VkTextureLODGatherFormatPropertiesAMD();
    void initialize(const VkTextureLODGatherFormatPropertiesAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkTextureLODGatherFormatPropertiesAMD* copy_src, PNextCopyState* copy_state = {});
    VkTextureLODGatherFormatPropertiesAMD* ptr() { return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD*>(this); }
    VkTextureLODGatherFormatPropertiesAMD const* ptr() const {
        return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_GGP
struct safe_VkStreamDescriptorSurfaceCreateInfoGGP {
    VkStructureType sType;
    const void* pNext{};
    VkStreamDescriptorSurfaceCreateFlagsGGP flags;
    GgpStreamDescriptor streamDescriptor;

    safe_VkStreamDescriptorSurfaceCreateInfoGGP(const VkStreamDescriptorSurfaceCreateInfoGGP* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkStreamDescriptorSurfaceCreateInfoGGP(const safe_VkStreamDescriptorSurfaceCreateInfoGGP& copy_src);
    safe_VkStreamDescriptorSurfaceCreateInfoGGP& operator=(const safe_VkStreamDescriptorSurfaceCreateInfoGGP& copy_src);
    safe_VkStreamDescriptorSurfaceCreateInfoGGP();
    ~safe_VkStreamDescriptorSurfaceCreateInfoGGP();
    void initialize(const VkStreamDescriptorSurfaceCreateInfoGGP* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkStreamDescriptorSurfaceCreateInfoGGP* copy_src, PNextCopyState* copy_state = {});
    VkStreamDescriptorSurfaceCreateInfoGGP* ptr() { return reinterpret_cast<VkStreamDescriptorSurfaceCreateInfoGGP*>(this); }
    VkStreamDescriptorSurfaceCreateInfoGGP const* ptr() const {
        return reinterpret_cast<VkStreamDescriptorSurfaceCreateInfoGGP const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_GGP
struct safe_VkExternalMemoryImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagsNV handleTypes;

    safe_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkExternalMemoryImageCreateInfoNV(const safe_VkExternalMemoryImageCreateInfoNV& copy_src);
    safe_VkExternalMemoryImageCreateInfoNV& operator=(const safe_VkExternalMemoryImageCreateInfoNV& copy_src);
    safe_VkExternalMemoryImageCreateInfoNV();
    ~safe_VkExternalMemoryImageCreateInfoNV();
    void initialize(const VkExternalMemoryImageCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalMemoryImageCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkExternalMemoryImageCreateInfoNV* ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV*>(this); }
    VkExternalMemoryImageCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkExternalMemoryImageCreateInfoNV const*>(this);
    }
};
struct safe_VkExportMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagsNV handleTypes;

    safe_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkExportMemoryAllocateInfoNV(const safe_VkExportMemoryAllocateInfoNV& copy_src);
    safe_VkExportMemoryAllocateInfoNV& operator=(const safe_VkExportMemoryAllocateInfoNV& copy_src);
    safe_VkExportMemoryAllocateInfoNV();
    ~safe_VkExportMemoryAllocateInfoNV();
    void initialize(const VkExportMemoryAllocateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMemoryAllocateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkExportMemoryAllocateInfoNV* ptr() { return reinterpret_cast<VkExportMemoryAllocateInfoNV*>(this); }
    VkExportMemoryAllocateInfoNV const* ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfoNV const*>(this); }
};
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagsNV handleType;
    HANDLE handle;

    safe_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkImportMemoryWin32HandleInfoNV(const safe_VkImportMemoryWin32HandleInfoNV& copy_src);
    safe_VkImportMemoryWin32HandleInfoNV& operator=(const safe_VkImportMemoryWin32HandleInfoNV& copy_src);
    safe_VkImportMemoryWin32HandleInfoNV();
    ~safe_VkImportMemoryWin32HandleInfoNV();
    void initialize(const VkImportMemoryWin32HandleInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryWin32HandleInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryWin32HandleInfoNV* ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV*>(this); }
    VkImportMemoryWin32HandleInfoNV const* ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV const*>(this); }
};
struct safe_VkExportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext{};
    const SECURITY_ATTRIBUTES* pAttributes{};
    DWORD dwAccess;

    safe_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkExportMemoryWin32HandleInfoNV(const safe_VkExportMemoryWin32HandleInfoNV& copy_src);
    safe_VkExportMemoryWin32HandleInfoNV& operator=(const safe_VkExportMemoryWin32HandleInfoNV& copy_src);
    safe_VkExportMemoryWin32HandleInfoNV();
    ~safe_VkExportMemoryWin32HandleInfoNV();
    void initialize(const VkExportMemoryWin32HandleInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMemoryWin32HandleInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkExportMemoryWin32HandleInfoNV* ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV*>(this); }
    VkExportMemoryWin32HandleInfoNV const* ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV const*>(this); }
};
struct safe_VkWin32KeyedMutexAcquireReleaseInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs{};
    const uint64_t* pAcquireKeys{};
    const uint32_t* pAcquireTimeoutMilliseconds{};
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs{};
    const uint64_t* pReleaseKeys{};

    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& copy_src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV& operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& copy_src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkWin32KeyedMutexAcquireReleaseInfoNV* ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV*>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoNV const* ptr() const {
        return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_WIN32_KHR
struct safe_VkValidationFlagsEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t disabledValidationCheckCount;
    const VkValidationCheckEXT* pDisabledValidationChecks{};

    safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& copy_src);
    safe_VkValidationFlagsEXT& operator=(const safe_VkValidationFlagsEXT& copy_src);
    safe_VkValidationFlagsEXT();
    ~safe_VkValidationFlagsEXT();
    void initialize(const VkValidationFlagsEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkValidationFlagsEXT* copy_src, PNextCopyState* copy_state = {});
    VkValidationFlagsEXT* ptr() { return reinterpret_cast<VkValidationFlagsEXT*>(this); }
    VkValidationFlagsEXT const* ptr() const { return reinterpret_cast<VkValidationFlagsEXT const*>(this); }
};
#ifdef VK_USE_PLATFORM_VI_NN
struct safe_VkViSurfaceCreateInfoNN {
    VkStructureType sType;
    const void* pNext{};
    VkViSurfaceCreateFlagsNN flags;
    void* window{};

    safe_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkViSurfaceCreateInfoNN(const safe_VkViSurfaceCreateInfoNN& copy_src);
    safe_VkViSurfaceCreateInfoNN& operator=(const safe_VkViSurfaceCreateInfoNN& copy_src);
    safe_VkViSurfaceCreateInfoNN();
    ~safe_VkViSurfaceCreateInfoNN();
    void initialize(const VkViSurfaceCreateInfoNN* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkViSurfaceCreateInfoNN* copy_src, PNextCopyState* copy_state = {});
    VkViSurfaceCreateInfoNN* ptr() { return reinterpret_cast<VkViSurfaceCreateInfoNN*>(this); }
    VkViSurfaceCreateInfoNN const* ptr() const { return reinterpret_cast<VkViSurfaceCreateInfoNN const*>(this); }
};
#endif  // VK_USE_PLATFORM_VI_NN
struct safe_VkImageViewASTCDecodeModeEXT {
    VkStructureType sType;
    const void* pNext{};
    VkFormat decodeMode;

    safe_VkImageViewASTCDecodeModeEXT(const VkImageViewASTCDecodeModeEXT* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkImageViewASTCDecodeModeEXT(const safe_VkImageViewASTCDecodeModeEXT& copy_src);
    safe_VkImageViewASTCDecodeModeEXT& operator=(const safe_VkImageViewASTCDecodeModeEXT& copy_src);
    safe_VkImageViewASTCDecodeModeEXT();
    ~safe_VkImageViewASTCDecodeModeEXT();
    void initialize(const VkImageViewASTCDecodeModeEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewASTCDecodeModeEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageViewASTCDecodeModeEXT* ptr() { return reinterpret_cast<VkImageViewASTCDecodeModeEXT*>(this); }
    VkImageViewASTCDecodeModeEXT const* ptr() const { return reinterpret_cast<VkImageViewASTCDecodeModeEXT const*>(this); }
};
struct safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessStorageBuffers;
    VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessUniformBuffers;
    VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessVertexInputs;
    VkPipelineRobustnessImageBehaviorEXT defaultRobustnessImages;

    safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT(const VkPhysicalDevicePipelineRobustnessPropertiesEXT* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT(const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& copy_src);
    safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& operator=(
        const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT& copy_src);
    safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT();
    ~safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT();
    void initialize(const VkPhysicalDevicePipelineRobustnessPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePipelineRobustnessPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePipelineRobustnessPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDevicePipelineRobustnessPropertiesEXT*>(this);
    }
    VkPhysicalDevicePipelineRobustnessPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePipelineRobustnessPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineRobustnessCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineRobustnessBufferBehaviorEXT storageBuffers;
    VkPipelineRobustnessBufferBehaviorEXT uniformBuffers;
    VkPipelineRobustnessBufferBehaviorEXT vertexInputs;
    VkPipelineRobustnessImageBehaviorEXT images;

    safe_VkPipelineRobustnessCreateInfoEXT(const VkPipelineRobustnessCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPipelineRobustnessCreateInfoEXT(const safe_VkPipelineRobustnessCreateInfoEXT& copy_src);
    safe_VkPipelineRobustnessCreateInfoEXT& operator=(const safe_VkPipelineRobustnessCreateInfoEXT& copy_src);
    safe_VkPipelineRobustnessCreateInfoEXT();
    ~safe_VkPipelineRobustnessCreateInfoEXT();
    void initialize(const VkPipelineRobustnessCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRobustnessCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRobustnessCreateInfoEXT* ptr() { return reinterpret_cast<VkPipelineRobustnessCreateInfoEXT*>(this); }
    VkPipelineRobustnessCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineRobustnessCreateInfoEXT const*>(this);
    }
};
struct safe_VkConditionalRenderingBeginInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer buffer;
    VkDeviceSize offset;
    VkConditionalRenderingFlagsEXT flags;

    safe_VkConditionalRenderingBeginInfoEXT(const VkConditionalRenderingBeginInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkConditionalRenderingBeginInfoEXT(const safe_VkConditionalRenderingBeginInfoEXT& copy_src);
    safe_VkConditionalRenderingBeginInfoEXT& operator=(const safe_VkConditionalRenderingBeginInfoEXT& copy_src);
    safe_VkConditionalRenderingBeginInfoEXT();
    ~safe_VkConditionalRenderingBeginInfoEXT();
    void initialize(const VkConditionalRenderingBeginInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkConditionalRenderingBeginInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkConditionalRenderingBeginInfoEXT* ptr() { return reinterpret_cast<VkConditionalRenderingBeginInfoEXT*>(this); }
    VkConditionalRenderingBeginInfoEXT const* ptr() const {
        return reinterpret_cast<VkConditionalRenderingBeginInfoEXT const*>(this);
    }
};
struct safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 conditionalRenderingEnable;

    safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT(
        const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT(
        const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& copy_src);
    safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& operator=(
        const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT& copy_src);
    safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT();
    ~safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT();
    void initialize(const VkCommandBufferInheritanceConditionalRenderingInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferInheritanceConditionalRenderingInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferInheritanceConditionalRenderingInfoEXT* ptr() {
        return reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT*>(this);
    }
    VkCommandBufferInheritanceConditionalRenderingInfoEXT const* ptr() const {
        return reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT const*>(this);
    }
};
struct safe_VkPipelineViewportWScalingStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 viewportWScalingEnable;
    uint32_t viewportCount;
    const VkViewportWScalingNV* pViewportWScalings{};

    safe_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportWScalingStateCreateInfoNV(const safe_VkPipelineViewportWScalingStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportWScalingStateCreateInfoNV& operator=(const safe_VkPipelineViewportWScalingStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportWScalingStateCreateInfoNV();
    ~safe_VkPipelineViewportWScalingStateCreateInfoNV();
    void initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportWScalingStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportWScalingStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV*>(this);
    }
    VkPipelineViewportWScalingStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV const*>(this);
    }
};
struct safe_VkSurfaceCapabilities2EXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t minImageCount;
    uint32_t maxImageCount;
    VkExtent2D currentExtent;
    VkExtent2D minImageExtent;
    VkExtent2D maxImageExtent;
    uint32_t maxImageArrayLayers;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkSurfaceTransformFlagBitsKHR currentTransform;
    VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
    VkImageUsageFlags supportedUsageFlags;
    VkSurfaceCounterFlagsEXT supportedSurfaceCounters;

    safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& copy_src);
    safe_VkSurfaceCapabilities2EXT& operator=(const safe_VkSurfaceCapabilities2EXT& copy_src);
    safe_VkSurfaceCapabilities2EXT();
    ~safe_VkSurfaceCapabilities2EXT();
    void initialize(const VkSurfaceCapabilities2EXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceCapabilities2EXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceCapabilities2EXT* ptr() { return reinterpret_cast<VkSurfaceCapabilities2EXT*>(this); }
    VkSurfaceCapabilities2EXT const* ptr() const { return reinterpret_cast<VkSurfaceCapabilities2EXT const*>(this); }
};
struct safe_VkDisplayPowerInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDisplayPowerStateEXT powerState;

    safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& copy_src);
    safe_VkDisplayPowerInfoEXT& operator=(const safe_VkDisplayPowerInfoEXT& copy_src);
    safe_VkDisplayPowerInfoEXT();
    ~safe_VkDisplayPowerInfoEXT();
    void initialize(const VkDisplayPowerInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayPowerInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDisplayPowerInfoEXT* ptr() { return reinterpret_cast<VkDisplayPowerInfoEXT*>(this); }
    VkDisplayPowerInfoEXT const* ptr() const { return reinterpret_cast<VkDisplayPowerInfoEXT const*>(this); }
};
struct safe_VkDeviceEventInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceEventTypeEXT deviceEvent;

    safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& copy_src);
    safe_VkDeviceEventInfoEXT& operator=(const safe_VkDeviceEventInfoEXT& copy_src);
    safe_VkDeviceEventInfoEXT();
    ~safe_VkDeviceEventInfoEXT();
    void initialize(const VkDeviceEventInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceEventInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceEventInfoEXT* ptr() { return reinterpret_cast<VkDeviceEventInfoEXT*>(this); }
    VkDeviceEventInfoEXT const* ptr() const { return reinterpret_cast<VkDeviceEventInfoEXT const*>(this); }
};
struct safe_VkDisplayEventInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDisplayEventTypeEXT displayEvent;

    safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& copy_src);
    safe_VkDisplayEventInfoEXT& operator=(const safe_VkDisplayEventInfoEXT& copy_src);
    safe_VkDisplayEventInfoEXT();
    ~safe_VkDisplayEventInfoEXT();
    void initialize(const VkDisplayEventInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayEventInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDisplayEventInfoEXT* ptr() { return reinterpret_cast<VkDisplayEventInfoEXT*>(this); }
    VkDisplayEventInfoEXT const* ptr() const { return reinterpret_cast<VkDisplayEventInfoEXT const*>(this); }
};
struct safe_VkSwapchainCounterCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkSurfaceCounterFlagsEXT surfaceCounters;

    safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& copy_src);
    safe_VkSwapchainCounterCreateInfoEXT& operator=(const safe_VkSwapchainCounterCreateInfoEXT& copy_src);
    safe_VkSwapchainCounterCreateInfoEXT();
    ~safe_VkSwapchainCounterCreateInfoEXT();
    void initialize(const VkSwapchainCounterCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainCounterCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainCounterCreateInfoEXT* ptr() { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT*>(this); }
    VkSwapchainCounterCreateInfoEXT const* ptr() const { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT const*>(this); }
};
struct safe_VkPresentTimesInfoGOOGLE {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    const VkPresentTimeGOOGLE* pTimes{};

    safe_VkPresentTimesInfoGOOGLE(const VkPresentTimesInfoGOOGLE* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkPresentTimesInfoGOOGLE(const safe_VkPresentTimesInfoGOOGLE& copy_src);
    safe_VkPresentTimesInfoGOOGLE& operator=(const safe_VkPresentTimesInfoGOOGLE& copy_src);
    safe_VkPresentTimesInfoGOOGLE();
    ~safe_VkPresentTimesInfoGOOGLE();
    void initialize(const VkPresentTimesInfoGOOGLE* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentTimesInfoGOOGLE* copy_src, PNextCopyState* copy_state = {});
    VkPresentTimesInfoGOOGLE* ptr() { return reinterpret_cast<VkPresentTimesInfoGOOGLE*>(this); }
    VkPresentTimesInfoGOOGLE const* ptr() const { return reinterpret_cast<VkPresentTimesInfoGOOGLE const*>(this); }
};
struct safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
    VkStructureType sType;
    void* pNext{};
    VkBool32 perViewPositionAllComponents;

    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(
        const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(
        const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& copy_src);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& operator=(
        const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& copy_src);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    ~safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    void initialize(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* ptr() {
        return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this);
    }
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const*>(this);
    }
};
struct safe_VkPipelineViewportSwizzleStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineViewportSwizzleStateCreateFlagsNV flags;
    uint32_t viewportCount;
    const VkViewportSwizzleNV* pViewportSwizzles{};

    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV& operator=(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    ~safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    void initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportSwizzleStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportSwizzleStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV*>(this);
    }
    VkPipelineViewportSwizzleStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxDiscardRectangles;

    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& operator=(
        const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    ~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    void initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDiscardRectanglePropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this);
    }
    VkPhysicalDeviceDiscardRectanglePropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineDiscardRectangleStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
    VkDiscardRectangleModeEXT discardRectangleMode;
    uint32_t discardRectangleCount;
    const VkRect2D* pDiscardRectangles{};

    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& copy_src);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT& operator=(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& copy_src);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    ~safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    void initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineDiscardRectangleStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT*>(this);
    }
    VkPipelineDiscardRectangleStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    float primitiveOverestimationSize;
    float maxExtraPrimitiveOverestimationSize;
    float extraPrimitiveOverestimationSizeGranularity;
    VkBool32 primitiveUnderestimation;
    VkBool32 conservativePointAndLineRasterization;
    VkBool32 degenerateTrianglesRasterized;
    VkBool32 degenerateLinesRasterized;
    VkBool32 fullyCoveredFragmentShaderInputVariable;
    VkBool32 conservativeRasterizationPostDepthCoverage;

    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(
        const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(
        const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT();
    ~safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT();
    void initialize(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(this);
    }
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineRasterizationConservativeStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineRasterizationConservativeStateCreateFlagsEXT flags;
    VkConservativeRasterizationModeEXT conservativeRasterizationMode;
    float extraPrimitiveOverestimationSize;

    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(
        const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(
        const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& operator=(
        const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT();
    ~safe_VkPipelineRasterizationConservativeStateCreateInfoEXT();
    void initialize(const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationConservativeStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT*>(this);
    }
    VkPipelineRasterizationConservativeStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT const*>(this);
    }
};
struct safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags;
    VkBool32 depthClipEnable;

    safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT(const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT(
        const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& operator=(
        const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT();
    ~safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT();
    void initialize(const VkPipelineRasterizationDepthClipStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationDepthClipStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationDepthClipStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineRasterizationDepthClipStateCreateInfoEXT*>(this);
    }
    VkPipelineRasterizationDepthClipStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationDepthClipStateCreateInfoEXT const*>(this);
    }
};
struct safe_VkHdrMetadataEXT {
    VkStructureType sType;
    const void* pNext{};
    VkXYColorEXT displayPrimaryRed;
    VkXYColorEXT displayPrimaryGreen;
    VkXYColorEXT displayPrimaryBlue;
    VkXYColorEXT whitePoint;
    float maxLuminance;
    float minLuminance;
    float maxContentLightLevel;
    float maxFrameAverageLightLevel;

    safe_VkHdrMetadataEXT(const VkHdrMetadataEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkHdrMetadataEXT(const safe_VkHdrMetadataEXT& copy_src);
    safe_VkHdrMetadataEXT& operator=(const safe_VkHdrMetadataEXT& copy_src);
    safe_VkHdrMetadataEXT();
    ~safe_VkHdrMetadataEXT();
    void initialize(const VkHdrMetadataEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkHdrMetadataEXT* copy_src, PNextCopyState* copy_state = {});
    VkHdrMetadataEXT* ptr() { return reinterpret_cast<VkHdrMetadataEXT*>(this); }
    VkHdrMetadataEXT const* ptr() const { return reinterpret_cast<VkHdrMetadataEXT const*>(this); }
};
struct safe_VkDebugUtilsLabelEXT {
    VkStructureType sType;
    const void* pNext{};
    const char* pLabelName{};
    float color[4];

    safe_VkDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDebugUtilsLabelEXT(const safe_VkDebugUtilsLabelEXT& copy_src);
    safe_VkDebugUtilsLabelEXT& operator=(const safe_VkDebugUtilsLabelEXT& copy_src);
    safe_VkDebugUtilsLabelEXT();
    ~safe_VkDebugUtilsLabelEXT();
    void initialize(const VkDebugUtilsLabelEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugUtilsLabelEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugUtilsLabelEXT* ptr() { return reinterpret_cast<VkDebugUtilsLabelEXT*>(this); }
    VkDebugUtilsLabelEXT const* ptr() const { return reinterpret_cast<VkDebugUtilsLabelEXT const*>(this); }
};
struct safe_VkDebugUtilsObjectNameInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkObjectType objectType;
    uint64_t objectHandle;
    const char* pObjectName{};

    safe_VkDebugUtilsObjectNameInfoEXT(const VkDebugUtilsObjectNameInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkDebugUtilsObjectNameInfoEXT(const safe_VkDebugUtilsObjectNameInfoEXT& copy_src);
    safe_VkDebugUtilsObjectNameInfoEXT& operator=(const safe_VkDebugUtilsObjectNameInfoEXT& copy_src);
    safe_VkDebugUtilsObjectNameInfoEXT();
    ~safe_VkDebugUtilsObjectNameInfoEXT();
    void initialize(const VkDebugUtilsObjectNameInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugUtilsObjectNameInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugUtilsObjectNameInfoEXT* ptr() { return reinterpret_cast<VkDebugUtilsObjectNameInfoEXT*>(this); }
    VkDebugUtilsObjectNameInfoEXT const* ptr() const { return reinterpret_cast<VkDebugUtilsObjectNameInfoEXT const*>(this); }
};
struct safe_VkDebugUtilsMessengerCallbackDataEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDebugUtilsMessengerCallbackDataFlagsEXT flags;
    const char* pMessageIdName{};
    int32_t messageIdNumber;
    const char* pMessage{};
    uint32_t queueLabelCount;
    safe_VkDebugUtilsLabelEXT* pQueueLabels{};
    uint32_t cmdBufLabelCount;
    safe_VkDebugUtilsLabelEXT* pCmdBufLabels{};
    uint32_t objectCount;
    safe_VkDebugUtilsObjectNameInfoEXT* pObjects{};

    safe_VkDebugUtilsMessengerCallbackDataEXT(const VkDebugUtilsMessengerCallbackDataEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDebugUtilsMessengerCallbackDataEXT(const safe_VkDebugUtilsMessengerCallbackDataEXT& copy_src);
    safe_VkDebugUtilsMessengerCallbackDataEXT& operator=(const safe_VkDebugUtilsMessengerCallbackDataEXT& copy_src);
    safe_VkDebugUtilsMessengerCallbackDataEXT();
    ~safe_VkDebugUtilsMessengerCallbackDataEXT();
    void initialize(const VkDebugUtilsMessengerCallbackDataEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugUtilsMessengerCallbackDataEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugUtilsMessengerCallbackDataEXT* ptr() { return reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT*>(this); }
    VkDebugUtilsMessengerCallbackDataEXT const* ptr() const {
        return reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT const*>(this);
    }
};
struct safe_VkDebugUtilsMessengerCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDebugUtilsMessengerCreateFlagsEXT flags;
    VkDebugUtilsMessageSeverityFlagsEXT messageSeverity;
    VkDebugUtilsMessageTypeFlagsEXT messageType;
    PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback;
    void* pUserData{};

    safe_VkDebugUtilsMessengerCreateInfoEXT(const VkDebugUtilsMessengerCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkDebugUtilsMessengerCreateInfoEXT(const safe_VkDebugUtilsMessengerCreateInfoEXT& copy_src);
    safe_VkDebugUtilsMessengerCreateInfoEXT& operator=(const safe_VkDebugUtilsMessengerCreateInfoEXT& copy_src);
    safe_VkDebugUtilsMessengerCreateInfoEXT();
    ~safe_VkDebugUtilsMessengerCreateInfoEXT();
    void initialize(const VkDebugUtilsMessengerCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugUtilsMessengerCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugUtilsMessengerCreateInfoEXT* ptr() { return reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT*>(this); }
    VkDebugUtilsMessengerCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT const*>(this);
    }
};
struct safe_VkDebugUtilsObjectTagInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkObjectType objectType;
    uint64_t objectHandle;
    uint64_t tagName;
    size_t tagSize;
    const void* pTag{};

    safe_VkDebugUtilsObjectTagInfoEXT(const VkDebugUtilsObjectTagInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkDebugUtilsObjectTagInfoEXT(const safe_VkDebugUtilsObjectTagInfoEXT& copy_src);
    safe_VkDebugUtilsObjectTagInfoEXT& operator=(const safe_VkDebugUtilsObjectTagInfoEXT& copy_src);
    safe_VkDebugUtilsObjectTagInfoEXT();
    ~safe_VkDebugUtilsObjectTagInfoEXT();
    void initialize(const VkDebugUtilsObjectTagInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDebugUtilsObjectTagInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDebugUtilsObjectTagInfoEXT* ptr() { return reinterpret_cast<VkDebugUtilsObjectTagInfoEXT*>(this); }
    VkDebugUtilsObjectTagInfoEXT const* ptr() const { return reinterpret_cast<VkDebugUtilsObjectTagInfoEXT const*>(this); }
};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct safe_VkAndroidHardwareBufferUsageANDROID {
    VkStructureType sType;
    void* pNext{};
    uint64_t androidHardwareBufferUsage;

    safe_VkAndroidHardwareBufferUsageANDROID(const VkAndroidHardwareBufferUsageANDROID* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkAndroidHardwareBufferUsageANDROID(const safe_VkAndroidHardwareBufferUsageANDROID& copy_src);
    safe_VkAndroidHardwareBufferUsageANDROID& operator=(const safe_VkAndroidHardwareBufferUsageANDROID& copy_src);
    safe_VkAndroidHardwareBufferUsageANDROID();
    ~safe_VkAndroidHardwareBufferUsageANDROID();
    void initialize(const VkAndroidHardwareBufferUsageANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAndroidHardwareBufferUsageANDROID* copy_src, PNextCopyState* copy_state = {});
    VkAndroidHardwareBufferUsageANDROID* ptr() { return reinterpret_cast<VkAndroidHardwareBufferUsageANDROID*>(this); }
    VkAndroidHardwareBufferUsageANDROID const* ptr() const {
        return reinterpret_cast<VkAndroidHardwareBufferUsageANDROID const*>(this);
    }
};
struct safe_VkAndroidHardwareBufferPropertiesANDROID {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize allocationSize;
    uint32_t memoryTypeBits;

    safe_VkAndroidHardwareBufferPropertiesANDROID(const VkAndroidHardwareBufferPropertiesANDROID* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAndroidHardwareBufferPropertiesANDROID(const safe_VkAndroidHardwareBufferPropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferPropertiesANDROID& operator=(const safe_VkAndroidHardwareBufferPropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferPropertiesANDROID();
    ~safe_VkAndroidHardwareBufferPropertiesANDROID();
    void initialize(const VkAndroidHardwareBufferPropertiesANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAndroidHardwareBufferPropertiesANDROID* copy_src, PNextCopyState* copy_state = {});
    VkAndroidHardwareBufferPropertiesANDROID* ptr() { return reinterpret_cast<VkAndroidHardwareBufferPropertiesANDROID*>(this); }
    VkAndroidHardwareBufferPropertiesANDROID const* ptr() const {
        return reinterpret_cast<VkAndroidHardwareBufferPropertiesANDROID const*>(this);
    }
};
struct safe_VkAndroidHardwareBufferFormatPropertiesANDROID {
    VkStructureType sType;
    void* pNext{};
    VkFormat format;
    uint64_t externalFormat;
    VkFormatFeatureFlags formatFeatures;
    VkComponentMapping samplerYcbcrConversionComponents;
    VkSamplerYcbcrModelConversion suggestedYcbcrModel;
    VkSamplerYcbcrRange suggestedYcbcrRange;
    VkChromaLocation suggestedXChromaOffset;
    VkChromaLocation suggestedYChromaOffset;

    safe_VkAndroidHardwareBufferFormatPropertiesANDROID(const VkAndroidHardwareBufferFormatPropertiesANDROID* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAndroidHardwareBufferFormatPropertiesANDROID(const safe_VkAndroidHardwareBufferFormatPropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatPropertiesANDROID& operator=(
        const safe_VkAndroidHardwareBufferFormatPropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatPropertiesANDROID();
    ~safe_VkAndroidHardwareBufferFormatPropertiesANDROID();
    void initialize(const VkAndroidHardwareBufferFormatPropertiesANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAndroidHardwareBufferFormatPropertiesANDROID* copy_src, PNextCopyState* copy_state = {});
    VkAndroidHardwareBufferFormatPropertiesANDROID* ptr() {
        return reinterpret_cast<VkAndroidHardwareBufferFormatPropertiesANDROID*>(this);
    }
    VkAndroidHardwareBufferFormatPropertiesANDROID const* ptr() const {
        return reinterpret_cast<VkAndroidHardwareBufferFormatPropertiesANDROID const*>(this);
    }
};
struct safe_VkImportAndroidHardwareBufferInfoANDROID {
    VkStructureType sType;
    const void* pNext{};
    struct AHardwareBuffer* buffer{};

    safe_VkImportAndroidHardwareBufferInfoANDROID(const VkImportAndroidHardwareBufferInfoANDROID* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportAndroidHardwareBufferInfoANDROID(const safe_VkImportAndroidHardwareBufferInfoANDROID& copy_src);
    safe_VkImportAndroidHardwareBufferInfoANDROID& operator=(const safe_VkImportAndroidHardwareBufferInfoANDROID& copy_src);
    safe_VkImportAndroidHardwareBufferInfoANDROID();
    ~safe_VkImportAndroidHardwareBufferInfoANDROID();
    void initialize(const VkImportAndroidHardwareBufferInfoANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportAndroidHardwareBufferInfoANDROID* copy_src, PNextCopyState* copy_state = {});
    VkImportAndroidHardwareBufferInfoANDROID* ptr() { return reinterpret_cast<VkImportAndroidHardwareBufferInfoANDROID*>(this); }
    VkImportAndroidHardwareBufferInfoANDROID const* ptr() const {
        return reinterpret_cast<VkImportAndroidHardwareBufferInfoANDROID const*>(this);
    }
};
struct safe_VkMemoryGetAndroidHardwareBufferInfoANDROID {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;

    safe_VkMemoryGetAndroidHardwareBufferInfoANDROID(const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryGetAndroidHardwareBufferInfoANDROID(const safe_VkMemoryGetAndroidHardwareBufferInfoANDROID& copy_src);
    safe_VkMemoryGetAndroidHardwareBufferInfoANDROID& operator=(const safe_VkMemoryGetAndroidHardwareBufferInfoANDROID& copy_src);
    safe_VkMemoryGetAndroidHardwareBufferInfoANDROID();
    ~safe_VkMemoryGetAndroidHardwareBufferInfoANDROID();
    void initialize(const VkMemoryGetAndroidHardwareBufferInfoANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryGetAndroidHardwareBufferInfoANDROID* copy_src, PNextCopyState* copy_state = {});
    VkMemoryGetAndroidHardwareBufferInfoANDROID* ptr() {
        return reinterpret_cast<VkMemoryGetAndroidHardwareBufferInfoANDROID*>(this);
    }
    VkMemoryGetAndroidHardwareBufferInfoANDROID const* ptr() const {
        return reinterpret_cast<VkMemoryGetAndroidHardwareBufferInfoANDROID const*>(this);
    }
};
struct safe_VkExternalFormatANDROID {
    VkStructureType sType;
    void* pNext{};
    uint64_t externalFormat;

    safe_VkExternalFormatANDROID(const VkExternalFormatANDROID* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExternalFormatANDROID(const safe_VkExternalFormatANDROID& copy_src);
    safe_VkExternalFormatANDROID& operator=(const safe_VkExternalFormatANDROID& copy_src);
    safe_VkExternalFormatANDROID();
    ~safe_VkExternalFormatANDROID();
    void initialize(const VkExternalFormatANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalFormatANDROID* copy_src, PNextCopyState* copy_state = {});
    VkExternalFormatANDROID* ptr() { return reinterpret_cast<VkExternalFormatANDROID*>(this); }
    VkExternalFormatANDROID const* ptr() const { return reinterpret_cast<VkExternalFormatANDROID const*>(this); }
};
struct safe_VkAndroidHardwareBufferFormatProperties2ANDROID {
    VkStructureType sType;
    void* pNext{};
    VkFormat format;
    uint64_t externalFormat;
    VkFormatFeatureFlags2 formatFeatures;
    VkComponentMapping samplerYcbcrConversionComponents;
    VkSamplerYcbcrModelConversion suggestedYcbcrModel;
    VkSamplerYcbcrRange suggestedYcbcrRange;
    VkChromaLocation suggestedXChromaOffset;
    VkChromaLocation suggestedYChromaOffset;

    safe_VkAndroidHardwareBufferFormatProperties2ANDROID(const VkAndroidHardwareBufferFormatProperties2ANDROID* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAndroidHardwareBufferFormatProperties2ANDROID(const safe_VkAndroidHardwareBufferFormatProperties2ANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatProperties2ANDROID& operator=(
        const safe_VkAndroidHardwareBufferFormatProperties2ANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatProperties2ANDROID();
    ~safe_VkAndroidHardwareBufferFormatProperties2ANDROID();
    void initialize(const VkAndroidHardwareBufferFormatProperties2ANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAndroidHardwareBufferFormatProperties2ANDROID* copy_src, PNextCopyState* copy_state = {});
    VkAndroidHardwareBufferFormatProperties2ANDROID* ptr() {
        return reinterpret_cast<VkAndroidHardwareBufferFormatProperties2ANDROID*>(this);
    }
    VkAndroidHardwareBufferFormatProperties2ANDROID const* ptr() const {
        return reinterpret_cast<VkAndroidHardwareBufferFormatProperties2ANDROID const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
struct safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxExecutionGraphDepth;
    uint32_t maxExecutionGraphShaderOutputNodes;
    uint32_t maxExecutionGraphShaderPayloadSize;
    uint32_t maxExecutionGraphShaderPayloadCount;
    uint32_t executionGraphDispatchAddressAlignment;

    safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX(const VkPhysicalDeviceShaderEnqueuePropertiesAMDX* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX(const safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX& copy_src);
    safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX& operator=(const safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX& copy_src);
    safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX();
    ~safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX();
    void initialize(const VkPhysicalDeviceShaderEnqueuePropertiesAMDX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderEnqueuePropertiesAMDX* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderEnqueuePropertiesAMDX* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderEnqueuePropertiesAMDX*>(this);
    }
    VkPhysicalDeviceShaderEnqueuePropertiesAMDX const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderEnqueuePropertiesAMDX const*>(this);
    }
};
struct safe_VkExecutionGraphPipelineScratchSizeAMDX {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize size;

    safe_VkExecutionGraphPipelineScratchSizeAMDX(const VkExecutionGraphPipelineScratchSizeAMDX* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExecutionGraphPipelineScratchSizeAMDX(const safe_VkExecutionGraphPipelineScratchSizeAMDX& copy_src);
    safe_VkExecutionGraphPipelineScratchSizeAMDX& operator=(const safe_VkExecutionGraphPipelineScratchSizeAMDX& copy_src);
    safe_VkExecutionGraphPipelineScratchSizeAMDX();
    ~safe_VkExecutionGraphPipelineScratchSizeAMDX();
    void initialize(const VkExecutionGraphPipelineScratchSizeAMDX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExecutionGraphPipelineScratchSizeAMDX* copy_src, PNextCopyState* copy_state = {});
    VkExecutionGraphPipelineScratchSizeAMDX* ptr() { return reinterpret_cast<VkExecutionGraphPipelineScratchSizeAMDX*>(this); }
    VkExecutionGraphPipelineScratchSizeAMDX const* ptr() const {
        return reinterpret_cast<VkExecutionGraphPipelineScratchSizeAMDX const*>(this);
    }
};
struct safe_VkExecutionGraphPipelineCreateInfoAMDX {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages{};
    safe_VkPipelineLibraryCreateInfoKHR* pLibraryInfo{};
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;

    safe_VkExecutionGraphPipelineCreateInfoAMDX(const VkExecutionGraphPipelineCreateInfoAMDX* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExecutionGraphPipelineCreateInfoAMDX(const safe_VkExecutionGraphPipelineCreateInfoAMDX& copy_src);
    safe_VkExecutionGraphPipelineCreateInfoAMDX& operator=(const safe_VkExecutionGraphPipelineCreateInfoAMDX& copy_src);
    safe_VkExecutionGraphPipelineCreateInfoAMDX();
    ~safe_VkExecutionGraphPipelineCreateInfoAMDX();
    void initialize(const VkExecutionGraphPipelineCreateInfoAMDX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExecutionGraphPipelineCreateInfoAMDX* copy_src, PNextCopyState* copy_state = {});
    VkExecutionGraphPipelineCreateInfoAMDX* ptr() { return reinterpret_cast<VkExecutionGraphPipelineCreateInfoAMDX*>(this); }
    VkExecutionGraphPipelineCreateInfoAMDX const* ptr() const {
        return reinterpret_cast<VkExecutionGraphPipelineCreateInfoAMDX const*>(this);
    }
};
union safe_VkDeviceOrHostAddressConstAMDX {
    VkDeviceAddress deviceAddress;
    const void* hostAddress{};

    safe_VkDeviceOrHostAddressConstAMDX(const VkDeviceOrHostAddressConstAMDX* in_struct, PNextCopyState* copy_state = {});
    safe_VkDeviceOrHostAddressConstAMDX(const safe_VkDeviceOrHostAddressConstAMDX& copy_src);
    safe_VkDeviceOrHostAddressConstAMDX& operator=(const safe_VkDeviceOrHostAddressConstAMDX& copy_src);
    safe_VkDeviceOrHostAddressConstAMDX();
    ~safe_VkDeviceOrHostAddressConstAMDX();
    void initialize(const VkDeviceOrHostAddressConstAMDX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceOrHostAddressConstAMDX* copy_src, PNextCopyState* copy_state = {});
    VkDeviceOrHostAddressConstAMDX* ptr() { return reinterpret_cast<VkDeviceOrHostAddressConstAMDX*>(this); }
    VkDeviceOrHostAddressConstAMDX const* ptr() const { return reinterpret_cast<VkDeviceOrHostAddressConstAMDX const*>(this); }
};
struct safe_VkPipelineShaderStageNodeCreateInfoAMDX {
    VkStructureType sType;
    const void* pNext{};
    const char* pName{};
    uint32_t index;

    safe_VkPipelineShaderStageNodeCreateInfoAMDX(const VkPipelineShaderStageNodeCreateInfoAMDX* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineShaderStageNodeCreateInfoAMDX(const safe_VkPipelineShaderStageNodeCreateInfoAMDX& copy_src);
    safe_VkPipelineShaderStageNodeCreateInfoAMDX& operator=(const safe_VkPipelineShaderStageNodeCreateInfoAMDX& copy_src);
    safe_VkPipelineShaderStageNodeCreateInfoAMDX();
    ~safe_VkPipelineShaderStageNodeCreateInfoAMDX();
    void initialize(const VkPipelineShaderStageNodeCreateInfoAMDX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineShaderStageNodeCreateInfoAMDX* copy_src, PNextCopyState* copy_state = {});
    VkPipelineShaderStageNodeCreateInfoAMDX* ptr() { return reinterpret_cast<VkPipelineShaderStageNodeCreateInfoAMDX*>(this); }
    VkPipelineShaderStageNodeCreateInfoAMDX const* ptr() const {
        return reinterpret_cast<VkPipelineShaderStageNodeCreateInfoAMDX const*>(this);
    }
};
#endif  // VK_ENABLE_BETA_EXTENSIONS
struct safe_VkSampleLocationsInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkSampleCountFlagBits sampleLocationsPerPixel;
    VkExtent2D sampleLocationGridSize;
    uint32_t sampleLocationsCount;
    const VkSampleLocationEXT* pSampleLocations{};

    safe_VkSampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkSampleLocationsInfoEXT(const safe_VkSampleLocationsInfoEXT& copy_src);
    safe_VkSampleLocationsInfoEXT& operator=(const safe_VkSampleLocationsInfoEXT& copy_src);
    safe_VkSampleLocationsInfoEXT();
    ~safe_VkSampleLocationsInfoEXT();
    void initialize(const VkSampleLocationsInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSampleLocationsInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSampleLocationsInfoEXT* ptr() { return reinterpret_cast<VkSampleLocationsInfoEXT*>(this); }
    VkSampleLocationsInfoEXT const* ptr() const { return reinterpret_cast<VkSampleLocationsInfoEXT const*>(this); }
};
struct safe_VkRenderPassSampleLocationsBeginInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t attachmentInitialSampleLocationsCount;
    const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations{};
    uint32_t postSubpassSampleLocationsCount;
    const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations{};

    safe_VkRenderPassSampleLocationsBeginInfoEXT(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassSampleLocationsBeginInfoEXT(const safe_VkRenderPassSampleLocationsBeginInfoEXT& copy_src);
    safe_VkRenderPassSampleLocationsBeginInfoEXT& operator=(const safe_VkRenderPassSampleLocationsBeginInfoEXT& copy_src);
    safe_VkRenderPassSampleLocationsBeginInfoEXT();
    ~safe_VkRenderPassSampleLocationsBeginInfoEXT();
    void initialize(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassSampleLocationsBeginInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassSampleLocationsBeginInfoEXT* ptr() { return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT*>(this); }
    VkRenderPassSampleLocationsBeginInfoEXT const* ptr() const {
        return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT const*>(this);
    }
};
struct safe_VkPipelineSampleLocationsStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 sampleLocationsEnable;
    safe_VkSampleLocationsInfoEXT sampleLocationsInfo;

    safe_VkPipelineSampleLocationsStateCreateInfoEXT(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& copy_src);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT& operator=(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& copy_src);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT();
    ~safe_VkPipelineSampleLocationsStateCreateInfoEXT();
    void initialize(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineSampleLocationsStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineSampleLocationsStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT*>(this);
    }
    VkPipelineSampleLocationsStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceSampleLocationsPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkSampleCountFlags sampleLocationSampleCounts;
    VkExtent2D maxSampleLocationGridSize;
    float sampleLocationCoordinateRange[2];
    uint32_t sampleLocationSubPixelBits;
    VkBool32 variableSampleLocations;

    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& operator=(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT();
    ~safe_VkPhysicalDeviceSampleLocationsPropertiesEXT();
    void initialize(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSampleLocationsPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT*>(this);
    }
    VkPhysicalDeviceSampleLocationsPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT const*>(this);
    }
};
struct safe_VkMultisamplePropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D maxSampleLocationGridSize;

    safe_VkMultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkMultisamplePropertiesEXT(const safe_VkMultisamplePropertiesEXT& copy_src);
    safe_VkMultisamplePropertiesEXT& operator=(const safe_VkMultisamplePropertiesEXT& copy_src);
    safe_VkMultisamplePropertiesEXT();
    ~safe_VkMultisamplePropertiesEXT();
    void initialize(const VkMultisamplePropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMultisamplePropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkMultisamplePropertiesEXT* ptr() { return reinterpret_cast<VkMultisamplePropertiesEXT*>(this); }
    VkMultisamplePropertiesEXT const* ptr() const { return reinterpret_cast<VkMultisamplePropertiesEXT const*>(this); }
};
struct safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t advancedBlendMaxColorAttachments;
    VkBool32 advancedBlendIndependentBlend;
    VkBool32 advancedBlendNonPremultipliedSrcColor;
    VkBool32 advancedBlendNonPremultipliedDstColor;
    VkBool32 advancedBlendCorrelatedOverlap;
    VkBool32 advancedBlendAllOperations;

    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(
        const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();
    ~safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();
    void initialize(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(this);
    }
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 srcPremultiplied;
    VkBool32 dstPremultiplied;
    VkBlendOverlapEXT blendOverlap;

    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& copy_src);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& operator=(
        const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& copy_src);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT();
    ~safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT();
    void initialize(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineColorBlendAdvancedStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT*>(this);
    }
    VkPipelineColorBlendAdvancedStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT const*>(this);
    }
};
struct safe_VkPipelineCoverageToColorStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCoverageToColorStateCreateFlagsNV flags;
    VkBool32 coverageToColorEnable;
    uint32_t coverageToColorLocation;

    safe_VkPipelineCoverageToColorStateCreateInfoNV(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineCoverageToColorStateCreateInfoNV(const safe_VkPipelineCoverageToColorStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageToColorStateCreateInfoNV& operator=(const safe_VkPipelineCoverageToColorStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageToColorStateCreateInfoNV();
    ~safe_VkPipelineCoverageToColorStateCreateInfoNV();
    void initialize(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCoverageToColorStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCoverageToColorStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV*>(this);
    }
    VkPipelineCoverageToColorStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV const*>(this);
    }
};
struct safe_VkPipelineCoverageModulationStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCoverageModulationStateCreateFlagsNV flags;
    VkCoverageModulationModeNV coverageModulationMode;
    VkBool32 coverageModulationTableEnable;
    uint32_t coverageModulationTableCount;
    const float* pCoverageModulationTable{};

    safe_VkPipelineCoverageModulationStateCreateInfoNV(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineCoverageModulationStateCreateInfoNV(const safe_VkPipelineCoverageModulationStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageModulationStateCreateInfoNV& operator=(
        const safe_VkPipelineCoverageModulationStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageModulationStateCreateInfoNV();
    ~safe_VkPipelineCoverageModulationStateCreateInfoNV();
    void initialize(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCoverageModulationStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCoverageModulationStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV*>(this);
    }
    VkPipelineCoverageModulationStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t shaderSMCount;
    uint32_t shaderWarpsPerSM;

    safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(const safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& operator=(const safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV();
    ~safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV();
    void initialize(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*>(this);
    }
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV const*>(this);
    }
};
struct safe_VkDrmFormatModifierPropertiesListEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t drmFormatModifierCount;
    VkDrmFormatModifierPropertiesEXT* pDrmFormatModifierProperties{};

    safe_VkDrmFormatModifierPropertiesListEXT(const VkDrmFormatModifierPropertiesListEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDrmFormatModifierPropertiesListEXT(const safe_VkDrmFormatModifierPropertiesListEXT& copy_src);
    safe_VkDrmFormatModifierPropertiesListEXT& operator=(const safe_VkDrmFormatModifierPropertiesListEXT& copy_src);
    safe_VkDrmFormatModifierPropertiesListEXT();
    ~safe_VkDrmFormatModifierPropertiesListEXT();
    void initialize(const VkDrmFormatModifierPropertiesListEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDrmFormatModifierPropertiesListEXT* copy_src, PNextCopyState* copy_state = {});
    VkDrmFormatModifierPropertiesListEXT* ptr() { return reinterpret_cast<VkDrmFormatModifierPropertiesListEXT*>(this); }
    VkDrmFormatModifierPropertiesListEXT const* ptr() const {
        return reinterpret_cast<VkDrmFormatModifierPropertiesListEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint64_t drmFormatModifier;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices{};

    safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src);
    safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& operator=(
        const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& copy_src);
    safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT();
    ~safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT();
    void initialize(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageDrmFormatModifierInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT*>(this);
    }
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT const*>(this);
    }
};
struct safe_VkImageDrmFormatModifierListCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t drmFormatModifierCount;
    const uint64_t* pDrmFormatModifiers{};

    safe_VkImageDrmFormatModifierListCreateInfoEXT(const VkImageDrmFormatModifierListCreateInfoEXT* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageDrmFormatModifierListCreateInfoEXT(const safe_VkImageDrmFormatModifierListCreateInfoEXT& copy_src);
    safe_VkImageDrmFormatModifierListCreateInfoEXT& operator=(const safe_VkImageDrmFormatModifierListCreateInfoEXT& copy_src);
    safe_VkImageDrmFormatModifierListCreateInfoEXT();
    ~safe_VkImageDrmFormatModifierListCreateInfoEXT();
    void initialize(const VkImageDrmFormatModifierListCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageDrmFormatModifierListCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageDrmFormatModifierListCreateInfoEXT* ptr() { return reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT*>(this); }
    VkImageDrmFormatModifierListCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT const*>(this);
    }
};
struct safe_VkImageDrmFormatModifierExplicitCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint64_t drmFormatModifier;
    uint32_t drmFormatModifierPlaneCount;
    const VkSubresourceLayout* pPlaneLayouts{};

    safe_VkImageDrmFormatModifierExplicitCreateInfoEXT(const VkImageDrmFormatModifierExplicitCreateInfoEXT* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageDrmFormatModifierExplicitCreateInfoEXT(const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& copy_src);
    safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& operator=(
        const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT& copy_src);
    safe_VkImageDrmFormatModifierExplicitCreateInfoEXT();
    ~safe_VkImageDrmFormatModifierExplicitCreateInfoEXT();
    void initialize(const VkImageDrmFormatModifierExplicitCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageDrmFormatModifierExplicitCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageDrmFormatModifierExplicitCreateInfoEXT* ptr() {
        return reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT*>(this);
    }
    VkImageDrmFormatModifierExplicitCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT const*>(this);
    }
};
struct safe_VkImageDrmFormatModifierPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint64_t drmFormatModifier;

    safe_VkImageDrmFormatModifierPropertiesEXT(const VkImageDrmFormatModifierPropertiesEXT* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageDrmFormatModifierPropertiesEXT(const safe_VkImageDrmFormatModifierPropertiesEXT& copy_src);
    safe_VkImageDrmFormatModifierPropertiesEXT& operator=(const safe_VkImageDrmFormatModifierPropertiesEXT& copy_src);
    safe_VkImageDrmFormatModifierPropertiesEXT();
    ~safe_VkImageDrmFormatModifierPropertiesEXT();
    void initialize(const VkImageDrmFormatModifierPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageDrmFormatModifierPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageDrmFormatModifierPropertiesEXT* ptr() { return reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT*>(this); }
    VkImageDrmFormatModifierPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT const*>(this);
    }
};
struct safe_VkDrmFormatModifierPropertiesList2EXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t drmFormatModifierCount;
    VkDrmFormatModifierProperties2EXT* pDrmFormatModifierProperties{};

    safe_VkDrmFormatModifierPropertiesList2EXT(const VkDrmFormatModifierPropertiesList2EXT* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDrmFormatModifierPropertiesList2EXT(const safe_VkDrmFormatModifierPropertiesList2EXT& copy_src);
    safe_VkDrmFormatModifierPropertiesList2EXT& operator=(const safe_VkDrmFormatModifierPropertiesList2EXT& copy_src);
    safe_VkDrmFormatModifierPropertiesList2EXT();
    ~safe_VkDrmFormatModifierPropertiesList2EXT();
    void initialize(const VkDrmFormatModifierPropertiesList2EXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDrmFormatModifierPropertiesList2EXT* copy_src, PNextCopyState* copy_state = {});
    VkDrmFormatModifierPropertiesList2EXT* ptr() { return reinterpret_cast<VkDrmFormatModifierPropertiesList2EXT*>(this); }
    VkDrmFormatModifierPropertiesList2EXT const* ptr() const {
        return reinterpret_cast<VkDrmFormatModifierPropertiesList2EXT const*>(this);
    }
};
struct safe_VkValidationCacheCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkValidationCacheCreateFlagsEXT flags;
    size_t initialDataSize;
    const void* pInitialData{};

    safe_VkValidationCacheCreateInfoEXT(const VkValidationCacheCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkValidationCacheCreateInfoEXT(const safe_VkValidationCacheCreateInfoEXT& copy_src);
    safe_VkValidationCacheCreateInfoEXT& operator=(const safe_VkValidationCacheCreateInfoEXT& copy_src);
    safe_VkValidationCacheCreateInfoEXT();
    ~safe_VkValidationCacheCreateInfoEXT();
    void initialize(const VkValidationCacheCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkValidationCacheCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkValidationCacheCreateInfoEXT* ptr() { return reinterpret_cast<VkValidationCacheCreateInfoEXT*>(this); }
    VkValidationCacheCreateInfoEXT const* ptr() const { return reinterpret_cast<VkValidationCacheCreateInfoEXT const*>(this); }
};
struct safe_VkShaderModuleValidationCacheCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkValidationCacheEXT validationCache;

    safe_VkShaderModuleValidationCacheCreateInfoEXT(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkShaderModuleValidationCacheCreateInfoEXT(const safe_VkShaderModuleValidationCacheCreateInfoEXT& copy_src);
    safe_VkShaderModuleValidationCacheCreateInfoEXT& operator=(const safe_VkShaderModuleValidationCacheCreateInfoEXT& copy_src);
    safe_VkShaderModuleValidationCacheCreateInfoEXT();
    ~safe_VkShaderModuleValidationCacheCreateInfoEXT();
    void initialize(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkShaderModuleValidationCacheCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkShaderModuleValidationCacheCreateInfoEXT* ptr() {
        return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT*>(this);
    }
    VkShaderModuleValidationCacheCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT const*>(this);
    }
};
struct safe_VkShadingRatePaletteNV {
    uint32_t shadingRatePaletteEntryCount;
    const VkShadingRatePaletteEntryNV* pShadingRatePaletteEntries{};

    safe_VkShadingRatePaletteNV(const VkShadingRatePaletteNV* in_struct, PNextCopyState* copy_state = {});
    safe_VkShadingRatePaletteNV(const safe_VkShadingRatePaletteNV& copy_src);
    safe_VkShadingRatePaletteNV& operator=(const safe_VkShadingRatePaletteNV& copy_src);
    safe_VkShadingRatePaletteNV();
    ~safe_VkShadingRatePaletteNV();
    void initialize(const VkShadingRatePaletteNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkShadingRatePaletteNV* copy_src, PNextCopyState* copy_state = {});
    VkShadingRatePaletteNV* ptr() { return reinterpret_cast<VkShadingRatePaletteNV*>(this); }
    VkShadingRatePaletteNV const* ptr() const { return reinterpret_cast<VkShadingRatePaletteNV const*>(this); }
};
struct safe_VkPipelineViewportShadingRateImageStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 shadingRateImageEnable;
    uint32_t viewportCount;
    safe_VkShadingRatePaletteNV* pShadingRatePalettes{};

    safe_VkPipelineViewportShadingRateImageStateCreateInfoNV(const VkPipelineViewportShadingRateImageStateCreateInfoNV* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportShadingRateImageStateCreateInfoNV(
        const safe_VkPipelineViewportShadingRateImageStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportShadingRateImageStateCreateInfoNV& operator=(
        const safe_VkPipelineViewportShadingRateImageStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportShadingRateImageStateCreateInfoNV();
    ~safe_VkPipelineViewportShadingRateImageStateCreateInfoNV();
    void initialize(const VkPipelineViewportShadingRateImageStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportShadingRateImageStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportShadingRateImageStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV*>(this);
    }
    VkPipelineViewportShadingRateImageStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceShadingRateImagePropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D shadingRateTexelSize;
    uint32_t shadingRatePaletteSize;
    uint32_t shadingRateMaxCoarseSamples;

    safe_VkPhysicalDeviceShadingRateImagePropertiesNV(const VkPhysicalDeviceShadingRateImagePropertiesNV* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShadingRateImagePropertiesNV(const safe_VkPhysicalDeviceShadingRateImagePropertiesNV& copy_src);
    safe_VkPhysicalDeviceShadingRateImagePropertiesNV& operator=(const safe_VkPhysicalDeviceShadingRateImagePropertiesNV& copy_src);
    safe_VkPhysicalDeviceShadingRateImagePropertiesNV();
    ~safe_VkPhysicalDeviceShadingRateImagePropertiesNV();
    void initialize(const VkPhysicalDeviceShadingRateImagePropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShadingRateImagePropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShadingRateImagePropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV*>(this);
    }
    VkPhysicalDeviceShadingRateImagePropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV const*>(this);
    }
};
struct safe_VkCoarseSampleOrderCustomNV {
    VkShadingRatePaletteEntryNV shadingRate;
    uint32_t sampleCount;
    uint32_t sampleLocationCount;
    const VkCoarseSampleLocationNV* pSampleLocations{};

    safe_VkCoarseSampleOrderCustomNV(const VkCoarseSampleOrderCustomNV* in_struct, PNextCopyState* copy_state = {});
    safe_VkCoarseSampleOrderCustomNV(const safe_VkCoarseSampleOrderCustomNV& copy_src);
    safe_VkCoarseSampleOrderCustomNV& operator=(const safe_VkCoarseSampleOrderCustomNV& copy_src);
    safe_VkCoarseSampleOrderCustomNV();
    ~safe_VkCoarseSampleOrderCustomNV();
    void initialize(const VkCoarseSampleOrderCustomNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCoarseSampleOrderCustomNV* copy_src, PNextCopyState* copy_state = {});
    VkCoarseSampleOrderCustomNV* ptr() { return reinterpret_cast<VkCoarseSampleOrderCustomNV*>(this); }
    VkCoarseSampleOrderCustomNV const* ptr() const { return reinterpret_cast<VkCoarseSampleOrderCustomNV const*>(this); }
};
struct safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkCoarseSampleOrderTypeNV sampleOrderType;
    uint32_t customSampleOrderCount;
    safe_VkCoarseSampleOrderCustomNV* pCustomSampleOrders{};

    safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(
        const safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& operator=(
        const safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV();
    ~safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV();
    void initialize(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*>(this);
    }
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const*>(this);
    }
};
struct safe_VkRayTracingShaderGroupCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkRayTracingShaderGroupTypeKHR type;
    uint32_t generalShader;
    uint32_t closestHitShader;
    uint32_t anyHitShader;
    uint32_t intersectionShader;

    safe_VkRayTracingShaderGroupCreateInfoNV(const VkRayTracingShaderGroupCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkRayTracingShaderGroupCreateInfoNV(const safe_VkRayTracingShaderGroupCreateInfoNV& copy_src);
    safe_VkRayTracingShaderGroupCreateInfoNV& operator=(const safe_VkRayTracingShaderGroupCreateInfoNV& copy_src);
    safe_VkRayTracingShaderGroupCreateInfoNV();
    ~safe_VkRayTracingShaderGroupCreateInfoNV();
    void initialize(const VkRayTracingShaderGroupCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRayTracingShaderGroupCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkRayTracingShaderGroupCreateInfoNV* ptr() { return reinterpret_cast<VkRayTracingShaderGroupCreateInfoNV*>(this); }
    VkRayTracingShaderGroupCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkRayTracingShaderGroupCreateInfoNV const*>(this);
    }
};
struct safe_VkRayTracingPipelineCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages{};
    uint32_t groupCount;
    safe_VkRayTracingShaderGroupCreateInfoNV* pGroups{};
    uint32_t maxRecursionDepth;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;

    safe_VkRayTracingPipelineCreateInfoNV(const VkRayTracingPipelineCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkRayTracingPipelineCreateInfoNV(const safe_VkRayTracingPipelineCreateInfoNV& copy_src);
    safe_VkRayTracingPipelineCreateInfoNV& operator=(const safe_VkRayTracingPipelineCreateInfoNV& copy_src);
    safe_VkRayTracingPipelineCreateInfoNV();
    ~safe_VkRayTracingPipelineCreateInfoNV();
    void initialize(const VkRayTracingPipelineCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRayTracingPipelineCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkRayTracingPipelineCreateInfoNV* ptr() { return reinterpret_cast<VkRayTracingPipelineCreateInfoNV*>(this); }
    VkRayTracingPipelineCreateInfoNV const* ptr() const { return reinterpret_cast<VkRayTracingPipelineCreateInfoNV const*>(this); }
};
struct safe_VkGeometryTrianglesNV {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer vertexData;
    VkDeviceSize vertexOffset;
    uint32_t vertexCount;
    VkDeviceSize vertexStride;
    VkFormat vertexFormat;
    VkBuffer indexData;
    VkDeviceSize indexOffset;
    uint32_t indexCount;
    VkIndexType indexType;
    VkBuffer transformData;
    VkDeviceSize transformOffset;

    safe_VkGeometryTrianglesNV(const VkGeometryTrianglesNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGeometryTrianglesNV(const safe_VkGeometryTrianglesNV& copy_src);
    safe_VkGeometryTrianglesNV& operator=(const safe_VkGeometryTrianglesNV& copy_src);
    safe_VkGeometryTrianglesNV();
    ~safe_VkGeometryTrianglesNV();
    void initialize(const VkGeometryTrianglesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGeometryTrianglesNV* copy_src, PNextCopyState* copy_state = {});
    VkGeometryTrianglesNV* ptr() { return reinterpret_cast<VkGeometryTrianglesNV*>(this); }
    VkGeometryTrianglesNV const* ptr() const { return reinterpret_cast<VkGeometryTrianglesNV const*>(this); }
};
struct safe_VkGeometryAABBNV {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer aabbData;
    uint32_t numAABBs;
    uint32_t stride;
    VkDeviceSize offset;

    safe_VkGeometryAABBNV(const VkGeometryAABBNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGeometryAABBNV(const safe_VkGeometryAABBNV& copy_src);
    safe_VkGeometryAABBNV& operator=(const safe_VkGeometryAABBNV& copy_src);
    safe_VkGeometryAABBNV();
    ~safe_VkGeometryAABBNV();
    void initialize(const VkGeometryAABBNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGeometryAABBNV* copy_src, PNextCopyState* copy_state = {});
    VkGeometryAABBNV* ptr() { return reinterpret_cast<VkGeometryAABBNV*>(this); }
    VkGeometryAABBNV const* ptr() const { return reinterpret_cast<VkGeometryAABBNV const*>(this); }
};
struct safe_VkGeometryNV {
    VkStructureType sType;
    const void* pNext{};
    VkGeometryTypeKHR geometryType;
    VkGeometryDataNV geometry;
    VkGeometryFlagsKHR flags;

    safe_VkGeometryNV(const VkGeometryNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGeometryNV(const safe_VkGeometryNV& copy_src);
    safe_VkGeometryNV& operator=(const safe_VkGeometryNV& copy_src);
    safe_VkGeometryNV();
    ~safe_VkGeometryNV();
    void initialize(const VkGeometryNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGeometryNV* copy_src, PNextCopyState* copy_state = {});
    VkGeometryNV* ptr() { return reinterpret_cast<VkGeometryNV*>(this); }
    VkGeometryNV const* ptr() const { return reinterpret_cast<VkGeometryNV const*>(this); }
};
struct safe_VkAccelerationStructureInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureTypeNV type;
    VkBuildAccelerationStructureFlagsNV flags;
    uint32_t instanceCount;
    uint32_t geometryCount;
    safe_VkGeometryNV* pGeometries{};

    safe_VkAccelerationStructureInfoNV(const VkAccelerationStructureInfoNV* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkAccelerationStructureInfoNV(const safe_VkAccelerationStructureInfoNV& copy_src);
    safe_VkAccelerationStructureInfoNV& operator=(const safe_VkAccelerationStructureInfoNV& copy_src);
    safe_VkAccelerationStructureInfoNV();
    ~safe_VkAccelerationStructureInfoNV();
    void initialize(const VkAccelerationStructureInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureInfoNV* ptr() { return reinterpret_cast<VkAccelerationStructureInfoNV*>(this); }
    VkAccelerationStructureInfoNV const* ptr() const { return reinterpret_cast<VkAccelerationStructureInfoNV const*>(this); }
};
struct safe_VkAccelerationStructureCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize compactedSize;
    safe_VkAccelerationStructureInfoNV info;

    safe_VkAccelerationStructureCreateInfoNV(const VkAccelerationStructureCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkAccelerationStructureCreateInfoNV(const safe_VkAccelerationStructureCreateInfoNV& copy_src);
    safe_VkAccelerationStructureCreateInfoNV& operator=(const safe_VkAccelerationStructureCreateInfoNV& copy_src);
    safe_VkAccelerationStructureCreateInfoNV();
    ~safe_VkAccelerationStructureCreateInfoNV();
    void initialize(const VkAccelerationStructureCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureCreateInfoNV* ptr() { return reinterpret_cast<VkAccelerationStructureCreateInfoNV*>(this); }
    VkAccelerationStructureCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureCreateInfoNV const*>(this);
    }
};
struct safe_VkBindAccelerationStructureMemoryInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureNV accelerationStructure;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices{};

    safe_VkBindAccelerationStructureMemoryInfoNV(const VkBindAccelerationStructureMemoryInfoNV* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBindAccelerationStructureMemoryInfoNV(const safe_VkBindAccelerationStructureMemoryInfoNV& copy_src);
    safe_VkBindAccelerationStructureMemoryInfoNV& operator=(const safe_VkBindAccelerationStructureMemoryInfoNV& copy_src);
    safe_VkBindAccelerationStructureMemoryInfoNV();
    ~safe_VkBindAccelerationStructureMemoryInfoNV();
    void initialize(const VkBindAccelerationStructureMemoryInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBindAccelerationStructureMemoryInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkBindAccelerationStructureMemoryInfoNV* ptr() { return reinterpret_cast<VkBindAccelerationStructureMemoryInfoNV*>(this); }
    VkBindAccelerationStructureMemoryInfoNV const* ptr() const {
        return reinterpret_cast<VkBindAccelerationStructureMemoryInfoNV const*>(this);
    }
};
struct safe_VkWriteDescriptorSetAccelerationStructureNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t accelerationStructureCount;
    VkAccelerationStructureNV* pAccelerationStructures{};

    safe_VkWriteDescriptorSetAccelerationStructureNV(const VkWriteDescriptorSetAccelerationStructureNV* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWriteDescriptorSetAccelerationStructureNV(const safe_VkWriteDescriptorSetAccelerationStructureNV& copy_src);
    safe_VkWriteDescriptorSetAccelerationStructureNV& operator=(const safe_VkWriteDescriptorSetAccelerationStructureNV& copy_src);
    safe_VkWriteDescriptorSetAccelerationStructureNV();
    ~safe_VkWriteDescriptorSetAccelerationStructureNV();
    void initialize(const VkWriteDescriptorSetAccelerationStructureNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWriteDescriptorSetAccelerationStructureNV* copy_src, PNextCopyState* copy_state = {});
    VkWriteDescriptorSetAccelerationStructureNV* ptr() {
        return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureNV*>(this);
    }
    VkWriteDescriptorSetAccelerationStructureNV const* ptr() const {
        return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureNV const*>(this);
    }
};
struct safe_VkAccelerationStructureMemoryRequirementsInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureMemoryRequirementsTypeNV type;
    VkAccelerationStructureNV accelerationStructure;

    safe_VkAccelerationStructureMemoryRequirementsInfoNV(const VkAccelerationStructureMemoryRequirementsInfoNV* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureMemoryRequirementsInfoNV(const safe_VkAccelerationStructureMemoryRequirementsInfoNV& copy_src);
    safe_VkAccelerationStructureMemoryRequirementsInfoNV& operator=(
        const safe_VkAccelerationStructureMemoryRequirementsInfoNV& copy_src);
    safe_VkAccelerationStructureMemoryRequirementsInfoNV();
    ~safe_VkAccelerationStructureMemoryRequirementsInfoNV();
    void initialize(const VkAccelerationStructureMemoryRequirementsInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureMemoryRequirementsInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureMemoryRequirementsInfoNV* ptr() {
        return reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNV*>(this);
    }
    VkAccelerationStructureMemoryRequirementsInfoNV const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceRayTracingPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t shaderGroupHandleSize;
    uint32_t maxRecursionDepth;
    uint32_t maxShaderGroupStride;
    uint32_t shaderGroupBaseAlignment;
    uint64_t maxGeometryCount;
    uint64_t maxInstanceCount;
    uint64_t maxTriangleCount;
    uint32_t maxDescriptorSetAccelerationStructures;

    safe_VkPhysicalDeviceRayTracingPropertiesNV(const VkPhysicalDeviceRayTracingPropertiesNV* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceRayTracingPropertiesNV(const safe_VkPhysicalDeviceRayTracingPropertiesNV& copy_src);
    safe_VkPhysicalDeviceRayTracingPropertiesNV& operator=(const safe_VkPhysicalDeviceRayTracingPropertiesNV& copy_src);
    safe_VkPhysicalDeviceRayTracingPropertiesNV();
    ~safe_VkPhysicalDeviceRayTracingPropertiesNV();
    void initialize(const VkPhysicalDeviceRayTracingPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceRayTracingPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceRayTracingPropertiesNV* ptr() { return reinterpret_cast<VkPhysicalDeviceRayTracingPropertiesNV*>(this); }
    VkPhysicalDeviceRayTracingPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceRayTracingPropertiesNV const*>(this);
    }
};
struct safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 representativeFragmentTestEnable;

    safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(
        const VkPipelineRepresentativeFragmentTestStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(
        const safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV& copy_src);
    safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV& operator=(
        const safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV& copy_src);
    safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV();
    ~safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV();
    void initialize(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRepresentativeFragmentTestStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV*>(this);
    }
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceImageViewImageFormatInfoEXT {
    VkStructureType sType;
    void* pNext{};
    VkImageViewType imageViewType;

    safe_VkPhysicalDeviceImageViewImageFormatInfoEXT(const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceImageViewImageFormatInfoEXT(const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& copy_src);
    safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& operator=(const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT& copy_src);
    safe_VkPhysicalDeviceImageViewImageFormatInfoEXT();
    ~safe_VkPhysicalDeviceImageViewImageFormatInfoEXT();
    void initialize(const VkPhysicalDeviceImageViewImageFormatInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageViewImageFormatInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageViewImageFormatInfoEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceImageViewImageFormatInfoEXT*>(this);
    }
    VkPhysicalDeviceImageViewImageFormatInfoEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceImageViewImageFormatInfoEXT const*>(this);
    }
};
struct safe_VkFilterCubicImageViewImageFormatPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 filterCubic;
    VkBool32 filterCubicMinmax;

    safe_VkFilterCubicImageViewImageFormatPropertiesEXT(const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFilterCubicImageViewImageFormatPropertiesEXT(const safe_VkFilterCubicImageViewImageFormatPropertiesEXT& copy_src);
    safe_VkFilterCubicImageViewImageFormatPropertiesEXT& operator=(
        const safe_VkFilterCubicImageViewImageFormatPropertiesEXT& copy_src);
    safe_VkFilterCubicImageViewImageFormatPropertiesEXT();
    ~safe_VkFilterCubicImageViewImageFormatPropertiesEXT();
    void initialize(const VkFilterCubicImageViewImageFormatPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFilterCubicImageViewImageFormatPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkFilterCubicImageViewImageFormatPropertiesEXT* ptr() {
        return reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT*>(this);
    }
    VkFilterCubicImageViewImageFormatPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT const*>(this);
    }
};
struct safe_VkImportMemoryHostPointerInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagBits handleType;
    void* pHostPointer{};

    safe_VkImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkImportMemoryHostPointerInfoEXT(const safe_VkImportMemoryHostPointerInfoEXT& copy_src);
    safe_VkImportMemoryHostPointerInfoEXT& operator=(const safe_VkImportMemoryHostPointerInfoEXT& copy_src);
    safe_VkImportMemoryHostPointerInfoEXT();
    ~safe_VkImportMemoryHostPointerInfoEXT();
    void initialize(const VkImportMemoryHostPointerInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryHostPointerInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryHostPointerInfoEXT* ptr() { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT*>(this); }
    VkImportMemoryHostPointerInfoEXT const* ptr() const { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT const*>(this); }
};
struct safe_VkMemoryHostPointerPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryTypeBits;

    safe_VkMemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkMemoryHostPointerPropertiesEXT(const safe_VkMemoryHostPointerPropertiesEXT& copy_src);
    safe_VkMemoryHostPointerPropertiesEXT& operator=(const safe_VkMemoryHostPointerPropertiesEXT& copy_src);
    safe_VkMemoryHostPointerPropertiesEXT();
    ~safe_VkMemoryHostPointerPropertiesEXT();
    void initialize(const VkMemoryHostPointerPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryHostPointerPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkMemoryHostPointerPropertiesEXT* ptr() { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT*>(this); }
    VkMemoryHostPointerPropertiesEXT const* ptr() const { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT const*>(this); }
};
struct safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize minImportedHostPointerAlignment;

    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT();
    ~safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT();
    void initialize(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(this);
    }
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineCompilerControlCreateInfoAMD {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCompilerControlFlagsAMD compilerControlFlags;

    safe_VkPipelineCompilerControlCreateInfoAMD(const VkPipelineCompilerControlCreateInfoAMD* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineCompilerControlCreateInfoAMD(const safe_VkPipelineCompilerControlCreateInfoAMD& copy_src);
    safe_VkPipelineCompilerControlCreateInfoAMD& operator=(const safe_VkPipelineCompilerControlCreateInfoAMD& copy_src);
    safe_VkPipelineCompilerControlCreateInfoAMD();
    ~safe_VkPipelineCompilerControlCreateInfoAMD();
    void initialize(const VkPipelineCompilerControlCreateInfoAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCompilerControlCreateInfoAMD* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCompilerControlCreateInfoAMD* ptr() { return reinterpret_cast<VkPipelineCompilerControlCreateInfoAMD*>(this); }
    VkPipelineCompilerControlCreateInfoAMD const* ptr() const {
        return reinterpret_cast<VkPipelineCompilerControlCreateInfoAMD const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderCorePropertiesAMD {
    VkStructureType sType;
    void* pNext{};
    uint32_t shaderEngineCount;
    uint32_t shaderArraysPerEngineCount;
    uint32_t computeUnitsPerShaderArray;
    uint32_t simdPerComputeUnit;
    uint32_t wavefrontsPerSimd;
    uint32_t wavefrontSize;
    uint32_t sgprsPerSimd;
    uint32_t minSgprAllocation;
    uint32_t maxSgprAllocation;
    uint32_t sgprAllocationGranularity;
    uint32_t vgprsPerSimd;
    uint32_t minVgprAllocation;
    uint32_t maxVgprAllocation;
    uint32_t vgprAllocationGranularity;

    safe_VkPhysicalDeviceShaderCorePropertiesAMD(const VkPhysicalDeviceShaderCorePropertiesAMD* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderCorePropertiesAMD(const safe_VkPhysicalDeviceShaderCorePropertiesAMD& copy_src);
    safe_VkPhysicalDeviceShaderCorePropertiesAMD& operator=(const safe_VkPhysicalDeviceShaderCorePropertiesAMD& copy_src);
    safe_VkPhysicalDeviceShaderCorePropertiesAMD();
    ~safe_VkPhysicalDeviceShaderCorePropertiesAMD();
    void initialize(const VkPhysicalDeviceShaderCorePropertiesAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderCorePropertiesAMD* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderCorePropertiesAMD* ptr() { return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD*>(this); }
    VkPhysicalDeviceShaderCorePropertiesAMD const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD const*>(this);
    }
};
struct safe_VkDeviceMemoryOverallocationCreateInfoAMD {
    VkStructureType sType;
    const void* pNext{};
    VkMemoryOverallocationBehaviorAMD overallocationBehavior;

    safe_VkDeviceMemoryOverallocationCreateInfoAMD(const VkDeviceMemoryOverallocationCreateInfoAMD* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceMemoryOverallocationCreateInfoAMD(const safe_VkDeviceMemoryOverallocationCreateInfoAMD& copy_src);
    safe_VkDeviceMemoryOverallocationCreateInfoAMD& operator=(const safe_VkDeviceMemoryOverallocationCreateInfoAMD& copy_src);
    safe_VkDeviceMemoryOverallocationCreateInfoAMD();
    ~safe_VkDeviceMemoryOverallocationCreateInfoAMD();
    void initialize(const VkDeviceMemoryOverallocationCreateInfoAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceMemoryOverallocationCreateInfoAMD* copy_src, PNextCopyState* copy_state = {});
    VkDeviceMemoryOverallocationCreateInfoAMD* ptr() { return reinterpret_cast<VkDeviceMemoryOverallocationCreateInfoAMD*>(this); }
    VkDeviceMemoryOverallocationCreateInfoAMD const* ptr() const {
        return reinterpret_cast<VkDeviceMemoryOverallocationCreateInfoAMD const*>(this);
    }
};
struct safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxVertexAttribDivisor;

    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(
        const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT();
    ~safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT();
    void initialize(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*>(this);
    }
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_GGP
struct safe_VkPresentFrameTokenGGP {
    VkStructureType sType;
    const void* pNext{};
    GgpFrameToken frameToken;

    safe_VkPresentFrameTokenGGP(const VkPresentFrameTokenGGP* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPresentFrameTokenGGP(const safe_VkPresentFrameTokenGGP& copy_src);
    safe_VkPresentFrameTokenGGP& operator=(const safe_VkPresentFrameTokenGGP& copy_src);
    safe_VkPresentFrameTokenGGP();
    ~safe_VkPresentFrameTokenGGP();
    void initialize(const VkPresentFrameTokenGGP* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPresentFrameTokenGGP* copy_src, PNextCopyState* copy_state = {});
    VkPresentFrameTokenGGP* ptr() { return reinterpret_cast<VkPresentFrameTokenGGP*>(this); }
    VkPresentFrameTokenGGP const* ptr() const { return reinterpret_cast<VkPresentFrameTokenGGP const*>(this); }
};
#endif  // VK_USE_PLATFORM_GGP
struct safe_VkPhysicalDeviceMeshShaderPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxDrawMeshTasksCount;
    uint32_t maxTaskWorkGroupInvocations;
    uint32_t maxTaskWorkGroupSize[3];
    uint32_t maxTaskTotalMemorySize;
    uint32_t maxTaskOutputCount;
    uint32_t maxMeshWorkGroupInvocations;
    uint32_t maxMeshWorkGroupSize[3];
    uint32_t maxMeshTotalMemorySize;
    uint32_t maxMeshOutputVertices;
    uint32_t maxMeshOutputPrimitives;
    uint32_t maxMeshMultiviewViewCount;
    uint32_t meshOutputPerVertexGranularity;
    uint32_t meshOutputPerPrimitiveGranularity;

    safe_VkPhysicalDeviceMeshShaderPropertiesNV(const VkPhysicalDeviceMeshShaderPropertiesNV* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMeshShaderPropertiesNV(const safe_VkPhysicalDeviceMeshShaderPropertiesNV& copy_src);
    safe_VkPhysicalDeviceMeshShaderPropertiesNV& operator=(const safe_VkPhysicalDeviceMeshShaderPropertiesNV& copy_src);
    safe_VkPhysicalDeviceMeshShaderPropertiesNV();
    ~safe_VkPhysicalDeviceMeshShaderPropertiesNV();
    void initialize(const VkPhysicalDeviceMeshShaderPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMeshShaderPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMeshShaderPropertiesNV* ptr() { return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV*>(this); }
    VkPhysicalDeviceMeshShaderPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV const*>(this);
    }
};
struct safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t exclusiveScissorCount;
    const VkRect2D* pExclusiveScissors{};

    safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV(const VkPipelineViewportExclusiveScissorStateCreateInfoNV* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV(
        const safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV& operator=(
        const safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV& copy_src);
    safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV();
    ~safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV();
    void initialize(const VkPipelineViewportExclusiveScissorStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportExclusiveScissorStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportExclusiveScissorStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV*>(this);
    }
    VkPipelineViewportExclusiveScissorStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV const*>(this);
    }
};
struct safe_VkQueueFamilyCheckpointPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkPipelineStageFlags checkpointExecutionStageMask;

    safe_VkQueueFamilyCheckpointPropertiesNV(const VkQueueFamilyCheckpointPropertiesNV* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkQueueFamilyCheckpointPropertiesNV(const safe_VkQueueFamilyCheckpointPropertiesNV& copy_src);
    safe_VkQueueFamilyCheckpointPropertiesNV& operator=(const safe_VkQueueFamilyCheckpointPropertiesNV& copy_src);
    safe_VkQueueFamilyCheckpointPropertiesNV();
    ~safe_VkQueueFamilyCheckpointPropertiesNV();
    void initialize(const VkQueueFamilyCheckpointPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueueFamilyCheckpointPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkQueueFamilyCheckpointPropertiesNV* ptr() { return reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV*>(this); }
    VkQueueFamilyCheckpointPropertiesNV const* ptr() const {
        return reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV const*>(this);
    }
};
struct safe_VkCheckpointDataNV {
    VkStructureType sType;
    void* pNext{};
    VkPipelineStageFlagBits stage;
    void* pCheckpointMarker{};

    safe_VkCheckpointDataNV(const VkCheckpointDataNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCheckpointDataNV(const safe_VkCheckpointDataNV& copy_src);
    safe_VkCheckpointDataNV& operator=(const safe_VkCheckpointDataNV& copy_src);
    safe_VkCheckpointDataNV();
    ~safe_VkCheckpointDataNV();
    void initialize(const VkCheckpointDataNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCheckpointDataNV* copy_src, PNextCopyState* copy_state = {});
    VkCheckpointDataNV* ptr() { return reinterpret_cast<VkCheckpointDataNV*>(this); }
    VkCheckpointDataNV const* ptr() const { return reinterpret_cast<VkCheckpointDataNV const*>(this); }
};
union safe_VkPerformanceValueDataINTEL {
    uint32_t value32;
    uint64_t value64;
    float valueFloat;
    VkBool32 valueBool;
    const char* valueString{};

    safe_VkPerformanceValueDataINTEL(const VkPerformanceValueDataINTEL* in_struct, PNextCopyState* copy_state = {});
    safe_VkPerformanceValueDataINTEL(const safe_VkPerformanceValueDataINTEL& copy_src);
    safe_VkPerformanceValueDataINTEL& operator=(const safe_VkPerformanceValueDataINTEL& copy_src);
    safe_VkPerformanceValueDataINTEL();
    ~safe_VkPerformanceValueDataINTEL();
    void initialize(const VkPerformanceValueDataINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceValueDataINTEL* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceValueDataINTEL* ptr() { return reinterpret_cast<VkPerformanceValueDataINTEL*>(this); }
    VkPerformanceValueDataINTEL const* ptr() const { return reinterpret_cast<VkPerformanceValueDataINTEL const*>(this); }
};
struct safe_VkInitializePerformanceApiInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    void* pUserData{};

    safe_VkInitializePerformanceApiInfoINTEL(const VkInitializePerformanceApiInfoINTEL* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkInitializePerformanceApiInfoINTEL(const safe_VkInitializePerformanceApiInfoINTEL& copy_src);
    safe_VkInitializePerformanceApiInfoINTEL& operator=(const safe_VkInitializePerformanceApiInfoINTEL& copy_src);
    safe_VkInitializePerformanceApiInfoINTEL();
    ~safe_VkInitializePerformanceApiInfoINTEL();
    void initialize(const VkInitializePerformanceApiInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkInitializePerformanceApiInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkInitializePerformanceApiInfoINTEL* ptr() { return reinterpret_cast<VkInitializePerformanceApiInfoINTEL*>(this); }
    VkInitializePerformanceApiInfoINTEL const* ptr() const {
        return reinterpret_cast<VkInitializePerformanceApiInfoINTEL const*>(this);
    }
};
struct safe_VkQueryPoolPerformanceQueryCreateInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    VkQueryPoolSamplingModeINTEL performanceCountersSampling;

    safe_VkQueryPoolPerformanceQueryCreateInfoINTEL(const VkQueryPoolPerformanceQueryCreateInfoINTEL* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkQueryPoolPerformanceQueryCreateInfoINTEL(const safe_VkQueryPoolPerformanceQueryCreateInfoINTEL& copy_src);
    safe_VkQueryPoolPerformanceQueryCreateInfoINTEL& operator=(const safe_VkQueryPoolPerformanceQueryCreateInfoINTEL& copy_src);
    safe_VkQueryPoolPerformanceQueryCreateInfoINTEL();
    ~safe_VkQueryPoolPerformanceQueryCreateInfoINTEL();
    void initialize(const VkQueryPoolPerformanceQueryCreateInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueryPoolPerformanceQueryCreateInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkQueryPoolPerformanceQueryCreateInfoINTEL* ptr() {
        return reinterpret_cast<VkQueryPoolPerformanceQueryCreateInfoINTEL*>(this);
    }
    VkQueryPoolPerformanceQueryCreateInfoINTEL const* ptr() const {
        return reinterpret_cast<VkQueryPoolPerformanceQueryCreateInfoINTEL const*>(this);
    }
};
struct safe_VkPerformanceMarkerInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    uint64_t marker;

    safe_VkPerformanceMarkerInfoINTEL(const VkPerformanceMarkerInfoINTEL* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkPerformanceMarkerInfoINTEL(const safe_VkPerformanceMarkerInfoINTEL& copy_src);
    safe_VkPerformanceMarkerInfoINTEL& operator=(const safe_VkPerformanceMarkerInfoINTEL& copy_src);
    safe_VkPerformanceMarkerInfoINTEL();
    ~safe_VkPerformanceMarkerInfoINTEL();
    void initialize(const VkPerformanceMarkerInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceMarkerInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceMarkerInfoINTEL* ptr() { return reinterpret_cast<VkPerformanceMarkerInfoINTEL*>(this); }
    VkPerformanceMarkerInfoINTEL const* ptr() const { return reinterpret_cast<VkPerformanceMarkerInfoINTEL const*>(this); }
};
struct safe_VkPerformanceStreamMarkerInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    uint32_t marker;

    safe_VkPerformanceStreamMarkerInfoINTEL(const VkPerformanceStreamMarkerInfoINTEL* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkPerformanceStreamMarkerInfoINTEL(const safe_VkPerformanceStreamMarkerInfoINTEL& copy_src);
    safe_VkPerformanceStreamMarkerInfoINTEL& operator=(const safe_VkPerformanceStreamMarkerInfoINTEL& copy_src);
    safe_VkPerformanceStreamMarkerInfoINTEL();
    ~safe_VkPerformanceStreamMarkerInfoINTEL();
    void initialize(const VkPerformanceStreamMarkerInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceStreamMarkerInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceStreamMarkerInfoINTEL* ptr() { return reinterpret_cast<VkPerformanceStreamMarkerInfoINTEL*>(this); }
    VkPerformanceStreamMarkerInfoINTEL const* ptr() const {
        return reinterpret_cast<VkPerformanceStreamMarkerInfoINTEL const*>(this);
    }
};
struct safe_VkPerformanceOverrideInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    VkPerformanceOverrideTypeINTEL type;
    VkBool32 enable;
    uint64_t parameter;

    safe_VkPerformanceOverrideInfoINTEL(const VkPerformanceOverrideInfoINTEL* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkPerformanceOverrideInfoINTEL(const safe_VkPerformanceOverrideInfoINTEL& copy_src);
    safe_VkPerformanceOverrideInfoINTEL& operator=(const safe_VkPerformanceOverrideInfoINTEL& copy_src);
    safe_VkPerformanceOverrideInfoINTEL();
    ~safe_VkPerformanceOverrideInfoINTEL();
    void initialize(const VkPerformanceOverrideInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceOverrideInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceOverrideInfoINTEL* ptr() { return reinterpret_cast<VkPerformanceOverrideInfoINTEL*>(this); }
    VkPerformanceOverrideInfoINTEL const* ptr() const { return reinterpret_cast<VkPerformanceOverrideInfoINTEL const*>(this); }
};
struct safe_VkPerformanceConfigurationAcquireInfoINTEL {
    VkStructureType sType;
    const void* pNext{};
    VkPerformanceConfigurationTypeINTEL type;

    safe_VkPerformanceConfigurationAcquireInfoINTEL(const VkPerformanceConfigurationAcquireInfoINTEL* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPerformanceConfigurationAcquireInfoINTEL(const safe_VkPerformanceConfigurationAcquireInfoINTEL& copy_src);
    safe_VkPerformanceConfigurationAcquireInfoINTEL& operator=(const safe_VkPerformanceConfigurationAcquireInfoINTEL& copy_src);
    safe_VkPerformanceConfigurationAcquireInfoINTEL();
    ~safe_VkPerformanceConfigurationAcquireInfoINTEL();
    void initialize(const VkPerformanceConfigurationAcquireInfoINTEL* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPerformanceConfigurationAcquireInfoINTEL* copy_src, PNextCopyState* copy_state = {});
    VkPerformanceConfigurationAcquireInfoINTEL* ptr() {
        return reinterpret_cast<VkPerformanceConfigurationAcquireInfoINTEL*>(this);
    }
    VkPerformanceConfigurationAcquireInfoINTEL const* ptr() const {
        return reinterpret_cast<VkPerformanceConfigurationAcquireInfoINTEL const*>(this);
    }
};
struct safe_VkPhysicalDevicePCIBusInfoPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t pciDomain;
    uint32_t pciBus;
    uint32_t pciDevice;
    uint32_t pciFunction;

    safe_VkPhysicalDevicePCIBusInfoPropertiesEXT(const VkPhysicalDevicePCIBusInfoPropertiesEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDevicePCIBusInfoPropertiesEXT(const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& copy_src);
    safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& operator=(const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT& copy_src);
    safe_VkPhysicalDevicePCIBusInfoPropertiesEXT();
    ~safe_VkPhysicalDevicePCIBusInfoPropertiesEXT();
    void initialize(const VkPhysicalDevicePCIBusInfoPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDevicePCIBusInfoPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDevicePCIBusInfoPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT*>(this); }
    VkPhysicalDevicePCIBusInfoPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT const*>(this);
    }
};
struct safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD {
    VkStructureType sType;
    void* pNext{};
    VkBool32 localDimmingSupport;

    safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD(const VkDisplayNativeHdrSurfaceCapabilitiesAMD* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD(const safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD& copy_src);
    safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD& operator=(const safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD& copy_src);
    safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD();
    ~safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD();
    void initialize(const VkDisplayNativeHdrSurfaceCapabilitiesAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDisplayNativeHdrSurfaceCapabilitiesAMD* copy_src, PNextCopyState* copy_state = {});
    VkDisplayNativeHdrSurfaceCapabilitiesAMD* ptr() { return reinterpret_cast<VkDisplayNativeHdrSurfaceCapabilitiesAMD*>(this); }
    VkDisplayNativeHdrSurfaceCapabilitiesAMD const* ptr() const {
        return reinterpret_cast<VkDisplayNativeHdrSurfaceCapabilitiesAMD const*>(this);
    }
};
struct safe_VkSwapchainDisplayNativeHdrCreateInfoAMD {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 localDimmingEnable;

    safe_VkSwapchainDisplayNativeHdrCreateInfoAMD(const VkSwapchainDisplayNativeHdrCreateInfoAMD* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSwapchainDisplayNativeHdrCreateInfoAMD(const safe_VkSwapchainDisplayNativeHdrCreateInfoAMD& copy_src);
    safe_VkSwapchainDisplayNativeHdrCreateInfoAMD& operator=(const safe_VkSwapchainDisplayNativeHdrCreateInfoAMD& copy_src);
    safe_VkSwapchainDisplayNativeHdrCreateInfoAMD();
    ~safe_VkSwapchainDisplayNativeHdrCreateInfoAMD();
    void initialize(const VkSwapchainDisplayNativeHdrCreateInfoAMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainDisplayNativeHdrCreateInfoAMD* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainDisplayNativeHdrCreateInfoAMD* ptr() { return reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD*>(this); }
    VkSwapchainDisplayNativeHdrCreateInfoAMD const* ptr() const {
        return reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_FUCHSIA
struct safe_VkImagePipeSurfaceCreateInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkImagePipeSurfaceCreateFlagsFUCHSIA flags;
    zx_handle_t imagePipeHandle;

    safe_VkImagePipeSurfaceCreateInfoFUCHSIA(const VkImagePipeSurfaceCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkImagePipeSurfaceCreateInfoFUCHSIA(const safe_VkImagePipeSurfaceCreateInfoFUCHSIA& copy_src);
    safe_VkImagePipeSurfaceCreateInfoFUCHSIA& operator=(const safe_VkImagePipeSurfaceCreateInfoFUCHSIA& copy_src);
    safe_VkImagePipeSurfaceCreateInfoFUCHSIA();
    ~safe_VkImagePipeSurfaceCreateInfoFUCHSIA();
    void initialize(const VkImagePipeSurfaceCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImagePipeSurfaceCreateInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImagePipeSurfaceCreateInfoFUCHSIA* ptr() { return reinterpret_cast<VkImagePipeSurfaceCreateInfoFUCHSIA*>(this); }
    VkImagePipeSurfaceCreateInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkImagePipeSurfaceCreateInfoFUCHSIA const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_FUCHSIA
struct safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D minFragmentDensityTexelSize;
    VkExtent2D maxFragmentDensityTexelSize;
    VkBool32 fragmentDensityInvocations;

    safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT();
    ~safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT();
    void initialize(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentDensityMapPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT*>(this);
    }
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT const*>(this);
    }
};
struct safe_VkRenderPassFragmentDensityMapCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkAttachmentReference fragmentDensityMapAttachment;

    safe_VkRenderPassFragmentDensityMapCreateInfoEXT(const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassFragmentDensityMapCreateInfoEXT(const safe_VkRenderPassFragmentDensityMapCreateInfoEXT& copy_src);
    safe_VkRenderPassFragmentDensityMapCreateInfoEXT& operator=(const safe_VkRenderPassFragmentDensityMapCreateInfoEXT& copy_src);
    safe_VkRenderPassFragmentDensityMapCreateInfoEXT();
    ~safe_VkRenderPassFragmentDensityMapCreateInfoEXT();
    void initialize(const VkRenderPassFragmentDensityMapCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassFragmentDensityMapCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassFragmentDensityMapCreateInfoEXT* ptr() {
        return reinterpret_cast<VkRenderPassFragmentDensityMapCreateInfoEXT*>(this);
    }
    VkRenderPassFragmentDensityMapCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkRenderPassFragmentDensityMapCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderCoreProperties2AMD {
    VkStructureType sType;
    void* pNext{};
    VkShaderCorePropertiesFlagsAMD shaderCoreFeatures;
    uint32_t activeComputeUnitCount;

    safe_VkPhysicalDeviceShaderCoreProperties2AMD(const VkPhysicalDeviceShaderCoreProperties2AMD* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderCoreProperties2AMD(const safe_VkPhysicalDeviceShaderCoreProperties2AMD& copy_src);
    safe_VkPhysicalDeviceShaderCoreProperties2AMD& operator=(const safe_VkPhysicalDeviceShaderCoreProperties2AMD& copy_src);
    safe_VkPhysicalDeviceShaderCoreProperties2AMD();
    ~safe_VkPhysicalDeviceShaderCoreProperties2AMD();
    void initialize(const VkPhysicalDeviceShaderCoreProperties2AMD* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderCoreProperties2AMD* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderCoreProperties2AMD* ptr() { return reinterpret_cast<VkPhysicalDeviceShaderCoreProperties2AMD*>(this); }
    VkPhysicalDeviceShaderCoreProperties2AMD const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderCoreProperties2AMD const*>(this);
    }
};
struct safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize heapBudget[VK_MAX_MEMORY_HEAPS];
    VkDeviceSize heapUsage[VK_MAX_MEMORY_HEAPS];

    safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT(const VkPhysicalDeviceMemoryBudgetPropertiesEXT* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT(const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& operator=(const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT();
    ~safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT();
    void initialize(const VkPhysicalDeviceMemoryBudgetPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMemoryBudgetPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMemoryBudgetPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT*>(this); }
    VkPhysicalDeviceMemoryBudgetPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT const*>(this);
    }
};
struct safe_VkMemoryPriorityAllocateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    float priority;

    safe_VkMemoryPriorityAllocateInfoEXT(const VkMemoryPriorityAllocateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkMemoryPriorityAllocateInfoEXT(const safe_VkMemoryPriorityAllocateInfoEXT& copy_src);
    safe_VkMemoryPriorityAllocateInfoEXT& operator=(const safe_VkMemoryPriorityAllocateInfoEXT& copy_src);
    safe_VkMemoryPriorityAllocateInfoEXT();
    ~safe_VkMemoryPriorityAllocateInfoEXT();
    void initialize(const VkMemoryPriorityAllocateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryPriorityAllocateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMemoryPriorityAllocateInfoEXT* ptr() { return reinterpret_cast<VkMemoryPriorityAllocateInfoEXT*>(this); }
    VkMemoryPriorityAllocateInfoEXT const* ptr() const { return reinterpret_cast<VkMemoryPriorityAllocateInfoEXT const*>(this); }
};
struct safe_VkBufferDeviceAddressCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceAddress deviceAddress;

    safe_VkBufferDeviceAddressCreateInfoEXT(const VkBufferDeviceAddressCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkBufferDeviceAddressCreateInfoEXT(const safe_VkBufferDeviceAddressCreateInfoEXT& copy_src);
    safe_VkBufferDeviceAddressCreateInfoEXT& operator=(const safe_VkBufferDeviceAddressCreateInfoEXT& copy_src);
    safe_VkBufferDeviceAddressCreateInfoEXT();
    ~safe_VkBufferDeviceAddressCreateInfoEXT();
    void initialize(const VkBufferDeviceAddressCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferDeviceAddressCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkBufferDeviceAddressCreateInfoEXT* ptr() { return reinterpret_cast<VkBufferDeviceAddressCreateInfoEXT*>(this); }
    VkBufferDeviceAddressCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkBufferDeviceAddressCreateInfoEXT const*>(this);
    }
};
struct safe_VkValidationFeaturesEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t enabledValidationFeatureCount;
    const VkValidationFeatureEnableEXT* pEnabledValidationFeatures{};
    uint32_t disabledValidationFeatureCount;
    const VkValidationFeatureDisableEXT* pDisabledValidationFeatures{};

    safe_VkValidationFeaturesEXT(const VkValidationFeaturesEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkValidationFeaturesEXT(const safe_VkValidationFeaturesEXT& copy_src);
    safe_VkValidationFeaturesEXT& operator=(const safe_VkValidationFeaturesEXT& copy_src);
    safe_VkValidationFeaturesEXT();
    ~safe_VkValidationFeaturesEXT();
    void initialize(const VkValidationFeaturesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkValidationFeaturesEXT* copy_src, PNextCopyState* copy_state = {});
    VkValidationFeaturesEXT* ptr() { return reinterpret_cast<VkValidationFeaturesEXT*>(this); }
    VkValidationFeaturesEXT const* ptr() const { return reinterpret_cast<VkValidationFeaturesEXT const*>(this); }
};
struct safe_VkCooperativeMatrixPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t MSize;
    uint32_t NSize;
    uint32_t KSize;
    VkComponentTypeNV AType;
    VkComponentTypeNV BType;
    VkComponentTypeNV CType;
    VkComponentTypeNV DType;
    VkScopeNV scope;

    safe_VkCooperativeMatrixPropertiesNV(const VkCooperativeMatrixPropertiesNV* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkCooperativeMatrixPropertiesNV(const safe_VkCooperativeMatrixPropertiesNV& copy_src);
    safe_VkCooperativeMatrixPropertiesNV& operator=(const safe_VkCooperativeMatrixPropertiesNV& copy_src);
    safe_VkCooperativeMatrixPropertiesNV();
    ~safe_VkCooperativeMatrixPropertiesNV();
    void initialize(const VkCooperativeMatrixPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCooperativeMatrixPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkCooperativeMatrixPropertiesNV* ptr() { return reinterpret_cast<VkCooperativeMatrixPropertiesNV*>(this); }
    VkCooperativeMatrixPropertiesNV const* ptr() const { return reinterpret_cast<VkCooperativeMatrixPropertiesNV const*>(this); }
};
struct safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkShaderStageFlags cooperativeMatrixSupportedStages;

    safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV(const VkPhysicalDeviceCooperativeMatrixPropertiesNV* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV(const safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV& operator=(
        const safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV();
    ~safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV();
    void initialize(const VkPhysicalDeviceCooperativeMatrixPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceCooperativeMatrixPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceCooperativeMatrixPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesNV*>(this);
    }
    VkPhysicalDeviceCooperativeMatrixPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesNV const*>(this);
    }
};
struct safe_VkPipelineCoverageReductionStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCoverageReductionStateCreateFlagsNV flags;
    VkCoverageReductionModeNV coverageReductionMode;

    safe_VkPipelineCoverageReductionStateCreateInfoNV(const VkPipelineCoverageReductionStateCreateInfoNV* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineCoverageReductionStateCreateInfoNV(const safe_VkPipelineCoverageReductionStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageReductionStateCreateInfoNV& operator=(const safe_VkPipelineCoverageReductionStateCreateInfoNV& copy_src);
    safe_VkPipelineCoverageReductionStateCreateInfoNV();
    ~safe_VkPipelineCoverageReductionStateCreateInfoNV();
    void initialize(const VkPipelineCoverageReductionStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineCoverageReductionStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineCoverageReductionStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineCoverageReductionStateCreateInfoNV*>(this);
    }
    VkPipelineCoverageReductionStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineCoverageReductionStateCreateInfoNV const*>(this);
    }
};
struct safe_VkFramebufferMixedSamplesCombinationNV {
    VkStructureType sType;
    void* pNext{};
    VkCoverageReductionModeNV coverageReductionMode;
    VkSampleCountFlagBits rasterizationSamples;
    VkSampleCountFlags depthStencilSamples;
    VkSampleCountFlags colorSamples;

    safe_VkFramebufferMixedSamplesCombinationNV(const VkFramebufferMixedSamplesCombinationNV* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFramebufferMixedSamplesCombinationNV(const safe_VkFramebufferMixedSamplesCombinationNV& copy_src);
    safe_VkFramebufferMixedSamplesCombinationNV& operator=(const safe_VkFramebufferMixedSamplesCombinationNV& copy_src);
    safe_VkFramebufferMixedSamplesCombinationNV();
    ~safe_VkFramebufferMixedSamplesCombinationNV();
    void initialize(const VkFramebufferMixedSamplesCombinationNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFramebufferMixedSamplesCombinationNV* copy_src, PNextCopyState* copy_state = {});
    VkFramebufferMixedSamplesCombinationNV* ptr() { return reinterpret_cast<VkFramebufferMixedSamplesCombinationNV*>(this); }
    VkFramebufferMixedSamplesCombinationNV const* ptr() const {
        return reinterpret_cast<VkFramebufferMixedSamplesCombinationNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceProvokingVertexPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 provokingVertexModePerPipeline;
    VkBool32 transformFeedbackPreservesTriangleFanProvokingVertex;

    safe_VkPhysicalDeviceProvokingVertexPropertiesEXT(const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceProvokingVertexPropertiesEXT(const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& operator=(const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceProvokingVertexPropertiesEXT();
    ~safe_VkPhysicalDeviceProvokingVertexPropertiesEXT();
    void initialize(const VkPhysicalDeviceProvokingVertexPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceProvokingVertexPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceProvokingVertexPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceProvokingVertexPropertiesEXT*>(this);
    }
    VkPhysicalDeviceProvokingVertexPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceProvokingVertexPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkProvokingVertexModeEXT provokingVertexMode;

    safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(
        const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(
        const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& operator=(
        const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& copy_src);
    safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT();
    ~safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT();
    void initialize(const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT*>(this);
    }
    VkPipelineRasterizationProvokingVertexStateCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkSurfaceFullScreenExclusiveInfoEXT {
    VkStructureType sType;
    void* pNext{};
    VkFullScreenExclusiveEXT fullScreenExclusive;

    safe_VkSurfaceFullScreenExclusiveInfoEXT(const VkSurfaceFullScreenExclusiveInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkSurfaceFullScreenExclusiveInfoEXT(const safe_VkSurfaceFullScreenExclusiveInfoEXT& copy_src);
    safe_VkSurfaceFullScreenExclusiveInfoEXT& operator=(const safe_VkSurfaceFullScreenExclusiveInfoEXT& copy_src);
    safe_VkSurfaceFullScreenExclusiveInfoEXT();
    ~safe_VkSurfaceFullScreenExclusiveInfoEXT();
    void initialize(const VkSurfaceFullScreenExclusiveInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceFullScreenExclusiveInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceFullScreenExclusiveInfoEXT* ptr() { return reinterpret_cast<VkSurfaceFullScreenExclusiveInfoEXT*>(this); }
    VkSurfaceFullScreenExclusiveInfoEXT const* ptr() const {
        return reinterpret_cast<VkSurfaceFullScreenExclusiveInfoEXT const*>(this);
    }
};
struct safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 fullScreenExclusiveSupported;

    safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT(const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT(const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& copy_src);
    safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& operator=(const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT& copy_src);
    safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT();
    ~safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT();
    void initialize(const VkSurfaceCapabilitiesFullScreenExclusiveEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceCapabilitiesFullScreenExclusiveEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceCapabilitiesFullScreenExclusiveEXT* ptr() {
        return reinterpret_cast<VkSurfaceCapabilitiesFullScreenExclusiveEXT*>(this);
    }
    VkSurfaceCapabilitiesFullScreenExclusiveEXT const* ptr() const {
        return reinterpret_cast<VkSurfaceCapabilitiesFullScreenExclusiveEXT const*>(this);
    }
};
struct safe_VkSurfaceFullScreenExclusiveWin32InfoEXT {
    VkStructureType sType;
    const void* pNext{};
    HMONITOR hmonitor;

    safe_VkSurfaceFullScreenExclusiveWin32InfoEXT(const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfaceFullScreenExclusiveWin32InfoEXT(const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& copy_src);
    safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& operator=(const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT& copy_src);
    safe_VkSurfaceFullScreenExclusiveWin32InfoEXT();
    ~safe_VkSurfaceFullScreenExclusiveWin32InfoEXT();
    void initialize(const VkSurfaceFullScreenExclusiveWin32InfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceFullScreenExclusiveWin32InfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceFullScreenExclusiveWin32InfoEXT* ptr() { return reinterpret_cast<VkSurfaceFullScreenExclusiveWin32InfoEXT*>(this); }
    VkSurfaceFullScreenExclusiveWin32InfoEXT const* ptr() const {
        return reinterpret_cast<VkSurfaceFullScreenExclusiveWin32InfoEXT const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_WIN32_KHR
struct safe_VkHeadlessSurfaceCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkHeadlessSurfaceCreateFlagsEXT flags;

    safe_VkHeadlessSurfaceCreateInfoEXT(const VkHeadlessSurfaceCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkHeadlessSurfaceCreateInfoEXT(const safe_VkHeadlessSurfaceCreateInfoEXT& copy_src);
    safe_VkHeadlessSurfaceCreateInfoEXT& operator=(const safe_VkHeadlessSurfaceCreateInfoEXT& copy_src);
    safe_VkHeadlessSurfaceCreateInfoEXT();
    ~safe_VkHeadlessSurfaceCreateInfoEXT();
    void initialize(const VkHeadlessSurfaceCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkHeadlessSurfaceCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkHeadlessSurfaceCreateInfoEXT* ptr() { return reinterpret_cast<VkHeadlessSurfaceCreateInfoEXT*>(this); }
    VkHeadlessSurfaceCreateInfoEXT const* ptr() const { return reinterpret_cast<VkHeadlessSurfaceCreateInfoEXT const*>(this); }
};
struct safe_VkPhysicalDeviceHostImageCopyPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t copySrcLayoutCount;
    VkImageLayout* pCopySrcLayouts{};
    uint32_t copyDstLayoutCount;
    VkImageLayout* pCopyDstLayouts{};
    uint8_t optimalTilingLayoutUUID[VK_UUID_SIZE];
    VkBool32 identicalMemoryTypeRequirements;

    safe_VkPhysicalDeviceHostImageCopyPropertiesEXT(const VkPhysicalDeviceHostImageCopyPropertiesEXT* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceHostImageCopyPropertiesEXT(const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& operator=(const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceHostImageCopyPropertiesEXT();
    ~safe_VkPhysicalDeviceHostImageCopyPropertiesEXT();
    void initialize(const VkPhysicalDeviceHostImageCopyPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceHostImageCopyPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceHostImageCopyPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceHostImageCopyPropertiesEXT*>(this);
    }
    VkPhysicalDeviceHostImageCopyPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceHostImageCopyPropertiesEXT const*>(this);
    }
};
struct safe_VkMemoryToImageCopyEXT {
    VkStructureType sType;
    const void* pNext{};
    const void* pHostPointer{};
    uint32_t memoryRowLength;
    uint32_t memoryImageHeight;
    VkImageSubresourceLayers imageSubresource;
    VkOffset3D imageOffset;
    VkExtent3D imageExtent;

    safe_VkMemoryToImageCopyEXT(const VkMemoryToImageCopyEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryToImageCopyEXT(const safe_VkMemoryToImageCopyEXT& copy_src);
    safe_VkMemoryToImageCopyEXT& operator=(const safe_VkMemoryToImageCopyEXT& copy_src);
    safe_VkMemoryToImageCopyEXT();
    ~safe_VkMemoryToImageCopyEXT();
    void initialize(const VkMemoryToImageCopyEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryToImageCopyEXT* copy_src, PNextCopyState* copy_state = {});
    VkMemoryToImageCopyEXT* ptr() { return reinterpret_cast<VkMemoryToImageCopyEXT*>(this); }
    VkMemoryToImageCopyEXT const* ptr() const { return reinterpret_cast<VkMemoryToImageCopyEXT const*>(this); }
};
struct safe_VkImageToMemoryCopyEXT {
    VkStructureType sType;
    const void* pNext{};
    void* pHostPointer{};
    uint32_t memoryRowLength;
    uint32_t memoryImageHeight;
    VkImageSubresourceLayers imageSubresource;
    VkOffset3D imageOffset;
    VkExtent3D imageExtent;

    safe_VkImageToMemoryCopyEXT(const VkImageToMemoryCopyEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageToMemoryCopyEXT(const safe_VkImageToMemoryCopyEXT& copy_src);
    safe_VkImageToMemoryCopyEXT& operator=(const safe_VkImageToMemoryCopyEXT& copy_src);
    safe_VkImageToMemoryCopyEXT();
    ~safe_VkImageToMemoryCopyEXT();
    void initialize(const VkImageToMemoryCopyEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageToMemoryCopyEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageToMemoryCopyEXT* ptr() { return reinterpret_cast<VkImageToMemoryCopyEXT*>(this); }
    VkImageToMemoryCopyEXT const* ptr() const { return reinterpret_cast<VkImageToMemoryCopyEXT const*>(this); }
};
struct safe_VkCopyMemoryToImageInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkHostImageCopyFlagsEXT flags;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkMemoryToImageCopyEXT* pRegions{};

    safe_VkCopyMemoryToImageInfoEXT(const VkCopyMemoryToImageInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkCopyMemoryToImageInfoEXT(const safe_VkCopyMemoryToImageInfoEXT& copy_src);
    safe_VkCopyMemoryToImageInfoEXT& operator=(const safe_VkCopyMemoryToImageInfoEXT& copy_src);
    safe_VkCopyMemoryToImageInfoEXT();
    ~safe_VkCopyMemoryToImageInfoEXT();
    void initialize(const VkCopyMemoryToImageInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyMemoryToImageInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyMemoryToImageInfoEXT* ptr() { return reinterpret_cast<VkCopyMemoryToImageInfoEXT*>(this); }
    VkCopyMemoryToImageInfoEXT const* ptr() const { return reinterpret_cast<VkCopyMemoryToImageInfoEXT const*>(this); }
};
struct safe_VkCopyImageToMemoryInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkHostImageCopyFlagsEXT flags;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    uint32_t regionCount;
    safe_VkImageToMemoryCopyEXT* pRegions{};

    safe_VkCopyImageToMemoryInfoEXT(const VkCopyImageToMemoryInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkCopyImageToMemoryInfoEXT(const safe_VkCopyImageToMemoryInfoEXT& copy_src);
    safe_VkCopyImageToMemoryInfoEXT& operator=(const safe_VkCopyImageToMemoryInfoEXT& copy_src);
    safe_VkCopyImageToMemoryInfoEXT();
    ~safe_VkCopyImageToMemoryInfoEXT();
    void initialize(const VkCopyImageToMemoryInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyImageToMemoryInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyImageToMemoryInfoEXT* ptr() { return reinterpret_cast<VkCopyImageToMemoryInfoEXT*>(this); }
    VkCopyImageToMemoryInfoEXT const* ptr() const { return reinterpret_cast<VkCopyImageToMemoryInfoEXT const*>(this); }
};
struct safe_VkCopyImageToImageInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkHostImageCopyFlagsEXT flags;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    safe_VkImageCopy2* pRegions{};

    safe_VkCopyImageToImageInfoEXT(const VkCopyImageToImageInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkCopyImageToImageInfoEXT(const safe_VkCopyImageToImageInfoEXT& copy_src);
    safe_VkCopyImageToImageInfoEXT& operator=(const safe_VkCopyImageToImageInfoEXT& copy_src);
    safe_VkCopyImageToImageInfoEXT();
    ~safe_VkCopyImageToImageInfoEXT();
    void initialize(const VkCopyImageToImageInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyImageToImageInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyImageToImageInfoEXT* ptr() { return reinterpret_cast<VkCopyImageToImageInfoEXT*>(this); }
    VkCopyImageToImageInfoEXT const* ptr() const { return reinterpret_cast<VkCopyImageToImageInfoEXT const*>(this); }
};
struct safe_VkHostImageLayoutTransitionInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    VkImageSubresourceRange subresourceRange;

    safe_VkHostImageLayoutTransitionInfoEXT(const VkHostImageLayoutTransitionInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkHostImageLayoutTransitionInfoEXT(const safe_VkHostImageLayoutTransitionInfoEXT& copy_src);
    safe_VkHostImageLayoutTransitionInfoEXT& operator=(const safe_VkHostImageLayoutTransitionInfoEXT& copy_src);
    safe_VkHostImageLayoutTransitionInfoEXT();
    ~safe_VkHostImageLayoutTransitionInfoEXT();
    void initialize(const VkHostImageLayoutTransitionInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkHostImageLayoutTransitionInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkHostImageLayoutTransitionInfoEXT* ptr() { return reinterpret_cast<VkHostImageLayoutTransitionInfoEXT*>(this); }
    VkHostImageLayoutTransitionInfoEXT const* ptr() const {
        return reinterpret_cast<VkHostImageLayoutTransitionInfoEXT const*>(this);
    }
};
struct safe_VkSubresourceHostMemcpySizeEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize size;

    safe_VkSubresourceHostMemcpySizeEXT(const VkSubresourceHostMemcpySizeEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkSubresourceHostMemcpySizeEXT(const safe_VkSubresourceHostMemcpySizeEXT& copy_src);
    safe_VkSubresourceHostMemcpySizeEXT& operator=(const safe_VkSubresourceHostMemcpySizeEXT& copy_src);
    safe_VkSubresourceHostMemcpySizeEXT();
    ~safe_VkSubresourceHostMemcpySizeEXT();
    void initialize(const VkSubresourceHostMemcpySizeEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubresourceHostMemcpySizeEXT* copy_src, PNextCopyState* copy_state = {});
    VkSubresourceHostMemcpySizeEXT* ptr() { return reinterpret_cast<VkSubresourceHostMemcpySizeEXT*>(this); }
    VkSubresourceHostMemcpySizeEXT const* ptr() const { return reinterpret_cast<VkSubresourceHostMemcpySizeEXT const*>(this); }
};
struct safe_VkHostImageCopyDevicePerformanceQueryEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 optimalDeviceAccess;
    VkBool32 identicalMemoryLayout;

    safe_VkHostImageCopyDevicePerformanceQueryEXT(const VkHostImageCopyDevicePerformanceQueryEXT* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkHostImageCopyDevicePerformanceQueryEXT(const safe_VkHostImageCopyDevicePerformanceQueryEXT& copy_src);
    safe_VkHostImageCopyDevicePerformanceQueryEXT& operator=(const safe_VkHostImageCopyDevicePerformanceQueryEXT& copy_src);
    safe_VkHostImageCopyDevicePerformanceQueryEXT();
    ~safe_VkHostImageCopyDevicePerformanceQueryEXT();
    void initialize(const VkHostImageCopyDevicePerformanceQueryEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkHostImageCopyDevicePerformanceQueryEXT* copy_src, PNextCopyState* copy_state = {});
    VkHostImageCopyDevicePerformanceQueryEXT* ptr() { return reinterpret_cast<VkHostImageCopyDevicePerformanceQueryEXT*>(this); }
    VkHostImageCopyDevicePerformanceQueryEXT const* ptr() const {
        return reinterpret_cast<VkHostImageCopyDevicePerformanceQueryEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize minPlacedMemoryMapAlignment;

    safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& operator=(const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT();
    ~safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT();
    void initialize(const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMapMemoryPlacedPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedPropertiesEXT*>(this);
    }
    VkPhysicalDeviceMapMemoryPlacedPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedPropertiesEXT const*>(this);
    }
};
struct safe_VkMemoryMapPlacedInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    void* pPlacedAddress{};

    safe_VkMemoryMapPlacedInfoEXT(const VkMemoryMapPlacedInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkMemoryMapPlacedInfoEXT(const safe_VkMemoryMapPlacedInfoEXT& copy_src);
    safe_VkMemoryMapPlacedInfoEXT& operator=(const safe_VkMemoryMapPlacedInfoEXT& copy_src);
    safe_VkMemoryMapPlacedInfoEXT();
    ~safe_VkMemoryMapPlacedInfoEXT();
    void initialize(const VkMemoryMapPlacedInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryMapPlacedInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMemoryMapPlacedInfoEXT* ptr() { return reinterpret_cast<VkMemoryMapPlacedInfoEXT*>(this); }
    VkMemoryMapPlacedInfoEXT const* ptr() const { return reinterpret_cast<VkMemoryMapPlacedInfoEXT const*>(this); }
};
struct safe_VkSurfacePresentModeEXT {
    VkStructureType sType;
    void* pNext{};
    VkPresentModeKHR presentMode;

    safe_VkSurfacePresentModeEXT(const VkSurfacePresentModeEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfacePresentModeEXT(const safe_VkSurfacePresentModeEXT& copy_src);
    safe_VkSurfacePresentModeEXT& operator=(const safe_VkSurfacePresentModeEXT& copy_src);
    safe_VkSurfacePresentModeEXT();
    ~safe_VkSurfacePresentModeEXT();
    void initialize(const VkSurfacePresentModeEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfacePresentModeEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfacePresentModeEXT* ptr() { return reinterpret_cast<VkSurfacePresentModeEXT*>(this); }
    VkSurfacePresentModeEXT const* ptr() const { return reinterpret_cast<VkSurfacePresentModeEXT const*>(this); }
};
struct safe_VkSurfacePresentScalingCapabilitiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkPresentScalingFlagsEXT supportedPresentScaling;
    VkPresentGravityFlagsEXT supportedPresentGravityX;
    VkPresentGravityFlagsEXT supportedPresentGravityY;
    VkExtent2D minScaledImageExtent;
    VkExtent2D maxScaledImageExtent;

    safe_VkSurfacePresentScalingCapabilitiesEXT(const VkSurfacePresentScalingCapabilitiesEXT* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfacePresentScalingCapabilitiesEXT(const safe_VkSurfacePresentScalingCapabilitiesEXT& copy_src);
    safe_VkSurfacePresentScalingCapabilitiesEXT& operator=(const safe_VkSurfacePresentScalingCapabilitiesEXT& copy_src);
    safe_VkSurfacePresentScalingCapabilitiesEXT();
    ~safe_VkSurfacePresentScalingCapabilitiesEXT();
    void initialize(const VkSurfacePresentScalingCapabilitiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfacePresentScalingCapabilitiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfacePresentScalingCapabilitiesEXT* ptr() { return reinterpret_cast<VkSurfacePresentScalingCapabilitiesEXT*>(this); }
    VkSurfacePresentScalingCapabilitiesEXT const* ptr() const {
        return reinterpret_cast<VkSurfacePresentScalingCapabilitiesEXT const*>(this);
    }
};
struct safe_VkSurfacePresentModeCompatibilityEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t presentModeCount;
    VkPresentModeKHR* pPresentModes{};

    safe_VkSurfacePresentModeCompatibilityEXT(const VkSurfacePresentModeCompatibilityEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfacePresentModeCompatibilityEXT(const safe_VkSurfacePresentModeCompatibilityEXT& copy_src);
    safe_VkSurfacePresentModeCompatibilityEXT& operator=(const safe_VkSurfacePresentModeCompatibilityEXT& copy_src);
    safe_VkSurfacePresentModeCompatibilityEXT();
    ~safe_VkSurfacePresentModeCompatibilityEXT();
    void initialize(const VkSurfacePresentModeCompatibilityEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfacePresentModeCompatibilityEXT* copy_src, PNextCopyState* copy_state = {});
    VkSurfacePresentModeCompatibilityEXT* ptr() { return reinterpret_cast<VkSurfacePresentModeCompatibilityEXT*>(this); }
    VkSurfacePresentModeCompatibilityEXT const* ptr() const {
        return reinterpret_cast<VkSurfacePresentModeCompatibilityEXT const*>(this);
    }
};
struct safe_VkSwapchainPresentFenceInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    VkFence* pFences{};

    safe_VkSwapchainPresentFenceInfoEXT(const VkSwapchainPresentFenceInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkSwapchainPresentFenceInfoEXT(const safe_VkSwapchainPresentFenceInfoEXT& copy_src);
    safe_VkSwapchainPresentFenceInfoEXT& operator=(const safe_VkSwapchainPresentFenceInfoEXT& copy_src);
    safe_VkSwapchainPresentFenceInfoEXT();
    ~safe_VkSwapchainPresentFenceInfoEXT();
    void initialize(const VkSwapchainPresentFenceInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainPresentFenceInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainPresentFenceInfoEXT* ptr() { return reinterpret_cast<VkSwapchainPresentFenceInfoEXT*>(this); }
    VkSwapchainPresentFenceInfoEXT const* ptr() const { return reinterpret_cast<VkSwapchainPresentFenceInfoEXT const*>(this); }
};
struct safe_VkSwapchainPresentModesCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t presentModeCount;
    const VkPresentModeKHR* pPresentModes{};

    safe_VkSwapchainPresentModesCreateInfoEXT(const VkSwapchainPresentModesCreateInfoEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSwapchainPresentModesCreateInfoEXT(const safe_VkSwapchainPresentModesCreateInfoEXT& copy_src);
    safe_VkSwapchainPresentModesCreateInfoEXT& operator=(const safe_VkSwapchainPresentModesCreateInfoEXT& copy_src);
    safe_VkSwapchainPresentModesCreateInfoEXT();
    ~safe_VkSwapchainPresentModesCreateInfoEXT();
    void initialize(const VkSwapchainPresentModesCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainPresentModesCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainPresentModesCreateInfoEXT* ptr() { return reinterpret_cast<VkSwapchainPresentModesCreateInfoEXT*>(this); }
    VkSwapchainPresentModesCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkSwapchainPresentModesCreateInfoEXT const*>(this);
    }
};
struct safe_VkSwapchainPresentModeInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t swapchainCount;
    const VkPresentModeKHR* pPresentModes{};

    safe_VkSwapchainPresentModeInfoEXT(const VkSwapchainPresentModeInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkSwapchainPresentModeInfoEXT(const safe_VkSwapchainPresentModeInfoEXT& copy_src);
    safe_VkSwapchainPresentModeInfoEXT& operator=(const safe_VkSwapchainPresentModeInfoEXT& copy_src);
    safe_VkSwapchainPresentModeInfoEXT();
    ~safe_VkSwapchainPresentModeInfoEXT();
    void initialize(const VkSwapchainPresentModeInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainPresentModeInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainPresentModeInfoEXT* ptr() { return reinterpret_cast<VkSwapchainPresentModeInfoEXT*>(this); }
    VkSwapchainPresentModeInfoEXT const* ptr() const { return reinterpret_cast<VkSwapchainPresentModeInfoEXT const*>(this); }
};
struct safe_VkSwapchainPresentScalingCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkPresentScalingFlagsEXT scalingBehavior;
    VkPresentGravityFlagsEXT presentGravityX;
    VkPresentGravityFlagsEXT presentGravityY;

    safe_VkSwapchainPresentScalingCreateInfoEXT(const VkSwapchainPresentScalingCreateInfoEXT* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSwapchainPresentScalingCreateInfoEXT(const safe_VkSwapchainPresentScalingCreateInfoEXT& copy_src);
    safe_VkSwapchainPresentScalingCreateInfoEXT& operator=(const safe_VkSwapchainPresentScalingCreateInfoEXT& copy_src);
    safe_VkSwapchainPresentScalingCreateInfoEXT();
    ~safe_VkSwapchainPresentScalingCreateInfoEXT();
    void initialize(const VkSwapchainPresentScalingCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainPresentScalingCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainPresentScalingCreateInfoEXT* ptr() { return reinterpret_cast<VkSwapchainPresentScalingCreateInfoEXT*>(this); }
    VkSwapchainPresentScalingCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkSwapchainPresentScalingCreateInfoEXT const*>(this);
    }
};
struct safe_VkReleaseSwapchainImagesInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkSwapchainKHR swapchain;
    uint32_t imageIndexCount;
    const uint32_t* pImageIndices{};

    safe_VkReleaseSwapchainImagesInfoEXT(const VkReleaseSwapchainImagesInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkReleaseSwapchainImagesInfoEXT(const safe_VkReleaseSwapchainImagesInfoEXT& copy_src);
    safe_VkReleaseSwapchainImagesInfoEXT& operator=(const safe_VkReleaseSwapchainImagesInfoEXT& copy_src);
    safe_VkReleaseSwapchainImagesInfoEXT();
    ~safe_VkReleaseSwapchainImagesInfoEXT();
    void initialize(const VkReleaseSwapchainImagesInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkReleaseSwapchainImagesInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkReleaseSwapchainImagesInfoEXT* ptr() { return reinterpret_cast<VkReleaseSwapchainImagesInfoEXT*>(this); }
    VkReleaseSwapchainImagesInfoEXT const* ptr() const { return reinterpret_cast<VkReleaseSwapchainImagesInfoEXT const*>(this); }
};
struct safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxGraphicsShaderGroupCount;
    uint32_t maxIndirectSequenceCount;
    uint32_t maxIndirectCommandsTokenCount;
    uint32_t maxIndirectCommandsStreamCount;
    uint32_t maxIndirectCommandsTokenOffset;
    uint32_t maxIndirectCommandsStreamStride;
    uint32_t minSequencesCountBufferOffsetAlignment;
    uint32_t minSequencesIndexBufferOffsetAlignment;
    uint32_t minIndirectCommandsBufferOffsetAlignment;

    safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
        const safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& operator=(
        const safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV();
    ~safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV();
    void initialize(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*>(this);
    }
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV const*>(this);
    }
};
struct safe_VkGraphicsShaderGroupCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages{};
    safe_VkPipelineVertexInputStateCreateInfo* pVertexInputState{};
    safe_VkPipelineTessellationStateCreateInfo* pTessellationState{};

    safe_VkGraphicsShaderGroupCreateInfoNV(const VkGraphicsShaderGroupCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkGraphicsShaderGroupCreateInfoNV(const safe_VkGraphicsShaderGroupCreateInfoNV& copy_src);
    safe_VkGraphicsShaderGroupCreateInfoNV& operator=(const safe_VkGraphicsShaderGroupCreateInfoNV& copy_src);
    safe_VkGraphicsShaderGroupCreateInfoNV();
    ~safe_VkGraphicsShaderGroupCreateInfoNV();
    void initialize(const VkGraphicsShaderGroupCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGraphicsShaderGroupCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkGraphicsShaderGroupCreateInfoNV* ptr() { return reinterpret_cast<VkGraphicsShaderGroupCreateInfoNV*>(this); }
    VkGraphicsShaderGroupCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkGraphicsShaderGroupCreateInfoNV const*>(this);
    }
};
struct safe_VkGraphicsPipelineShaderGroupsCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t groupCount;
    safe_VkGraphicsShaderGroupCreateInfoNV* pGroups{};
    uint32_t pipelineCount;
    VkPipeline* pPipelines{};

    safe_VkGraphicsPipelineShaderGroupsCreateInfoNV(const VkGraphicsPipelineShaderGroupsCreateInfoNV* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGraphicsPipelineShaderGroupsCreateInfoNV(const safe_VkGraphicsPipelineShaderGroupsCreateInfoNV& copy_src);
    safe_VkGraphicsPipelineShaderGroupsCreateInfoNV& operator=(const safe_VkGraphicsPipelineShaderGroupsCreateInfoNV& copy_src);
    safe_VkGraphicsPipelineShaderGroupsCreateInfoNV();
    ~safe_VkGraphicsPipelineShaderGroupsCreateInfoNV();
    void initialize(const VkGraphicsPipelineShaderGroupsCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGraphicsPipelineShaderGroupsCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkGraphicsPipelineShaderGroupsCreateInfoNV* ptr() {
        return reinterpret_cast<VkGraphicsPipelineShaderGroupsCreateInfoNV*>(this);
    }
    VkGraphicsPipelineShaderGroupsCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkGraphicsPipelineShaderGroupsCreateInfoNV const*>(this);
    }
};
struct safe_VkIndirectCommandsLayoutTokenNV {
    VkStructureType sType;
    const void* pNext{};
    VkIndirectCommandsTokenTypeNV tokenType;
    uint32_t stream;
    uint32_t offset;
    uint32_t vertexBindingUnit;
    VkBool32 vertexDynamicStride;
    VkPipelineLayout pushconstantPipelineLayout;
    VkShaderStageFlags pushconstantShaderStageFlags;
    uint32_t pushconstantOffset;
    uint32_t pushconstantSize;
    VkIndirectStateFlagsNV indirectStateFlags;
    uint32_t indexTypeCount;
    const VkIndexType* pIndexTypes{};
    const uint32_t* pIndexTypeValues{};

    safe_VkIndirectCommandsLayoutTokenNV(const VkIndirectCommandsLayoutTokenNV* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkIndirectCommandsLayoutTokenNV(const safe_VkIndirectCommandsLayoutTokenNV& copy_src);
    safe_VkIndirectCommandsLayoutTokenNV& operator=(const safe_VkIndirectCommandsLayoutTokenNV& copy_src);
    safe_VkIndirectCommandsLayoutTokenNV();
    ~safe_VkIndirectCommandsLayoutTokenNV();
    void initialize(const VkIndirectCommandsLayoutTokenNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkIndirectCommandsLayoutTokenNV* copy_src, PNextCopyState* copy_state = {});
    VkIndirectCommandsLayoutTokenNV* ptr() { return reinterpret_cast<VkIndirectCommandsLayoutTokenNV*>(this); }
    VkIndirectCommandsLayoutTokenNV const* ptr() const { return reinterpret_cast<VkIndirectCommandsLayoutTokenNV const*>(this); }
};
struct safe_VkIndirectCommandsLayoutCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkIndirectCommandsLayoutUsageFlagsNV flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t tokenCount;
    safe_VkIndirectCommandsLayoutTokenNV* pTokens{};
    uint32_t streamCount;
    const uint32_t* pStreamStrides{};

    safe_VkIndirectCommandsLayoutCreateInfoNV(const VkIndirectCommandsLayoutCreateInfoNV* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkIndirectCommandsLayoutCreateInfoNV(const safe_VkIndirectCommandsLayoutCreateInfoNV& copy_src);
    safe_VkIndirectCommandsLayoutCreateInfoNV& operator=(const safe_VkIndirectCommandsLayoutCreateInfoNV& copy_src);
    safe_VkIndirectCommandsLayoutCreateInfoNV();
    ~safe_VkIndirectCommandsLayoutCreateInfoNV();
    void initialize(const VkIndirectCommandsLayoutCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkIndirectCommandsLayoutCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkIndirectCommandsLayoutCreateInfoNV* ptr() { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNV*>(this); }
    VkIndirectCommandsLayoutCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNV const*>(this);
    }
};
struct safe_VkGeneratedCommandsInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
    VkIndirectCommandsLayoutNV indirectCommandsLayout;
    uint32_t streamCount;
    VkIndirectCommandsStreamNV* pStreams{};
    uint32_t sequencesCount;
    VkBuffer preprocessBuffer;
    VkDeviceSize preprocessOffset;
    VkDeviceSize preprocessSize;
    VkBuffer sequencesCountBuffer;
    VkDeviceSize sequencesCountOffset;
    VkBuffer sequencesIndexBuffer;
    VkDeviceSize sequencesIndexOffset;

    safe_VkGeneratedCommandsInfoNV(const VkGeneratedCommandsInfoNV* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkGeneratedCommandsInfoNV(const safe_VkGeneratedCommandsInfoNV& copy_src);
    safe_VkGeneratedCommandsInfoNV& operator=(const safe_VkGeneratedCommandsInfoNV& copy_src);
    safe_VkGeneratedCommandsInfoNV();
    ~safe_VkGeneratedCommandsInfoNV();
    void initialize(const VkGeneratedCommandsInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGeneratedCommandsInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkGeneratedCommandsInfoNV* ptr() { return reinterpret_cast<VkGeneratedCommandsInfoNV*>(this); }
    VkGeneratedCommandsInfoNV const* ptr() const { return reinterpret_cast<VkGeneratedCommandsInfoNV const*>(this); }
};
struct safe_VkGeneratedCommandsMemoryRequirementsInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
    VkIndirectCommandsLayoutNV indirectCommandsLayout;
    uint32_t maxSequencesCount;

    safe_VkGeneratedCommandsMemoryRequirementsInfoNV(const VkGeneratedCommandsMemoryRequirementsInfoNV* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGeneratedCommandsMemoryRequirementsInfoNV(const safe_VkGeneratedCommandsMemoryRequirementsInfoNV& copy_src);
    safe_VkGeneratedCommandsMemoryRequirementsInfoNV& operator=(const safe_VkGeneratedCommandsMemoryRequirementsInfoNV& copy_src);
    safe_VkGeneratedCommandsMemoryRequirementsInfoNV();
    ~safe_VkGeneratedCommandsMemoryRequirementsInfoNV();
    void initialize(const VkGeneratedCommandsMemoryRequirementsInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGeneratedCommandsMemoryRequirementsInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkGeneratedCommandsMemoryRequirementsInfoNV* ptr() {
        return reinterpret_cast<VkGeneratedCommandsMemoryRequirementsInfoNV*>(this);
    }
    VkGeneratedCommandsMemoryRequirementsInfoNV const* ptr() const {
        return reinterpret_cast<VkGeneratedCommandsMemoryRequirementsInfoNV const*>(this);
    }
};
struct safe_VkCommandBufferInheritanceViewportScissorInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 viewportScissor2D;
    uint32_t viewportDepthCount;
    const VkViewport* pViewportDepths{};

    safe_VkCommandBufferInheritanceViewportScissorInfoNV(const VkCommandBufferInheritanceViewportScissorInfoNV* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCommandBufferInheritanceViewportScissorInfoNV(const safe_VkCommandBufferInheritanceViewportScissorInfoNV& copy_src);
    safe_VkCommandBufferInheritanceViewportScissorInfoNV& operator=(
        const safe_VkCommandBufferInheritanceViewportScissorInfoNV& copy_src);
    safe_VkCommandBufferInheritanceViewportScissorInfoNV();
    ~safe_VkCommandBufferInheritanceViewportScissorInfoNV();
    void initialize(const VkCommandBufferInheritanceViewportScissorInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferInheritanceViewportScissorInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferInheritanceViewportScissorInfoNV* ptr() {
        return reinterpret_cast<VkCommandBufferInheritanceViewportScissorInfoNV*>(this);
    }
    VkCommandBufferInheritanceViewportScissorInfoNV const* ptr() const {
        return reinterpret_cast<VkCommandBufferInheritanceViewportScissorInfoNV const*>(this);
    }
};
struct safe_VkRenderPassTransformBeginInfoQCOM {
    VkStructureType sType;
    void* pNext{};
    VkSurfaceTransformFlagBitsKHR transform;

    safe_VkRenderPassTransformBeginInfoQCOM(const VkRenderPassTransformBeginInfoQCOM* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkRenderPassTransformBeginInfoQCOM(const safe_VkRenderPassTransformBeginInfoQCOM& copy_src);
    safe_VkRenderPassTransformBeginInfoQCOM& operator=(const safe_VkRenderPassTransformBeginInfoQCOM& copy_src);
    safe_VkRenderPassTransformBeginInfoQCOM();
    ~safe_VkRenderPassTransformBeginInfoQCOM();
    void initialize(const VkRenderPassTransformBeginInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassTransformBeginInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassTransformBeginInfoQCOM* ptr() { return reinterpret_cast<VkRenderPassTransformBeginInfoQCOM*>(this); }
    VkRenderPassTransformBeginInfoQCOM const* ptr() const {
        return reinterpret_cast<VkRenderPassTransformBeginInfoQCOM const*>(this);
    }
};
struct safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM {
    VkStructureType sType;
    void* pNext{};
    VkSurfaceTransformFlagBitsKHR transform;
    VkRect2D renderArea;

    safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(
        const VkCommandBufferInheritanceRenderPassTransformInfoQCOM* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(
        const safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM& copy_src);
    safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM& operator=(
        const safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM& copy_src);
    safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM();
    ~safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM();
    void initialize(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCommandBufferInheritanceRenderPassTransformInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM* ptr() {
        return reinterpret_cast<VkCommandBufferInheritanceRenderPassTransformInfoQCOM*>(this);
    }
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM const* ptr() const {
        return reinterpret_cast<VkCommandBufferInheritanceRenderPassTransformInfoQCOM const*>(this);
    }
};
struct safe_VkDepthBiasInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;

    safe_VkDepthBiasInfoEXT(const VkDepthBiasInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDepthBiasInfoEXT(const safe_VkDepthBiasInfoEXT& copy_src);
    safe_VkDepthBiasInfoEXT& operator=(const safe_VkDepthBiasInfoEXT& copy_src);
    safe_VkDepthBiasInfoEXT();
    ~safe_VkDepthBiasInfoEXT();
    void initialize(const VkDepthBiasInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDepthBiasInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDepthBiasInfoEXT* ptr() { return reinterpret_cast<VkDepthBiasInfoEXT*>(this); }
    VkDepthBiasInfoEXT const* ptr() const { return reinterpret_cast<VkDepthBiasInfoEXT const*>(this); }
};
struct safe_VkDepthBiasRepresentationInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDepthBiasRepresentationEXT depthBiasRepresentation;
    VkBool32 depthBiasExact;

    safe_VkDepthBiasRepresentationInfoEXT(const VkDepthBiasRepresentationInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkDepthBiasRepresentationInfoEXT(const safe_VkDepthBiasRepresentationInfoEXT& copy_src);
    safe_VkDepthBiasRepresentationInfoEXT& operator=(const safe_VkDepthBiasRepresentationInfoEXT& copy_src);
    safe_VkDepthBiasRepresentationInfoEXT();
    ~safe_VkDepthBiasRepresentationInfoEXT();
    void initialize(const VkDepthBiasRepresentationInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDepthBiasRepresentationInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDepthBiasRepresentationInfoEXT* ptr() { return reinterpret_cast<VkDepthBiasRepresentationInfoEXT*>(this); }
    VkDepthBiasRepresentationInfoEXT const* ptr() const { return reinterpret_cast<VkDepthBiasRepresentationInfoEXT const*>(this); }
};
struct safe_VkDeviceMemoryReportCallbackDataEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceMemoryReportFlagsEXT flags;
    VkDeviceMemoryReportEventTypeEXT type;
    uint64_t memoryObjectId;
    VkDeviceSize size;
    VkObjectType objectType;
    uint64_t objectHandle;
    uint32_t heapIndex;

    safe_VkDeviceMemoryReportCallbackDataEXT(const VkDeviceMemoryReportCallbackDataEXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkDeviceMemoryReportCallbackDataEXT(const safe_VkDeviceMemoryReportCallbackDataEXT& copy_src);
    safe_VkDeviceMemoryReportCallbackDataEXT& operator=(const safe_VkDeviceMemoryReportCallbackDataEXT& copy_src);
    safe_VkDeviceMemoryReportCallbackDataEXT();
    ~safe_VkDeviceMemoryReportCallbackDataEXT();
    void initialize(const VkDeviceMemoryReportCallbackDataEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceMemoryReportCallbackDataEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceMemoryReportCallbackDataEXT* ptr() { return reinterpret_cast<VkDeviceMemoryReportCallbackDataEXT*>(this); }
    VkDeviceMemoryReportCallbackDataEXT const* ptr() const {
        return reinterpret_cast<VkDeviceMemoryReportCallbackDataEXT const*>(this);
    }
};
struct safe_VkDeviceDeviceMemoryReportCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemoryReportFlagsEXT flags;
    PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback;
    void* pUserData{};

    safe_VkDeviceDeviceMemoryReportCreateInfoEXT(const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceDeviceMemoryReportCreateInfoEXT(const safe_VkDeviceDeviceMemoryReportCreateInfoEXT& copy_src);
    safe_VkDeviceDeviceMemoryReportCreateInfoEXT& operator=(const safe_VkDeviceDeviceMemoryReportCreateInfoEXT& copy_src);
    safe_VkDeviceDeviceMemoryReportCreateInfoEXT();
    ~safe_VkDeviceDeviceMemoryReportCreateInfoEXT();
    void initialize(const VkDeviceDeviceMemoryReportCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceDeviceMemoryReportCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceDeviceMemoryReportCreateInfoEXT* ptr() { return reinterpret_cast<VkDeviceDeviceMemoryReportCreateInfoEXT*>(this); }
    VkDeviceDeviceMemoryReportCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkDeviceDeviceMemoryReportCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceRobustness2PropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize robustStorageBufferAccessSizeAlignment;
    VkDeviceSize robustUniformBufferAccessSizeAlignment;

    safe_VkPhysicalDeviceRobustness2PropertiesEXT(const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceRobustness2PropertiesEXT(const safe_VkPhysicalDeviceRobustness2PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceRobustness2PropertiesEXT& operator=(const safe_VkPhysicalDeviceRobustness2PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceRobustness2PropertiesEXT();
    ~safe_VkPhysicalDeviceRobustness2PropertiesEXT();
    void initialize(const VkPhysicalDeviceRobustness2PropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceRobustness2PropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceRobustness2PropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT*>(this); }
    VkPhysicalDeviceRobustness2PropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT const*>(this);
    }
};
struct safe_VkSamplerCustomBorderColorCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkClearColorValue customBorderColor;
    VkFormat format;

    safe_VkSamplerCustomBorderColorCreateInfoEXT(const VkSamplerCustomBorderColorCreateInfoEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerCustomBorderColorCreateInfoEXT(const safe_VkSamplerCustomBorderColorCreateInfoEXT& copy_src);
    safe_VkSamplerCustomBorderColorCreateInfoEXT& operator=(const safe_VkSamplerCustomBorderColorCreateInfoEXT& copy_src);
    safe_VkSamplerCustomBorderColorCreateInfoEXT();
    ~safe_VkSamplerCustomBorderColorCreateInfoEXT();
    void initialize(const VkSamplerCustomBorderColorCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerCustomBorderColorCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSamplerCustomBorderColorCreateInfoEXT* ptr() { return reinterpret_cast<VkSamplerCustomBorderColorCreateInfoEXT*>(this); }
    VkSamplerCustomBorderColorCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkSamplerCustomBorderColorCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxCustomBorderColorSamplers;

    safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT(const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT(const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT();
    ~safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT();
    void initialize(const VkPhysicalDeviceCustomBorderColorPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceCustomBorderColorPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceCustomBorderColorPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT*>(this);
    }
    VkPhysicalDeviceCustomBorderColorPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT const*>(this);
    }
};
struct safe_VkSurfaceCapabilitiesPresentBarrierNV {
    VkStructureType sType;
    void* pNext{};
    VkBool32 presentBarrierSupported;

    safe_VkSurfaceCapabilitiesPresentBarrierNV(const VkSurfaceCapabilitiesPresentBarrierNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSurfaceCapabilitiesPresentBarrierNV(const safe_VkSurfaceCapabilitiesPresentBarrierNV& copy_src);
    safe_VkSurfaceCapabilitiesPresentBarrierNV& operator=(const safe_VkSurfaceCapabilitiesPresentBarrierNV& copy_src);
    safe_VkSurfaceCapabilitiesPresentBarrierNV();
    ~safe_VkSurfaceCapabilitiesPresentBarrierNV();
    void initialize(const VkSurfaceCapabilitiesPresentBarrierNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSurfaceCapabilitiesPresentBarrierNV* copy_src, PNextCopyState* copy_state = {});
    VkSurfaceCapabilitiesPresentBarrierNV* ptr() { return reinterpret_cast<VkSurfaceCapabilitiesPresentBarrierNV*>(this); }
    VkSurfaceCapabilitiesPresentBarrierNV const* ptr() const {
        return reinterpret_cast<VkSurfaceCapabilitiesPresentBarrierNV const*>(this);
    }
};
struct safe_VkSwapchainPresentBarrierCreateInfoNV {
    VkStructureType sType;
    void* pNext{};
    VkBool32 presentBarrierEnable;

    safe_VkSwapchainPresentBarrierCreateInfoNV(const VkSwapchainPresentBarrierCreateInfoNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSwapchainPresentBarrierCreateInfoNV(const safe_VkSwapchainPresentBarrierCreateInfoNV& copy_src);
    safe_VkSwapchainPresentBarrierCreateInfoNV& operator=(const safe_VkSwapchainPresentBarrierCreateInfoNV& copy_src);
    safe_VkSwapchainPresentBarrierCreateInfoNV();
    ~safe_VkSwapchainPresentBarrierCreateInfoNV();
    void initialize(const VkSwapchainPresentBarrierCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainPresentBarrierCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainPresentBarrierCreateInfoNV* ptr() { return reinterpret_cast<VkSwapchainPresentBarrierCreateInfoNV*>(this); }
    VkSwapchainPresentBarrierCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkSwapchainPresentBarrierCreateInfoNV const*>(this);
    }
};
struct safe_VkDeviceDiagnosticsConfigCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceDiagnosticsConfigFlagsNV flags;

    safe_VkDeviceDiagnosticsConfigCreateInfoNV(const VkDeviceDiagnosticsConfigCreateInfoNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceDiagnosticsConfigCreateInfoNV(const safe_VkDeviceDiagnosticsConfigCreateInfoNV& copy_src);
    safe_VkDeviceDiagnosticsConfigCreateInfoNV& operator=(const safe_VkDeviceDiagnosticsConfigCreateInfoNV& copy_src);
    safe_VkDeviceDiagnosticsConfigCreateInfoNV();
    ~safe_VkDeviceDiagnosticsConfigCreateInfoNV();
    void initialize(const VkDeviceDiagnosticsConfigCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceDiagnosticsConfigCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkDeviceDiagnosticsConfigCreateInfoNV* ptr() { return reinterpret_cast<VkDeviceDiagnosticsConfigCreateInfoNV*>(this); }
    VkDeviceDiagnosticsConfigCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkDeviceDiagnosticsConfigCreateInfoNV const*>(this);
    }
};
struct safe_VkCudaModuleCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    size_t dataSize;
    const void* pData{};

    safe_VkCudaModuleCreateInfoNV(const VkCudaModuleCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkCudaModuleCreateInfoNV(const safe_VkCudaModuleCreateInfoNV& copy_src);
    safe_VkCudaModuleCreateInfoNV& operator=(const safe_VkCudaModuleCreateInfoNV& copy_src);
    safe_VkCudaModuleCreateInfoNV();
    ~safe_VkCudaModuleCreateInfoNV();
    void initialize(const VkCudaModuleCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCudaModuleCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkCudaModuleCreateInfoNV* ptr() { return reinterpret_cast<VkCudaModuleCreateInfoNV*>(this); }
    VkCudaModuleCreateInfoNV const* ptr() const { return reinterpret_cast<VkCudaModuleCreateInfoNV const*>(this); }
};
struct safe_VkCudaFunctionCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkCudaModuleNV module;
    const char* pName{};

    safe_VkCudaFunctionCreateInfoNV(const VkCudaFunctionCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkCudaFunctionCreateInfoNV(const safe_VkCudaFunctionCreateInfoNV& copy_src);
    safe_VkCudaFunctionCreateInfoNV& operator=(const safe_VkCudaFunctionCreateInfoNV& copy_src);
    safe_VkCudaFunctionCreateInfoNV();
    ~safe_VkCudaFunctionCreateInfoNV();
    void initialize(const VkCudaFunctionCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCudaFunctionCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkCudaFunctionCreateInfoNV* ptr() { return reinterpret_cast<VkCudaFunctionCreateInfoNV*>(this); }
    VkCudaFunctionCreateInfoNV const* ptr() const { return reinterpret_cast<VkCudaFunctionCreateInfoNV const*>(this); }
};
struct safe_VkCudaLaunchInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkCudaFunctionNV function;
    uint32_t gridDimX;
    uint32_t gridDimY;
    uint32_t gridDimZ;
    uint32_t blockDimX;
    uint32_t blockDimY;
    uint32_t blockDimZ;
    uint32_t sharedMemBytes;
    size_t paramCount;
    const void* const* pParams{};
    size_t extraCount;
    const void* const* pExtras{};

    safe_VkCudaLaunchInfoNV(const VkCudaLaunchInfoNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCudaLaunchInfoNV(const safe_VkCudaLaunchInfoNV& copy_src);
    safe_VkCudaLaunchInfoNV& operator=(const safe_VkCudaLaunchInfoNV& copy_src);
    safe_VkCudaLaunchInfoNV();
    ~safe_VkCudaLaunchInfoNV();
    void initialize(const VkCudaLaunchInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCudaLaunchInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkCudaLaunchInfoNV* ptr() { return reinterpret_cast<VkCudaLaunchInfoNV*>(this); }
    VkCudaLaunchInfoNV const* ptr() const { return reinterpret_cast<VkCudaLaunchInfoNV const*>(this); }
};
struct safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t computeCapabilityMinor;
    uint32_t computeCapabilityMajor;

    safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(const VkPhysicalDeviceCudaKernelLaunchPropertiesNV* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(const safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV& operator=(const safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV();
    ~safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV();
    void initialize(const VkPhysicalDeviceCudaKernelLaunchPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceCudaKernelLaunchPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceCudaKernelLaunchPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchPropertiesNV*>(this);
    }
    VkPhysicalDeviceCudaKernelLaunchPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchPropertiesNV const*>(this);
    }
};
struct safe_VkQueryLowLatencySupportNV {
    VkStructureType sType;
    const void* pNext{};
    void* pQueriedLowLatencyData{};

    safe_VkQueryLowLatencySupportNV(const VkQueryLowLatencySupportNV* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkQueryLowLatencySupportNV(const safe_VkQueryLowLatencySupportNV& copy_src);
    safe_VkQueryLowLatencySupportNV& operator=(const safe_VkQueryLowLatencySupportNV& copy_src);
    safe_VkQueryLowLatencySupportNV();
    ~safe_VkQueryLowLatencySupportNV();
    void initialize(const VkQueryLowLatencySupportNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkQueryLowLatencySupportNV* copy_src, PNextCopyState* copy_state = {});
    VkQueryLowLatencySupportNV* ptr() { return reinterpret_cast<VkQueryLowLatencySupportNV*>(this); }
    VkQueryLowLatencySupportNV const* ptr() const { return reinterpret_cast<VkQueryLowLatencySupportNV const*>(this); }
};
#ifdef VK_USE_PLATFORM_METAL_EXT
struct safe_VkExportMetalObjectCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkExportMetalObjectTypeFlagBitsEXT exportObjectType;

    safe_VkExportMetalObjectCreateInfoEXT(const VkExportMetalObjectCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkExportMetalObjectCreateInfoEXT(const safe_VkExportMetalObjectCreateInfoEXT& copy_src);
    safe_VkExportMetalObjectCreateInfoEXT& operator=(const safe_VkExportMetalObjectCreateInfoEXT& copy_src);
    safe_VkExportMetalObjectCreateInfoEXT();
    ~safe_VkExportMetalObjectCreateInfoEXT();
    void initialize(const VkExportMetalObjectCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalObjectCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalObjectCreateInfoEXT* ptr() { return reinterpret_cast<VkExportMetalObjectCreateInfoEXT*>(this); }
    VkExportMetalObjectCreateInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalObjectCreateInfoEXT const*>(this); }
};
struct safe_VkExportMetalObjectsInfoEXT {
    VkStructureType sType;
    const void* pNext{};

    safe_VkExportMetalObjectsInfoEXT(const VkExportMetalObjectsInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkExportMetalObjectsInfoEXT(const safe_VkExportMetalObjectsInfoEXT& copy_src);
    safe_VkExportMetalObjectsInfoEXT& operator=(const safe_VkExportMetalObjectsInfoEXT& copy_src);
    safe_VkExportMetalObjectsInfoEXT();
    ~safe_VkExportMetalObjectsInfoEXT();
    void initialize(const VkExportMetalObjectsInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalObjectsInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalObjectsInfoEXT* ptr() { return reinterpret_cast<VkExportMetalObjectsInfoEXT*>(this); }
    VkExportMetalObjectsInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalObjectsInfoEXT const*>(this); }
};
struct safe_VkExportMetalDeviceInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    MTLDevice_id mtlDevice;

    safe_VkExportMetalDeviceInfoEXT(const VkExportMetalDeviceInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkExportMetalDeviceInfoEXT(const safe_VkExportMetalDeviceInfoEXT& copy_src);
    safe_VkExportMetalDeviceInfoEXT& operator=(const safe_VkExportMetalDeviceInfoEXT& copy_src);
    safe_VkExportMetalDeviceInfoEXT();
    ~safe_VkExportMetalDeviceInfoEXT();
    void initialize(const VkExportMetalDeviceInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalDeviceInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalDeviceInfoEXT* ptr() { return reinterpret_cast<VkExportMetalDeviceInfoEXT*>(this); }
    VkExportMetalDeviceInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalDeviceInfoEXT const*>(this); }
};
struct safe_VkExportMetalCommandQueueInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkQueue queue;
    MTLCommandQueue_id mtlCommandQueue;

    safe_VkExportMetalCommandQueueInfoEXT(const VkExportMetalCommandQueueInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkExportMetalCommandQueueInfoEXT(const safe_VkExportMetalCommandQueueInfoEXT& copy_src);
    safe_VkExportMetalCommandQueueInfoEXT& operator=(const safe_VkExportMetalCommandQueueInfoEXT& copy_src);
    safe_VkExportMetalCommandQueueInfoEXT();
    ~safe_VkExportMetalCommandQueueInfoEXT();
    void initialize(const VkExportMetalCommandQueueInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalCommandQueueInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalCommandQueueInfoEXT* ptr() { return reinterpret_cast<VkExportMetalCommandQueueInfoEXT*>(this); }
    VkExportMetalCommandQueueInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalCommandQueueInfoEXT const*>(this); }
};
struct safe_VkExportMetalBufferInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    MTLBuffer_id mtlBuffer;

    safe_VkExportMetalBufferInfoEXT(const VkExportMetalBufferInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkExportMetalBufferInfoEXT(const safe_VkExportMetalBufferInfoEXT& copy_src);
    safe_VkExportMetalBufferInfoEXT& operator=(const safe_VkExportMetalBufferInfoEXT& copy_src);
    safe_VkExportMetalBufferInfoEXT();
    ~safe_VkExportMetalBufferInfoEXT();
    void initialize(const VkExportMetalBufferInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalBufferInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalBufferInfoEXT* ptr() { return reinterpret_cast<VkExportMetalBufferInfoEXT*>(this); }
    VkExportMetalBufferInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalBufferInfoEXT const*>(this); }
};
struct safe_VkImportMetalBufferInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    MTLBuffer_id mtlBuffer;

    safe_VkImportMetalBufferInfoEXT(const VkImportMetalBufferInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkImportMetalBufferInfoEXT(const safe_VkImportMetalBufferInfoEXT& copy_src);
    safe_VkImportMetalBufferInfoEXT& operator=(const safe_VkImportMetalBufferInfoEXT& copy_src);
    safe_VkImportMetalBufferInfoEXT();
    ~safe_VkImportMetalBufferInfoEXT();
    void initialize(const VkImportMetalBufferInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMetalBufferInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImportMetalBufferInfoEXT* ptr() { return reinterpret_cast<VkImportMetalBufferInfoEXT*>(this); }
    VkImportMetalBufferInfoEXT const* ptr() const { return reinterpret_cast<VkImportMetalBufferInfoEXT const*>(this); }
};
struct safe_VkExportMetalTextureInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    VkImageView imageView;
    VkBufferView bufferView;
    VkImageAspectFlagBits plane;
    MTLTexture_id mtlTexture;

    safe_VkExportMetalTextureInfoEXT(const VkExportMetalTextureInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkExportMetalTextureInfoEXT(const safe_VkExportMetalTextureInfoEXT& copy_src);
    safe_VkExportMetalTextureInfoEXT& operator=(const safe_VkExportMetalTextureInfoEXT& copy_src);
    safe_VkExportMetalTextureInfoEXT();
    ~safe_VkExportMetalTextureInfoEXT();
    void initialize(const VkExportMetalTextureInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalTextureInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalTextureInfoEXT* ptr() { return reinterpret_cast<VkExportMetalTextureInfoEXT*>(this); }
    VkExportMetalTextureInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalTextureInfoEXT const*>(this); }
};
struct safe_VkImportMetalTextureInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImageAspectFlagBits plane;
    MTLTexture_id mtlTexture;

    safe_VkImportMetalTextureInfoEXT(const VkImportMetalTextureInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkImportMetalTextureInfoEXT(const safe_VkImportMetalTextureInfoEXT& copy_src);
    safe_VkImportMetalTextureInfoEXT& operator=(const safe_VkImportMetalTextureInfoEXT& copy_src);
    safe_VkImportMetalTextureInfoEXT();
    ~safe_VkImportMetalTextureInfoEXT();
    void initialize(const VkImportMetalTextureInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMetalTextureInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImportMetalTextureInfoEXT* ptr() { return reinterpret_cast<VkImportMetalTextureInfoEXT*>(this); }
    VkImportMetalTextureInfoEXT const* ptr() const { return reinterpret_cast<VkImportMetalTextureInfoEXT const*>(this); }
};
struct safe_VkExportMetalIOSurfaceInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;
    IOSurfaceRef ioSurface;

    safe_VkExportMetalIOSurfaceInfoEXT(const VkExportMetalIOSurfaceInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkExportMetalIOSurfaceInfoEXT(const safe_VkExportMetalIOSurfaceInfoEXT& copy_src);
    safe_VkExportMetalIOSurfaceInfoEXT& operator=(const safe_VkExportMetalIOSurfaceInfoEXT& copy_src);
    safe_VkExportMetalIOSurfaceInfoEXT();
    ~safe_VkExportMetalIOSurfaceInfoEXT();
    void initialize(const VkExportMetalIOSurfaceInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalIOSurfaceInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalIOSurfaceInfoEXT* ptr() { return reinterpret_cast<VkExportMetalIOSurfaceInfoEXT*>(this); }
    VkExportMetalIOSurfaceInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalIOSurfaceInfoEXT const*>(this); }
};
struct safe_VkImportMetalIOSurfaceInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    IOSurfaceRef ioSurface;

    safe_VkImportMetalIOSurfaceInfoEXT(const VkImportMetalIOSurfaceInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkImportMetalIOSurfaceInfoEXT(const safe_VkImportMetalIOSurfaceInfoEXT& copy_src);
    safe_VkImportMetalIOSurfaceInfoEXT& operator=(const safe_VkImportMetalIOSurfaceInfoEXT& copy_src);
    safe_VkImportMetalIOSurfaceInfoEXT();
    ~safe_VkImportMetalIOSurfaceInfoEXT();
    void initialize(const VkImportMetalIOSurfaceInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMetalIOSurfaceInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImportMetalIOSurfaceInfoEXT* ptr() { return reinterpret_cast<VkImportMetalIOSurfaceInfoEXT*>(this); }
    VkImportMetalIOSurfaceInfoEXT const* ptr() const { return reinterpret_cast<VkImportMetalIOSurfaceInfoEXT const*>(this); }
};
struct safe_VkExportMetalSharedEventInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkEvent event;
    MTLSharedEvent_id mtlSharedEvent;

    safe_VkExportMetalSharedEventInfoEXT(const VkExportMetalSharedEventInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkExportMetalSharedEventInfoEXT(const safe_VkExportMetalSharedEventInfoEXT& copy_src);
    safe_VkExportMetalSharedEventInfoEXT& operator=(const safe_VkExportMetalSharedEventInfoEXT& copy_src);
    safe_VkExportMetalSharedEventInfoEXT();
    ~safe_VkExportMetalSharedEventInfoEXT();
    void initialize(const VkExportMetalSharedEventInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExportMetalSharedEventInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkExportMetalSharedEventInfoEXT* ptr() { return reinterpret_cast<VkExportMetalSharedEventInfoEXT*>(this); }
    VkExportMetalSharedEventInfoEXT const* ptr() const { return reinterpret_cast<VkExportMetalSharedEventInfoEXT const*>(this); }
};
struct safe_VkImportMetalSharedEventInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    MTLSharedEvent_id mtlSharedEvent;

    safe_VkImportMetalSharedEventInfoEXT(const VkImportMetalSharedEventInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkImportMetalSharedEventInfoEXT(const safe_VkImportMetalSharedEventInfoEXT& copy_src);
    safe_VkImportMetalSharedEventInfoEXT& operator=(const safe_VkImportMetalSharedEventInfoEXT& copy_src);
    safe_VkImportMetalSharedEventInfoEXT();
    ~safe_VkImportMetalSharedEventInfoEXT();
    void initialize(const VkImportMetalSharedEventInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMetalSharedEventInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImportMetalSharedEventInfoEXT* ptr() { return reinterpret_cast<VkImportMetalSharedEventInfoEXT*>(this); }
    VkImportMetalSharedEventInfoEXT const* ptr() const { return reinterpret_cast<VkImportMetalSharedEventInfoEXT const*>(this); }
};
#endif  // VK_USE_PLATFORM_METAL_EXT
struct safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 combinedImageSamplerDescriptorSingleArray;
    VkBool32 bufferlessPushDescriptors;
    VkBool32 allowSamplerImageViewPostSubmitCreation;
    VkDeviceSize descriptorBufferOffsetAlignment;
    uint32_t maxDescriptorBufferBindings;
    uint32_t maxResourceDescriptorBufferBindings;
    uint32_t maxSamplerDescriptorBufferBindings;
    uint32_t maxEmbeddedImmutableSamplerBindings;
    uint32_t maxEmbeddedImmutableSamplers;
    size_t bufferCaptureReplayDescriptorDataSize;
    size_t imageCaptureReplayDescriptorDataSize;
    size_t imageViewCaptureReplayDescriptorDataSize;
    size_t samplerCaptureReplayDescriptorDataSize;
    size_t accelerationStructureCaptureReplayDescriptorDataSize;
    size_t samplerDescriptorSize;
    size_t combinedImageSamplerDescriptorSize;
    size_t sampledImageDescriptorSize;
    size_t storageImageDescriptorSize;
    size_t uniformTexelBufferDescriptorSize;
    size_t robustUniformTexelBufferDescriptorSize;
    size_t storageTexelBufferDescriptorSize;
    size_t robustStorageTexelBufferDescriptorSize;
    size_t uniformBufferDescriptorSize;
    size_t robustUniformBufferDescriptorSize;
    size_t storageBufferDescriptorSize;
    size_t robustStorageBufferDescriptorSize;
    size_t inputAttachmentDescriptorSize;
    size_t accelerationStructureDescriptorSize;
    VkDeviceSize maxSamplerDescriptorBufferRange;
    VkDeviceSize maxResourceDescriptorBufferRange;
    VkDeviceSize samplerDescriptorBufferAddressSpaceSize;
    VkDeviceSize resourceDescriptorBufferAddressSpaceSize;
    VkDeviceSize descriptorBufferAddressSpaceSize;

    safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT(const VkPhysicalDeviceDescriptorBufferPropertiesEXT* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT(const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT();
    ~safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT();
    void initialize(const VkPhysicalDeviceDescriptorBufferPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDescriptorBufferPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDescriptorBufferPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDescriptorBufferPropertiesEXT*>(this);
    }
    VkPhysicalDeviceDescriptorBufferPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDescriptorBufferPropertiesEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    size_t combinedImageSamplerDensityMapDescriptorSize;

    safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
        const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
        const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT();
    ~safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT();
    void initialize(const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT*>(this);
    }
    VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT const*>(this);
    }
};
struct safe_VkDescriptorAddressInfoEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceAddress address;
    VkDeviceSize range;
    VkFormat format;

    safe_VkDescriptorAddressInfoEXT(const VkDescriptorAddressInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkDescriptorAddressInfoEXT(const safe_VkDescriptorAddressInfoEXT& copy_src);
    safe_VkDescriptorAddressInfoEXT& operator=(const safe_VkDescriptorAddressInfoEXT& copy_src);
    safe_VkDescriptorAddressInfoEXT();
    ~safe_VkDescriptorAddressInfoEXT();
    void initialize(const VkDescriptorAddressInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorAddressInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorAddressInfoEXT* ptr() { return reinterpret_cast<VkDescriptorAddressInfoEXT*>(this); }
    VkDescriptorAddressInfoEXT const* ptr() const { return reinterpret_cast<VkDescriptorAddressInfoEXT const*>(this); }
};
struct safe_VkDescriptorBufferBindingInfoEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceAddress address;
    VkBufferUsageFlags usage;

    safe_VkDescriptorBufferBindingInfoEXT(const VkDescriptorBufferBindingInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkDescriptorBufferBindingInfoEXT(const safe_VkDescriptorBufferBindingInfoEXT& copy_src);
    safe_VkDescriptorBufferBindingInfoEXT& operator=(const safe_VkDescriptorBufferBindingInfoEXT& copy_src);
    safe_VkDescriptorBufferBindingInfoEXT();
    ~safe_VkDescriptorBufferBindingInfoEXT();
    void initialize(const VkDescriptorBufferBindingInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorBufferBindingInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorBufferBindingInfoEXT* ptr() { return reinterpret_cast<VkDescriptorBufferBindingInfoEXT*>(this); }
    VkDescriptorBufferBindingInfoEXT const* ptr() const { return reinterpret_cast<VkDescriptorBufferBindingInfoEXT const*>(this); }
};
struct safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT {
    VkStructureType sType;
    void* pNext{};
    VkBuffer buffer;

    safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(
        const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(
        const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src);
    safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& operator=(
        const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT& copy_src);
    safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT();
    ~safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT();
    void initialize(const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorBufferBindingPushDescriptorBufferHandleEXT* ptr() {
        return reinterpret_cast<VkDescriptorBufferBindingPushDescriptorBufferHandleEXT*>(this);
    }
    VkDescriptorBufferBindingPushDescriptorBufferHandleEXT const* ptr() const {
        return reinterpret_cast<VkDescriptorBufferBindingPushDescriptorBufferHandleEXT const*>(this);
    }
};
struct safe_VkDescriptorGetInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorType type;
    VkDescriptorDataEXT data;

    safe_VkDescriptorGetInfoEXT(const VkDescriptorGetInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorGetInfoEXT(const safe_VkDescriptorGetInfoEXT& copy_src);
    safe_VkDescriptorGetInfoEXT& operator=(const safe_VkDescriptorGetInfoEXT& copy_src);
    safe_VkDescriptorGetInfoEXT();
    ~safe_VkDescriptorGetInfoEXT();
    void initialize(const VkDescriptorGetInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorGetInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorGetInfoEXT* ptr() { return reinterpret_cast<VkDescriptorGetInfoEXT*>(this); }
    VkDescriptorGetInfoEXT const* ptr() const { return reinterpret_cast<VkDescriptorGetInfoEXT const*>(this); }
};
struct safe_VkBufferCaptureDescriptorDataInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBuffer buffer;

    safe_VkBufferCaptureDescriptorDataInfoEXT(const VkBufferCaptureDescriptorDataInfoEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCaptureDescriptorDataInfoEXT(const safe_VkBufferCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkBufferCaptureDescriptorDataInfoEXT& operator=(const safe_VkBufferCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkBufferCaptureDescriptorDataInfoEXT();
    ~safe_VkBufferCaptureDescriptorDataInfoEXT();
    void initialize(const VkBufferCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCaptureDescriptorDataInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkBufferCaptureDescriptorDataInfoEXT* ptr() { return reinterpret_cast<VkBufferCaptureDescriptorDataInfoEXT*>(this); }
    VkBufferCaptureDescriptorDataInfoEXT const* ptr() const {
        return reinterpret_cast<VkBufferCaptureDescriptorDataInfoEXT const*>(this);
    }
};
struct safe_VkImageCaptureDescriptorDataInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImage image;

    safe_VkImageCaptureDescriptorDataInfoEXT(const VkImageCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkImageCaptureDescriptorDataInfoEXT(const safe_VkImageCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkImageCaptureDescriptorDataInfoEXT& operator=(const safe_VkImageCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkImageCaptureDescriptorDataInfoEXT();
    ~safe_VkImageCaptureDescriptorDataInfoEXT();
    void initialize(const VkImageCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageCaptureDescriptorDataInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageCaptureDescriptorDataInfoEXT* ptr() { return reinterpret_cast<VkImageCaptureDescriptorDataInfoEXT*>(this); }
    VkImageCaptureDescriptorDataInfoEXT const* ptr() const {
        return reinterpret_cast<VkImageCaptureDescriptorDataInfoEXT const*>(this);
    }
};
struct safe_VkImageViewCaptureDescriptorDataInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImageView imageView;

    safe_VkImageViewCaptureDescriptorDataInfoEXT(const VkImageViewCaptureDescriptorDataInfoEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageViewCaptureDescriptorDataInfoEXT(const safe_VkImageViewCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkImageViewCaptureDescriptorDataInfoEXT& operator=(const safe_VkImageViewCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkImageViewCaptureDescriptorDataInfoEXT();
    ~safe_VkImageViewCaptureDescriptorDataInfoEXT();
    void initialize(const VkImageViewCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewCaptureDescriptorDataInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageViewCaptureDescriptorDataInfoEXT* ptr() { return reinterpret_cast<VkImageViewCaptureDescriptorDataInfoEXT*>(this); }
    VkImageViewCaptureDescriptorDataInfoEXT const* ptr() const {
        return reinterpret_cast<VkImageViewCaptureDescriptorDataInfoEXT const*>(this);
    }
};
struct safe_VkSamplerCaptureDescriptorDataInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkSampler sampler;

    safe_VkSamplerCaptureDescriptorDataInfoEXT(const VkSamplerCaptureDescriptorDataInfoEXT* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerCaptureDescriptorDataInfoEXT(const safe_VkSamplerCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkSamplerCaptureDescriptorDataInfoEXT& operator=(const safe_VkSamplerCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkSamplerCaptureDescriptorDataInfoEXT();
    ~safe_VkSamplerCaptureDescriptorDataInfoEXT();
    void initialize(const VkSamplerCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerCaptureDescriptorDataInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSamplerCaptureDescriptorDataInfoEXT* ptr() { return reinterpret_cast<VkSamplerCaptureDescriptorDataInfoEXT*>(this); }
    VkSamplerCaptureDescriptorDataInfoEXT const* ptr() const {
        return reinterpret_cast<VkSamplerCaptureDescriptorDataInfoEXT const*>(this);
    }
};
struct safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    const void* opaqueCaptureDescriptorData{};

    safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT(const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT(const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& copy_src);
    safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& operator=(const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT& copy_src);
    safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT();
    ~safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT();
    void initialize(const VkOpaqueCaptureDescriptorDataCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpaqueCaptureDescriptorDataCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkOpaqueCaptureDescriptorDataCreateInfoEXT* ptr() {
        return reinterpret_cast<VkOpaqueCaptureDescriptorDataCreateInfoEXT*>(this);
    }
    VkOpaqueCaptureDescriptorDataCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkOpaqueCaptureDescriptorDataCreateInfoEXT const*>(this);
    }
};
struct safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureKHR accelerationStructure;
    VkAccelerationStructureNV accelerationStructureNV;

    safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT(const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT(
        const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& operator=(
        const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT& copy_src);
    safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT();
    ~safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT();
    void initialize(const VkAccelerationStructureCaptureDescriptorDataInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureCaptureDescriptorDataInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureCaptureDescriptorDataInfoEXT* ptr() {
        return reinterpret_cast<VkAccelerationStructureCaptureDescriptorDataInfoEXT*>(this);
    }
    VkAccelerationStructureCaptureDescriptorDataInfoEXT const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureCaptureDescriptorDataInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 graphicsPipelineLibraryFastLinking;
    VkBool32 graphicsPipelineLibraryIndependentInterpolationDecoration;

    safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
        const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT();
    ~safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT();
    void initialize(const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT*>(this);
    }
    VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT const*>(this);
    }
};
struct safe_VkGraphicsPipelineLibraryCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkGraphicsPipelineLibraryFlagsEXT flags;

    safe_VkGraphicsPipelineLibraryCreateInfoEXT(const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkGraphicsPipelineLibraryCreateInfoEXT(const safe_VkGraphicsPipelineLibraryCreateInfoEXT& copy_src);
    safe_VkGraphicsPipelineLibraryCreateInfoEXT& operator=(const safe_VkGraphicsPipelineLibraryCreateInfoEXT& copy_src);
    safe_VkGraphicsPipelineLibraryCreateInfoEXT();
    ~safe_VkGraphicsPipelineLibraryCreateInfoEXT();
    void initialize(const VkGraphicsPipelineLibraryCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGraphicsPipelineLibraryCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkGraphicsPipelineLibraryCreateInfoEXT* ptr() { return reinterpret_cast<VkGraphicsPipelineLibraryCreateInfoEXT*>(this); }
    VkGraphicsPipelineLibraryCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkGraphicsPipelineLibraryCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkSampleCountFlagBits maxFragmentShadingRateInvocationCount;

    safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(
        const safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& operator=(
        const safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& copy_src);
    safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV();
    ~safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV();
    void initialize(const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV*>(this);
    }
    VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV const*>(this);
    }
};
struct safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkFragmentShadingRateTypeNV shadingRateType;
    VkFragmentShadingRateNV shadingRate;
    VkFragmentShadingRateCombinerOpKHR combinerOps[2];

    safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(const VkPipelineFragmentShadingRateEnumStateCreateInfoNV* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(
        const safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV& copy_src);
    safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV& operator=(
        const safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV& copy_src);
    safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV();
    ~safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV();
    void initialize(const VkPipelineFragmentShadingRateEnumStateCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineFragmentShadingRateEnumStateCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineFragmentShadingRateEnumStateCreateInfoNV* ptr() {
        return reinterpret_cast<VkPipelineFragmentShadingRateEnumStateCreateInfoNV*>(this);
    }
    VkPipelineFragmentShadingRateEnumStateCreateInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineFragmentShadingRateEnumStateCreateInfoNV const*>(this);
    }
};
union safe_VkDeviceOrHostAddressConstKHR {
    VkDeviceAddress deviceAddress;
    const void* hostAddress{};

    safe_VkDeviceOrHostAddressConstKHR(const VkDeviceOrHostAddressConstKHR* in_struct, PNextCopyState* copy_state = {});
    safe_VkDeviceOrHostAddressConstKHR(const safe_VkDeviceOrHostAddressConstKHR& copy_src);
    safe_VkDeviceOrHostAddressConstKHR& operator=(const safe_VkDeviceOrHostAddressConstKHR& copy_src);
    safe_VkDeviceOrHostAddressConstKHR();
    ~safe_VkDeviceOrHostAddressConstKHR();
    void initialize(const VkDeviceOrHostAddressConstKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceOrHostAddressConstKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceOrHostAddressConstKHR* ptr() { return reinterpret_cast<VkDeviceOrHostAddressConstKHR*>(this); }
    VkDeviceOrHostAddressConstKHR const* ptr() const { return reinterpret_cast<VkDeviceOrHostAddressConstKHR const*>(this); }
};
struct safe_VkAccelerationStructureGeometryMotionTrianglesDataNV {
    VkStructureType sType;
    const void* pNext{};
    safe_VkDeviceOrHostAddressConstKHR vertexData;

    safe_VkAccelerationStructureGeometryMotionTrianglesDataNV(const VkAccelerationStructureGeometryMotionTrianglesDataNV* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureGeometryMotionTrianglesDataNV(
        const safe_VkAccelerationStructureGeometryMotionTrianglesDataNV& copy_src);
    safe_VkAccelerationStructureGeometryMotionTrianglesDataNV& operator=(
        const safe_VkAccelerationStructureGeometryMotionTrianglesDataNV& copy_src);
    safe_VkAccelerationStructureGeometryMotionTrianglesDataNV();
    ~safe_VkAccelerationStructureGeometryMotionTrianglesDataNV();
    void initialize(const VkAccelerationStructureGeometryMotionTrianglesDataNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureGeometryMotionTrianglesDataNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureGeometryMotionTrianglesDataNV* ptr() {
        return reinterpret_cast<VkAccelerationStructureGeometryMotionTrianglesDataNV*>(this);
    }
    VkAccelerationStructureGeometryMotionTrianglesDataNV const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureGeometryMotionTrianglesDataNV const*>(this);
    }
};
struct safe_VkAccelerationStructureMotionInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxInstances;
    VkAccelerationStructureMotionInfoFlagsNV flags;

    safe_VkAccelerationStructureMotionInfoNV(const VkAccelerationStructureMotionInfoNV* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkAccelerationStructureMotionInfoNV(const safe_VkAccelerationStructureMotionInfoNV& copy_src);
    safe_VkAccelerationStructureMotionInfoNV& operator=(const safe_VkAccelerationStructureMotionInfoNV& copy_src);
    safe_VkAccelerationStructureMotionInfoNV();
    ~safe_VkAccelerationStructureMotionInfoNV();
    void initialize(const VkAccelerationStructureMotionInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureMotionInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureMotionInfoNV* ptr() { return reinterpret_cast<VkAccelerationStructureMotionInfoNV*>(this); }
    VkAccelerationStructureMotionInfoNV const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureMotionInfoNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 subsampledLoads;
    VkBool32 subsampledCoarseReconstructionEarlyAccess;
    uint32_t maxSubsampledArrayLayers;
    uint32_t maxDescriptorSetSubsampledSamplers;

    safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* in_struct,
                                                          PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& operator=(
        const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT();
    ~safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT();
    void initialize(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*>(this);
    }
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT const*>(this);
    }
};
struct safe_VkCopyCommandTransformInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    VkSurfaceTransformFlagBitsKHR transform;

    safe_VkCopyCommandTransformInfoQCOM(const VkCopyCommandTransformInfoQCOM* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkCopyCommandTransformInfoQCOM(const safe_VkCopyCommandTransformInfoQCOM& copy_src);
    safe_VkCopyCommandTransformInfoQCOM& operator=(const safe_VkCopyCommandTransformInfoQCOM& copy_src);
    safe_VkCopyCommandTransformInfoQCOM();
    ~safe_VkCopyCommandTransformInfoQCOM();
    void initialize(const VkCopyCommandTransformInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyCommandTransformInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkCopyCommandTransformInfoQCOM* ptr() { return reinterpret_cast<VkCopyCommandTransformInfoQCOM*>(this); }
    VkCopyCommandTransformInfoQCOM const* ptr() const { return reinterpret_cast<VkCopyCommandTransformInfoQCOM const*>(this); }
};
struct safe_VkImageCompressionControlEXT {
    VkStructureType sType;
    const void* pNext{};
    VkImageCompressionFlagsEXT flags;
    uint32_t compressionControlPlaneCount;
    VkImageCompressionFixedRateFlagsEXT* pFixedRateFlags{};

    safe_VkImageCompressionControlEXT(const VkImageCompressionControlEXT* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkImageCompressionControlEXT(const safe_VkImageCompressionControlEXT& copy_src);
    safe_VkImageCompressionControlEXT& operator=(const safe_VkImageCompressionControlEXT& copy_src);
    safe_VkImageCompressionControlEXT();
    ~safe_VkImageCompressionControlEXT();
    void initialize(const VkImageCompressionControlEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageCompressionControlEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageCompressionControlEXT* ptr() { return reinterpret_cast<VkImageCompressionControlEXT*>(this); }
    VkImageCompressionControlEXT const* ptr() const { return reinterpret_cast<VkImageCompressionControlEXT const*>(this); }
};
struct safe_VkImageCompressionPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkImageCompressionFlagsEXT imageCompressionFlags;
    VkImageCompressionFixedRateFlagsEXT imageCompressionFixedRateFlags;

    safe_VkImageCompressionPropertiesEXT(const VkImageCompressionPropertiesEXT* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkImageCompressionPropertiesEXT(const safe_VkImageCompressionPropertiesEXT& copy_src);
    safe_VkImageCompressionPropertiesEXT& operator=(const safe_VkImageCompressionPropertiesEXT& copy_src);
    safe_VkImageCompressionPropertiesEXT();
    ~safe_VkImageCompressionPropertiesEXT();
    void initialize(const VkImageCompressionPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageCompressionPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageCompressionPropertiesEXT* ptr() { return reinterpret_cast<VkImageCompressionPropertiesEXT*>(this); }
    VkImageCompressionPropertiesEXT const* ptr() const { return reinterpret_cast<VkImageCompressionPropertiesEXT const*>(this); }
};
struct safe_VkDeviceFaultCountsEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t addressInfoCount;
    uint32_t vendorInfoCount;
    VkDeviceSize vendorBinarySize;

    safe_VkDeviceFaultCountsEXT(const VkDeviceFaultCountsEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceFaultCountsEXT(const safe_VkDeviceFaultCountsEXT& copy_src);
    safe_VkDeviceFaultCountsEXT& operator=(const safe_VkDeviceFaultCountsEXT& copy_src);
    safe_VkDeviceFaultCountsEXT();
    ~safe_VkDeviceFaultCountsEXT();
    void initialize(const VkDeviceFaultCountsEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceFaultCountsEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceFaultCountsEXT* ptr() { return reinterpret_cast<VkDeviceFaultCountsEXT*>(this); }
    VkDeviceFaultCountsEXT const* ptr() const { return reinterpret_cast<VkDeviceFaultCountsEXT const*>(this); }
};
struct safe_VkDeviceFaultInfoEXT {
    VkStructureType sType;
    void* pNext{};
    char description[VK_MAX_DESCRIPTION_SIZE];
    VkDeviceFaultAddressInfoEXT* pAddressInfos{};
    VkDeviceFaultVendorInfoEXT* pVendorInfos{};
    void* pVendorBinaryData{};

    safe_VkDeviceFaultInfoEXT(const VkDeviceFaultInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceFaultInfoEXT(const safe_VkDeviceFaultInfoEXT& copy_src);
    safe_VkDeviceFaultInfoEXT& operator=(const safe_VkDeviceFaultInfoEXT& copy_src);
    safe_VkDeviceFaultInfoEXT();
    ~safe_VkDeviceFaultInfoEXT();
    void initialize(const VkDeviceFaultInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceFaultInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceFaultInfoEXT* ptr() { return reinterpret_cast<VkDeviceFaultInfoEXT*>(this); }
    VkDeviceFaultInfoEXT const* ptr() const { return reinterpret_cast<VkDeviceFaultInfoEXT const*>(this); }
};
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
struct safe_VkDirectFBSurfaceCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDirectFBSurfaceCreateFlagsEXT flags;
    IDirectFB* dfb{};
    IDirectFBSurface* surface{};

    safe_VkDirectFBSurfaceCreateInfoEXT(const VkDirectFBSurfaceCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkDirectFBSurfaceCreateInfoEXT(const safe_VkDirectFBSurfaceCreateInfoEXT& copy_src);
    safe_VkDirectFBSurfaceCreateInfoEXT& operator=(const safe_VkDirectFBSurfaceCreateInfoEXT& copy_src);
    safe_VkDirectFBSurfaceCreateInfoEXT();
    ~safe_VkDirectFBSurfaceCreateInfoEXT();
    void initialize(const VkDirectFBSurfaceCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDirectFBSurfaceCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkDirectFBSurfaceCreateInfoEXT* ptr() { return reinterpret_cast<VkDirectFBSurfaceCreateInfoEXT*>(this); }
    VkDirectFBSurfaceCreateInfoEXT const* ptr() const { return reinterpret_cast<VkDirectFBSurfaceCreateInfoEXT const*>(this); }
};
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
struct safe_VkMutableDescriptorTypeListEXT {
    uint32_t descriptorTypeCount;
    const VkDescriptorType* pDescriptorTypes{};

    safe_VkMutableDescriptorTypeListEXT(const VkMutableDescriptorTypeListEXT* in_struct, PNextCopyState* copy_state = {});
    safe_VkMutableDescriptorTypeListEXT(const safe_VkMutableDescriptorTypeListEXT& copy_src);
    safe_VkMutableDescriptorTypeListEXT& operator=(const safe_VkMutableDescriptorTypeListEXT& copy_src);
    safe_VkMutableDescriptorTypeListEXT();
    ~safe_VkMutableDescriptorTypeListEXT();
    void initialize(const VkMutableDescriptorTypeListEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMutableDescriptorTypeListEXT* copy_src, PNextCopyState* copy_state = {});
    VkMutableDescriptorTypeListEXT* ptr() { return reinterpret_cast<VkMutableDescriptorTypeListEXT*>(this); }
    VkMutableDescriptorTypeListEXT const* ptr() const { return reinterpret_cast<VkMutableDescriptorTypeListEXT const*>(this); }
};
struct safe_VkMutableDescriptorTypeCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t mutableDescriptorTypeListCount;
    safe_VkMutableDescriptorTypeListEXT* pMutableDescriptorTypeLists{};

    safe_VkMutableDescriptorTypeCreateInfoEXT(const VkMutableDescriptorTypeCreateInfoEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMutableDescriptorTypeCreateInfoEXT(const safe_VkMutableDescriptorTypeCreateInfoEXT& copy_src);
    safe_VkMutableDescriptorTypeCreateInfoEXT& operator=(const safe_VkMutableDescriptorTypeCreateInfoEXT& copy_src);
    safe_VkMutableDescriptorTypeCreateInfoEXT();
    ~safe_VkMutableDescriptorTypeCreateInfoEXT();
    void initialize(const VkMutableDescriptorTypeCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMutableDescriptorTypeCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMutableDescriptorTypeCreateInfoEXT* ptr() { return reinterpret_cast<VkMutableDescriptorTypeCreateInfoEXT*>(this); }
    VkMutableDescriptorTypeCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkMutableDescriptorTypeCreateInfoEXT const*>(this);
    }
};
struct safe_VkVertexInputBindingDescription2EXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t binding;
    uint32_t stride;
    VkVertexInputRate inputRate;
    uint32_t divisor;

    safe_VkVertexInputBindingDescription2EXT(const VkVertexInputBindingDescription2EXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkVertexInputBindingDescription2EXT(const safe_VkVertexInputBindingDescription2EXT& copy_src);
    safe_VkVertexInputBindingDescription2EXT& operator=(const safe_VkVertexInputBindingDescription2EXT& copy_src);
    safe_VkVertexInputBindingDescription2EXT();
    ~safe_VkVertexInputBindingDescription2EXT();
    void initialize(const VkVertexInputBindingDescription2EXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVertexInputBindingDescription2EXT* copy_src, PNextCopyState* copy_state = {});
    VkVertexInputBindingDescription2EXT* ptr() { return reinterpret_cast<VkVertexInputBindingDescription2EXT*>(this); }
    VkVertexInputBindingDescription2EXT const* ptr() const {
        return reinterpret_cast<VkVertexInputBindingDescription2EXT const*>(this);
    }
};
struct safe_VkVertexInputAttributeDescription2EXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t location;
    uint32_t binding;
    VkFormat format;
    uint32_t offset;

    safe_VkVertexInputAttributeDescription2EXT(const VkVertexInputAttributeDescription2EXT* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkVertexInputAttributeDescription2EXT(const safe_VkVertexInputAttributeDescription2EXT& copy_src);
    safe_VkVertexInputAttributeDescription2EXT& operator=(const safe_VkVertexInputAttributeDescription2EXT& copy_src);
    safe_VkVertexInputAttributeDescription2EXT();
    ~safe_VkVertexInputAttributeDescription2EXT();
    void initialize(const VkVertexInputAttributeDescription2EXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkVertexInputAttributeDescription2EXT* copy_src, PNextCopyState* copy_state = {});
    VkVertexInputAttributeDescription2EXT* ptr() { return reinterpret_cast<VkVertexInputAttributeDescription2EXT*>(this); }
    VkVertexInputAttributeDescription2EXT const* ptr() const {
        return reinterpret_cast<VkVertexInputAttributeDescription2EXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceDrmPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 hasPrimary;
    VkBool32 hasRender;
    int64_t primaryMajor;
    int64_t primaryMinor;
    int64_t renderMajor;
    int64_t renderMinor;

    safe_VkPhysicalDeviceDrmPropertiesEXT(const VkPhysicalDeviceDrmPropertiesEXT* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkPhysicalDeviceDrmPropertiesEXT(const safe_VkPhysicalDeviceDrmPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDrmPropertiesEXT& operator=(const safe_VkPhysicalDeviceDrmPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceDrmPropertiesEXT();
    ~safe_VkPhysicalDeviceDrmPropertiesEXT();
    void initialize(const VkPhysicalDeviceDrmPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDrmPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDrmPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceDrmPropertiesEXT*>(this); }
    VkPhysicalDeviceDrmPropertiesEXT const* ptr() const { return reinterpret_cast<VkPhysicalDeviceDrmPropertiesEXT const*>(this); }
};
struct safe_VkDeviceAddressBindingCallbackDataEXT {
    VkStructureType sType;
    void* pNext{};
    VkDeviceAddressBindingFlagsEXT flags;
    VkDeviceAddress baseAddress;
    VkDeviceSize size;
    VkDeviceAddressBindingTypeEXT bindingType;

    safe_VkDeviceAddressBindingCallbackDataEXT(const VkDeviceAddressBindingCallbackDataEXT* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceAddressBindingCallbackDataEXT(const safe_VkDeviceAddressBindingCallbackDataEXT& copy_src);
    safe_VkDeviceAddressBindingCallbackDataEXT& operator=(const safe_VkDeviceAddressBindingCallbackDataEXT& copy_src);
    safe_VkDeviceAddressBindingCallbackDataEXT();
    ~safe_VkDeviceAddressBindingCallbackDataEXT();
    void initialize(const VkDeviceAddressBindingCallbackDataEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceAddressBindingCallbackDataEXT* copy_src, PNextCopyState* copy_state = {});
    VkDeviceAddressBindingCallbackDataEXT* ptr() { return reinterpret_cast<VkDeviceAddressBindingCallbackDataEXT*>(this); }
    VkDeviceAddressBindingCallbackDataEXT const* ptr() const {
        return reinterpret_cast<VkDeviceAddressBindingCallbackDataEXT const*>(this);
    }
};
struct safe_VkPipelineViewportDepthClipControlCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 negativeOneToOne;

    safe_VkPipelineViewportDepthClipControlCreateInfoEXT(const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineViewportDepthClipControlCreateInfoEXT(const safe_VkPipelineViewportDepthClipControlCreateInfoEXT& copy_src);
    safe_VkPipelineViewportDepthClipControlCreateInfoEXT& operator=(
        const safe_VkPipelineViewportDepthClipControlCreateInfoEXT& copy_src);
    safe_VkPipelineViewportDepthClipControlCreateInfoEXT();
    ~safe_VkPipelineViewportDepthClipControlCreateInfoEXT();
    void initialize(const VkPipelineViewportDepthClipControlCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineViewportDepthClipControlCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineViewportDepthClipControlCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineViewportDepthClipControlCreateInfoEXT*>(this);
    }
    VkPipelineViewportDepthClipControlCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineViewportDepthClipControlCreateInfoEXT const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_FUCHSIA
struct safe_VkImportMemoryZirconHandleInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkExternalMemoryHandleTypeFlagBits handleType;
    zx_handle_t handle;

    safe_VkImportMemoryZirconHandleInfoFUCHSIA(const VkImportMemoryZirconHandleInfoFUCHSIA* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportMemoryZirconHandleInfoFUCHSIA(const safe_VkImportMemoryZirconHandleInfoFUCHSIA& copy_src);
    safe_VkImportMemoryZirconHandleInfoFUCHSIA& operator=(const safe_VkImportMemoryZirconHandleInfoFUCHSIA& copy_src);
    safe_VkImportMemoryZirconHandleInfoFUCHSIA();
    ~safe_VkImportMemoryZirconHandleInfoFUCHSIA();
    void initialize(const VkImportMemoryZirconHandleInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryZirconHandleInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryZirconHandleInfoFUCHSIA* ptr() { return reinterpret_cast<VkImportMemoryZirconHandleInfoFUCHSIA*>(this); }
    VkImportMemoryZirconHandleInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkImportMemoryZirconHandleInfoFUCHSIA const*>(this);
    }
};
struct safe_VkMemoryZirconHandlePropertiesFUCHSIA {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryTypeBits;

    safe_VkMemoryZirconHandlePropertiesFUCHSIA(const VkMemoryZirconHandlePropertiesFUCHSIA* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMemoryZirconHandlePropertiesFUCHSIA(const safe_VkMemoryZirconHandlePropertiesFUCHSIA& copy_src);
    safe_VkMemoryZirconHandlePropertiesFUCHSIA& operator=(const safe_VkMemoryZirconHandlePropertiesFUCHSIA& copy_src);
    safe_VkMemoryZirconHandlePropertiesFUCHSIA();
    ~safe_VkMemoryZirconHandlePropertiesFUCHSIA();
    void initialize(const VkMemoryZirconHandlePropertiesFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryZirconHandlePropertiesFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkMemoryZirconHandlePropertiesFUCHSIA* ptr() { return reinterpret_cast<VkMemoryZirconHandlePropertiesFUCHSIA*>(this); }
    VkMemoryZirconHandlePropertiesFUCHSIA const* ptr() const {
        return reinterpret_cast<VkMemoryZirconHandlePropertiesFUCHSIA const*>(this);
    }
};
struct safe_VkMemoryGetZirconHandleInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkMemoryGetZirconHandleInfoFUCHSIA(const VkMemoryGetZirconHandleInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkMemoryGetZirconHandleInfoFUCHSIA(const safe_VkMemoryGetZirconHandleInfoFUCHSIA& copy_src);
    safe_VkMemoryGetZirconHandleInfoFUCHSIA& operator=(const safe_VkMemoryGetZirconHandleInfoFUCHSIA& copy_src);
    safe_VkMemoryGetZirconHandleInfoFUCHSIA();
    ~safe_VkMemoryGetZirconHandleInfoFUCHSIA();
    void initialize(const VkMemoryGetZirconHandleInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryGetZirconHandleInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkMemoryGetZirconHandleInfoFUCHSIA* ptr() { return reinterpret_cast<VkMemoryGetZirconHandleInfoFUCHSIA*>(this); }
    VkMemoryGetZirconHandleInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkMemoryGetZirconHandleInfoFUCHSIA const*>(this);
    }
};
struct safe_VkImportSemaphoreZirconHandleInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkSemaphoreImportFlags flags;
    VkExternalSemaphoreHandleTypeFlagBits handleType;
    zx_handle_t zirconHandle;

    safe_VkImportSemaphoreZirconHandleInfoFUCHSIA(const VkImportSemaphoreZirconHandleInfoFUCHSIA* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportSemaphoreZirconHandleInfoFUCHSIA(const safe_VkImportSemaphoreZirconHandleInfoFUCHSIA& copy_src);
    safe_VkImportSemaphoreZirconHandleInfoFUCHSIA& operator=(const safe_VkImportSemaphoreZirconHandleInfoFUCHSIA& copy_src);
    safe_VkImportSemaphoreZirconHandleInfoFUCHSIA();
    ~safe_VkImportSemaphoreZirconHandleInfoFUCHSIA();
    void initialize(const VkImportSemaphoreZirconHandleInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportSemaphoreZirconHandleInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImportSemaphoreZirconHandleInfoFUCHSIA* ptr() { return reinterpret_cast<VkImportSemaphoreZirconHandleInfoFUCHSIA*>(this); }
    VkImportSemaphoreZirconHandleInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkImportSemaphoreZirconHandleInfoFUCHSIA const*>(this);
    }
};
struct safe_VkSemaphoreGetZirconHandleInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBits handleType;

    safe_VkSemaphoreGetZirconHandleInfoFUCHSIA(const VkSemaphoreGetZirconHandleInfoFUCHSIA* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSemaphoreGetZirconHandleInfoFUCHSIA(const safe_VkSemaphoreGetZirconHandleInfoFUCHSIA& copy_src);
    safe_VkSemaphoreGetZirconHandleInfoFUCHSIA& operator=(const safe_VkSemaphoreGetZirconHandleInfoFUCHSIA& copy_src);
    safe_VkSemaphoreGetZirconHandleInfoFUCHSIA();
    ~safe_VkSemaphoreGetZirconHandleInfoFUCHSIA();
    void initialize(const VkSemaphoreGetZirconHandleInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSemaphoreGetZirconHandleInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkSemaphoreGetZirconHandleInfoFUCHSIA* ptr() { return reinterpret_cast<VkSemaphoreGetZirconHandleInfoFUCHSIA*>(this); }
    VkSemaphoreGetZirconHandleInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkSemaphoreGetZirconHandleInfoFUCHSIA const*>(this);
    }
};
struct safe_VkBufferCollectionCreateInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    zx_handle_t collectionToken;

    safe_VkBufferCollectionCreateInfoFUCHSIA(const VkBufferCollectionCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkBufferCollectionCreateInfoFUCHSIA(const safe_VkBufferCollectionCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionCreateInfoFUCHSIA& operator=(const safe_VkBufferCollectionCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionCreateInfoFUCHSIA();
    ~safe_VkBufferCollectionCreateInfoFUCHSIA();
    void initialize(const VkBufferCollectionCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCollectionCreateInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferCollectionCreateInfoFUCHSIA* ptr() { return reinterpret_cast<VkBufferCollectionCreateInfoFUCHSIA*>(this); }
    VkBufferCollectionCreateInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkBufferCollectionCreateInfoFUCHSIA const*>(this);
    }
};
struct safe_VkImportMemoryBufferCollectionFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkBufferCollectionFUCHSIA collection;
    uint32_t index;

    safe_VkImportMemoryBufferCollectionFUCHSIA(const VkImportMemoryBufferCollectionFUCHSIA* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImportMemoryBufferCollectionFUCHSIA(const safe_VkImportMemoryBufferCollectionFUCHSIA& copy_src);
    safe_VkImportMemoryBufferCollectionFUCHSIA& operator=(const safe_VkImportMemoryBufferCollectionFUCHSIA& copy_src);
    safe_VkImportMemoryBufferCollectionFUCHSIA();
    ~safe_VkImportMemoryBufferCollectionFUCHSIA();
    void initialize(const VkImportMemoryBufferCollectionFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportMemoryBufferCollectionFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImportMemoryBufferCollectionFUCHSIA* ptr() { return reinterpret_cast<VkImportMemoryBufferCollectionFUCHSIA*>(this); }
    VkImportMemoryBufferCollectionFUCHSIA const* ptr() const {
        return reinterpret_cast<VkImportMemoryBufferCollectionFUCHSIA const*>(this);
    }
};
struct safe_VkBufferCollectionImageCreateInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkBufferCollectionFUCHSIA collection;
    uint32_t index;

    safe_VkBufferCollectionImageCreateInfoFUCHSIA(const VkBufferCollectionImageCreateInfoFUCHSIA* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCollectionImageCreateInfoFUCHSIA(const safe_VkBufferCollectionImageCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionImageCreateInfoFUCHSIA& operator=(const safe_VkBufferCollectionImageCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionImageCreateInfoFUCHSIA();
    ~safe_VkBufferCollectionImageCreateInfoFUCHSIA();
    void initialize(const VkBufferCollectionImageCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCollectionImageCreateInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferCollectionImageCreateInfoFUCHSIA* ptr() { return reinterpret_cast<VkBufferCollectionImageCreateInfoFUCHSIA*>(this); }
    VkBufferCollectionImageCreateInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkBufferCollectionImageCreateInfoFUCHSIA const*>(this);
    }
};
struct safe_VkBufferCollectionConstraintsInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    uint32_t minBufferCount;
    uint32_t maxBufferCount;
    uint32_t minBufferCountForCamping;
    uint32_t minBufferCountForDedicatedSlack;
    uint32_t minBufferCountForSharedSlack;

    safe_VkBufferCollectionConstraintsInfoFUCHSIA(const VkBufferCollectionConstraintsInfoFUCHSIA* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCollectionConstraintsInfoFUCHSIA(const safe_VkBufferCollectionConstraintsInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionConstraintsInfoFUCHSIA& operator=(const safe_VkBufferCollectionConstraintsInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionConstraintsInfoFUCHSIA();
    ~safe_VkBufferCollectionConstraintsInfoFUCHSIA();
    void initialize(const VkBufferCollectionConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCollectionConstraintsInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferCollectionConstraintsInfoFUCHSIA* ptr() { return reinterpret_cast<VkBufferCollectionConstraintsInfoFUCHSIA*>(this); }
    VkBufferCollectionConstraintsInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkBufferCollectionConstraintsInfoFUCHSIA const*>(this);
    }
};
struct safe_VkBufferConstraintsInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    safe_VkBufferCreateInfo createInfo;
    VkFormatFeatureFlags requiredFormatFeatures;
    safe_VkBufferCollectionConstraintsInfoFUCHSIA bufferCollectionConstraints;

    safe_VkBufferConstraintsInfoFUCHSIA(const VkBufferConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkBufferConstraintsInfoFUCHSIA(const safe_VkBufferConstraintsInfoFUCHSIA& copy_src);
    safe_VkBufferConstraintsInfoFUCHSIA& operator=(const safe_VkBufferConstraintsInfoFUCHSIA& copy_src);
    safe_VkBufferConstraintsInfoFUCHSIA();
    ~safe_VkBufferConstraintsInfoFUCHSIA();
    void initialize(const VkBufferConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferConstraintsInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferConstraintsInfoFUCHSIA* ptr() { return reinterpret_cast<VkBufferConstraintsInfoFUCHSIA*>(this); }
    VkBufferConstraintsInfoFUCHSIA const* ptr() const { return reinterpret_cast<VkBufferConstraintsInfoFUCHSIA const*>(this); }
};
struct safe_VkBufferCollectionBufferCreateInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    VkBufferCollectionFUCHSIA collection;
    uint32_t index;

    safe_VkBufferCollectionBufferCreateInfoFUCHSIA(const VkBufferCollectionBufferCreateInfoFUCHSIA* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkBufferCollectionBufferCreateInfoFUCHSIA(const safe_VkBufferCollectionBufferCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionBufferCreateInfoFUCHSIA& operator=(const safe_VkBufferCollectionBufferCreateInfoFUCHSIA& copy_src);
    safe_VkBufferCollectionBufferCreateInfoFUCHSIA();
    ~safe_VkBufferCollectionBufferCreateInfoFUCHSIA();
    void initialize(const VkBufferCollectionBufferCreateInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCollectionBufferCreateInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferCollectionBufferCreateInfoFUCHSIA* ptr() { return reinterpret_cast<VkBufferCollectionBufferCreateInfoFUCHSIA*>(this); }
    VkBufferCollectionBufferCreateInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkBufferCollectionBufferCreateInfoFUCHSIA const*>(this);
    }
};
struct safe_VkSysmemColorSpaceFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    uint32_t colorSpace;

    safe_VkSysmemColorSpaceFUCHSIA(const VkSysmemColorSpaceFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkSysmemColorSpaceFUCHSIA(const safe_VkSysmemColorSpaceFUCHSIA& copy_src);
    safe_VkSysmemColorSpaceFUCHSIA& operator=(const safe_VkSysmemColorSpaceFUCHSIA& copy_src);
    safe_VkSysmemColorSpaceFUCHSIA();
    ~safe_VkSysmemColorSpaceFUCHSIA();
    void initialize(const VkSysmemColorSpaceFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSysmemColorSpaceFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkSysmemColorSpaceFUCHSIA* ptr() { return reinterpret_cast<VkSysmemColorSpaceFUCHSIA*>(this); }
    VkSysmemColorSpaceFUCHSIA const* ptr() const { return reinterpret_cast<VkSysmemColorSpaceFUCHSIA const*>(this); }
};
struct safe_VkBufferCollectionPropertiesFUCHSIA {
    VkStructureType sType;
    void* pNext{};
    uint32_t memoryTypeBits;
    uint32_t bufferCount;
    uint32_t createInfoIndex;
    uint64_t sysmemPixelFormat;
    VkFormatFeatureFlags formatFeatures;
    safe_VkSysmemColorSpaceFUCHSIA sysmemColorSpaceIndex;
    VkComponentMapping samplerYcbcrConversionComponents;
    VkSamplerYcbcrModelConversion suggestedYcbcrModel;
    VkSamplerYcbcrRange suggestedYcbcrRange;
    VkChromaLocation suggestedXChromaOffset;
    VkChromaLocation suggestedYChromaOffset;

    safe_VkBufferCollectionPropertiesFUCHSIA(const VkBufferCollectionPropertiesFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkBufferCollectionPropertiesFUCHSIA(const safe_VkBufferCollectionPropertiesFUCHSIA& copy_src);
    safe_VkBufferCollectionPropertiesFUCHSIA& operator=(const safe_VkBufferCollectionPropertiesFUCHSIA& copy_src);
    safe_VkBufferCollectionPropertiesFUCHSIA();
    ~safe_VkBufferCollectionPropertiesFUCHSIA();
    void initialize(const VkBufferCollectionPropertiesFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBufferCollectionPropertiesFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkBufferCollectionPropertiesFUCHSIA* ptr() { return reinterpret_cast<VkBufferCollectionPropertiesFUCHSIA*>(this); }
    VkBufferCollectionPropertiesFUCHSIA const* ptr() const {
        return reinterpret_cast<VkBufferCollectionPropertiesFUCHSIA const*>(this);
    }
};
struct safe_VkImageFormatConstraintsInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    safe_VkImageCreateInfo imageCreateInfo;
    VkFormatFeatureFlags requiredFormatFeatures;
    VkImageFormatConstraintsFlagsFUCHSIA flags;
    uint64_t sysmemPixelFormat;
    uint32_t colorSpaceCount;
    safe_VkSysmemColorSpaceFUCHSIA* pColorSpaces{};

    safe_VkImageFormatConstraintsInfoFUCHSIA(const VkImageFormatConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkImageFormatConstraintsInfoFUCHSIA(const safe_VkImageFormatConstraintsInfoFUCHSIA& copy_src);
    safe_VkImageFormatConstraintsInfoFUCHSIA& operator=(const safe_VkImageFormatConstraintsInfoFUCHSIA& copy_src);
    safe_VkImageFormatConstraintsInfoFUCHSIA();
    ~safe_VkImageFormatConstraintsInfoFUCHSIA();
    void initialize(const VkImageFormatConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageFormatConstraintsInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImageFormatConstraintsInfoFUCHSIA* ptr() { return reinterpret_cast<VkImageFormatConstraintsInfoFUCHSIA*>(this); }
    VkImageFormatConstraintsInfoFUCHSIA const* ptr() const {
        return reinterpret_cast<VkImageFormatConstraintsInfoFUCHSIA const*>(this);
    }
};
struct safe_VkImageConstraintsInfoFUCHSIA {
    VkStructureType sType;
    const void* pNext{};
    uint32_t formatConstraintsCount;
    safe_VkImageFormatConstraintsInfoFUCHSIA* pFormatConstraints{};
    safe_VkBufferCollectionConstraintsInfoFUCHSIA bufferCollectionConstraints;
    VkImageConstraintsInfoFlagsFUCHSIA flags;

    safe_VkImageConstraintsInfoFUCHSIA(const VkImageConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkImageConstraintsInfoFUCHSIA(const safe_VkImageConstraintsInfoFUCHSIA& copy_src);
    safe_VkImageConstraintsInfoFUCHSIA& operator=(const safe_VkImageConstraintsInfoFUCHSIA& copy_src);
    safe_VkImageConstraintsInfoFUCHSIA();
    ~safe_VkImageConstraintsInfoFUCHSIA();
    void initialize(const VkImageConstraintsInfoFUCHSIA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageConstraintsInfoFUCHSIA* copy_src, PNextCopyState* copy_state = {});
    VkImageConstraintsInfoFUCHSIA* ptr() { return reinterpret_cast<VkImageConstraintsInfoFUCHSIA*>(this); }
    VkImageConstraintsInfoFUCHSIA const* ptr() const { return reinterpret_cast<VkImageConstraintsInfoFUCHSIA const*>(this); }
};
#endif  // VK_USE_PLATFORM_FUCHSIA
struct safe_VkSubpassShadingPipelineCreateInfoHUAWEI {
    VkStructureType sType;
    void* pNext{};
    VkRenderPass renderPass;
    uint32_t subpass;

    safe_VkSubpassShadingPipelineCreateInfoHUAWEI(const VkSubpassShadingPipelineCreateInfoHUAWEI* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassShadingPipelineCreateInfoHUAWEI(const safe_VkSubpassShadingPipelineCreateInfoHUAWEI& copy_src);
    safe_VkSubpassShadingPipelineCreateInfoHUAWEI& operator=(const safe_VkSubpassShadingPipelineCreateInfoHUAWEI& copy_src);
    safe_VkSubpassShadingPipelineCreateInfoHUAWEI();
    ~safe_VkSubpassShadingPipelineCreateInfoHUAWEI();
    void initialize(const VkSubpassShadingPipelineCreateInfoHUAWEI* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassShadingPipelineCreateInfoHUAWEI* copy_src, PNextCopyState* copy_state = {});
    VkSubpassShadingPipelineCreateInfoHUAWEI* ptr() { return reinterpret_cast<VkSubpassShadingPipelineCreateInfoHUAWEI*>(this); }
    VkSubpassShadingPipelineCreateInfoHUAWEI const* ptr() const {
        return reinterpret_cast<VkSubpassShadingPipelineCreateInfoHUAWEI const*>(this);
    }
};
struct safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxSubpassShadingWorkgroupSizeAspectRatio;

    safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(const safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI& copy_src);
    safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI& operator=(
        const safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI& copy_src);
    safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI();
    ~safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI();
    void initialize(const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSubpassShadingPropertiesHUAWEI* ptr() {
        return reinterpret_cast<VkPhysicalDeviceSubpassShadingPropertiesHUAWEI*>(this);
    }
    VkPhysicalDeviceSubpassShadingPropertiesHUAWEI const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSubpassShadingPropertiesHUAWEI const*>(this);
    }
};
struct safe_VkMemoryGetRemoteAddressInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBits handleType;

    safe_VkMemoryGetRemoteAddressInfoNV(const VkMemoryGetRemoteAddressInfoNV* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkMemoryGetRemoteAddressInfoNV(const safe_VkMemoryGetRemoteAddressInfoNV& copy_src);
    safe_VkMemoryGetRemoteAddressInfoNV& operator=(const safe_VkMemoryGetRemoteAddressInfoNV& copy_src);
    safe_VkMemoryGetRemoteAddressInfoNV();
    ~safe_VkMemoryGetRemoteAddressInfoNV();
    void initialize(const VkMemoryGetRemoteAddressInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMemoryGetRemoteAddressInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkMemoryGetRemoteAddressInfoNV* ptr() { return reinterpret_cast<VkMemoryGetRemoteAddressInfoNV*>(this); }
    VkMemoryGetRemoteAddressInfoNV const* ptr() const { return reinterpret_cast<VkMemoryGetRemoteAddressInfoNV const*>(this); }
};
struct safe_VkPipelinePropertiesIdentifierEXT {
    VkStructureType sType;
    void* pNext{};
    uint8_t pipelineIdentifier[VK_UUID_SIZE];

    safe_VkPipelinePropertiesIdentifierEXT(const VkPipelinePropertiesIdentifierEXT* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPipelinePropertiesIdentifierEXT(const safe_VkPipelinePropertiesIdentifierEXT& copy_src);
    safe_VkPipelinePropertiesIdentifierEXT& operator=(const safe_VkPipelinePropertiesIdentifierEXT& copy_src);
    safe_VkPipelinePropertiesIdentifierEXT();
    ~safe_VkPipelinePropertiesIdentifierEXT();
    void initialize(const VkPipelinePropertiesIdentifierEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelinePropertiesIdentifierEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelinePropertiesIdentifierEXT* ptr() { return reinterpret_cast<VkPipelinePropertiesIdentifierEXT*>(this); }
    VkPipelinePropertiesIdentifierEXT const* ptr() const {
        return reinterpret_cast<VkPipelinePropertiesIdentifierEXT const*>(this);
    }
};
struct safe_VkFrameBoundaryEXT {
    VkStructureType sType;
    const void* pNext{};
    VkFrameBoundaryFlagsEXT flags;
    uint64_t frameID;
    uint32_t imageCount;
    VkImage* pImages{};
    uint32_t bufferCount;
    VkBuffer* pBuffers{};
    uint64_t tagName;
    size_t tagSize;
    const void* pTag{};

    safe_VkFrameBoundaryEXT(const VkFrameBoundaryEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkFrameBoundaryEXT(const safe_VkFrameBoundaryEXT& copy_src);
    safe_VkFrameBoundaryEXT& operator=(const safe_VkFrameBoundaryEXT& copy_src);
    safe_VkFrameBoundaryEXT();
    ~safe_VkFrameBoundaryEXT();
    void initialize(const VkFrameBoundaryEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkFrameBoundaryEXT* copy_src, PNextCopyState* copy_state = {});
    VkFrameBoundaryEXT* ptr() { return reinterpret_cast<VkFrameBoundaryEXT*>(this); }
    VkFrameBoundaryEXT const* ptr() const { return reinterpret_cast<VkFrameBoundaryEXT const*>(this); }
};
struct safe_VkSubpassResolvePerformanceQueryEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 optimal;

    safe_VkSubpassResolvePerformanceQueryEXT(const VkSubpassResolvePerformanceQueryEXT* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkSubpassResolvePerformanceQueryEXT(const safe_VkSubpassResolvePerformanceQueryEXT& copy_src);
    safe_VkSubpassResolvePerformanceQueryEXT& operator=(const safe_VkSubpassResolvePerformanceQueryEXT& copy_src);
    safe_VkSubpassResolvePerformanceQueryEXT();
    ~safe_VkSubpassResolvePerformanceQueryEXT();
    void initialize(const VkSubpassResolvePerformanceQueryEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassResolvePerformanceQueryEXT* copy_src, PNextCopyState* copy_state = {});
    VkSubpassResolvePerformanceQueryEXT* ptr() { return reinterpret_cast<VkSubpassResolvePerformanceQueryEXT*>(this); }
    VkSubpassResolvePerformanceQueryEXT const* ptr() const {
        return reinterpret_cast<VkSubpassResolvePerformanceQueryEXT const*>(this);
    }
};
struct safe_VkMultisampledRenderToSingleSampledInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 multisampledRenderToSingleSampledEnable;
    VkSampleCountFlagBits rasterizationSamples;

    safe_VkMultisampledRenderToSingleSampledInfoEXT(const VkMultisampledRenderToSingleSampledInfoEXT* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMultisampledRenderToSingleSampledInfoEXT(const safe_VkMultisampledRenderToSingleSampledInfoEXT& copy_src);
    safe_VkMultisampledRenderToSingleSampledInfoEXT& operator=(const safe_VkMultisampledRenderToSingleSampledInfoEXT& copy_src);
    safe_VkMultisampledRenderToSingleSampledInfoEXT();
    ~safe_VkMultisampledRenderToSingleSampledInfoEXT();
    void initialize(const VkMultisampledRenderToSingleSampledInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMultisampledRenderToSingleSampledInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMultisampledRenderToSingleSampledInfoEXT* ptr() {
        return reinterpret_cast<VkMultisampledRenderToSingleSampledInfoEXT*>(this);
    }
    VkMultisampledRenderToSingleSampledInfoEXT const* ptr() const {
        return reinterpret_cast<VkMultisampledRenderToSingleSampledInfoEXT const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
struct safe_VkScreenSurfaceCreateInfoQNX {
    VkStructureType sType;
    const void* pNext{};
    VkScreenSurfaceCreateFlagsQNX flags;
    struct _screen_context* context{};
    struct _screen_window* window{};

    safe_VkScreenSurfaceCreateInfoQNX(const VkScreenSurfaceCreateInfoQNX* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkScreenSurfaceCreateInfoQNX(const safe_VkScreenSurfaceCreateInfoQNX& copy_src);
    safe_VkScreenSurfaceCreateInfoQNX& operator=(const safe_VkScreenSurfaceCreateInfoQNX& copy_src);
    safe_VkScreenSurfaceCreateInfoQNX();
    ~safe_VkScreenSurfaceCreateInfoQNX();
    void initialize(const VkScreenSurfaceCreateInfoQNX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkScreenSurfaceCreateInfoQNX* copy_src, PNextCopyState* copy_state = {});
    VkScreenSurfaceCreateInfoQNX* ptr() { return reinterpret_cast<VkScreenSurfaceCreateInfoQNX*>(this); }
    VkScreenSurfaceCreateInfoQNX const* ptr() const { return reinterpret_cast<VkScreenSurfaceCreateInfoQNX const*>(this); }
};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
struct safe_VkPipelineColorWriteCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t attachmentCount;
    const VkBool32* pColorWriteEnables{};

    safe_VkPipelineColorWriteCreateInfoEXT(const VkPipelineColorWriteCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkPipelineColorWriteCreateInfoEXT(const safe_VkPipelineColorWriteCreateInfoEXT& copy_src);
    safe_VkPipelineColorWriteCreateInfoEXT& operator=(const safe_VkPipelineColorWriteCreateInfoEXT& copy_src);
    safe_VkPipelineColorWriteCreateInfoEXT();
    ~safe_VkPipelineColorWriteCreateInfoEXT();
    void initialize(const VkPipelineColorWriteCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineColorWriteCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineColorWriteCreateInfoEXT* ptr() { return reinterpret_cast<VkPipelineColorWriteCreateInfoEXT*>(this); }
    VkPipelineColorWriteCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineColorWriteCreateInfoEXT const*>(this);
    }
};
struct safe_VkImageViewMinLodCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    float minLod;

    safe_VkImageViewMinLodCreateInfoEXT(const VkImageViewMinLodCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkImageViewMinLodCreateInfoEXT(const safe_VkImageViewMinLodCreateInfoEXT& copy_src);
    safe_VkImageViewMinLodCreateInfoEXT& operator=(const safe_VkImageViewMinLodCreateInfoEXT& copy_src);
    safe_VkImageViewMinLodCreateInfoEXT();
    ~safe_VkImageViewMinLodCreateInfoEXT();
    void initialize(const VkImageViewMinLodCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewMinLodCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageViewMinLodCreateInfoEXT* ptr() { return reinterpret_cast<VkImageViewMinLodCreateInfoEXT*>(this); }
    VkImageViewMinLodCreateInfoEXT const* ptr() const { return reinterpret_cast<VkImageViewMinLodCreateInfoEXT const*>(this); }
};
struct safe_VkPhysicalDeviceMultiDrawPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxMultiDrawCount;

    safe_VkPhysicalDeviceMultiDrawPropertiesEXT(const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct,
                                                PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMultiDrawPropertiesEXT(const safe_VkPhysicalDeviceMultiDrawPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMultiDrawPropertiesEXT& operator=(const safe_VkPhysicalDeviceMultiDrawPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMultiDrawPropertiesEXT();
    ~safe_VkPhysicalDeviceMultiDrawPropertiesEXT();
    void initialize(const VkPhysicalDeviceMultiDrawPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMultiDrawPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMultiDrawPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceMultiDrawPropertiesEXT*>(this); }
    VkPhysicalDeviceMultiDrawPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMultiDrawPropertiesEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderTileImagePropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 shaderTileImageCoherentReadAccelerated;
    VkBool32 shaderTileImageReadSampleFromPixelRateInvocation;
    VkBool32 shaderTileImageReadFromHelperInvocation;

    safe_VkPhysicalDeviceShaderTileImagePropertiesEXT(const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderTileImagePropertiesEXT(const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& operator=(const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderTileImagePropertiesEXT();
    ~safe_VkPhysicalDeviceShaderTileImagePropertiesEXT();
    void initialize(const VkPhysicalDeviceShaderTileImagePropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderTileImagePropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderTileImagePropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderTileImagePropertiesEXT*>(this);
    }
    VkPhysicalDeviceShaderTileImagePropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderTileImagePropertiesEXT const*>(this);
    }
};
union safe_VkDeviceOrHostAddressKHR {
    VkDeviceAddress deviceAddress;
    void* hostAddress{};

    safe_VkDeviceOrHostAddressKHR(const VkDeviceOrHostAddressKHR* in_struct, PNextCopyState* copy_state = {});
    safe_VkDeviceOrHostAddressKHR(const safe_VkDeviceOrHostAddressKHR& copy_src);
    safe_VkDeviceOrHostAddressKHR& operator=(const safe_VkDeviceOrHostAddressKHR& copy_src);
    safe_VkDeviceOrHostAddressKHR();
    ~safe_VkDeviceOrHostAddressKHR();
    void initialize(const VkDeviceOrHostAddressKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceOrHostAddressKHR* copy_src, PNextCopyState* copy_state = {});
    VkDeviceOrHostAddressKHR* ptr() { return reinterpret_cast<VkDeviceOrHostAddressKHR*>(this); }
    VkDeviceOrHostAddressKHR const* ptr() const { return reinterpret_cast<VkDeviceOrHostAddressKHR const*>(this); }
};
struct safe_VkMicromapBuildInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkMicromapTypeEXT type;
    VkBuildMicromapFlagsEXT flags;
    VkBuildMicromapModeEXT mode;
    VkMicromapEXT dstMicromap;
    uint32_t usageCountsCount;
    const VkMicromapUsageEXT* pUsageCounts{};
    const VkMicromapUsageEXT* const* ppUsageCounts{};
    safe_VkDeviceOrHostAddressConstKHR data;
    safe_VkDeviceOrHostAddressKHR scratchData;
    safe_VkDeviceOrHostAddressConstKHR triangleArray;
    VkDeviceSize triangleArrayStride;

    safe_VkMicromapBuildInfoEXT(const VkMicromapBuildInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMicromapBuildInfoEXT(const safe_VkMicromapBuildInfoEXT& copy_src);
    safe_VkMicromapBuildInfoEXT& operator=(const safe_VkMicromapBuildInfoEXT& copy_src);
    safe_VkMicromapBuildInfoEXT();
    ~safe_VkMicromapBuildInfoEXT();
    void initialize(const VkMicromapBuildInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMicromapBuildInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMicromapBuildInfoEXT* ptr() { return reinterpret_cast<VkMicromapBuildInfoEXT*>(this); }
    VkMicromapBuildInfoEXT const* ptr() const { return reinterpret_cast<VkMicromapBuildInfoEXT const*>(this); }
};
struct safe_VkMicromapCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkMicromapCreateFlagsEXT createFlags;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkMicromapTypeEXT type;
    VkDeviceAddress deviceAddress;

    safe_VkMicromapCreateInfoEXT(const VkMicromapCreateInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMicromapCreateInfoEXT(const safe_VkMicromapCreateInfoEXT& copy_src);
    safe_VkMicromapCreateInfoEXT& operator=(const safe_VkMicromapCreateInfoEXT& copy_src);
    safe_VkMicromapCreateInfoEXT();
    ~safe_VkMicromapCreateInfoEXT();
    void initialize(const VkMicromapCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMicromapCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMicromapCreateInfoEXT* ptr() { return reinterpret_cast<VkMicromapCreateInfoEXT*>(this); }
    VkMicromapCreateInfoEXT const* ptr() const { return reinterpret_cast<VkMicromapCreateInfoEXT const*>(this); }
};
struct safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxOpacity2StateSubdivisionLevel;
    uint32_t maxOpacity4StateSubdivisionLevel;

    safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT(const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT(const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& operator=(const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT();
    ~safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT();
    void initialize(const VkPhysicalDeviceOpacityMicromapPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceOpacityMicromapPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceOpacityMicromapPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceOpacityMicromapPropertiesEXT*>(this);
    }
    VkPhysicalDeviceOpacityMicromapPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceOpacityMicromapPropertiesEXT const*>(this);
    }
};
struct safe_VkMicromapVersionInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    const uint8_t* pVersionData{};

    safe_VkMicromapVersionInfoEXT(const VkMicromapVersionInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkMicromapVersionInfoEXT(const safe_VkMicromapVersionInfoEXT& copy_src);
    safe_VkMicromapVersionInfoEXT& operator=(const safe_VkMicromapVersionInfoEXT& copy_src);
    safe_VkMicromapVersionInfoEXT();
    ~safe_VkMicromapVersionInfoEXT();
    void initialize(const VkMicromapVersionInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMicromapVersionInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMicromapVersionInfoEXT* ptr() { return reinterpret_cast<VkMicromapVersionInfoEXT*>(this); }
    VkMicromapVersionInfoEXT const* ptr() const { return reinterpret_cast<VkMicromapVersionInfoEXT const*>(this); }
};
struct safe_VkCopyMicromapToMemoryInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkMicromapEXT src;
    safe_VkDeviceOrHostAddressKHR dst;
    VkCopyMicromapModeEXT mode;

    safe_VkCopyMicromapToMemoryInfoEXT(const VkCopyMicromapToMemoryInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkCopyMicromapToMemoryInfoEXT(const safe_VkCopyMicromapToMemoryInfoEXT& copy_src);
    safe_VkCopyMicromapToMemoryInfoEXT& operator=(const safe_VkCopyMicromapToMemoryInfoEXT& copy_src);
    safe_VkCopyMicromapToMemoryInfoEXT();
    ~safe_VkCopyMicromapToMemoryInfoEXT();
    void initialize(const VkCopyMicromapToMemoryInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyMicromapToMemoryInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyMicromapToMemoryInfoEXT* ptr() { return reinterpret_cast<VkCopyMicromapToMemoryInfoEXT*>(this); }
    VkCopyMicromapToMemoryInfoEXT const* ptr() const { return reinterpret_cast<VkCopyMicromapToMemoryInfoEXT const*>(this); }
};
struct safe_VkCopyMemoryToMicromapInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    safe_VkDeviceOrHostAddressConstKHR src;
    VkMicromapEXT dst;
    VkCopyMicromapModeEXT mode;

    safe_VkCopyMemoryToMicromapInfoEXT(const VkCopyMemoryToMicromapInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkCopyMemoryToMicromapInfoEXT(const safe_VkCopyMemoryToMicromapInfoEXT& copy_src);
    safe_VkCopyMemoryToMicromapInfoEXT& operator=(const safe_VkCopyMemoryToMicromapInfoEXT& copy_src);
    safe_VkCopyMemoryToMicromapInfoEXT();
    ~safe_VkCopyMemoryToMicromapInfoEXT();
    void initialize(const VkCopyMemoryToMicromapInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyMemoryToMicromapInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyMemoryToMicromapInfoEXT* ptr() { return reinterpret_cast<VkCopyMemoryToMicromapInfoEXT*>(this); }
    VkCopyMemoryToMicromapInfoEXT const* ptr() const { return reinterpret_cast<VkCopyMemoryToMicromapInfoEXT const*>(this); }
};
struct safe_VkCopyMicromapInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkMicromapEXT src;
    VkMicromapEXT dst;
    VkCopyMicromapModeEXT mode;

    safe_VkCopyMicromapInfoEXT(const VkCopyMicromapInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyMicromapInfoEXT(const safe_VkCopyMicromapInfoEXT& copy_src);
    safe_VkCopyMicromapInfoEXT& operator=(const safe_VkCopyMicromapInfoEXT& copy_src);
    safe_VkCopyMicromapInfoEXT();
    ~safe_VkCopyMicromapInfoEXT();
    void initialize(const VkCopyMicromapInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyMicromapInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkCopyMicromapInfoEXT* ptr() { return reinterpret_cast<VkCopyMicromapInfoEXT*>(this); }
    VkCopyMicromapInfoEXT const* ptr() const { return reinterpret_cast<VkCopyMicromapInfoEXT const*>(this); }
};
struct safe_VkMicromapBuildSizesInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize micromapSize;
    VkDeviceSize buildScratchSize;
    VkBool32 discardable;

    safe_VkMicromapBuildSizesInfoEXT(const VkMicromapBuildSizesInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkMicromapBuildSizesInfoEXT(const safe_VkMicromapBuildSizesInfoEXT& copy_src);
    safe_VkMicromapBuildSizesInfoEXT& operator=(const safe_VkMicromapBuildSizesInfoEXT& copy_src);
    safe_VkMicromapBuildSizesInfoEXT();
    ~safe_VkMicromapBuildSizesInfoEXT();
    void initialize(const VkMicromapBuildSizesInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMicromapBuildSizesInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkMicromapBuildSizesInfoEXT* ptr() { return reinterpret_cast<VkMicromapBuildSizesInfoEXT*>(this); }
    VkMicromapBuildSizesInfoEXT const* ptr() const { return reinterpret_cast<VkMicromapBuildSizesInfoEXT const*>(this); }
};
struct safe_VkAccelerationStructureTrianglesOpacityMicromapEXT {
    VkStructureType sType;
    void* pNext{};
    VkIndexType indexType;
    safe_VkDeviceOrHostAddressConstKHR indexBuffer;
    VkDeviceSize indexStride;
    uint32_t baseTriangle;
    uint32_t usageCountsCount;
    const VkMicromapUsageEXT* pUsageCounts{};
    const VkMicromapUsageEXT* const* ppUsageCounts{};
    VkMicromapEXT micromap;

    safe_VkAccelerationStructureTrianglesOpacityMicromapEXT(const VkAccelerationStructureTrianglesOpacityMicromapEXT* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureTrianglesOpacityMicromapEXT(
        const safe_VkAccelerationStructureTrianglesOpacityMicromapEXT& copy_src);
    safe_VkAccelerationStructureTrianglesOpacityMicromapEXT& operator=(
        const safe_VkAccelerationStructureTrianglesOpacityMicromapEXT& copy_src);
    safe_VkAccelerationStructureTrianglesOpacityMicromapEXT();
    ~safe_VkAccelerationStructureTrianglesOpacityMicromapEXT();
    void initialize(const VkAccelerationStructureTrianglesOpacityMicromapEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureTrianglesOpacityMicromapEXT* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureTrianglesOpacityMicromapEXT* ptr() {
        return reinterpret_cast<VkAccelerationStructureTrianglesOpacityMicromapEXT*>(this);
    }
    VkAccelerationStructureTrianglesOpacityMicromapEXT const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureTrianglesOpacityMicromapEXT const*>(this);
    }
};
#ifdef VK_ENABLE_BETA_EXTENSIONS
struct safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxDisplacementMicromapSubdivisionLevel;

    safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV(const VkPhysicalDeviceDisplacementMicromapPropertiesNV* in_struct,
                                                          PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV(const safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV& copy_src);
    safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV& operator=(
        const safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV& copy_src);
    safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV();
    ~safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV();
    void initialize(const VkPhysicalDeviceDisplacementMicromapPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceDisplacementMicromapPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceDisplacementMicromapPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceDisplacementMicromapPropertiesNV*>(this);
    }
    VkPhysicalDeviceDisplacementMicromapPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceDisplacementMicromapPropertiesNV const*>(this);
    }
};
struct safe_VkAccelerationStructureTrianglesDisplacementMicromapNV {
    VkStructureType sType;
    void* pNext{};
    VkFormat displacementBiasAndScaleFormat;
    VkFormat displacementVectorFormat;
    safe_VkDeviceOrHostAddressConstKHR displacementBiasAndScaleBuffer;
    VkDeviceSize displacementBiasAndScaleStride;
    safe_VkDeviceOrHostAddressConstKHR displacementVectorBuffer;
    VkDeviceSize displacementVectorStride;
    safe_VkDeviceOrHostAddressConstKHR displacedMicromapPrimitiveFlags;
    VkDeviceSize displacedMicromapPrimitiveFlagsStride;
    VkIndexType indexType;
    safe_VkDeviceOrHostAddressConstKHR indexBuffer;
    VkDeviceSize indexStride;
    uint32_t baseTriangle;
    uint32_t usageCountsCount;
    const VkMicromapUsageEXT* pUsageCounts{};
    const VkMicromapUsageEXT* const* ppUsageCounts{};
    VkMicromapEXT micromap;

    safe_VkAccelerationStructureTrianglesDisplacementMicromapNV(
        const VkAccelerationStructureTrianglesDisplacementMicromapNV* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkAccelerationStructureTrianglesDisplacementMicromapNV(
        const safe_VkAccelerationStructureTrianglesDisplacementMicromapNV& copy_src);
    safe_VkAccelerationStructureTrianglesDisplacementMicromapNV& operator=(
        const safe_VkAccelerationStructureTrianglesDisplacementMicromapNV& copy_src);
    safe_VkAccelerationStructureTrianglesDisplacementMicromapNV();
    ~safe_VkAccelerationStructureTrianglesDisplacementMicromapNV();
    void initialize(const VkAccelerationStructureTrianglesDisplacementMicromapNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureTrianglesDisplacementMicromapNV* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureTrianglesDisplacementMicromapNV* ptr() {
        return reinterpret_cast<VkAccelerationStructureTrianglesDisplacementMicromapNV*>(this);
    }
    VkAccelerationStructureTrianglesDisplacementMicromapNV const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureTrianglesDisplacementMicromapNV const*>(this);
    }
};
#endif  // VK_ENABLE_BETA_EXTENSIONS
struct safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxWorkGroupCount[3];
    uint32_t maxWorkGroupSize[3];
    uint32_t maxOutputClusterCount;
    VkDeviceSize indirectBufferOffsetAlignment;

    safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
        const safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI& copy_src);
    safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI& operator=(
        const safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI& copy_src);
    safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI();
    ~safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI();
    void initialize(const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI* ptr() {
        return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI*>(this);
    }
    VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI const*>(this);
    }
};
struct safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI {
    VkStructureType sType;
    void* pNext{};
    VkBool32 clusterShadingRate;

    safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(
        const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(
        const safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& copy_src);
    safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& operator=(
        const safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI& copy_src);
    safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI();
    ~safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI();
    void initialize(const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI* ptr() {
        return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI*>(this);
    }
    VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI const*>(this);
    }
};
struct safe_VkSamplerBorderColorComponentMappingCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkComponentMapping components;
    VkBool32 srgb;

    safe_VkSamplerBorderColorComponentMappingCreateInfoEXT(const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct,
                                                           PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerBorderColorComponentMappingCreateInfoEXT(const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& copy_src);
    safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& operator=(
        const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT& copy_src);
    safe_VkSamplerBorderColorComponentMappingCreateInfoEXT();
    ~safe_VkSamplerBorderColorComponentMappingCreateInfoEXT();
    void initialize(const VkSamplerBorderColorComponentMappingCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerBorderColorComponentMappingCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkSamplerBorderColorComponentMappingCreateInfoEXT* ptr() {
        return reinterpret_cast<VkSamplerBorderColorComponentMappingCreateInfoEXT*>(this);
    }
    VkSamplerBorderColorComponentMappingCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkSamplerBorderColorComponentMappingCreateInfoEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceShaderCorePropertiesARM {
    VkStructureType sType;
    void* pNext{};
    uint32_t pixelRate;
    uint32_t texelRate;
    uint32_t fmaRate;

    safe_VkPhysicalDeviceShaderCorePropertiesARM(const VkPhysicalDeviceShaderCorePropertiesARM* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderCorePropertiesARM(const safe_VkPhysicalDeviceShaderCorePropertiesARM& copy_src);
    safe_VkPhysicalDeviceShaderCorePropertiesARM& operator=(const safe_VkPhysicalDeviceShaderCorePropertiesARM& copy_src);
    safe_VkPhysicalDeviceShaderCorePropertiesARM();
    ~safe_VkPhysicalDeviceShaderCorePropertiesARM();
    void initialize(const VkPhysicalDeviceShaderCorePropertiesARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderCorePropertiesARM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderCorePropertiesARM* ptr() { return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesARM*>(this); }
    VkPhysicalDeviceShaderCorePropertiesARM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesARM const*>(this);
    }
};
struct safe_VkDeviceQueueShaderCoreControlCreateInfoARM {
    VkStructureType sType;
    void* pNext{};
    uint32_t shaderCoreCount;

    safe_VkDeviceQueueShaderCoreControlCreateInfoARM(const VkDeviceQueueShaderCoreControlCreateInfoARM* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDeviceQueueShaderCoreControlCreateInfoARM(const safe_VkDeviceQueueShaderCoreControlCreateInfoARM& copy_src);
    safe_VkDeviceQueueShaderCoreControlCreateInfoARM& operator=(const safe_VkDeviceQueueShaderCoreControlCreateInfoARM& copy_src);
    safe_VkDeviceQueueShaderCoreControlCreateInfoARM();
    ~safe_VkDeviceQueueShaderCoreControlCreateInfoARM();
    void initialize(const VkDeviceQueueShaderCoreControlCreateInfoARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDeviceQueueShaderCoreControlCreateInfoARM* copy_src, PNextCopyState* copy_state = {});
    VkDeviceQueueShaderCoreControlCreateInfoARM* ptr() {
        return reinterpret_cast<VkDeviceQueueShaderCoreControlCreateInfoARM*>(this);
    }
    VkDeviceQueueShaderCoreControlCreateInfoARM const* ptr() const {
        return reinterpret_cast<VkDeviceQueueShaderCoreControlCreateInfoARM const*>(this);
    }
};
struct safe_VkPhysicalDeviceSchedulingControlsPropertiesARM {
    VkStructureType sType;
    void* pNext{};
    VkPhysicalDeviceSchedulingControlsFlagsARM schedulingControlsFlags;

    safe_VkPhysicalDeviceSchedulingControlsPropertiesARM(const VkPhysicalDeviceSchedulingControlsPropertiesARM* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceSchedulingControlsPropertiesARM(const safe_VkPhysicalDeviceSchedulingControlsPropertiesARM& copy_src);
    safe_VkPhysicalDeviceSchedulingControlsPropertiesARM& operator=(
        const safe_VkPhysicalDeviceSchedulingControlsPropertiesARM& copy_src);
    safe_VkPhysicalDeviceSchedulingControlsPropertiesARM();
    ~safe_VkPhysicalDeviceSchedulingControlsPropertiesARM();
    void initialize(const VkPhysicalDeviceSchedulingControlsPropertiesARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceSchedulingControlsPropertiesARM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceSchedulingControlsPropertiesARM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceSchedulingControlsPropertiesARM*>(this);
    }
    VkPhysicalDeviceSchedulingControlsPropertiesARM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceSchedulingControlsPropertiesARM const*>(this);
    }
};
struct safe_VkImageViewSlicedCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t sliceOffset;
    uint32_t sliceCount;

    safe_VkImageViewSlicedCreateInfoEXT(const VkImageViewSlicedCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkImageViewSlicedCreateInfoEXT(const safe_VkImageViewSlicedCreateInfoEXT& copy_src);
    safe_VkImageViewSlicedCreateInfoEXT& operator=(const safe_VkImageViewSlicedCreateInfoEXT& copy_src);
    safe_VkImageViewSlicedCreateInfoEXT();
    ~safe_VkImageViewSlicedCreateInfoEXT();
    void initialize(const VkImageViewSlicedCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewSlicedCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkImageViewSlicedCreateInfoEXT* ptr() { return reinterpret_cast<VkImageViewSlicedCreateInfoEXT*>(this); }
    VkImageViewSlicedCreateInfoEXT const* ptr() const { return reinterpret_cast<VkImageViewSlicedCreateInfoEXT const*>(this); }
};
struct safe_VkDescriptorSetBindingReferenceVALVE {
    VkStructureType sType;
    const void* pNext{};
    VkDescriptorSetLayout descriptorSetLayout;
    uint32_t binding;

    safe_VkDescriptorSetBindingReferenceVALVE(const VkDescriptorSetBindingReferenceVALVE* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorSetBindingReferenceVALVE(const safe_VkDescriptorSetBindingReferenceVALVE& copy_src);
    safe_VkDescriptorSetBindingReferenceVALVE& operator=(const safe_VkDescriptorSetBindingReferenceVALVE& copy_src);
    safe_VkDescriptorSetBindingReferenceVALVE();
    ~safe_VkDescriptorSetBindingReferenceVALVE();
    void initialize(const VkDescriptorSetBindingReferenceVALVE* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetBindingReferenceVALVE* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetBindingReferenceVALVE* ptr() { return reinterpret_cast<VkDescriptorSetBindingReferenceVALVE*>(this); }
    VkDescriptorSetBindingReferenceVALVE const* ptr() const {
        return reinterpret_cast<VkDescriptorSetBindingReferenceVALVE const*>(this);
    }
};
struct safe_VkDescriptorSetLayoutHostMappingInfoVALVE {
    VkStructureType sType;
    void* pNext{};
    size_t descriptorOffset;
    uint32_t descriptorSize;

    safe_VkDescriptorSetLayoutHostMappingInfoVALVE(const VkDescriptorSetLayoutHostMappingInfoVALVE* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkDescriptorSetLayoutHostMappingInfoVALVE(const safe_VkDescriptorSetLayoutHostMappingInfoVALVE& copy_src);
    safe_VkDescriptorSetLayoutHostMappingInfoVALVE& operator=(const safe_VkDescriptorSetLayoutHostMappingInfoVALVE& copy_src);
    safe_VkDescriptorSetLayoutHostMappingInfoVALVE();
    ~safe_VkDescriptorSetLayoutHostMappingInfoVALVE();
    void initialize(const VkDescriptorSetLayoutHostMappingInfoVALVE* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDescriptorSetLayoutHostMappingInfoVALVE* copy_src, PNextCopyState* copy_state = {});
    VkDescriptorSetLayoutHostMappingInfoVALVE* ptr() { return reinterpret_cast<VkDescriptorSetLayoutHostMappingInfoVALVE*>(this); }
    VkDescriptorSetLayoutHostMappingInfoVALVE const* ptr() const {
        return reinterpret_cast<VkDescriptorSetLayoutHostMappingInfoVALVE const*>(this);
    }
};
struct safe_VkPhysicalDeviceRenderPassStripedPropertiesARM {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D renderPassStripeGranularity;
    uint32_t maxRenderPassStripes;

    safe_VkPhysicalDeviceRenderPassStripedPropertiesARM(const VkPhysicalDeviceRenderPassStripedPropertiesARM* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceRenderPassStripedPropertiesARM(const safe_VkPhysicalDeviceRenderPassStripedPropertiesARM& copy_src);
    safe_VkPhysicalDeviceRenderPassStripedPropertiesARM& operator=(
        const safe_VkPhysicalDeviceRenderPassStripedPropertiesARM& copy_src);
    safe_VkPhysicalDeviceRenderPassStripedPropertiesARM();
    ~safe_VkPhysicalDeviceRenderPassStripedPropertiesARM();
    void initialize(const VkPhysicalDeviceRenderPassStripedPropertiesARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceRenderPassStripedPropertiesARM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceRenderPassStripedPropertiesARM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceRenderPassStripedPropertiesARM*>(this);
    }
    VkPhysicalDeviceRenderPassStripedPropertiesARM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceRenderPassStripedPropertiesARM const*>(this);
    }
};
struct safe_VkRenderPassStripeInfoARM {
    VkStructureType sType;
    const void* pNext{};
    VkRect2D stripeArea;

    safe_VkRenderPassStripeInfoARM(const VkRenderPassStripeInfoARM* in_struct, PNextCopyState* copy_state = {},
                                   bool copy_pnext = true);
    safe_VkRenderPassStripeInfoARM(const safe_VkRenderPassStripeInfoARM& copy_src);
    safe_VkRenderPassStripeInfoARM& operator=(const safe_VkRenderPassStripeInfoARM& copy_src);
    safe_VkRenderPassStripeInfoARM();
    ~safe_VkRenderPassStripeInfoARM();
    void initialize(const VkRenderPassStripeInfoARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassStripeInfoARM* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassStripeInfoARM* ptr() { return reinterpret_cast<VkRenderPassStripeInfoARM*>(this); }
    VkRenderPassStripeInfoARM const* ptr() const { return reinterpret_cast<VkRenderPassStripeInfoARM const*>(this); }
};
struct safe_VkRenderPassStripeBeginInfoARM {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stripeInfoCount;
    safe_VkRenderPassStripeInfoARM* pStripeInfos{};

    safe_VkRenderPassStripeBeginInfoARM(const VkRenderPassStripeBeginInfoARM* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkRenderPassStripeBeginInfoARM(const safe_VkRenderPassStripeBeginInfoARM& copy_src);
    safe_VkRenderPassStripeBeginInfoARM& operator=(const safe_VkRenderPassStripeBeginInfoARM& copy_src);
    safe_VkRenderPassStripeBeginInfoARM();
    ~safe_VkRenderPassStripeBeginInfoARM();
    void initialize(const VkRenderPassStripeBeginInfoARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassStripeBeginInfoARM* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassStripeBeginInfoARM* ptr() { return reinterpret_cast<VkRenderPassStripeBeginInfoARM*>(this); }
    VkRenderPassStripeBeginInfoARM const* ptr() const { return reinterpret_cast<VkRenderPassStripeBeginInfoARM const*>(this); }
};
struct safe_VkRenderPassStripeSubmitInfoARM {
    VkStructureType sType;
    const void* pNext{};
    uint32_t stripeSemaphoreInfoCount;
    safe_VkSemaphoreSubmitInfo* pStripeSemaphoreInfos{};

    safe_VkRenderPassStripeSubmitInfoARM(const VkRenderPassStripeSubmitInfoARM* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkRenderPassStripeSubmitInfoARM(const safe_VkRenderPassStripeSubmitInfoARM& copy_src);
    safe_VkRenderPassStripeSubmitInfoARM& operator=(const safe_VkRenderPassStripeSubmitInfoARM& copy_src);
    safe_VkRenderPassStripeSubmitInfoARM();
    ~safe_VkRenderPassStripeSubmitInfoARM();
    void initialize(const VkRenderPassStripeSubmitInfoARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassStripeSubmitInfoARM* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassStripeSubmitInfoARM* ptr() { return reinterpret_cast<VkRenderPassStripeSubmitInfoARM*>(this); }
    VkRenderPassStripeSubmitInfoARM const* ptr() const { return reinterpret_cast<VkRenderPassStripeSubmitInfoARM const*>(this); }
};
struct safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D fragmentDensityOffsetGranularity;

    safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(
        const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(
        const safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& operator=(
        const safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM();
    ~safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM();
    void initialize(const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM*>(this);
    }
    VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM const*>(this);
    }
};
struct safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    uint32_t fragmentDensityOffsetCount;
    const VkOffset2D* pFragmentDensityOffsets{};

    safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(const VkSubpassFragmentDensityMapOffsetEndInfoQCOM* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(const safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM& copy_src);
    safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM& operator=(const safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM& copy_src);
    safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM();
    ~safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM();
    void initialize(const VkSubpassFragmentDensityMapOffsetEndInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSubpassFragmentDensityMapOffsetEndInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkSubpassFragmentDensityMapOffsetEndInfoQCOM* ptr() {
        return reinterpret_cast<VkSubpassFragmentDensityMapOffsetEndInfoQCOM*>(this);
    }
    VkSubpassFragmentDensityMapOffsetEndInfoQCOM const* ptr() const {
        return reinterpret_cast<VkSubpassFragmentDensityMapOffsetEndInfoQCOM const*>(this);
    }
};
struct safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkQueueFlags supportedQueues;

    safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(const safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV& operator=(
        const safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV& copy_src);
    safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV();
    ~safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV();
    void initialize(const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceCopyMemoryIndirectPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectPropertiesNV*>(this);
    }
    VkPhysicalDeviceCopyMemoryIndirectPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectPropertiesNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkMemoryDecompressionMethodFlagsNV decompressionMethods;
    uint64_t maxDecompressionIndirectCount;

    safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV(const VkPhysicalDeviceMemoryDecompressionPropertiesNV* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV(const safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV& copy_src);
    safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV& operator=(
        const safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV& copy_src);
    safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV();
    ~safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV();
    void initialize(const VkPhysicalDeviceMemoryDecompressionPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMemoryDecompressionPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMemoryDecompressionPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceMemoryDecompressionPropertiesNV*>(this);
    }
    VkPhysicalDeviceMemoryDecompressionPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMemoryDecompressionPropertiesNV const*>(this);
    }
};
struct safe_VkComputePipelineIndirectBufferInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceAddress deviceAddress;
    VkDeviceSize size;
    VkDeviceAddress pipelineDeviceAddressCaptureReplay;

    safe_VkComputePipelineIndirectBufferInfoNV(const VkComputePipelineIndirectBufferInfoNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkComputePipelineIndirectBufferInfoNV(const safe_VkComputePipelineIndirectBufferInfoNV& copy_src);
    safe_VkComputePipelineIndirectBufferInfoNV& operator=(const safe_VkComputePipelineIndirectBufferInfoNV& copy_src);
    safe_VkComputePipelineIndirectBufferInfoNV();
    ~safe_VkComputePipelineIndirectBufferInfoNV();
    void initialize(const VkComputePipelineIndirectBufferInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkComputePipelineIndirectBufferInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkComputePipelineIndirectBufferInfoNV* ptr() { return reinterpret_cast<VkComputePipelineIndirectBufferInfoNV*>(this); }
    VkComputePipelineIndirectBufferInfoNV const* ptr() const {
        return reinterpret_cast<VkComputePipelineIndirectBufferInfoNV const*>(this);
    }
};
struct safe_VkPipelineIndirectDeviceAddressInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;

    safe_VkPipelineIndirectDeviceAddressInfoNV(const VkPipelineIndirectDeviceAddressInfoNV* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineIndirectDeviceAddressInfoNV(const safe_VkPipelineIndirectDeviceAddressInfoNV& copy_src);
    safe_VkPipelineIndirectDeviceAddressInfoNV& operator=(const safe_VkPipelineIndirectDeviceAddressInfoNV& copy_src);
    safe_VkPipelineIndirectDeviceAddressInfoNV();
    ~safe_VkPipelineIndirectDeviceAddressInfoNV();
    void initialize(const VkPipelineIndirectDeviceAddressInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineIndirectDeviceAddressInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkPipelineIndirectDeviceAddressInfoNV* ptr() { return reinterpret_cast<VkPipelineIndirectDeviceAddressInfoNV*>(this); }
    VkPipelineIndirectDeviceAddressInfoNV const* ptr() const {
        return reinterpret_cast<VkPipelineIndirectDeviceAddressInfoNV const*>(this);
    }
};
struct safe_VkImageViewSampleWeightCreateInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    VkOffset2D filterCenter;
    VkExtent2D filterSize;
    uint32_t numPhases;

    safe_VkImageViewSampleWeightCreateInfoQCOM(const VkImageViewSampleWeightCreateInfoQCOM* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageViewSampleWeightCreateInfoQCOM(const safe_VkImageViewSampleWeightCreateInfoQCOM& copy_src);
    safe_VkImageViewSampleWeightCreateInfoQCOM& operator=(const safe_VkImageViewSampleWeightCreateInfoQCOM& copy_src);
    safe_VkImageViewSampleWeightCreateInfoQCOM();
    ~safe_VkImageViewSampleWeightCreateInfoQCOM();
    void initialize(const VkImageViewSampleWeightCreateInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageViewSampleWeightCreateInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkImageViewSampleWeightCreateInfoQCOM* ptr() { return reinterpret_cast<VkImageViewSampleWeightCreateInfoQCOM*>(this); }
    VkImageViewSampleWeightCreateInfoQCOM const* ptr() const {
        return reinterpret_cast<VkImageViewSampleWeightCreateInfoQCOM const*>(this);
    }
};
struct safe_VkPhysicalDeviceImageProcessingPropertiesQCOM {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxWeightFilterPhases;
    VkExtent2D maxWeightFilterDimension;
    VkExtent2D maxBlockMatchRegion;
    VkExtent2D maxBoxFilterBlockSize;

    safe_VkPhysicalDeviceImageProcessingPropertiesQCOM(const VkPhysicalDeviceImageProcessingPropertiesQCOM* in_struct,
                                                       PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceImageProcessingPropertiesQCOM(const safe_VkPhysicalDeviceImageProcessingPropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceImageProcessingPropertiesQCOM& operator=(
        const safe_VkPhysicalDeviceImageProcessingPropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceImageProcessingPropertiesQCOM();
    ~safe_VkPhysicalDeviceImageProcessingPropertiesQCOM();
    void initialize(const VkPhysicalDeviceImageProcessingPropertiesQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageProcessingPropertiesQCOM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageProcessingPropertiesQCOM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceImageProcessingPropertiesQCOM*>(this);
    }
    VkPhysicalDeviceImageProcessingPropertiesQCOM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceImageProcessingPropertiesQCOM const*>(this);
    }
};
struct safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxCommandBufferNestingLevel;

    safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct,
                                                          PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT();
    ~safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT();
    void initialize(const VkPhysicalDeviceNestedCommandBufferPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceNestedCommandBufferPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceNestedCommandBufferPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceNestedCommandBufferPropertiesEXT*>(this);
    }
    VkPhysicalDeviceNestedCommandBufferPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceNestedCommandBufferPropertiesEXT const*>(this);
    }
};
struct safe_VkExternalMemoryAcquireUnmodifiedEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 acquireUnmodifiedMemory;

    safe_VkExternalMemoryAcquireUnmodifiedEXT(const VkExternalMemoryAcquireUnmodifiedEXT* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExternalMemoryAcquireUnmodifiedEXT(const safe_VkExternalMemoryAcquireUnmodifiedEXT& copy_src);
    safe_VkExternalMemoryAcquireUnmodifiedEXT& operator=(const safe_VkExternalMemoryAcquireUnmodifiedEXT& copy_src);
    safe_VkExternalMemoryAcquireUnmodifiedEXT();
    ~safe_VkExternalMemoryAcquireUnmodifiedEXT();
    void initialize(const VkExternalMemoryAcquireUnmodifiedEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalMemoryAcquireUnmodifiedEXT* copy_src, PNextCopyState* copy_state = {});
    VkExternalMemoryAcquireUnmodifiedEXT* ptr() { return reinterpret_cast<VkExternalMemoryAcquireUnmodifiedEXT*>(this); }
    VkExternalMemoryAcquireUnmodifiedEXT const* ptr() const {
        return reinterpret_cast<VkExternalMemoryAcquireUnmodifiedEXT const*>(this);
    }
};
struct safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 dynamicPrimitiveTopologyUnrestricted;

    safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(
        const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& operator=(
        const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& copy_src);
    safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT();
    ~safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT();
    void initialize(const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT*>(this);
    }
    VkPhysicalDeviceExtendedDynamicState3PropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT const*>(this);
    }
};
struct safe_VkRenderPassCreationControlEXT {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 disallowMerging;

    safe_VkRenderPassCreationControlEXT(const VkRenderPassCreationControlEXT* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkRenderPassCreationControlEXT(const safe_VkRenderPassCreationControlEXT& copy_src);
    safe_VkRenderPassCreationControlEXT& operator=(const safe_VkRenderPassCreationControlEXT& copy_src);
    safe_VkRenderPassCreationControlEXT();
    ~safe_VkRenderPassCreationControlEXT();
    void initialize(const VkRenderPassCreationControlEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassCreationControlEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassCreationControlEXT* ptr() { return reinterpret_cast<VkRenderPassCreationControlEXT*>(this); }
    VkRenderPassCreationControlEXT const* ptr() const { return reinterpret_cast<VkRenderPassCreationControlEXT const*>(this); }
};
struct safe_VkRenderPassCreationFeedbackCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPassCreationFeedbackInfoEXT* pRenderPassFeedback{};

    safe_VkRenderPassCreationFeedbackCreateInfoEXT(const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassCreationFeedbackCreateInfoEXT(const safe_VkRenderPassCreationFeedbackCreateInfoEXT& copy_src);
    safe_VkRenderPassCreationFeedbackCreateInfoEXT& operator=(const safe_VkRenderPassCreationFeedbackCreateInfoEXT& copy_src);
    safe_VkRenderPassCreationFeedbackCreateInfoEXT();
    ~safe_VkRenderPassCreationFeedbackCreateInfoEXT();
    void initialize(const VkRenderPassCreationFeedbackCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassCreationFeedbackCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassCreationFeedbackCreateInfoEXT* ptr() { return reinterpret_cast<VkRenderPassCreationFeedbackCreateInfoEXT*>(this); }
    VkRenderPassCreationFeedbackCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkRenderPassCreationFeedbackCreateInfoEXT const*>(this);
    }
};
struct safe_VkRenderPassSubpassFeedbackCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkRenderPassSubpassFeedbackInfoEXT* pSubpassFeedback{};

    safe_VkRenderPassSubpassFeedbackCreateInfoEXT(const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRenderPassSubpassFeedbackCreateInfoEXT(const safe_VkRenderPassSubpassFeedbackCreateInfoEXT& copy_src);
    safe_VkRenderPassSubpassFeedbackCreateInfoEXT& operator=(const safe_VkRenderPassSubpassFeedbackCreateInfoEXT& copy_src);
    safe_VkRenderPassSubpassFeedbackCreateInfoEXT();
    ~safe_VkRenderPassSubpassFeedbackCreateInfoEXT();
    void initialize(const VkRenderPassSubpassFeedbackCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRenderPassSubpassFeedbackCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkRenderPassSubpassFeedbackCreateInfoEXT* ptr() { return reinterpret_cast<VkRenderPassSubpassFeedbackCreateInfoEXT*>(this); }
    VkRenderPassSubpassFeedbackCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkRenderPassSubpassFeedbackCreateInfoEXT const*>(this);
    }
};
struct safe_VkDirectDriverLoadingInfoLUNARG {
    VkStructureType sType;
    void* pNext{};
    VkDirectDriverLoadingFlagsLUNARG flags;
    PFN_vkGetInstanceProcAddrLUNARG pfnGetInstanceProcAddr;

    safe_VkDirectDriverLoadingInfoLUNARG(const VkDirectDriverLoadingInfoLUNARG* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkDirectDriverLoadingInfoLUNARG(const safe_VkDirectDriverLoadingInfoLUNARG& copy_src);
    safe_VkDirectDriverLoadingInfoLUNARG& operator=(const safe_VkDirectDriverLoadingInfoLUNARG& copy_src);
    safe_VkDirectDriverLoadingInfoLUNARG();
    ~safe_VkDirectDriverLoadingInfoLUNARG();
    void initialize(const VkDirectDriverLoadingInfoLUNARG* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDirectDriverLoadingInfoLUNARG* copy_src, PNextCopyState* copy_state = {});
    VkDirectDriverLoadingInfoLUNARG* ptr() { return reinterpret_cast<VkDirectDriverLoadingInfoLUNARG*>(this); }
    VkDirectDriverLoadingInfoLUNARG const* ptr() const { return reinterpret_cast<VkDirectDriverLoadingInfoLUNARG const*>(this); }
};
struct safe_VkDirectDriverLoadingListLUNARG {
    VkStructureType sType;
    const void* pNext{};
    VkDirectDriverLoadingModeLUNARG mode;
    uint32_t driverCount;
    safe_VkDirectDriverLoadingInfoLUNARG* pDrivers{};

    safe_VkDirectDriverLoadingListLUNARG(const VkDirectDriverLoadingListLUNARG* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkDirectDriverLoadingListLUNARG(const safe_VkDirectDriverLoadingListLUNARG& copy_src);
    safe_VkDirectDriverLoadingListLUNARG& operator=(const safe_VkDirectDriverLoadingListLUNARG& copy_src);
    safe_VkDirectDriverLoadingListLUNARG();
    ~safe_VkDirectDriverLoadingListLUNARG();
    void initialize(const VkDirectDriverLoadingListLUNARG* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkDirectDriverLoadingListLUNARG* copy_src, PNextCopyState* copy_state = {});
    VkDirectDriverLoadingListLUNARG* ptr() { return reinterpret_cast<VkDirectDriverLoadingListLUNARG*>(this); }
    VkDirectDriverLoadingListLUNARG const* ptr() const { return reinterpret_cast<VkDirectDriverLoadingListLUNARG const*>(this); }
};
struct safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint8_t shaderModuleIdentifierAlgorithmUUID[VK_UUID_SIZE];

    safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(
        const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT();
    ~safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT();
    void initialize(const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT*>(this);
    }
    VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT const*>(this);
    }
};
struct safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t identifierSize;
    const uint8_t* pIdentifier{};

    safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(const VkPipelineShaderStageModuleIdentifierCreateInfoEXT* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(
        const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src);
    safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& operator=(
        const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& copy_src);
    safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT();
    ~safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT();
    void initialize(const VkPipelineShaderStageModuleIdentifierCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPipelineShaderStageModuleIdentifierCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkPipelineShaderStageModuleIdentifierCreateInfoEXT* ptr() {
        return reinterpret_cast<VkPipelineShaderStageModuleIdentifierCreateInfoEXT*>(this);
    }
    VkPipelineShaderStageModuleIdentifierCreateInfoEXT const* ptr() const {
        return reinterpret_cast<VkPipelineShaderStageModuleIdentifierCreateInfoEXT const*>(this);
    }
};
struct safe_VkShaderModuleIdentifierEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t identifierSize;
    uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT];

    safe_VkShaderModuleIdentifierEXT(const VkShaderModuleIdentifierEXT* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkShaderModuleIdentifierEXT(const safe_VkShaderModuleIdentifierEXT& copy_src);
    safe_VkShaderModuleIdentifierEXT& operator=(const safe_VkShaderModuleIdentifierEXT& copy_src);
    safe_VkShaderModuleIdentifierEXT();
    ~safe_VkShaderModuleIdentifierEXT();
    void initialize(const VkShaderModuleIdentifierEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkShaderModuleIdentifierEXT* copy_src, PNextCopyState* copy_state = {});
    VkShaderModuleIdentifierEXT* ptr() { return reinterpret_cast<VkShaderModuleIdentifierEXT*>(this); }
    VkShaderModuleIdentifierEXT const* ptr() const { return reinterpret_cast<VkShaderModuleIdentifierEXT const*>(this); }
};
struct safe_VkPhysicalDeviceOpticalFlowPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkOpticalFlowGridSizeFlagsNV supportedOutputGridSizes;
    VkOpticalFlowGridSizeFlagsNV supportedHintGridSizes;
    VkBool32 hintSupported;
    VkBool32 costSupported;
    VkBool32 bidirectionalFlowSupported;
    VkBool32 globalFlowSupported;
    uint32_t minWidth;
    uint32_t minHeight;
    uint32_t maxWidth;
    uint32_t maxHeight;
    uint32_t maxNumRegionsOfInterest;

    safe_VkPhysicalDeviceOpticalFlowPropertiesNV(const VkPhysicalDeviceOpticalFlowPropertiesNV* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceOpticalFlowPropertiesNV(const safe_VkPhysicalDeviceOpticalFlowPropertiesNV& copy_src);
    safe_VkPhysicalDeviceOpticalFlowPropertiesNV& operator=(const safe_VkPhysicalDeviceOpticalFlowPropertiesNV& copy_src);
    safe_VkPhysicalDeviceOpticalFlowPropertiesNV();
    ~safe_VkPhysicalDeviceOpticalFlowPropertiesNV();
    void initialize(const VkPhysicalDeviceOpticalFlowPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceOpticalFlowPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceOpticalFlowPropertiesNV* ptr() { return reinterpret_cast<VkPhysicalDeviceOpticalFlowPropertiesNV*>(this); }
    VkPhysicalDeviceOpticalFlowPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceOpticalFlowPropertiesNV const*>(this);
    }
};
struct safe_VkOpticalFlowImageFormatInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkOpticalFlowUsageFlagsNV usage;

    safe_VkOpticalFlowImageFormatInfoNV(const VkOpticalFlowImageFormatInfoNV* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkOpticalFlowImageFormatInfoNV(const safe_VkOpticalFlowImageFormatInfoNV& copy_src);
    safe_VkOpticalFlowImageFormatInfoNV& operator=(const safe_VkOpticalFlowImageFormatInfoNV& copy_src);
    safe_VkOpticalFlowImageFormatInfoNV();
    ~safe_VkOpticalFlowImageFormatInfoNV();
    void initialize(const VkOpticalFlowImageFormatInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpticalFlowImageFormatInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkOpticalFlowImageFormatInfoNV* ptr() { return reinterpret_cast<VkOpticalFlowImageFormatInfoNV*>(this); }
    VkOpticalFlowImageFormatInfoNV const* ptr() const { return reinterpret_cast<VkOpticalFlowImageFormatInfoNV const*>(this); }
};
struct safe_VkOpticalFlowImageFormatPropertiesNV {
    VkStructureType sType;
    const void* pNext{};
    VkFormat format;

    safe_VkOpticalFlowImageFormatPropertiesNV(const VkOpticalFlowImageFormatPropertiesNV* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkOpticalFlowImageFormatPropertiesNV(const safe_VkOpticalFlowImageFormatPropertiesNV& copy_src);
    safe_VkOpticalFlowImageFormatPropertiesNV& operator=(const safe_VkOpticalFlowImageFormatPropertiesNV& copy_src);
    safe_VkOpticalFlowImageFormatPropertiesNV();
    ~safe_VkOpticalFlowImageFormatPropertiesNV();
    void initialize(const VkOpticalFlowImageFormatPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpticalFlowImageFormatPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkOpticalFlowImageFormatPropertiesNV* ptr() { return reinterpret_cast<VkOpticalFlowImageFormatPropertiesNV*>(this); }
    VkOpticalFlowImageFormatPropertiesNV const* ptr() const {
        return reinterpret_cast<VkOpticalFlowImageFormatPropertiesNV const*>(this);
    }
};
struct safe_VkOpticalFlowSessionCreateInfoNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t width;
    uint32_t height;
    VkFormat imageFormat;
    VkFormat flowVectorFormat;
    VkFormat costFormat;
    VkOpticalFlowGridSizeFlagsNV outputGridSize;
    VkOpticalFlowGridSizeFlagsNV hintGridSize;
    VkOpticalFlowPerformanceLevelNV performanceLevel;
    VkOpticalFlowSessionCreateFlagsNV flags;

    safe_VkOpticalFlowSessionCreateInfoNV(const VkOpticalFlowSessionCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                          bool copy_pnext = true);
    safe_VkOpticalFlowSessionCreateInfoNV(const safe_VkOpticalFlowSessionCreateInfoNV& copy_src);
    safe_VkOpticalFlowSessionCreateInfoNV& operator=(const safe_VkOpticalFlowSessionCreateInfoNV& copy_src);
    safe_VkOpticalFlowSessionCreateInfoNV();
    ~safe_VkOpticalFlowSessionCreateInfoNV();
    void initialize(const VkOpticalFlowSessionCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpticalFlowSessionCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkOpticalFlowSessionCreateInfoNV* ptr() { return reinterpret_cast<VkOpticalFlowSessionCreateInfoNV*>(this); }
    VkOpticalFlowSessionCreateInfoNV const* ptr() const { return reinterpret_cast<VkOpticalFlowSessionCreateInfoNV const*>(this); }
};
struct safe_VkOpticalFlowSessionCreatePrivateDataInfoNV {
    VkStructureType sType;
    void* pNext{};
    uint32_t id;
    uint32_t size;
    const void* pPrivateData{};

    safe_VkOpticalFlowSessionCreatePrivateDataInfoNV(const VkOpticalFlowSessionCreatePrivateDataInfoNV* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkOpticalFlowSessionCreatePrivateDataInfoNV(const safe_VkOpticalFlowSessionCreatePrivateDataInfoNV& copy_src);
    safe_VkOpticalFlowSessionCreatePrivateDataInfoNV& operator=(const safe_VkOpticalFlowSessionCreatePrivateDataInfoNV& copy_src);
    safe_VkOpticalFlowSessionCreatePrivateDataInfoNV();
    ~safe_VkOpticalFlowSessionCreatePrivateDataInfoNV();
    void initialize(const VkOpticalFlowSessionCreatePrivateDataInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpticalFlowSessionCreatePrivateDataInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkOpticalFlowSessionCreatePrivateDataInfoNV* ptr() {
        return reinterpret_cast<VkOpticalFlowSessionCreatePrivateDataInfoNV*>(this);
    }
    VkOpticalFlowSessionCreatePrivateDataInfoNV const* ptr() const {
        return reinterpret_cast<VkOpticalFlowSessionCreatePrivateDataInfoNV const*>(this);
    }
};
struct safe_VkOpticalFlowExecuteInfoNV {
    VkStructureType sType;
    void* pNext{};
    VkOpticalFlowExecuteFlagsNV flags;
    uint32_t regionCount;
    const VkRect2D* pRegions{};

    safe_VkOpticalFlowExecuteInfoNV(const VkOpticalFlowExecuteInfoNV* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkOpticalFlowExecuteInfoNV(const safe_VkOpticalFlowExecuteInfoNV& copy_src);
    safe_VkOpticalFlowExecuteInfoNV& operator=(const safe_VkOpticalFlowExecuteInfoNV& copy_src);
    safe_VkOpticalFlowExecuteInfoNV();
    ~safe_VkOpticalFlowExecuteInfoNV();
    void initialize(const VkOpticalFlowExecuteInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOpticalFlowExecuteInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkOpticalFlowExecuteInfoNV* ptr() { return reinterpret_cast<VkOpticalFlowExecuteInfoNV*>(this); }
    VkOpticalFlowExecuteInfoNV const* ptr() const { return reinterpret_cast<VkOpticalFlowExecuteInfoNV const*>(this); }
};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID {
    VkStructureType sType;
    void* pNext{};
    VkBool32 nullColorAttachmentWithExternalFormatResolve;
    VkChromaLocation externalFormatResolveChromaOffsetX;
    VkChromaLocation externalFormatResolveChromaOffsetY;

    safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(
        const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(
        const safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID& copy_src);
    safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID& operator=(
        const safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID& copy_src);
    safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID();
    ~safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID();
    void initialize(const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExternalFormatResolvePropertiesANDROID* ptr() {
        return reinterpret_cast<VkPhysicalDeviceExternalFormatResolvePropertiesANDROID*>(this);
    }
    VkPhysicalDeviceExternalFormatResolvePropertiesANDROID const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExternalFormatResolvePropertiesANDROID const*>(this);
    }
};
struct safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID {
    VkStructureType sType;
    void* pNext{};
    VkFormat colorAttachmentFormat;

    safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(
        const VkAndroidHardwareBufferFormatResolvePropertiesANDROID* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(
        const safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID& operator=(
        const safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID& copy_src);
    safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID();
    ~safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID();
    void initialize(const VkAndroidHardwareBufferFormatResolvePropertiesANDROID* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAndroidHardwareBufferFormatResolvePropertiesANDROID* copy_src, PNextCopyState* copy_state = {});
    VkAndroidHardwareBufferFormatResolvePropertiesANDROID* ptr() {
        return reinterpret_cast<VkAndroidHardwareBufferFormatResolvePropertiesANDROID*>(this);
    }
    VkAndroidHardwareBufferFormatResolvePropertiesANDROID const* ptr() const {
        return reinterpret_cast<VkAndroidHardwareBufferFormatResolvePropertiesANDROID const*>(this);
    }
};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
struct safe_VkPhysicalDeviceShaderObjectPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint8_t shaderBinaryUUID[VK_UUID_SIZE];
    uint32_t shaderBinaryVersion;

    safe_VkPhysicalDeviceShaderObjectPropertiesEXT(const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct,
                                                   PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderObjectPropertiesEXT(const safe_VkPhysicalDeviceShaderObjectPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderObjectPropertiesEXT& operator=(const safe_VkPhysicalDeviceShaderObjectPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceShaderObjectPropertiesEXT();
    ~safe_VkPhysicalDeviceShaderObjectPropertiesEXT();
    void initialize(const VkPhysicalDeviceShaderObjectPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderObjectPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderObjectPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceShaderObjectPropertiesEXT*>(this); }
    VkPhysicalDeviceShaderObjectPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderObjectPropertiesEXT const*>(this);
    }
};
struct safe_VkShaderCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    VkShaderCreateFlagsEXT flags;
    VkShaderStageFlagBits stage;
    VkShaderStageFlags nextStage;
    VkShaderCodeTypeEXT codeType;
    size_t codeSize;
    const void* pCode{};
    const char* pName{};
    uint32_t setLayoutCount;
    VkDescriptorSetLayout* pSetLayouts{};
    uint32_t pushConstantRangeCount;
    const VkPushConstantRange* pPushConstantRanges{};
    safe_VkSpecializationInfo* pSpecializationInfo{};

    safe_VkShaderCreateInfoEXT(const VkShaderCreateInfoEXT* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkShaderCreateInfoEXT(const safe_VkShaderCreateInfoEXT& copy_src);
    safe_VkShaderCreateInfoEXT& operator=(const safe_VkShaderCreateInfoEXT& copy_src);
    safe_VkShaderCreateInfoEXT();
    ~safe_VkShaderCreateInfoEXT();
    void initialize(const VkShaderCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkShaderCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkShaderCreateInfoEXT* ptr() { return reinterpret_cast<VkShaderCreateInfoEXT*>(this); }
    VkShaderCreateInfoEXT const* ptr() const { return reinterpret_cast<VkShaderCreateInfoEXT const*>(this); }
};
struct safe_VkTilePropertiesQCOM {
    VkStructureType sType;
    void* pNext{};
    VkExtent3D tileSize;
    VkExtent2D apronSize;
    VkOffset2D origin;

    safe_VkTilePropertiesQCOM(const VkTilePropertiesQCOM* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkTilePropertiesQCOM(const safe_VkTilePropertiesQCOM& copy_src);
    safe_VkTilePropertiesQCOM& operator=(const safe_VkTilePropertiesQCOM& copy_src);
    safe_VkTilePropertiesQCOM();
    ~safe_VkTilePropertiesQCOM();
    void initialize(const VkTilePropertiesQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkTilePropertiesQCOM* copy_src, PNextCopyState* copy_state = {});
    VkTilePropertiesQCOM* ptr() { return reinterpret_cast<VkTilePropertiesQCOM*>(this); }
    VkTilePropertiesQCOM const* ptr() const { return reinterpret_cast<VkTilePropertiesQCOM const*>(this); }
};
struct safe_VkAmigoProfilingSubmitInfoSEC {
    VkStructureType sType;
    const void* pNext{};
    uint64_t firstDrawTimestamp;
    uint64_t swapBufferTimestamp;

    safe_VkAmigoProfilingSubmitInfoSEC(const VkAmigoProfilingSubmitInfoSEC* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkAmigoProfilingSubmitInfoSEC(const safe_VkAmigoProfilingSubmitInfoSEC& copy_src);
    safe_VkAmigoProfilingSubmitInfoSEC& operator=(const safe_VkAmigoProfilingSubmitInfoSEC& copy_src);
    safe_VkAmigoProfilingSubmitInfoSEC();
    ~safe_VkAmigoProfilingSubmitInfoSEC();
    void initialize(const VkAmigoProfilingSubmitInfoSEC* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAmigoProfilingSubmitInfoSEC* copy_src, PNextCopyState* copy_state = {});
    VkAmigoProfilingSubmitInfoSEC* ptr() { return reinterpret_cast<VkAmigoProfilingSubmitInfoSEC*>(this); }
    VkAmigoProfilingSubmitInfoSEC const* ptr() const { return reinterpret_cast<VkAmigoProfilingSubmitInfoSEC const*>(this); }
};
struct safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkRayTracingInvocationReorderModeNV rayTracingInvocationReorderReorderingHint;

    safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(
        const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(
        const safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV& copy_src);
    safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV& operator=(
        const safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV& copy_src);
    safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV();
    ~safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV();
    void initialize(const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV*>(this);
    }
    VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize extendedSparseAddressSpaceSize;
    VkImageUsageFlags extendedSparseImageUsageFlags;
    VkBufferUsageFlags extendedSparseBufferUsageFlags;

    safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
        const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* in_struct, PNextCopyState* copy_state = {},
        bool copy_pnext = true);
    safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
        const safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV& copy_src);
    safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV& operator=(
        const safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV& copy_src);
    safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV();
    ~safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV();
    void initialize(const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV* ptr() {
        return reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV*>(this);
    }
    VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV const*>(this);
    }
};
struct safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    VkBool32 nativeUnalignedPerformance;

    safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(
        const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& operator=(
        const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT();
    ~safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT();
    void initialize(const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT*>(this);
    }
    VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT const*>(this);
    }
};
struct safe_VkLayerSettingEXT {
    const char* pLayerName{};
    const char* pSettingName{};
    VkLayerSettingTypeEXT type;
    uint32_t valueCount;
    const void* pValues{};

    safe_VkLayerSettingEXT(const VkLayerSettingEXT* in_struct, PNextCopyState* copy_state = {});
    safe_VkLayerSettingEXT(const safe_VkLayerSettingEXT& copy_src);
    safe_VkLayerSettingEXT& operator=(const safe_VkLayerSettingEXT& copy_src);
    safe_VkLayerSettingEXT();
    ~safe_VkLayerSettingEXT();
    void initialize(const VkLayerSettingEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLayerSettingEXT* copy_src, PNextCopyState* copy_state = {});
    VkLayerSettingEXT* ptr() { return reinterpret_cast<VkLayerSettingEXT*>(this); }
    VkLayerSettingEXT const* ptr() const { return reinterpret_cast<VkLayerSettingEXT const*>(this); }
};
struct safe_VkLayerSettingsCreateInfoEXT {
    VkStructureType sType;
    const void* pNext{};
    uint32_t settingCount;
    safe_VkLayerSettingEXT* pSettings{};

    safe_VkLayerSettingsCreateInfoEXT(const VkLayerSettingsCreateInfoEXT* in_struct, PNextCopyState* copy_state = {},
                                      bool copy_pnext = true);
    safe_VkLayerSettingsCreateInfoEXT(const safe_VkLayerSettingsCreateInfoEXT& copy_src);
    safe_VkLayerSettingsCreateInfoEXT& operator=(const safe_VkLayerSettingsCreateInfoEXT& copy_src);
    safe_VkLayerSettingsCreateInfoEXT();
    ~safe_VkLayerSettingsCreateInfoEXT();
    void initialize(const VkLayerSettingsCreateInfoEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLayerSettingsCreateInfoEXT* copy_src, PNextCopyState* copy_state = {});
    VkLayerSettingsCreateInfoEXT* ptr() { return reinterpret_cast<VkLayerSettingsCreateInfoEXT*>(this); }
    VkLayerSettingsCreateInfoEXT const* ptr() const { return reinterpret_cast<VkLayerSettingsCreateInfoEXT const*>(this); }
};
struct safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM {
    VkStructureType sType;
    void* pNext{};
    uint64_t shaderCoreMask;
    uint32_t shaderCoreCount;
    uint32_t shaderWarpsPerCore;

    safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(const safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& copy_src);
    safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& operator=(
        const safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& copy_src);
    safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM();
    ~safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM();
    void initialize(const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM*>(this);
    }
    VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM const*>(this);
    }
};
struct safe_VkLatencySleepModeInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 lowLatencyMode;
    VkBool32 lowLatencyBoost;
    uint32_t minimumIntervalUs;

    safe_VkLatencySleepModeInfoNV(const VkLatencySleepModeInfoNV* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkLatencySleepModeInfoNV(const safe_VkLatencySleepModeInfoNV& copy_src);
    safe_VkLatencySleepModeInfoNV& operator=(const safe_VkLatencySleepModeInfoNV& copy_src);
    safe_VkLatencySleepModeInfoNV();
    ~safe_VkLatencySleepModeInfoNV();
    void initialize(const VkLatencySleepModeInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLatencySleepModeInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkLatencySleepModeInfoNV* ptr() { return reinterpret_cast<VkLatencySleepModeInfoNV*>(this); }
    VkLatencySleepModeInfoNV const* ptr() const { return reinterpret_cast<VkLatencySleepModeInfoNV const*>(this); }
};
struct safe_VkLatencySleepInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkSemaphore signalSemaphore;
    uint64_t value;

    safe_VkLatencySleepInfoNV(const VkLatencySleepInfoNV* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkLatencySleepInfoNV(const safe_VkLatencySleepInfoNV& copy_src);
    safe_VkLatencySleepInfoNV& operator=(const safe_VkLatencySleepInfoNV& copy_src);
    safe_VkLatencySleepInfoNV();
    ~safe_VkLatencySleepInfoNV();
    void initialize(const VkLatencySleepInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLatencySleepInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkLatencySleepInfoNV* ptr() { return reinterpret_cast<VkLatencySleepInfoNV*>(this); }
    VkLatencySleepInfoNV const* ptr() const { return reinterpret_cast<VkLatencySleepInfoNV const*>(this); }
};
struct safe_VkSetLatencyMarkerInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint64_t presentID;
    VkLatencyMarkerNV marker;

    safe_VkSetLatencyMarkerInfoNV(const VkSetLatencyMarkerInfoNV* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkSetLatencyMarkerInfoNV(const safe_VkSetLatencyMarkerInfoNV& copy_src);
    safe_VkSetLatencyMarkerInfoNV& operator=(const safe_VkSetLatencyMarkerInfoNV& copy_src);
    safe_VkSetLatencyMarkerInfoNV();
    ~safe_VkSetLatencyMarkerInfoNV();
    void initialize(const VkSetLatencyMarkerInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSetLatencyMarkerInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkSetLatencyMarkerInfoNV* ptr() { return reinterpret_cast<VkSetLatencyMarkerInfoNV*>(this); }
    VkSetLatencyMarkerInfoNV const* ptr() const { return reinterpret_cast<VkSetLatencyMarkerInfoNV const*>(this); }
};
struct safe_VkLatencyTimingsFrameReportNV {
    VkStructureType sType;
    const void* pNext{};
    uint64_t presentID;
    uint64_t inputSampleTimeUs;
    uint64_t simStartTimeUs;
    uint64_t simEndTimeUs;
    uint64_t renderSubmitStartTimeUs;
    uint64_t renderSubmitEndTimeUs;
    uint64_t presentStartTimeUs;
    uint64_t presentEndTimeUs;
    uint64_t driverStartTimeUs;
    uint64_t driverEndTimeUs;
    uint64_t osRenderQueueStartTimeUs;
    uint64_t osRenderQueueEndTimeUs;
    uint64_t gpuRenderStartTimeUs;
    uint64_t gpuRenderEndTimeUs;

    safe_VkLatencyTimingsFrameReportNV(const VkLatencyTimingsFrameReportNV* in_struct, PNextCopyState* copy_state = {},
                                       bool copy_pnext = true);
    safe_VkLatencyTimingsFrameReportNV(const safe_VkLatencyTimingsFrameReportNV& copy_src);
    safe_VkLatencyTimingsFrameReportNV& operator=(const safe_VkLatencyTimingsFrameReportNV& copy_src);
    safe_VkLatencyTimingsFrameReportNV();
    ~safe_VkLatencyTimingsFrameReportNV();
    void initialize(const VkLatencyTimingsFrameReportNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLatencyTimingsFrameReportNV* copy_src, PNextCopyState* copy_state = {});
    VkLatencyTimingsFrameReportNV* ptr() { return reinterpret_cast<VkLatencyTimingsFrameReportNV*>(this); }
    VkLatencyTimingsFrameReportNV const* ptr() const { return reinterpret_cast<VkLatencyTimingsFrameReportNV const*>(this); }
};
struct safe_VkGetLatencyMarkerInfoNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t timingCount;
    safe_VkLatencyTimingsFrameReportNV* pTimings{};

    safe_VkGetLatencyMarkerInfoNV(const VkGetLatencyMarkerInfoNV* in_struct, PNextCopyState* copy_state = {},
                                  bool copy_pnext = true);
    safe_VkGetLatencyMarkerInfoNV(const safe_VkGetLatencyMarkerInfoNV& copy_src);
    safe_VkGetLatencyMarkerInfoNV& operator=(const safe_VkGetLatencyMarkerInfoNV& copy_src);
    safe_VkGetLatencyMarkerInfoNV();
    ~safe_VkGetLatencyMarkerInfoNV();
    void initialize(const VkGetLatencyMarkerInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkGetLatencyMarkerInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkGetLatencyMarkerInfoNV* ptr() { return reinterpret_cast<VkGetLatencyMarkerInfoNV*>(this); }
    VkGetLatencyMarkerInfoNV const* ptr() const { return reinterpret_cast<VkGetLatencyMarkerInfoNV const*>(this); }
};
struct safe_VkLatencySubmissionPresentIdNV {
    VkStructureType sType;
    const void* pNext{};
    uint64_t presentID;

    safe_VkLatencySubmissionPresentIdNV(const VkLatencySubmissionPresentIdNV* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkLatencySubmissionPresentIdNV(const safe_VkLatencySubmissionPresentIdNV& copy_src);
    safe_VkLatencySubmissionPresentIdNV& operator=(const safe_VkLatencySubmissionPresentIdNV& copy_src);
    safe_VkLatencySubmissionPresentIdNV();
    ~safe_VkLatencySubmissionPresentIdNV();
    void initialize(const VkLatencySubmissionPresentIdNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLatencySubmissionPresentIdNV* copy_src, PNextCopyState* copy_state = {});
    VkLatencySubmissionPresentIdNV* ptr() { return reinterpret_cast<VkLatencySubmissionPresentIdNV*>(this); }
    VkLatencySubmissionPresentIdNV const* ptr() const { return reinterpret_cast<VkLatencySubmissionPresentIdNV const*>(this); }
};
struct safe_VkSwapchainLatencyCreateInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 latencyModeEnable;

    safe_VkSwapchainLatencyCreateInfoNV(const VkSwapchainLatencyCreateInfoNV* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkSwapchainLatencyCreateInfoNV(const safe_VkSwapchainLatencyCreateInfoNV& copy_src);
    safe_VkSwapchainLatencyCreateInfoNV& operator=(const safe_VkSwapchainLatencyCreateInfoNV& copy_src);
    safe_VkSwapchainLatencyCreateInfoNV();
    ~safe_VkSwapchainLatencyCreateInfoNV();
    void initialize(const VkSwapchainLatencyCreateInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSwapchainLatencyCreateInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkSwapchainLatencyCreateInfoNV* ptr() { return reinterpret_cast<VkSwapchainLatencyCreateInfoNV*>(this); }
    VkSwapchainLatencyCreateInfoNV const* ptr() const { return reinterpret_cast<VkSwapchainLatencyCreateInfoNV const*>(this); }
};
struct safe_VkOutOfBandQueueTypeInfoNV {
    VkStructureType sType;
    const void* pNext{};
    VkOutOfBandQueueTypeNV queueType;

    safe_VkOutOfBandQueueTypeInfoNV(const VkOutOfBandQueueTypeInfoNV* in_struct, PNextCopyState* copy_state = {},
                                    bool copy_pnext = true);
    safe_VkOutOfBandQueueTypeInfoNV(const safe_VkOutOfBandQueueTypeInfoNV& copy_src);
    safe_VkOutOfBandQueueTypeInfoNV& operator=(const safe_VkOutOfBandQueueTypeInfoNV& copy_src);
    safe_VkOutOfBandQueueTypeInfoNV();
    ~safe_VkOutOfBandQueueTypeInfoNV();
    void initialize(const VkOutOfBandQueueTypeInfoNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkOutOfBandQueueTypeInfoNV* copy_src, PNextCopyState* copy_state = {});
    VkOutOfBandQueueTypeInfoNV* ptr() { return reinterpret_cast<VkOutOfBandQueueTypeInfoNV*>(this); }
    VkOutOfBandQueueTypeInfoNV const* ptr() const { return reinterpret_cast<VkOutOfBandQueueTypeInfoNV const*>(this); }
};
struct safe_VkLatencySurfaceCapabilitiesNV {
    VkStructureType sType;
    const void* pNext{};
    uint32_t presentModeCount;
    VkPresentModeKHR* pPresentModes{};

    safe_VkLatencySurfaceCapabilitiesNV(const VkLatencySurfaceCapabilitiesNV* in_struct, PNextCopyState* copy_state = {},
                                        bool copy_pnext = true);
    safe_VkLatencySurfaceCapabilitiesNV(const safe_VkLatencySurfaceCapabilitiesNV& copy_src);
    safe_VkLatencySurfaceCapabilitiesNV& operator=(const safe_VkLatencySurfaceCapabilitiesNV& copy_src);
    safe_VkLatencySurfaceCapabilitiesNV();
    ~safe_VkLatencySurfaceCapabilitiesNV();
    void initialize(const VkLatencySurfaceCapabilitiesNV* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkLatencySurfaceCapabilitiesNV* copy_src, PNextCopyState* copy_state = {});
    VkLatencySurfaceCapabilitiesNV* ptr() { return reinterpret_cast<VkLatencySurfaceCapabilitiesNV*>(this); }
    VkLatencySurfaceCapabilitiesNV const* ptr() const { return reinterpret_cast<VkLatencySurfaceCapabilitiesNV const*>(this); }
};
struct safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    uint32_t perViewRenderAreaCount;
    const VkRect2D* pPerViewRenderAreas{};

    safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* in_struct,
                                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(
        const safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& copy_src);
    safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& operator=(
        const safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM& copy_src);
    safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM();
    ~safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM();
    void initialize(const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM* ptr() {
        return reinterpret_cast<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM*>(this);
    }
    VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM const* ptr() const {
        return reinterpret_cast<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM const*>(this);
    }
};
struct safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM {
    VkStructureType sType;
    void* pNext{};
    VkExtent2D maxBlockMatchWindow;

    safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM(const VkPhysicalDeviceImageProcessing2PropertiesQCOM* in_struct,
                                                        PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM(const safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM& operator=(
        const safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM& copy_src);
    safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM();
    ~safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM();
    void initialize(const VkPhysicalDeviceImageProcessing2PropertiesQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageProcessing2PropertiesQCOM* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageProcessing2PropertiesQCOM* ptr() {
        return reinterpret_cast<VkPhysicalDeviceImageProcessing2PropertiesQCOM*>(this);
    }
    VkPhysicalDeviceImageProcessing2PropertiesQCOM const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceImageProcessing2PropertiesQCOM const*>(this);
    }
};
struct safe_VkSamplerBlockMatchWindowCreateInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    VkExtent2D windowExtent;
    VkBlockMatchWindowCompareModeQCOM windowCompareMode;

    safe_VkSamplerBlockMatchWindowCreateInfoQCOM(const VkSamplerBlockMatchWindowCreateInfoQCOM* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerBlockMatchWindowCreateInfoQCOM(const safe_VkSamplerBlockMatchWindowCreateInfoQCOM& copy_src);
    safe_VkSamplerBlockMatchWindowCreateInfoQCOM& operator=(const safe_VkSamplerBlockMatchWindowCreateInfoQCOM& copy_src);
    safe_VkSamplerBlockMatchWindowCreateInfoQCOM();
    ~safe_VkSamplerBlockMatchWindowCreateInfoQCOM();
    void initialize(const VkSamplerBlockMatchWindowCreateInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerBlockMatchWindowCreateInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkSamplerBlockMatchWindowCreateInfoQCOM* ptr() { return reinterpret_cast<VkSamplerBlockMatchWindowCreateInfoQCOM*>(this); }
    VkSamplerBlockMatchWindowCreateInfoQCOM const* ptr() const {
        return reinterpret_cast<VkSamplerBlockMatchWindowCreateInfoQCOM const*>(this);
    }
};
struct safe_VkSamplerCubicWeightsCreateInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    VkCubicFilterWeightsQCOM cubicWeights;

    safe_VkSamplerCubicWeightsCreateInfoQCOM(const VkSamplerCubicWeightsCreateInfoQCOM* in_struct, PNextCopyState* copy_state = {},
                                             bool copy_pnext = true);
    safe_VkSamplerCubicWeightsCreateInfoQCOM(const safe_VkSamplerCubicWeightsCreateInfoQCOM& copy_src);
    safe_VkSamplerCubicWeightsCreateInfoQCOM& operator=(const safe_VkSamplerCubicWeightsCreateInfoQCOM& copy_src);
    safe_VkSamplerCubicWeightsCreateInfoQCOM();
    ~safe_VkSamplerCubicWeightsCreateInfoQCOM();
    void initialize(const VkSamplerCubicWeightsCreateInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerCubicWeightsCreateInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkSamplerCubicWeightsCreateInfoQCOM* ptr() { return reinterpret_cast<VkSamplerCubicWeightsCreateInfoQCOM*>(this); }
    VkSamplerCubicWeightsCreateInfoQCOM const* ptr() const {
        return reinterpret_cast<VkSamplerCubicWeightsCreateInfoQCOM const*>(this);
    }
};
struct safe_VkBlitImageCubicWeightsInfoQCOM {
    VkStructureType sType;
    const void* pNext{};
    VkCubicFilterWeightsQCOM cubicWeights;

    safe_VkBlitImageCubicWeightsInfoQCOM(const VkBlitImageCubicWeightsInfoQCOM* in_struct, PNextCopyState* copy_state = {},
                                         bool copy_pnext = true);
    safe_VkBlitImageCubicWeightsInfoQCOM(const safe_VkBlitImageCubicWeightsInfoQCOM& copy_src);
    safe_VkBlitImageCubicWeightsInfoQCOM& operator=(const safe_VkBlitImageCubicWeightsInfoQCOM& copy_src);
    safe_VkBlitImageCubicWeightsInfoQCOM();
    ~safe_VkBlitImageCubicWeightsInfoQCOM();
    void initialize(const VkBlitImageCubicWeightsInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkBlitImageCubicWeightsInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkBlitImageCubicWeightsInfoQCOM* ptr() { return reinterpret_cast<VkBlitImageCubicWeightsInfoQCOM*>(this); }
    VkBlitImageCubicWeightsInfoQCOM const* ptr() const { return reinterpret_cast<VkBlitImageCubicWeightsInfoQCOM const*>(this); }
};
struct safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {
    VkStructureType sType;
    void* pNext{};
    VkBool32 enableYDegamma;
    VkBool32 enableCbCrDegamma;

    safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(
        const safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& copy_src);
    safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& operator=(
        const safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM& copy_src);
    safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM();
    ~safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM();
    void initialize(const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* copy_src, PNextCopyState* copy_state = {});
    VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM* ptr() {
        return reinterpret_cast<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM*>(this);
    }
    VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM const* ptr() const {
        return reinterpret_cast<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM const*>(this);
    }
};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
struct safe_VkScreenBufferPropertiesQNX {
    VkStructureType sType;
    void* pNext{};
    VkDeviceSize allocationSize;
    uint32_t memoryTypeBits;

    safe_VkScreenBufferPropertiesQNX(const VkScreenBufferPropertiesQNX* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkScreenBufferPropertiesQNX(const safe_VkScreenBufferPropertiesQNX& copy_src);
    safe_VkScreenBufferPropertiesQNX& operator=(const safe_VkScreenBufferPropertiesQNX& copy_src);
    safe_VkScreenBufferPropertiesQNX();
    ~safe_VkScreenBufferPropertiesQNX();
    void initialize(const VkScreenBufferPropertiesQNX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkScreenBufferPropertiesQNX* copy_src, PNextCopyState* copy_state = {});
    VkScreenBufferPropertiesQNX* ptr() { return reinterpret_cast<VkScreenBufferPropertiesQNX*>(this); }
    VkScreenBufferPropertiesQNX const* ptr() const { return reinterpret_cast<VkScreenBufferPropertiesQNX const*>(this); }
};
struct safe_VkScreenBufferFormatPropertiesQNX {
    VkStructureType sType;
    void* pNext{};
    VkFormat format;
    uint64_t externalFormat;
    uint64_t screenUsage;
    VkFormatFeatureFlags formatFeatures;
    VkComponentMapping samplerYcbcrConversionComponents;
    VkSamplerYcbcrModelConversion suggestedYcbcrModel;
    VkSamplerYcbcrRange suggestedYcbcrRange;
    VkChromaLocation suggestedXChromaOffset;
    VkChromaLocation suggestedYChromaOffset;

    safe_VkScreenBufferFormatPropertiesQNX(const VkScreenBufferFormatPropertiesQNX* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkScreenBufferFormatPropertiesQNX(const safe_VkScreenBufferFormatPropertiesQNX& copy_src);
    safe_VkScreenBufferFormatPropertiesQNX& operator=(const safe_VkScreenBufferFormatPropertiesQNX& copy_src);
    safe_VkScreenBufferFormatPropertiesQNX();
    ~safe_VkScreenBufferFormatPropertiesQNX();
    void initialize(const VkScreenBufferFormatPropertiesQNX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkScreenBufferFormatPropertiesQNX* copy_src, PNextCopyState* copy_state = {});
    VkScreenBufferFormatPropertiesQNX* ptr() { return reinterpret_cast<VkScreenBufferFormatPropertiesQNX*>(this); }
    VkScreenBufferFormatPropertiesQNX const* ptr() const {
        return reinterpret_cast<VkScreenBufferFormatPropertiesQNX const*>(this);
    }
};
struct safe_VkImportScreenBufferInfoQNX {
    VkStructureType sType;
    const void* pNext{};
    struct _screen_buffer* buffer{};

    safe_VkImportScreenBufferInfoQNX(const VkImportScreenBufferInfoQNX* in_struct, PNextCopyState* copy_state = {},
                                     bool copy_pnext = true);
    safe_VkImportScreenBufferInfoQNX(const safe_VkImportScreenBufferInfoQNX& copy_src);
    safe_VkImportScreenBufferInfoQNX& operator=(const safe_VkImportScreenBufferInfoQNX& copy_src);
    safe_VkImportScreenBufferInfoQNX();
    ~safe_VkImportScreenBufferInfoQNX();
    void initialize(const VkImportScreenBufferInfoQNX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImportScreenBufferInfoQNX* copy_src, PNextCopyState* copy_state = {});
    VkImportScreenBufferInfoQNX* ptr() { return reinterpret_cast<VkImportScreenBufferInfoQNX*>(this); }
    VkImportScreenBufferInfoQNX const* ptr() const { return reinterpret_cast<VkImportScreenBufferInfoQNX const*>(this); }
};
struct safe_VkExternalFormatQNX {
    VkStructureType sType;
    void* pNext{};
    uint64_t externalFormat;

    safe_VkExternalFormatQNX(const VkExternalFormatQNX* in_struct, PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkExternalFormatQNX(const safe_VkExternalFormatQNX& copy_src);
    safe_VkExternalFormatQNX& operator=(const safe_VkExternalFormatQNX& copy_src);
    safe_VkExternalFormatQNX();
    ~safe_VkExternalFormatQNX();
    void initialize(const VkExternalFormatQNX* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkExternalFormatQNX* copy_src, PNextCopyState* copy_state = {});
    VkExternalFormatQNX* ptr() { return reinterpret_cast<VkExternalFormatQNX*>(this); }
    VkExternalFormatQNX const* ptr() const { return reinterpret_cast<VkExternalFormatQNX const*>(this); }
};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
struct safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT {
    VkStructureType sType;
    void* pNext{};
    VkLayeredDriverUnderlyingApiMSFT underlyingAPI;

    safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT(const VkPhysicalDeviceLayeredDriverPropertiesMSFT* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT(const safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT& copy_src);
    safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT& operator=(const safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT& copy_src);
    safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT();
    ~safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT();
    void initialize(const VkPhysicalDeviceLayeredDriverPropertiesMSFT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceLayeredDriverPropertiesMSFT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceLayeredDriverPropertiesMSFT* ptr() {
        return reinterpret_cast<VkPhysicalDeviceLayeredDriverPropertiesMSFT*>(this);
    }
    VkPhysicalDeviceLayeredDriverPropertiesMSFT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceLayeredDriverPropertiesMSFT const*>(this);
    }
};
struct safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA {
    VkStructureType sType;
    void* pNext{};
    uint32_t supportedImageAlignmentMask;

    safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(const VkPhysicalDeviceImageAlignmentControlPropertiesMESA* in_struct,
                                                             PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(
        const safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA& copy_src);
    safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA& operator=(
        const safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA& copy_src);
    safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA();
    ~safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA();
    void initialize(const VkPhysicalDeviceImageAlignmentControlPropertiesMESA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceImageAlignmentControlPropertiesMESA* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceImageAlignmentControlPropertiesMESA* ptr() {
        return reinterpret_cast<VkPhysicalDeviceImageAlignmentControlPropertiesMESA*>(this);
    }
    VkPhysicalDeviceImageAlignmentControlPropertiesMESA const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceImageAlignmentControlPropertiesMESA const*>(this);
    }
};
struct safe_VkImageAlignmentControlCreateInfoMESA {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maximumRequestedAlignment;

    safe_VkImageAlignmentControlCreateInfoMESA(const VkImageAlignmentControlCreateInfoMESA* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkImageAlignmentControlCreateInfoMESA(const safe_VkImageAlignmentControlCreateInfoMESA& copy_src);
    safe_VkImageAlignmentControlCreateInfoMESA& operator=(const safe_VkImageAlignmentControlCreateInfoMESA& copy_src);
    safe_VkImageAlignmentControlCreateInfoMESA();
    ~safe_VkImageAlignmentControlCreateInfoMESA();
    void initialize(const VkImageAlignmentControlCreateInfoMESA* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkImageAlignmentControlCreateInfoMESA* copy_src, PNextCopyState* copy_state = {});
    VkImageAlignmentControlCreateInfoMESA* ptr() { return reinterpret_cast<VkImageAlignmentControlCreateInfoMESA*>(this); }
    VkImageAlignmentControlCreateInfoMESA const* ptr() const {
        return reinterpret_cast<VkImageAlignmentControlCreateInfoMESA const*>(this);
    }
};
struct safe_VkAccelerationStructureGeometryTrianglesDataKHR {
    VkStructureType sType;
    const void* pNext{};
    VkFormat vertexFormat;
    safe_VkDeviceOrHostAddressConstKHR vertexData;
    VkDeviceSize vertexStride;
    uint32_t maxVertex;
    VkIndexType indexType;
    safe_VkDeviceOrHostAddressConstKHR indexData;
    safe_VkDeviceOrHostAddressConstKHR transformData;

    safe_VkAccelerationStructureGeometryTrianglesDataKHR(const VkAccelerationStructureGeometryTrianglesDataKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureGeometryTrianglesDataKHR(const safe_VkAccelerationStructureGeometryTrianglesDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryTrianglesDataKHR& operator=(
        const safe_VkAccelerationStructureGeometryTrianglesDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryTrianglesDataKHR();
    ~safe_VkAccelerationStructureGeometryTrianglesDataKHR();
    void initialize(const VkAccelerationStructureGeometryTrianglesDataKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureGeometryTrianglesDataKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureGeometryTrianglesDataKHR* ptr() {
        return reinterpret_cast<VkAccelerationStructureGeometryTrianglesDataKHR*>(this);
    }
    VkAccelerationStructureGeometryTrianglesDataKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureGeometryTrianglesDataKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureGeometryAabbsDataKHR {
    VkStructureType sType;
    const void* pNext{};
    safe_VkDeviceOrHostAddressConstKHR data;
    VkDeviceSize stride;

    safe_VkAccelerationStructureGeometryAabbsDataKHR(const VkAccelerationStructureGeometryAabbsDataKHR* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureGeometryAabbsDataKHR(const safe_VkAccelerationStructureGeometryAabbsDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryAabbsDataKHR& operator=(const safe_VkAccelerationStructureGeometryAabbsDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryAabbsDataKHR();
    ~safe_VkAccelerationStructureGeometryAabbsDataKHR();
    void initialize(const VkAccelerationStructureGeometryAabbsDataKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureGeometryAabbsDataKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureGeometryAabbsDataKHR* ptr() {
        return reinterpret_cast<VkAccelerationStructureGeometryAabbsDataKHR*>(this);
    }
    VkAccelerationStructureGeometryAabbsDataKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureGeometryAabbsDataKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureGeometryInstancesDataKHR {
    VkStructureType sType;
    const void* pNext{};
    VkBool32 arrayOfPointers;
    safe_VkDeviceOrHostAddressConstKHR data;

    safe_VkAccelerationStructureGeometryInstancesDataKHR(const VkAccelerationStructureGeometryInstancesDataKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureGeometryInstancesDataKHR(const safe_VkAccelerationStructureGeometryInstancesDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryInstancesDataKHR& operator=(
        const safe_VkAccelerationStructureGeometryInstancesDataKHR& copy_src);
    safe_VkAccelerationStructureGeometryInstancesDataKHR();
    ~safe_VkAccelerationStructureGeometryInstancesDataKHR();
    void initialize(const VkAccelerationStructureGeometryInstancesDataKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureGeometryInstancesDataKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureGeometryInstancesDataKHR* ptr() {
        return reinterpret_cast<VkAccelerationStructureGeometryInstancesDataKHR*>(this);
    }
    VkAccelerationStructureGeometryInstancesDataKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureGeometryInstancesDataKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureGeometryKHR {
    VkStructureType sType;
    const void* pNext{};
    VkGeometryTypeKHR geometryType;
    VkAccelerationStructureGeometryDataKHR geometry;
    VkGeometryFlagsKHR flags;

    safe_VkAccelerationStructureGeometryKHR(const VkAccelerationStructureGeometryKHR* in_struct, const bool is_host,
                                            const VkAccelerationStructureBuildRangeInfoKHR* build_range_info,
                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureGeometryKHR(const safe_VkAccelerationStructureGeometryKHR& copy_src);
    safe_VkAccelerationStructureGeometryKHR& operator=(const safe_VkAccelerationStructureGeometryKHR& copy_src);
    safe_VkAccelerationStructureGeometryKHR();
    ~safe_VkAccelerationStructureGeometryKHR();
    void initialize(const VkAccelerationStructureGeometryKHR* in_struct, const bool is_host,
                    const VkAccelerationStructureBuildRangeInfoKHR* build_range_info, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureGeometryKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureGeometryKHR* ptr() { return reinterpret_cast<VkAccelerationStructureGeometryKHR*>(this); }
    VkAccelerationStructureGeometryKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureGeometryKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureBuildGeometryInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureTypeKHR type;
    VkBuildAccelerationStructureFlagsKHR flags;
    VkBuildAccelerationStructureModeKHR mode;
    VkAccelerationStructureKHR srcAccelerationStructure;
    VkAccelerationStructureKHR dstAccelerationStructure;
    uint32_t geometryCount;
    safe_VkAccelerationStructureGeometryKHR* pGeometries{};
    safe_VkAccelerationStructureGeometryKHR** ppGeometries{};
    safe_VkDeviceOrHostAddressKHR scratchData;

    safe_VkAccelerationStructureBuildGeometryInfoKHR(const VkAccelerationStructureBuildGeometryInfoKHR* in_struct,
                                                     const bool is_host,
                                                     const VkAccelerationStructureBuildRangeInfoKHR* build_range_infos,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureBuildGeometryInfoKHR(const safe_VkAccelerationStructureBuildGeometryInfoKHR& copy_src);
    safe_VkAccelerationStructureBuildGeometryInfoKHR& operator=(const safe_VkAccelerationStructureBuildGeometryInfoKHR& copy_src);
    safe_VkAccelerationStructureBuildGeometryInfoKHR();
    ~safe_VkAccelerationStructureBuildGeometryInfoKHR();
    void initialize(const VkAccelerationStructureBuildGeometryInfoKHR* in_struct, const bool is_host,
                    const VkAccelerationStructureBuildRangeInfoKHR* build_range_infos, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureBuildGeometryInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureBuildGeometryInfoKHR* ptr() {
        return reinterpret_cast<VkAccelerationStructureBuildGeometryInfoKHR*>(this);
    }
    VkAccelerationStructureBuildGeometryInfoKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureBuildGeometryInfoKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureCreateFlagsKHR createFlags;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkAccelerationStructureTypeKHR type;
    VkDeviceAddress deviceAddress;

    safe_VkAccelerationStructureCreateInfoKHR(const VkAccelerationStructureCreateInfoKHR* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureCreateInfoKHR(const safe_VkAccelerationStructureCreateInfoKHR& copy_src);
    safe_VkAccelerationStructureCreateInfoKHR& operator=(const safe_VkAccelerationStructureCreateInfoKHR& copy_src);
    safe_VkAccelerationStructureCreateInfoKHR();
    ~safe_VkAccelerationStructureCreateInfoKHR();
    void initialize(const VkAccelerationStructureCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureCreateInfoKHR* ptr() { return reinterpret_cast<VkAccelerationStructureCreateInfoKHR*>(this); }
    VkAccelerationStructureCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureCreateInfoKHR const*>(this);
    }
};
struct safe_VkWriteDescriptorSetAccelerationStructureKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t accelerationStructureCount;
    VkAccelerationStructureKHR* pAccelerationStructures{};

    safe_VkWriteDescriptorSetAccelerationStructureKHR(const VkWriteDescriptorSetAccelerationStructureKHR* in_struct,
                                                      PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkWriteDescriptorSetAccelerationStructureKHR(const safe_VkWriteDescriptorSetAccelerationStructureKHR& copy_src);
    safe_VkWriteDescriptorSetAccelerationStructureKHR& operator=(const safe_VkWriteDescriptorSetAccelerationStructureKHR& copy_src);
    safe_VkWriteDescriptorSetAccelerationStructureKHR();
    ~safe_VkWriteDescriptorSetAccelerationStructureKHR();
    void initialize(const VkWriteDescriptorSetAccelerationStructureKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkWriteDescriptorSetAccelerationStructureKHR* copy_src, PNextCopyState* copy_state = {});
    VkWriteDescriptorSetAccelerationStructureKHR* ptr() {
        return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureKHR*>(this);
    }
    VkWriteDescriptorSetAccelerationStructureKHR const* ptr() const {
        return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint64_t maxGeometryCount;
    uint64_t maxInstanceCount;
    uint64_t maxPrimitiveCount;
    uint32_t maxPerStageDescriptorAccelerationStructures;
    uint32_t maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
    uint32_t maxDescriptorSetAccelerationStructures;
    uint32_t maxDescriptorSetUpdateAfterBindAccelerationStructures;
    uint32_t minAccelerationStructureScratchOffsetAlignment;

    safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR(const VkPhysicalDeviceAccelerationStructurePropertiesKHR* in_struct,
                                                            PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR(
        const safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR& operator=(
        const safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR();
    ~safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR();
    void initialize(const VkPhysicalDeviceAccelerationStructurePropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceAccelerationStructurePropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceAccelerationStructurePropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceAccelerationStructurePropertiesKHR*>(this);
    }
    VkPhysicalDeviceAccelerationStructurePropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceAccelerationStructurePropertiesKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureDeviceAddressInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureKHR accelerationStructure;

    safe_VkAccelerationStructureDeviceAddressInfoKHR(const VkAccelerationStructureDeviceAddressInfoKHR* in_struct,
                                                     PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureDeviceAddressInfoKHR(const safe_VkAccelerationStructureDeviceAddressInfoKHR& copy_src);
    safe_VkAccelerationStructureDeviceAddressInfoKHR& operator=(const safe_VkAccelerationStructureDeviceAddressInfoKHR& copy_src);
    safe_VkAccelerationStructureDeviceAddressInfoKHR();
    ~safe_VkAccelerationStructureDeviceAddressInfoKHR();
    void initialize(const VkAccelerationStructureDeviceAddressInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureDeviceAddressInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureDeviceAddressInfoKHR* ptr() {
        return reinterpret_cast<VkAccelerationStructureDeviceAddressInfoKHR*>(this);
    }
    VkAccelerationStructureDeviceAddressInfoKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureDeviceAddressInfoKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureVersionInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    const uint8_t* pVersionData{};

    safe_VkAccelerationStructureVersionInfoKHR(const VkAccelerationStructureVersionInfoKHR* in_struct,
                                               PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureVersionInfoKHR(const safe_VkAccelerationStructureVersionInfoKHR& copy_src);
    safe_VkAccelerationStructureVersionInfoKHR& operator=(const safe_VkAccelerationStructureVersionInfoKHR& copy_src);
    safe_VkAccelerationStructureVersionInfoKHR();
    ~safe_VkAccelerationStructureVersionInfoKHR();
    void initialize(const VkAccelerationStructureVersionInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureVersionInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureVersionInfoKHR* ptr() { return reinterpret_cast<VkAccelerationStructureVersionInfoKHR*>(this); }
    VkAccelerationStructureVersionInfoKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureVersionInfoKHR const*>(this);
    }
};
struct safe_VkCopyAccelerationStructureToMemoryInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureKHR src;
    safe_VkDeviceOrHostAddressKHR dst;
    VkCopyAccelerationStructureModeKHR mode;

    safe_VkCopyAccelerationStructureToMemoryInfoKHR(const VkCopyAccelerationStructureToMemoryInfoKHR* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyAccelerationStructureToMemoryInfoKHR(const safe_VkCopyAccelerationStructureToMemoryInfoKHR& copy_src);
    safe_VkCopyAccelerationStructureToMemoryInfoKHR& operator=(const safe_VkCopyAccelerationStructureToMemoryInfoKHR& copy_src);
    safe_VkCopyAccelerationStructureToMemoryInfoKHR();
    ~safe_VkCopyAccelerationStructureToMemoryInfoKHR();
    void initialize(const VkCopyAccelerationStructureToMemoryInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyAccelerationStructureToMemoryInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkCopyAccelerationStructureToMemoryInfoKHR* ptr() {
        return reinterpret_cast<VkCopyAccelerationStructureToMemoryInfoKHR*>(this);
    }
    VkCopyAccelerationStructureToMemoryInfoKHR const* ptr() const {
        return reinterpret_cast<VkCopyAccelerationStructureToMemoryInfoKHR const*>(this);
    }
};
struct safe_VkCopyMemoryToAccelerationStructureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    safe_VkDeviceOrHostAddressConstKHR src;
    VkAccelerationStructureKHR dst;
    VkCopyAccelerationStructureModeKHR mode;

    safe_VkCopyMemoryToAccelerationStructureInfoKHR(const VkCopyMemoryToAccelerationStructureInfoKHR* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkCopyMemoryToAccelerationStructureInfoKHR(const safe_VkCopyMemoryToAccelerationStructureInfoKHR& copy_src);
    safe_VkCopyMemoryToAccelerationStructureInfoKHR& operator=(const safe_VkCopyMemoryToAccelerationStructureInfoKHR& copy_src);
    safe_VkCopyMemoryToAccelerationStructureInfoKHR();
    ~safe_VkCopyMemoryToAccelerationStructureInfoKHR();
    void initialize(const VkCopyMemoryToAccelerationStructureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyMemoryToAccelerationStructureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkCopyMemoryToAccelerationStructureInfoKHR* ptr() {
        return reinterpret_cast<VkCopyMemoryToAccelerationStructureInfoKHR*>(this);
    }
    VkCopyMemoryToAccelerationStructureInfoKHR const* ptr() const {
        return reinterpret_cast<VkCopyMemoryToAccelerationStructureInfoKHR const*>(this);
    }
};
struct safe_VkCopyAccelerationStructureInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkAccelerationStructureKHR src;
    VkAccelerationStructureKHR dst;
    VkCopyAccelerationStructureModeKHR mode;

    safe_VkCopyAccelerationStructureInfoKHR(const VkCopyAccelerationStructureInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                            bool copy_pnext = true);
    safe_VkCopyAccelerationStructureInfoKHR(const safe_VkCopyAccelerationStructureInfoKHR& copy_src);
    safe_VkCopyAccelerationStructureInfoKHR& operator=(const safe_VkCopyAccelerationStructureInfoKHR& copy_src);
    safe_VkCopyAccelerationStructureInfoKHR();
    ~safe_VkCopyAccelerationStructureInfoKHR();
    void initialize(const VkCopyAccelerationStructureInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkCopyAccelerationStructureInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkCopyAccelerationStructureInfoKHR* ptr() { return reinterpret_cast<VkCopyAccelerationStructureInfoKHR*>(this); }
    VkCopyAccelerationStructureInfoKHR const* ptr() const {
        return reinterpret_cast<VkCopyAccelerationStructureInfoKHR const*>(this);
    }
};
struct safe_VkAccelerationStructureBuildSizesInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkDeviceSize accelerationStructureSize;
    VkDeviceSize updateScratchSize;
    VkDeviceSize buildScratchSize;

    safe_VkAccelerationStructureBuildSizesInfoKHR(const VkAccelerationStructureBuildSizesInfoKHR* in_struct,
                                                  PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkAccelerationStructureBuildSizesInfoKHR(const safe_VkAccelerationStructureBuildSizesInfoKHR& copy_src);
    safe_VkAccelerationStructureBuildSizesInfoKHR& operator=(const safe_VkAccelerationStructureBuildSizesInfoKHR& copy_src);
    safe_VkAccelerationStructureBuildSizesInfoKHR();
    ~safe_VkAccelerationStructureBuildSizesInfoKHR();
    void initialize(const VkAccelerationStructureBuildSizesInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkAccelerationStructureBuildSizesInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkAccelerationStructureBuildSizesInfoKHR* ptr() { return reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR*>(this); }
    VkAccelerationStructureBuildSizesInfoKHR const* ptr() const {
        return reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR const*>(this);
    }
};
struct safe_VkRayTracingShaderGroupCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkRayTracingShaderGroupTypeKHR type;
    uint32_t generalShader;
    uint32_t closestHitShader;
    uint32_t anyHitShader;
    uint32_t intersectionShader;
    const void* pShaderGroupCaptureReplayHandle{};

    safe_VkRayTracingShaderGroupCreateInfoKHR(const VkRayTracingShaderGroupCreateInfoKHR* in_struct,
                                              PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRayTracingShaderGroupCreateInfoKHR(const safe_VkRayTracingShaderGroupCreateInfoKHR& copy_src);
    safe_VkRayTracingShaderGroupCreateInfoKHR& operator=(const safe_VkRayTracingShaderGroupCreateInfoKHR& copy_src);
    safe_VkRayTracingShaderGroupCreateInfoKHR();
    ~safe_VkRayTracingShaderGroupCreateInfoKHR();
    void initialize(const VkRayTracingShaderGroupCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRayTracingShaderGroupCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRayTracingShaderGroupCreateInfoKHR* ptr() { return reinterpret_cast<VkRayTracingShaderGroupCreateInfoKHR*>(this); }
    VkRayTracingShaderGroupCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkRayTracingShaderGroupCreateInfoKHR const*>(this);
    }
};
struct safe_VkRayTracingPipelineInterfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    uint32_t maxPipelineRayPayloadSize;
    uint32_t maxPipelineRayHitAttributeSize;

    safe_VkRayTracingPipelineInterfaceCreateInfoKHR(const VkRayTracingPipelineInterfaceCreateInfoKHR* in_struct,
                                                    PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkRayTracingPipelineInterfaceCreateInfoKHR(const safe_VkRayTracingPipelineInterfaceCreateInfoKHR& copy_src);
    safe_VkRayTracingPipelineInterfaceCreateInfoKHR& operator=(const safe_VkRayTracingPipelineInterfaceCreateInfoKHR& copy_src);
    safe_VkRayTracingPipelineInterfaceCreateInfoKHR();
    ~safe_VkRayTracingPipelineInterfaceCreateInfoKHR();
    void initialize(const VkRayTracingPipelineInterfaceCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRayTracingPipelineInterfaceCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRayTracingPipelineInterfaceCreateInfoKHR* ptr() {
        return reinterpret_cast<VkRayTracingPipelineInterfaceCreateInfoKHR*>(this);
    }
    VkRayTracingPipelineInterfaceCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkRayTracingPipelineInterfaceCreateInfoKHR const*>(this);
    }
};
struct safe_VkRayTracingPipelineCreateInfoKHR {
    VkStructureType sType;
    const void* pNext{};
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages{};
    uint32_t groupCount;
    safe_VkRayTracingShaderGroupCreateInfoKHR* pGroups{};
    uint32_t maxPipelineRayRecursionDepth;
    safe_VkPipelineLibraryCreateInfoKHR* pLibraryInfo{};
    safe_VkRayTracingPipelineInterfaceCreateInfoKHR* pLibraryInterface{};
    safe_VkPipelineDynamicStateCreateInfo* pDynamicState{};
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;

    safe_VkRayTracingPipelineCreateInfoKHR(const VkRayTracingPipelineCreateInfoKHR* in_struct, PNextCopyState* copy_state = {},
                                           bool copy_pnext = true);
    safe_VkRayTracingPipelineCreateInfoKHR(const safe_VkRayTracingPipelineCreateInfoKHR& copy_src);
    safe_VkRayTracingPipelineCreateInfoKHR& operator=(const safe_VkRayTracingPipelineCreateInfoKHR& copy_src);
    safe_VkRayTracingPipelineCreateInfoKHR();
    ~safe_VkRayTracingPipelineCreateInfoKHR();
    void initialize(const VkRayTracingPipelineCreateInfoKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkRayTracingPipelineCreateInfoKHR* copy_src, PNextCopyState* copy_state = {});
    VkRayTracingPipelineCreateInfoKHR* ptr() { return reinterpret_cast<VkRayTracingPipelineCreateInfoKHR*>(this); }
    VkRayTracingPipelineCreateInfoKHR const* ptr() const {
        return reinterpret_cast<VkRayTracingPipelineCreateInfoKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR {
    VkStructureType sType;
    void* pNext{};
    uint32_t shaderGroupHandleSize;
    uint32_t maxRayRecursionDepth;
    uint32_t maxShaderGroupStride;
    uint32_t shaderGroupBaseAlignment;
    uint32_t shaderGroupHandleCaptureReplaySize;
    uint32_t maxRayDispatchInvocationCount;
    uint32_t shaderGroupHandleAlignment;
    uint32_t maxRayHitAttributeSize;

    safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(const VkPhysicalDeviceRayTracingPipelinePropertiesKHR* in_struct,
                                                         PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(const safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR& operator=(
        const safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR& copy_src);
    safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR();
    ~safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR();
    void initialize(const VkPhysicalDeviceRayTracingPipelinePropertiesKHR* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceRayTracingPipelinePropertiesKHR* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceRayTracingPipelinePropertiesKHR* ptr() {
        return reinterpret_cast<VkPhysicalDeviceRayTracingPipelinePropertiesKHR*>(this);
    }
    VkPhysicalDeviceRayTracingPipelinePropertiesKHR const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceRayTracingPipelinePropertiesKHR const*>(this);
    }
};
struct safe_VkPhysicalDeviceMeshShaderPropertiesEXT {
    VkStructureType sType;
    void* pNext{};
    uint32_t maxTaskWorkGroupTotalCount;
    uint32_t maxTaskWorkGroupCount[3];
    uint32_t maxTaskWorkGroupInvocations;
    uint32_t maxTaskWorkGroupSize[3];
    uint32_t maxTaskPayloadSize;
    uint32_t maxTaskSharedMemorySize;
    uint32_t maxTaskPayloadAndSharedMemorySize;
    uint32_t maxMeshWorkGroupTotalCount;
    uint32_t maxMeshWorkGroupCount[3];
    uint32_t maxMeshWorkGroupInvocations;
    uint32_t maxMeshWorkGroupSize[3];
    uint32_t maxMeshSharedMemorySize;
    uint32_t maxMeshPayloadAndSharedMemorySize;
    uint32_t maxMeshOutputMemorySize;
    uint32_t maxMeshPayloadAndOutputMemorySize;
    uint32_t maxMeshOutputComponents;
    uint32_t maxMeshOutputVertices;
    uint32_t maxMeshOutputPrimitives;
    uint32_t maxMeshOutputLayers;
    uint32_t maxMeshMultiviewViewCount;
    uint32_t meshOutputPerVertexGranularity;
    uint32_t meshOutputPerPrimitiveGranularity;
    uint32_t maxPreferredTaskWorkGroupInvocations;
    uint32_t maxPreferredMeshWorkGroupInvocations;
    VkBool32 prefersLocalInvocationVertexOutput;
    VkBool32 prefersLocalInvocationPrimitiveOutput;
    VkBool32 prefersCompactVertexOutput;
    VkBool32 prefersCompactPrimitiveOutput;

    safe_VkPhysicalDeviceMeshShaderPropertiesEXT(const VkPhysicalDeviceMeshShaderPropertiesEXT* in_struct,
                                                 PNextCopyState* copy_state = {}, bool copy_pnext = true);
    safe_VkPhysicalDeviceMeshShaderPropertiesEXT(const safe_VkPhysicalDeviceMeshShaderPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMeshShaderPropertiesEXT& operator=(const safe_VkPhysicalDeviceMeshShaderPropertiesEXT& copy_src);
    safe_VkPhysicalDeviceMeshShaderPropertiesEXT();
    ~safe_VkPhysicalDeviceMeshShaderPropertiesEXT();
    void initialize(const VkPhysicalDeviceMeshShaderPropertiesEXT* in_struct, PNextCopyState* copy_state = {});
    void initialize(const safe_VkPhysicalDeviceMeshShaderPropertiesEXT* copy_src, PNextCopyState* copy_state = {});
    VkPhysicalDeviceMeshShaderPropertiesEXT* ptr() { return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesEXT*>(this); }
    VkPhysicalDeviceMeshShaderPropertiesEXT const* ptr() const {
        return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesEXT const*>(this);
    }
};

// Safe struct that spans NV and KHR VkRayTracingPipelineCreateInfo structures.
// It is a VkRayTracingPipelineCreateInfoKHR and supports construction from
// a VkRayTracingPipelineCreateInfoNV.
class safe_VkRayTracingPipelineCreateInfoCommon : public safe_VkRayTracingPipelineCreateInfoKHR {
  public:
    safe_VkRayTracingPipelineCreateInfoCommon() : safe_VkRayTracingPipelineCreateInfoKHR() {}
    safe_VkRayTracingPipelineCreateInfoCommon(const VkRayTracingPipelineCreateInfoNV* pCreateInfo)
        : safe_VkRayTracingPipelineCreateInfoKHR() {
        initialize(pCreateInfo);
    }
    safe_VkRayTracingPipelineCreateInfoCommon(const VkRayTracingPipelineCreateInfoKHR* pCreateInfo)
        : safe_VkRayTracingPipelineCreateInfoKHR(pCreateInfo) {}

    void initialize(const VkRayTracingPipelineCreateInfoNV* pCreateInfo);
    void initialize(const VkRayTracingPipelineCreateInfoKHR* pCreateInfo);
    uint32_t maxRecursionDepth = 0;  // NV specific
};

}  // namespace vku

// NOLINTEND
