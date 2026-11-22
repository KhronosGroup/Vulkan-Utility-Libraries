// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
//

#include <vulkan/utility/vk_safe_struct.hpp>
#include <vulkan/utility/vk_struct_helper.hpp>
#include <gtest/gtest.h>
#include <array>

TEST(safe_struct, basic) {
    vku::safe_VkInstanceCreateInfo safe_info;
    {
        VkApplicationInfo app = vku::InitStructHelper();
        app.pApplicationName = "test";
        app.applicationVersion = 42;

        VkDebugUtilsMessengerCreateInfoEXT debug_ci = vku::InitStructHelper();
        debug_ci.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;

        VkInstanceCreateInfo info = vku::InitStructHelper();
        info.pApplicationInfo = &app;
        info.pNext = &debug_ci;

        safe_info.initialize(&info);

        memset(&info, 0x11, sizeof(info));
        memset(&app, 0x22, sizeof(app));
        memset(&debug_ci, 0x33, sizeof(debug_ci));
    }
    ASSERT_EQ(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, safe_info.sType);
    ASSERT_EQ(0, strcmp("test", safe_info.pApplicationInfo->pApplicationName));
    ASSERT_EQ(42u, safe_info.pApplicationInfo->applicationVersion);

    auto debug_ci = vku::FindStructInPNextChain<VkDebugUtilsMessengerCreateInfoEXT>(safe_info.pNext);
    ASSERT_NE(nullptr, debug_ci);
    ASSERT_EQ(static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT),
              debug_ci->messageSeverity);
}

TEST(safe_struct, safe_void_pointer_copies) {
    // vku::safe_VkSpecializationInfo, constructor
    {
        std::vector<std::byte> data(20, std::byte{0b11110000});

        VkSpecializationInfo info = {};
        info.dataSize = uint32_t(data.size());
        info.pData = data.data();

        vku::safe_VkSpecializationInfo safe(&info);

        ASSERT_TRUE(safe.pData != info.pData);
        ASSERT_TRUE(safe.dataSize == info.dataSize);

        data.clear();  // Invalidate any references, pointers, or iterators referring to contained elements.

        auto copied_bytes = reinterpret_cast<const std::byte *>(safe.pData);
        ASSERT_TRUE(copied_bytes[19] == std::byte{0b11110000});
    }

    // vku::safe_VkPipelineExecutableInternalRepresentationKHR, initialize
    {
        std::vector<std::byte> data(11, std::byte{0b01001001});

        VkPipelineExecutableInternalRepresentationKHR info = {};
        info.dataSize = uint32_t(data.size());
        info.pData = data.data();

        vku::safe_VkPipelineExecutableInternalRepresentationKHR safe;

        safe.initialize(&info);

        ASSERT_TRUE(safe.dataSize == info.dataSize);
        ASSERT_TRUE(safe.pData != info.pData);

        data.clear();  // Invalidate any references, pointers, or iterators referring to contained elements.

        auto copied_bytes = reinterpret_cast<const std::byte *>(safe.pData);
        ASSERT_TRUE(copied_bytes[10] == std::byte{0b01001001});
    }
}

