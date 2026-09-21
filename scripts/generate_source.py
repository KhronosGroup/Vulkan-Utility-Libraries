#!/usr/bin/env python3
# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

import argparse
import os
import sys
import re
import shutil
import common_ci
from xml.etree import ElementTree

def GetApiVersions(tree, api: str) -> str:
    """Return a regex matching the core versions making up `api`, or None for base Vulkan.

    vk.xml tags core versions newer than the one a variant derives from as belonging
    to it anyway: VK_VERSION_1_4 is api="vulkan,vulkansc,vulkanbase" though
    VKSC_VERSION_1_0 depends on VK_VERSION_1_2. Walk `depends` from the variant's own
    feature to recover the versions it is really built on.
    """
    features = {f.get('name'): f for f in tree.getroot().findall('feature')
                if api in f.get('api', '').split(',')}

    roots = [name for name, feature in features.items()
             if feature.get('apitype') != 'internal'
             and 'vulkan' not in feature.get('api', '').split(',')]
    if not roots:
        return None

    needed = set()
    pending = list(roots)
    while pending:
        name = pending.pop()
        if name in needed or name not in features:
            continue
        needed.add(name)
        # 'depends' is a boolean expression; only the feature names in it matter.
        pending.extend(re.split(r'[^A-Za-z0-9_]+', features[name].get('depends', '')))

    return '|'.join(sorted(needed))

def RunGenerators(api: str, registry: str, targetFilter: str, merge: bool = True) -> None:

    has_clang_format = shutil.which('clang-format') is not None
    if not has_clang_format:
        print("WARNING: Unable to find clang-format!")

    # These live in the Vulkan-Docs repo, but are pulled in via the
    # Vulkan-Headers/registry folder
    # At runtime we inject python path to find these helper scripts
    scripts = os.path.dirname(registry)
    scripts_directory_path = os.path.dirname(os.path.abspath(__file__))
    registry_headers_path = os.path.join(scripts_directory_path, scripts)
    sys.path.insert(0, registry_headers_path)
    try:
        from reg import Registry
    except:
        print("ModuleNotFoundError: No module named 'reg'") # normal python error message
        print(f'{registry_headers_path} is not pointing to the Vulkan-Headers registry directory.')
        print("Inside Vulkan-Headers there is a registry/reg.py file that is used.")
        sys.exit(1) # Return without call stack so easy to spot error

    from base_generator import BaseGeneratorOptions
    from generators.dispatch_table_generator import DispatchTableOutputGenerator
    from generators.enum_string_helper_generator import EnumStringHelperOutputGenerator
    from generators.format_utils_generator import FormatUtilsOutputGenerator
    from generators.struct_helper_generator import StructHelperOutputGenerator
    from generators.safe_struct_generator import SafeStructOutputGenerator

    # These set fields that are needed by both OutputGenerator and BaseGenerator,
    # but are uniform and don't need to be set at a per-generated file level
    from base_generator import (SetTargetApiName, SetMergedApiNames)
    SetTargetApiName(api)

    # Build up a list of all generators and custom options
    generators = {
        'vk_dispatch_table.h' : {
           'generator' : DispatchTableOutputGenerator,
           'genCombined': True,
           'directory' : f'include/vulkan/utility',
        },
        'vk_enum_string_helper.h' : {
            'generator' : EnumStringHelperOutputGenerator,
            'genCombined': True,
            'directory' : f'include/vulkan',
        },
        'vk_format_utils.h' : {
            'generator' : FormatUtilsOutputGenerator,
            'genCombined': True,
            'directory' : f'include/vulkan/utility',
        },
        'vk_struct_helper.hpp' : {
            'generator' : StructHelperOutputGenerator,
            'genCombined': True,
            'directory' : f'include/vulkan/utility',
        },
        'vk_safe_struct.hpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'directory' : f'include/vulkan/utility',
        },
        'vk_safe_struct_utils.cpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'directory' : f'src/vulkan',
        },
        'vk_safe_struct_core.cpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'regenerate' : True,
            'directory' : f'src/vulkan',
        },
        'vk_safe_struct_khr.cpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'directory' : f'src/vulkan',
        },
        'vk_safe_struct_ext.cpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'directory' : f'src/vulkan',
        },
        'vk_safe_struct_vendor.cpp' : {
            'generator' : SafeStructOutputGenerator,
            'genCombined': True,
            'directory' : f'src/vulkan',
        },
    }

    unknownTargets = [x for x in (targetFilter if targetFilter else []) if x not in generators.keys()]
    if unknownTargets:
        print(f'ERROR: No generator options for unknown target(s): {", ".join(unknownTargets)}', file=sys.stderr)
        return 1

    # Filter if --target is passed in
    targets = [x for x in generators.keys() if not targetFilter or x in targetFilter]

    for index, target in enumerate(targets, start=1):
        print(f'[{index}|{len(targets)}] Generating {target}')

        # First grab a class contructor object and create an instance
        generator = generators[target]['generator']
        gen = generator()

        # This code and the 'genCombined' generator metadata is used by downstream
        # users to generate code with all Vulkan APIs merged into the target API variant
        # (e.g. Vulkan SC) when needed. The constructed apiList is also used to filter
        # out non-applicable extensions later below.
        # --no-merge suppresses the merge, for consumers compiling against the
        # variant's own headers where base Vulkan tokens do not exist.
        apiList = [api]
        if merge and api != 'vulkan' and generators[target]['genCombined']:
            SetMergedApiNames('vulkan')
            apiList.append('vulkan')
        else:
            SetMergedApiNames(None)

        outDirectory = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', generators[target]['directory']))
        options = BaseGeneratorOptions(
            customFileName  = target,
            customDirectory = outDirectory)

        # Parse the specified registry XML into an ElementTree object
        tree = ElementTree.parse(registry)

        # Output scoped to the target API needs its core versions scoped to match.
        if not merge:
            versions = GetApiVersions(tree, api)
            if versions:
                options.versions = versions
                options.emitversions = versions

        # Create the registry object with the specified generator and generator
        # options. The options are set before XML loading as they may affect it.
        reg = Registry(gen, options)

        # Load the XML tree into the registry object
        reg.loadElementTree(tree)

        # Finally, use the output generator to create the requested target
        reg.apiGen()

        # Run clang-format on the file
        if has_clang_format:
            common_ci.RunShellCmd(f'clang-format -i {os.path.join(outDirectory, target)}')

