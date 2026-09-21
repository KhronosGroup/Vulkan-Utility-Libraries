<!--
Copyright 2023 The Khronos Group Inc.
Copyright 2023 Valve Corporation
Copyright 2023 LunarG, Inc.

SPDX-License-Identifier: Apache-2.0
-->

# How to generate the code

- Linux:
```bash
scripts/generate_source.py external/Vulkan-Headers/registry/
```

- Windows Powershell:
```powershell
pwsh -Command { python3 scripts/generate_source.py external/Vulkan-Headers/registry/ }
```

- Windows Command:
```cmd
cmd /C "python3 scripts/generate_source.py external/Vulkan-Headers/registry/"
```

If only dealing with a single file,  run `scripts/generate_source.py` with `--target`

```bash
# Example - only generates chassis.h
scripts/generate_source.py external/Vulkan-Headers/registry/ --target vk_dispatch_table.h
```

When making change to the `scripts/` folder, make sure to run `generate_source.py`
(Code generation does **not** happen automatically at build time.)

## Generating for other APIs

`--api` selects the API to generate for. It defaults to `vulkan`, which is what the
checked-in code is generated from; nothing below affects that default.

For an API variant such as Vulkan SC, the output by default is the variant merged with
base Vulkan, which suits consumers that translate between the two APIs. Consumers that
compile against the variant's own headers need `--no-merge`, which scopes the output
strictly to `--api` -- a token that exists only in base Vulkan, such as
`VK_FORMAT_A8_UNORM`, is then left out rather than emitted into code that cannot
compile against `vulkan_sc.h`.

```bash
# Generate a Vulkan SC scoped header from the VulkanSC-Headers registry
scripts/generate_source.py external/VulkanSC-Headers/registry/ \
    --api vulkansc --no-merge --target vk_format_utils.h
```

Code that is specific to an extension the target API may not define belongs behind a
`#ifdef` on the extension name, in both the generators and the hand-written sources
under `src/`, so that one generated file stays usable across APIs.
