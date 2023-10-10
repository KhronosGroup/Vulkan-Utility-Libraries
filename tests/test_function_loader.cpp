// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//

#include <gtest/gtest.h>

#include <vulkan/utility/experimental/vk_function_loader.hpp>

// Only exists so that local_vkGetInstance/DeviceProcAddr can return a 'real' function pointer
VKAPI_ATTR void empty_func() {}

VKAPI_ATTR PFN_vkVoidFunction local_vkGetDeviceProcAddr([[maybe_unused]] VkDevice device, const char *pName) {
    if (strcmp(pName, "vkGetDeviceProcAddr")) {
        return reinterpret_cast<PFN_vkVoidFunction>(&local_vkGetDeviceProcAddr);
    }

    return reinterpret_cast<PFN_vkVoidFunction>(&empty_func);
}

VKAPI_ATTR PFN_vkVoidFunction local_vkGetInstanceProcAddr([[maybe_unused]] VkInstance instance, const char *pName) {
    if (strcmp(pName, "vkGetInstanceProcAddr")) {
        return reinterpret_cast<PFN_vkVoidFunction>(&local_vkGetInstanceProcAddr);
    }
    if (strcmp(pName, "vkGetDeviceProcAddr")) {
        return reinterpret_cast<PFN_vkVoidFunction>(&local_vkGetDeviceProcAddr);
    }
    return reinterpret_cast<PFN_vkVoidFunction>(&empty_func);
}

TEST(test_vk_function_loader, Call_Init) {
    VkuGlobalFunctionTable gft;
    ASSERT_EQ(VK_SUCCESS, gft.init(local_vkGetInstanceProcAddr));
    ASSERT_NE(nullptr, gft.EnumerateInstanceExtensionProperties);
    ASSERT_NE(nullptr, gft.EnumerateInstanceLayerProperties);
    ASSERT_NE(nullptr, gft.EnumerateInstanceVersion);
    ASSERT_NE(nullptr, gft.CreateInstance);

    VkuInstanceFunctionTable ift;
    ASSERT_EQ(VK_SUCCESS, ift.init(gft.GetInstanceProcAddr, {}));
    ASSERT_NE(nullptr, ift.pfn_CreateDevice);
    ASSERT_NE(nullptr, ift.pfn_EnumeratePhysicalDeviceGroups);

    VkuPhysicalDeviceFunctionTable pdft;
    pdft.init(ift.pfn_GetInstanceProcAddr, ift.instance, {});
    ASSERT_NE(nullptr, ift.pfn_GetPhysicalDeviceProperties);

    VkuDeviceFunctionTable dft;
    dft.init(ift.pfn_GetDeviceProcAddr, {});
    ASSERT_NE(nullptr, dft.pfn_DestroyDevice);

    VkuCommandBufferFunctionTable cbft;
    cbft.init(dft.pfn_GetDeviceProcAddr, dft.device, {});
    ASSERT_NE(nullptr, cbft.pfn_CmdBindVertexBuffers);

    VkuQueueFunctionTable qft;
    qft.init(dft.pfn_GetDeviceProcAddr, dft.device, {});
    ASSERT_NE(nullptr, qft.pfn_QueueSubmit);

    gft.release();
}
