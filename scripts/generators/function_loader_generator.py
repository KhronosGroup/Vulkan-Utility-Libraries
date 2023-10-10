#!/usr/bin/python3 -i
#
# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class FunctionLoaderOutputGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def print_global_function_table(self):
        out = []
        out.append('''struct VkuGlobalFunctionTable {
    detail::vku_dl_handle lib_handle{};
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr{};
''')
        global_function_names = ['vkEnumerateInstanceVersion', 'vkEnumerateInstanceExtensionProperties', 'vkEnumerateInstanceLayerProperties', 'vkCreateInstance']
        for command in global_function_names:
            out.append(f'    PFN_{command} {command[2:]}{{}};\n')
        out.append('    VkResult init(PFN_vkGetInstanceProcAddr optional_vkGetInstanceProcAddr = nullptr) {\n')
        out.append('        if (nullptr != optional_vkGetInstanceProcAddr) {\n')
        out.append('            GetInstanceProcAddr = optional_vkGetInstanceProcAddr;\n')
        for command in global_function_names:
            out.append(f'            {command[2:]} = reinterpret_cast<PFN_{command}>(optional_vkGetInstanceProcAddr(nullptr, "{command}"));\n')
        out.append('''            return VK_SUCCESS;
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
            printf("%s\\n", detail::vkuOpenLibraryError(filename));
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        GetInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(detail::vkuGetProcAddress(lib_handle, "vkGetInstanceProcAddr"));
        if (GetInstanceProcAddr == nullptr){
            return VK_ERROR_INITIALIZATION_FAILED;
        }
''')

        for command in global_function_names:
            out.append(f'        {command[2:]} = reinterpret_cast<PFN_{command}>(detail::vkuGetProcAddress(lib_handle, "{command}"));\n')
        out.append('        return VK_SUCCESS;\n')
        out.append('    }\n')
        out.append('''    void release() {
        if (lib_handle != nullptr) {
            detail::vkuCloseLibrary(lib_handle);
        }
    }
''')
        out.append('};\n')

        return out

    def check_if_should_print(self, command, allowed_dispatch_types, dispatch_type):
        if command.params[0].type not in allowed_dispatch_types:
            # must explicitely include vkGetDeviceProcAddr in the VkInstance table
            if not(dispatch_type == 'VkInstance' and command.name == 'vkGetDeviceProcAddr'):
                return True
        return False

    def print_dispatch_table(self, dispatch_type, dispatch_name):
        out = []
        out.append(f'struct Vku{dispatch_type[2:]}FunctionTable {{\n')
        out.append(f'    {dispatch_type} {dispatch_name};\n')

        allowed_dispatch_types = [dispatch_type]
        if dispatch_type == 'VkInstance':
            allowed_dispatch_types.append('VkPhysicalDevice')
        if dispatch_type == 'VkDevice':
            allowed_dispatch_types.append('VkCommandBuffer')
            allowed_dispatch_types.append('VkQueue')


        guard_helper = PlatformGuardHelper()
        for command in self.vk.commands.values():
            if self.check_if_should_print(command, allowed_dispatch_types, dispatch_type):
                continue
            out.extend(guard_helper.addGuard(command.protect))
            out.append(f'    PFN_{command.name} pfn_{command.name[2:]}{{}};\n')
        out.extend(guard_helper.addGuard(None))

        for command in self.vk.commands.values():
            if command.params[0].type not in allowed_dispatch_types:
                continue
            out.extend(guard_helper.addGuard(command.protect))
            out.append(f'    {command.returnType} {command.name[2:]}(\n')
            modified_param_list = command.params
            if modified_param_list[0].type == dispatch_type:
                modified_param_list = modified_param_list[1:]
            param_decls = []
            for param in modified_param_list:
                # split & join to trim out whitespace in the cDeclaration
                param_decls.append(' '.join(param.cDeclaration.split('    ')))
            out.append(f'       {",".join(param_decls)}')
            return_stmt = 'return ' if command.returnType != 'void' else ''
            out.append(f') {{\n        {return_stmt}pfn_{command.name[2:]}(')
            param_names = []
            for param in command.params:
                param_names.append(param.name)
            out.append(f'{", ".join(param_names)}')
            out.append(');\n    }\n')

        out.extend(guard_helper.addGuard(None))

        gpa = 'PFN_vkGetInstanceProcAddr gpa' if dispatch_type in ['VkInstance', 'VkPhysicalDevice'] else 'PFN_vkGetDeviceProcAddr gpa'
        gpa_dispatch_decl = 'VkInstance in_instance' if dispatch_type in ['VkInstance', 'VkPhysicalDevice'] else 'VkDevice in_device'
        gpa_dispatch = 'in_instance' if dispatch_type in ['VkInstance', 'VkPhysicalDevice'] else 'in_device'
        need_explicit_dispatch = ''
        if dispatch_type in ['VkPhysicalDevice']:
            need_explicit_dispatch = ', VkPhysicalDevice in_physicalDevice'
        elif dispatch_type in ['VkCommandBuffer']:
            need_explicit_dispatch = ', VkCommandBuffer in_commandBuffer'
        elif dispatch_type in ['VkCommandBuffer', 'VkQueue']:
            need_explicit_dispatch = ', VkQueue in_queue'
        out.append(f'    VkResult init({gpa}, {gpa_dispatch_decl}{need_explicit_dispatch}) {{\n')
        out.append(f'        this->{dispatch_name} = in_{dispatch_name};\n')

        for command in self.vk.commands.values():
            if self.check_if_should_print(command, allowed_dispatch_types, dispatch_type):
                continue
            out.extend(guard_helper.addGuard(command.protect))
            out.append(f'        pfn_{command.name[2:]} = (PFN_{command.name})gpa({gpa_dispatch}, "{command.name}");\n')
        out.extend(guard_helper.addGuard(None))
        out.append('        return VK_SUCCESS;\n')
        out.append('    }\n')
        out.append('};\n')

        return out

    def generate(self):
        out = []
        out.append(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See {os.path.basename(__file__)} for modifications
// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
''')

        out.append('''
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
    (void)snprintf(errorMsg, 163, "Failed to open dynamic library \\"%s\\" with error %lu", libPath, GetLastError());
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

''')
        out.extend(self.print_global_function_table())
        out.extend(self.print_dispatch_table('VkInstance', 'instance'))
        out.extend(self.print_dispatch_table('VkPhysicalDevice', 'physicalDevice'))
        out.extend(self.print_dispatch_table('VkDevice', 'device'))
        out.extend(self.print_dispatch_table('VkCommandBuffer', 'commandBuffer'))
        out.extend(self.print_dispatch_table('VkQueue', 'queue'))


        self.write("".join(out))