TEST(safe_struct, custom_safe_pnext_copy) {
    // This tests an additional "copy_state" parameter in the SafePNextCopy function that allows "customizing" safe_* struct
    // construction.. This is required for structs such as VkPipelineRenderingCreateInfo (which extend VkGraphicsPipelineCreateInfo)
    // whose members must be partially ignored depending on the graphics sub-state present.

    VkFormat format = VK_FORMAT_B8G8R8A8_UNORM;
    VkPipelineRenderingCreateInfo pri = vku::InitStructHelper();
    pri.colorAttachmentCount = 1;
    pri.pColorAttachmentFormats = &format;

    bool ignore_default_construction = true;
    vku::PNextCopyState copy_state = {
        [&ignore_default_construction](VkBaseOutStructure *safe_struct,
                                       [[maybe_unused]] const VkBaseOutStructure *in_struct) -> bool {
            if (ignore_default_construction) {
                auto tmp = reinterpret_cast<vku::safe_VkPipelineRenderingCreateInfo *>(safe_struct);
                tmp->colorAttachmentCount = 0;
                tmp->pColorAttachmentFormats = nullptr;
                return true;
            }
            return false;
        },
    };

    {
        VkGraphicsPipelineCreateInfo gpci = vku::InitStructHelper(&pri);
        vku::safe_VkGraphicsPipelineCreateInfo safe_gpci(&gpci, false, false, &copy_state);

        auto safe_pri = reinterpret_cast<const vku::safe_VkPipelineRenderingCreateInfo *>(safe_gpci.pNext);
        // Ensure original input struct was not modified
        ASSERT_EQ(pri.colorAttachmentCount, 1u);
        ASSERT_EQ(pri.pColorAttachmentFormats, &format);

        // Ensure safe struct was modified
        ASSERT_EQ(safe_pri->colorAttachmentCount, 0u);
        ASSERT_EQ(safe_pri->pColorAttachmentFormats, nullptr);
    }

    // Ensure PNextCopyState::init is also applied when there is more than one element in the pNext chain
    {
        VkGraphicsPipelineLibraryCreateInfoEXT gpl_info = vku::InitStructHelper(&pri);
        VkGraphicsPipelineCreateInfo gpci = vku::InitStructHelper(&gpl_info);

        vku::safe_VkGraphicsPipelineCreateInfo safe_gpci(&gpci, false, false, &copy_state);

        auto safe_gpl_info = reinterpret_cast<const vku::safe_VkGraphicsPipelineLibraryCreateInfoEXT *>(safe_gpci.pNext);
        auto safe_pri = reinterpret_cast<const vku::safe_VkPipelineRenderingCreateInfo *>(safe_gpl_info->pNext);
        // Ensure original input struct was not modified
        ASSERT_EQ(pri.colorAttachmentCount, 1u);
        ASSERT_EQ(pri.pColorAttachmentFormats, &format);

        // Ensure safe struct was modified
        ASSERT_EQ(safe_pri->colorAttachmentCount, 0u);
        ASSERT_EQ(safe_pri->pColorAttachmentFormats, nullptr);
    }

    // Check that signaling to use the default constructor works
    {
        pri.colorAttachmentCount = 1;
        pri.pColorAttachmentFormats = &format;

        ignore_default_construction = false;
        VkGraphicsPipelineCreateInfo gpci = vku::InitStructHelper(&pri);
        vku::safe_VkGraphicsPipelineCreateInfo safe_gpci(&gpci, false, false, &copy_state);

        auto safe_pri = reinterpret_cast<const vku::safe_VkPipelineRenderingCreateInfo *>(safe_gpci.pNext);
        // Ensure original input struct was not modified
        ASSERT_EQ(pri.colorAttachmentCount, 1u);
        ASSERT_EQ(pri.pColorAttachmentFormats, &format);

        // Ensure safe struct was modified
        ASSERT_EQ(safe_pri->colorAttachmentCount, 1u);
        ASSERT_EQ(*safe_pri->pColorAttachmentFormats, format);
    }
}

TEST(safe_struct, extension_add_remove) {
    std::array<const char *, 6> extensions{
        "VK_KHR_maintenance1", "VK_KHR_maintenance2", "VK_KHR_maintenance3",
        "VK_KHR_maintenance4", "VK_KHR_maintenance5", "VK_KHR_maintenance6",
    };
    VkDeviceCreateInfo ci = vku::InitStructHelper();
    ci.ppEnabledExtensionNames = extensions.data();
    ci.enabledExtensionCount = static_cast<uint32_t>(extensions.size());

    vku::safe_VkDeviceCreateInfo safe_ci(&ci);
    ASSERT_EQ(3u, vku::FindExtension(safe_ci, "VK_KHR_maintenance4"));
    ASSERT_EQ(safe_ci.enabledExtensionCount, vku::FindExtension(safe_ci, "VK_KHR_maintenance0"));

    ASSERT_EQ(false, vku::RemoveExtension(safe_ci, "VK_KHR_maintenance0"));
    ASSERT_EQ(true, vku::AddExtension(safe_ci, "VK_KHR_maintenance0"));

    ASSERT_EQ(true, vku::RemoveExtension(safe_ci, "VK_KHR_maintenance0"));
    for (const auto &ext : extensions) {
        ASSERT_EQ(true, vku::RemoveExtension(safe_ci, ext));
    }
    ASSERT_EQ(false, vku::RemoveExtension(safe_ci, "VK_KHR_maintenance0"));

    ASSERT_EQ(0u, safe_ci.enabledExtensionCount);
    ASSERT_EQ(nullptr, safe_ci.ppEnabledExtensionNames);

    for (const auto &ext : extensions) {
        ASSERT_EQ(true, vku::AddExtension(safe_ci, ext));
    }
    ASSERT_EQ(extensions.size(), safe_ci.enabledExtensionCount);
}

