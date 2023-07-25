#!/usr/bin/python3 -i
#
# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator

class LayerDispatchTableOutputGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def generate(self):
        out = []
        out.append(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See {os.path.basename(__file__)} for modifications
// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
\n''')
        out.append('// NOLINTBEGIN') # Wrap for clang-tidy to ignore

        out.append('''
#pragma once

typedef PFN_vkVoidFunction (VKAPI_PTR *PFN_GetPhysicalDeviceProcAddr)(VkInstance instance, const char* pName);
''')
        out.append('''
// Instance function pointer dispatch table
typedef struct VkLayerInstanceDispatchTable_ {
    PFN_GetPhysicalDeviceProcAddr GetPhysicalDeviceProcAddr;

''')
        for command in [x for x in self.vk.commands.values() if x.instance]:
            out.extend([f'#ifdef {command.protect}\n'] if command.protect else [])
            out.append(f'    PFN_{command.name} {command.name[2:]};\n')
            out.extend([f'#endif //{command.protect}\n'] if command.protect else [])
        out.append('} VkLayerInstanceDispatchTable;\n')

        out.append('''
// Device function pointer dispatch table
typedef struct VkLayerDispatchTable_ {
''')
        for command in [x for x in self.vk.commands.values() if x.device]:
            out.extend([f'#ifdef {command.protect}\n'] if command.protect else [])
            out.append(f'    PFN_{command.name} {command.name[2:]};\n')
            out.extend([f'#endif //{command.protect}\n'] if command.protect else [])
        out.append('} VkLayerDispatchTable;\n')

        out.append('// NOLINTEND') # Wrap for clang-tidy to ignore
        self.write("".join(out))