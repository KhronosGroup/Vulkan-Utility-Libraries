// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See function_loader_generator.py for modifications
// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <vulkan/vulkan.h>

#ifdef _WIN32
namespace detail {
// Dynamic Loading:
typedef HMODULE vku_dl_handle;
static vku_dl_handle vkuOpenLibrary(const char *lib_path) {
    // Try loading the library the original way first.
    vku_dl_handle lib_handle = LoadLibrary(lib_path);
    if (lib_handle == NULL && GetLastError() == ERROR_MOD_NOT_FOUND) {
        // If that failed, then try loading it with broader search folders.
        lib_handle = LoadLibraryEx(lib_path, NULL, LOAD_LIBRARY_SEARCH_DEFAULT_DIRS | LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR);
    }
    return lib_handle;
}
static char *vkuOpenLibraryError(const char *libPath) {
    static char errorMsg[164];
    (void)snprintf(errorMsg, 163, "Failed to open dynamic library \"%s\" with error %lu", libPath, GetLastError());
    return errorMsg;
}
static void *vkuGetProcAddress(vku_dl_handle library, const char *name) {
    assert(library);
    assert(name);
    return (void *)GetProcAddress(library, name);
}
static inline void vkuCloseLibrary(vku_dl_handle library) {
    FreeLibrary(library);
}
} // namespace detail
#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)

#include <dlfcn.h>
namespace detail {

typedef void *vku_dl_handle;
static inline vku_dl_handle vkuOpenLibrary(const char *libPath) {
    // When loading the library, we use RTLD_LAZY so that not all symbols have to be
    // resolved at this time (which improves performance). Note that if not all symbols
    // can be resolved, this could cause crashes later. Use the LD_BIND_NOW environment
    // variable to force all symbols to be resolved here.
    return dlopen(libPath, RTLD_LAZY | RTLD_LOCAL);
}
static inline const char *vkuOpenLibraryError([[maybe_unused]] const char *libPath) { return dlerror(); }
static inline void *vkuGetProcAddress(vku_dl_handle library, const char *name) {
    assert(library);
    assert(name);
    return dlsym(library, name);
}
static inline void vkuCloseLibrary(vku_dl_handle library) {
    dlclose(library);
}
} // namespace detail
#else
#error Dynamic library functions must be defined for this OS.
#endif