TEST(safe_struct, pnext_add_remove) {
    VkPhysicalDeviceRayTracingPipelineFeaturesKHR rtp = vku::InitStructHelper();
    VkPhysicalDeviceRayQueryFeaturesKHR rtq = vku::InitStructHelper(&rtp);
    VkPhysicalDeviceMeshShaderFeaturesEXT mesh = vku::InitStructHelper(&rtq);
    VkPhysicalDeviceFeatures2 features = vku::InitStructHelper(&mesh);

    vku::safe_VkPhysicalDeviceFeatures2 sf(&features);

    // unlink the structs so they can be added one at a time.
    rtp.pNext = nullptr;
    rtq.pNext = nullptr;
    mesh.pNext = nullptr;

    ASSERT_EQ(true, vku::RemoveFromPnext(sf, rtq.sType));
    ASSERT_EQ(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayQueryFeaturesKHR>(sf.pNext));
    ASSERT_EQ(false, vku::RemoveFromPnext(sf, rtq.sType));

    ASSERT_EQ(true, vku::RemoveFromPnext(sf, rtp.sType));
    ASSERT_EQ(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(sf.pNext));

    ASSERT_EQ(true, vku::RemoveFromPnext(sf, mesh.sType));
    ASSERT_EQ(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceMeshShaderFeaturesEXT>(sf.pNext));

    ASSERT_EQ(nullptr, sf.pNext);
    ASSERT_EQ(true, vku::AddToPnext(sf, mesh));
    ASSERT_EQ(false, vku::AddToPnext(sf, mesh));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceMeshShaderFeaturesEXT>(sf.pNext));

    ASSERT_EQ(true, vku::AddToPnext(sf, rtq));
    ASSERT_EQ(false, vku::AddToPnext(sf, rtq));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayQueryFeaturesKHR>(sf.pNext));

    ASSERT_EQ(true, vku::AddToPnext(sf, rtp));
    ASSERT_EQ(false, vku::AddToPnext(sf, rtp));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(sf.pNext));

    ASSERT_EQ(true, vku::RemoveFromPnext(sf, mesh.sType));
    ASSERT_EQ(true, vku::RemoveFromPnext(sf, rtp.sType));
    ASSERT_EQ(true, vku::RemoveFromPnext(sf, rtq.sType));

    // relink the structs so they can be added all at once
    rtq.pNext = &rtp;
    mesh.pNext = &rtq;

    ASSERT_EQ(true, vku::AddToPnext(sf, mesh));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(sf.pNext));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceMeshShaderFeaturesEXT>(sf.pNext));
    ASSERT_NE(nullptr, vku::FindStructInPNextChain<VkPhysicalDeviceRayQueryFeaturesKHR>(sf.pNext));
}

TEST(safe_struct, shader_module_set_code_no_copy) {
    const std::array<uint32_t, 3> code = {0x07230203, 0x00010000, 0x12345678};
    VkShaderModuleCreateInfo module_ci = vku::InitStructHelper();
    module_ci.codeSize = sizeof(code);
    module_ci.pCode = code.data();

    const std::array<uint32_t, 2> new_code = {0x07230203, 0x00010600};
    {
        vku::safe_VkShaderModuleCreateInfo safe_module_ci(&module_ci);
        safe_module_ci.SetCodeNoCopy(new_code.data(), sizeof(new_code));
        ASSERT_FALSE(safe_module_ci.owns_code);
        ASSERT_EQ(sizeof(new_code), safe_module_ci.codeSize);
        ASSERT_EQ(new_code.data(), safe_module_ci.pCode);

        vku::safe_VkShaderModuleCreateInfo copy_ci(safe_module_ci);
        ASSERT_TRUE(copy_ci.owns_code);
        ASSERT_NE(new_code.data(), copy_ci.pCode);
        ASSERT_EQ(new_code[1], copy_ci.pCode[1]);

        vku::safe_VkShaderModuleCreateInfo assigned_ci;
        assigned_ci = safe_module_ci;
        ASSERT_TRUE(assigned_ci.owns_code);
        ASSERT_NE(new_code.data(), assigned_ci.pCode);
    }
    {
        vku::safe_VkShaderModuleCreateInfo safe_module_ci(&module_ci);
        safe_module_ci.SetCodeNoCopy(new_code.data(), sizeof(new_code));
        safe_module_ci.initialize(&module_ci);
        ASSERT_TRUE(safe_module_ci.owns_code);
        ASSERT_NE(code.data(), safe_module_ci.pCode);
        ASSERT_EQ(code[2], safe_module_ci.pCode[2]);
    }
}

