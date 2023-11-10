# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

add_library(VulkanCompilerConfiguration INTERFACE)
add_library(Vulkan::CompilerConfiguration ALIAS VulkanCompilerConfiguration)
if(${CMAKE_CXX_COMPILER_ID} MATCHES "(GNU|Clang)")
    target_compile_options(VulkanCompilerConfiguration INTERFACE
        -Wpedantic
        -Wunreachable-code
        -Wunused-function
        -Wall
        -Wextra
        -Wpointer-arith
        -Wextra-semi
    )
    if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang")
        target_compile_options(VulkanCompilerConfiguration INTERFACE
            -Wunreachable-code-return
            -Wconversion
            -Wimplicit-fallthrough
            -Wstring-conversion
        )
    endif()
elseif(MSVC)
    target_compile_options(VulkanCompilerConfiguration INTERFACE
        /W4
        /we5038 # Enable warning about MIL ordering in constructors
    )

    # Enforce stricter ISO C++
    target_compile_options(VulkanCompilerConfiguration INTERFACE /permissive-)

    # Speed up Visual Studio builds
    if (MSVC_IDE)
        target_compile_options(VulkanCompilerConfiguration INTERFACE /MP)
    endif()
endif()

target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_ENABLE_BETA_EXTENSIONS)
if(WIN32)
    # Minimize what Windows.h leaks
    target_compile_definitions(VulkanCompilerConfiguration INTERFACE NOMINMAX WIN32_LEAN_AND_MEAN)

    target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_USE_PLATFORM_WIN32_KHR)
elseif(ANDROID)
    target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_USE_PLATFORM_ANDROID_KHR)
elseif(APPLE)
    target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_USE_PLATFORM_METAL_EXT)
    if (IOS)
        target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_USE_PLATFORM_IOS_MVK)
    elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
        target_compile_definitions(VulkanCompilerConfiguration INTERFACE VK_USE_PLATFORM_MACOS_MVK)
    endif()
endif()

option(VUL_WERROR "Treat compiler warnings as errors")
if (VUL_WERROR)
    if (MSVC)
        target_compile_options(VulkanCompilerConfiguration INTERFACE /WX)
        target_link_options(VulkanCompilerConfiguration INTERFACE /WX)
    else()
        target_compile_options(VulkanCompilerConfiguration INTERFACE -Werror)
    endif()
endif()

add_subdirectory(layer)