struct VkuGlobalFunctionTable {
    detail::vku_dl_handle lib_handle{};
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr{};
    PFN_vkEnumerateInstanceVersion EnumerateInstanceVersion{};
    PFN_vkEnumerateInstanceExtensionProperties EnumerateInstanceExtensionProperties{};
    PFN_vkEnumerateInstanceLayerProperties EnumerateInstanceLayerProperties{};
    PFN_vkCreateInstance CreateInstance{};
    VkResult init(PFN_vkGetInstanceProcAddr optional_vkGetInstanceProcAddr = nullptr) {
        if (nullptr != optional_vkGetInstanceProcAddr) {
            GetInstanceProcAddr = optional_vkGetInstanceProcAddr;
            EnumerateInstanceVersion = reinterpret_cast<PFN_vkEnumerateInstanceVersion>(optional_vkGetInstanceProcAddr(nullptr, "vkEnumerateInstanceVersion"));
            EnumerateInstanceExtensionProperties = reinterpret_cast<PFN_vkEnumerateInstanceExtensionProperties>(optional_vkGetInstanceProcAddr(nullptr, "vkEnumerateInstanceExtensionProperties"));
            EnumerateInstanceLayerProperties = reinterpret_cast<PFN_vkEnumerateInstanceLayerProperties>(optional_vkGetInstanceProcAddr(nullptr, "vkEnumerateInstanceLayerProperties"));
            CreateInstance = reinterpret_cast<PFN_vkCreateInstance>(optional_vkGetInstanceProcAddr(nullptr, "vkCreateInstance"));
            return VK_SUCCESS;
        }
#if(WIN32)
        const char filename[] = "vulkan-1.dll";
        lib_handle = detail::vkuOpenLibrary(filename);
#elif(__APPLE__)
        char filename[] = "libvulkan.dylib";
        lib_handle = detail::vkuOpenLibrary(filename);
#else
        const char *filename = "libvulkan.so";
        lib_handle = detail::vkuOpenLibrary(filename);
        if (!lib_handle) {
            filename = "libvulkan.so.1";
            lib_handle = detail::vkuOpenLibrary(filename);
        }
#endif

        if (lib_handle == nullptr) {
            printf("%s\n", detail::vkuOpenLibraryError(filename));
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        GetInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(detail::vkuGetProcAddress(lib_handle, "vkGetInstanceProcAddr"));
        if (GetInstanceProcAddr == nullptr){
            return VK_ERROR_INITIALIZATION_FAILED;
        }
        EnumerateInstanceVersion = reinterpret_cast<PFN_vkEnumerateInstanceVersion>(detail::vkuGetProcAddress(lib_handle, "vkEnumerateInstanceVersion"));
        EnumerateInstanceExtensionProperties = reinterpret_cast<PFN_vkEnumerateInstanceExtensionProperties>(detail::vkuGetProcAddress(lib_handle, "vkEnumerateInstanceExtensionProperties"));
        EnumerateInstanceLayerProperties = reinterpret_cast<PFN_vkEnumerateInstanceLayerProperties>(detail::vkuGetProcAddress(lib_handle, "vkEnumerateInstanceLayerProperties"));
        CreateInstance = reinterpret_cast<PFN_vkCreateInstance>(detail::vkuGetProcAddress(lib_handle, "vkCreateInstance"));
        return VK_SUCCESS;
    }
    void release() {
        if (lib_handle != nullptr) {
            detail::vkuCloseLibrary(lib_handle);
        }
    }
};
struct VkuInstanceFunctionTable {
    VkInstance instance;
    PFN_vkDestroyInstance pfn_DestroyInstance{};
    PFN_vkEnumeratePhysicalDevices pfn_EnumeratePhysicalDevices{};
    PFN_vkGetPhysicalDeviceFeatures pfn_GetPhysicalDeviceFeatures{};
    PFN_vkGetPhysicalDeviceFormatProperties pfn_GetPhysicalDeviceFormatProperties{};
    PFN_vkGetPhysicalDeviceImageFormatProperties pfn_GetPhysicalDeviceImageFormatProperties{};
    PFN_vkGetPhysicalDeviceProperties pfn_GetPhysicalDeviceProperties{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties pfn_GetPhysicalDeviceQueueFamilyProperties{};
    PFN_vkGetPhysicalDeviceMemoryProperties pfn_GetPhysicalDeviceMemoryProperties{};
    PFN_vkGetInstanceProcAddr pfn_GetInstanceProcAddr{};
    PFN_vkGetDeviceProcAddr pfn_GetDeviceProcAddr{};
    PFN_vkCreateDevice pfn_CreateDevice{};
    PFN_vkEnumerateDeviceExtensionProperties pfn_EnumerateDeviceExtensionProperties{};
    PFN_vkEnumerateDeviceLayerProperties pfn_EnumerateDeviceLayerProperties{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties pfn_GetPhysicalDeviceSparseImageFormatProperties{};
    PFN_vkEnumeratePhysicalDeviceGroups pfn_EnumeratePhysicalDeviceGroups{};
    PFN_vkGetPhysicalDeviceFeatures2 pfn_GetPhysicalDeviceFeatures2{};
    PFN_vkGetPhysicalDeviceProperties2 pfn_GetPhysicalDeviceProperties2{};
    PFN_vkGetPhysicalDeviceFormatProperties2 pfn_GetPhysicalDeviceFormatProperties2{};
    PFN_vkGetPhysicalDeviceImageFormatProperties2 pfn_GetPhysicalDeviceImageFormatProperties2{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2 pfn_GetPhysicalDeviceQueueFamilyProperties2{};
    PFN_vkGetPhysicalDeviceMemoryProperties2 pfn_GetPhysicalDeviceMemoryProperties2{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 pfn_GetPhysicalDeviceSparseImageFormatProperties2{};
    PFN_vkGetPhysicalDeviceExternalBufferProperties pfn_GetPhysicalDeviceExternalBufferProperties{};
    PFN_vkGetPhysicalDeviceExternalFenceProperties pfn_GetPhysicalDeviceExternalFenceProperties{};
    PFN_vkGetPhysicalDeviceExternalSemaphoreProperties pfn_GetPhysicalDeviceExternalSemaphoreProperties{};
    PFN_vkGetPhysicalDeviceToolProperties pfn_GetPhysicalDeviceToolProperties{};
    PFN_vkDestroySurfaceKHR pfn_DestroySurfaceKHR{};
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR pfn_GetPhysicalDeviceSurfaceSupportKHR{};
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR{};
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR pfn_GetPhysicalDeviceSurfaceFormatsKHR{};
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR pfn_GetPhysicalDeviceSurfacePresentModesKHR{};
    PFN_vkGetPhysicalDevicePresentRectanglesKHR pfn_GetPhysicalDevicePresentRectanglesKHR{};
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR pfn_GetPhysicalDeviceDisplayPropertiesKHR{};
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR{};
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR pfn_GetDisplayPlaneSupportedDisplaysKHR{};
    PFN_vkGetDisplayModePropertiesKHR pfn_GetDisplayModePropertiesKHR{};
    PFN_vkCreateDisplayModeKHR pfn_CreateDisplayModeKHR{};
    PFN_vkGetDisplayPlaneCapabilitiesKHR pfn_GetDisplayPlaneCapabilitiesKHR{};
    PFN_vkCreateDisplayPlaneSurfaceKHR pfn_CreateDisplayPlaneSurfaceKHR{};
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkCreateXlibSurfaceKHR pfn_CreateXlibSurfaceKHR{};
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR pfn_GetPhysicalDeviceXlibPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkCreateXcbSurfaceKHR pfn_CreateXcbSurfaceKHR{};
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR pfn_GetPhysicalDeviceXcbPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkCreateWaylandSurfaceKHR pfn_CreateWaylandSurfaceKHR{};
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR pfn_GetPhysicalDeviceWaylandPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkCreateAndroidSurfaceKHR pfn_CreateAndroidSurfaceKHR{};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateWin32SurfaceKHR pfn_CreateWin32SurfaceKHR{};
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR pfn_GetPhysicalDeviceWin32PresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR pfn_GetPhysicalDeviceVideoCapabilitiesKHR{};
    PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR pfn_GetPhysicalDeviceVideoFormatPropertiesKHR{};
    PFN_vkGetPhysicalDeviceFeatures2KHR pfn_GetPhysicalDeviceFeatures2KHR{};
    PFN_vkGetPhysicalDeviceProperties2KHR pfn_GetPhysicalDeviceProperties2KHR{};
    PFN_vkGetPhysicalDeviceFormatProperties2KHR pfn_GetPhysicalDeviceFormatProperties2KHR{};
    PFN_vkGetPhysicalDeviceImageFormatProperties2KHR pfn_GetPhysicalDeviceImageFormatProperties2KHR{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR pfn_GetPhysicalDeviceQueueFamilyProperties2KHR{};
    PFN_vkGetPhysicalDeviceMemoryProperties2KHR pfn_GetPhysicalDeviceMemoryProperties2KHR{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR{};
    PFN_vkEnumeratePhysicalDeviceGroupsKHR pfn_EnumeratePhysicalDeviceGroupsKHR{};
    PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR pfn_GetPhysicalDeviceExternalBufferPropertiesKHR{};
    PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR{};
    PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR pfn_GetPhysicalDeviceExternalFencePropertiesKHR{};
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR{};
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR{};
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR pfn_GetPhysicalDeviceSurfaceCapabilities2KHR{};
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR pfn_GetPhysicalDeviceSurfaceFormats2KHR{};
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR pfn_GetPhysicalDeviceDisplayProperties2KHR{};
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR{};
    PFN_vkGetDisplayModeProperties2KHR pfn_GetDisplayModeProperties2KHR{};
    PFN_vkGetDisplayPlaneCapabilities2KHR pfn_GetDisplayPlaneCapabilities2KHR{};
    PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR pfn_GetPhysicalDeviceFragmentShadingRatesKHR{};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR{};
    PFN_vkCreateDebugReportCallbackEXT pfn_CreateDebugReportCallbackEXT{};
    PFN_vkDestroyDebugReportCallbackEXT pfn_DestroyDebugReportCallbackEXT{};
    PFN_vkDebugReportMessageEXT pfn_DebugReportMessageEXT{};
#ifdef VK_USE_PLATFORM_GGP
    PFN_vkCreateStreamDescriptorSurfaceGGP pfn_CreateStreamDescriptorSurfaceGGP{};
#endif  // VK_USE_PLATFORM_GGP
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV{};
#ifdef VK_USE_PLATFORM_VI_NN
    PFN_vkCreateViSurfaceNN pfn_CreateViSurfaceNN{};
#endif  // VK_USE_PLATFORM_VI_NN
    PFN_vkReleaseDisplayEXT pfn_ReleaseDisplayEXT{};
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkAcquireXlibDisplayEXT pfn_AcquireXlibDisplayEXT{};
    PFN_vkGetRandROutputDisplayEXT pfn_GetRandROutputDisplayEXT{};
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT pfn_GetPhysicalDeviceSurfaceCapabilities2EXT{};
#ifdef VK_USE_PLATFORM_IOS_MVK
    PFN_vkCreateIOSSurfaceMVK pfn_CreateIOSSurfaceMVK{};
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateMacOSSurfaceMVK pfn_CreateMacOSSurfaceMVK{};
#endif  // VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateDebugUtilsMessengerEXT pfn_CreateDebugUtilsMessengerEXT{};
    PFN_vkDestroyDebugUtilsMessengerEXT pfn_DestroyDebugUtilsMessengerEXT{};
    PFN_vkSubmitDebugUtilsMessageEXT pfn_SubmitDebugUtilsMessageEXT{};
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT pfn_GetPhysicalDeviceMultisamplePropertiesEXT{};
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT{};
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkCreateImagePipeSurfaceFUCHSIA pfn_CreateImagePipeSurfaceFUCHSIA{};
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkCreateMetalSurfaceEXT pfn_CreateMetalSurfaceEXT{};
#endif  // VK_USE_PLATFORM_METAL_EXT
    PFN_vkGetPhysicalDeviceToolPropertiesEXT pfn_GetPhysicalDeviceToolPropertiesEXT{};
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV{};
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT pfn_GetPhysicalDeviceSurfacePresentModes2EXT{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateHeadlessSurfaceEXT pfn_CreateHeadlessSurfaceEXT{};
    PFN_vkAcquireDrmDisplayEXT pfn_AcquireDrmDisplayEXT{};
    PFN_vkGetDrmDisplayEXT pfn_GetDrmDisplayEXT{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireWinrtDisplayNV pfn_AcquireWinrtDisplayNV{};
    PFN_vkGetWinrtDisplayNV pfn_GetWinrtDisplayNV{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkCreateDirectFBSurfaceEXT pfn_CreateDirectFBSurfaceEXT{};
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT{};
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkCreateScreenSurfaceQNX pfn_CreateScreenSurfaceQNX{};
    PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX pfn_GetPhysicalDeviceScreenPresentationSupportQNX{};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV{};
    void DestroyInstance(
        const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyInstance(instance, pAllocator);
    }
    VkResult EnumeratePhysicalDevices(
        uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) {
        return pfn_EnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
    }
    void GetPhysicalDeviceFeatures(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) {
        pfn_GetPhysicalDeviceFeatures(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceFormatProperties(
        VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties(
        VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
    }
    void GetPhysicalDeviceProperties(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties) {
        pfn_GetPhysicalDeviceProperties(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties(
        VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
    }
    PFN_vkVoidFunction GetInstanceProcAddr(
        const char* pName) {
        return pfn_GetInstanceProcAddr(instance, pName);
    }
    VkResult CreateDevice(
        VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) {
        return pfn_CreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
    }
    VkResult EnumerateDeviceExtensionProperties(
        VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) {
        return pfn_EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
    }
    VkResult EnumerateDeviceLayerProperties(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties) {
        return pfn_EnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties(
        VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
    }
    VkResult EnumeratePhysicalDeviceGroups(
        uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
        return pfn_EnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    }
    void GetPhysicalDeviceFeatures2(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) {
        pfn_GetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceProperties2(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) {
        pfn_GetPhysicalDeviceProperties2(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceFormatProperties2(
        VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties2(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties2(
        VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties2(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties2(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceExternalBufferProperties(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
        pfn_GetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    }
    void GetPhysicalDeviceExternalFenceProperties(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
        pfn_GetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    }
    void GetPhysicalDeviceExternalSemaphoreProperties(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
        pfn_GetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    }
    VkResult GetPhysicalDeviceToolProperties(
        VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
        return pfn_GetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
    }
    void DestroySurfaceKHR(
        VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySurfaceKHR(instance, surface, pAllocator);
    }
    VkResult GetPhysicalDeviceSurfaceSupportKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) {
        return pfn_GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
    }
    VkResult GetPhysicalDeviceSurfaceCapabilitiesKHR(
        VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
    }
    VkResult GetPhysicalDeviceSurfaceFormatsKHR(
        VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) {
        return pfn_GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    }
    VkResult GetPhysicalDeviceSurfacePresentModesKHR(
        VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
        return pfn_GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
    }
    VkResult GetPhysicalDevicePresentRectanglesKHR(
        VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) {
        return pfn_GetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
    }
    VkResult GetPhysicalDeviceDisplayPropertiesKHR(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceDisplayPlanePropertiesKHR(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetDisplayPlaneSupportedDisplaysKHR(
        VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) {
        return pfn_GetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
    }
    VkResult GetDisplayModePropertiesKHR(
        VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) {
        return pfn_GetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
    }
    VkResult CreateDisplayModeKHR(
        VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
        return pfn_CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    }
    VkResult GetDisplayPlaneCapabilitiesKHR(
        VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
        return pfn_GetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
    }
    VkResult CreateDisplayPlaneSurfaceKHR(
        const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VkResult CreateXlibSurfaceKHR(
        const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceXlibPresentationSupportKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) {
        return pfn_GetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
    }
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    VkResult CreateXcbSurfaceKHR(
        const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceXcbPresentationSupportKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) {
        return pfn_GetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
    }
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VkResult CreateWaylandSurfaceKHR(
        const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceWaylandPresentationSupportKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display) {
        return pfn_GetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
    }
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VkResult CreateAndroidSurfaceKHR(
        const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult CreateWin32SurfaceKHR(
        const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceWin32PresentationSupportKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) {
        return pfn_GetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceVideoCapabilitiesKHR(
        VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities) {
        return pfn_GetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
    }
    VkResult GetPhysicalDeviceVideoFormatPropertiesKHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
        return pfn_GetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
    }
    void GetPhysicalDeviceFeatures2KHR(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) {
        pfn_GetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceProperties2KHR(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) {
        pfn_GetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceFormatProperties2KHR(
        VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties2KHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties2KHR(
        VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties2KHR(
        VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties2KHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    }
    VkResult EnumeratePhysicalDeviceGroupsKHR(
        uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
        return pfn_EnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    }
    void GetPhysicalDeviceExternalBufferPropertiesKHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
        pfn_GetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    }
    void GetPhysicalDeviceExternalSemaphorePropertiesKHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
        pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    }
    void GetPhysicalDeviceExternalFencePropertiesKHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
        pfn_GetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    }
    VkResult EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
        return pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    }
    void GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
        VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
        pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    }
    VkResult GetPhysicalDeviceSurfaceCapabilities2KHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    }
    VkResult GetPhysicalDeviceSurfaceFormats2KHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
        return pfn_GetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    }
    VkResult GetPhysicalDeviceDisplayProperties2KHR(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceDisplayPlaneProperties2KHR(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetDisplayModeProperties2KHR(
        VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) {
        return pfn_GetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
    }
    VkResult GetDisplayPlaneCapabilities2KHR(
        VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) {
        return pfn_GetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
    }
    VkResult GetPhysicalDeviceFragmentShadingRatesKHR(
        VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
        return pfn_GetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VkResult GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties) {
        return pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesKHR(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult CreateDebugReportCallbackEXT(
        const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) {
        return pfn_CreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
    }
    void DestroyDebugReportCallbackEXT(
        VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDebugReportCallbackEXT(instance, callback, pAllocator);
    }
    void DebugReportMessageEXT(
        VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) {
        pfn_DebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
    }
#ifdef VK_USE_PLATFORM_GGP
    VkResult CreateStreamDescriptorSurfaceGGP(
        const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_GGP
    VkResult GetPhysicalDeviceExternalImageFormatPropertiesNV(
        VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
        return pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    }
#ifdef VK_USE_PLATFORM_VI_NN
    VkResult CreateViSurfaceNN(
        const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_VI_NN
    VkResult ReleaseDisplayEXT(
        VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
        return pfn_ReleaseDisplayEXT(physicalDevice, display);
    }
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult AcquireXlibDisplayEXT(
        VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display) {
        return pfn_AcquireXlibDisplayEXT(physicalDevice, dpy, display);
    }
    VkResult GetRandROutputDisplayEXT(
        VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) {
        return pfn_GetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
    }
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult GetPhysicalDeviceSurfaceCapabilities2EXT(
        VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
    }
#ifdef VK_USE_PLATFORM_IOS_MVK
    VkResult CreateIOSSurfaceMVK(
        const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    VkResult CreateMacOSSurfaceMVK(
        const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_MACOS_MVK
    VkResult CreateDebugUtilsMessengerEXT(
        const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) {
        return pfn_CreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
    }
    void DestroyDebugUtilsMessengerEXT(
        VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
    }
    void SubmitDebugUtilsMessageEXT(
        VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
        pfn_SubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
    }
    void GetPhysicalDeviceMultisamplePropertiesEXT(
        VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) {
        pfn_GetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
    }
    VkResult GetPhysicalDeviceCalibrateableTimeDomainsEXT(
        VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) {
        return pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
    }
#ifdef VK_USE_PLATFORM_FUCHSIA
    VkResult CreateImagePipeSurfaceFUCHSIA(
        const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    VkResult CreateMetalSurfaceEXT(
        const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    }
#endif  // VK_USE_PLATFORM_METAL_EXT
    VkResult GetPhysicalDeviceToolPropertiesEXT(
        VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
        return pfn_GetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
    }
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesNV(
        VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) {
        return pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
        VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
        return pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceSurfacePresentModes2EXT(
        VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
        return pfn_GetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult CreateHeadlessSurfaceEXT(
        const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkResult AcquireDrmDisplayEXT(
        VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display) {
        return pfn_AcquireDrmDisplayEXT(physicalDevice, drmFd, display);
    }
    VkResult GetDrmDisplayEXT(
        VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display) {
        return pfn_GetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireWinrtDisplayNV(
        VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
        return pfn_AcquireWinrtDisplayNV(physicalDevice, display);
    }
    VkResult GetWinrtDisplayNV(
        VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) {
        return pfn_GetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    VkResult CreateDirectFBSurfaceEXT(
        const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceDirectFBPresentationSupportEXT(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb) {
        return pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
    }
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VkResult CreateScreenSurfaceQNX(
        const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
        return pfn_CreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
    }
    VkBool32 GetPhysicalDeviceScreenPresentationSupportQNX(
        VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window) {
        return pfn_GetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
    }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VkResult GetPhysicalDeviceOpticalFlowImageFormatsNV(
        VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount, VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV(physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
    }
    VkResult init(PFN_vkGetInstanceProcAddr gpa, VkInstance in_instance) {
        this->instance = in_instance;
        pfn_DestroyInstance = (PFN_vkDestroyInstance)gpa(in_instance, "vkDestroyInstance");
        pfn_EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)gpa(in_instance, "vkEnumeratePhysicalDevices");
        pfn_GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)gpa(in_instance, "vkGetPhysicalDeviceFeatures");
        pfn_GetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties");
        pfn_GetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties");
        pfn_GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)gpa(in_instance, "vkGetPhysicalDeviceProperties");
        pfn_GetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties");
        pfn_GetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties");
        pfn_GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)gpa(in_instance, "vkGetInstanceProcAddr");
        pfn_GetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)gpa(in_instance, "vkGetDeviceProcAddr");
        pfn_CreateDevice = (PFN_vkCreateDevice)gpa(in_instance, "vkCreateDevice");
        pfn_EnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)gpa(in_instance, "vkEnumerateDeviceExtensionProperties");
        pfn_EnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)gpa(in_instance, "vkEnumerateDeviceLayerProperties");
        pfn_GetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
        pfn_EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)gpa(in_instance, "vkEnumeratePhysicalDeviceGroups");
        pfn_GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)gpa(in_instance, "vkGetPhysicalDeviceFeatures2");
        pfn_GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)gpa(in_instance, "vkGetPhysicalDeviceProperties2");
        pfn_GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties2");
        pfn_GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties2");
        pfn_GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
        pfn_GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties2");
        pfn_GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
        pfn_GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalBufferProperties");
        pfn_GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalFenceProperties");
        pfn_GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
        pfn_GetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)gpa(in_instance, "vkGetPhysicalDeviceToolProperties");
        pfn_DestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)gpa(in_instance, "vkDestroySurfaceKHR");
        pfn_GetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
        pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
        pfn_GetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
        pfn_GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
        pfn_GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)gpa(in_instance, "vkGetPhysicalDevicePresentRectanglesKHR");
        pfn_GetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
        pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
        pfn_GetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)gpa(in_instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
        pfn_GetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)gpa(in_instance, "vkGetDisplayModePropertiesKHR");
        pfn_CreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)gpa(in_instance, "vkCreateDisplayModeKHR");
        pfn_GetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)gpa(in_instance, "vkGetDisplayPlaneCapabilitiesKHR");
        pfn_CreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)gpa(in_instance, "vkCreateDisplayPlaneSurfaceKHR");
#ifdef VK_USE_PLATFORM_XLIB_KHR
        pfn_CreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)gpa(in_instance, "vkCreateXlibSurfaceKHR");
        pfn_GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
        pfn_CreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)gpa(in_instance, "vkCreateXcbSurfaceKHR");
        pfn_GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        pfn_CreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)gpa(in_instance, "vkCreateWaylandSurfaceKHR");
        pfn_GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        pfn_CreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)gpa(in_instance, "vkCreateAndroidSurfaceKHR");
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_CreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)gpa(in_instance, "vkCreateWin32SurfaceKHR");
        pfn_GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_GetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
        pfn_GetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
        pfn_GetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)gpa(in_instance, "vkGetPhysicalDeviceFeatures2KHR");
        pfn_GetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceProperties2KHR");
        pfn_GetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties2KHR");
        pfn_GetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
        pfn_GetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
        pfn_GetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
        pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
        pfn_EnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)gpa(in_instance, "vkEnumeratePhysicalDeviceGroupsKHR");
        pfn_GetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
        pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
        pfn_GetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
        pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)gpa(in_instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
        pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
        pfn_GetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
        pfn_GetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
        pfn_GetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
        pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
        pfn_GetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)gpa(in_instance, "vkGetDisplayModeProperties2KHR");
        pfn_GetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)gpa(in_instance, "vkGetDisplayPlaneCapabilities2KHR");
        pfn_GetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)gpa(in_instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
        pfn_CreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)gpa(in_instance, "vkCreateDebugReportCallbackEXT");
        pfn_DestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)gpa(in_instance, "vkDestroyDebugReportCallbackEXT");
        pfn_DebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)gpa(in_instance, "vkDebugReportMessageEXT");
#ifdef VK_USE_PLATFORM_GGP
        pfn_CreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)gpa(in_instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif  // VK_USE_PLATFORM_GGP
        pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)gpa(in_instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#ifdef VK_USE_PLATFORM_VI_NN
        pfn_CreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)gpa(in_instance, "vkCreateViSurfaceNN");
#endif  // VK_USE_PLATFORM_VI_NN
        pfn_ReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)gpa(in_instance, "vkReleaseDisplayEXT");
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
        pfn_AcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)gpa(in_instance, "vkAcquireXlibDisplayEXT");
        pfn_GetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)gpa(in_instance, "vkGetRandROutputDisplayEXT");
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
        pfn_GetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#ifdef VK_USE_PLATFORM_IOS_MVK
        pfn_CreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)gpa(in_instance, "vkCreateIOSSurfaceMVK");
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
        pfn_CreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)gpa(in_instance, "vkCreateMacOSSurfaceMVK");
#endif  // VK_USE_PLATFORM_MACOS_MVK
        pfn_CreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)gpa(in_instance, "vkCreateDebugUtilsMessengerEXT");
        pfn_DestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)gpa(in_instance, "vkDestroyDebugUtilsMessengerEXT");
        pfn_SubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)gpa(in_instance, "vkSubmitDebugUtilsMessageEXT");
        pfn_GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)gpa(in_instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
        pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)gpa(in_instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
#ifdef VK_USE_PLATFORM_FUCHSIA
        pfn_CreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)gpa(in_instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
        pfn_CreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)gpa(in_instance, "vkCreateMetalSurfaceEXT");
#endif  // VK_USE_PLATFORM_METAL_EXT
        pfn_GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)gpa(in_instance, "vkGetPhysicalDeviceToolPropertiesEXT");
        pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)gpa(in_instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
        pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)gpa(in_instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)gpa(in_instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_CreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)gpa(in_instance, "vkCreateHeadlessSurfaceEXT");
        pfn_AcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)gpa(in_instance, "vkAcquireDrmDisplayEXT");
        pfn_GetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)gpa(in_instance, "vkGetDrmDisplayEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_AcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)gpa(in_instance, "vkAcquireWinrtDisplayNV");
        pfn_GetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)gpa(in_instance, "vkGetWinrtDisplayNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        pfn_CreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)gpa(in_instance, "vkCreateDirectFBSurfaceEXT");
        pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)gpa(in_instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        pfn_CreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)gpa(in_instance, "vkCreateScreenSurfaceQNX");
        pfn_GetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)gpa(in_instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)gpa(in_instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
        return VK_SUCCESS;
    }
};
struct VkuPhysicalDeviceFunctionTable {
    VkPhysicalDevice physicalDevice;
    PFN_vkGetPhysicalDeviceFeatures pfn_GetPhysicalDeviceFeatures{};
    PFN_vkGetPhysicalDeviceFormatProperties pfn_GetPhysicalDeviceFormatProperties{};
    PFN_vkGetPhysicalDeviceImageFormatProperties pfn_GetPhysicalDeviceImageFormatProperties{};
    PFN_vkGetPhysicalDeviceProperties pfn_GetPhysicalDeviceProperties{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties pfn_GetPhysicalDeviceQueueFamilyProperties{};
    PFN_vkGetPhysicalDeviceMemoryProperties pfn_GetPhysicalDeviceMemoryProperties{};
    PFN_vkCreateDevice pfn_CreateDevice{};
    PFN_vkEnumerateDeviceExtensionProperties pfn_EnumerateDeviceExtensionProperties{};
    PFN_vkEnumerateDeviceLayerProperties pfn_EnumerateDeviceLayerProperties{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties pfn_GetPhysicalDeviceSparseImageFormatProperties{};
    PFN_vkGetPhysicalDeviceFeatures2 pfn_GetPhysicalDeviceFeatures2{};
    PFN_vkGetPhysicalDeviceProperties2 pfn_GetPhysicalDeviceProperties2{};
    PFN_vkGetPhysicalDeviceFormatProperties2 pfn_GetPhysicalDeviceFormatProperties2{};
    PFN_vkGetPhysicalDeviceImageFormatProperties2 pfn_GetPhysicalDeviceImageFormatProperties2{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2 pfn_GetPhysicalDeviceQueueFamilyProperties2{};
    PFN_vkGetPhysicalDeviceMemoryProperties2 pfn_GetPhysicalDeviceMemoryProperties2{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 pfn_GetPhysicalDeviceSparseImageFormatProperties2{};
    PFN_vkGetPhysicalDeviceExternalBufferProperties pfn_GetPhysicalDeviceExternalBufferProperties{};
    PFN_vkGetPhysicalDeviceExternalFenceProperties pfn_GetPhysicalDeviceExternalFenceProperties{};
    PFN_vkGetPhysicalDeviceExternalSemaphoreProperties pfn_GetPhysicalDeviceExternalSemaphoreProperties{};
    PFN_vkGetPhysicalDeviceToolProperties pfn_GetPhysicalDeviceToolProperties{};
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR pfn_GetPhysicalDeviceSurfaceSupportKHR{};
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR{};
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR pfn_GetPhysicalDeviceSurfaceFormatsKHR{};
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR pfn_GetPhysicalDeviceSurfacePresentModesKHR{};
    PFN_vkGetPhysicalDevicePresentRectanglesKHR pfn_GetPhysicalDevicePresentRectanglesKHR{};
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR pfn_GetPhysicalDeviceDisplayPropertiesKHR{};
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR{};
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR pfn_GetDisplayPlaneSupportedDisplaysKHR{};
    PFN_vkGetDisplayModePropertiesKHR pfn_GetDisplayModePropertiesKHR{};
    PFN_vkCreateDisplayModeKHR pfn_CreateDisplayModeKHR{};
    PFN_vkGetDisplayPlaneCapabilitiesKHR pfn_GetDisplayPlaneCapabilitiesKHR{};
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR pfn_GetPhysicalDeviceXlibPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR pfn_GetPhysicalDeviceXcbPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR pfn_GetPhysicalDeviceWaylandPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR pfn_GetPhysicalDeviceWin32PresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR pfn_GetPhysicalDeviceVideoCapabilitiesKHR{};
    PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR pfn_GetPhysicalDeviceVideoFormatPropertiesKHR{};
    PFN_vkGetPhysicalDeviceFeatures2KHR pfn_GetPhysicalDeviceFeatures2KHR{};
    PFN_vkGetPhysicalDeviceProperties2KHR pfn_GetPhysicalDeviceProperties2KHR{};
    PFN_vkGetPhysicalDeviceFormatProperties2KHR pfn_GetPhysicalDeviceFormatProperties2KHR{};
    PFN_vkGetPhysicalDeviceImageFormatProperties2KHR pfn_GetPhysicalDeviceImageFormatProperties2KHR{};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR pfn_GetPhysicalDeviceQueueFamilyProperties2KHR{};
    PFN_vkGetPhysicalDeviceMemoryProperties2KHR pfn_GetPhysicalDeviceMemoryProperties2KHR{};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR{};
    PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR pfn_GetPhysicalDeviceExternalBufferPropertiesKHR{};
    PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR{};
    PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR pfn_GetPhysicalDeviceExternalFencePropertiesKHR{};
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR{};
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR{};
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR pfn_GetPhysicalDeviceSurfaceCapabilities2KHR{};
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR pfn_GetPhysicalDeviceSurfaceFormats2KHR{};
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR pfn_GetPhysicalDeviceDisplayProperties2KHR{};
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR{};
    PFN_vkGetDisplayModeProperties2KHR pfn_GetDisplayModeProperties2KHR{};
    PFN_vkGetDisplayPlaneCapabilities2KHR pfn_GetDisplayPlaneCapabilities2KHR{};
    PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR pfn_GetPhysicalDeviceFragmentShadingRatesKHR{};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR{};
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV{};
    PFN_vkReleaseDisplayEXT pfn_ReleaseDisplayEXT{};
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkAcquireXlibDisplayEXT pfn_AcquireXlibDisplayEXT{};
    PFN_vkGetRandROutputDisplayEXT pfn_GetRandROutputDisplayEXT{};
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT pfn_GetPhysicalDeviceSurfaceCapabilities2EXT{};
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT pfn_GetPhysicalDeviceMultisamplePropertiesEXT{};
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT{};
    PFN_vkGetPhysicalDeviceToolPropertiesEXT pfn_GetPhysicalDeviceToolPropertiesEXT{};
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV{};
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT pfn_GetPhysicalDeviceSurfacePresentModes2EXT{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireDrmDisplayEXT pfn_AcquireDrmDisplayEXT{};
    PFN_vkGetDrmDisplayEXT pfn_GetDrmDisplayEXT{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireWinrtDisplayNV pfn_AcquireWinrtDisplayNV{};
    PFN_vkGetWinrtDisplayNV pfn_GetWinrtDisplayNV{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT{};
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX pfn_GetPhysicalDeviceScreenPresentationSupportQNX{};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV{};
    void GetPhysicalDeviceFeatures(
        VkPhysicalDeviceFeatures* pFeatures) {
        pfn_GetPhysicalDeviceFeatures(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceFormatProperties(
        VkFormat format, VkFormatProperties* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties(
        VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
    }
    void GetPhysicalDeviceProperties(
        VkPhysicalDeviceProperties* pProperties) {
        pfn_GetPhysicalDeviceProperties(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties(
        uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties(
        VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
    }
    VkResult CreateDevice(
        const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) {
        return pfn_CreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
    }
    VkResult EnumerateDeviceExtensionProperties(
        const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) {
        return pfn_EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
    }
    VkResult EnumerateDeviceLayerProperties(
        uint32_t* pPropertyCount, VkLayerProperties* pProperties) {
        return pfn_EnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties(
        VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceFeatures2(
        VkPhysicalDeviceFeatures2* pFeatures) {
        pfn_GetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceProperties2(
        VkPhysicalDeviceProperties2* pProperties) {
        pfn_GetPhysicalDeviceProperties2(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceFormatProperties2(
        VkFormat format, VkFormatProperties2* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties2(
        const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties2(
        uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties2(
        VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties2(
        const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceExternalBufferProperties(
        const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
        pfn_GetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    }
    void GetPhysicalDeviceExternalFenceProperties(
        const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
        pfn_GetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    }
    void GetPhysicalDeviceExternalSemaphoreProperties(
        const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
        pfn_GetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    }
    VkResult GetPhysicalDeviceToolProperties(
        uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
        return pfn_GetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
    }
    VkResult GetPhysicalDeviceSurfaceSupportKHR(
        uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) {
        return pfn_GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
    }
    VkResult GetPhysicalDeviceSurfaceCapabilitiesKHR(
        VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
    }
    VkResult GetPhysicalDeviceSurfaceFormatsKHR(
        VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) {
        return pfn_GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    }
    VkResult GetPhysicalDeviceSurfacePresentModesKHR(
        VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
        return pfn_GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
    }
    VkResult GetPhysicalDevicePresentRectanglesKHR(
        VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) {
        return pfn_GetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
    }
    VkResult GetPhysicalDeviceDisplayPropertiesKHR(
        uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceDisplayPlanePropertiesKHR(
        uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetDisplayPlaneSupportedDisplaysKHR(
        uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) {
        return pfn_GetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
    }
    VkResult GetDisplayModePropertiesKHR(
        VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) {
        return pfn_GetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
    }
    VkResult CreateDisplayModeKHR(
        VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
        return pfn_CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    }
    VkResult GetDisplayPlaneCapabilitiesKHR(
        VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
        return pfn_GetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
    }
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VkBool32 GetPhysicalDeviceXlibPresentationSupportKHR(
        uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) {
        return pfn_GetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
    }
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    VkBool32 GetPhysicalDeviceXcbPresentationSupportKHR(
        uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) {
        return pfn_GetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
    }
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VkBool32 GetPhysicalDeviceWaylandPresentationSupportKHR(
        uint32_t queueFamilyIndex, struct wl_display* display) {
        return pfn_GetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
    }
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkBool32 GetPhysicalDeviceWin32PresentationSupportKHR(
        uint32_t queueFamilyIndex) {
        return pfn_GetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceVideoCapabilitiesKHR(
        const VkVideoProfileInfoKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities) {
        return pfn_GetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
    }
    VkResult GetPhysicalDeviceVideoFormatPropertiesKHR(
        const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
        return pfn_GetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
    }
    void GetPhysicalDeviceFeatures2KHR(
        VkPhysicalDeviceFeatures2* pFeatures) {
        pfn_GetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
    }
    void GetPhysicalDeviceProperties2KHR(
        VkPhysicalDeviceProperties2* pProperties) {
        pfn_GetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
    }
    void GetPhysicalDeviceFormatProperties2KHR(
        VkFormat format, VkFormatProperties2* pFormatProperties) {
        pfn_GetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
    }
    VkResult GetPhysicalDeviceImageFormatProperties2KHR(
        const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    }
    void GetPhysicalDeviceQueueFamilyProperties2KHR(
        uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
        pfn_GetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    }
    void GetPhysicalDeviceMemoryProperties2KHR(
        VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
        pfn_GetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
    }
    void GetPhysicalDeviceSparseImageFormatProperties2KHR(
        const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
        pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    }
    void GetPhysicalDeviceExternalBufferPropertiesKHR(
        const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
        pfn_GetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    }
    void GetPhysicalDeviceExternalSemaphorePropertiesKHR(
        const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
        pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    }
    void GetPhysicalDeviceExternalFencePropertiesKHR(
        const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
        pfn_GetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    }
    VkResult EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
        uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
        return pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    }
    void GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
        const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
        pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    }
    VkResult GetPhysicalDeviceSurfaceCapabilities2KHR(
        const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    }
    VkResult GetPhysicalDeviceSurfaceFormats2KHR(
        const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
        return pfn_GetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    }
    VkResult GetPhysicalDeviceDisplayProperties2KHR(
        uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceDisplayPlaneProperties2KHR(
        uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) {
        return pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetDisplayModeProperties2KHR(
        VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) {
        return pfn_GetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
    }
    VkResult GetDisplayPlaneCapabilities2KHR(
        const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) {
        return pfn_GetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
    }
    VkResult GetPhysicalDeviceFragmentShadingRatesKHR(
        uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
        return pfn_GetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VkResult GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
        const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties) {
        return pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesKHR(
        uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR* pProperties) {
        return pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceExternalImageFormatPropertiesNV(
        VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
        return pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    }
    VkResult ReleaseDisplayEXT(
        VkDisplayKHR display) {
        return pfn_ReleaseDisplayEXT(physicalDevice, display);
    }
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult AcquireXlibDisplayEXT(
        Display* dpy, VkDisplayKHR display) {
        return pfn_AcquireXlibDisplayEXT(physicalDevice, dpy, display);
    }
    VkResult GetRandROutputDisplayEXT(
        Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) {
        return pfn_GetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
    }
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult GetPhysicalDeviceSurfaceCapabilities2EXT(
        VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
        return pfn_GetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
    }
    void GetPhysicalDeviceMultisamplePropertiesEXT(
        VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) {
        pfn_GetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
    }
    VkResult GetPhysicalDeviceCalibrateableTimeDomainsEXT(
        uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) {
        return pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
    }
    VkResult GetPhysicalDeviceToolPropertiesEXT(
        uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
        return pfn_GetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
    }
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesNV(
        uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) {
        return pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
    }
    VkResult GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
        uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
        return pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceSurfacePresentModes2EXT(
        const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
        return pfn_GetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireDrmDisplayEXT(
        int32_t drmFd, VkDisplayKHR display) {
        return pfn_AcquireDrmDisplayEXT(physicalDevice, drmFd, display);
    }
    VkResult GetDrmDisplayEXT(
        int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display) {
        return pfn_GetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireWinrtDisplayNV(
        VkDisplayKHR display) {
        return pfn_AcquireWinrtDisplayNV(physicalDevice, display);
    }
    VkResult GetWinrtDisplayNV(
        uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) {
        return pfn_GetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    VkBool32 GetPhysicalDeviceDirectFBPresentationSupportEXT(
        uint32_t queueFamilyIndex, IDirectFB* dfb) {
        return pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
    }
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VkBool32 GetPhysicalDeviceScreenPresentationSupportQNX(
        uint32_t queueFamilyIndex, struct _screen_window* window) {
        return pfn_GetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
    }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VkResult GetPhysicalDeviceOpticalFlowImageFormatsNV(
        const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount, VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties) {
        return pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV(physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
    }
    VkResult init(PFN_vkGetInstanceProcAddr gpa, VkInstance in_instance, VkPhysicalDevice in_physicalDevice) {
        this->physicalDevice = in_physicalDevice;
        pfn_GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)gpa(in_instance, "vkGetPhysicalDeviceFeatures");
        pfn_GetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties");
        pfn_GetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties");
        pfn_GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)gpa(in_instance, "vkGetPhysicalDeviceProperties");
        pfn_GetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties");
        pfn_GetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties");
        pfn_CreateDevice = (PFN_vkCreateDevice)gpa(in_instance, "vkCreateDevice");
        pfn_EnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)gpa(in_instance, "vkEnumerateDeviceExtensionProperties");
        pfn_EnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)gpa(in_instance, "vkEnumerateDeviceLayerProperties");
        pfn_GetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
        pfn_GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)gpa(in_instance, "vkGetPhysicalDeviceFeatures2");
        pfn_GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)gpa(in_instance, "vkGetPhysicalDeviceProperties2");
        pfn_GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties2");
        pfn_GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties2");
        pfn_GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
        pfn_GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties2");
        pfn_GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
        pfn_GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalBufferProperties");
        pfn_GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalFenceProperties");
        pfn_GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)gpa(in_instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
        pfn_GetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)gpa(in_instance, "vkGetPhysicalDeviceToolProperties");
        pfn_GetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
        pfn_GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
        pfn_GetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
        pfn_GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)gpa(in_instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
        pfn_GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)gpa(in_instance, "vkGetPhysicalDevicePresentRectanglesKHR");
        pfn_GetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
        pfn_GetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
        pfn_GetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)gpa(in_instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
        pfn_GetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)gpa(in_instance, "vkGetDisplayModePropertiesKHR");
        pfn_CreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)gpa(in_instance, "vkCreateDisplayModeKHR");
        pfn_GetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)gpa(in_instance, "vkGetDisplayPlaneCapabilitiesKHR");
#ifdef VK_USE_PLATFORM_XLIB_KHR
        pfn_GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
        pfn_GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        pfn_GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)gpa(in_instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_GetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
        pfn_GetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
        pfn_GetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)gpa(in_instance, "vkGetPhysicalDeviceFeatures2KHR");
        pfn_GetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceProperties2KHR");
        pfn_GetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceFormatProperties2KHR");
        pfn_GetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
        pfn_GetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
        pfn_GetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
        pfn_GetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
        pfn_GetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
        pfn_GetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
        pfn_GetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
        pfn_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)gpa(in_instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
        pfn_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)gpa(in_instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
        pfn_GetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
        pfn_GetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)gpa(in_instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
        pfn_GetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
        pfn_GetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)gpa(in_instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
        pfn_GetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)gpa(in_instance, "vkGetDisplayModeProperties2KHR");
        pfn_GetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)gpa(in_instance, "vkGetDisplayPlaneCapabilities2KHR");
        pfn_GetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)gpa(in_instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_GetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)gpa(in_instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
        pfn_GetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)gpa(in_instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
        pfn_ReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)gpa(in_instance, "vkReleaseDisplayEXT");
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
        pfn_AcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)gpa(in_instance, "vkAcquireXlibDisplayEXT");
        pfn_GetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)gpa(in_instance, "vkGetRandROutputDisplayEXT");
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
        pfn_GetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)gpa(in_instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
        pfn_GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)gpa(in_instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
        pfn_GetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)gpa(in_instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
        pfn_GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)gpa(in_instance, "vkGetPhysicalDeviceToolPropertiesEXT");
        pfn_GetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)gpa(in_instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
        pfn_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)gpa(in_instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)gpa(in_instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_AcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)gpa(in_instance, "vkAcquireDrmDisplayEXT");
        pfn_GetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)gpa(in_instance, "vkGetDrmDisplayEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_AcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)gpa(in_instance, "vkAcquireWinrtDisplayNV");
        pfn_GetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)gpa(in_instance, "vkGetWinrtDisplayNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        pfn_GetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)gpa(in_instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        pfn_GetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)gpa(in_instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        pfn_GetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)gpa(in_instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
        return VK_SUCCESS;
    }
};
struct VkuDeviceFunctionTable {
    VkDevice device;
    PFN_vkGetDeviceProcAddr pfn_GetDeviceProcAddr{};
    PFN_vkDestroyDevice pfn_DestroyDevice{};
    PFN_vkGetDeviceQueue pfn_GetDeviceQueue{};
    PFN_vkQueueSubmit pfn_QueueSubmit{};
    PFN_vkQueueWaitIdle pfn_QueueWaitIdle{};
    PFN_vkDeviceWaitIdle pfn_DeviceWaitIdle{};
    PFN_vkAllocateMemory pfn_AllocateMemory{};
    PFN_vkFreeMemory pfn_FreeMemory{};
    PFN_vkMapMemory pfn_MapMemory{};
    PFN_vkUnmapMemory pfn_UnmapMemory{};
    PFN_vkFlushMappedMemoryRanges pfn_FlushMappedMemoryRanges{};
    PFN_vkInvalidateMappedMemoryRanges pfn_InvalidateMappedMemoryRanges{};
    PFN_vkGetDeviceMemoryCommitment pfn_GetDeviceMemoryCommitment{};
    PFN_vkBindBufferMemory pfn_BindBufferMemory{};
    PFN_vkBindImageMemory pfn_BindImageMemory{};
    PFN_vkGetBufferMemoryRequirements pfn_GetBufferMemoryRequirements{};
    PFN_vkGetImageMemoryRequirements pfn_GetImageMemoryRequirements{};
    PFN_vkGetImageSparseMemoryRequirements pfn_GetImageSparseMemoryRequirements{};
    PFN_vkQueueBindSparse pfn_QueueBindSparse{};
    PFN_vkCreateFence pfn_CreateFence{};
    PFN_vkDestroyFence pfn_DestroyFence{};
    PFN_vkResetFences pfn_ResetFences{};
    PFN_vkGetFenceStatus pfn_GetFenceStatus{};
    PFN_vkWaitForFences pfn_WaitForFences{};
    PFN_vkCreateSemaphore pfn_CreateSemaphore{};
    PFN_vkDestroySemaphore pfn_DestroySemaphore{};
    PFN_vkCreateEvent pfn_CreateEvent{};
    PFN_vkDestroyEvent pfn_DestroyEvent{};
    PFN_vkGetEventStatus pfn_GetEventStatus{};
    PFN_vkSetEvent pfn_SetEvent{};
    PFN_vkResetEvent pfn_ResetEvent{};
    PFN_vkCreateQueryPool pfn_CreateQueryPool{};
    PFN_vkDestroyQueryPool pfn_DestroyQueryPool{};
    PFN_vkGetQueryPoolResults pfn_GetQueryPoolResults{};
    PFN_vkCreateBuffer pfn_CreateBuffer{};
    PFN_vkDestroyBuffer pfn_DestroyBuffer{};
    PFN_vkCreateBufferView pfn_CreateBufferView{};
    PFN_vkDestroyBufferView pfn_DestroyBufferView{};
    PFN_vkCreateImage pfn_CreateImage{};
    PFN_vkDestroyImage pfn_DestroyImage{};
    PFN_vkGetImageSubresourceLayout pfn_GetImageSubresourceLayout{};
    PFN_vkCreateImageView pfn_CreateImageView{};
    PFN_vkDestroyImageView pfn_DestroyImageView{};
    PFN_vkCreateShaderModule pfn_CreateShaderModule{};
    PFN_vkDestroyShaderModule pfn_DestroyShaderModule{};
    PFN_vkCreatePipelineCache pfn_CreatePipelineCache{};
    PFN_vkDestroyPipelineCache pfn_DestroyPipelineCache{};
    PFN_vkGetPipelineCacheData pfn_GetPipelineCacheData{};
    PFN_vkMergePipelineCaches pfn_MergePipelineCaches{};
    PFN_vkCreateGraphicsPipelines pfn_CreateGraphicsPipelines{};
    PFN_vkCreateComputePipelines pfn_CreateComputePipelines{};
    PFN_vkDestroyPipeline pfn_DestroyPipeline{};
    PFN_vkCreatePipelineLayout pfn_CreatePipelineLayout{};
    PFN_vkDestroyPipelineLayout pfn_DestroyPipelineLayout{};
    PFN_vkCreateSampler pfn_CreateSampler{};
    PFN_vkDestroySampler pfn_DestroySampler{};
    PFN_vkCreateDescriptorSetLayout pfn_CreateDescriptorSetLayout{};
    PFN_vkDestroyDescriptorSetLayout pfn_DestroyDescriptorSetLayout{};
    PFN_vkCreateDescriptorPool pfn_CreateDescriptorPool{};
    PFN_vkDestroyDescriptorPool pfn_DestroyDescriptorPool{};
    PFN_vkResetDescriptorPool pfn_ResetDescriptorPool{};
    PFN_vkAllocateDescriptorSets pfn_AllocateDescriptorSets{};
    PFN_vkFreeDescriptorSets pfn_FreeDescriptorSets{};
    PFN_vkUpdateDescriptorSets pfn_UpdateDescriptorSets{};
    PFN_vkCreateFramebuffer pfn_CreateFramebuffer{};
    PFN_vkDestroyFramebuffer pfn_DestroyFramebuffer{};
    PFN_vkCreateRenderPass pfn_CreateRenderPass{};
    PFN_vkDestroyRenderPass pfn_DestroyRenderPass{};
    PFN_vkGetRenderAreaGranularity pfn_GetRenderAreaGranularity{};
    PFN_vkCreateCommandPool pfn_CreateCommandPool{};
    PFN_vkDestroyCommandPool pfn_DestroyCommandPool{};
    PFN_vkResetCommandPool pfn_ResetCommandPool{};
    PFN_vkAllocateCommandBuffers pfn_AllocateCommandBuffers{};
    PFN_vkFreeCommandBuffers pfn_FreeCommandBuffers{};
    PFN_vkBeginCommandBuffer pfn_BeginCommandBuffer{};
    PFN_vkEndCommandBuffer pfn_EndCommandBuffer{};
    PFN_vkResetCommandBuffer pfn_ResetCommandBuffer{};
    PFN_vkCmdBindPipeline pfn_CmdBindPipeline{};
    PFN_vkCmdSetViewport pfn_CmdSetViewport{};
    PFN_vkCmdSetScissor pfn_CmdSetScissor{};
    PFN_vkCmdSetLineWidth pfn_CmdSetLineWidth{};
    PFN_vkCmdSetDepthBias pfn_CmdSetDepthBias{};
    PFN_vkCmdSetBlendConstants pfn_CmdSetBlendConstants{};
    PFN_vkCmdSetDepthBounds pfn_CmdSetDepthBounds{};
    PFN_vkCmdSetStencilCompareMask pfn_CmdSetStencilCompareMask{};
    PFN_vkCmdSetStencilWriteMask pfn_CmdSetStencilWriteMask{};
    PFN_vkCmdSetStencilReference pfn_CmdSetStencilReference{};
    PFN_vkCmdBindDescriptorSets pfn_CmdBindDescriptorSets{};
    PFN_vkCmdBindIndexBuffer pfn_CmdBindIndexBuffer{};
    PFN_vkCmdBindVertexBuffers pfn_CmdBindVertexBuffers{};
    PFN_vkCmdDraw pfn_CmdDraw{};
    PFN_vkCmdDrawIndexed pfn_CmdDrawIndexed{};
    PFN_vkCmdDrawIndirect pfn_CmdDrawIndirect{};
    PFN_vkCmdDrawIndexedIndirect pfn_CmdDrawIndexedIndirect{};
    PFN_vkCmdDispatch pfn_CmdDispatch{};
    PFN_vkCmdDispatchIndirect pfn_CmdDispatchIndirect{};
    PFN_vkCmdCopyBuffer pfn_CmdCopyBuffer{};
    PFN_vkCmdCopyImage pfn_CmdCopyImage{};
    PFN_vkCmdBlitImage pfn_CmdBlitImage{};
    PFN_vkCmdCopyBufferToImage pfn_CmdCopyBufferToImage{};
    PFN_vkCmdCopyImageToBuffer pfn_CmdCopyImageToBuffer{};
    PFN_vkCmdUpdateBuffer pfn_CmdUpdateBuffer{};
    PFN_vkCmdFillBuffer pfn_CmdFillBuffer{};
    PFN_vkCmdClearColorImage pfn_CmdClearColorImage{};
    PFN_vkCmdClearDepthStencilImage pfn_CmdClearDepthStencilImage{};
    PFN_vkCmdClearAttachments pfn_CmdClearAttachments{};
    PFN_vkCmdResolveImage pfn_CmdResolveImage{};
    PFN_vkCmdSetEvent pfn_CmdSetEvent{};
    PFN_vkCmdResetEvent pfn_CmdResetEvent{};
    PFN_vkCmdWaitEvents pfn_CmdWaitEvents{};
    PFN_vkCmdPipelineBarrier pfn_CmdPipelineBarrier{};
    PFN_vkCmdBeginQuery pfn_CmdBeginQuery{};
    PFN_vkCmdEndQuery pfn_CmdEndQuery{};
    PFN_vkCmdResetQueryPool pfn_CmdResetQueryPool{};
    PFN_vkCmdWriteTimestamp pfn_CmdWriteTimestamp{};
    PFN_vkCmdCopyQueryPoolResults pfn_CmdCopyQueryPoolResults{};
    PFN_vkCmdPushConstants pfn_CmdPushConstants{};
    PFN_vkCmdBeginRenderPass pfn_CmdBeginRenderPass{};
    PFN_vkCmdNextSubpass pfn_CmdNextSubpass{};
    PFN_vkCmdEndRenderPass pfn_CmdEndRenderPass{};
    PFN_vkCmdExecuteCommands pfn_CmdExecuteCommands{};
    PFN_vkBindBufferMemory2 pfn_BindBufferMemory2{};
    PFN_vkBindImageMemory2 pfn_BindImageMemory2{};
    PFN_vkGetDeviceGroupPeerMemoryFeatures pfn_GetDeviceGroupPeerMemoryFeatures{};
    PFN_vkCmdSetDeviceMask pfn_CmdSetDeviceMask{};
    PFN_vkCmdDispatchBase pfn_CmdDispatchBase{};
    PFN_vkGetImageMemoryRequirements2 pfn_GetImageMemoryRequirements2{};
    PFN_vkGetBufferMemoryRequirements2 pfn_GetBufferMemoryRequirements2{};
    PFN_vkGetImageSparseMemoryRequirements2 pfn_GetImageSparseMemoryRequirements2{};
    PFN_vkTrimCommandPool pfn_TrimCommandPool{};
    PFN_vkGetDeviceQueue2 pfn_GetDeviceQueue2{};
    PFN_vkCreateSamplerYcbcrConversion pfn_CreateSamplerYcbcrConversion{};
    PFN_vkDestroySamplerYcbcrConversion pfn_DestroySamplerYcbcrConversion{};
    PFN_vkCreateDescriptorUpdateTemplate pfn_CreateDescriptorUpdateTemplate{};
    PFN_vkDestroyDescriptorUpdateTemplate pfn_DestroyDescriptorUpdateTemplate{};
    PFN_vkUpdateDescriptorSetWithTemplate pfn_UpdateDescriptorSetWithTemplate{};
    PFN_vkGetDescriptorSetLayoutSupport pfn_GetDescriptorSetLayoutSupport{};
    PFN_vkCmdDrawIndirectCount pfn_CmdDrawIndirectCount{};
    PFN_vkCmdDrawIndexedIndirectCount pfn_CmdDrawIndexedIndirectCount{};
    PFN_vkCreateRenderPass2 pfn_CreateRenderPass2{};
    PFN_vkCmdBeginRenderPass2 pfn_CmdBeginRenderPass2{};
    PFN_vkCmdNextSubpass2 pfn_CmdNextSubpass2{};
    PFN_vkCmdEndRenderPass2 pfn_CmdEndRenderPass2{};
    PFN_vkResetQueryPool pfn_ResetQueryPool{};
    PFN_vkGetSemaphoreCounterValue pfn_GetSemaphoreCounterValue{};
    PFN_vkWaitSemaphores pfn_WaitSemaphores{};
    PFN_vkSignalSemaphore pfn_SignalSemaphore{};
    PFN_vkGetBufferDeviceAddress pfn_GetBufferDeviceAddress{};
    PFN_vkGetBufferOpaqueCaptureAddress pfn_GetBufferOpaqueCaptureAddress{};
    PFN_vkGetDeviceMemoryOpaqueCaptureAddress pfn_GetDeviceMemoryOpaqueCaptureAddress{};
    PFN_vkCreatePrivateDataSlot pfn_CreatePrivateDataSlot{};
    PFN_vkDestroyPrivateDataSlot pfn_DestroyPrivateDataSlot{};
    PFN_vkSetPrivateData pfn_SetPrivateData{};
    PFN_vkGetPrivateData pfn_GetPrivateData{};
    PFN_vkCmdSetEvent2 pfn_CmdSetEvent2{};
    PFN_vkCmdResetEvent2 pfn_CmdResetEvent2{};
    PFN_vkCmdWaitEvents2 pfn_CmdWaitEvents2{};
    PFN_vkCmdPipelineBarrier2 pfn_CmdPipelineBarrier2{};
    PFN_vkCmdWriteTimestamp2 pfn_CmdWriteTimestamp2{};
    PFN_vkQueueSubmit2 pfn_QueueSubmit2{};
    PFN_vkCmdCopyBuffer2 pfn_CmdCopyBuffer2{};
    PFN_vkCmdCopyImage2 pfn_CmdCopyImage2{};
    PFN_vkCmdCopyBufferToImage2 pfn_CmdCopyBufferToImage2{};
    PFN_vkCmdCopyImageToBuffer2 pfn_CmdCopyImageToBuffer2{};
    PFN_vkCmdBlitImage2 pfn_CmdBlitImage2{};
    PFN_vkCmdResolveImage2 pfn_CmdResolveImage2{};
    PFN_vkCmdBeginRendering pfn_CmdBeginRendering{};
    PFN_vkCmdEndRendering pfn_CmdEndRendering{};
    PFN_vkCmdSetCullMode pfn_CmdSetCullMode{};
    PFN_vkCmdSetFrontFace pfn_CmdSetFrontFace{};
    PFN_vkCmdSetPrimitiveTopology pfn_CmdSetPrimitiveTopology{};
    PFN_vkCmdSetViewportWithCount pfn_CmdSetViewportWithCount{};
    PFN_vkCmdSetScissorWithCount pfn_CmdSetScissorWithCount{};
    PFN_vkCmdBindVertexBuffers2 pfn_CmdBindVertexBuffers2{};
    PFN_vkCmdSetDepthTestEnable pfn_CmdSetDepthTestEnable{};
    PFN_vkCmdSetDepthWriteEnable pfn_CmdSetDepthWriteEnable{};
    PFN_vkCmdSetDepthCompareOp pfn_CmdSetDepthCompareOp{};
    PFN_vkCmdSetDepthBoundsTestEnable pfn_CmdSetDepthBoundsTestEnable{};
    PFN_vkCmdSetStencilTestEnable pfn_CmdSetStencilTestEnable{};
    PFN_vkCmdSetStencilOp pfn_CmdSetStencilOp{};
    PFN_vkCmdSetRasterizerDiscardEnable pfn_CmdSetRasterizerDiscardEnable{};
    PFN_vkCmdSetDepthBiasEnable pfn_CmdSetDepthBiasEnable{};
    PFN_vkCmdSetPrimitiveRestartEnable pfn_CmdSetPrimitiveRestartEnable{};
    PFN_vkGetDeviceBufferMemoryRequirements pfn_GetDeviceBufferMemoryRequirements{};
    PFN_vkGetDeviceImageMemoryRequirements pfn_GetDeviceImageMemoryRequirements{};
    PFN_vkGetDeviceImageSparseMemoryRequirements pfn_GetDeviceImageSparseMemoryRequirements{};
    PFN_vkCreateSwapchainKHR pfn_CreateSwapchainKHR{};
    PFN_vkDestroySwapchainKHR pfn_DestroySwapchainKHR{};
    PFN_vkGetSwapchainImagesKHR pfn_GetSwapchainImagesKHR{};
    PFN_vkAcquireNextImageKHR pfn_AcquireNextImageKHR{};
    PFN_vkQueuePresentKHR pfn_QueuePresentKHR{};
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR pfn_GetDeviceGroupPresentCapabilitiesKHR{};
    PFN_vkGetDeviceGroupSurfacePresentModesKHR pfn_GetDeviceGroupSurfacePresentModesKHR{};
    PFN_vkAcquireNextImage2KHR pfn_AcquireNextImage2KHR{};
    PFN_vkCreateSharedSwapchainsKHR pfn_CreateSharedSwapchainsKHR{};
    PFN_vkCreateVideoSessionKHR pfn_CreateVideoSessionKHR{};
    PFN_vkDestroyVideoSessionKHR pfn_DestroyVideoSessionKHR{};
    PFN_vkGetVideoSessionMemoryRequirementsKHR pfn_GetVideoSessionMemoryRequirementsKHR{};
    PFN_vkBindVideoSessionMemoryKHR pfn_BindVideoSessionMemoryKHR{};
    PFN_vkCreateVideoSessionParametersKHR pfn_CreateVideoSessionParametersKHR{};
    PFN_vkUpdateVideoSessionParametersKHR pfn_UpdateVideoSessionParametersKHR{};
    PFN_vkDestroyVideoSessionParametersKHR pfn_DestroyVideoSessionParametersKHR{};
    PFN_vkCmdBeginVideoCodingKHR pfn_CmdBeginVideoCodingKHR{};
    PFN_vkCmdEndVideoCodingKHR pfn_CmdEndVideoCodingKHR{};
    PFN_vkCmdControlVideoCodingKHR pfn_CmdControlVideoCodingKHR{};
    PFN_vkCmdDecodeVideoKHR pfn_CmdDecodeVideoKHR{};
    PFN_vkCmdBeginRenderingKHR pfn_CmdBeginRenderingKHR{};
    PFN_vkCmdEndRenderingKHR pfn_CmdEndRenderingKHR{};
    PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR pfn_GetDeviceGroupPeerMemoryFeaturesKHR{};
    PFN_vkCmdSetDeviceMaskKHR pfn_CmdSetDeviceMaskKHR{};
    PFN_vkCmdDispatchBaseKHR pfn_CmdDispatchBaseKHR{};
    PFN_vkTrimCommandPoolKHR pfn_TrimCommandPoolKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleKHR pfn_GetMemoryWin32HandleKHR{};
    PFN_vkGetMemoryWin32HandlePropertiesKHR pfn_GetMemoryWin32HandlePropertiesKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryFdKHR pfn_GetMemoryFdKHR{};
    PFN_vkGetMemoryFdPropertiesKHR pfn_GetMemoryFdPropertiesKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreWin32HandleKHR pfn_ImportSemaphoreWin32HandleKHR{};
    PFN_vkGetSemaphoreWin32HandleKHR pfn_GetSemaphoreWin32HandleKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreFdKHR pfn_ImportSemaphoreFdKHR{};
    PFN_vkGetSemaphoreFdKHR pfn_GetSemaphoreFdKHR{};
    PFN_vkCmdPushDescriptorSetKHR pfn_CmdPushDescriptorSetKHR{};
    PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_CmdPushDescriptorSetWithTemplateKHR{};
    PFN_vkCreateDescriptorUpdateTemplateKHR pfn_CreateDescriptorUpdateTemplateKHR{};
    PFN_vkDestroyDescriptorUpdateTemplateKHR pfn_DestroyDescriptorUpdateTemplateKHR{};
    PFN_vkUpdateDescriptorSetWithTemplateKHR pfn_UpdateDescriptorSetWithTemplateKHR{};
    PFN_vkCreateRenderPass2KHR pfn_CreateRenderPass2KHR{};
    PFN_vkCmdBeginRenderPass2KHR pfn_CmdBeginRenderPass2KHR{};
    PFN_vkCmdNextSubpass2KHR pfn_CmdNextSubpass2KHR{};
    PFN_vkCmdEndRenderPass2KHR pfn_CmdEndRenderPass2KHR{};
    PFN_vkGetSwapchainStatusKHR pfn_GetSwapchainStatusKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceWin32HandleKHR pfn_ImportFenceWin32HandleKHR{};
    PFN_vkGetFenceWin32HandleKHR pfn_GetFenceWin32HandleKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceFdKHR pfn_ImportFenceFdKHR{};
    PFN_vkGetFenceFdKHR pfn_GetFenceFdKHR{};
    PFN_vkAcquireProfilingLockKHR pfn_AcquireProfilingLockKHR{};
    PFN_vkReleaseProfilingLockKHR pfn_ReleaseProfilingLockKHR{};
    PFN_vkGetImageMemoryRequirements2KHR pfn_GetImageMemoryRequirements2KHR{};
    PFN_vkGetBufferMemoryRequirements2KHR pfn_GetBufferMemoryRequirements2KHR{};
    PFN_vkGetImageSparseMemoryRequirements2KHR pfn_GetImageSparseMemoryRequirements2KHR{};
    PFN_vkCreateSamplerYcbcrConversionKHR pfn_CreateSamplerYcbcrConversionKHR{};
    PFN_vkDestroySamplerYcbcrConversionKHR pfn_DestroySamplerYcbcrConversionKHR{};
    PFN_vkBindBufferMemory2KHR pfn_BindBufferMemory2KHR{};
    PFN_vkBindImageMemory2KHR pfn_BindImageMemory2KHR{};
    PFN_vkGetDescriptorSetLayoutSupportKHR pfn_GetDescriptorSetLayoutSupportKHR{};
    PFN_vkCmdDrawIndirectCountKHR pfn_CmdDrawIndirectCountKHR{};
    PFN_vkCmdDrawIndexedIndirectCountKHR pfn_CmdDrawIndexedIndirectCountKHR{};
    PFN_vkGetSemaphoreCounterValueKHR pfn_GetSemaphoreCounterValueKHR{};
    PFN_vkWaitSemaphoresKHR pfn_WaitSemaphoresKHR{};
    PFN_vkSignalSemaphoreKHR pfn_SignalSemaphoreKHR{};
    PFN_vkCmdSetFragmentShadingRateKHR pfn_CmdSetFragmentShadingRateKHR{};
    PFN_vkWaitForPresentKHR pfn_WaitForPresentKHR{};
    PFN_vkGetBufferDeviceAddressKHR pfn_GetBufferDeviceAddressKHR{};
    PFN_vkGetBufferOpaqueCaptureAddressKHR pfn_GetBufferOpaqueCaptureAddressKHR{};
    PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR pfn_GetDeviceMemoryOpaqueCaptureAddressKHR{};
    PFN_vkCreateDeferredOperationKHR pfn_CreateDeferredOperationKHR{};
    PFN_vkDestroyDeferredOperationKHR pfn_DestroyDeferredOperationKHR{};
    PFN_vkGetDeferredOperationMaxConcurrencyKHR pfn_GetDeferredOperationMaxConcurrencyKHR{};
    PFN_vkGetDeferredOperationResultKHR pfn_GetDeferredOperationResultKHR{};
    PFN_vkDeferredOperationJoinKHR pfn_DeferredOperationJoinKHR{};
    PFN_vkGetPipelineExecutablePropertiesKHR pfn_GetPipelineExecutablePropertiesKHR{};
    PFN_vkGetPipelineExecutableStatisticsKHR pfn_GetPipelineExecutableStatisticsKHR{};
    PFN_vkGetPipelineExecutableInternalRepresentationsKHR pfn_GetPipelineExecutableInternalRepresentationsKHR{};
    PFN_vkMapMemory2KHR pfn_MapMemory2KHR{};
    PFN_vkUnmapMemory2KHR pfn_UnmapMemory2KHR{};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetEncodedVideoSessionParametersKHR pfn_GetEncodedVideoSessionParametersKHR{};
    PFN_vkCmdEncodeVideoKHR pfn_CmdEncodeVideoKHR{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdSetEvent2KHR pfn_CmdSetEvent2KHR{};
    PFN_vkCmdResetEvent2KHR pfn_CmdResetEvent2KHR{};
    PFN_vkCmdWaitEvents2KHR pfn_CmdWaitEvents2KHR{};
    PFN_vkCmdPipelineBarrier2KHR pfn_CmdPipelineBarrier2KHR{};
    PFN_vkCmdWriteTimestamp2KHR pfn_CmdWriteTimestamp2KHR{};
    PFN_vkQueueSubmit2KHR pfn_QueueSubmit2KHR{};
    PFN_vkCmdWriteBufferMarker2AMD pfn_CmdWriteBufferMarker2AMD{};
    PFN_vkGetQueueCheckpointData2NV pfn_GetQueueCheckpointData2NV{};
    PFN_vkCmdCopyBuffer2KHR pfn_CmdCopyBuffer2KHR{};
    PFN_vkCmdCopyImage2KHR pfn_CmdCopyImage2KHR{};
    PFN_vkCmdCopyBufferToImage2KHR pfn_CmdCopyBufferToImage2KHR{};
    PFN_vkCmdCopyImageToBuffer2KHR pfn_CmdCopyImageToBuffer2KHR{};
    PFN_vkCmdBlitImage2KHR pfn_CmdBlitImage2KHR{};
    PFN_vkCmdResolveImage2KHR pfn_CmdResolveImage2KHR{};
    PFN_vkCmdTraceRaysIndirect2KHR pfn_CmdTraceRaysIndirect2KHR{};
    PFN_vkGetDeviceBufferMemoryRequirementsKHR pfn_GetDeviceBufferMemoryRequirementsKHR{};
    PFN_vkGetDeviceImageMemoryRequirementsKHR pfn_GetDeviceImageMemoryRequirementsKHR{};
    PFN_vkGetDeviceImageSparseMemoryRequirementsKHR pfn_GetDeviceImageSparseMemoryRequirementsKHR{};
    PFN_vkCmdBindIndexBuffer2KHR pfn_CmdBindIndexBuffer2KHR{};
    PFN_vkGetRenderingAreaGranularityKHR pfn_GetRenderingAreaGranularityKHR{};
    PFN_vkGetDeviceImageSubresourceLayoutKHR pfn_GetDeviceImageSubresourceLayoutKHR{};
    PFN_vkGetImageSubresourceLayout2KHR pfn_GetImageSubresourceLayout2KHR{};
    PFN_vkDebugMarkerSetObjectTagEXT pfn_DebugMarkerSetObjectTagEXT{};
    PFN_vkDebugMarkerSetObjectNameEXT pfn_DebugMarkerSetObjectNameEXT{};
    PFN_vkCmdDebugMarkerBeginEXT pfn_CmdDebugMarkerBeginEXT{};
    PFN_vkCmdDebugMarkerEndEXT pfn_CmdDebugMarkerEndEXT{};
    PFN_vkCmdDebugMarkerInsertEXT pfn_CmdDebugMarkerInsertEXT{};
    PFN_vkCmdBindTransformFeedbackBuffersEXT pfn_CmdBindTransformFeedbackBuffersEXT{};
    PFN_vkCmdBeginTransformFeedbackEXT pfn_CmdBeginTransformFeedbackEXT{};
    PFN_vkCmdEndTransformFeedbackEXT pfn_CmdEndTransformFeedbackEXT{};
    PFN_vkCmdBeginQueryIndexedEXT pfn_CmdBeginQueryIndexedEXT{};
    PFN_vkCmdEndQueryIndexedEXT pfn_CmdEndQueryIndexedEXT{};
    PFN_vkCmdDrawIndirectByteCountEXT pfn_CmdDrawIndirectByteCountEXT{};
    PFN_vkCreateCuModuleNVX pfn_CreateCuModuleNVX{};
    PFN_vkCreateCuFunctionNVX pfn_CreateCuFunctionNVX{};
    PFN_vkDestroyCuModuleNVX pfn_DestroyCuModuleNVX{};
    PFN_vkDestroyCuFunctionNVX pfn_DestroyCuFunctionNVX{};
    PFN_vkCmdCuLaunchKernelNVX pfn_CmdCuLaunchKernelNVX{};
    PFN_vkGetImageViewHandleNVX pfn_GetImageViewHandleNVX{};
    PFN_vkGetImageViewAddressNVX pfn_GetImageViewAddressNVX{};
    PFN_vkCmdDrawIndirectCountAMD pfn_CmdDrawIndirectCountAMD{};
    PFN_vkCmdDrawIndexedIndirectCountAMD pfn_CmdDrawIndexedIndirectCountAMD{};
    PFN_vkGetShaderInfoAMD pfn_GetShaderInfoAMD{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleNV pfn_GetMemoryWin32HandleNV{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCmdBeginConditionalRenderingEXT pfn_CmdBeginConditionalRenderingEXT{};
    PFN_vkCmdEndConditionalRenderingEXT pfn_CmdEndConditionalRenderingEXT{};
    PFN_vkCmdSetViewportWScalingNV pfn_CmdSetViewportWScalingNV{};
    PFN_vkDisplayPowerControlEXT pfn_DisplayPowerControlEXT{};
    PFN_vkRegisterDeviceEventEXT pfn_RegisterDeviceEventEXT{};
    PFN_vkRegisterDisplayEventEXT pfn_RegisterDisplayEventEXT{};
    PFN_vkGetSwapchainCounterEXT pfn_GetSwapchainCounterEXT{};
    PFN_vkGetRefreshCycleDurationGOOGLE pfn_GetRefreshCycleDurationGOOGLE{};
    PFN_vkGetPastPresentationTimingGOOGLE pfn_GetPastPresentationTimingGOOGLE{};
    PFN_vkCmdSetDiscardRectangleEXT pfn_CmdSetDiscardRectangleEXT{};
    PFN_vkCmdSetDiscardRectangleEnableEXT pfn_CmdSetDiscardRectangleEnableEXT{};
    PFN_vkCmdSetDiscardRectangleModeEXT pfn_CmdSetDiscardRectangleModeEXT{};
    PFN_vkSetHdrMetadataEXT pfn_SetHdrMetadataEXT{};
    PFN_vkSetDebugUtilsObjectNameEXT pfn_SetDebugUtilsObjectNameEXT{};
    PFN_vkSetDebugUtilsObjectTagEXT pfn_SetDebugUtilsObjectTagEXT{};
    PFN_vkQueueBeginDebugUtilsLabelEXT pfn_QueueBeginDebugUtilsLabelEXT{};
    PFN_vkQueueEndDebugUtilsLabelEXT pfn_QueueEndDebugUtilsLabelEXT{};
    PFN_vkQueueInsertDebugUtilsLabelEXT pfn_QueueInsertDebugUtilsLabelEXT{};
    PFN_vkCmdBeginDebugUtilsLabelEXT pfn_CmdBeginDebugUtilsLabelEXT{};
    PFN_vkCmdEndDebugUtilsLabelEXT pfn_CmdEndDebugUtilsLabelEXT{};
    PFN_vkCmdInsertDebugUtilsLabelEXT pfn_CmdInsertDebugUtilsLabelEXT{};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkGetAndroidHardwareBufferPropertiesANDROID pfn_GetAndroidHardwareBufferPropertiesANDROID{};
    PFN_vkGetMemoryAndroidHardwareBufferANDROID pfn_GetMemoryAndroidHardwareBufferANDROID{};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateExecutionGraphPipelinesAMDX pfn_CreateExecutionGraphPipelinesAMDX{};
    PFN_vkGetExecutionGraphPipelineScratchSizeAMDX pfn_GetExecutionGraphPipelineScratchSizeAMDX{};
    PFN_vkGetExecutionGraphPipelineNodeIndexAMDX pfn_GetExecutionGraphPipelineNodeIndexAMDX{};
    PFN_vkCmdInitializeGraphScratchMemoryAMDX pfn_CmdInitializeGraphScratchMemoryAMDX{};
    PFN_vkCmdDispatchGraphAMDX pfn_CmdDispatchGraphAMDX{};
    PFN_vkCmdDispatchGraphIndirectAMDX pfn_CmdDispatchGraphIndirectAMDX{};
    PFN_vkCmdDispatchGraphIndirectCountAMDX pfn_CmdDispatchGraphIndirectCountAMDX{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdSetSampleLocationsEXT pfn_CmdSetSampleLocationsEXT{};
    PFN_vkGetImageDrmFormatModifierPropertiesEXT pfn_GetImageDrmFormatModifierPropertiesEXT{};
    PFN_vkCreateValidationCacheEXT pfn_CreateValidationCacheEXT{};
    PFN_vkDestroyValidationCacheEXT pfn_DestroyValidationCacheEXT{};
    PFN_vkMergeValidationCachesEXT pfn_MergeValidationCachesEXT{};
    PFN_vkGetValidationCacheDataEXT pfn_GetValidationCacheDataEXT{};
    PFN_vkCmdBindShadingRateImageNV pfn_CmdBindShadingRateImageNV{};
    PFN_vkCmdSetViewportShadingRatePaletteNV pfn_CmdSetViewportShadingRatePaletteNV{};
    PFN_vkCmdSetCoarseSampleOrderNV pfn_CmdSetCoarseSampleOrderNV{};
    PFN_vkCreateAccelerationStructureNV pfn_CreateAccelerationStructureNV{};
    PFN_vkDestroyAccelerationStructureNV pfn_DestroyAccelerationStructureNV{};
    PFN_vkGetAccelerationStructureMemoryRequirementsNV pfn_GetAccelerationStructureMemoryRequirementsNV{};
    PFN_vkBindAccelerationStructureMemoryNV pfn_BindAccelerationStructureMemoryNV{};
    PFN_vkCmdBuildAccelerationStructureNV pfn_CmdBuildAccelerationStructureNV{};
    PFN_vkCmdCopyAccelerationStructureNV pfn_CmdCopyAccelerationStructureNV{};
    PFN_vkCmdTraceRaysNV pfn_CmdTraceRaysNV{};
    PFN_vkCreateRayTracingPipelinesNV pfn_CreateRayTracingPipelinesNV{};
    PFN_vkGetRayTracingShaderGroupHandlesKHR pfn_GetRayTracingShaderGroupHandlesKHR{};
    PFN_vkGetRayTracingShaderGroupHandlesNV pfn_GetRayTracingShaderGroupHandlesNV{};
    PFN_vkGetAccelerationStructureHandleNV pfn_GetAccelerationStructureHandleNV{};
    PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_CmdWriteAccelerationStructuresPropertiesNV{};
    PFN_vkCompileDeferredNV pfn_CompileDeferredNV{};
    PFN_vkGetMemoryHostPointerPropertiesEXT pfn_GetMemoryHostPointerPropertiesEXT{};
    PFN_vkCmdWriteBufferMarkerAMD pfn_CmdWriteBufferMarkerAMD{};
    PFN_vkGetCalibratedTimestampsEXT pfn_GetCalibratedTimestampsEXT{};
    PFN_vkCmdDrawMeshTasksNV pfn_CmdDrawMeshTasksNV{};
    PFN_vkCmdDrawMeshTasksIndirectNV pfn_CmdDrawMeshTasksIndirectNV{};
    PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_CmdDrawMeshTasksIndirectCountNV{};
    PFN_vkCmdSetExclusiveScissorEnableNV pfn_CmdSetExclusiveScissorEnableNV{};
    PFN_vkCmdSetExclusiveScissorNV pfn_CmdSetExclusiveScissorNV{};
    PFN_vkCmdSetCheckpointNV pfn_CmdSetCheckpointNV{};
    PFN_vkGetQueueCheckpointDataNV pfn_GetQueueCheckpointDataNV{};
    PFN_vkInitializePerformanceApiINTEL pfn_InitializePerformanceApiINTEL{};
    PFN_vkUninitializePerformanceApiINTEL pfn_UninitializePerformanceApiINTEL{};
    PFN_vkCmdSetPerformanceMarkerINTEL pfn_CmdSetPerformanceMarkerINTEL{};
    PFN_vkCmdSetPerformanceStreamMarkerINTEL pfn_CmdSetPerformanceStreamMarkerINTEL{};
    PFN_vkCmdSetPerformanceOverrideINTEL pfn_CmdSetPerformanceOverrideINTEL{};
    PFN_vkAcquirePerformanceConfigurationINTEL pfn_AcquirePerformanceConfigurationINTEL{};
    PFN_vkReleasePerformanceConfigurationINTEL pfn_ReleasePerformanceConfigurationINTEL{};
    PFN_vkQueueSetPerformanceConfigurationINTEL pfn_QueueSetPerformanceConfigurationINTEL{};
    PFN_vkGetPerformanceParameterINTEL pfn_GetPerformanceParameterINTEL{};
    PFN_vkSetLocalDimmingAMD pfn_SetLocalDimmingAMD{};
    PFN_vkGetBufferDeviceAddressEXT pfn_GetBufferDeviceAddressEXT{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireFullScreenExclusiveModeEXT pfn_AcquireFullScreenExclusiveModeEXT{};
    PFN_vkReleaseFullScreenExclusiveModeEXT pfn_ReleaseFullScreenExclusiveModeEXT{};
    PFN_vkGetDeviceGroupSurfacePresentModes2EXT pfn_GetDeviceGroupSurfacePresentModes2EXT{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCmdSetLineStippleEXT pfn_CmdSetLineStippleEXT{};
    PFN_vkResetQueryPoolEXT pfn_ResetQueryPoolEXT{};
    PFN_vkCmdSetCullModeEXT pfn_CmdSetCullModeEXT{};
    PFN_vkCmdSetFrontFaceEXT pfn_CmdSetFrontFaceEXT{};
    PFN_vkCmdSetPrimitiveTopologyEXT pfn_CmdSetPrimitiveTopologyEXT{};
    PFN_vkCmdSetViewportWithCountEXT pfn_CmdSetViewportWithCountEXT{};
    PFN_vkCmdSetScissorWithCountEXT pfn_CmdSetScissorWithCountEXT{};
    PFN_vkCmdBindVertexBuffers2EXT pfn_CmdBindVertexBuffers2EXT{};
    PFN_vkCmdSetDepthTestEnableEXT pfn_CmdSetDepthTestEnableEXT{};
    PFN_vkCmdSetDepthWriteEnableEXT pfn_CmdSetDepthWriteEnableEXT{};
    PFN_vkCmdSetDepthCompareOpEXT pfn_CmdSetDepthCompareOpEXT{};
    PFN_vkCmdSetDepthBoundsTestEnableEXT pfn_CmdSetDepthBoundsTestEnableEXT{};
    PFN_vkCmdSetStencilTestEnableEXT pfn_CmdSetStencilTestEnableEXT{};
    PFN_vkCmdSetStencilOpEXT pfn_CmdSetStencilOpEXT{};
    PFN_vkCopyMemoryToImageEXT pfn_CopyMemoryToImageEXT{};
    PFN_vkCopyImageToMemoryEXT pfn_CopyImageToMemoryEXT{};
    PFN_vkCopyImageToImageEXT pfn_CopyImageToImageEXT{};
    PFN_vkTransitionImageLayoutEXT pfn_TransitionImageLayoutEXT{};
    PFN_vkGetImageSubresourceLayout2EXT pfn_GetImageSubresourceLayout2EXT{};
    PFN_vkReleaseSwapchainImagesEXT pfn_ReleaseSwapchainImagesEXT{};
    PFN_vkGetGeneratedCommandsMemoryRequirementsNV pfn_GetGeneratedCommandsMemoryRequirementsNV{};
    PFN_vkCmdPreprocessGeneratedCommandsNV pfn_CmdPreprocessGeneratedCommandsNV{};
    PFN_vkCmdExecuteGeneratedCommandsNV pfn_CmdExecuteGeneratedCommandsNV{};
    PFN_vkCmdBindPipelineShaderGroupNV pfn_CmdBindPipelineShaderGroupNV{};
    PFN_vkCreateIndirectCommandsLayoutNV pfn_CreateIndirectCommandsLayoutNV{};
    PFN_vkDestroyIndirectCommandsLayoutNV pfn_DestroyIndirectCommandsLayoutNV{};
    PFN_vkCmdSetDepthBias2EXT pfn_CmdSetDepthBias2EXT{};
    PFN_vkCreatePrivateDataSlotEXT pfn_CreatePrivateDataSlotEXT{};
    PFN_vkDestroyPrivateDataSlotEXT pfn_DestroyPrivateDataSlotEXT{};
    PFN_vkSetPrivateDataEXT pfn_SetPrivateDataEXT{};
    PFN_vkGetPrivateDataEXT pfn_GetPrivateDataEXT{};
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkExportMetalObjectsEXT pfn_ExportMetalObjectsEXT{};
#endif  // VK_USE_PLATFORM_METAL_EXT
    PFN_vkGetDescriptorSetLayoutSizeEXT pfn_GetDescriptorSetLayoutSizeEXT{};
    PFN_vkGetDescriptorSetLayoutBindingOffsetEXT pfn_GetDescriptorSetLayoutBindingOffsetEXT{};
    PFN_vkGetDescriptorEXT pfn_GetDescriptorEXT{};
    PFN_vkCmdBindDescriptorBuffersEXT pfn_CmdBindDescriptorBuffersEXT{};
    PFN_vkCmdSetDescriptorBufferOffsetsEXT pfn_CmdSetDescriptorBufferOffsetsEXT{};
    PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT{};
    PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT pfn_GetBufferOpaqueCaptureDescriptorDataEXT{};
    PFN_vkGetImageOpaqueCaptureDescriptorDataEXT pfn_GetImageOpaqueCaptureDescriptorDataEXT{};
    PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT pfn_GetImageViewOpaqueCaptureDescriptorDataEXT{};
    PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT pfn_GetSamplerOpaqueCaptureDescriptorDataEXT{};
    PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT pfn_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT{};
    PFN_vkCmdSetFragmentShadingRateEnumNV pfn_CmdSetFragmentShadingRateEnumNV{};
    PFN_vkGetDeviceFaultInfoEXT pfn_GetDeviceFaultInfoEXT{};
    PFN_vkCmdSetVertexInputEXT pfn_CmdSetVertexInputEXT{};
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkGetMemoryZirconHandleFUCHSIA pfn_GetMemoryZirconHandleFUCHSIA{};
    PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA pfn_GetMemoryZirconHandlePropertiesFUCHSIA{};
    PFN_vkImportSemaphoreZirconHandleFUCHSIA pfn_ImportSemaphoreZirconHandleFUCHSIA{};
    PFN_vkGetSemaphoreZirconHandleFUCHSIA pfn_GetSemaphoreZirconHandleFUCHSIA{};
    PFN_vkCreateBufferCollectionFUCHSIA pfn_CreateBufferCollectionFUCHSIA{};
    PFN_vkSetBufferCollectionImageConstraintsFUCHSIA pfn_SetBufferCollectionImageConstraintsFUCHSIA{};
    PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA pfn_SetBufferCollectionBufferConstraintsFUCHSIA{};
    PFN_vkDestroyBufferCollectionFUCHSIA pfn_DestroyBufferCollectionFUCHSIA{};
    PFN_vkGetBufferCollectionPropertiesFUCHSIA pfn_GetBufferCollectionPropertiesFUCHSIA{};
#endif  // VK_USE_PLATFORM_FUCHSIA
    PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI pfn_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI{};
    PFN_vkCmdSubpassShadingHUAWEI pfn_CmdSubpassShadingHUAWEI{};
    PFN_vkCmdBindInvocationMaskHUAWEI pfn_CmdBindInvocationMaskHUAWEI{};
    PFN_vkGetMemoryRemoteAddressNV pfn_GetMemoryRemoteAddressNV{};
    PFN_vkGetPipelinePropertiesEXT pfn_GetPipelinePropertiesEXT{};
    PFN_vkCmdSetPatchControlPointsEXT pfn_CmdSetPatchControlPointsEXT{};
    PFN_vkCmdSetRasterizerDiscardEnableEXT pfn_CmdSetRasterizerDiscardEnableEXT{};
    PFN_vkCmdSetDepthBiasEnableEXT pfn_CmdSetDepthBiasEnableEXT{};
    PFN_vkCmdSetLogicOpEXT pfn_CmdSetLogicOpEXT{};
    PFN_vkCmdSetPrimitiveRestartEnableEXT pfn_CmdSetPrimitiveRestartEnableEXT{};
    PFN_vkCmdSetColorWriteEnableEXT pfn_CmdSetColorWriteEnableEXT{};
    PFN_vkCmdDrawMultiEXT pfn_CmdDrawMultiEXT{};
    PFN_vkCmdDrawMultiIndexedEXT pfn_CmdDrawMultiIndexedEXT{};
    PFN_vkCreateMicromapEXT pfn_CreateMicromapEXT{};
    PFN_vkDestroyMicromapEXT pfn_DestroyMicromapEXT{};
    PFN_vkCmdBuildMicromapsEXT pfn_CmdBuildMicromapsEXT{};
    PFN_vkBuildMicromapsEXT pfn_BuildMicromapsEXT{};
    PFN_vkCopyMicromapEXT pfn_CopyMicromapEXT{};
    PFN_vkCopyMicromapToMemoryEXT pfn_CopyMicromapToMemoryEXT{};
    PFN_vkCopyMemoryToMicromapEXT pfn_CopyMemoryToMicromapEXT{};
    PFN_vkWriteMicromapsPropertiesEXT pfn_WriteMicromapsPropertiesEXT{};
    PFN_vkCmdCopyMicromapEXT pfn_CmdCopyMicromapEXT{};
    PFN_vkCmdCopyMicromapToMemoryEXT pfn_CmdCopyMicromapToMemoryEXT{};
    PFN_vkCmdCopyMemoryToMicromapEXT pfn_CmdCopyMemoryToMicromapEXT{};
    PFN_vkCmdWriteMicromapsPropertiesEXT pfn_CmdWriteMicromapsPropertiesEXT{};
    PFN_vkGetDeviceMicromapCompatibilityEXT pfn_GetDeviceMicromapCompatibilityEXT{};
    PFN_vkGetMicromapBuildSizesEXT pfn_GetMicromapBuildSizesEXT{};
    PFN_vkCmdDrawClusterHUAWEI pfn_CmdDrawClusterHUAWEI{};
    PFN_vkCmdDrawClusterIndirectHUAWEI pfn_CmdDrawClusterIndirectHUAWEI{};
    PFN_vkSetDeviceMemoryPriorityEXT pfn_SetDeviceMemoryPriorityEXT{};
    PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE pfn_GetDescriptorSetLayoutHostMappingInfoVALVE{};
    PFN_vkGetDescriptorSetHostMappingVALVE pfn_GetDescriptorSetHostMappingVALVE{};
    PFN_vkCmdCopyMemoryIndirectNV pfn_CmdCopyMemoryIndirectNV{};
    PFN_vkCmdCopyMemoryToImageIndirectNV pfn_CmdCopyMemoryToImageIndirectNV{};
    PFN_vkCmdDecompressMemoryNV pfn_CmdDecompressMemoryNV{};
    PFN_vkCmdDecompressMemoryIndirectCountNV pfn_CmdDecompressMemoryIndirectCountNV{};
    PFN_vkGetPipelineIndirectMemoryRequirementsNV pfn_GetPipelineIndirectMemoryRequirementsNV{};
    PFN_vkCmdUpdatePipelineIndirectBufferNV pfn_CmdUpdatePipelineIndirectBufferNV{};
    PFN_vkGetPipelineIndirectDeviceAddressNV pfn_GetPipelineIndirectDeviceAddressNV{};
    PFN_vkCmdSetTessellationDomainOriginEXT pfn_CmdSetTessellationDomainOriginEXT{};
    PFN_vkCmdSetDepthClampEnableEXT pfn_CmdSetDepthClampEnableEXT{};
    PFN_vkCmdSetPolygonModeEXT pfn_CmdSetPolygonModeEXT{};
    PFN_vkCmdSetRasterizationSamplesEXT pfn_CmdSetRasterizationSamplesEXT{};
    PFN_vkCmdSetSampleMaskEXT pfn_CmdSetSampleMaskEXT{};
    PFN_vkCmdSetAlphaToCoverageEnableEXT pfn_CmdSetAlphaToCoverageEnableEXT{};
    PFN_vkCmdSetAlphaToOneEnableEXT pfn_CmdSetAlphaToOneEnableEXT{};
    PFN_vkCmdSetLogicOpEnableEXT pfn_CmdSetLogicOpEnableEXT{};
    PFN_vkCmdSetColorBlendEnableEXT pfn_CmdSetColorBlendEnableEXT{};
    PFN_vkCmdSetColorBlendEquationEXT pfn_CmdSetColorBlendEquationEXT{};
    PFN_vkCmdSetColorWriteMaskEXT pfn_CmdSetColorWriteMaskEXT{};
    PFN_vkCmdSetRasterizationStreamEXT pfn_CmdSetRasterizationStreamEXT{};
    PFN_vkCmdSetConservativeRasterizationModeEXT pfn_CmdSetConservativeRasterizationModeEXT{};
    PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT pfn_CmdSetExtraPrimitiveOverestimationSizeEXT{};
    PFN_vkCmdSetDepthClipEnableEXT pfn_CmdSetDepthClipEnableEXT{};
    PFN_vkCmdSetSampleLocationsEnableEXT pfn_CmdSetSampleLocationsEnableEXT{};
    PFN_vkCmdSetColorBlendAdvancedEXT pfn_CmdSetColorBlendAdvancedEXT{};
    PFN_vkCmdSetProvokingVertexModeEXT pfn_CmdSetProvokingVertexModeEXT{};
    PFN_vkCmdSetLineRasterizationModeEXT pfn_CmdSetLineRasterizationModeEXT{};
    PFN_vkCmdSetLineStippleEnableEXT pfn_CmdSetLineStippleEnableEXT{};
    PFN_vkCmdSetDepthClipNegativeOneToOneEXT pfn_CmdSetDepthClipNegativeOneToOneEXT{};
    PFN_vkCmdSetViewportWScalingEnableNV pfn_CmdSetViewportWScalingEnableNV{};
    PFN_vkCmdSetViewportSwizzleNV pfn_CmdSetViewportSwizzleNV{};
    PFN_vkCmdSetCoverageToColorEnableNV pfn_CmdSetCoverageToColorEnableNV{};
    PFN_vkCmdSetCoverageToColorLocationNV pfn_CmdSetCoverageToColorLocationNV{};
    PFN_vkCmdSetCoverageModulationModeNV pfn_CmdSetCoverageModulationModeNV{};
    PFN_vkCmdSetCoverageModulationTableEnableNV pfn_CmdSetCoverageModulationTableEnableNV{};
    PFN_vkCmdSetCoverageModulationTableNV pfn_CmdSetCoverageModulationTableNV{};
    PFN_vkCmdSetShadingRateImageEnableNV pfn_CmdSetShadingRateImageEnableNV{};
    PFN_vkCmdSetRepresentativeFragmentTestEnableNV pfn_CmdSetRepresentativeFragmentTestEnableNV{};
    PFN_vkCmdSetCoverageReductionModeNV pfn_CmdSetCoverageReductionModeNV{};
    PFN_vkGetShaderModuleIdentifierEXT pfn_GetShaderModuleIdentifierEXT{};
    PFN_vkGetShaderModuleCreateInfoIdentifierEXT pfn_GetShaderModuleCreateInfoIdentifierEXT{};
    PFN_vkCreateOpticalFlowSessionNV pfn_CreateOpticalFlowSessionNV{};
    PFN_vkDestroyOpticalFlowSessionNV pfn_DestroyOpticalFlowSessionNV{};
    PFN_vkBindOpticalFlowSessionImageNV pfn_BindOpticalFlowSessionImageNV{};
    PFN_vkCmdOpticalFlowExecuteNV pfn_CmdOpticalFlowExecuteNV{};
    PFN_vkCreateShadersEXT pfn_CreateShadersEXT{};
    PFN_vkDestroyShaderEXT pfn_DestroyShaderEXT{};
    PFN_vkGetShaderBinaryDataEXT pfn_GetShaderBinaryDataEXT{};
    PFN_vkCmdBindShadersEXT pfn_CmdBindShadersEXT{};
    PFN_vkGetFramebufferTilePropertiesQCOM pfn_GetFramebufferTilePropertiesQCOM{};
    PFN_vkGetDynamicRenderingTilePropertiesQCOM pfn_GetDynamicRenderingTilePropertiesQCOM{};
    PFN_vkSetLatencySleepModeNV pfn_SetLatencySleepModeNV{};
    PFN_vkLatencySleepNV pfn_LatencySleepNV{};
    PFN_vkSetLatencyMarkerNV pfn_SetLatencyMarkerNV{};
    PFN_vkGetLatencyTimingsNV pfn_GetLatencyTimingsNV{};
    PFN_vkQueueNotifyOutOfBandNV pfn_QueueNotifyOutOfBandNV{};
    PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT pfn_CmdSetAttachmentFeedbackLoopEnableEXT{};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetScreenBufferPropertiesQNX pfn_GetScreenBufferPropertiesQNX{};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkCreateAccelerationStructureKHR pfn_CreateAccelerationStructureKHR{};
    PFN_vkDestroyAccelerationStructureKHR pfn_DestroyAccelerationStructureKHR{};
    PFN_vkCmdBuildAccelerationStructuresKHR pfn_CmdBuildAccelerationStructuresKHR{};
    PFN_vkCmdBuildAccelerationStructuresIndirectKHR pfn_CmdBuildAccelerationStructuresIndirectKHR{};
    PFN_vkBuildAccelerationStructuresKHR pfn_BuildAccelerationStructuresKHR{};
    PFN_vkCopyAccelerationStructureKHR pfn_CopyAccelerationStructureKHR{};
    PFN_vkCopyAccelerationStructureToMemoryKHR pfn_CopyAccelerationStructureToMemoryKHR{};
    PFN_vkCopyMemoryToAccelerationStructureKHR pfn_CopyMemoryToAccelerationStructureKHR{};
    PFN_vkWriteAccelerationStructuresPropertiesKHR pfn_WriteAccelerationStructuresPropertiesKHR{};
    PFN_vkCmdCopyAccelerationStructureKHR pfn_CmdCopyAccelerationStructureKHR{};
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR pfn_CmdCopyAccelerationStructureToMemoryKHR{};
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR pfn_CmdCopyMemoryToAccelerationStructureKHR{};
    PFN_vkGetAccelerationStructureDeviceAddressKHR pfn_GetAccelerationStructureDeviceAddressKHR{};
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR pfn_CmdWriteAccelerationStructuresPropertiesKHR{};
    PFN_vkGetDeviceAccelerationStructureCompatibilityKHR pfn_GetDeviceAccelerationStructureCompatibilityKHR{};
    PFN_vkGetAccelerationStructureBuildSizesKHR pfn_GetAccelerationStructureBuildSizesKHR{};
    PFN_vkCmdTraceRaysKHR pfn_CmdTraceRaysKHR{};
    PFN_vkCreateRayTracingPipelinesKHR pfn_CreateRayTracingPipelinesKHR{};
    PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR pfn_GetRayTracingCaptureReplayShaderGroupHandlesKHR{};
    PFN_vkCmdTraceRaysIndirectKHR pfn_CmdTraceRaysIndirectKHR{};
    PFN_vkGetRayTracingShaderGroupStackSizeKHR pfn_GetRayTracingShaderGroupStackSizeKHR{};
    PFN_vkCmdSetRayTracingPipelineStackSizeKHR pfn_CmdSetRayTracingPipelineStackSizeKHR{};
    PFN_vkCmdDrawMeshTasksEXT pfn_CmdDrawMeshTasksEXT{};
    PFN_vkCmdDrawMeshTasksIndirectEXT pfn_CmdDrawMeshTasksIndirectEXT{};
    PFN_vkCmdDrawMeshTasksIndirectCountEXT pfn_CmdDrawMeshTasksIndirectCountEXT{};
    PFN_vkVoidFunction GetDeviceProcAddr(
        const char* pName) {
        return pfn_GetDeviceProcAddr(device, pName);
    }
    void DestroyDevice(
        const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDevice(device, pAllocator);
    }
    void GetDeviceQueue(
        uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
        pfn_GetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
    }
    VkResult QueueSubmit(
        VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
        return pfn_QueueSubmit(queue, submitCount, pSubmits, fence);
    }
    VkResult QueueWaitIdle(
        VkQueue queue) {
        return pfn_QueueWaitIdle(queue);
    }
    VkResult DeviceWaitIdle(
       ) {
        return pfn_DeviceWaitIdle(device);
    }
    VkResult AllocateMemory(
        const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) {
        return pfn_AllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
    }
    void FreeMemory(
        VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) {
        pfn_FreeMemory(device, memory, pAllocator);
    }
    VkResult MapMemory(
        VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) {
        return pfn_MapMemory(device, memory, offset, size, flags, ppData);
    }
    void UnmapMemory(
        VkDeviceMemory memory) {
        pfn_UnmapMemory(device, memory);
    }
    VkResult FlushMappedMemoryRanges(
        uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) {
        return pfn_FlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
    }
    VkResult InvalidateMappedMemoryRanges(
        uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) {
        return pfn_InvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
    }
    void GetDeviceMemoryCommitment(
        VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) {
        pfn_GetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
    }
    VkResult BindBufferMemory(
        VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
        return pfn_BindBufferMemory(device, buffer, memory, memoryOffset);
    }
    VkResult BindImageMemory(
        VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
        return pfn_BindImageMemory(device, image, memory, memoryOffset);
    }
    void GetBufferMemoryRequirements(
        VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) {
        pfn_GetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
    }
    void GetImageMemoryRequirements(
        VkImage image, VkMemoryRequirements* pMemoryRequirements) {
        pfn_GetImageMemoryRequirements(device, image, pMemoryRequirements);
    }
    void GetImageSparseMemoryRequirements(
        VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) {
        pfn_GetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
    VkResult QueueBindSparse(
        VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) {
        return pfn_QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
    }
    VkResult CreateFence(
        const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
        return pfn_CreateFence(device, pCreateInfo, pAllocator, pFence);
    }
    void DestroyFence(
        VkFence fence, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyFence(device, fence, pAllocator);
    }
    VkResult ResetFences(
        uint32_t fenceCount, const VkFence* pFences) {
        return pfn_ResetFences(device, fenceCount, pFences);
    }
    VkResult GetFenceStatus(
        VkFence fence) {
        return pfn_GetFenceStatus(device, fence);
    }
    VkResult WaitForFences(
        uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) {
        return pfn_WaitForFences(device, fenceCount, pFences, waitAll, timeout);
    }
    VkResult CreateSemaphore(
        const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) {
        return pfn_CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
    }
    void DestroySemaphore(
        VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySemaphore(device, semaphore, pAllocator);
    }
    VkResult CreateEvent(
        const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) {
        return pfn_CreateEvent(device, pCreateInfo, pAllocator, pEvent);
    }
    void DestroyEvent(
        VkEvent event, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyEvent(device, event, pAllocator);
    }
    VkResult GetEventStatus(
        VkEvent event) {
        return pfn_GetEventStatus(device, event);
    }
    VkResult SetEvent(
        VkEvent event) {
        return pfn_SetEvent(device, event);
    }
    VkResult ResetEvent(
        VkEvent event) {
        return pfn_ResetEvent(device, event);
    }
    VkResult CreateQueryPool(
        const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) {
        return pfn_CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
    }
    void DestroyQueryPool(
        VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyQueryPool(device, queryPool, pAllocator);
    }
    VkResult GetQueryPoolResults(
        VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) {
        return pfn_GetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
    }
    VkResult CreateBuffer(
        const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) {
        return pfn_CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
    }
    void DestroyBuffer(
        VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyBuffer(device, buffer, pAllocator);
    }
    VkResult CreateBufferView(
        const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) {
        return pfn_CreateBufferView(device, pCreateInfo, pAllocator, pView);
    }
    void DestroyBufferView(
        VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyBufferView(device, bufferView, pAllocator);
    }
    VkResult CreateImage(
        const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) {
        return pfn_CreateImage(device, pCreateInfo, pAllocator, pImage);
    }
    void DestroyImage(
        VkImage image, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyImage(device, image, pAllocator);
    }
    void GetImageSubresourceLayout(
        VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) {
        pfn_GetImageSubresourceLayout(device, image, pSubresource, pLayout);
    }
    VkResult CreateImageView(
        const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) {
        return pfn_CreateImageView(device, pCreateInfo, pAllocator, pView);
    }
    void DestroyImageView(
        VkImageView imageView, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyImageView(device, imageView, pAllocator);
    }
    VkResult CreateShaderModule(
        const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) {
        return pfn_CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
    }
    void DestroyShaderModule(
        VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyShaderModule(device, shaderModule, pAllocator);
    }
    VkResult CreatePipelineCache(
        const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) {
        return pfn_CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
    }
    void DestroyPipelineCache(
        VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyPipelineCache(device, pipelineCache, pAllocator);
    }
    VkResult GetPipelineCacheData(
        VkPipelineCache pipelineCache, size_t* pDataSize, void* pData) {
        return pfn_GetPipelineCacheData(device, pipelineCache, pDataSize, pData);
    }
    VkResult MergePipelineCaches(
        VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches) {
        return pfn_MergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
    }
    VkResult CreateGraphicsPipelines(
        VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
        return pfn_CreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    }
    VkResult CreateComputePipelines(
        VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
        return pfn_CreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    }
    void DestroyPipeline(
        VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyPipeline(device, pipeline, pAllocator);
    }
    VkResult CreatePipelineLayout(
        const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) {
        return pfn_CreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
    }
    void DestroyPipelineLayout(
        VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyPipelineLayout(device, pipelineLayout, pAllocator);
    }
    VkResult CreateSampler(
        const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) {
        return pfn_CreateSampler(device, pCreateInfo, pAllocator, pSampler);
    }
    void DestroySampler(
        VkSampler sampler, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySampler(device, sampler, pAllocator);
    }
    VkResult CreateDescriptorSetLayout(
        const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) {
        return pfn_CreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
    }
    void DestroyDescriptorSetLayout(
        VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
    }
    VkResult CreateDescriptorPool(
        const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) {
        return pfn_CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
    }
    void DestroyDescriptorPool(
        VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDescriptorPool(device, descriptorPool, pAllocator);
    }
    VkResult ResetDescriptorPool(
        VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
        return pfn_ResetDescriptorPool(device, descriptorPool, flags);
    }
    VkResult AllocateDescriptorSets(
        const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) {
        return pfn_AllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
    }
    VkResult FreeDescriptorSets(
        VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets) {
        return pfn_FreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
    }
    void UpdateDescriptorSets(
        uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) {
        pfn_UpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
    }
    VkResult CreateFramebuffer(
        const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) {
        return pfn_CreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
    }
    void DestroyFramebuffer(
        VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyFramebuffer(device, framebuffer, pAllocator);
    }
    VkResult CreateRenderPass(
        const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
        return pfn_CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
    }
    void DestroyRenderPass(
        VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyRenderPass(device, renderPass, pAllocator);
    }
    void GetRenderAreaGranularity(
        VkRenderPass renderPass, VkExtent2D* pGranularity) {
        pfn_GetRenderAreaGranularity(device, renderPass, pGranularity);
    }
    VkResult CreateCommandPool(
        const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) {
        return pfn_CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
    }
    void DestroyCommandPool(
        VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyCommandPool(device, commandPool, pAllocator);
    }
    VkResult ResetCommandPool(
        VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
        return pfn_ResetCommandPool(device, commandPool, flags);
    }
    VkResult AllocateCommandBuffers(
        const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) {
        return pfn_AllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
    }
    void FreeCommandBuffers(
        VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
        pfn_FreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
    }
    VkResult BeginCommandBuffer(
        VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) {
        return pfn_BeginCommandBuffer(commandBuffer, pBeginInfo);
    }
    VkResult EndCommandBuffer(
        VkCommandBuffer commandBuffer) {
        return pfn_EndCommandBuffer(commandBuffer);
    }
    VkResult ResetCommandBuffer(
        VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) {
        return pfn_ResetCommandBuffer(commandBuffer, flags);
    }
    void CmdBindPipeline(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
        pfn_CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
    }
    void CmdSetViewport(
        VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
    }
    void CmdSetScissor(
        VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
    }
    void CmdSetLineWidth(
        VkCommandBuffer commandBuffer, float lineWidth) {
        pfn_CmdSetLineWidth(commandBuffer, lineWidth);
    }
    void CmdSetDepthBias(
        VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
        pfn_CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    }
    void CmdSetBlendConstants(
        VkCommandBuffer commandBuffer, const float blendConstants[4]) {
        pfn_CmdSetBlendConstants(commandBuffer, blendConstants);
    }
    void CmdSetDepthBounds(
        VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) {
        pfn_CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
    }
    void CmdSetStencilCompareMask(
        VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) {
        pfn_CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
    }
    void CmdSetStencilWriteMask(
        VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) {
        pfn_CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
    }
    void CmdSetStencilReference(
        VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) {
        pfn_CmdSetStencilReference(commandBuffer, faceMask, reference);
    }
    void CmdBindDescriptorSets(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) {
        pfn_CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    }
    void CmdBindIndexBuffer(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
        pfn_CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
    }
    void CmdBindVertexBuffers(
        VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) {
        pfn_CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
    }
    void CmdDraw(
        VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
        pfn_CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
    }
    void CmdDrawIndexed(
        VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
        pfn_CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    }
    void CmdDrawIndirect(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawIndexedIndirect(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDispatch(
        VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDispatchIndirect(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
        pfn_CmdDispatchIndirect(commandBuffer, buffer, offset);
    }
    void CmdCopyBuffer(
        VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) {
        pfn_CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
    }
    void CmdCopyImage(
        VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) {
        pfn_CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdBlitImage(
        VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) {
        pfn_CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    }
    void CmdCopyBufferToImage(
        VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) {
        pfn_CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdCopyImageToBuffer(
        VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) {
        pfn_CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    }
    void CmdUpdateBuffer(
        VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) {
        pfn_CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
    }
    void CmdFillBuffer(
        VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
        pfn_CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
    }
    void CmdClearColorImage(
        VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
        pfn_CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
    }
    void CmdClearDepthStencilImage(
        VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
        pfn_CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
    }
    void CmdClearAttachments(
        VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) {
        pfn_CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
    }
    void CmdResolveImage(
        VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) {
        pfn_CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdSetEvent(
        VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
        pfn_CmdSetEvent(commandBuffer, event, stageMask);
    }
    void CmdResetEvent(
        VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
        pfn_CmdResetEvent(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents(
        VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) {
        pfn_CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
    void CmdPipelineBarrier(
        VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) {
        pfn_CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
    void CmdBeginQuery(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
        pfn_CmdBeginQuery(commandBuffer, queryPool, query, flags);
    }
    void CmdEndQuery(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdEndQuery(commandBuffer, queryPool, query);
    }
    void CmdResetQueryPool(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
        pfn_CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
    }
    void CmdWriteTimestamp(
        VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
    }
    void CmdCopyQueryPoolResults(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
        pfn_CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    }
    void CmdPushConstants(
        VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) {
        pfn_CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
    }
    void CmdBeginRenderPass(
        VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) {
        pfn_CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
    }
    void CmdNextSubpass(
        VkCommandBuffer commandBuffer, VkSubpassContents contents) {
        pfn_CmdNextSubpass(commandBuffer, contents);
    }
    void CmdEndRenderPass(
        VkCommandBuffer commandBuffer) {
        pfn_CmdEndRenderPass(commandBuffer);
    }
    void CmdExecuteCommands(
        VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
        pfn_CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
    }
    VkResult BindBufferMemory2(
        uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) {
        return pfn_BindBufferMemory2(device, bindInfoCount, pBindInfos);
    }
    VkResult BindImageMemory2(
        uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) {
        return pfn_BindImageMemory2(device, bindInfoCount, pBindInfos);
    }
    void GetDeviceGroupPeerMemoryFeatures(
        uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
        pfn_GetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    }
    void CmdSetDeviceMask(
        VkCommandBuffer commandBuffer, uint32_t deviceMask) {
        pfn_CmdSetDeviceMask(commandBuffer, deviceMask);
    }
    void CmdDispatchBase(
        VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    }
    void GetImageMemoryRequirements2(
        const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
    }
    void GetBufferMemoryRequirements2(
        const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
    }
    void GetImageSparseMemoryRequirements2(
        const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
        pfn_GetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
    void TrimCommandPool(
        VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
        pfn_TrimCommandPool(device, commandPool, flags);
    }
    void GetDeviceQueue2(
        const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
        pfn_GetDeviceQueue2(device, pQueueInfo, pQueue);
    }
    VkResult CreateSamplerYcbcrConversion(
        const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
        return pfn_CreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
    }
    void DestroySamplerYcbcrConversion(
        VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
    }
    VkResult CreateDescriptorUpdateTemplate(
        const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
        return pfn_CreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    }
    void DestroyDescriptorUpdateTemplate(
        VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
    }
    void UpdateDescriptorSetWithTemplate(
        VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) {
        pfn_UpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
    }
    void GetDescriptorSetLayoutSupport(
        const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) {
        pfn_GetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
    }
    void CmdDrawIndirectCount(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCount(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    VkResult CreateRenderPass2(
        const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
        return pfn_CreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
    }
    void CmdBeginRenderPass2(
        VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
        pfn_CmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    }
    void CmdNextSubpass2(
        VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    }
    void CmdEndRenderPass2(
        VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
    }
    void ResetQueryPool(
        VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
        pfn_ResetQueryPool(device, queryPool, firstQuery, queryCount);
    }
    VkResult GetSemaphoreCounterValue(
        VkSemaphore semaphore, uint64_t* pValue) {
        return pfn_GetSemaphoreCounterValue(device, semaphore, pValue);
    }
    VkResult WaitSemaphores(
        const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
        return pfn_WaitSemaphores(device, pWaitInfo, timeout);
    }
    VkResult SignalSemaphore(
        const VkSemaphoreSignalInfo* pSignalInfo) {
        return pfn_SignalSemaphore(device, pSignalInfo);
    }
    VkDeviceAddress GetBufferDeviceAddress(
        const VkBufferDeviceAddressInfo* pInfo) {
        return pfn_GetBufferDeviceAddress(device, pInfo);
    }
    uint64_t GetBufferOpaqueCaptureAddress(
        const VkBufferDeviceAddressInfo* pInfo) {
        return pfn_GetBufferOpaqueCaptureAddress(device, pInfo);
    }
    uint64_t GetDeviceMemoryOpaqueCaptureAddress(
        const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
        return pfn_GetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
    }
    VkResult CreatePrivateDataSlot(
        const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot) {
        return pfn_CreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
    }
    void DestroyPrivateDataSlot(
        VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
    }
    VkResult SetPrivateData(
        VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
        return pfn_SetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
    }
    void GetPrivateData(
        VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t* pData) {
        pfn_GetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
    }
    void CmdSetEvent2(
        VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdSetEvent2(commandBuffer, event, pDependencyInfo);
    }
    void CmdResetEvent2(
        VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
        pfn_CmdResetEvent2(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents2(
        VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
        pfn_CmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
    }
    void CmdPipelineBarrier2(
        VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdPipelineBarrier2(commandBuffer, pDependencyInfo);
    }
    void CmdWriteTimestamp2(
        VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
    }
    VkResult QueueSubmit2(
        VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
        return pfn_QueueSubmit2(queue, submitCount, pSubmits, fence);
    }
    void CmdCopyBuffer2(
        VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo) {
        pfn_CmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
    }
    void CmdCopyImage2(
        VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo) {
        pfn_CmdCopyImage2(commandBuffer, pCopyImageInfo);
    }
    void CmdCopyBufferToImage2(
        VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
        pfn_CmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
    }
    void CmdCopyImageToBuffer2(
        VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
        pfn_CmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
    }
    void CmdBlitImage2(
        VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo) {
        pfn_CmdBlitImage2(commandBuffer, pBlitImageInfo);
    }
    void CmdResolveImage2(
        VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo) {
        pfn_CmdResolveImage2(commandBuffer, pResolveImageInfo);
    }
    void CmdBeginRendering(
        VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo) {
        pfn_CmdBeginRendering(commandBuffer, pRenderingInfo);
    }
    void CmdEndRendering(
        VkCommandBuffer commandBuffer) {
        pfn_CmdEndRendering(commandBuffer);
    }
    void CmdSetCullMode(
        VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
        pfn_CmdSetCullMode(commandBuffer, cullMode);
    }
    void CmdSetFrontFace(
        VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
        pfn_CmdSetFrontFace(commandBuffer, frontFace);
    }
    void CmdSetPrimitiveTopology(
        VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
        pfn_CmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
    }
    void CmdSetViewportWithCount(
        VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
    }
    void CmdSetScissorWithCount(
        VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
    }
    void CmdBindVertexBuffers2(
        VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
        pfn_CmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    }
    void CmdSetDepthTestEnable(
        VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
        pfn_CmdSetDepthTestEnable(commandBuffer, depthTestEnable);
    }
    void CmdSetDepthWriteEnable(
        VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
        pfn_CmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
    }
    void CmdSetDepthCompareOp(
        VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
        pfn_CmdSetDepthCompareOp(commandBuffer, depthCompareOp);
    }
    void CmdSetDepthBoundsTestEnable(
        VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
        pfn_CmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
    }
    void CmdSetStencilTestEnable(
        VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
        pfn_CmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
    }
    void CmdSetStencilOp(
        VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
        pfn_CmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    }
    void CmdSetRasterizerDiscardEnable(
        VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
        pfn_CmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
    }
    void CmdSetDepthBiasEnable(
        VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
        pfn_CmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
    }
    void CmdSetPrimitiveRestartEnable(
        VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
        pfn_CmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
    }
    void GetDeviceBufferMemoryRequirements(
        const VkDeviceBufferMemoryRequirements* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
    }
    void GetDeviceImageMemoryRequirements(
        const VkDeviceImageMemoryRequirements* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
    }
    void GetDeviceImageSparseMemoryRequirements(
        const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
        pfn_GetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
    VkResult CreateSwapchainKHR(
        const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) {
        return pfn_CreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
    }
    void DestroySwapchainKHR(
        VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySwapchainKHR(device, swapchain, pAllocator);
    }
    VkResult GetSwapchainImagesKHR(
        VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) {
        return pfn_GetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
    }
    VkResult AcquireNextImageKHR(
        VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) {
        return pfn_AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
    }
    VkResult QueuePresentKHR(
        VkQueue queue, const VkPresentInfoKHR* pPresentInfo) {
        return pfn_QueuePresentKHR(queue, pPresentInfo);
    }
    VkResult GetDeviceGroupPresentCapabilitiesKHR(
        VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) {
        return pfn_GetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
    }
    VkResult GetDeviceGroupSurfacePresentModesKHR(
        VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) {
        return pfn_GetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
    }
    VkResult AcquireNextImage2KHR(
        const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) {
        return pfn_AcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
    }
    VkResult CreateSharedSwapchainsKHR(
        uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
        return pfn_CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    }
    VkResult CreateVideoSessionKHR(
        const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession) {
        return pfn_CreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
    }
    void DestroyVideoSessionKHR(
        VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyVideoSessionKHR(device, videoSession, pAllocator);
    }
    VkResult GetVideoSessionMemoryRequirementsKHR(
        VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements) {
        return pfn_GetVideoSessionMemoryRequirementsKHR(device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
    }
    VkResult BindVideoSessionMemoryKHR(
        VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount, const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos) {
        return pfn_BindVideoSessionMemoryKHR(device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
    }
    VkResult CreateVideoSessionParametersKHR(
        const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR* pVideoSessionParameters) {
        return pfn_CreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
    }
    VkResult UpdateVideoSessionParametersKHR(
        VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo) {
        return pfn_UpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
    }
    void DestroyVideoSessionParametersKHR(
        VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
    }
    void CmdBeginVideoCodingKHR(
        VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo) {
        pfn_CmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
    }
    void CmdEndVideoCodingKHR(
        VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo) {
        pfn_CmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
    }
    void CmdControlVideoCodingKHR(
        VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo) {
        pfn_CmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
    }
    void CmdDecodeVideoKHR(
        VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo) {
        pfn_CmdDecodeVideoKHR(commandBuffer, pDecodeInfo);
    }
    void CmdBeginRenderingKHR(
        VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo) {
        pfn_CmdBeginRenderingKHR(commandBuffer, pRenderingInfo);
    }
    void CmdEndRenderingKHR(
        VkCommandBuffer commandBuffer) {
        pfn_CmdEndRenderingKHR(commandBuffer);
    }
    void GetDeviceGroupPeerMemoryFeaturesKHR(
        uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
        pfn_GetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    }
    void CmdSetDeviceMaskKHR(
        VkCommandBuffer commandBuffer, uint32_t deviceMask) {
        pfn_CmdSetDeviceMaskKHR(commandBuffer, deviceMask);
    }
    void CmdDispatchBaseKHR(
        VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    }
    void TrimCommandPoolKHR(
        VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
        pfn_TrimCommandPoolKHR(device, commandPool, flags);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult GetMemoryWin32HandleKHR(
        const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
        return pfn_GetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    }
    VkResult GetMemoryWin32HandlePropertiesKHR(
        VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) {
        return pfn_GetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult GetMemoryFdKHR(
        const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) {
        return pfn_GetMemoryFdKHR(device, pGetFdInfo, pFd);
    }
    VkResult GetMemoryFdPropertiesKHR(
        VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) {
        return pfn_GetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult ImportSemaphoreWin32HandleKHR(
        const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) {
        return pfn_ImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
    }
    VkResult GetSemaphoreWin32HandleKHR(
        const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
        return pfn_GetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult ImportSemaphoreFdKHR(
        const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) {
        return pfn_ImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
    }
    VkResult GetSemaphoreFdKHR(
        const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) {
        return pfn_GetSemaphoreFdKHR(device, pGetFdInfo, pFd);
    }
    void CmdPushDescriptorSetKHR(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) {
        pfn_CmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    }
    void CmdPushDescriptorSetWithTemplateKHR(
        VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) {
        pfn_CmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
    }
    VkResult CreateDescriptorUpdateTemplateKHR(
        const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
        return pfn_CreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    }
    void DestroyDescriptorUpdateTemplateKHR(
        VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
    }
    void UpdateDescriptorSetWithTemplateKHR(
        VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) {
        pfn_UpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
    }
    VkResult CreateRenderPass2KHR(
        const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
        return pfn_CreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
    }
    void CmdBeginRenderPass2KHR(
        VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
        pfn_CmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    }
    void CmdNextSubpass2KHR(
        VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    }
    void CmdEndRenderPass2KHR(
        VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
    }
    VkResult GetSwapchainStatusKHR(
        VkSwapchainKHR swapchain) {
        return pfn_GetSwapchainStatusKHR(device, swapchain);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult ImportFenceWin32HandleKHR(
        const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) {
        return pfn_ImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
    }
    VkResult GetFenceWin32HandleKHR(
        const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
        return pfn_GetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult ImportFenceFdKHR(
        const VkImportFenceFdInfoKHR* pImportFenceFdInfo) {
        return pfn_ImportFenceFdKHR(device, pImportFenceFdInfo);
    }
    VkResult GetFenceFdKHR(
        const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) {
        return pfn_GetFenceFdKHR(device, pGetFdInfo, pFd);
    }
    VkResult AcquireProfilingLockKHR(
        const VkAcquireProfilingLockInfoKHR* pInfo) {
        return pfn_AcquireProfilingLockKHR(device, pInfo);
    }
    void ReleaseProfilingLockKHR(
       ) {
        pfn_ReleaseProfilingLockKHR(device);
    }
    void GetImageMemoryRequirements2KHR(
        const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
    }
    void GetBufferMemoryRequirements2KHR(
        const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
    }
    void GetImageSparseMemoryRequirements2KHR(
        const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
        pfn_GetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
    VkResult CreateSamplerYcbcrConversionKHR(
        const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
        return pfn_CreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
    }
    void DestroySamplerYcbcrConversionKHR(
        VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
    }
    VkResult BindBufferMemory2KHR(
        uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) {
        return pfn_BindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
    }
    VkResult BindImageMemory2KHR(
        uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) {
        return pfn_BindImageMemory2KHR(device, bindInfoCount, pBindInfos);
    }
    void GetDescriptorSetLayoutSupportKHR(
        const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) {
        pfn_GetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
    }
    void CmdDrawIndirectCountKHR(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCountKHR(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    VkResult GetSemaphoreCounterValueKHR(
        VkSemaphore semaphore, uint64_t* pValue) {
        return pfn_GetSemaphoreCounterValueKHR(device, semaphore, pValue);
    }
    VkResult WaitSemaphoresKHR(
        const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
        return pfn_WaitSemaphoresKHR(device, pWaitInfo, timeout);
    }
    VkResult SignalSemaphoreKHR(
        const VkSemaphoreSignalInfo* pSignalInfo) {
        return pfn_SignalSemaphoreKHR(device, pSignalInfo);
    }
    void CmdSetFragmentShadingRateKHR(
        VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
        pfn_CmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
    }
    VkResult WaitForPresentKHR(
        VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) {
        return pfn_WaitForPresentKHR(device, swapchain, presentId, timeout);
    }
    VkDeviceAddress GetBufferDeviceAddressKHR(
        const VkBufferDeviceAddressInfo* pInfo) {
        return pfn_GetBufferDeviceAddressKHR(device, pInfo);
    }
    uint64_t GetBufferOpaqueCaptureAddressKHR(
        const VkBufferDeviceAddressInfo* pInfo) {
        return pfn_GetBufferOpaqueCaptureAddressKHR(device, pInfo);
    }
    uint64_t GetDeviceMemoryOpaqueCaptureAddressKHR(
        const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
        return pfn_GetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
    }
    VkResult CreateDeferredOperationKHR(
        const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) {
        return pfn_CreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
    }
    void DestroyDeferredOperationKHR(
        VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyDeferredOperationKHR(device, operation, pAllocator);
    }
    uint32_t GetDeferredOperationMaxConcurrencyKHR(
        VkDeferredOperationKHR operation) {
        return pfn_GetDeferredOperationMaxConcurrencyKHR(device, operation);
    }
    VkResult GetDeferredOperationResultKHR(
        VkDeferredOperationKHR operation) {
        return pfn_GetDeferredOperationResultKHR(device, operation);
    }
    VkResult DeferredOperationJoinKHR(
        VkDeferredOperationKHR operation) {
        return pfn_DeferredOperationJoinKHR(device, operation);
    }
    VkResult GetPipelineExecutablePropertiesKHR(
        const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties) {
        return pfn_GetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
    }
    VkResult GetPipelineExecutableStatisticsKHR(
        const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics) {
        return pfn_GetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
    }
    VkResult GetPipelineExecutableInternalRepresentationsKHR(
        const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) {
        return pfn_GetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
    }
    VkResult MapMemory2KHR(
        const VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData) {
        return pfn_MapMemory2KHR(device, pMemoryMapInfo, ppData);
    }
    VkResult UnmapMemory2KHR(
        const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo) {
        return pfn_UnmapMemory2KHR(device, pMemoryUnmapInfo);
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VkResult GetEncodedVideoSessionParametersKHR(
        const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo, VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo, size_t* pDataSize, void* pData) {
        return pfn_GetEncodedVideoSessionParametersKHR(device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
    }
    void CmdEncodeVideoKHR(
        VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo) {
        pfn_CmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdSetEvent2KHR(
        VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
    }
    void CmdResetEvent2KHR(
        VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
        pfn_CmdResetEvent2KHR(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents2KHR(
        VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
        pfn_CmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
    }
    void CmdPipelineBarrier2KHR(
        VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
    }
    void CmdWriteTimestamp2KHR(
        VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
    }
    VkResult QueueSubmit2KHR(
        VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
        return pfn_QueueSubmit2KHR(queue, submitCount, pSubmits, fence);
    }
    void CmdWriteBufferMarker2AMD(
        VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
        pfn_CmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
    }
    void GetQueueCheckpointData2NV(
        VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) {
        pfn_GetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
    }
    void CmdCopyBuffer2KHR(
        VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo) {
        pfn_CmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
    }
    void CmdCopyImage2KHR(
        VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo) {
        pfn_CmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
    }
    void CmdCopyBufferToImage2KHR(
        VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
        pfn_CmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
    }
    void CmdCopyImageToBuffer2KHR(
        VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
        pfn_CmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
    }
    void CmdBlitImage2KHR(
        VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo) {
        pfn_CmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
    }
    void CmdResolveImage2KHR(
        VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo) {
        pfn_CmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
    }
    void CmdTraceRaysIndirect2KHR(
        VkCommandBuffer commandBuffer, VkDeviceAddress indirectDeviceAddress) {
        pfn_CmdTraceRaysIndirect2KHR(commandBuffer, indirectDeviceAddress);
    }
    void GetDeviceBufferMemoryRequirementsKHR(
        const VkDeviceBufferMemoryRequirements* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetDeviceBufferMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
    }
    void GetDeviceImageMemoryRequirementsKHR(
        const VkDeviceImageMemoryRequirements* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetDeviceImageMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
    }
    void GetDeviceImageSparseMemoryRequirementsKHR(
        const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
        pfn_GetDeviceImageSparseMemoryRequirementsKHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    }
    void CmdBindIndexBuffer2KHR(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType) {
        pfn_CmdBindIndexBuffer2KHR(commandBuffer, buffer, offset, size, indexType);
    }
    void GetRenderingAreaGranularityKHR(
        const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D* pGranularity) {
        pfn_GetRenderingAreaGranularityKHR(device, pRenderingAreaInfo, pGranularity);
    }
    void GetDeviceImageSubresourceLayoutKHR(
        const VkDeviceImageSubresourceInfoKHR* pInfo, VkSubresourceLayout2KHR* pLayout) {
        pfn_GetDeviceImageSubresourceLayoutKHR(device, pInfo, pLayout);
    }
    void GetImageSubresourceLayout2KHR(
        VkImage image, const VkImageSubresource2KHR* pSubresource, VkSubresourceLayout2KHR* pLayout) {
        pfn_GetImageSubresourceLayout2KHR(device, image, pSubresource, pLayout);
    }
    VkResult DebugMarkerSetObjectTagEXT(
        const VkDebugMarkerObjectTagInfoEXT* pTagInfo) {
        return pfn_DebugMarkerSetObjectTagEXT(device, pTagInfo);
    }
    VkResult DebugMarkerSetObjectNameEXT(
        const VkDebugMarkerObjectNameInfoEXT* pNameInfo) {
        return pfn_DebugMarkerSetObjectNameEXT(device, pNameInfo);
    }
    void CmdDebugMarkerBeginEXT(
        VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
        pfn_CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
    }
    void CmdDebugMarkerEndEXT(
        VkCommandBuffer commandBuffer) {
        pfn_CmdDebugMarkerEndEXT(commandBuffer);
    }
    void CmdDebugMarkerInsertEXT(
        VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
        pfn_CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
    }
    void CmdBindTransformFeedbackBuffersEXT(
        VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) {
        pfn_CmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
    }
    void CmdBeginTransformFeedbackEXT(
        VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
        pfn_CmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    }
    void CmdEndTransformFeedbackEXT(
        VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
        pfn_CmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    }
    void CmdBeginQueryIndexedEXT(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
        pfn_CmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
    }
    void CmdEndQueryIndexedEXT(
        VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) {
        pfn_CmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
    }
    void CmdDrawIndirectByteCountEXT(
        VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
        pfn_CmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
    }
    VkResult CreateCuModuleNVX(
        const VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule) {
        return pfn_CreateCuModuleNVX(device, pCreateInfo, pAllocator, pModule);
    }
    VkResult CreateCuFunctionNVX(
        const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuFunctionNVX* pFunction) {
        return pfn_CreateCuFunctionNVX(device, pCreateInfo, pAllocator, pFunction);
    }
    void DestroyCuModuleNVX(
        VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyCuModuleNVX(device, module, pAllocator);
    }
    void DestroyCuFunctionNVX(
        VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyCuFunctionNVX(device, function, pAllocator);
    }
    void CmdCuLaunchKernelNVX(
        VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo) {
        pfn_CmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
    }
    uint32_t GetImageViewHandleNVX(
        const VkImageViewHandleInfoNVX* pInfo) {
        return pfn_GetImageViewHandleNVX(device, pInfo);
    }
    VkResult GetImageViewAddressNVX(
        VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) {
        return pfn_GetImageViewAddressNVX(device, imageView, pProperties);
    }
    void CmdDrawIndirectCountAMD(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCountAMD(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    VkResult GetShaderInfoAMD(
        VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo) {
        return pfn_GetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult GetMemoryWin32HandleNV(
        VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) {
        return pfn_GetMemoryWin32HandleNV(device, memory, handleType, pHandle);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    void CmdBeginConditionalRenderingEXT(
        VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) {
        pfn_CmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
    }
    void CmdEndConditionalRenderingEXT(
        VkCommandBuffer commandBuffer) {
        pfn_CmdEndConditionalRenderingEXT(commandBuffer);
    }
    void CmdSetViewportWScalingNV(
        VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) {
        pfn_CmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
    }
    VkResult DisplayPowerControlEXT(
        VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) {
        return pfn_DisplayPowerControlEXT(device, display, pDisplayPowerInfo);
    }
    VkResult RegisterDeviceEventEXT(
        const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
        return pfn_RegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
    }
    VkResult RegisterDisplayEventEXT(
        VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
        return pfn_RegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
    }
    VkResult GetSwapchainCounterEXT(
        VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) {
        return pfn_GetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
    }
    VkResult GetRefreshCycleDurationGOOGLE(
        VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) {
        return pfn_GetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
    }
    VkResult GetPastPresentationTimingGOOGLE(
        VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) {
        return pfn_GetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
    }
    void CmdSetDiscardRectangleEXT(
        VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) {
        pfn_CmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    }
    void CmdSetDiscardRectangleEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable) {
        pfn_CmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
    }
    void CmdSetDiscardRectangleModeEXT(
        VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode) {
        pfn_CmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
    }
    void SetHdrMetadataEXT(
        uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) {
        pfn_SetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
    }
    VkResult SetDebugUtilsObjectNameEXT(
        const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
        return pfn_SetDebugUtilsObjectNameEXT(device, pNameInfo);
    }
    VkResult SetDebugUtilsObjectTagEXT(
        const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
        return pfn_SetDebugUtilsObjectTagEXT(device, pTagInfo);
    }
    void QueueBeginDebugUtilsLabelEXT(
        VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_QueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
    }
    void QueueEndDebugUtilsLabelEXT(
        VkQueue queue) {
        pfn_QueueEndDebugUtilsLabelEXT(queue);
    }
    void QueueInsertDebugUtilsLabelEXT(
        VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_QueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
    }
    void CmdBeginDebugUtilsLabelEXT(
        VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_CmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    }
    void CmdEndDebugUtilsLabelEXT(
        VkCommandBuffer commandBuffer) {
        pfn_CmdEndDebugUtilsLabelEXT(commandBuffer);
    }
    void CmdInsertDebugUtilsLabelEXT(
        VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_CmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VkResult GetAndroidHardwareBufferPropertiesANDROID(
        const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) {
        return pfn_GetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
    }
    VkResult GetMemoryAndroidHardwareBufferANDROID(
        const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) {
        return pfn_GetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
    }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VkResult CreateExecutionGraphPipelinesAMDX(
        VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
        return pfn_CreateExecutionGraphPipelinesAMDX(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    }
    VkResult GetExecutionGraphPipelineScratchSizeAMDX(
        VkPipeline executionGraph, VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo) {
        return pfn_GetExecutionGraphPipelineScratchSizeAMDX(device, executionGraph, pSizeInfo);
    }
    VkResult GetExecutionGraphPipelineNodeIndexAMDX(
        VkPipeline executionGraph, const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex) {
        return pfn_GetExecutionGraphPipelineNodeIndexAMDX(device, executionGraph, pNodeInfo, pNodeIndex);
    }
    void CmdInitializeGraphScratchMemoryAMDX(
        VkCommandBuffer commandBuffer, VkDeviceAddress scratch) {
        pfn_CmdInitializeGraphScratchMemoryAMDX(commandBuffer, scratch);
    }
    void CmdDispatchGraphAMDX(
        VkCommandBuffer commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX* pCountInfo) {
        pfn_CmdDispatchGraphAMDX(commandBuffer, scratch, pCountInfo);
    }
    void CmdDispatchGraphIndirectAMDX(
        VkCommandBuffer commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX* pCountInfo) {
        pfn_CmdDispatchGraphIndirectAMDX(commandBuffer, scratch, pCountInfo);
    }
    void CmdDispatchGraphIndirectCountAMDX(
        VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceAddress countInfo) {
        pfn_CmdDispatchGraphIndirectCountAMDX(commandBuffer, scratch, countInfo);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdSetSampleLocationsEXT(
        VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
        pfn_CmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
    }
    VkResult GetImageDrmFormatModifierPropertiesEXT(
        VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) {
        return pfn_GetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
    }
    VkResult CreateValidationCacheEXT(
        const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) {
        return pfn_CreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
    }
    void DestroyValidationCacheEXT(
        VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyValidationCacheEXT(device, validationCache, pAllocator);
    }
    VkResult MergeValidationCachesEXT(
        VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches) {
        return pfn_MergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
    }
    VkResult GetValidationCacheDataEXT(
        VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) {
        return pfn_GetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
    }
    void CmdBindShadingRateImageNV(
        VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
        pfn_CmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
    }
    void CmdSetViewportShadingRatePaletteNV(
        VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) {
        pfn_CmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
    }
    void CmdSetCoarseSampleOrderNV(
        VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) {
        pfn_CmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
    }
    VkResult CreateAccelerationStructureNV(
        const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure) {
        return pfn_CreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
    }
    void DestroyAccelerationStructureNV(
        VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
    }
    void GetAccelerationStructureMemoryRequirementsNV(
        const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) {
        pfn_GetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
    }
    VkResult BindAccelerationStructureMemoryNV(
        uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) {
        return pfn_BindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
    }
    void CmdBuildAccelerationStructureNV(
        VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
        pfn_CmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
    }
    void CmdCopyAccelerationStructureNV(
        VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
        pfn_CmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
    }
    void CmdTraceRaysNV(
        VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
        pfn_CmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
    }
    VkResult CreateRayTracingPipelinesNV(
        VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
        return pfn_CreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    }
    VkResult GetRayTracingShaderGroupHandlesKHR(
        VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
        return pfn_GetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
    }
    VkResult GetRayTracingShaderGroupHandlesNV(
        VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
        return pfn_GetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
    }
    VkResult GetAccelerationStructureHandleNV(
        VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) {
        return pfn_GetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
    }
    void CmdWriteAccelerationStructuresPropertiesNV(
        VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    }
    VkResult CompileDeferredNV(
        VkPipeline pipeline, uint32_t shader) {
        return pfn_CompileDeferredNV(device, pipeline, shader);
    }
    VkResult GetMemoryHostPointerPropertiesEXT(
        VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) {
        return pfn_GetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
    }
    void CmdWriteBufferMarkerAMD(
        VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
        pfn_CmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
    }
    VkResult GetCalibratedTimestampsEXT(
        uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
        return pfn_GetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    }
    void CmdDrawMeshTasksNV(
        VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) {
        pfn_CmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
    }
    void CmdDrawMeshTasksIndirectNV(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawMeshTasksIndirectCountNV(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdSetExclusiveScissorEnableNV(
        VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkBool32* pExclusiveScissorEnables) {
        pfn_CmdSetExclusiveScissorEnableNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
    }
    void CmdSetExclusiveScissorNV(
        VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) {
        pfn_CmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
    }
    void CmdSetCheckpointNV(
        VkCommandBuffer commandBuffer, const void* pCheckpointMarker) {
        pfn_CmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
    }
    void GetQueueCheckpointDataNV(
        VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) {
        pfn_GetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
    }
    VkResult InitializePerformanceApiINTEL(
        const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) {
        return pfn_InitializePerformanceApiINTEL(device, pInitializeInfo);
    }
    void UninitializePerformanceApiINTEL(
       ) {
        pfn_UninitializePerformanceApiINTEL(device);
    }
    VkResult CmdSetPerformanceMarkerINTEL(
        VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo) {
        return pfn_CmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
    }
    VkResult CmdSetPerformanceStreamMarkerINTEL(
        VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) {
        return pfn_CmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
    }
    VkResult CmdSetPerformanceOverrideINTEL(
        VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo) {
        return pfn_CmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
    }
    VkResult AcquirePerformanceConfigurationINTEL(
        const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration) {
        return pfn_AcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
    }
    VkResult ReleasePerformanceConfigurationINTEL(
        VkPerformanceConfigurationINTEL configuration) {
        return pfn_ReleasePerformanceConfigurationINTEL(device, configuration);
    }
    VkResult QueueSetPerformanceConfigurationINTEL(
        VkQueue queue, VkPerformanceConfigurationINTEL configuration) {
        return pfn_QueueSetPerformanceConfigurationINTEL(queue, configuration);
    }
    VkResult GetPerformanceParameterINTEL(
        VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) {
        return pfn_GetPerformanceParameterINTEL(device, parameter, pValue);
    }
    void SetLocalDimmingAMD(
        VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
        pfn_SetLocalDimmingAMD(device, swapChain, localDimmingEnable);
    }
    VkDeviceAddress GetBufferDeviceAddressEXT(
        const VkBufferDeviceAddressInfo* pInfo) {
        return pfn_GetBufferDeviceAddressEXT(device, pInfo);
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireFullScreenExclusiveModeEXT(
        VkSwapchainKHR swapchain) {
        return pfn_AcquireFullScreenExclusiveModeEXT(device, swapchain);
    }
    VkResult ReleaseFullScreenExclusiveModeEXT(
        VkSwapchainKHR swapchain) {
        return pfn_ReleaseFullScreenExclusiveModeEXT(device, swapchain);
    }
    VkResult GetDeviceGroupSurfacePresentModes2EXT(
        const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) {
        return pfn_GetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    void CmdSetLineStippleEXT(
        VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
        pfn_CmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
    }
    void ResetQueryPoolEXT(
        VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
        pfn_ResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
    }
    void CmdSetCullModeEXT(
        VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
        pfn_CmdSetCullModeEXT(commandBuffer, cullMode);
    }
    void CmdSetFrontFaceEXT(
        VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
        pfn_CmdSetFrontFaceEXT(commandBuffer, frontFace);
    }
    void CmdSetPrimitiveTopologyEXT(
        VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
        pfn_CmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
    }
    void CmdSetViewportWithCountEXT(
        VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
    }
    void CmdSetScissorWithCountEXT(
        VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
    }
    void CmdBindVertexBuffers2EXT(
        VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
        pfn_CmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    }
    void CmdSetDepthTestEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
        pfn_CmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
    }
    void CmdSetDepthWriteEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
        pfn_CmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
    }
    void CmdSetDepthCompareOpEXT(
        VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
        pfn_CmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
    }
    void CmdSetDepthBoundsTestEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
        pfn_CmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
    }
    void CmdSetStencilTestEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
        pfn_CmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
    }
    void CmdSetStencilOpEXT(
        VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
        pfn_CmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    }
    VkResult CopyMemoryToImageEXT(
        const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo) {
        return pfn_CopyMemoryToImageEXT(device, pCopyMemoryToImageInfo);
    }
    VkResult CopyImageToMemoryEXT(
        const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo) {
        return pfn_CopyImageToMemoryEXT(device, pCopyImageToMemoryInfo);
    }
    VkResult CopyImageToImageEXT(
        const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo) {
        return pfn_CopyImageToImageEXT(device, pCopyImageToImageInfo);
    }
    VkResult TransitionImageLayoutEXT(
        uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT* pTransitions) {
        return pfn_TransitionImageLayoutEXT(device, transitionCount, pTransitions);
    }
    void GetImageSubresourceLayout2EXT(
        VkImage image, const VkImageSubresource2KHR* pSubresource, VkSubresourceLayout2KHR* pLayout) {
        pfn_GetImageSubresourceLayout2EXT(device, image, pSubresource, pLayout);
    }
    VkResult ReleaseSwapchainImagesEXT(
        const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo) {
        return pfn_ReleaseSwapchainImagesEXT(device, pReleaseInfo);
    }
    void GetGeneratedCommandsMemoryRequirementsNV(
        const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
    }
    void CmdPreprocessGeneratedCommandsNV(
        VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
        pfn_CmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
    }
    void CmdExecuteGeneratedCommandsNV(
        VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
        pfn_CmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
    }
    void CmdBindPipelineShaderGroupNV(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
        pfn_CmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
    }
    VkResult CreateIndirectCommandsLayoutNV(
        const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) {
        return pfn_CreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    }
    void DestroyIndirectCommandsLayoutNV(
        VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
    }
    void CmdSetDepthBias2EXT(
        VkCommandBuffer commandBuffer, const VkDepthBiasInfoEXT* pDepthBiasInfo) {
        pfn_CmdSetDepthBias2EXT(commandBuffer, pDepthBiasInfo);
    }
    VkResult CreatePrivateDataSlotEXT(
        const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot) {
        return pfn_CreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
    }
    void DestroyPrivateDataSlotEXT(
        VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
    }
    VkResult SetPrivateDataEXT(
        VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
        return pfn_SetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
    }
    void GetPrivateDataEXT(
        VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t* pData) {
        pfn_GetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
    }
#ifdef VK_USE_PLATFORM_METAL_EXT
    void ExportMetalObjectsEXT(
        VkExportMetalObjectsInfoEXT* pMetalObjectsInfo) {
        pfn_ExportMetalObjectsEXT(device, pMetalObjectsInfo);
    }
#endif  // VK_USE_PLATFORM_METAL_EXT
    void GetDescriptorSetLayoutSizeEXT(
        VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes) {
        pfn_GetDescriptorSetLayoutSizeEXT(device, layout, pLayoutSizeInBytes);
    }
    void GetDescriptorSetLayoutBindingOffsetEXT(
        VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize* pOffset) {
        pfn_GetDescriptorSetLayoutBindingOffsetEXT(device, layout, binding, pOffset);
    }
    void GetDescriptorEXT(
        const VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize, void* pDescriptor) {
        pfn_GetDescriptorEXT(device, pDescriptorInfo, dataSize, pDescriptor);
    }
    void CmdBindDescriptorBuffersEXT(
        VkCommandBuffer commandBuffer, uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT* pBindingInfos) {
        pfn_CmdBindDescriptorBuffersEXT(commandBuffer, bufferCount, pBindingInfos);
    }
    void CmdSetDescriptorBufferOffsetsEXT(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const uint32_t* pBufferIndices, const VkDeviceSize* pOffsets) {
        pfn_CmdSetDescriptorBufferOffsetsEXT(commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
    }
    void CmdBindDescriptorBufferEmbeddedSamplersEXT(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set) {
        pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT(commandBuffer, pipelineBindPoint, layout, set);
    }
    VkResult GetBufferOpaqueCaptureDescriptorDataEXT(
        const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
        return pfn_GetBufferOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    }
    VkResult GetImageOpaqueCaptureDescriptorDataEXT(
        const VkImageCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
        return pfn_GetImageOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    }
    VkResult GetImageViewOpaqueCaptureDescriptorDataEXT(
        const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
        return pfn_GetImageViewOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    }
    VkResult GetSamplerOpaqueCaptureDescriptorDataEXT(
        const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
        return pfn_GetSamplerOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    }
    VkResult GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
        const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
        return pfn_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    }
    void CmdSetFragmentShadingRateEnumNV(
        VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
        pfn_CmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
    }
    VkResult GetDeviceFaultInfoEXT(
        VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo) {
        return pfn_GetDeviceFaultInfoEXT(device, pFaultCounts, pFaultInfo);
    }
    void CmdSetVertexInputEXT(
        VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
        pfn_CmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    }
#ifdef VK_USE_PLATFORM_FUCHSIA
    VkResult GetMemoryZirconHandleFUCHSIA(
        const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
        return pfn_GetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
    }
    VkResult GetMemoryZirconHandlePropertiesFUCHSIA(
        VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties) {
        return pfn_GetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
    }
    VkResult ImportSemaphoreZirconHandleFUCHSIA(
        const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo) {
        return pfn_ImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
    }
    VkResult GetSemaphoreZirconHandleFUCHSIA(
        const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
        return pfn_GetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
    }
    VkResult CreateBufferCollectionFUCHSIA(
        const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection) {
        return pfn_CreateBufferCollectionFUCHSIA(device, pCreateInfo, pAllocator, pCollection);
    }
    VkResult SetBufferCollectionImageConstraintsFUCHSIA(
        VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo) {
        return pfn_SetBufferCollectionImageConstraintsFUCHSIA(device, collection, pImageConstraintsInfo);
    }
    VkResult SetBufferCollectionBufferConstraintsFUCHSIA(
        VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo) {
        return pfn_SetBufferCollectionBufferConstraintsFUCHSIA(device, collection, pBufferConstraintsInfo);
    }
    void DestroyBufferCollectionFUCHSIA(
        VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyBufferCollectionFUCHSIA(device, collection, pAllocator);
    }
    VkResult GetBufferCollectionPropertiesFUCHSIA(
        VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA* pProperties) {
        return pfn_GetBufferCollectionPropertiesFUCHSIA(device, collection, pProperties);
    }
#endif  // VK_USE_PLATFORM_FUCHSIA
    VkResult GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(
        VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize) {
        return pfn_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(device, renderpass, pMaxWorkgroupSize);
    }
    void CmdSubpassShadingHUAWEI(
        VkCommandBuffer commandBuffer) {
        pfn_CmdSubpassShadingHUAWEI(commandBuffer);
    }
    void CmdBindInvocationMaskHUAWEI(
        VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
        pfn_CmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
    }
    VkResult GetMemoryRemoteAddressNV(
        const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo, VkRemoteAddressNV* pAddress) {
        return pfn_GetMemoryRemoteAddressNV(device, pMemoryGetRemoteAddressInfo, pAddress);
    }
    VkResult GetPipelinePropertiesEXT(
        const VkPipelineInfoEXT* pPipelineInfo, VkBaseOutStructure* pPipelineProperties) {
        return pfn_GetPipelinePropertiesEXT(device, pPipelineInfo, pPipelineProperties);
    }
    void CmdSetPatchControlPointsEXT(
        VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
        pfn_CmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
    }
    void CmdSetRasterizerDiscardEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
        pfn_CmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
    }
    void CmdSetDepthBiasEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
        pfn_CmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
    }
    void CmdSetLogicOpEXT(
        VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
        pfn_CmdSetLogicOpEXT(commandBuffer, logicOp);
    }
    void CmdSetPrimitiveRestartEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
        pfn_CmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
    }
    void CmdSetColorWriteEnableEXT(
        VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables) {
        pfn_CmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
    }
    void CmdDrawMultiEXT(
        VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) {
        pfn_CmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
    }
    void CmdDrawMultiIndexedEXT(
        VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset) {
        pfn_CmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
    }
    VkResult CreateMicromapEXT(
        const VkMicromapCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkMicromapEXT* pMicromap) {
        return pfn_CreateMicromapEXT(device, pCreateInfo, pAllocator, pMicromap);
    }
    void DestroyMicromapEXT(
        VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyMicromapEXT(device, micromap, pAllocator);
    }
    void CmdBuildMicromapsEXT(
        VkCommandBuffer commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos) {
        pfn_CmdBuildMicromapsEXT(commandBuffer, infoCount, pInfos);
    }
    VkResult BuildMicromapsEXT(
        VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos) {
        return pfn_BuildMicromapsEXT(device, deferredOperation, infoCount, pInfos);
    }
    VkResult CopyMicromapEXT(
        VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT* pInfo) {
        return pfn_CopyMicromapEXT(device, deferredOperation, pInfo);
    }
    VkResult CopyMicromapToMemoryEXT(
        VkDeferredOperationKHR deferredOperation, const VkCopyMicromapToMemoryInfoEXT* pInfo) {
        return pfn_CopyMicromapToMemoryEXT(device, deferredOperation, pInfo);
    }
    VkResult CopyMemoryToMicromapEXT(
        VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToMicromapInfoEXT* pInfo) {
        return pfn_CopyMemoryToMicromapEXT(device, deferredOperation, pInfo);
    }
    VkResult WriteMicromapsPropertiesEXT(
        uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType, size_t dataSize, void* pData, size_t stride) {
        return pfn_WriteMicromapsPropertiesEXT(device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
    }
    void CmdCopyMicromapEXT(
        VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT* pInfo) {
        pfn_CmdCopyMicromapEXT(commandBuffer, pInfo);
    }
    void CmdCopyMicromapToMemoryEXT(
        VkCommandBuffer commandBuffer, const VkCopyMicromapToMemoryInfoEXT* pInfo) {
        pfn_CmdCopyMicromapToMemoryEXT(commandBuffer, pInfo);
    }
    void CmdCopyMemoryToMicromapEXT(
        VkCommandBuffer commandBuffer, const VkCopyMemoryToMicromapInfoEXT* pInfo) {
        pfn_CmdCopyMemoryToMicromapEXT(commandBuffer, pInfo);
    }
    void CmdWriteMicromapsPropertiesEXT(
        VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteMicromapsPropertiesEXT(commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
    }
    void GetDeviceMicromapCompatibilityEXT(
        const VkMicromapVersionInfoEXT* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) {
        pfn_GetDeviceMicromapCompatibilityEXT(device, pVersionInfo, pCompatibility);
    }
    void GetMicromapBuildSizesEXT(
        VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT* pBuildInfo, VkMicromapBuildSizesInfoEXT* pSizeInfo) {
        pfn_GetMicromapBuildSizesEXT(device, buildType, pBuildInfo, pSizeInfo);
    }
    void CmdDrawClusterHUAWEI(
        VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDrawClusterHUAWEI(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDrawClusterIndirectHUAWEI(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
        pfn_CmdDrawClusterIndirectHUAWEI(commandBuffer, buffer, offset);
    }
    void SetDeviceMemoryPriorityEXT(
        VkDeviceMemory memory, float priority) {
        pfn_SetDeviceMemoryPriorityEXT(device, memory, priority);
    }
    void GetDescriptorSetLayoutHostMappingInfoVALVE(
        const VkDescriptorSetBindingReferenceVALVE* pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping) {
        pfn_GetDescriptorSetLayoutHostMappingInfoVALVE(device, pBindingReference, pHostMapping);
    }
    void GetDescriptorSetHostMappingVALVE(
        VkDescriptorSet descriptorSet, void** ppData) {
        pfn_GetDescriptorSetHostMappingVALVE(device, descriptorSet, ppData);
    }
    void CmdCopyMemoryIndirectNV(
        VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride) {
        pfn_CmdCopyMemoryIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride);
    }
    void CmdCopyMemoryToImageIndirectNV(
        VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout, const VkImageSubresourceLayers* pImageSubresources) {
        pfn_CmdCopyMemoryToImageIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
    }
    void CmdDecompressMemoryNV(
        VkCommandBuffer commandBuffer, uint32_t decompressRegionCount, const VkDecompressMemoryRegionNV* pDecompressMemoryRegions) {
        pfn_CmdDecompressMemoryNV(commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
    }
    void CmdDecompressMemoryIndirectCountNV(
        VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress, VkDeviceAddress indirectCommandsCountAddress, uint32_t stride) {
        pfn_CmdDecompressMemoryIndirectCountNV(commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
    }
    void GetPipelineIndirectMemoryRequirementsNV(
        const VkComputePipelineCreateInfo* pCreateInfo, VkMemoryRequirements2* pMemoryRequirements) {
        pfn_GetPipelineIndirectMemoryRequirementsNV(device, pCreateInfo, pMemoryRequirements);
    }
    void CmdUpdatePipelineIndirectBufferNV(
        VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
        pfn_CmdUpdatePipelineIndirectBufferNV(commandBuffer, pipelineBindPoint, pipeline);
    }
    VkDeviceAddress GetPipelineIndirectDeviceAddressNV(
        const VkPipelineIndirectDeviceAddressInfoNV* pInfo) {
        return pfn_GetPipelineIndirectDeviceAddressNV(device, pInfo);
    }
    void CmdSetTessellationDomainOriginEXT(
        VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin) {
        pfn_CmdSetTessellationDomainOriginEXT(commandBuffer, domainOrigin);
    }
    void CmdSetDepthClampEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthClampEnable) {
        pfn_CmdSetDepthClampEnableEXT(commandBuffer, depthClampEnable);
    }
    void CmdSetPolygonModeEXT(
        VkCommandBuffer commandBuffer, VkPolygonMode polygonMode) {
        pfn_CmdSetPolygonModeEXT(commandBuffer, polygonMode);
    }
    void CmdSetRasterizationSamplesEXT(
        VkCommandBuffer commandBuffer, VkSampleCountFlagBits rasterizationSamples) {
        pfn_CmdSetRasterizationSamplesEXT(commandBuffer, rasterizationSamples);
    }
    void CmdSetSampleMaskEXT(
        VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask* pSampleMask) {
        pfn_CmdSetSampleMaskEXT(commandBuffer, samples, pSampleMask);
    }
    void CmdSetAlphaToCoverageEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 alphaToCoverageEnable) {
        pfn_CmdSetAlphaToCoverageEnableEXT(commandBuffer, alphaToCoverageEnable);
    }
    void CmdSetAlphaToOneEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable) {
        pfn_CmdSetAlphaToOneEnableEXT(commandBuffer, alphaToOneEnable);
    }
    void CmdSetLogicOpEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 logicOpEnable) {
        pfn_CmdSetLogicOpEnableEXT(commandBuffer, logicOpEnable);
    }
    void CmdSetColorBlendEnableEXT(
        VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkBool32* pColorBlendEnables) {
        pfn_CmdSetColorBlendEnableEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
    }
    void CmdSetColorBlendEquationEXT(
        VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendEquationEXT* pColorBlendEquations) {
        pfn_CmdSetColorBlendEquationEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
    }
    void CmdSetColorWriteMaskEXT(
        VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorComponentFlags* pColorWriteMasks) {
        pfn_CmdSetColorWriteMaskEXT(commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
    }
    void CmdSetRasterizationStreamEXT(
        VkCommandBuffer commandBuffer, uint32_t rasterizationStream) {
        pfn_CmdSetRasterizationStreamEXT(commandBuffer, rasterizationStream);
    }
    void CmdSetConservativeRasterizationModeEXT(
        VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT conservativeRasterizationMode) {
        pfn_CmdSetConservativeRasterizationModeEXT(commandBuffer, conservativeRasterizationMode);
    }
    void CmdSetExtraPrimitiveOverestimationSizeEXT(
        VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize) {
        pfn_CmdSetExtraPrimitiveOverestimationSizeEXT(commandBuffer, extraPrimitiveOverestimationSize);
    }
    void CmdSetDepthClipEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 depthClipEnable) {
        pfn_CmdSetDepthClipEnableEXT(commandBuffer, depthClipEnable);
    }
    void CmdSetSampleLocationsEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 sampleLocationsEnable) {
        pfn_CmdSetSampleLocationsEnableEXT(commandBuffer, sampleLocationsEnable);
    }
    void CmdSetColorBlendAdvancedEXT(
        VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendAdvancedEXT* pColorBlendAdvanced) {
        pfn_CmdSetColorBlendAdvancedEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
    }
    void CmdSetProvokingVertexModeEXT(
        VkCommandBuffer commandBuffer, VkProvokingVertexModeEXT provokingVertexMode) {
        pfn_CmdSetProvokingVertexModeEXT(commandBuffer, provokingVertexMode);
    }
    void CmdSetLineRasterizationModeEXT(
        VkCommandBuffer commandBuffer, VkLineRasterizationModeEXT lineRasterizationMode) {
        pfn_CmdSetLineRasterizationModeEXT(commandBuffer, lineRasterizationMode);
    }
    void CmdSetLineStippleEnableEXT(
        VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable) {
        pfn_CmdSetLineStippleEnableEXT(commandBuffer, stippledLineEnable);
    }
    void CmdSetDepthClipNegativeOneToOneEXT(
        VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne) {
        pfn_CmdSetDepthClipNegativeOneToOneEXT(commandBuffer, negativeOneToOne);
    }
    void CmdSetViewportWScalingEnableNV(
        VkCommandBuffer commandBuffer, VkBool32 viewportWScalingEnable) {
        pfn_CmdSetViewportWScalingEnableNV(commandBuffer, viewportWScalingEnable);
    }
    void CmdSetViewportSwizzleNV(
        VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportSwizzleNV* pViewportSwizzles) {
        pfn_CmdSetViewportSwizzleNV(commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
    }
    void CmdSetCoverageToColorEnableNV(
        VkCommandBuffer commandBuffer, VkBool32 coverageToColorEnable) {
        pfn_CmdSetCoverageToColorEnableNV(commandBuffer, coverageToColorEnable);
    }
    void CmdSetCoverageToColorLocationNV(
        VkCommandBuffer commandBuffer, uint32_t coverageToColorLocation) {
        pfn_CmdSetCoverageToColorLocationNV(commandBuffer, coverageToColorLocation);
    }
    void CmdSetCoverageModulationModeNV(
        VkCommandBuffer commandBuffer, VkCoverageModulationModeNV coverageModulationMode) {
        pfn_CmdSetCoverageModulationModeNV(commandBuffer, coverageModulationMode);
    }
    void CmdSetCoverageModulationTableEnableNV(
        VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable) {
        pfn_CmdSetCoverageModulationTableEnableNV(commandBuffer, coverageModulationTableEnable);
    }
    void CmdSetCoverageModulationTableNV(
        VkCommandBuffer commandBuffer, uint32_t coverageModulationTableCount, const float* pCoverageModulationTable) {
        pfn_CmdSetCoverageModulationTableNV(commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
    }
    void CmdSetShadingRateImageEnableNV(
        VkCommandBuffer commandBuffer, VkBool32 shadingRateImageEnable) {
        pfn_CmdSetShadingRateImageEnableNV(commandBuffer, shadingRateImageEnable);
    }
    void CmdSetRepresentativeFragmentTestEnableNV(
        VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable) {
        pfn_CmdSetRepresentativeFragmentTestEnableNV(commandBuffer, representativeFragmentTestEnable);
    }
    void CmdSetCoverageReductionModeNV(
        VkCommandBuffer commandBuffer, VkCoverageReductionModeNV coverageReductionMode) {
        pfn_CmdSetCoverageReductionModeNV(commandBuffer, coverageReductionMode);
    }
    void GetShaderModuleIdentifierEXT(
        VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier) {
        pfn_GetShaderModuleIdentifierEXT(device, shaderModule, pIdentifier);
    }
    void GetShaderModuleCreateInfoIdentifierEXT(
        const VkShaderModuleCreateInfo* pCreateInfo, VkShaderModuleIdentifierEXT* pIdentifier) {
        pfn_GetShaderModuleCreateInfoIdentifierEXT(device, pCreateInfo, pIdentifier);
    }
    VkResult CreateOpticalFlowSessionNV(
        const VkOpticalFlowSessionCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession) {
        return pfn_CreateOpticalFlowSessionNV(device, pCreateInfo, pAllocator, pSession);
    }
    void DestroyOpticalFlowSessionNV(
        VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyOpticalFlowSessionNV(device, session, pAllocator);
    }
    VkResult BindOpticalFlowSessionImageNV(
        VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV bindingPoint, VkImageView view, VkImageLayout layout) {
        return pfn_BindOpticalFlowSessionImageNV(device, session, bindingPoint, view, layout);
    }
    void CmdOpticalFlowExecuteNV(
        VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV* pExecuteInfo) {
        pfn_CmdOpticalFlowExecuteNV(commandBuffer, session, pExecuteInfo);
    }
    VkResult CreateShadersEXT(
        uint32_t createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders) {
        return pfn_CreateShadersEXT(device, createInfoCount, pCreateInfos, pAllocator, pShaders);
    }
    void DestroyShaderEXT(
        VkShaderEXT shader, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyShaderEXT(device, shader, pAllocator);
    }
    VkResult GetShaderBinaryDataEXT(
        VkShaderEXT shader, size_t* pDataSize, void* pData) {
        return pfn_GetShaderBinaryDataEXT(device, shader, pDataSize, pData);
    }
    void CmdBindShadersEXT(
        VkCommandBuffer commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders) {
        pfn_CmdBindShadersEXT(commandBuffer, stageCount, pStages, pShaders);
    }
    VkResult GetFramebufferTilePropertiesQCOM(
        VkFramebuffer framebuffer, uint32_t* pPropertiesCount, VkTilePropertiesQCOM* pProperties) {
        return pfn_GetFramebufferTilePropertiesQCOM(device, framebuffer, pPropertiesCount, pProperties);
    }
    VkResult GetDynamicRenderingTilePropertiesQCOM(
        const VkRenderingInfo* pRenderingInfo, VkTilePropertiesQCOM* pProperties) {
        return pfn_GetDynamicRenderingTilePropertiesQCOM(device, pRenderingInfo, pProperties);
    }
    VkResult SetLatencySleepModeNV(
        VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo) {
        return pfn_SetLatencySleepModeNV(device, swapchain, pSleepModeInfo);
    }
    VkResult LatencySleepNV(
        VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo) {
        return pfn_LatencySleepNV(device, swapchain, pSleepInfo);
    }
    void SetLatencyMarkerNV(
        VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
        pfn_SetLatencyMarkerNV(device, swapchain, pLatencyMarkerInfo);
    }
    void GetLatencyTimingsNV(
        VkSwapchainKHR swapchain, uint32_t* pTimingCount, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
        pfn_GetLatencyTimingsNV(device, swapchain, pTimingCount, pLatencyMarkerInfo);
    }
    void QueueNotifyOutOfBandNV(
        VkQueue queue, const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo) {
        pfn_QueueNotifyOutOfBandNV(queue, pQueueTypeInfo);
    }
    void CmdSetAttachmentFeedbackLoopEnableEXT(
        VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask) {
        pfn_CmdSetAttachmentFeedbackLoopEnableEXT(commandBuffer, aspectMask);
    }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VkResult GetScreenBufferPropertiesQNX(
        const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX* pProperties) {
        return pfn_GetScreenBufferPropertiesQNX(device, buffer, pProperties);
    }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VkResult CreateAccelerationStructureKHR(
        const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR* pAccelerationStructure) {
        return pfn_CreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
    }
    void DestroyAccelerationStructureKHR(
        VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator) {
        pfn_DestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
    }
    void CmdBuildAccelerationStructuresKHR(
        VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
        pfn_CmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
    }
    void CmdBuildAccelerationStructuresIndirectKHR(
        VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts) {
        pfn_CmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
    }
    VkResult BuildAccelerationStructuresKHR(
        VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
        return pfn_BuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
    }
    VkResult CopyAccelerationStructureKHR(
        VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo) {
        return pfn_CopyAccelerationStructureKHR(device, deferredOperation, pInfo);
    }
    VkResult CopyAccelerationStructureToMemoryKHR(
        VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
        return pfn_CopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
    }
    VkResult CopyMemoryToAccelerationStructureKHR(
        VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
        return pfn_CopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
    }
    VkResult WriteAccelerationStructuresPropertiesKHR(
        uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, size_t dataSize, void* pData, size_t stride) {
        return pfn_WriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
    }
    void CmdCopyAccelerationStructureKHR(
        VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo) {
        pfn_CmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
    }
    void CmdCopyAccelerationStructureToMemoryKHR(
        VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
        pfn_CmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
    }
    void CmdCopyMemoryToAccelerationStructureKHR(
        VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
        pfn_CmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
    }
    VkDeviceAddress GetAccelerationStructureDeviceAddressKHR(
        const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) {
        return pfn_GetAccelerationStructureDeviceAddressKHR(device, pInfo);
    }
    void CmdWriteAccelerationStructuresPropertiesKHR(
        VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    }
    void GetDeviceAccelerationStructureCompatibilityKHR(
        const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) {
        pfn_GetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
    }
    void GetAccelerationStructureBuildSizesKHR(
        VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
        pfn_GetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
    }
    void CmdTraceRaysKHR(
        VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
        pfn_CmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
    }
    VkResult CreateRayTracingPipelinesKHR(
        VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
        return pfn_CreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    }
    VkResult GetRayTracingCaptureReplayShaderGroupHandlesKHR(
        VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
        return pfn_GetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
    }
    void CmdTraceRaysIndirectKHR(
        VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
        pfn_CmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
    }
    VkDeviceSize GetRayTracingShaderGroupStackSizeKHR(
        VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
        return pfn_GetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
    }
    void CmdSetRayTracingPipelineStackSizeKHR(
        VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) {
        pfn_CmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
    }
    void CmdDrawMeshTasksEXT(
        VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDrawMeshTasksEXT(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDrawMeshTasksIndirectEXT(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectEXT(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawMeshTasksIndirectCountEXT(
        VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectCountEXT(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    VkResult init(PFN_vkGetDeviceProcAddr gpa, VkDevice in_device) {
        this->device = in_device;
        pfn_GetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)gpa(in_device, "vkGetDeviceProcAddr");
        pfn_DestroyDevice = (PFN_vkDestroyDevice)gpa(in_device, "vkDestroyDevice");
        pfn_GetDeviceQueue = (PFN_vkGetDeviceQueue)gpa(in_device, "vkGetDeviceQueue");
        pfn_QueueSubmit = (PFN_vkQueueSubmit)gpa(in_device, "vkQueueSubmit");
        pfn_QueueWaitIdle = (PFN_vkQueueWaitIdle)gpa(in_device, "vkQueueWaitIdle");
        pfn_DeviceWaitIdle = (PFN_vkDeviceWaitIdle)gpa(in_device, "vkDeviceWaitIdle");
        pfn_AllocateMemory = (PFN_vkAllocateMemory)gpa(in_device, "vkAllocateMemory");
        pfn_FreeMemory = (PFN_vkFreeMemory)gpa(in_device, "vkFreeMemory");
        pfn_MapMemory = (PFN_vkMapMemory)gpa(in_device, "vkMapMemory");
        pfn_UnmapMemory = (PFN_vkUnmapMemory)gpa(in_device, "vkUnmapMemory");
        pfn_FlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)gpa(in_device, "vkFlushMappedMemoryRanges");
        pfn_InvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)gpa(in_device, "vkInvalidateMappedMemoryRanges");
        pfn_GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)gpa(in_device, "vkGetDeviceMemoryCommitment");
        pfn_BindBufferMemory = (PFN_vkBindBufferMemory)gpa(in_device, "vkBindBufferMemory");
        pfn_BindImageMemory = (PFN_vkBindImageMemory)gpa(in_device, "vkBindImageMemory");
        pfn_GetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)gpa(in_device, "vkGetBufferMemoryRequirements");
        pfn_GetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)gpa(in_device, "vkGetImageMemoryRequirements");
        pfn_GetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)gpa(in_device, "vkGetImageSparseMemoryRequirements");
        pfn_QueueBindSparse = (PFN_vkQueueBindSparse)gpa(in_device, "vkQueueBindSparse");
        pfn_CreateFence = (PFN_vkCreateFence)gpa(in_device, "vkCreateFence");
        pfn_DestroyFence = (PFN_vkDestroyFence)gpa(in_device, "vkDestroyFence");
        pfn_ResetFences = (PFN_vkResetFences)gpa(in_device, "vkResetFences");
        pfn_GetFenceStatus = (PFN_vkGetFenceStatus)gpa(in_device, "vkGetFenceStatus");
        pfn_WaitForFences = (PFN_vkWaitForFences)gpa(in_device, "vkWaitForFences");
        pfn_CreateSemaphore = (PFN_vkCreateSemaphore)gpa(in_device, "vkCreateSemaphore");
        pfn_DestroySemaphore = (PFN_vkDestroySemaphore)gpa(in_device, "vkDestroySemaphore");
        pfn_CreateEvent = (PFN_vkCreateEvent)gpa(in_device, "vkCreateEvent");
        pfn_DestroyEvent = (PFN_vkDestroyEvent)gpa(in_device, "vkDestroyEvent");
        pfn_GetEventStatus = (PFN_vkGetEventStatus)gpa(in_device, "vkGetEventStatus");
        pfn_SetEvent = (PFN_vkSetEvent)gpa(in_device, "vkSetEvent");
        pfn_ResetEvent = (PFN_vkResetEvent)gpa(in_device, "vkResetEvent");
        pfn_CreateQueryPool = (PFN_vkCreateQueryPool)gpa(in_device, "vkCreateQueryPool");
        pfn_DestroyQueryPool = (PFN_vkDestroyQueryPool)gpa(in_device, "vkDestroyQueryPool");
        pfn_GetQueryPoolResults = (PFN_vkGetQueryPoolResults)gpa(in_device, "vkGetQueryPoolResults");
        pfn_CreateBuffer = (PFN_vkCreateBuffer)gpa(in_device, "vkCreateBuffer");
        pfn_DestroyBuffer = (PFN_vkDestroyBuffer)gpa(in_device, "vkDestroyBuffer");
        pfn_CreateBufferView = (PFN_vkCreateBufferView)gpa(in_device, "vkCreateBufferView");
        pfn_DestroyBufferView = (PFN_vkDestroyBufferView)gpa(in_device, "vkDestroyBufferView");
        pfn_CreateImage = (PFN_vkCreateImage)gpa(in_device, "vkCreateImage");
        pfn_DestroyImage = (PFN_vkDestroyImage)gpa(in_device, "vkDestroyImage");
        pfn_GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)gpa(in_device, "vkGetImageSubresourceLayout");
        pfn_CreateImageView = (PFN_vkCreateImageView)gpa(in_device, "vkCreateImageView");
        pfn_DestroyImageView = (PFN_vkDestroyImageView)gpa(in_device, "vkDestroyImageView");
        pfn_CreateShaderModule = (PFN_vkCreateShaderModule)gpa(in_device, "vkCreateShaderModule");
        pfn_DestroyShaderModule = (PFN_vkDestroyShaderModule)gpa(in_device, "vkDestroyShaderModule");
        pfn_CreatePipelineCache = (PFN_vkCreatePipelineCache)gpa(in_device, "vkCreatePipelineCache");
        pfn_DestroyPipelineCache = (PFN_vkDestroyPipelineCache)gpa(in_device, "vkDestroyPipelineCache");
        pfn_GetPipelineCacheData = (PFN_vkGetPipelineCacheData)gpa(in_device, "vkGetPipelineCacheData");
        pfn_MergePipelineCaches = (PFN_vkMergePipelineCaches)gpa(in_device, "vkMergePipelineCaches");
        pfn_CreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)gpa(in_device, "vkCreateGraphicsPipelines");
        pfn_CreateComputePipelines = (PFN_vkCreateComputePipelines)gpa(in_device, "vkCreateComputePipelines");
        pfn_DestroyPipeline = (PFN_vkDestroyPipeline)gpa(in_device, "vkDestroyPipeline");
        pfn_CreatePipelineLayout = (PFN_vkCreatePipelineLayout)gpa(in_device, "vkCreatePipelineLayout");
        pfn_DestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)gpa(in_device, "vkDestroyPipelineLayout");
        pfn_CreateSampler = (PFN_vkCreateSampler)gpa(in_device, "vkCreateSampler");
        pfn_DestroySampler = (PFN_vkDestroySampler)gpa(in_device, "vkDestroySampler");
        pfn_CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)gpa(in_device, "vkCreateDescriptorSetLayout");
        pfn_DestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)gpa(in_device, "vkDestroyDescriptorSetLayout");
        pfn_CreateDescriptorPool = (PFN_vkCreateDescriptorPool)gpa(in_device, "vkCreateDescriptorPool");
        pfn_DestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)gpa(in_device, "vkDestroyDescriptorPool");
        pfn_ResetDescriptorPool = (PFN_vkResetDescriptorPool)gpa(in_device, "vkResetDescriptorPool");
        pfn_AllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)gpa(in_device, "vkAllocateDescriptorSets");
        pfn_FreeDescriptorSets = (PFN_vkFreeDescriptorSets)gpa(in_device, "vkFreeDescriptorSets");
        pfn_UpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)gpa(in_device, "vkUpdateDescriptorSets");
        pfn_CreateFramebuffer = (PFN_vkCreateFramebuffer)gpa(in_device, "vkCreateFramebuffer");
        pfn_DestroyFramebuffer = (PFN_vkDestroyFramebuffer)gpa(in_device, "vkDestroyFramebuffer");
        pfn_CreateRenderPass = (PFN_vkCreateRenderPass)gpa(in_device, "vkCreateRenderPass");
        pfn_DestroyRenderPass = (PFN_vkDestroyRenderPass)gpa(in_device, "vkDestroyRenderPass");
        pfn_GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)gpa(in_device, "vkGetRenderAreaGranularity");
        pfn_CreateCommandPool = (PFN_vkCreateCommandPool)gpa(in_device, "vkCreateCommandPool");
        pfn_DestroyCommandPool = (PFN_vkDestroyCommandPool)gpa(in_device, "vkDestroyCommandPool");
        pfn_ResetCommandPool = (PFN_vkResetCommandPool)gpa(in_device, "vkResetCommandPool");
        pfn_AllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)gpa(in_device, "vkAllocateCommandBuffers");
        pfn_FreeCommandBuffers = (PFN_vkFreeCommandBuffers)gpa(in_device, "vkFreeCommandBuffers");
        pfn_BeginCommandBuffer = (PFN_vkBeginCommandBuffer)gpa(in_device, "vkBeginCommandBuffer");
        pfn_EndCommandBuffer = (PFN_vkEndCommandBuffer)gpa(in_device, "vkEndCommandBuffer");
        pfn_ResetCommandBuffer = (PFN_vkResetCommandBuffer)gpa(in_device, "vkResetCommandBuffer");
        pfn_CmdBindPipeline = (PFN_vkCmdBindPipeline)gpa(in_device, "vkCmdBindPipeline");
        pfn_CmdSetViewport = (PFN_vkCmdSetViewport)gpa(in_device, "vkCmdSetViewport");
        pfn_CmdSetScissor = (PFN_vkCmdSetScissor)gpa(in_device, "vkCmdSetScissor");
        pfn_CmdSetLineWidth = (PFN_vkCmdSetLineWidth)gpa(in_device, "vkCmdSetLineWidth");
        pfn_CmdSetDepthBias = (PFN_vkCmdSetDepthBias)gpa(in_device, "vkCmdSetDepthBias");
        pfn_CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)gpa(in_device, "vkCmdSetBlendConstants");
        pfn_CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)gpa(in_device, "vkCmdSetDepthBounds");
        pfn_CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)gpa(in_device, "vkCmdSetStencilCompareMask");
        pfn_CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)gpa(in_device, "vkCmdSetStencilWriteMask");
        pfn_CmdSetStencilReference = (PFN_vkCmdSetStencilReference)gpa(in_device, "vkCmdSetStencilReference");
        pfn_CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)gpa(in_device, "vkCmdBindDescriptorSets");
        pfn_CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)gpa(in_device, "vkCmdBindIndexBuffer");
        pfn_CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)gpa(in_device, "vkCmdBindVertexBuffers");
        pfn_CmdDraw = (PFN_vkCmdDraw)gpa(in_device, "vkCmdDraw");
        pfn_CmdDrawIndexed = (PFN_vkCmdDrawIndexed)gpa(in_device, "vkCmdDrawIndexed");
        pfn_CmdDrawIndirect = (PFN_vkCmdDrawIndirect)gpa(in_device, "vkCmdDrawIndirect");
        pfn_CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)gpa(in_device, "vkCmdDrawIndexedIndirect");
        pfn_CmdDispatch = (PFN_vkCmdDispatch)gpa(in_device, "vkCmdDispatch");
        pfn_CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)gpa(in_device, "vkCmdDispatchIndirect");
        pfn_CmdCopyBuffer = (PFN_vkCmdCopyBuffer)gpa(in_device, "vkCmdCopyBuffer");
        pfn_CmdCopyImage = (PFN_vkCmdCopyImage)gpa(in_device, "vkCmdCopyImage");
        pfn_CmdBlitImage = (PFN_vkCmdBlitImage)gpa(in_device, "vkCmdBlitImage");
        pfn_CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)gpa(in_device, "vkCmdCopyBufferToImage");
        pfn_CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)gpa(in_device, "vkCmdCopyImageToBuffer");
        pfn_CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)gpa(in_device, "vkCmdUpdateBuffer");
        pfn_CmdFillBuffer = (PFN_vkCmdFillBuffer)gpa(in_device, "vkCmdFillBuffer");
        pfn_CmdClearColorImage = (PFN_vkCmdClearColorImage)gpa(in_device, "vkCmdClearColorImage");
        pfn_CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)gpa(in_device, "vkCmdClearDepthStencilImage");
        pfn_CmdClearAttachments = (PFN_vkCmdClearAttachments)gpa(in_device, "vkCmdClearAttachments");
        pfn_CmdResolveImage = (PFN_vkCmdResolveImage)gpa(in_device, "vkCmdResolveImage");
        pfn_CmdSetEvent = (PFN_vkCmdSetEvent)gpa(in_device, "vkCmdSetEvent");
        pfn_CmdResetEvent = (PFN_vkCmdResetEvent)gpa(in_device, "vkCmdResetEvent");
        pfn_CmdWaitEvents = (PFN_vkCmdWaitEvents)gpa(in_device, "vkCmdWaitEvents");
        pfn_CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)gpa(in_device, "vkCmdPipelineBarrier");
        pfn_CmdBeginQuery = (PFN_vkCmdBeginQuery)gpa(in_device, "vkCmdBeginQuery");
        pfn_CmdEndQuery = (PFN_vkCmdEndQuery)gpa(in_device, "vkCmdEndQuery");
        pfn_CmdResetQueryPool = (PFN_vkCmdResetQueryPool)gpa(in_device, "vkCmdResetQueryPool");
        pfn_CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)gpa(in_device, "vkCmdWriteTimestamp");
        pfn_CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)gpa(in_device, "vkCmdCopyQueryPoolResults");
        pfn_CmdPushConstants = (PFN_vkCmdPushConstants)gpa(in_device, "vkCmdPushConstants");
        pfn_CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)gpa(in_device, "vkCmdBeginRenderPass");
        pfn_CmdNextSubpass = (PFN_vkCmdNextSubpass)gpa(in_device, "vkCmdNextSubpass");
        pfn_CmdEndRenderPass = (PFN_vkCmdEndRenderPass)gpa(in_device, "vkCmdEndRenderPass");
        pfn_CmdExecuteCommands = (PFN_vkCmdExecuteCommands)gpa(in_device, "vkCmdExecuteCommands");
        pfn_BindBufferMemory2 = (PFN_vkBindBufferMemory2)gpa(in_device, "vkBindBufferMemory2");
        pfn_BindImageMemory2 = (PFN_vkBindImageMemory2)gpa(in_device, "vkBindImageMemory2");
        pfn_GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)gpa(in_device, "vkGetDeviceGroupPeerMemoryFeatures");
        pfn_CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)gpa(in_device, "vkCmdSetDeviceMask");
        pfn_CmdDispatchBase = (PFN_vkCmdDispatchBase)gpa(in_device, "vkCmdDispatchBase");
        pfn_GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)gpa(in_device, "vkGetImageMemoryRequirements2");
        pfn_GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)gpa(in_device, "vkGetBufferMemoryRequirements2");
        pfn_GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)gpa(in_device, "vkGetImageSparseMemoryRequirements2");
        pfn_TrimCommandPool = (PFN_vkTrimCommandPool)gpa(in_device, "vkTrimCommandPool");
        pfn_GetDeviceQueue2 = (PFN_vkGetDeviceQueue2)gpa(in_device, "vkGetDeviceQueue2");
        pfn_CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)gpa(in_device, "vkCreateSamplerYcbcrConversion");
        pfn_DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)gpa(in_device, "vkDestroySamplerYcbcrConversion");
        pfn_CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)gpa(in_device, "vkCreateDescriptorUpdateTemplate");
        pfn_DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)gpa(in_device, "vkDestroyDescriptorUpdateTemplate");
        pfn_UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)gpa(in_device, "vkUpdateDescriptorSetWithTemplate");
        pfn_GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)gpa(in_device, "vkGetDescriptorSetLayoutSupport");
        pfn_CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)gpa(in_device, "vkCmdDrawIndirectCount");
        pfn_CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)gpa(in_device, "vkCmdDrawIndexedIndirectCount");
        pfn_CreateRenderPass2 = (PFN_vkCreateRenderPass2)gpa(in_device, "vkCreateRenderPass2");
        pfn_CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)gpa(in_device, "vkCmdBeginRenderPass2");
        pfn_CmdNextSubpass2 = (PFN_vkCmdNextSubpass2)gpa(in_device, "vkCmdNextSubpass2");
        pfn_CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)gpa(in_device, "vkCmdEndRenderPass2");
        pfn_ResetQueryPool = (PFN_vkResetQueryPool)gpa(in_device, "vkResetQueryPool");
        pfn_GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)gpa(in_device, "vkGetSemaphoreCounterValue");
        pfn_WaitSemaphores = (PFN_vkWaitSemaphores)gpa(in_device, "vkWaitSemaphores");
        pfn_SignalSemaphore = (PFN_vkSignalSemaphore)gpa(in_device, "vkSignalSemaphore");
        pfn_GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)gpa(in_device, "vkGetBufferDeviceAddress");
        pfn_GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)gpa(in_device, "vkGetBufferOpaqueCaptureAddress");
        pfn_GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)gpa(in_device, "vkGetDeviceMemoryOpaqueCaptureAddress");
        pfn_CreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)gpa(in_device, "vkCreatePrivateDataSlot");
        pfn_DestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)gpa(in_device, "vkDestroyPrivateDataSlot");
        pfn_SetPrivateData = (PFN_vkSetPrivateData)gpa(in_device, "vkSetPrivateData");
        pfn_GetPrivateData = (PFN_vkGetPrivateData)gpa(in_device, "vkGetPrivateData");
        pfn_CmdSetEvent2 = (PFN_vkCmdSetEvent2)gpa(in_device, "vkCmdSetEvent2");
        pfn_CmdResetEvent2 = (PFN_vkCmdResetEvent2)gpa(in_device, "vkCmdResetEvent2");
        pfn_CmdWaitEvents2 = (PFN_vkCmdWaitEvents2)gpa(in_device, "vkCmdWaitEvents2");
        pfn_CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)gpa(in_device, "vkCmdPipelineBarrier2");
        pfn_CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)gpa(in_device, "vkCmdWriteTimestamp2");
        pfn_QueueSubmit2 = (PFN_vkQueueSubmit2)gpa(in_device, "vkQueueSubmit2");
        pfn_CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)gpa(in_device, "vkCmdCopyBuffer2");
        pfn_CmdCopyImage2 = (PFN_vkCmdCopyImage2)gpa(in_device, "vkCmdCopyImage2");
        pfn_CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)gpa(in_device, "vkCmdCopyBufferToImage2");
        pfn_CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)gpa(in_device, "vkCmdCopyImageToBuffer2");
        pfn_CmdBlitImage2 = (PFN_vkCmdBlitImage2)gpa(in_device, "vkCmdBlitImage2");
        pfn_CmdResolveImage2 = (PFN_vkCmdResolveImage2)gpa(in_device, "vkCmdResolveImage2");
        pfn_CmdBeginRendering = (PFN_vkCmdBeginRendering)gpa(in_device, "vkCmdBeginRendering");
        pfn_CmdEndRendering = (PFN_vkCmdEndRendering)gpa(in_device, "vkCmdEndRendering");
        pfn_CmdSetCullMode = (PFN_vkCmdSetCullMode)gpa(in_device, "vkCmdSetCullMode");
        pfn_CmdSetFrontFace = (PFN_vkCmdSetFrontFace)gpa(in_device, "vkCmdSetFrontFace");
        pfn_CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)gpa(in_device, "vkCmdSetPrimitiveTopology");
        pfn_CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)gpa(in_device, "vkCmdSetViewportWithCount");
        pfn_CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)gpa(in_device, "vkCmdSetScissorWithCount");
        pfn_CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)gpa(in_device, "vkCmdBindVertexBuffers2");
        pfn_CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)gpa(in_device, "vkCmdSetDepthTestEnable");
        pfn_CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)gpa(in_device, "vkCmdSetDepthWriteEnable");
        pfn_CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)gpa(in_device, "vkCmdSetDepthCompareOp");
        pfn_CmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)gpa(in_device, "vkCmdSetDepthBoundsTestEnable");
        pfn_CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)gpa(in_device, "vkCmdSetStencilTestEnable");
        pfn_CmdSetStencilOp = (PFN_vkCmdSetStencilOp)gpa(in_device, "vkCmdSetStencilOp");
        pfn_CmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)gpa(in_device, "vkCmdSetRasterizerDiscardEnable");
        pfn_CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)gpa(in_device, "vkCmdSetDepthBiasEnable");
        pfn_CmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)gpa(in_device, "vkCmdSetPrimitiveRestartEnable");
        pfn_GetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)gpa(in_device, "vkGetDeviceBufferMemoryRequirements");
        pfn_GetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)gpa(in_device, "vkGetDeviceImageMemoryRequirements");
        pfn_GetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)gpa(in_device, "vkGetDeviceImageSparseMemoryRequirements");
        pfn_CreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)gpa(in_device, "vkCreateSwapchainKHR");
        pfn_DestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)gpa(in_device, "vkDestroySwapchainKHR");
        pfn_GetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)gpa(in_device, "vkGetSwapchainImagesKHR");
        pfn_AcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)gpa(in_device, "vkAcquireNextImageKHR");
        pfn_QueuePresentKHR = (PFN_vkQueuePresentKHR)gpa(in_device, "vkQueuePresentKHR");
        pfn_GetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)gpa(in_device, "vkGetDeviceGroupPresentCapabilitiesKHR");
        pfn_GetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)gpa(in_device, "vkGetDeviceGroupSurfacePresentModesKHR");
        pfn_AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)gpa(in_device, "vkAcquireNextImage2KHR");
        pfn_CreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)gpa(in_device, "vkCreateSharedSwapchainsKHR");
        pfn_CreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)gpa(in_device, "vkCreateVideoSessionKHR");
        pfn_DestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)gpa(in_device, "vkDestroyVideoSessionKHR");
        pfn_GetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)gpa(in_device, "vkGetVideoSessionMemoryRequirementsKHR");
        pfn_BindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)gpa(in_device, "vkBindVideoSessionMemoryKHR");
        pfn_CreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)gpa(in_device, "vkCreateVideoSessionParametersKHR");
        pfn_UpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)gpa(in_device, "vkUpdateVideoSessionParametersKHR");
        pfn_DestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)gpa(in_device, "vkDestroyVideoSessionParametersKHR");
        pfn_CmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)gpa(in_device, "vkCmdBeginVideoCodingKHR");
        pfn_CmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)gpa(in_device, "vkCmdEndVideoCodingKHR");
        pfn_CmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)gpa(in_device, "vkCmdControlVideoCodingKHR");
        pfn_CmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)gpa(in_device, "vkCmdDecodeVideoKHR");
        pfn_CmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)gpa(in_device, "vkCmdBeginRenderingKHR");
        pfn_CmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)gpa(in_device, "vkCmdEndRenderingKHR");
        pfn_GetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)gpa(in_device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
        pfn_CmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)gpa(in_device, "vkCmdSetDeviceMaskKHR");
        pfn_CmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)gpa(in_device, "vkCmdDispatchBaseKHR");
        pfn_TrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)gpa(in_device, "vkTrimCommandPoolKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_GetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)gpa(in_device, "vkGetMemoryWin32HandleKHR");
        pfn_GetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)gpa(in_device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_GetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)gpa(in_device, "vkGetMemoryFdKHR");
        pfn_GetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)gpa(in_device, "vkGetMemoryFdPropertiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_ImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)gpa(in_device, "vkImportSemaphoreWin32HandleKHR");
        pfn_GetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)gpa(in_device, "vkGetSemaphoreWin32HandleKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_ImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)gpa(in_device, "vkImportSemaphoreFdKHR");
        pfn_GetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)gpa(in_device, "vkGetSemaphoreFdKHR");
        pfn_CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)gpa(in_device, "vkCmdPushDescriptorSetKHR");
        pfn_CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)gpa(in_device, "vkCmdPushDescriptorSetWithTemplateKHR");
        pfn_CreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)gpa(in_device, "vkCreateDescriptorUpdateTemplateKHR");
        pfn_DestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)gpa(in_device, "vkDestroyDescriptorUpdateTemplateKHR");
        pfn_UpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)gpa(in_device, "vkUpdateDescriptorSetWithTemplateKHR");
        pfn_CreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)gpa(in_device, "vkCreateRenderPass2KHR");
        pfn_CmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)gpa(in_device, "vkCmdBeginRenderPass2KHR");
        pfn_CmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)gpa(in_device, "vkCmdNextSubpass2KHR");
        pfn_CmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)gpa(in_device, "vkCmdEndRenderPass2KHR");
        pfn_GetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)gpa(in_device, "vkGetSwapchainStatusKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_ImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)gpa(in_device, "vkImportFenceWin32HandleKHR");
        pfn_GetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)gpa(in_device, "vkGetFenceWin32HandleKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_ImportFenceFdKHR = (PFN_vkImportFenceFdKHR)gpa(in_device, "vkImportFenceFdKHR");
        pfn_GetFenceFdKHR = (PFN_vkGetFenceFdKHR)gpa(in_device, "vkGetFenceFdKHR");
        pfn_AcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)gpa(in_device, "vkAcquireProfilingLockKHR");
        pfn_ReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)gpa(in_device, "vkReleaseProfilingLockKHR");
        pfn_GetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)gpa(in_device, "vkGetImageMemoryRequirements2KHR");
        pfn_GetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)gpa(in_device, "vkGetBufferMemoryRequirements2KHR");
        pfn_GetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)gpa(in_device, "vkGetImageSparseMemoryRequirements2KHR");
        pfn_CreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)gpa(in_device, "vkCreateSamplerYcbcrConversionKHR");
        pfn_DestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)gpa(in_device, "vkDestroySamplerYcbcrConversionKHR");
        pfn_BindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)gpa(in_device, "vkBindBufferMemory2KHR");
        pfn_BindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)gpa(in_device, "vkBindImageMemory2KHR");
        pfn_GetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)gpa(in_device, "vkGetDescriptorSetLayoutSupportKHR");
        pfn_CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)gpa(in_device, "vkCmdDrawIndirectCountKHR");
        pfn_CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)gpa(in_device, "vkCmdDrawIndexedIndirectCountKHR");
        pfn_GetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)gpa(in_device, "vkGetSemaphoreCounterValueKHR");
        pfn_WaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)gpa(in_device, "vkWaitSemaphoresKHR");
        pfn_SignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)gpa(in_device, "vkSignalSemaphoreKHR");
        pfn_CmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)gpa(in_device, "vkCmdSetFragmentShadingRateKHR");
        pfn_WaitForPresentKHR = (PFN_vkWaitForPresentKHR)gpa(in_device, "vkWaitForPresentKHR");
        pfn_GetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)gpa(in_device, "vkGetBufferDeviceAddressKHR");
        pfn_GetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)gpa(in_device, "vkGetBufferOpaqueCaptureAddressKHR");
        pfn_GetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)gpa(in_device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
        pfn_CreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)gpa(in_device, "vkCreateDeferredOperationKHR");
        pfn_DestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)gpa(in_device, "vkDestroyDeferredOperationKHR");
        pfn_GetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)gpa(in_device, "vkGetDeferredOperationMaxConcurrencyKHR");
        pfn_GetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)gpa(in_device, "vkGetDeferredOperationResultKHR");
        pfn_DeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)gpa(in_device, "vkDeferredOperationJoinKHR");
        pfn_GetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)gpa(in_device, "vkGetPipelineExecutablePropertiesKHR");
        pfn_GetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)gpa(in_device, "vkGetPipelineExecutableStatisticsKHR");
        pfn_GetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)gpa(in_device, "vkGetPipelineExecutableInternalRepresentationsKHR");
        pfn_MapMemory2KHR = (PFN_vkMapMemory2KHR)gpa(in_device, "vkMapMemory2KHR");
        pfn_UnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)gpa(in_device, "vkUnmapMemory2KHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_GetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)gpa(in_device, "vkGetEncodedVideoSessionParametersKHR");
        pfn_CmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)gpa(in_device, "vkCmdEncodeVideoKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)gpa(in_device, "vkCmdSetEvent2KHR");
        pfn_CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)gpa(in_device, "vkCmdResetEvent2KHR");
        pfn_CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)gpa(in_device, "vkCmdWaitEvents2KHR");
        pfn_CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)gpa(in_device, "vkCmdPipelineBarrier2KHR");
        pfn_CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)gpa(in_device, "vkCmdWriteTimestamp2KHR");
        pfn_QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)gpa(in_device, "vkQueueSubmit2KHR");
        pfn_CmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)gpa(in_device, "vkCmdWriteBufferMarker2AMD");
        pfn_GetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)gpa(in_device, "vkGetQueueCheckpointData2NV");
        pfn_CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)gpa(in_device, "vkCmdCopyBuffer2KHR");
        pfn_CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)gpa(in_device, "vkCmdCopyImage2KHR");
        pfn_CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)gpa(in_device, "vkCmdCopyBufferToImage2KHR");
        pfn_CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)gpa(in_device, "vkCmdCopyImageToBuffer2KHR");
        pfn_CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)gpa(in_device, "vkCmdBlitImage2KHR");
        pfn_CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)gpa(in_device, "vkCmdResolveImage2KHR");
        pfn_CmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)gpa(in_device, "vkCmdTraceRaysIndirect2KHR");
        pfn_GetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)gpa(in_device, "vkGetDeviceBufferMemoryRequirementsKHR");
        pfn_GetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)gpa(in_device, "vkGetDeviceImageMemoryRequirementsKHR");
        pfn_GetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)gpa(in_device, "vkGetDeviceImageSparseMemoryRequirementsKHR");
        pfn_CmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)gpa(in_device, "vkCmdBindIndexBuffer2KHR");
        pfn_GetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)gpa(in_device, "vkGetRenderingAreaGranularityKHR");
        pfn_GetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)gpa(in_device, "vkGetDeviceImageSubresourceLayoutKHR");
        pfn_GetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)gpa(in_device, "vkGetImageSubresourceLayout2KHR");
        pfn_DebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)gpa(in_device, "vkDebugMarkerSetObjectTagEXT");
        pfn_DebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)gpa(in_device, "vkDebugMarkerSetObjectNameEXT");
        pfn_CmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)gpa(in_device, "vkCmdDebugMarkerBeginEXT");
        pfn_CmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)gpa(in_device, "vkCmdDebugMarkerEndEXT");
        pfn_CmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)gpa(in_device, "vkCmdDebugMarkerInsertEXT");
        pfn_CmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)gpa(in_device, "vkCmdBindTransformFeedbackBuffersEXT");
        pfn_CmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)gpa(in_device, "vkCmdBeginTransformFeedbackEXT");
        pfn_CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)gpa(in_device, "vkCmdEndTransformFeedbackEXT");
        pfn_CmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)gpa(in_device, "vkCmdBeginQueryIndexedEXT");
        pfn_CmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)gpa(in_device, "vkCmdEndQueryIndexedEXT");
        pfn_CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)gpa(in_device, "vkCmdDrawIndirectByteCountEXT");
        pfn_CreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)gpa(in_device, "vkCreateCuModuleNVX");
        pfn_CreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)gpa(in_device, "vkCreateCuFunctionNVX");
        pfn_DestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)gpa(in_device, "vkDestroyCuModuleNVX");
        pfn_DestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)gpa(in_device, "vkDestroyCuFunctionNVX");
        pfn_CmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)gpa(in_device, "vkCmdCuLaunchKernelNVX");
        pfn_GetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)gpa(in_device, "vkGetImageViewHandleNVX");
        pfn_GetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)gpa(in_device, "vkGetImageViewAddressNVX");
        pfn_CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)gpa(in_device, "vkCmdDrawIndirectCountAMD");
        pfn_CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)gpa(in_device, "vkCmdDrawIndexedIndirectCountAMD");
        pfn_GetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)gpa(in_device, "vkGetShaderInfoAMD");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_GetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)gpa(in_device, "vkGetMemoryWin32HandleNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_CmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)gpa(in_device, "vkCmdBeginConditionalRenderingEXT");
        pfn_CmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)gpa(in_device, "vkCmdEndConditionalRenderingEXT");
        pfn_CmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)gpa(in_device, "vkCmdSetViewportWScalingNV");
        pfn_DisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)gpa(in_device, "vkDisplayPowerControlEXT");
        pfn_RegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)gpa(in_device, "vkRegisterDeviceEventEXT");
        pfn_RegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)gpa(in_device, "vkRegisterDisplayEventEXT");
        pfn_GetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)gpa(in_device, "vkGetSwapchainCounterEXT");
        pfn_GetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)gpa(in_device, "vkGetRefreshCycleDurationGOOGLE");
        pfn_GetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)gpa(in_device, "vkGetPastPresentationTimingGOOGLE");
        pfn_CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)gpa(in_device, "vkCmdSetDiscardRectangleEXT");
        pfn_CmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)gpa(in_device, "vkCmdSetDiscardRectangleEnableEXT");
        pfn_CmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)gpa(in_device, "vkCmdSetDiscardRectangleModeEXT");
        pfn_SetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)gpa(in_device, "vkSetHdrMetadataEXT");
        pfn_SetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)gpa(in_device, "vkSetDebugUtilsObjectNameEXT");
        pfn_SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)gpa(in_device, "vkSetDebugUtilsObjectTagEXT");
        pfn_QueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)gpa(in_device, "vkQueueBeginDebugUtilsLabelEXT");
        pfn_QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)gpa(in_device, "vkQueueEndDebugUtilsLabelEXT");
        pfn_QueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)gpa(in_device, "vkQueueInsertDebugUtilsLabelEXT");
        pfn_CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)gpa(in_device, "vkCmdBeginDebugUtilsLabelEXT");
        pfn_CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)gpa(in_device, "vkCmdEndDebugUtilsLabelEXT");
        pfn_CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)gpa(in_device, "vkCmdInsertDebugUtilsLabelEXT");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        pfn_GetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)gpa(in_device, "vkGetAndroidHardwareBufferPropertiesANDROID");
        pfn_GetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)gpa(in_device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_CreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)gpa(in_device, "vkCreateExecutionGraphPipelinesAMDX");
        pfn_GetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)gpa(in_device, "vkGetExecutionGraphPipelineScratchSizeAMDX");
        pfn_GetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)gpa(in_device, "vkGetExecutionGraphPipelineNodeIndexAMDX");
        pfn_CmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)gpa(in_device, "vkCmdInitializeGraphScratchMemoryAMDX");
        pfn_CmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)gpa(in_device, "vkCmdDispatchGraphAMDX");
        pfn_CmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)gpa(in_device, "vkCmdDispatchGraphIndirectAMDX");
        pfn_CmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)gpa(in_device, "vkCmdDispatchGraphIndirectCountAMDX");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)gpa(in_device, "vkCmdSetSampleLocationsEXT");
        pfn_GetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)gpa(in_device, "vkGetImageDrmFormatModifierPropertiesEXT");
        pfn_CreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)gpa(in_device, "vkCreateValidationCacheEXT");
        pfn_DestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)gpa(in_device, "vkDestroyValidationCacheEXT");
        pfn_MergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)gpa(in_device, "vkMergeValidationCachesEXT");
        pfn_GetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)gpa(in_device, "vkGetValidationCacheDataEXT");
        pfn_CmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)gpa(in_device, "vkCmdBindShadingRateImageNV");
        pfn_CmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)gpa(in_device, "vkCmdSetViewportShadingRatePaletteNV");
        pfn_CmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)gpa(in_device, "vkCmdSetCoarseSampleOrderNV");
        pfn_CreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)gpa(in_device, "vkCreateAccelerationStructureNV");
        pfn_DestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)gpa(in_device, "vkDestroyAccelerationStructureNV");
        pfn_GetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)gpa(in_device, "vkGetAccelerationStructureMemoryRequirementsNV");
        pfn_BindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)gpa(in_device, "vkBindAccelerationStructureMemoryNV");
        pfn_CmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)gpa(in_device, "vkCmdBuildAccelerationStructureNV");
        pfn_CmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)gpa(in_device, "vkCmdCopyAccelerationStructureNV");
        pfn_CmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)gpa(in_device, "vkCmdTraceRaysNV");
        pfn_CreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)gpa(in_device, "vkCreateRayTracingPipelinesNV");
        pfn_GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)gpa(in_device, "vkGetRayTracingShaderGroupHandlesKHR");
        pfn_GetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)gpa(in_device, "vkGetRayTracingShaderGroupHandlesNV");
        pfn_GetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)gpa(in_device, "vkGetAccelerationStructureHandleNV");
        pfn_CmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)gpa(in_device, "vkCmdWriteAccelerationStructuresPropertiesNV");
        pfn_CompileDeferredNV = (PFN_vkCompileDeferredNV)gpa(in_device, "vkCompileDeferredNV");
        pfn_GetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)gpa(in_device, "vkGetMemoryHostPointerPropertiesEXT");
        pfn_CmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)gpa(in_device, "vkCmdWriteBufferMarkerAMD");
        pfn_GetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)gpa(in_device, "vkGetCalibratedTimestampsEXT");
        pfn_CmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)gpa(in_device, "vkCmdDrawMeshTasksNV");
        pfn_CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)gpa(in_device, "vkCmdDrawMeshTasksIndirectNV");
        pfn_CmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)gpa(in_device, "vkCmdDrawMeshTasksIndirectCountNV");
        pfn_CmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)gpa(in_device, "vkCmdSetExclusiveScissorEnableNV");
        pfn_CmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)gpa(in_device, "vkCmdSetExclusiveScissorNV");
        pfn_CmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)gpa(in_device, "vkCmdSetCheckpointNV");
        pfn_GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)gpa(in_device, "vkGetQueueCheckpointDataNV");
        pfn_InitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)gpa(in_device, "vkInitializePerformanceApiINTEL");
        pfn_UninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)gpa(in_device, "vkUninitializePerformanceApiINTEL");
        pfn_CmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)gpa(in_device, "vkCmdSetPerformanceMarkerINTEL");
        pfn_CmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)gpa(in_device, "vkCmdSetPerformanceStreamMarkerINTEL");
        pfn_CmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)gpa(in_device, "vkCmdSetPerformanceOverrideINTEL");
        pfn_AcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)gpa(in_device, "vkAcquirePerformanceConfigurationINTEL");
        pfn_ReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)gpa(in_device, "vkReleasePerformanceConfigurationINTEL");
        pfn_QueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)gpa(in_device, "vkQueueSetPerformanceConfigurationINTEL");
        pfn_GetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)gpa(in_device, "vkGetPerformanceParameterINTEL");
        pfn_SetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)gpa(in_device, "vkSetLocalDimmingAMD");
        pfn_GetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)gpa(in_device, "vkGetBufferDeviceAddressEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        pfn_AcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)gpa(in_device, "vkAcquireFullScreenExclusiveModeEXT");
        pfn_ReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)gpa(in_device, "vkReleaseFullScreenExclusiveModeEXT");
        pfn_GetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)gpa(in_device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        pfn_CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)gpa(in_device, "vkCmdSetLineStippleEXT");
        pfn_ResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)gpa(in_device, "vkResetQueryPoolEXT");
        pfn_CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)gpa(in_device, "vkCmdSetCullModeEXT");
        pfn_CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)gpa(in_device, "vkCmdSetFrontFaceEXT");
        pfn_CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)gpa(in_device, "vkCmdSetPrimitiveTopologyEXT");
        pfn_CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)gpa(in_device, "vkCmdSetViewportWithCountEXT");
        pfn_CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)gpa(in_device, "vkCmdSetScissorWithCountEXT");
        pfn_CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)gpa(in_device, "vkCmdBindVertexBuffers2EXT");
        pfn_CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)gpa(in_device, "vkCmdSetDepthTestEnableEXT");
        pfn_CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)gpa(in_device, "vkCmdSetDepthWriteEnableEXT");
        pfn_CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)gpa(in_device, "vkCmdSetDepthCompareOpEXT");
        pfn_CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)gpa(in_device, "vkCmdSetDepthBoundsTestEnableEXT");
        pfn_CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)gpa(in_device, "vkCmdSetStencilTestEnableEXT");
        pfn_CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)gpa(in_device, "vkCmdSetStencilOpEXT");
        pfn_CopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)gpa(in_device, "vkCopyMemoryToImageEXT");
        pfn_CopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)gpa(in_device, "vkCopyImageToMemoryEXT");
        pfn_CopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)gpa(in_device, "vkCopyImageToImageEXT");
        pfn_TransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)gpa(in_device, "vkTransitionImageLayoutEXT");
        pfn_GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)gpa(in_device, "vkGetImageSubresourceLayout2EXT");
        pfn_ReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)gpa(in_device, "vkReleaseSwapchainImagesEXT");
        pfn_GetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)gpa(in_device, "vkGetGeneratedCommandsMemoryRequirementsNV");
        pfn_CmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)gpa(in_device, "vkCmdPreprocessGeneratedCommandsNV");
        pfn_CmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)gpa(in_device, "vkCmdExecuteGeneratedCommandsNV");
        pfn_CmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)gpa(in_device, "vkCmdBindPipelineShaderGroupNV");
        pfn_CreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)gpa(in_device, "vkCreateIndirectCommandsLayoutNV");
        pfn_DestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)gpa(in_device, "vkDestroyIndirectCommandsLayoutNV");
        pfn_CmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)gpa(in_device, "vkCmdSetDepthBias2EXT");
        pfn_CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)gpa(in_device, "vkCreatePrivateDataSlotEXT");
        pfn_DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)gpa(in_device, "vkDestroyPrivateDataSlotEXT");
        pfn_SetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)gpa(in_device, "vkSetPrivateDataEXT");
        pfn_GetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)gpa(in_device, "vkGetPrivateDataEXT");