TEST(safe_struct, indirect_commands_layout_token_data) {
    vku::safe_VkIndirectCommandsLayoutCreateInfoEXT copied;
    {
        vku::safe_VkIndirectCommandsLayoutCreateInfoEXT safe_info;
        {
            VkIndirectCommandsExecutionSetTokenEXT execution_set = {VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT,
                                                                    VK_SHADER_STAGE_COMPUTE_BIT};
            VkIndirectCommandsPushConstantTokenEXT push_constant = {{VK_SHADER_STAGE_COMPUTE_BIT, 4, 8}};
            VkIndirectCommandsLayoutTokenEXT tokens[3];
            tokens[0] = vku::InitStructHelper();
            tokens[0].type = VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT;
            tokens[0].data.pExecutionSet = &execution_set;
            tokens[1] = vku::InitStructHelper();
            tokens[1].type = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT;
            tokens[1].data.pPushConstant = &push_constant;
            tokens[1].offset = 4;
            tokens[2] = vku::InitStructHelper();
            tokens[2].type = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_EXT;
            tokens[2].offset = 12;

            VkIndirectCommandsLayoutCreateInfoEXT info = vku::InitStructHelper();
            info.tokenCount = 3;
            info.pTokens = tokens;
            safe_info.initialize(&info);

            // The data the tokens point to goes out of scope
            memset(&execution_set, 0x11, sizeof(execution_set));
            memset(&push_constant, 0x22, sizeof(push_constant));
        }
        copied = safe_info;
    }
    ASSERT_EQ(3u, copied.tokenCount);
    EXPECT_EQ(VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT, copied.pTokens[0].data.pExecutionSet->type);
    EXPECT_EQ(static_cast<VkShaderStageFlags>(VK_SHADER_STAGE_COMPUTE_BIT), copied.pTokens[0].data.pExecutionSet->shaderStages);
    EXPECT_EQ(4u, copied.pTokens[1].data.pPushConstant->updateRange.offset);
    EXPECT_EQ(8u, copied.pTokens[1].data.pPushConstant->updateRange.size);
    EXPECT_EQ(12u, copied.pTokens[2].offset);
}

TEST(safe_struct, indirect_execution_set_create_info_union) {
    vku::safe_VkIndirectExecutionSetCreateInfoEXT copied;
    {
        vku::safe_VkIndirectExecutionSetCreateInfoEXT safe_info;
        {
            VkIndirectExecutionSetPipelineInfoEXT pipeline_info = vku::InitStructHelper();
            pipeline_info.maxPipelineCount = 7;

            VkIndirectExecutionSetCreateInfoEXT info = vku::InitStructHelper();
            info.type = VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT;
            info.info.pPipelineInfo = &pipeline_info;
            safe_info.initialize(&info);
            memset(&pipeline_info, 0x11, sizeof(pipeline_info));
        }
        copied = safe_info;
    }
    ASSERT_NE(nullptr, copied.info.pPipelineInfo);
    EXPECT_EQ(7u, copied.info.pPipelineInfo->maxPipelineCount);
}

TEST(safe_struct, multisample_state_sample_mask_words) {
    std::array<VkSampleMask, 2> sample_mask = {0x80000001u, 0x80000002u};

    VkPipelineMultisampleStateCreateInfo info = vku::InitStructHelper();
    info.rasterizationSamples = VK_SAMPLE_COUNT_64_BIT;
    info.pSampleMask = sample_mask.data();

    vku::safe_VkPipelineMultisampleStateCreateInfo constructed(&info);
    vku::safe_VkPipelineMultisampleStateCreateInfo initialized;
    initialized.initialize(&info);
    sample_mask.fill(0);

    vku::safe_VkPipelineMultisampleStateCreateInfo copy_constructed(constructed);
    vku::safe_VkPipelineMultisampleStateCreateInfo assigned;
    assigned = initialized;

    for (const auto *copy : {&constructed, &initialized, &copy_constructed, &assigned}) {
        ASSERT_NE(nullptr, copy->pSampleMask);
        EXPECT_EQ(0x80000001u, copy->pSampleMask[0]);
        EXPECT_EQ(0x80000002u, copy->pSampleMask[1]);
    }
}