# helper to define paths relative to the repo root
def repo_relative(path):
    return os.path.abspath(os.path.join(os.path.dirname(__file__), '..', path))

def main(argv):
    parser = argparse.ArgumentParser(description='Generate source code for this repository')
    parser.add_argument('--api',
                        default='vulkan',
                        choices=['vulkan', 'vulkansc'],
                        help='Specify API name to generate')
    parser.add_argument('--no-merge',
                        dest='merge',
                        action='store_false',
                        help='Do not merge the base Vulkan API into the target API variant; '
                             'generate output scoped strictly to --api. Has no effect for --api vulkan.')
    parser.add_argument('registry', metavar='REGISTRY_PATH', help='path to the Vulkan-Headers registry directory')
    parser.add_argument('--generated-version', help='sets the header version used to generate the repo')
    group = parser.add_mutually_exclusive_group()
    group.add_argument('--target', nargs='+', help='only generate file name passed in')
    args = parser.parse_args(argv)

    registry = os.path.abspath(os.path.join(args.registry,  'vk.xml'))
    if not os.path.isfile(registry):
        registry = os.path.abspath(os.path.join(args.registry, 'Vulkan-Headers/registry/vk.xml'))
        if not os.path.isfile(registry):
            print(f'cannot find vk.xml in {args.registry}')
            return -1

    RunGenerators(args.api, registry, args.target, args.merge)

    # write out the header version used to generate the code to a checked in CMake file
    if args.generated_version:
        # Update the CMake project version
        with open(repo_relative('CMakeLists.txt'), "r+") as f:
            data = f.read()
            f.seek(0)
            f.write(re.sub("project.*VERSION.*", f"project(VUL VERSION {args.generated_version} LANGUAGES CXX)", data))
            f.truncate()

    return 0

if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))