#ifdef VK_USE_PLATFORM_METAL_EXT
        pfn_ExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)gpa(in_device, "vkExportMetalObjectsEXT");
#endif  // VK_USE_PLATFORM_METAL_EXT
        pfn_GetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)gpa(in_device, "vkGetDescriptorSetLayoutSizeEXT");
        pfn_GetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)gpa(in_device, "vkGetDescriptorSetLayoutBindingOffsetEXT");
        pfn_GetDescriptorEXT = (PFN_vkGetDescriptorEXT)gpa(in_device, "vkGetDescriptorEXT");
        pfn_CmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)gpa(in_device, "vkCmdBindDescriptorBuffersEXT");
        pfn_CmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)gpa(in_device, "vkCmdSetDescriptorBufferOffsetsEXT");
        pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)gpa(in_device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
        pfn_GetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)gpa(in_device, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
        pfn_GetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)gpa(in_device, "vkGetImageOpaqueCaptureDescriptorDataEXT");
        pfn_GetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)gpa(in_device, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
        pfn_GetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)gpa(in_device, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
        pfn_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)gpa(in_device, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
        pfn_CmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)gpa(in_device, "vkCmdSetFragmentShadingRateEnumNV");
        pfn_GetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)gpa(in_device, "vkGetDeviceFaultInfoEXT");
        pfn_CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)gpa(in_device, "vkCmdSetVertexInputEXT");
#ifdef VK_USE_PLATFORM_FUCHSIA
        pfn_GetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)gpa(in_device, "vkGetMemoryZirconHandleFUCHSIA");
        pfn_GetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)gpa(in_device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
        pfn_ImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)gpa(in_device, "vkImportSemaphoreZirconHandleFUCHSIA");
        pfn_GetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)gpa(in_device, "vkGetSemaphoreZirconHandleFUCHSIA");
        pfn_CreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)gpa(in_device, "vkCreateBufferCollectionFUCHSIA");
        pfn_SetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)gpa(in_device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
        pfn_SetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)gpa(in_device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
        pfn_DestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)gpa(in_device, "vkDestroyBufferCollectionFUCHSIA");
        pfn_GetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)gpa(in_device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif  // VK_USE_PLATFORM_FUCHSIA
        pfn_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)gpa(in_device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
        pfn_CmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)gpa(in_device, "vkCmdSubpassShadingHUAWEI");
        pfn_CmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)gpa(in_device, "vkCmdBindInvocationMaskHUAWEI");
        pfn_GetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)gpa(in_device, "vkGetMemoryRemoteAddressNV");
        pfn_GetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)gpa(in_device, "vkGetPipelinePropertiesEXT");
        pfn_CmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)gpa(in_device, "vkCmdSetPatchControlPointsEXT");
        pfn_CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)gpa(in_device, "vkCmdSetRasterizerDiscardEnableEXT");
        pfn_CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)gpa(in_device, "vkCmdSetDepthBiasEnableEXT");
        pfn_CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)gpa(in_device, "vkCmdSetLogicOpEXT");
        pfn_CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)gpa(in_device, "vkCmdSetPrimitiveRestartEnableEXT");
        pfn_CmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)gpa(in_device, "vkCmdSetColorWriteEnableEXT");
        pfn_CmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)gpa(in_device, "vkCmdDrawMultiEXT");
        pfn_CmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)gpa(in_device, "vkCmdDrawMultiIndexedEXT");
        pfn_CreateMicromapEXT = (PFN_vkCreateMicromapEXT)gpa(in_device, "vkCreateMicromapEXT");
        pfn_DestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)gpa(in_device, "vkDestroyMicromapEXT");
        pfn_CmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)gpa(in_device, "vkCmdBuildMicromapsEXT");
        pfn_BuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)gpa(in_device, "vkBuildMicromapsEXT");
        pfn_CopyMicromapEXT = (PFN_vkCopyMicromapEXT)gpa(in_device, "vkCopyMicromapEXT");
        pfn_CopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)gpa(in_device, "vkCopyMicromapToMemoryEXT");
        pfn_CopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)gpa(in_device, "vkCopyMemoryToMicromapEXT");
        pfn_WriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)gpa(in_device, "vkWriteMicromapsPropertiesEXT");
        pfn_CmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)gpa(in_device, "vkCmdCopyMicromapEXT");
        pfn_CmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)gpa(in_device, "vkCmdCopyMicromapToMemoryEXT");
        pfn_CmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)gpa(in_device, "vkCmdCopyMemoryToMicromapEXT");
        pfn_CmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)gpa(in_device, "vkCmdWriteMicromapsPropertiesEXT");
        pfn_GetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)gpa(in_device, "vkGetDeviceMicromapCompatibilityEXT");
        pfn_GetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)gpa(in_device, "vkGetMicromapBuildSizesEXT");
        pfn_CmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)gpa(in_device, "vkCmdDrawClusterHUAWEI");
        pfn_CmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)gpa(in_device, "vkCmdDrawClusterIndirectHUAWEI");
        pfn_SetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)gpa(in_device, "vkSetDeviceMemoryPriorityEXT");
        pfn_GetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)gpa(in_device, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
        pfn_GetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)gpa(in_device, "vkGetDescriptorSetHostMappingVALVE");
        pfn_CmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)gpa(in_device, "vkCmdCopyMemoryIndirectNV");
        pfn_CmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)gpa(in_device, "vkCmdCopyMemoryToImageIndirectNV");
        pfn_CmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)gpa(in_device, "vkCmdDecompressMemoryNV");
        pfn_CmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)gpa(in_device, "vkCmdDecompressMemoryIndirectCountNV");
        pfn_GetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)gpa(in_device, "vkGetPipelineIndirectMemoryRequirementsNV");
        pfn_CmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)gpa(in_device, "vkCmdUpdatePipelineIndirectBufferNV");
        pfn_GetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)gpa(in_device, "vkGetPipelineIndirectDeviceAddressNV");
        pfn_CmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)gpa(in_device, "vkCmdSetTessellationDomainOriginEXT");
        pfn_CmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)gpa(in_device, "vkCmdSetDepthClampEnableEXT");
        pfn_CmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)gpa(in_device, "vkCmdSetPolygonModeEXT");
        pfn_CmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)gpa(in_device, "vkCmdSetRasterizationSamplesEXT");
        pfn_CmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)gpa(in_device, "vkCmdSetSampleMaskEXT");
        pfn_CmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)gpa(in_device, "vkCmdSetAlphaToCoverageEnableEXT");
        pfn_CmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)gpa(in_device, "vkCmdSetAlphaToOneEnableEXT");
        pfn_CmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)gpa(in_device, "vkCmdSetLogicOpEnableEXT");
        pfn_CmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)gpa(in_device, "vkCmdSetColorBlendEnableEXT");
        pfn_CmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)gpa(in_device, "vkCmdSetColorBlendEquationEXT");
        pfn_CmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)gpa(in_device, "vkCmdSetColorWriteMaskEXT");
        pfn_CmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)gpa(in_device, "vkCmdSetRasterizationStreamEXT");
        pfn_CmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)gpa(in_device, "vkCmdSetConservativeRasterizationModeEXT");
        pfn_CmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)gpa(in_device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
        pfn_CmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)gpa(in_device, "vkCmdSetDepthClipEnableEXT");
        pfn_CmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)gpa(in_device, "vkCmdSetSampleLocationsEnableEXT");
        pfn_CmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)gpa(in_device, "vkCmdSetColorBlendAdvancedEXT");
        pfn_CmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)gpa(in_device, "vkCmdSetProvokingVertexModeEXT");
        pfn_CmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)gpa(in_device, "vkCmdSetLineRasterizationModeEXT");
        pfn_CmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)gpa(in_device, "vkCmdSetLineStippleEnableEXT");
        pfn_CmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)gpa(in_device, "vkCmdSetDepthClipNegativeOneToOneEXT");
        pfn_CmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)gpa(in_device, "vkCmdSetViewportWScalingEnableNV");
        pfn_CmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)gpa(in_device, "vkCmdSetViewportSwizzleNV");
        pfn_CmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)gpa(in_device, "vkCmdSetCoverageToColorEnableNV");
        pfn_CmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)gpa(in_device, "vkCmdSetCoverageToColorLocationNV");
        pfn_CmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)gpa(in_device, "vkCmdSetCoverageModulationModeNV");
        pfn_CmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)gpa(in_device, "vkCmdSetCoverageModulationTableEnableNV");
        pfn_CmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)gpa(in_device, "vkCmdSetCoverageModulationTableNV");
        pfn_CmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)gpa(in_device, "vkCmdSetShadingRateImageEnableNV");
        pfn_CmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)gpa(in_device, "vkCmdSetRepresentativeFragmentTestEnableNV");
        pfn_CmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)gpa(in_device, "vkCmdSetCoverageReductionModeNV");
        pfn_GetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)gpa(in_device, "vkGetShaderModuleIdentifierEXT");
        pfn_GetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)gpa(in_device, "vkGetShaderModuleCreateInfoIdentifierEXT");
        pfn_CreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)gpa(in_device, "vkCreateOpticalFlowSessionNV");
        pfn_DestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)gpa(in_device, "vkDestroyOpticalFlowSessionNV");
        pfn_BindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)gpa(in_device, "vkBindOpticalFlowSessionImageNV");
        pfn_CmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)gpa(in_device, "vkCmdOpticalFlowExecuteNV");
        pfn_CreateShadersEXT = (PFN_vkCreateShadersEXT)gpa(in_device, "vkCreateShadersEXT");
        pfn_DestroyShaderEXT = (PFN_vkDestroyShaderEXT)gpa(in_device, "vkDestroyShaderEXT");
        pfn_GetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)gpa(in_device, "vkGetShaderBinaryDataEXT");
        pfn_CmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)gpa(in_device, "vkCmdBindShadersEXT");
        pfn_GetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)gpa(in_device, "vkGetFramebufferTilePropertiesQCOM");
        pfn_GetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)gpa(in_device, "vkGetDynamicRenderingTilePropertiesQCOM");
        pfn_SetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)gpa(in_device, "vkSetLatencySleepModeNV");
        pfn_LatencySleepNV = (PFN_vkLatencySleepNV)gpa(in_device, "vkLatencySleepNV");
        pfn_SetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)gpa(in_device, "vkSetLatencyMarkerNV");
        pfn_GetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)gpa(in_device, "vkGetLatencyTimingsNV");
        pfn_QueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)gpa(in_device, "vkQueueNotifyOutOfBandNV");
        pfn_CmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)gpa(in_device, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        pfn_GetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)gpa(in_device, "vkGetScreenBufferPropertiesQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        pfn_CreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)gpa(in_device, "vkCreateAccelerationStructureKHR");
        pfn_DestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)gpa(in_device, "vkDestroyAccelerationStructureKHR");
        pfn_CmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)gpa(in_device, "vkCmdBuildAccelerationStructuresKHR");
        pfn_CmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)gpa(in_device, "vkCmdBuildAccelerationStructuresIndirectKHR");
        pfn_BuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)gpa(in_device, "vkBuildAccelerationStructuresKHR");
        pfn_CopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)gpa(in_device, "vkCopyAccelerationStructureKHR");
        pfn_CopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)gpa(in_device, "vkCopyAccelerationStructureToMemoryKHR");
        pfn_CopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)gpa(in_device, "vkCopyMemoryToAccelerationStructureKHR");
        pfn_WriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)gpa(in_device, "vkWriteAccelerationStructuresPropertiesKHR");
        pfn_CmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)gpa(in_device, "vkCmdCopyAccelerationStructureKHR");
        pfn_CmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)gpa(in_device, "vkCmdCopyAccelerationStructureToMemoryKHR");
        pfn_CmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)gpa(in_device, "vkCmdCopyMemoryToAccelerationStructureKHR");
        pfn_GetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)gpa(in_device, "vkGetAccelerationStructureDeviceAddressKHR");
        pfn_CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)gpa(in_device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
        pfn_GetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)gpa(in_device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
        pfn_GetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)gpa(in_device, "vkGetAccelerationStructureBuildSizesKHR");
        pfn_CmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)gpa(in_device, "vkCmdTraceRaysKHR");
        pfn_CreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)gpa(in_device, "vkCreateRayTracingPipelinesKHR");
        pfn_GetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)gpa(in_device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
        pfn_CmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)gpa(in_device, "vkCmdTraceRaysIndirectKHR");
        pfn_GetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)gpa(in_device, "vkGetRayTracingShaderGroupStackSizeKHR");
        pfn_CmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)gpa(in_device, "vkCmdSetRayTracingPipelineStackSizeKHR");
        pfn_CmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)gpa(in_device, "vkCmdDrawMeshTasksEXT");
        pfn_CmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)gpa(in_device, "vkCmdDrawMeshTasksIndirectEXT");
        pfn_CmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)gpa(in_device, "vkCmdDrawMeshTasksIndirectCountEXT");
        return VK_SUCCESS;
    }
};
struct VkuCommandBufferFunctionTable {
    VkCommandBuffer commandBuffer;
    PFN_vkBeginCommandBuffer pfn_BeginCommandBuffer{};
    PFN_vkEndCommandBuffer pfn_EndCommandBuffer{};
    PFN_vkResetCommandBuffer pfn_ResetCommandBuffer{};
    PFN_vkCmdBindPipeline pfn_CmdBindPipeline{};
    PFN_vkCmdSetViewport pfn_CmdSetViewport{};
    PFN_vkCmdSetScissor pfn_CmdSetScissor{};
    PFN_vkCmdSetLineWidth pfn_CmdSetLineWidth{};
    PFN_vkCmdSetDepthBias pfn_CmdSetDepthBias{};
    PFN_vkCmdSetBlendConstants pfn_CmdSetBlendConstants{};
    PFN_vkCmdSetDepthBounds pfn_CmdSetDepthBounds{};
    PFN_vkCmdSetStencilCompareMask pfn_CmdSetStencilCompareMask{};
    PFN_vkCmdSetStencilWriteMask pfn_CmdSetStencilWriteMask{};
    PFN_vkCmdSetStencilReference pfn_CmdSetStencilReference{};
    PFN_vkCmdBindDescriptorSets pfn_CmdBindDescriptorSets{};
    PFN_vkCmdBindIndexBuffer pfn_CmdBindIndexBuffer{};
    PFN_vkCmdBindVertexBuffers pfn_CmdBindVertexBuffers{};
    PFN_vkCmdDraw pfn_CmdDraw{};
    PFN_vkCmdDrawIndexed pfn_CmdDrawIndexed{};
    PFN_vkCmdDrawIndirect pfn_CmdDrawIndirect{};
    PFN_vkCmdDrawIndexedIndirect pfn_CmdDrawIndexedIndirect{};
    PFN_vkCmdDispatch pfn_CmdDispatch{};
    PFN_vkCmdDispatchIndirect pfn_CmdDispatchIndirect{};
    PFN_vkCmdCopyBuffer pfn_CmdCopyBuffer{};
    PFN_vkCmdCopyImage pfn_CmdCopyImage{};
    PFN_vkCmdBlitImage pfn_CmdBlitImage{};
    PFN_vkCmdCopyBufferToImage pfn_CmdCopyBufferToImage{};
    PFN_vkCmdCopyImageToBuffer pfn_CmdCopyImageToBuffer{};
    PFN_vkCmdUpdateBuffer pfn_CmdUpdateBuffer{};
    PFN_vkCmdFillBuffer pfn_CmdFillBuffer{};
    PFN_vkCmdClearColorImage pfn_CmdClearColorImage{};
    PFN_vkCmdClearDepthStencilImage pfn_CmdClearDepthStencilImage{};
    PFN_vkCmdClearAttachments pfn_CmdClearAttachments{};
    PFN_vkCmdResolveImage pfn_CmdResolveImage{};
    PFN_vkCmdSetEvent pfn_CmdSetEvent{};
    PFN_vkCmdResetEvent pfn_CmdResetEvent{};
    PFN_vkCmdWaitEvents pfn_CmdWaitEvents{};
    PFN_vkCmdPipelineBarrier pfn_CmdPipelineBarrier{};
    PFN_vkCmdBeginQuery pfn_CmdBeginQuery{};
    PFN_vkCmdEndQuery pfn_CmdEndQuery{};
    PFN_vkCmdResetQueryPool pfn_CmdResetQueryPool{};
    PFN_vkCmdWriteTimestamp pfn_CmdWriteTimestamp{};
    PFN_vkCmdCopyQueryPoolResults pfn_CmdCopyQueryPoolResults{};
    PFN_vkCmdPushConstants pfn_CmdPushConstants{};
    PFN_vkCmdBeginRenderPass pfn_CmdBeginRenderPass{};
    PFN_vkCmdNextSubpass pfn_CmdNextSubpass{};
    PFN_vkCmdEndRenderPass pfn_CmdEndRenderPass{};
    PFN_vkCmdExecuteCommands pfn_CmdExecuteCommands{};
    PFN_vkCmdSetDeviceMask pfn_CmdSetDeviceMask{};
    PFN_vkCmdDispatchBase pfn_CmdDispatchBase{};
    PFN_vkCmdDrawIndirectCount pfn_CmdDrawIndirectCount{};
    PFN_vkCmdDrawIndexedIndirectCount pfn_CmdDrawIndexedIndirectCount{};
    PFN_vkCmdBeginRenderPass2 pfn_CmdBeginRenderPass2{};
    PFN_vkCmdNextSubpass2 pfn_CmdNextSubpass2{};
    PFN_vkCmdEndRenderPass2 pfn_CmdEndRenderPass2{};
    PFN_vkCmdSetEvent2 pfn_CmdSetEvent2{};
    PFN_vkCmdResetEvent2 pfn_CmdResetEvent2{};
    PFN_vkCmdWaitEvents2 pfn_CmdWaitEvents2{};
    PFN_vkCmdPipelineBarrier2 pfn_CmdPipelineBarrier2{};
    PFN_vkCmdWriteTimestamp2 pfn_CmdWriteTimestamp2{};
    PFN_vkCmdCopyBuffer2 pfn_CmdCopyBuffer2{};
    PFN_vkCmdCopyImage2 pfn_CmdCopyImage2{};
    PFN_vkCmdCopyBufferToImage2 pfn_CmdCopyBufferToImage2{};
    PFN_vkCmdCopyImageToBuffer2 pfn_CmdCopyImageToBuffer2{};
    PFN_vkCmdBlitImage2 pfn_CmdBlitImage2{};
    PFN_vkCmdResolveImage2 pfn_CmdResolveImage2{};
    PFN_vkCmdBeginRendering pfn_CmdBeginRendering{};
    PFN_vkCmdEndRendering pfn_CmdEndRendering{};
    PFN_vkCmdSetCullMode pfn_CmdSetCullMode{};
    PFN_vkCmdSetFrontFace pfn_CmdSetFrontFace{};
    PFN_vkCmdSetPrimitiveTopology pfn_CmdSetPrimitiveTopology{};
    PFN_vkCmdSetViewportWithCount pfn_CmdSetViewportWithCount{};
    PFN_vkCmdSetScissorWithCount pfn_CmdSetScissorWithCount{};
    PFN_vkCmdBindVertexBuffers2 pfn_CmdBindVertexBuffers2{};
    PFN_vkCmdSetDepthTestEnable pfn_CmdSetDepthTestEnable{};
    PFN_vkCmdSetDepthWriteEnable pfn_CmdSetDepthWriteEnable{};
    PFN_vkCmdSetDepthCompareOp pfn_CmdSetDepthCompareOp{};
    PFN_vkCmdSetDepthBoundsTestEnable pfn_CmdSetDepthBoundsTestEnable{};
    PFN_vkCmdSetStencilTestEnable pfn_CmdSetStencilTestEnable{};
    PFN_vkCmdSetStencilOp pfn_CmdSetStencilOp{};
    PFN_vkCmdSetRasterizerDiscardEnable pfn_CmdSetRasterizerDiscardEnable{};
    PFN_vkCmdSetDepthBiasEnable pfn_CmdSetDepthBiasEnable{};
    PFN_vkCmdSetPrimitiveRestartEnable pfn_CmdSetPrimitiveRestartEnable{};
    PFN_vkCmdBeginVideoCodingKHR pfn_CmdBeginVideoCodingKHR{};
    PFN_vkCmdEndVideoCodingKHR pfn_CmdEndVideoCodingKHR{};
    PFN_vkCmdControlVideoCodingKHR pfn_CmdControlVideoCodingKHR{};
    PFN_vkCmdDecodeVideoKHR pfn_CmdDecodeVideoKHR{};
    PFN_vkCmdBeginRenderingKHR pfn_CmdBeginRenderingKHR{};
    PFN_vkCmdEndRenderingKHR pfn_CmdEndRenderingKHR{};
    PFN_vkCmdSetDeviceMaskKHR pfn_CmdSetDeviceMaskKHR{};
    PFN_vkCmdDispatchBaseKHR pfn_CmdDispatchBaseKHR{};
    PFN_vkCmdPushDescriptorSetKHR pfn_CmdPushDescriptorSetKHR{};
    PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_CmdPushDescriptorSetWithTemplateKHR{};
    PFN_vkCmdBeginRenderPass2KHR pfn_CmdBeginRenderPass2KHR{};
    PFN_vkCmdNextSubpass2KHR pfn_CmdNextSubpass2KHR{};
    PFN_vkCmdEndRenderPass2KHR pfn_CmdEndRenderPass2KHR{};
    PFN_vkCmdDrawIndirectCountKHR pfn_CmdDrawIndirectCountKHR{};
    PFN_vkCmdDrawIndexedIndirectCountKHR pfn_CmdDrawIndexedIndirectCountKHR{};
    PFN_vkCmdSetFragmentShadingRateKHR pfn_CmdSetFragmentShadingRateKHR{};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdEncodeVideoKHR pfn_CmdEncodeVideoKHR{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdSetEvent2KHR pfn_CmdSetEvent2KHR{};
    PFN_vkCmdResetEvent2KHR pfn_CmdResetEvent2KHR{};
    PFN_vkCmdWaitEvents2KHR pfn_CmdWaitEvents2KHR{};
    PFN_vkCmdPipelineBarrier2KHR pfn_CmdPipelineBarrier2KHR{};
    PFN_vkCmdWriteTimestamp2KHR pfn_CmdWriteTimestamp2KHR{};
    PFN_vkCmdWriteBufferMarker2AMD pfn_CmdWriteBufferMarker2AMD{};
    PFN_vkCmdCopyBuffer2KHR pfn_CmdCopyBuffer2KHR{};
    PFN_vkCmdCopyImage2KHR pfn_CmdCopyImage2KHR{};
    PFN_vkCmdCopyBufferToImage2KHR pfn_CmdCopyBufferToImage2KHR{};
    PFN_vkCmdCopyImageToBuffer2KHR pfn_CmdCopyImageToBuffer2KHR{};
    PFN_vkCmdBlitImage2KHR pfn_CmdBlitImage2KHR{};
    PFN_vkCmdResolveImage2KHR pfn_CmdResolveImage2KHR{};
    PFN_vkCmdTraceRaysIndirect2KHR pfn_CmdTraceRaysIndirect2KHR{};
    PFN_vkCmdBindIndexBuffer2KHR pfn_CmdBindIndexBuffer2KHR{};
    PFN_vkCmdDebugMarkerBeginEXT pfn_CmdDebugMarkerBeginEXT{};
    PFN_vkCmdDebugMarkerEndEXT pfn_CmdDebugMarkerEndEXT{};
    PFN_vkCmdDebugMarkerInsertEXT pfn_CmdDebugMarkerInsertEXT{};
    PFN_vkCmdBindTransformFeedbackBuffersEXT pfn_CmdBindTransformFeedbackBuffersEXT{};
    PFN_vkCmdBeginTransformFeedbackEXT pfn_CmdBeginTransformFeedbackEXT{};
    PFN_vkCmdEndTransformFeedbackEXT pfn_CmdEndTransformFeedbackEXT{};
    PFN_vkCmdBeginQueryIndexedEXT pfn_CmdBeginQueryIndexedEXT{};
    PFN_vkCmdEndQueryIndexedEXT pfn_CmdEndQueryIndexedEXT{};
    PFN_vkCmdDrawIndirectByteCountEXT pfn_CmdDrawIndirectByteCountEXT{};
    PFN_vkCmdCuLaunchKernelNVX pfn_CmdCuLaunchKernelNVX{};
    PFN_vkCmdDrawIndirectCountAMD pfn_CmdDrawIndirectCountAMD{};
    PFN_vkCmdDrawIndexedIndirectCountAMD pfn_CmdDrawIndexedIndirectCountAMD{};
    PFN_vkCmdBeginConditionalRenderingEXT pfn_CmdBeginConditionalRenderingEXT{};
    PFN_vkCmdEndConditionalRenderingEXT pfn_CmdEndConditionalRenderingEXT{};
    PFN_vkCmdSetViewportWScalingNV pfn_CmdSetViewportWScalingNV{};
    PFN_vkCmdSetDiscardRectangleEXT pfn_CmdSetDiscardRectangleEXT{};
    PFN_vkCmdSetDiscardRectangleEnableEXT pfn_CmdSetDiscardRectangleEnableEXT{};
    PFN_vkCmdSetDiscardRectangleModeEXT pfn_CmdSetDiscardRectangleModeEXT{};
    PFN_vkCmdBeginDebugUtilsLabelEXT pfn_CmdBeginDebugUtilsLabelEXT{};
    PFN_vkCmdEndDebugUtilsLabelEXT pfn_CmdEndDebugUtilsLabelEXT{};
    PFN_vkCmdInsertDebugUtilsLabelEXT pfn_CmdInsertDebugUtilsLabelEXT{};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdInitializeGraphScratchMemoryAMDX pfn_CmdInitializeGraphScratchMemoryAMDX{};
    PFN_vkCmdDispatchGraphAMDX pfn_CmdDispatchGraphAMDX{};
    PFN_vkCmdDispatchGraphIndirectAMDX pfn_CmdDispatchGraphIndirectAMDX{};
    PFN_vkCmdDispatchGraphIndirectCountAMDX pfn_CmdDispatchGraphIndirectCountAMDX{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdSetSampleLocationsEXT pfn_CmdSetSampleLocationsEXT{};
    PFN_vkCmdBindShadingRateImageNV pfn_CmdBindShadingRateImageNV{};
    PFN_vkCmdSetViewportShadingRatePaletteNV pfn_CmdSetViewportShadingRatePaletteNV{};
    PFN_vkCmdSetCoarseSampleOrderNV pfn_CmdSetCoarseSampleOrderNV{};
    PFN_vkCmdBuildAccelerationStructureNV pfn_CmdBuildAccelerationStructureNV{};
    PFN_vkCmdCopyAccelerationStructureNV pfn_CmdCopyAccelerationStructureNV{};
    PFN_vkCmdTraceRaysNV pfn_CmdTraceRaysNV{};
    PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_CmdWriteAccelerationStructuresPropertiesNV{};
    PFN_vkCmdWriteBufferMarkerAMD pfn_CmdWriteBufferMarkerAMD{};
    PFN_vkCmdDrawMeshTasksNV pfn_CmdDrawMeshTasksNV{};
    PFN_vkCmdDrawMeshTasksIndirectNV pfn_CmdDrawMeshTasksIndirectNV{};
    PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_CmdDrawMeshTasksIndirectCountNV{};
    PFN_vkCmdSetExclusiveScissorEnableNV pfn_CmdSetExclusiveScissorEnableNV{};
    PFN_vkCmdSetExclusiveScissorNV pfn_CmdSetExclusiveScissorNV{};
    PFN_vkCmdSetCheckpointNV pfn_CmdSetCheckpointNV{};
    PFN_vkCmdSetPerformanceMarkerINTEL pfn_CmdSetPerformanceMarkerINTEL{};
    PFN_vkCmdSetPerformanceStreamMarkerINTEL pfn_CmdSetPerformanceStreamMarkerINTEL{};
    PFN_vkCmdSetPerformanceOverrideINTEL pfn_CmdSetPerformanceOverrideINTEL{};
    PFN_vkCmdSetLineStippleEXT pfn_CmdSetLineStippleEXT{};
    PFN_vkCmdSetCullModeEXT pfn_CmdSetCullModeEXT{};
    PFN_vkCmdSetFrontFaceEXT pfn_CmdSetFrontFaceEXT{};
    PFN_vkCmdSetPrimitiveTopologyEXT pfn_CmdSetPrimitiveTopologyEXT{};
    PFN_vkCmdSetViewportWithCountEXT pfn_CmdSetViewportWithCountEXT{};
    PFN_vkCmdSetScissorWithCountEXT pfn_CmdSetScissorWithCountEXT{};
    PFN_vkCmdBindVertexBuffers2EXT pfn_CmdBindVertexBuffers2EXT{};
    PFN_vkCmdSetDepthTestEnableEXT pfn_CmdSetDepthTestEnableEXT{};
    PFN_vkCmdSetDepthWriteEnableEXT pfn_CmdSetDepthWriteEnableEXT{};
    PFN_vkCmdSetDepthCompareOpEXT pfn_CmdSetDepthCompareOpEXT{};
    PFN_vkCmdSetDepthBoundsTestEnableEXT pfn_CmdSetDepthBoundsTestEnableEXT{};
    PFN_vkCmdSetStencilTestEnableEXT pfn_CmdSetStencilTestEnableEXT{};
    PFN_vkCmdSetStencilOpEXT pfn_CmdSetStencilOpEXT{};
    PFN_vkCmdPreprocessGeneratedCommandsNV pfn_CmdPreprocessGeneratedCommandsNV{};
    PFN_vkCmdExecuteGeneratedCommandsNV pfn_CmdExecuteGeneratedCommandsNV{};
    PFN_vkCmdBindPipelineShaderGroupNV pfn_CmdBindPipelineShaderGroupNV{};
    PFN_vkCmdSetDepthBias2EXT pfn_CmdSetDepthBias2EXT{};
    PFN_vkCmdBindDescriptorBuffersEXT pfn_CmdBindDescriptorBuffersEXT{};
    PFN_vkCmdSetDescriptorBufferOffsetsEXT pfn_CmdSetDescriptorBufferOffsetsEXT{};
    PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT{};
    PFN_vkCmdSetFragmentShadingRateEnumNV pfn_CmdSetFragmentShadingRateEnumNV{};
    PFN_vkCmdSetVertexInputEXT pfn_CmdSetVertexInputEXT{};
    PFN_vkCmdSubpassShadingHUAWEI pfn_CmdSubpassShadingHUAWEI{};
    PFN_vkCmdBindInvocationMaskHUAWEI pfn_CmdBindInvocationMaskHUAWEI{};
    PFN_vkCmdSetPatchControlPointsEXT pfn_CmdSetPatchControlPointsEXT{};
    PFN_vkCmdSetRasterizerDiscardEnableEXT pfn_CmdSetRasterizerDiscardEnableEXT{};
    PFN_vkCmdSetDepthBiasEnableEXT pfn_CmdSetDepthBiasEnableEXT{};
    PFN_vkCmdSetLogicOpEXT pfn_CmdSetLogicOpEXT{};
    PFN_vkCmdSetPrimitiveRestartEnableEXT pfn_CmdSetPrimitiveRestartEnableEXT{};
    PFN_vkCmdSetColorWriteEnableEXT pfn_CmdSetColorWriteEnableEXT{};
    PFN_vkCmdDrawMultiEXT pfn_CmdDrawMultiEXT{};
    PFN_vkCmdDrawMultiIndexedEXT pfn_CmdDrawMultiIndexedEXT{};
    PFN_vkCmdBuildMicromapsEXT pfn_CmdBuildMicromapsEXT{};
    PFN_vkCmdCopyMicromapEXT pfn_CmdCopyMicromapEXT{};
    PFN_vkCmdCopyMicromapToMemoryEXT pfn_CmdCopyMicromapToMemoryEXT{};
    PFN_vkCmdCopyMemoryToMicromapEXT pfn_CmdCopyMemoryToMicromapEXT{};
    PFN_vkCmdWriteMicromapsPropertiesEXT pfn_CmdWriteMicromapsPropertiesEXT{};
    PFN_vkCmdDrawClusterHUAWEI pfn_CmdDrawClusterHUAWEI{};
    PFN_vkCmdDrawClusterIndirectHUAWEI pfn_CmdDrawClusterIndirectHUAWEI{};
    PFN_vkCmdCopyMemoryIndirectNV pfn_CmdCopyMemoryIndirectNV{};
    PFN_vkCmdCopyMemoryToImageIndirectNV pfn_CmdCopyMemoryToImageIndirectNV{};
    PFN_vkCmdDecompressMemoryNV pfn_CmdDecompressMemoryNV{};
    PFN_vkCmdDecompressMemoryIndirectCountNV pfn_CmdDecompressMemoryIndirectCountNV{};
    PFN_vkCmdUpdatePipelineIndirectBufferNV pfn_CmdUpdatePipelineIndirectBufferNV{};
    PFN_vkCmdSetTessellationDomainOriginEXT pfn_CmdSetTessellationDomainOriginEXT{};
    PFN_vkCmdSetDepthClampEnableEXT pfn_CmdSetDepthClampEnableEXT{};
    PFN_vkCmdSetPolygonModeEXT pfn_CmdSetPolygonModeEXT{};
    PFN_vkCmdSetRasterizationSamplesEXT pfn_CmdSetRasterizationSamplesEXT{};
    PFN_vkCmdSetSampleMaskEXT pfn_CmdSetSampleMaskEXT{};
    PFN_vkCmdSetAlphaToCoverageEnableEXT pfn_CmdSetAlphaToCoverageEnableEXT{};
    PFN_vkCmdSetAlphaToOneEnableEXT pfn_CmdSetAlphaToOneEnableEXT{};
    PFN_vkCmdSetLogicOpEnableEXT pfn_CmdSetLogicOpEnableEXT{};
    PFN_vkCmdSetColorBlendEnableEXT pfn_CmdSetColorBlendEnableEXT{};
    PFN_vkCmdSetColorBlendEquationEXT pfn_CmdSetColorBlendEquationEXT{};
    PFN_vkCmdSetColorWriteMaskEXT pfn_CmdSetColorWriteMaskEXT{};
    PFN_vkCmdSetRasterizationStreamEXT pfn_CmdSetRasterizationStreamEXT{};
    PFN_vkCmdSetConservativeRasterizationModeEXT pfn_CmdSetConservativeRasterizationModeEXT{};
    PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT pfn_CmdSetExtraPrimitiveOverestimationSizeEXT{};
    PFN_vkCmdSetDepthClipEnableEXT pfn_CmdSetDepthClipEnableEXT{};
    PFN_vkCmdSetSampleLocationsEnableEXT pfn_CmdSetSampleLocationsEnableEXT{};
    PFN_vkCmdSetColorBlendAdvancedEXT pfn_CmdSetColorBlendAdvancedEXT{};
    PFN_vkCmdSetProvokingVertexModeEXT pfn_CmdSetProvokingVertexModeEXT{};
    PFN_vkCmdSetLineRasterizationModeEXT pfn_CmdSetLineRasterizationModeEXT{};
    PFN_vkCmdSetLineStippleEnableEXT pfn_CmdSetLineStippleEnableEXT{};
    PFN_vkCmdSetDepthClipNegativeOneToOneEXT pfn_CmdSetDepthClipNegativeOneToOneEXT{};
    PFN_vkCmdSetViewportWScalingEnableNV pfn_CmdSetViewportWScalingEnableNV{};
    PFN_vkCmdSetViewportSwizzleNV pfn_CmdSetViewportSwizzleNV{};
    PFN_vkCmdSetCoverageToColorEnableNV pfn_CmdSetCoverageToColorEnableNV{};
    PFN_vkCmdSetCoverageToColorLocationNV pfn_CmdSetCoverageToColorLocationNV{};
    PFN_vkCmdSetCoverageModulationModeNV pfn_CmdSetCoverageModulationModeNV{};
    PFN_vkCmdSetCoverageModulationTableEnableNV pfn_CmdSetCoverageModulationTableEnableNV{};
    PFN_vkCmdSetCoverageModulationTableNV pfn_CmdSetCoverageModulationTableNV{};
    PFN_vkCmdSetShadingRateImageEnableNV pfn_CmdSetShadingRateImageEnableNV{};
    PFN_vkCmdSetRepresentativeFragmentTestEnableNV pfn_CmdSetRepresentativeFragmentTestEnableNV{};
    PFN_vkCmdSetCoverageReductionModeNV pfn_CmdSetCoverageReductionModeNV{};
    PFN_vkCmdOpticalFlowExecuteNV pfn_CmdOpticalFlowExecuteNV{};
    PFN_vkCmdBindShadersEXT pfn_CmdBindShadersEXT{};
    PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT pfn_CmdSetAttachmentFeedbackLoopEnableEXT{};
    PFN_vkCmdBuildAccelerationStructuresKHR pfn_CmdBuildAccelerationStructuresKHR{};
    PFN_vkCmdBuildAccelerationStructuresIndirectKHR pfn_CmdBuildAccelerationStructuresIndirectKHR{};
    PFN_vkCmdCopyAccelerationStructureKHR pfn_CmdCopyAccelerationStructureKHR{};
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR pfn_CmdCopyAccelerationStructureToMemoryKHR{};
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR pfn_CmdCopyMemoryToAccelerationStructureKHR{};
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR pfn_CmdWriteAccelerationStructuresPropertiesKHR{};
    PFN_vkCmdTraceRaysKHR pfn_CmdTraceRaysKHR{};
    PFN_vkCmdTraceRaysIndirectKHR pfn_CmdTraceRaysIndirectKHR{};
    PFN_vkCmdSetRayTracingPipelineStackSizeKHR pfn_CmdSetRayTracingPipelineStackSizeKHR{};
    PFN_vkCmdDrawMeshTasksEXT pfn_CmdDrawMeshTasksEXT{};
    PFN_vkCmdDrawMeshTasksIndirectEXT pfn_CmdDrawMeshTasksIndirectEXT{};
    PFN_vkCmdDrawMeshTasksIndirectCountEXT pfn_CmdDrawMeshTasksIndirectCountEXT{};
    VkResult BeginCommandBuffer(
        const VkCommandBufferBeginInfo* pBeginInfo) {
        return pfn_BeginCommandBuffer(commandBuffer, pBeginInfo);
    }
    VkResult EndCommandBuffer(
       ) {
        return pfn_EndCommandBuffer(commandBuffer);
    }
    VkResult ResetCommandBuffer(
        VkCommandBufferResetFlags flags) {
        return pfn_ResetCommandBuffer(commandBuffer, flags);
    }
    void CmdBindPipeline(
        VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
        pfn_CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
    }
    void CmdSetViewport(
        uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
    }
    void CmdSetScissor(
        uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
    }
    void CmdSetLineWidth(
        float lineWidth) {
        pfn_CmdSetLineWidth(commandBuffer, lineWidth);
    }
    void CmdSetDepthBias(
        float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
        pfn_CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    }
    void CmdSetBlendConstants(
        const float blendConstants[4]) {
        pfn_CmdSetBlendConstants(commandBuffer, blendConstants);
    }
    void CmdSetDepthBounds(
        float minDepthBounds, float maxDepthBounds) {
        pfn_CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
    }
    void CmdSetStencilCompareMask(
        VkStencilFaceFlags faceMask, uint32_t compareMask) {
        pfn_CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
    }
    void CmdSetStencilWriteMask(
        VkStencilFaceFlags faceMask, uint32_t writeMask) {
        pfn_CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
    }
    void CmdSetStencilReference(
        VkStencilFaceFlags faceMask, uint32_t reference) {
        pfn_CmdSetStencilReference(commandBuffer, faceMask, reference);
    }
    void CmdBindDescriptorSets(
        VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) {
        pfn_CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    }
    void CmdBindIndexBuffer(
        VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
        pfn_CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
    }
    void CmdBindVertexBuffers(
        uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) {
        pfn_CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
    }
    void CmdDraw(
        uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
        pfn_CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
    }
    void CmdDrawIndexed(
        uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
        pfn_CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    }
    void CmdDrawIndirect(
        VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawIndexedIndirect(
        VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDispatch(
        uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDispatchIndirect(
        VkBuffer buffer, VkDeviceSize offset) {
        pfn_CmdDispatchIndirect(commandBuffer, buffer, offset);
    }
    void CmdCopyBuffer(
        VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) {
        pfn_CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
    }
    void CmdCopyImage(
        VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) {
        pfn_CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdBlitImage(
        VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) {
        pfn_CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    }
    void CmdCopyBufferToImage(
        VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) {
        pfn_CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdCopyImageToBuffer(
        VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) {
        pfn_CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    }
    void CmdUpdateBuffer(
        VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) {
        pfn_CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
    }
    void CmdFillBuffer(
        VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
        pfn_CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
    }
    void CmdClearColorImage(
        VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
        pfn_CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
    }
    void CmdClearDepthStencilImage(
        VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
        pfn_CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
    }
    void CmdClearAttachments(
        uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) {
        pfn_CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
    }
    void CmdResolveImage(
        VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) {
        pfn_CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
    void CmdSetEvent(
        VkEvent event, VkPipelineStageFlags stageMask) {
        pfn_CmdSetEvent(commandBuffer, event, stageMask);
    }
    void CmdResetEvent(
        VkEvent event, VkPipelineStageFlags stageMask) {
        pfn_CmdResetEvent(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents(
        uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) {
        pfn_CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
    void CmdPipelineBarrier(
        VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) {
        pfn_CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
    void CmdBeginQuery(
        VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
        pfn_CmdBeginQuery(commandBuffer, queryPool, query, flags);
    }
    void CmdEndQuery(
        VkQueryPool queryPool, uint32_t query) {
        pfn_CmdEndQuery(commandBuffer, queryPool, query);
    }
    void CmdResetQueryPool(
        VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
        pfn_CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
    }
    void CmdWriteTimestamp(
        VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
    }
    void CmdCopyQueryPoolResults(
        VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
        pfn_CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    }
    void CmdPushConstants(
        VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) {
        pfn_CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
    }
    void CmdBeginRenderPass(
        const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) {
        pfn_CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
    }
    void CmdNextSubpass(
        VkSubpassContents contents) {
        pfn_CmdNextSubpass(commandBuffer, contents);
    }
    void CmdEndRenderPass(
       ) {
        pfn_CmdEndRenderPass(commandBuffer);
    }
    void CmdExecuteCommands(
        uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
        pfn_CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
    }
    void CmdSetDeviceMask(
        uint32_t deviceMask) {
        pfn_CmdSetDeviceMask(commandBuffer, deviceMask);
    }
    void CmdDispatchBase(
        uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDrawIndirectCount(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCount(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdBeginRenderPass2(
        const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
        pfn_CmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    }
    void CmdNextSubpass2(
        const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    }
    void CmdEndRenderPass2(
        const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
    }
    void CmdSetEvent2(
        VkEvent event, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdSetEvent2(commandBuffer, event, pDependencyInfo);
    }
    void CmdResetEvent2(
        VkEvent event, VkPipelineStageFlags2 stageMask) {
        pfn_CmdResetEvent2(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents2(
        uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
        pfn_CmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
    }
    void CmdPipelineBarrier2(
        const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdPipelineBarrier2(commandBuffer, pDependencyInfo);
    }
    void CmdWriteTimestamp2(
        VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
    }
    void CmdCopyBuffer2(
        const VkCopyBufferInfo2* pCopyBufferInfo) {
        pfn_CmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
    }
    void CmdCopyImage2(
        const VkCopyImageInfo2* pCopyImageInfo) {
        pfn_CmdCopyImage2(commandBuffer, pCopyImageInfo);
    }
    void CmdCopyBufferToImage2(
        const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
        pfn_CmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
    }
    void CmdCopyImageToBuffer2(
        const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
        pfn_CmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
    }
    void CmdBlitImage2(
        const VkBlitImageInfo2* pBlitImageInfo) {
        pfn_CmdBlitImage2(commandBuffer, pBlitImageInfo);
    }
    void CmdResolveImage2(
        const VkResolveImageInfo2* pResolveImageInfo) {
        pfn_CmdResolveImage2(commandBuffer, pResolveImageInfo);
    }
    void CmdBeginRendering(
        const VkRenderingInfo* pRenderingInfo) {
        pfn_CmdBeginRendering(commandBuffer, pRenderingInfo);
    }
    void CmdEndRendering(
       ) {
        pfn_CmdEndRendering(commandBuffer);
    }
    void CmdSetCullMode(
        VkCullModeFlags cullMode) {
        pfn_CmdSetCullMode(commandBuffer, cullMode);
    }
    void CmdSetFrontFace(
        VkFrontFace frontFace) {
        pfn_CmdSetFrontFace(commandBuffer, frontFace);
    }
    void CmdSetPrimitiveTopology(
        VkPrimitiveTopology primitiveTopology) {
        pfn_CmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
    }
    void CmdSetViewportWithCount(
        uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
    }
    void CmdSetScissorWithCount(
        uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
    }
    void CmdBindVertexBuffers2(
        uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
        pfn_CmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    }
    void CmdSetDepthTestEnable(
        VkBool32 depthTestEnable) {
        pfn_CmdSetDepthTestEnable(commandBuffer, depthTestEnable);
    }
    void CmdSetDepthWriteEnable(
        VkBool32 depthWriteEnable) {
        pfn_CmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
    }
    void CmdSetDepthCompareOp(
        VkCompareOp depthCompareOp) {
        pfn_CmdSetDepthCompareOp(commandBuffer, depthCompareOp);
    }
    void CmdSetDepthBoundsTestEnable(
        VkBool32 depthBoundsTestEnable) {
        pfn_CmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
    }
    void CmdSetStencilTestEnable(
        VkBool32 stencilTestEnable) {
        pfn_CmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
    }
    void CmdSetStencilOp(
        VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
        pfn_CmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    }
    void CmdSetRasterizerDiscardEnable(
        VkBool32 rasterizerDiscardEnable) {
        pfn_CmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
    }
    void CmdSetDepthBiasEnable(
        VkBool32 depthBiasEnable) {
        pfn_CmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
    }
    void CmdSetPrimitiveRestartEnable(
        VkBool32 primitiveRestartEnable) {
        pfn_CmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
    }
    void CmdBeginVideoCodingKHR(
        const VkVideoBeginCodingInfoKHR* pBeginInfo) {
        pfn_CmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
    }
    void CmdEndVideoCodingKHR(
        const VkVideoEndCodingInfoKHR* pEndCodingInfo) {
        pfn_CmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
    }
    void CmdControlVideoCodingKHR(
        const VkVideoCodingControlInfoKHR* pCodingControlInfo) {
        pfn_CmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
    }
    void CmdDecodeVideoKHR(
        const VkVideoDecodeInfoKHR* pDecodeInfo) {
        pfn_CmdDecodeVideoKHR(commandBuffer, pDecodeInfo);
    }
    void CmdBeginRenderingKHR(
        const VkRenderingInfo* pRenderingInfo) {
        pfn_CmdBeginRenderingKHR(commandBuffer, pRenderingInfo);
    }
    void CmdEndRenderingKHR(
       ) {
        pfn_CmdEndRenderingKHR(commandBuffer);
    }
    void CmdSetDeviceMaskKHR(
        uint32_t deviceMask) {
        pfn_CmdSetDeviceMaskKHR(commandBuffer, deviceMask);
    }
    void CmdDispatchBaseKHR(
        uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    }
    void CmdPushDescriptorSetKHR(
        VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) {
        pfn_CmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    }
    void CmdPushDescriptorSetWithTemplateKHR(
        VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) {
        pfn_CmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
    }
    void CmdBeginRenderPass2KHR(
        const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
        pfn_CmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    }
    void CmdNextSubpass2KHR(
        const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    }
    void CmdEndRenderPass2KHR(
        const VkSubpassEndInfo* pSubpassEndInfo) {
        pfn_CmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
    }
    void CmdDrawIndirectCountKHR(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCountKHR(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdSetFragmentShadingRateKHR(
        const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
        pfn_CmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    void CmdEncodeVideoKHR(
        const VkVideoEncodeInfoKHR* pEncodeInfo) {
        pfn_CmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdSetEvent2KHR(
        VkEvent event, const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
    }
    void CmdResetEvent2KHR(
        VkEvent event, VkPipelineStageFlags2 stageMask) {
        pfn_CmdResetEvent2KHR(commandBuffer, event, stageMask);
    }
    void CmdWaitEvents2KHR(
        uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
        pfn_CmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
    }
    void CmdPipelineBarrier2KHR(
        const VkDependencyInfo* pDependencyInfo) {
        pfn_CmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
    }
    void CmdWriteTimestamp2KHR(
        VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
        pfn_CmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
    }
    void CmdWriteBufferMarker2AMD(
        VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
        pfn_CmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
    }
    void CmdCopyBuffer2KHR(
        const VkCopyBufferInfo2* pCopyBufferInfo) {
        pfn_CmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
    }
    void CmdCopyImage2KHR(
        const VkCopyImageInfo2* pCopyImageInfo) {
        pfn_CmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
    }
    void CmdCopyBufferToImage2KHR(
        const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
        pfn_CmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
    }
    void CmdCopyImageToBuffer2KHR(
        const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
        pfn_CmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
    }
    void CmdBlitImage2KHR(
        const VkBlitImageInfo2* pBlitImageInfo) {
        pfn_CmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
    }
    void CmdResolveImage2KHR(
        const VkResolveImageInfo2* pResolveImageInfo) {
        pfn_CmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
    }
    void CmdTraceRaysIndirect2KHR(
        VkDeviceAddress indirectDeviceAddress) {
        pfn_CmdTraceRaysIndirect2KHR(commandBuffer, indirectDeviceAddress);
    }
    void CmdBindIndexBuffer2KHR(
        VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType) {
        pfn_CmdBindIndexBuffer2KHR(commandBuffer, buffer, offset, size, indexType);
    }
    void CmdDebugMarkerBeginEXT(
        const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
        pfn_CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
    }
    void CmdDebugMarkerEndEXT(
       ) {
        pfn_CmdDebugMarkerEndEXT(commandBuffer);
    }
    void CmdDebugMarkerInsertEXT(
        const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
        pfn_CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
    }
    void CmdBindTransformFeedbackBuffersEXT(
        uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) {
        pfn_CmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
    }
    void CmdBeginTransformFeedbackEXT(
        uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
        pfn_CmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    }
    void CmdEndTransformFeedbackEXT(
        uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
        pfn_CmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    }
    void CmdBeginQueryIndexedEXT(
        VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
        pfn_CmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
    }
    void CmdEndQueryIndexedEXT(
        VkQueryPool queryPool, uint32_t query, uint32_t index) {
        pfn_CmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
    }
    void CmdDrawIndirectByteCountEXT(
        uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
        pfn_CmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
    }
    void CmdCuLaunchKernelNVX(
        const VkCuLaunchInfoNVX* pLaunchInfo) {
        pfn_CmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
    }
    void CmdDrawIndirectCountAMD(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdDrawIndexedIndirectCountAMD(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdBeginConditionalRenderingEXT(
        const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) {
        pfn_CmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
    }
    void CmdEndConditionalRenderingEXT(
       ) {
        pfn_CmdEndConditionalRenderingEXT(commandBuffer);
    }
    void CmdSetViewportWScalingNV(
        uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) {
        pfn_CmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
    }
    void CmdSetDiscardRectangleEXT(
        uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) {
        pfn_CmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    }
    void CmdSetDiscardRectangleEnableEXT(
        VkBool32 discardRectangleEnable) {
        pfn_CmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
    }
    void CmdSetDiscardRectangleModeEXT(
        VkDiscardRectangleModeEXT discardRectangleMode) {
        pfn_CmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
    }
    void CmdBeginDebugUtilsLabelEXT(
        const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_CmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    }
    void CmdEndDebugUtilsLabelEXT(
       ) {
        pfn_CmdEndDebugUtilsLabelEXT(commandBuffer);
    }
    void CmdInsertDebugUtilsLabelEXT(
        const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_CmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    void CmdInitializeGraphScratchMemoryAMDX(
        VkDeviceAddress scratch) {
        pfn_CmdInitializeGraphScratchMemoryAMDX(commandBuffer, scratch);
    }
    void CmdDispatchGraphAMDX(
        VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX* pCountInfo) {
        pfn_CmdDispatchGraphAMDX(commandBuffer, scratch, pCountInfo);
    }
    void CmdDispatchGraphIndirectAMDX(
        VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX* pCountInfo) {
        pfn_CmdDispatchGraphIndirectAMDX(commandBuffer, scratch, pCountInfo);
    }
    void CmdDispatchGraphIndirectCountAMDX(
        VkDeviceAddress scratch, VkDeviceAddress countInfo) {
        pfn_CmdDispatchGraphIndirectCountAMDX(commandBuffer, scratch, countInfo);
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdSetSampleLocationsEXT(
        const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
        pfn_CmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
    }
    void CmdBindShadingRateImageNV(
        VkImageView imageView, VkImageLayout imageLayout) {
        pfn_CmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
    }
    void CmdSetViewportShadingRatePaletteNV(
        uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) {
        pfn_CmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
    }
    void CmdSetCoarseSampleOrderNV(
        VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) {
        pfn_CmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
    }
    void CmdBuildAccelerationStructureNV(
        const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
        pfn_CmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
    }
    void CmdCopyAccelerationStructureNV(
        VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
        pfn_CmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
    }
    void CmdTraceRaysNV(
        VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
        pfn_CmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
    }
    void CmdWriteAccelerationStructuresPropertiesNV(
        uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    }
    void CmdWriteBufferMarkerAMD(
        VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
        pfn_CmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
    }
    void CmdDrawMeshTasksNV(
        uint32_t taskCount, uint32_t firstTask) {
        pfn_CmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
    }
    void CmdDrawMeshTasksIndirectNV(
        VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawMeshTasksIndirectCountNV(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    void CmdSetExclusiveScissorEnableNV(
        uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkBool32* pExclusiveScissorEnables) {
        pfn_CmdSetExclusiveScissorEnableNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
    }
    void CmdSetExclusiveScissorNV(
        uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) {
        pfn_CmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
    }
    void CmdSetCheckpointNV(
        const void* pCheckpointMarker) {
        pfn_CmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
    }
    VkResult CmdSetPerformanceMarkerINTEL(
        const VkPerformanceMarkerInfoINTEL* pMarkerInfo) {
        return pfn_CmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
    }
    VkResult CmdSetPerformanceStreamMarkerINTEL(
        const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) {
        return pfn_CmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
    }
    VkResult CmdSetPerformanceOverrideINTEL(
        const VkPerformanceOverrideInfoINTEL* pOverrideInfo) {
        return pfn_CmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
    }
    void CmdSetLineStippleEXT(
        uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
        pfn_CmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
    }
    void CmdSetCullModeEXT(
        VkCullModeFlags cullMode) {
        pfn_CmdSetCullModeEXT(commandBuffer, cullMode);
    }
    void CmdSetFrontFaceEXT(
        VkFrontFace frontFace) {
        pfn_CmdSetFrontFaceEXT(commandBuffer, frontFace);
    }
    void CmdSetPrimitiveTopologyEXT(
        VkPrimitiveTopology primitiveTopology) {
        pfn_CmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
    }
    void CmdSetViewportWithCountEXT(
        uint32_t viewportCount, const VkViewport* pViewports) {
        pfn_CmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
    }
    void CmdSetScissorWithCountEXT(
        uint32_t scissorCount, const VkRect2D* pScissors) {
        pfn_CmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
    }
    void CmdBindVertexBuffers2EXT(
        uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
        pfn_CmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    }
    void CmdSetDepthTestEnableEXT(
        VkBool32 depthTestEnable) {
        pfn_CmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
    }
    void CmdSetDepthWriteEnableEXT(
        VkBool32 depthWriteEnable) {
        pfn_CmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
    }
    void CmdSetDepthCompareOpEXT(
        VkCompareOp depthCompareOp) {
        pfn_CmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
    }
    void CmdSetDepthBoundsTestEnableEXT(
        VkBool32 depthBoundsTestEnable) {
        pfn_CmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
    }
    void CmdSetStencilTestEnableEXT(
        VkBool32 stencilTestEnable) {
        pfn_CmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
    }
    void CmdSetStencilOpEXT(
        VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
        pfn_CmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    }
    void CmdPreprocessGeneratedCommandsNV(
        const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
        pfn_CmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
    }
    void CmdExecuteGeneratedCommandsNV(
        VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
        pfn_CmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
    }
    void CmdBindPipelineShaderGroupNV(
        VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
        pfn_CmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
    }
    void CmdSetDepthBias2EXT(
        const VkDepthBiasInfoEXT* pDepthBiasInfo) {
        pfn_CmdSetDepthBias2EXT(commandBuffer, pDepthBiasInfo);
    }
    void CmdBindDescriptorBuffersEXT(
        uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT* pBindingInfos) {
        pfn_CmdBindDescriptorBuffersEXT(commandBuffer, bufferCount, pBindingInfos);
    }
    void CmdSetDescriptorBufferOffsetsEXT(
        VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const uint32_t* pBufferIndices, const VkDeviceSize* pOffsets) {
        pfn_CmdSetDescriptorBufferOffsetsEXT(commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
    }
    void CmdBindDescriptorBufferEmbeddedSamplersEXT(
        VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set) {
        pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT(commandBuffer, pipelineBindPoint, layout, set);
    }
    void CmdSetFragmentShadingRateEnumNV(
        VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
        pfn_CmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
    }
    void CmdSetVertexInputEXT(
        uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
        pfn_CmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    }
    void CmdSubpassShadingHUAWEI(
       ) {
        pfn_CmdSubpassShadingHUAWEI(commandBuffer);
    }
    void CmdBindInvocationMaskHUAWEI(
        VkImageView imageView, VkImageLayout imageLayout) {
        pfn_CmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
    }
    void CmdSetPatchControlPointsEXT(
        uint32_t patchControlPoints) {
        pfn_CmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
    }
    void CmdSetRasterizerDiscardEnableEXT(
        VkBool32 rasterizerDiscardEnable) {
        pfn_CmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
    }
    void CmdSetDepthBiasEnableEXT(
        VkBool32 depthBiasEnable) {
        pfn_CmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
    }
    void CmdSetLogicOpEXT(
        VkLogicOp logicOp) {
        pfn_CmdSetLogicOpEXT(commandBuffer, logicOp);
    }
    void CmdSetPrimitiveRestartEnableEXT(
        VkBool32 primitiveRestartEnable) {
        pfn_CmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
    }
    void CmdSetColorWriteEnableEXT(
        uint32_t attachmentCount, const VkBool32* pColorWriteEnables) {
        pfn_CmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
    }
    void CmdDrawMultiEXT(
        uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) {
        pfn_CmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
    }
    void CmdDrawMultiIndexedEXT(
        uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset) {
        pfn_CmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
    }
    void CmdBuildMicromapsEXT(
        uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos) {
        pfn_CmdBuildMicromapsEXT(commandBuffer, infoCount, pInfos);
    }
    void CmdCopyMicromapEXT(
        const VkCopyMicromapInfoEXT* pInfo) {
        pfn_CmdCopyMicromapEXT(commandBuffer, pInfo);
    }
    void CmdCopyMicromapToMemoryEXT(
        const VkCopyMicromapToMemoryInfoEXT* pInfo) {
        pfn_CmdCopyMicromapToMemoryEXT(commandBuffer, pInfo);
    }
    void CmdCopyMemoryToMicromapEXT(
        const VkCopyMemoryToMicromapInfoEXT* pInfo) {
        pfn_CmdCopyMemoryToMicromapEXT(commandBuffer, pInfo);
    }
    void CmdWriteMicromapsPropertiesEXT(
        uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteMicromapsPropertiesEXT(commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
    }
    void CmdDrawClusterHUAWEI(
        uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDrawClusterHUAWEI(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDrawClusterIndirectHUAWEI(
        VkBuffer buffer, VkDeviceSize offset) {
        pfn_CmdDrawClusterIndirectHUAWEI(commandBuffer, buffer, offset);
    }
    void CmdCopyMemoryIndirectNV(
        VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride) {
        pfn_CmdCopyMemoryIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride);
    }
    void CmdCopyMemoryToImageIndirectNV(
        VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout, const VkImageSubresourceLayers* pImageSubresources) {
        pfn_CmdCopyMemoryToImageIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
    }
    void CmdDecompressMemoryNV(
        uint32_t decompressRegionCount, const VkDecompressMemoryRegionNV* pDecompressMemoryRegions) {
        pfn_CmdDecompressMemoryNV(commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
    }
    void CmdDecompressMemoryIndirectCountNV(
        VkDeviceAddress indirectCommandsAddress, VkDeviceAddress indirectCommandsCountAddress, uint32_t stride) {
        pfn_CmdDecompressMemoryIndirectCountNV(commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
    }
    void CmdUpdatePipelineIndirectBufferNV(
        VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
        pfn_CmdUpdatePipelineIndirectBufferNV(commandBuffer, pipelineBindPoint, pipeline);
    }
    void CmdSetTessellationDomainOriginEXT(
        VkTessellationDomainOrigin domainOrigin) {
        pfn_CmdSetTessellationDomainOriginEXT(commandBuffer, domainOrigin);
    }
    void CmdSetDepthClampEnableEXT(
        VkBool32 depthClampEnable) {
        pfn_CmdSetDepthClampEnableEXT(commandBuffer, depthClampEnable);
    }
    void CmdSetPolygonModeEXT(
        VkPolygonMode polygonMode) {
        pfn_CmdSetPolygonModeEXT(commandBuffer, polygonMode);
    }
    void CmdSetRasterizationSamplesEXT(
        VkSampleCountFlagBits rasterizationSamples) {
        pfn_CmdSetRasterizationSamplesEXT(commandBuffer, rasterizationSamples);
    }
    void CmdSetSampleMaskEXT(
        VkSampleCountFlagBits samples, const VkSampleMask* pSampleMask) {
        pfn_CmdSetSampleMaskEXT(commandBuffer, samples, pSampleMask);
    }
    void CmdSetAlphaToCoverageEnableEXT(
        VkBool32 alphaToCoverageEnable) {
        pfn_CmdSetAlphaToCoverageEnableEXT(commandBuffer, alphaToCoverageEnable);
    }
    void CmdSetAlphaToOneEnableEXT(
        VkBool32 alphaToOneEnable) {
        pfn_CmdSetAlphaToOneEnableEXT(commandBuffer, alphaToOneEnable);
    }
    void CmdSetLogicOpEnableEXT(
        VkBool32 logicOpEnable) {
        pfn_CmdSetLogicOpEnableEXT(commandBuffer, logicOpEnable);
    }
    void CmdSetColorBlendEnableEXT(
        uint32_t firstAttachment, uint32_t attachmentCount, const VkBool32* pColorBlendEnables) {
        pfn_CmdSetColorBlendEnableEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
    }
    void CmdSetColorBlendEquationEXT(
        uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendEquationEXT* pColorBlendEquations) {
        pfn_CmdSetColorBlendEquationEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
    }
    void CmdSetColorWriteMaskEXT(
        uint32_t firstAttachment, uint32_t attachmentCount, const VkColorComponentFlags* pColorWriteMasks) {
        pfn_CmdSetColorWriteMaskEXT(commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
    }
    void CmdSetRasterizationStreamEXT(
        uint32_t rasterizationStream) {
        pfn_CmdSetRasterizationStreamEXT(commandBuffer, rasterizationStream);
    }
    void CmdSetConservativeRasterizationModeEXT(
        VkConservativeRasterizationModeEXT conservativeRasterizationMode) {
        pfn_CmdSetConservativeRasterizationModeEXT(commandBuffer, conservativeRasterizationMode);
    }
    void CmdSetExtraPrimitiveOverestimationSizeEXT(
        float extraPrimitiveOverestimationSize) {
        pfn_CmdSetExtraPrimitiveOverestimationSizeEXT(commandBuffer, extraPrimitiveOverestimationSize);
    }
    void CmdSetDepthClipEnableEXT(
        VkBool32 depthClipEnable) {
        pfn_CmdSetDepthClipEnableEXT(commandBuffer, depthClipEnable);
    }
    void CmdSetSampleLocationsEnableEXT(
        VkBool32 sampleLocationsEnable) {
        pfn_CmdSetSampleLocationsEnableEXT(commandBuffer, sampleLocationsEnable);
    }
    void CmdSetColorBlendAdvancedEXT(
        uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendAdvancedEXT* pColorBlendAdvanced) {
        pfn_CmdSetColorBlendAdvancedEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
    }
    void CmdSetProvokingVertexModeEXT(
        VkProvokingVertexModeEXT provokingVertexMode) {
        pfn_CmdSetProvokingVertexModeEXT(commandBuffer, provokingVertexMode);
    }
    void CmdSetLineRasterizationModeEXT(
        VkLineRasterizationModeEXT lineRasterizationMode) {
        pfn_CmdSetLineRasterizationModeEXT(commandBuffer, lineRasterizationMode);
    }
    void CmdSetLineStippleEnableEXT(
        VkBool32 stippledLineEnable) {
        pfn_CmdSetLineStippleEnableEXT(commandBuffer, stippledLineEnable);
    }
    void CmdSetDepthClipNegativeOneToOneEXT(
        VkBool32 negativeOneToOne) {
        pfn_CmdSetDepthClipNegativeOneToOneEXT(commandBuffer, negativeOneToOne);
    }
    void CmdSetViewportWScalingEnableNV(
        VkBool32 viewportWScalingEnable) {
        pfn_CmdSetViewportWScalingEnableNV(commandBuffer, viewportWScalingEnable);
    }
    void CmdSetViewportSwizzleNV(
        uint32_t firstViewport, uint32_t viewportCount, const VkViewportSwizzleNV* pViewportSwizzles) {
        pfn_CmdSetViewportSwizzleNV(commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
    }
    void CmdSetCoverageToColorEnableNV(
        VkBool32 coverageToColorEnable) {
        pfn_CmdSetCoverageToColorEnableNV(commandBuffer, coverageToColorEnable);
    }
    void CmdSetCoverageToColorLocationNV(
        uint32_t coverageToColorLocation) {
        pfn_CmdSetCoverageToColorLocationNV(commandBuffer, coverageToColorLocation);
    }
    void CmdSetCoverageModulationModeNV(
        VkCoverageModulationModeNV coverageModulationMode) {
        pfn_CmdSetCoverageModulationModeNV(commandBuffer, coverageModulationMode);
    }
    void CmdSetCoverageModulationTableEnableNV(
        VkBool32 coverageModulationTableEnable) {
        pfn_CmdSetCoverageModulationTableEnableNV(commandBuffer, coverageModulationTableEnable);
    }
    void CmdSetCoverageModulationTableNV(
        uint32_t coverageModulationTableCount, const float* pCoverageModulationTable) {
        pfn_CmdSetCoverageModulationTableNV(commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
    }
    void CmdSetShadingRateImageEnableNV(
        VkBool32 shadingRateImageEnable) {
        pfn_CmdSetShadingRateImageEnableNV(commandBuffer, shadingRateImageEnable);
    }
    void CmdSetRepresentativeFragmentTestEnableNV(
        VkBool32 representativeFragmentTestEnable) {
        pfn_CmdSetRepresentativeFragmentTestEnableNV(commandBuffer, representativeFragmentTestEnable);
    }
    void CmdSetCoverageReductionModeNV(
        VkCoverageReductionModeNV coverageReductionMode) {
        pfn_CmdSetCoverageReductionModeNV(commandBuffer, coverageReductionMode);
    }
    void CmdOpticalFlowExecuteNV(
        VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV* pExecuteInfo) {
        pfn_CmdOpticalFlowExecuteNV(commandBuffer, session, pExecuteInfo);
    }
    void CmdBindShadersEXT(
        uint32_t stageCount, const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders) {
        pfn_CmdBindShadersEXT(commandBuffer, stageCount, pStages, pShaders);
    }
    void CmdSetAttachmentFeedbackLoopEnableEXT(
        VkImageAspectFlags aspectMask) {
        pfn_CmdSetAttachmentFeedbackLoopEnableEXT(commandBuffer, aspectMask);
    }
    void CmdBuildAccelerationStructuresKHR(
        uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
        pfn_CmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
    }
    void CmdBuildAccelerationStructuresIndirectKHR(
        uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts) {
        pfn_CmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
    }
    void CmdCopyAccelerationStructureKHR(
        const VkCopyAccelerationStructureInfoKHR* pInfo) {
        pfn_CmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
    }
    void CmdCopyAccelerationStructureToMemoryKHR(
        const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
        pfn_CmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
    }
    void CmdCopyMemoryToAccelerationStructureKHR(
        const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
        pfn_CmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
    }
    void CmdWriteAccelerationStructuresPropertiesKHR(
        uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
        pfn_CmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    }
    void CmdTraceRaysKHR(
        const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
        pfn_CmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
    }
    void CmdTraceRaysIndirectKHR(
        const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
        pfn_CmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
    }
    void CmdSetRayTracingPipelineStackSizeKHR(
        uint32_t pipelineStackSize) {
        pfn_CmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
    }
    void CmdDrawMeshTasksEXT(
        uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
        pfn_CmdDrawMeshTasksEXT(commandBuffer, groupCountX, groupCountY, groupCountZ);
    }
    void CmdDrawMeshTasksIndirectEXT(
        VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectEXT(commandBuffer, buffer, offset, drawCount, stride);
    }
    void CmdDrawMeshTasksIndirectCountEXT(
        VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
        pfn_CmdDrawMeshTasksIndirectCountEXT(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
    VkResult init(PFN_vkGetDeviceProcAddr gpa, VkDevice in_device, VkCommandBuffer in_commandBuffer) {
        this->commandBuffer = in_commandBuffer;
        pfn_BeginCommandBuffer = (PFN_vkBeginCommandBuffer)gpa(in_device, "vkBeginCommandBuffer");
        pfn_EndCommandBuffer = (PFN_vkEndCommandBuffer)gpa(in_device, "vkEndCommandBuffer");
        pfn_ResetCommandBuffer = (PFN_vkResetCommandBuffer)gpa(in_device, "vkResetCommandBuffer");
        pfn_CmdBindPipeline = (PFN_vkCmdBindPipeline)gpa(in_device, "vkCmdBindPipeline");
        pfn_CmdSetViewport = (PFN_vkCmdSetViewport)gpa(in_device, "vkCmdSetViewport");
        pfn_CmdSetScissor = (PFN_vkCmdSetScissor)gpa(in_device, "vkCmdSetScissor");
        pfn_CmdSetLineWidth = (PFN_vkCmdSetLineWidth)gpa(in_device, "vkCmdSetLineWidth");
        pfn_CmdSetDepthBias = (PFN_vkCmdSetDepthBias)gpa(in_device, "vkCmdSetDepthBias");
        pfn_CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)gpa(in_device, "vkCmdSetBlendConstants");
        pfn_CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)gpa(in_device, "vkCmdSetDepthBounds");
        pfn_CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)gpa(in_device, "vkCmdSetStencilCompareMask");
        pfn_CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)gpa(in_device, "vkCmdSetStencilWriteMask");
        pfn_CmdSetStencilReference = (PFN_vkCmdSetStencilReference)gpa(in_device, "vkCmdSetStencilReference");
        pfn_CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)gpa(in_device, "vkCmdBindDescriptorSets");
        pfn_CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)gpa(in_device, "vkCmdBindIndexBuffer");
        pfn_CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)gpa(in_device, "vkCmdBindVertexBuffers");
        pfn_CmdDraw = (PFN_vkCmdDraw)gpa(in_device, "vkCmdDraw");
        pfn_CmdDrawIndexed = (PFN_vkCmdDrawIndexed)gpa(in_device, "vkCmdDrawIndexed");
        pfn_CmdDrawIndirect = (PFN_vkCmdDrawIndirect)gpa(in_device, "vkCmdDrawIndirect");
        pfn_CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)gpa(in_device, "vkCmdDrawIndexedIndirect");
        pfn_CmdDispatch = (PFN_vkCmdDispatch)gpa(in_device, "vkCmdDispatch");
        pfn_CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)gpa(in_device, "vkCmdDispatchIndirect");
        pfn_CmdCopyBuffer = (PFN_vkCmdCopyBuffer)gpa(in_device, "vkCmdCopyBuffer");
        pfn_CmdCopyImage = (PFN_vkCmdCopyImage)gpa(in_device, "vkCmdCopyImage");
        pfn_CmdBlitImage = (PFN_vkCmdBlitImage)gpa(in_device, "vkCmdBlitImage");
        pfn_CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)gpa(in_device, "vkCmdCopyBufferToImage");
        pfn_CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)gpa(in_device, "vkCmdCopyImageToBuffer");
        pfn_CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)gpa(in_device, "vkCmdUpdateBuffer");
        pfn_CmdFillBuffer = (PFN_vkCmdFillBuffer)gpa(in_device, "vkCmdFillBuffer");
        pfn_CmdClearColorImage = (PFN_vkCmdClearColorImage)gpa(in_device, "vkCmdClearColorImage");
        pfn_CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)gpa(in_device, "vkCmdClearDepthStencilImage");
        pfn_CmdClearAttachments = (PFN_vkCmdClearAttachments)gpa(in_device, "vkCmdClearAttachments");
        pfn_CmdResolveImage = (PFN_vkCmdResolveImage)gpa(in_device, "vkCmdResolveImage");
        pfn_CmdSetEvent = (PFN_vkCmdSetEvent)gpa(in_device, "vkCmdSetEvent");
        pfn_CmdResetEvent = (PFN_vkCmdResetEvent)gpa(in_device, "vkCmdResetEvent");
        pfn_CmdWaitEvents = (PFN_vkCmdWaitEvents)gpa(in_device, "vkCmdWaitEvents");
        pfn_CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)gpa(in_device, "vkCmdPipelineBarrier");
        pfn_CmdBeginQuery = (PFN_vkCmdBeginQuery)gpa(in_device, "vkCmdBeginQuery");
        pfn_CmdEndQuery = (PFN_vkCmdEndQuery)gpa(in_device, "vkCmdEndQuery");
        pfn_CmdResetQueryPool = (PFN_vkCmdResetQueryPool)gpa(in_device, "vkCmdResetQueryPool");
        pfn_CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)gpa(in_device, "vkCmdWriteTimestamp");
        pfn_CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)gpa(in_device, "vkCmdCopyQueryPoolResults");
        pfn_CmdPushConstants = (PFN_vkCmdPushConstants)gpa(in_device, "vkCmdPushConstants");
        pfn_CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)gpa(in_device, "vkCmdBeginRenderPass");
        pfn_CmdNextSubpass = (PFN_vkCmdNextSubpass)gpa(in_device, "vkCmdNextSubpass");
        pfn_CmdEndRenderPass = (PFN_vkCmdEndRenderPass)gpa(in_device, "vkCmdEndRenderPass");
        pfn_CmdExecuteCommands = (PFN_vkCmdExecuteCommands)gpa(in_device, "vkCmdExecuteCommands");
        pfn_CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)gpa(in_device, "vkCmdSetDeviceMask");
        pfn_CmdDispatchBase = (PFN_vkCmdDispatchBase)gpa(in_device, "vkCmdDispatchBase");
        pfn_CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)gpa(in_device, "vkCmdDrawIndirectCount");
        pfn_CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)gpa(in_device, "vkCmdDrawIndexedIndirectCount");
        pfn_CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)gpa(in_device, "vkCmdBeginRenderPass2");
        pfn_CmdNextSubpass2 = (PFN_vkCmdNextSubpass2)gpa(in_device, "vkCmdNextSubpass2");
        pfn_CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)gpa(in_device, "vkCmdEndRenderPass2");
        pfn_CmdSetEvent2 = (PFN_vkCmdSetEvent2)gpa(in_device, "vkCmdSetEvent2");
        pfn_CmdResetEvent2 = (PFN_vkCmdResetEvent2)gpa(in_device, "vkCmdResetEvent2");
        pfn_CmdWaitEvents2 = (PFN_vkCmdWaitEvents2)gpa(in_device, "vkCmdWaitEvents2");
        pfn_CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)gpa(in_device, "vkCmdPipelineBarrier2");
        pfn_CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)gpa(in_device, "vkCmdWriteTimestamp2");
        pfn_CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)gpa(in_device, "vkCmdCopyBuffer2");
        pfn_CmdCopyImage2 = (PFN_vkCmdCopyImage2)gpa(in_device, "vkCmdCopyImage2");
        pfn_CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)gpa(in_device, "vkCmdCopyBufferToImage2");
        pfn_CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)gpa(in_device, "vkCmdCopyImageToBuffer2");
        pfn_CmdBlitImage2 = (PFN_vkCmdBlitImage2)gpa(in_device, "vkCmdBlitImage2");
        pfn_CmdResolveImage2 = (PFN_vkCmdResolveImage2)gpa(in_device, "vkCmdResolveImage2");
        pfn_CmdBeginRendering = (PFN_vkCmdBeginRendering)gpa(in_device, "vkCmdBeginRendering");
        pfn_CmdEndRendering = (PFN_vkCmdEndRendering)gpa(in_device, "vkCmdEndRendering");
        pfn_CmdSetCullMode = (PFN_vkCmdSetCullMode)gpa(in_device, "vkCmdSetCullMode");
        pfn_CmdSetFrontFace = (PFN_vkCmdSetFrontFace)gpa(in_device, "vkCmdSetFrontFace");
        pfn_CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)gpa(in_device, "vkCmdSetPrimitiveTopology");
        pfn_CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)gpa(in_device, "vkCmdSetViewportWithCount");
        pfn_CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)gpa(in_device, "vkCmdSetScissorWithCount");
        pfn_CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)gpa(in_device, "vkCmdBindVertexBuffers2");
        pfn_CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)gpa(in_device, "vkCmdSetDepthTestEnable");
        pfn_CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)gpa(in_device, "vkCmdSetDepthWriteEnable");
        pfn_CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)gpa(in_device, "vkCmdSetDepthCompareOp");
        pfn_CmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)gpa(in_device, "vkCmdSetDepthBoundsTestEnable");
        pfn_CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)gpa(in_device, "vkCmdSetStencilTestEnable");
        pfn_CmdSetStencilOp = (PFN_vkCmdSetStencilOp)gpa(in_device, "vkCmdSetStencilOp");
        pfn_CmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)gpa(in_device, "vkCmdSetRasterizerDiscardEnable");
        pfn_CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)gpa(in_device, "vkCmdSetDepthBiasEnable");
        pfn_CmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)gpa(in_device, "vkCmdSetPrimitiveRestartEnable");
        pfn_CmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)gpa(in_device, "vkCmdBeginVideoCodingKHR");
        pfn_CmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)gpa(in_device, "vkCmdEndVideoCodingKHR");
        pfn_CmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)gpa(in_device, "vkCmdControlVideoCodingKHR");
        pfn_CmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)gpa(in_device, "vkCmdDecodeVideoKHR");
        pfn_CmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)gpa(in_device, "vkCmdBeginRenderingKHR");
        pfn_CmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)gpa(in_device, "vkCmdEndRenderingKHR");
        pfn_CmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)gpa(in_device, "vkCmdSetDeviceMaskKHR");
        pfn_CmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)gpa(in_device, "vkCmdDispatchBaseKHR");
        pfn_CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)gpa(in_device, "vkCmdPushDescriptorSetKHR");
        pfn_CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)gpa(in_device, "vkCmdPushDescriptorSetWithTemplateKHR");
        pfn_CmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)gpa(in_device, "vkCmdBeginRenderPass2KHR");
        pfn_CmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)gpa(in_device, "vkCmdNextSubpass2KHR");
        pfn_CmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)gpa(in_device, "vkCmdEndRenderPass2KHR");
        pfn_CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)gpa(in_device, "vkCmdDrawIndirectCountKHR");
        pfn_CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)gpa(in_device, "vkCmdDrawIndexedIndirectCountKHR");
        pfn_CmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)gpa(in_device, "vkCmdSetFragmentShadingRateKHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)gpa(in_device, "vkCmdEncodeVideoKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)gpa(in_device, "vkCmdSetEvent2KHR");
        pfn_CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)gpa(in_device, "vkCmdResetEvent2KHR");
        pfn_CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)gpa(in_device, "vkCmdWaitEvents2KHR");
        pfn_CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)gpa(in_device, "vkCmdPipelineBarrier2KHR");
        pfn_CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)gpa(in_device, "vkCmdWriteTimestamp2KHR");
        pfn_CmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)gpa(in_device, "vkCmdWriteBufferMarker2AMD");
        pfn_CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)gpa(in_device, "vkCmdCopyBuffer2KHR");
        pfn_CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)gpa(in_device, "vkCmdCopyImage2KHR");
        pfn_CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)gpa(in_device, "vkCmdCopyBufferToImage2KHR");
        pfn_CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)gpa(in_device, "vkCmdCopyImageToBuffer2KHR");
        pfn_CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)gpa(in_device, "vkCmdBlitImage2KHR");
        pfn_CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)gpa(in_device, "vkCmdResolveImage2KHR");
        pfn_CmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)gpa(in_device, "vkCmdTraceRaysIndirect2KHR");
        pfn_CmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)gpa(in_device, "vkCmdBindIndexBuffer2KHR");
        pfn_CmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)gpa(in_device, "vkCmdDebugMarkerBeginEXT");
        pfn_CmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)gpa(in_device, "vkCmdDebugMarkerEndEXT");
        pfn_CmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)gpa(in_device, "vkCmdDebugMarkerInsertEXT");
        pfn_CmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)gpa(in_device, "vkCmdBindTransformFeedbackBuffersEXT");
        pfn_CmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)gpa(in_device, "vkCmdBeginTransformFeedbackEXT");
        pfn_CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)gpa(in_device, "vkCmdEndTransformFeedbackEXT");
        pfn_CmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)gpa(in_device, "vkCmdBeginQueryIndexedEXT");
        pfn_CmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)gpa(in_device, "vkCmdEndQueryIndexedEXT");
        pfn_CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)gpa(in_device, "vkCmdDrawIndirectByteCountEXT");
        pfn_CmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)gpa(in_device, "vkCmdCuLaunchKernelNVX");
        pfn_CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)gpa(in_device, "vkCmdDrawIndirectCountAMD");
        pfn_CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)gpa(in_device, "vkCmdDrawIndexedIndirectCountAMD");
        pfn_CmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)gpa(in_device, "vkCmdBeginConditionalRenderingEXT");
        pfn_CmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)gpa(in_device, "vkCmdEndConditionalRenderingEXT");
        pfn_CmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)gpa(in_device, "vkCmdSetViewportWScalingNV");
        pfn_CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)gpa(in_device, "vkCmdSetDiscardRectangleEXT");
        pfn_CmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)gpa(in_device, "vkCmdSetDiscardRectangleEnableEXT");
        pfn_CmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)gpa(in_device, "vkCmdSetDiscardRectangleModeEXT");
        pfn_CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)gpa(in_device, "vkCmdBeginDebugUtilsLabelEXT");
        pfn_CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)gpa(in_device, "vkCmdEndDebugUtilsLabelEXT");
        pfn_CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)gpa(in_device, "vkCmdInsertDebugUtilsLabelEXT");
#ifdef VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)gpa(in_device, "vkCmdInitializeGraphScratchMemoryAMDX");
        pfn_CmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)gpa(in_device, "vkCmdDispatchGraphAMDX");
        pfn_CmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)gpa(in_device, "vkCmdDispatchGraphIndirectAMDX");
        pfn_CmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)gpa(in_device, "vkCmdDispatchGraphIndirectCountAMDX");
#endif  // VK_ENABLE_BETA_EXTENSIONS
        pfn_CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)gpa(in_device, "vkCmdSetSampleLocationsEXT");
        pfn_CmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)gpa(in_device, "vkCmdBindShadingRateImageNV");
        pfn_CmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)gpa(in_device, "vkCmdSetViewportShadingRatePaletteNV");
        pfn_CmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)gpa(in_device, "vkCmdSetCoarseSampleOrderNV");
        pfn_CmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)gpa(in_device, "vkCmdBuildAccelerationStructureNV");
        pfn_CmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)gpa(in_device, "vkCmdCopyAccelerationStructureNV");
        pfn_CmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)gpa(in_device, "vkCmdTraceRaysNV");
        pfn_CmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)gpa(in_device, "vkCmdWriteAccelerationStructuresPropertiesNV");
        pfn_CmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)gpa(in_device, "vkCmdWriteBufferMarkerAMD");
        pfn_CmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)gpa(in_device, "vkCmdDrawMeshTasksNV");
        pfn_CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)gpa(in_device, "vkCmdDrawMeshTasksIndirectNV");
        pfn_CmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)gpa(in_device, "vkCmdDrawMeshTasksIndirectCountNV");
        pfn_CmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)gpa(in_device, "vkCmdSetExclusiveScissorEnableNV");
        pfn_CmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)gpa(in_device, "vkCmdSetExclusiveScissorNV");
        pfn_CmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)gpa(in_device, "vkCmdSetCheckpointNV");
        pfn_CmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)gpa(in_device, "vkCmdSetPerformanceMarkerINTEL");
        pfn_CmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)gpa(in_device, "vkCmdSetPerformanceStreamMarkerINTEL");
        pfn_CmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)gpa(in_device, "vkCmdSetPerformanceOverrideINTEL");
        pfn_CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)gpa(in_device, "vkCmdSetLineStippleEXT");
        pfn_CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)gpa(in_device, "vkCmdSetCullModeEXT");
        pfn_CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)gpa(in_device, "vkCmdSetFrontFaceEXT");
        pfn_CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)gpa(in_device, "vkCmdSetPrimitiveTopologyEXT");
        pfn_CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)gpa(in_device, "vkCmdSetViewportWithCountEXT");
        pfn_CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)gpa(in_device, "vkCmdSetScissorWithCountEXT");
        pfn_CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)gpa(in_device, "vkCmdBindVertexBuffers2EXT");
        pfn_CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)gpa(in_device, "vkCmdSetDepthTestEnableEXT");
        pfn_CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)gpa(in_device, "vkCmdSetDepthWriteEnableEXT");
        pfn_CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)gpa(in_device, "vkCmdSetDepthCompareOpEXT");
        pfn_CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)gpa(in_device, "vkCmdSetDepthBoundsTestEnableEXT");
        pfn_CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)gpa(in_device, "vkCmdSetStencilTestEnableEXT");
        pfn_CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)gpa(in_device, "vkCmdSetStencilOpEXT");
        pfn_CmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)gpa(in_device, "vkCmdPreprocessGeneratedCommandsNV");
        pfn_CmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)gpa(in_device, "vkCmdExecuteGeneratedCommandsNV");
        pfn_CmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)gpa(in_device, "vkCmdBindPipelineShaderGroupNV");
        pfn_CmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)gpa(in_device, "vkCmdSetDepthBias2EXT");
        pfn_CmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)gpa(in_device, "vkCmdBindDescriptorBuffersEXT");
        pfn_CmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)gpa(in_device, "vkCmdSetDescriptorBufferOffsetsEXT");
        pfn_CmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)gpa(in_device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
        pfn_CmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)gpa(in_device, "vkCmdSetFragmentShadingRateEnumNV");
        pfn_CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)gpa(in_device, "vkCmdSetVertexInputEXT");
        pfn_CmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)gpa(in_device, "vkCmdSubpassShadingHUAWEI");
        pfn_CmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)gpa(in_device, "vkCmdBindInvocationMaskHUAWEI");
        pfn_CmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)gpa(in_device, "vkCmdSetPatchControlPointsEXT");
        pfn_CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)gpa(in_device, "vkCmdSetRasterizerDiscardEnableEXT");
        pfn_CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)gpa(in_device, "vkCmdSetDepthBiasEnableEXT");
        pfn_CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)gpa(in_device, "vkCmdSetLogicOpEXT");
        pfn_CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)gpa(in_device, "vkCmdSetPrimitiveRestartEnableEXT");
        pfn_CmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)gpa(in_device, "vkCmdSetColorWriteEnableEXT");
        pfn_CmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)gpa(in_device, "vkCmdDrawMultiEXT");
        pfn_CmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)gpa(in_device, "vkCmdDrawMultiIndexedEXT");
        pfn_CmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)gpa(in_device, "vkCmdBuildMicromapsEXT");
        pfn_CmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)gpa(in_device, "vkCmdCopyMicromapEXT");
        pfn_CmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)gpa(in_device, "vkCmdCopyMicromapToMemoryEXT");
        pfn_CmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)gpa(in_device, "vkCmdCopyMemoryToMicromapEXT");
        pfn_CmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)gpa(in_device, "vkCmdWriteMicromapsPropertiesEXT");
        pfn_CmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)gpa(in_device, "vkCmdDrawClusterHUAWEI");
        pfn_CmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)gpa(in_device, "vkCmdDrawClusterIndirectHUAWEI");
        pfn_CmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)gpa(in_device, "vkCmdCopyMemoryIndirectNV");
        pfn_CmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)gpa(in_device, "vkCmdCopyMemoryToImageIndirectNV");
        pfn_CmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)gpa(in_device, "vkCmdDecompressMemoryNV");
        pfn_CmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)gpa(in_device, "vkCmdDecompressMemoryIndirectCountNV");
        pfn_CmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)gpa(in_device, "vkCmdUpdatePipelineIndirectBufferNV");
        pfn_CmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)gpa(in_device, "vkCmdSetTessellationDomainOriginEXT");
        pfn_CmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)gpa(in_device, "vkCmdSetDepthClampEnableEXT");
        pfn_CmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)gpa(in_device, "vkCmdSetPolygonModeEXT");
        pfn_CmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)gpa(in_device, "vkCmdSetRasterizationSamplesEXT");
        pfn_CmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)gpa(in_device, "vkCmdSetSampleMaskEXT");
        pfn_CmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)gpa(in_device, "vkCmdSetAlphaToCoverageEnableEXT");
        pfn_CmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)gpa(in_device, "vkCmdSetAlphaToOneEnableEXT");
        pfn_CmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)gpa(in_device, "vkCmdSetLogicOpEnableEXT");
        pfn_CmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)gpa(in_device, "vkCmdSetColorBlendEnableEXT");
        pfn_CmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)gpa(in_device, "vkCmdSetColorBlendEquationEXT");
        pfn_CmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)gpa(in_device, "vkCmdSetColorWriteMaskEXT");
        pfn_CmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)gpa(in_device, "vkCmdSetRasterizationStreamEXT");
        pfn_CmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)gpa(in_device, "vkCmdSetConservativeRasterizationModeEXT");
        pfn_CmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)gpa(in_device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
        pfn_CmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)gpa(in_device, "vkCmdSetDepthClipEnableEXT");
        pfn_CmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)gpa(in_device, "vkCmdSetSampleLocationsEnableEXT");
        pfn_CmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)gpa(in_device, "vkCmdSetColorBlendAdvancedEXT");
        pfn_CmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)gpa(in_device, "vkCmdSetProvokingVertexModeEXT");
        pfn_CmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)gpa(in_device, "vkCmdSetLineRasterizationModeEXT");
        pfn_CmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)gpa(in_device, "vkCmdSetLineStippleEnableEXT");
        pfn_CmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)gpa(in_device, "vkCmdSetDepthClipNegativeOneToOneEXT");
        pfn_CmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)gpa(in_device, "vkCmdSetViewportWScalingEnableNV");
        pfn_CmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)gpa(in_device, "vkCmdSetViewportSwizzleNV");
        pfn_CmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)gpa(in_device, "vkCmdSetCoverageToColorEnableNV");
        pfn_CmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)gpa(in_device, "vkCmdSetCoverageToColorLocationNV");
        pfn_CmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)gpa(in_device, "vkCmdSetCoverageModulationModeNV");
        pfn_CmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)gpa(in_device, "vkCmdSetCoverageModulationTableEnableNV");
        pfn_CmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)gpa(in_device, "vkCmdSetCoverageModulationTableNV");
        pfn_CmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)gpa(in_device, "vkCmdSetShadingRateImageEnableNV");
        pfn_CmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)gpa(in_device, "vkCmdSetRepresentativeFragmentTestEnableNV");
        pfn_CmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)gpa(in_device, "vkCmdSetCoverageReductionModeNV");
        pfn_CmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)gpa(in_device, "vkCmdOpticalFlowExecuteNV");
        pfn_CmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)gpa(in_device, "vkCmdBindShadersEXT");
        pfn_CmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)gpa(in_device, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
        pfn_CmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)gpa(in_device, "vkCmdBuildAccelerationStructuresKHR");
        pfn_CmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)gpa(in_device, "vkCmdBuildAccelerationStructuresIndirectKHR");
        pfn_CmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)gpa(in_device, "vkCmdCopyAccelerationStructureKHR");
        pfn_CmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)gpa(in_device, "vkCmdCopyAccelerationStructureToMemoryKHR");
        pfn_CmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)gpa(in_device, "vkCmdCopyMemoryToAccelerationStructureKHR");
        pfn_CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)gpa(in_device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
        pfn_CmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)gpa(in_device, "vkCmdTraceRaysKHR");
        pfn_CmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)gpa(in_device, "vkCmdTraceRaysIndirectKHR");
        pfn_CmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)gpa(in_device, "vkCmdSetRayTracingPipelineStackSizeKHR");
        pfn_CmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)gpa(in_device, "vkCmdDrawMeshTasksEXT");
        pfn_CmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)gpa(in_device, "vkCmdDrawMeshTasksIndirectEXT");
        pfn_CmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)gpa(in_device, "vkCmdDrawMeshTasksIndirectCountEXT");
        return VK_SUCCESS;
    }
};
struct VkuQueueFunctionTable {
    VkQueue queue;
    PFN_vkQueueSubmit pfn_QueueSubmit{};
    PFN_vkQueueWaitIdle pfn_QueueWaitIdle{};
    PFN_vkQueueBindSparse pfn_QueueBindSparse{};
    PFN_vkQueueSubmit2 pfn_QueueSubmit2{};
    PFN_vkQueuePresentKHR pfn_QueuePresentKHR{};
    PFN_vkQueueSubmit2KHR pfn_QueueSubmit2KHR{};
    PFN_vkGetQueueCheckpointData2NV pfn_GetQueueCheckpointData2NV{};
    PFN_vkQueueBeginDebugUtilsLabelEXT pfn_QueueBeginDebugUtilsLabelEXT{};
    PFN_vkQueueEndDebugUtilsLabelEXT pfn_QueueEndDebugUtilsLabelEXT{};
    PFN_vkQueueInsertDebugUtilsLabelEXT pfn_QueueInsertDebugUtilsLabelEXT{};
    PFN_vkGetQueueCheckpointDataNV pfn_GetQueueCheckpointDataNV{};
    PFN_vkQueueSetPerformanceConfigurationINTEL pfn_QueueSetPerformanceConfigurationINTEL{};
    PFN_vkQueueNotifyOutOfBandNV pfn_QueueNotifyOutOfBandNV{};
    VkResult QueueSubmit(
        uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
        return pfn_QueueSubmit(queue, submitCount, pSubmits, fence);
    }
    VkResult QueueWaitIdle(
       ) {
        return pfn_QueueWaitIdle(queue);
    }
    VkResult QueueBindSparse(
        uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) {
        return pfn_QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
    }
    VkResult QueueSubmit2(
        uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
        return pfn_QueueSubmit2(queue, submitCount, pSubmits, fence);
    }
    VkResult QueuePresentKHR(
        const VkPresentInfoKHR* pPresentInfo) {
        return pfn_QueuePresentKHR(queue, pPresentInfo);
    }
    VkResult QueueSubmit2KHR(
        uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
        return pfn_QueueSubmit2KHR(queue, submitCount, pSubmits, fence);
    }
    void GetQueueCheckpointData2NV(
        uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) {
        pfn_GetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
    }
    void QueueBeginDebugUtilsLabelEXT(
        const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_QueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
    }
    void QueueEndDebugUtilsLabelEXT(
       ) {
        pfn_QueueEndDebugUtilsLabelEXT(queue);
    }
    void QueueInsertDebugUtilsLabelEXT(
        const VkDebugUtilsLabelEXT* pLabelInfo) {
        pfn_QueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
    }
    void GetQueueCheckpointDataNV(
        uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) {
        pfn_GetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
    }
    VkResult QueueSetPerformanceConfigurationINTEL(
        VkPerformanceConfigurationINTEL configuration) {
        return pfn_QueueSetPerformanceConfigurationINTEL(queue, configuration);
    }
    void QueueNotifyOutOfBandNV(
        const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo) {
        pfn_QueueNotifyOutOfBandNV(queue, pQueueTypeInfo);
    }
    VkResult init(PFN_vkGetDeviceProcAddr gpa, VkDevice in_device, VkQueue in_queue) {
        this->queue = in_queue;
        pfn_QueueSubmit = (PFN_vkQueueSubmit)gpa(in_device, "vkQueueSubmit");
        pfn_QueueWaitIdle = (PFN_vkQueueWaitIdle)gpa(in_device, "vkQueueWaitIdle");
        pfn_QueueBindSparse = (PFN_vkQueueBindSparse)gpa(in_device, "vkQueueBindSparse");
        pfn_QueueSubmit2 = (PFN_vkQueueSubmit2)gpa(in_device, "vkQueueSubmit2");
        pfn_QueuePresentKHR = (PFN_vkQueuePresentKHR)gpa(in_device, "vkQueuePresentKHR");
        pfn_QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)gpa(in_device, "vkQueueSubmit2KHR");
        pfn_GetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)gpa(in_device, "vkGetQueueCheckpointData2NV");
        pfn_QueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)gpa(in_device, "vkQueueBeginDebugUtilsLabelEXT");
        pfn_QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)gpa(in_device, "vkQueueEndDebugUtilsLabelEXT");
        pfn_QueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)gpa(in_device, "vkQueueInsertDebugUtilsLabelEXT");
        pfn_GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)gpa(in_device, "vkGetQueueCheckpointDataNV");
        pfn_QueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)gpa(in_device, "vkQueueSetPerformanceConfigurationINTEL");
        pfn_QueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)gpa(in_device, "vkQueueNotifyOutOfBandNV");
        return VK_SUCCESS;
    }
};

