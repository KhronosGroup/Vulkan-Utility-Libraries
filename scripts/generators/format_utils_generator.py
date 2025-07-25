#!/usr/bin/python3 -i
#
# Copyright 2023-2025 The Khronos Group Inc.
# Copyright 2023-2025 Valve Corporation
# Copyright 2023-2025 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

import os
from collections import namedtuple
from vulkan_object import (Format)
from base_generator import BaseGenerator

# Make C name friendly class name
def getClassName(className: str) -> str:
    return className.replace('-', '').replace(' ', '_').upper()

def formatHasDepth(format: Format) -> bool:
    return any(x.type == 'D' for x in format.components)

def formatHasStencil(format: Format) -> bool:
    return any(x.type == 'S' for x in format.components)

def formatHasEqualBitsize(format: Format, bitsize: str) -> bool:
    return all(x.bits == bitsize for x in format.components)

# True if all components are same numericFormat
def formatHasNumericFormat(format: Format, numericFormat: str) -> bool:
    if numericFormat == 'SRGB':
        # For SRGB, the Alpha will be UNORM, but it is still considered an SRGB format
        if format.name == 'VK_FORMAT_A8_UNORM':
            return False
        return all(x.type == 'A' or x.numericFormat == numericFormat for x in format.components)
    else:
        return all(x.numericFormat == numericFormat for x in format.components)

class FormatUtilsOutputGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

        self.maxPlaneCount = 1
        self.maxComponentCount = 1

        self.compressedFormats = dict()
        self.depthFormats = dict()
        self.stencilFormats = dict()
        self.numericFormats = set()

        # Lots of switch statements share same ending
        self.commonBoolSwitch  = '''            return true;
        default:
            return false;
    }
}
'''

    #
    # Called at beginning of processing as file is opened
    def generate(self):
        self.maxPlaneCount = max([len(format.planes) for format in self.vk.formats.values()])
        self.maxComponentCount = max([len(format.components) for format in self.vk.formats.values()])

        for format in [x for x in self.vk.formats.values() if x.compressed]:
            compressed = format.compressed.replace(' ', '_')
            if compressed not in self.compressedFormats:
                # create list if first time
                self.compressedFormats[compressed] = []
            self.compressedFormats[compressed].append(format.name)

        for format in self.vk.formats.values():
            for component in format.components:
                if component.type == 'D':
                    self.depthFormats[format.name] = component
                elif component.type == 'S':
                    self.stencilFormats[format.name] = component
                self.numericFormats.add(component.numericFormat)

        out = []
        out.append(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See {os.path.basename(__file__)} for modifications
// Copyright 2023-2025 The Khronos Group Inc.
// Copyright 2023-2025 Valve Corporation
// Copyright 2023-2025 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0
''')

        out.append('''
#pragma once

// clang-format off

#ifdef __cplusplus
extern "C" {
#endif

#include <vulkan/vulkan.h>

#include <stdbool.h>

''')
        out.append('#define VKU_FORMAT_INVALID_INDEX 0xFFFFFFFF\n')
        out.append(f'#define VKU_FORMAT_MAX_PLANES {self.maxPlaneCount}\n')
        out.append(f'#define VKU_FORMAT_MAX_COMPONENTS {self.maxComponentCount}\n')
        out.append('\n')
        out.append('enum VKU_FORMAT_NUMERICAL_TYPE {\n')
        out.append('    VKU_FORMAT_NUMERICAL_TYPE_NONE = 0,\n')
        for index, numericFormat in enumerate(sorted(self.numericFormats), start=1):
            out.append(f'    VKU_FORMAT_NUMERICAL_TYPE_{numericFormat}')
            out.append(',\n')
        out.append('};\n')
        out.append('\n')
        out.append('enum VKU_FORMAT_COMPATIBILITY_CLASS {\n')
        out.append('    VKU_FORMAT_COMPATIBILITY_CLASS_NONE = 0,\n')

        classNames = set()
        for f in self.vk.formats.values():
            classNames.add(getClassName(f.className))

        for className in sorted(classNames):
            out.append(f'    VKU_FORMAT_COMPATIBILITY_CLASS_{className}')
            out.append(',\n')
        out.append('};\n')

        out.append('// Return the plane index of a given VkImageAspectFlagBits.\n')
        out.append('//     VK_IMAGE_ASPECT_PLANE_0_BIT -> 0\n')
        out.append('//     VK_IMAGE_ASPECT_PLANE_1_BIT -> 1\n')
        out.append('//     VK_IMAGE_ASPECT_PLANE_2_BIT -> 2\n')
        out.append('//     <any other value> -> VKU_FORMAT_INVALID_INDEX\n')
        out.append('inline uint32_t vkuGetPlaneIndex(VkImageAspectFlagBits aspect);\n\n')

        for numericFormat in sorted(self.numericFormats):
            out.append(f'// Returns whether a VkFormat is of the numerical format {numericFormat}\n')
            out.append('// Format must only contain one numerical format, so formats like D16_UNORM_S8_UINT always return false\n')
            out.append(f'inline bool vkuFormatIs{numericFormat}(VkFormat format);\n\n')

        out.append('''// Returns whether the type of a VkFormat is a OpTypeInt (SPIR-V) from "Interpretation of Numeric Format" table
inline bool vkuFormatIsSampledInt(VkFormat format);

// Returns whether the type of a VkFormat is a OpTypeFloat (SPIR-V) from "Interpretation of Numeric Format" table
inline bool vkuFormatIsSampledFloat(VkFormat format);

''')

        for key in sorted(self.compressedFormats.keys()):
            out.append(f'// Returns whether a VkFormat is a compressed format of type {key}\n')
            out.append(f'inline bool vkuFormatIsCompressed_{key}(VkFormat format);\n\n')
        out.append('// Returns whether a VkFormat is of any compressed format type\n')
        out.append('inline bool vkuFormatIsCompressed(VkFormat format);\n')

        out.append('''
// Returns whether a VkFormat is either a depth or stencil format
inline bool vkuFormatIsDepthOrStencil(VkFormat format);

// Returns whether a VkFormat is a depth and stencil format
inline bool vkuFormatIsDepthAndStencil(VkFormat format);

// Returns whether a VkFormat is a depth only format
inline bool vkuFormatIsDepthOnly(VkFormat format);

// Returns whether a VkFormat is a stencil only format
inline bool vkuFormatIsStencilOnly(VkFormat format);

// Returns whether a VkFormat has a depth component
inline bool vkuFormatHasDepth(VkFormat format) { return (vkuFormatIsDepthOnly(format) || vkuFormatIsDepthAndStencil(format)); }

// Returns whether a VkFormat has a stencil component
inline bool vkuFormatHasStencil(VkFormat format) { return (vkuFormatIsStencilOnly(format) || vkuFormatIsDepthAndStencil(format)); }

// Returns the size of the depth component in bits if it has one. Otherwise it returns 0
inline uint32_t vkuFormatDepthSize(VkFormat format);

// Returns the size of the stencil component in bits if it has one. Otherwise it returns 0
inline uint32_t vkuFormatStencilSize(VkFormat format);

// Returns the numerical type of the depth component if it has one.  Otherwise it returns VKU_FORMAT_NUMERICAL_TYPE_NONE
inline enum VKU_FORMAT_NUMERICAL_TYPE vkuFormatDepthNumericalType(VkFormat format);

// Returns the numerical type of the stencil component if it has one.  Otherwise it returns VKU_FORMAT_NUMERICAL_TYPE_NONE
inline enum VKU_FORMAT_NUMERICAL_TYPE vkuFormatStencilNumericalType(VkFormat format);

// Returns whether a VkFormat is packed
inline bool vkuFormatIsPacked(VkFormat format);

// Returns whether a VkFormat is YCbCr
// This corresponds to formats with _444, _422, or _420 in their name
inline bool vkuFormatRequiresYcbcrConversion(VkFormat format);

// Returns whether a VkFormat is XChromaSubsampled
// This corresponds to formats with _422 or 420 in their name
inline bool vkuFormatIsXChromaSubsampled(VkFormat format);

// Returns whether a VkFormat is YChromaSubsampled
// This corresponds to formats with _420 in their name
inline bool vkuFormatIsYChromaSubsampled(VkFormat format);

// Returns whether a VkFormat is Multiplane
// Single-plane "_422" formats are treated as 2x1 compressed (for copies)
inline bool vkuFormatIsSinglePlane_422(VkFormat format);

// Returns number of planes in format (which is 1 by default)
inline uint32_t vkuFormatPlaneCount(VkFormat format);

// Returns whether a VkFormat is multiplane
// Note - Formats like VK_FORMAT_G8B8G8R8_422_UNORM are NOT multi-planar, they require a
//        VkSamplerYcbcrConversion and you should use vkuFormatRequiresYcbcrConversion instead
inline bool vkuFormatIsMultiplane(VkFormat format) { return ((vkuFormatPlaneCount(format)) > 1u); }

// Returns a VkFormat that is compatible with a given plane of a multiplane format
// Will return VK_FORMAT_UNDEFINED if given a plane aspect that doesn't exist for the format
inline VkFormat vkuFindMultiplaneCompatibleFormat(VkFormat mp_fmt, VkImageAspectFlagBits plane_aspect);

// Returns the extent divisors of a multiplane format given a plane
// Will return {1, 1} if given a plane aspect that doesn't exist for the VkFormat
inline VkExtent2D vkuFindMultiplaneExtentDivisors(VkFormat mp_fmt, VkImageAspectFlagBits plane_aspect);

// From table in spec vkspec.html#formats-compatible-zs-color
// Introduced in VK_KHR_maintenance8 to allow copying between color and depth/stencil formats
inline bool vkuFormatIsDepthStencilWithColorSizeCompatible(VkFormat color_format, VkFormat ds_format, VkImageAspectFlags aspect_mask);

// Returns the count of components in a VkFormat
inline uint32_t vkuFormatComponentCount(VkFormat format);

// Returns the texel block extent of a VkFormat
inline VkExtent3D vkuFormatTexelBlockExtent(VkFormat format);

// Returns the Compatibility Class of a VkFormat as defined by the spec
inline enum VKU_FORMAT_COMPATIBILITY_CLASS vkuFormatCompatibilityClass(VkFormat format);

// Returns the number of texels inside a texel block
// Will always be 1 when not using compressed block formats
inline uint32_t vkuFormatTexelsPerBlock(VkFormat format);

// Returns the number of bytes in a single Texel Block.
// When dealing with a depth/stencil format, need to consider using vkuFormatStencilSize or vkuFormatDepthSize.
// When dealing with mulit-planar formats, need to consider using vkuGetPlaneIndex.
inline uint32_t vkuFormatTexelBlockSize(VkFormat format);

''')
        for bits in ['8', '16', '32', '64']:
            out.append(f'// Returns whether a VkFormat contains only {bits}-bit sized components\n')
            out.append(f'inline bool vkuFormatIs{bits}bit(VkFormat format);\n\n')

        out.append('''// Returns whether a VkFormat has a component of a given size
inline bool vkuFormatHasComponentSize(VkFormat format, uint32_t size);

// Returns whether a VkFormat has a Red color component
inline bool vkuFormatHasRed(VkFormat format);

// Returns whether a VkFormat has a Green color component
inline bool vkuFormatHasGreen(VkFormat format);

// Returns whether a VkFormat has a Blue color component
inline bool vkuFormatHasBlue(VkFormat format);

// Returns whether a VkFormat has a Alpha color component
inline bool vkuFormatHasAlpha(VkFormat format);

// Returns whether a VkFormat is equal to VK_FORMAT_UNDEFINED
inline bool vkuFormatIsUndefined(VkFormat format) { return (format == VK_FORMAT_UNDEFINED); }

// Returns whether a VkFormat is a "blocked image" as defined in the spec (vkspec.html#blocked-image)
inline bool vkuFormatIsBlockedImage(VkFormat format) {
    return (vkuFormatIsCompressed(format) || vkuFormatIsSinglePlane_422(format));
}

// Returns whether a VkFormat is a "color format'. Because there is no official specification definition of
// "color format", it is defined here as anything that isn't a depth/stencil format, multiplane format, or the undefined format.
inline bool vkuFormatIsColor(VkFormat format) {
    return !(vkuFormatIsUndefined(format) || vkuFormatIsDepthOrStencil(format) || vkuFormatIsMultiplane(format));
}

enum VKU_FORMAT_COMPONENT_TYPE {
    VKU_FORMAT_COMPONENT_TYPE_NONE,
    VKU_FORMAT_COMPONENT_TYPE_R,
    VKU_FORMAT_COMPONENT_TYPE_G,
    VKU_FORMAT_COMPONENT_TYPE_B,
    VKU_FORMAT_COMPONENT_TYPE_A,
    VKU_FORMAT_COMPONENT_TYPE_D,
    VKU_FORMAT_COMPONENT_TYPE_S,
};

// Compressed formats don't have a defined component size
#define VKU_FORMAT_COMPRESSED_COMPONENT 0xFFFFFFFF

struct VKU_FORMAT_COMPONENT_INFO {
    enum VKU_FORMAT_COMPONENT_TYPE type;
    uint32_t size;  // bits
};

// Generic information for all formats
struct VKU_FORMAT_INFO {
    enum VKU_FORMAT_COMPATIBILITY_CLASS compatibility;
    uint32_t texel_block_size;  // bytes
    uint32_t texels_per_block;
    VkExtent3D block_extent;
    uint32_t component_count;
    struct VKU_FORMAT_COMPONENT_INFO components[VKU_FORMAT_MAX_COMPONENTS];
};
''')
        formats_in_order = {}
        # Manually add in the entry for VK_FORMAT_UNDEFINED because it is missing from the self.vk.formats dict
        formats_in_order[0] = Format('VK_FORMAT_UNDEFINED', 'NONE', 0,0, ['0','0','0'], None, None, None, [], [], None)
        for e in self.vk.enums['VkFormat'].fields:
            if e.name != 'VK_FORMAT_UNDEFINED':
                formats_in_order[e.value] = self.vk.formats[e.name]
        # Number of VkFormats should equal the fields of the VkFormat enum
        assert(len(formats_in_order) == len(self.vk.enums['VkFormat'].fields))
        formats_in_order = dict(sorted(formats_in_order.items()))

        out.append(f'const struct VKU_FORMAT_INFO vku_formats[{len(self.vk.formats) + 1}] = {{\n')
        for f in formats_in_order.values():
            className = getClassName(f.className)
            blockExtent = ', '.join(f.blockExtent) if len(f.blockExtent) > 0 else '1, 1, 1'
            out.extend(f'    {{ VKU_FORMAT_COMPATIBILITY_CLASS_{className}, {f.blockSize}, {f.texelsPerBlock}, {{{blockExtent}}}, {len(f.components)}, {{')
            for index, component in enumerate(f.components):
                bits = 'VKU_FORMAT_COMPRESSED_COMPONENT' if component.bits == 'compressed' else component.bits
                out.append(f'{{VKU_FORMAT_COMPONENT_TYPE_{component.type}, {bits}}}')
                if index + 1 != len(f.components):
                    out.append(', ')
            out.append('} },\n')
        out.append('};\n')

        # Find the "format groups", eg formats whose value are consecutive, as that is the way they are written into the 'formats' array.
        # Value refers to the enum value. These are discontinuous.
        # Index refers to the index of a format in the vku_formats array. These are from 0 to the len(formats_in_order).
        format_values = list(formats_in_order.keys())
        FormatGroup = namedtuple('FormatGroup', ['begin_format', 'end_format','array_index'])
        format_groups = []
        index = 0
        while index < len(format_values):
            start_value = format_values[index]
            end_value = format_values[-1] # use last format as sentinel so the last group can get the right end value
            previous_value = start_value - 1
            # Find the end value for the current group
            for format_value in format_values[index:]:
                if previous_value + 1 != format_value:
                    end_value = previous_value
                    break
                previous_value = format_value
            format_groups.append(FormatGroup(formats_in_order[start_value].name, formats_in_order[end_value].name, index))
            index += (end_value - start_value) + 1

        out.append('inline const struct VKU_FORMAT_INFO vkuGetFormatInfo(VkFormat format) {\n')
        for group in format_groups:
            out.append(f'    {"else " if group.array_index != 0 else ""}if ({group.begin_format} <= format && format <= {group.end_format} )')
            out.append(f' {{ return vku_formats[format - {group.begin_format} + {group.array_index}]; }}\n')
        out.append('''    // Default case - return VK_FORMAT_UNDEFINED
    else {
        return vku_formats[0];
    }
}

struct VKU_FORMAT_PER_PLANE_COMPATIBILITY {
    uint32_t width_divisor;
    uint32_t height_divisor;
    VkFormat compatible_format;
};

// Information for multiplanar formats
struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY {
    struct VKU_FORMAT_PER_PLANE_COMPATIBILITY per_plane[VKU_FORMAT_MAX_PLANES];
};

''')
        out.append('// Source: Vulkan spec Table 47. Plane Format Compatibility Table\n')
        out.append('inline const struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY vkuGetFormatCompatibility(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for format in [x for x in self.vk.formats.values() if x.planes]:
            out.extend(f'        case {format.name}: {{\n')
            out.append('            struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY out = {{')
            for index, plane in enumerate(format.planes):
                if (index != plane.index):
                    self.logMsg('error', 'index of planes were not added in order')
                out.append(f'{{{plane.widthDivisor}, {plane.heightDivisor}, {plane.compatible} }}')
                if index + 1 != self.maxPlaneCount:
                    out.append(', ')
            # pad any 'empty' elements
            if len(format.planes) < self.maxPlaneCount:
                for index in range(len(format.planes), self.maxPlaneCount):
                    out.append('{1, 1, VK_FORMAT_UNDEFINED }')
                    if index + 1 != self.maxPlaneCount:
                        out.append(', ')
            out.append('}};\n')
            out.append('            return out; }\n')
        out.append('        default: {\n')
        out.append('            struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY out = {{{1, 1, VK_FORMAT_UNDEFINED}, {1, 1, VK_FORMAT_UNDEFINED}, {1, 1, VK_FORMAT_UNDEFINED}}};\n')
        out.append('            return out; }\n')
        out.append('    };\n')
        out.append('}\n')

        for numericFormat in sorted(self.numericFormats):
            out.append(f'\n// Return true if all components in a format are an {numericFormat}\n')
            out.append(f'bool vkuFormatIs{numericFormat}(VkFormat format) {{\n')
            out.append('    switch (format) {\n')
            out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasNumericFormat(f, numericFormat)])
            out.append(self.commonBoolSwitch)

        out.append('''
inline bool vkuFormatIsSampledInt(VkFormat format) { return (vkuFormatIsSINT(format) || vkuFormatIsUINT(format)); }
inline bool vkuFormatIsSampledFloat(VkFormat format) {
    return (vkuFormatIsUNORM(format) || vkuFormatIsSNORM(format) ||
            vkuFormatIsUSCALED(format) || vkuFormatIsSSCALED(format) ||
            vkuFormatIsUFLOAT(format) || vkuFormatIsSFLOAT(format) ||
            vkuFormatIsSRGB(format));
}
''')

        for key in sorted(self.compressedFormats.keys()):
            out.append(f'\n// Return true if a format is a {key} compressed image format\n')
            out.append(f'bool vkuFormatIsCompressed_{key}(VkFormat format) {{\n')
            out.append('    switch (format) {\n')
            for f in sorted(self.compressedFormats[key]):
                out.append(f'        case {f}:\n')
            out.append(self.commonBoolSwitch)

        out.append('// Return true if a format is any compressed image format\n')
        out.append('bool vkuFormatIsCompressed(VkFormat format) {\n')
        out.append('    return\n')
        for index, key in enumerate(sorted(self.compressedFormats.keys())):
            out.append(f'        vkuFormatIsCompressed_{key}(format)')
            if (index !=len(self.compressedFormats.keys()) - 1):
                out.append(' ||\n')
        out.append(';\n')
        out.append('}\n')

        out.append('\n// Return true if format is a depth OR stencil format\n')
        out.append('bool vkuFormatIsDepthOrStencil(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasDepth(f) or formatHasStencil(f)])
        out.append(self.commonBoolSwitch)

        out.append('\n// Return true if format is a depth AND stencil format\n')
        out.append('bool vkuFormatIsDepthAndStencil(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasDepth(f) and formatHasStencil(f)])
        out.append(self.commonBoolSwitch)

        out.append('\n// Return true if format is a depth ONLY format\n')
        out.append('bool vkuFormatIsDepthOnly(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasDepth(f) and not formatHasStencil(f)])
        out.append(self.commonBoolSwitch)

        out.append('\n// Return true if format is a stencil ONLY format\n')
        out.append('bool vkuFormatIsStencilOnly(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasStencil(f) and not formatHasDepth(f)])
        out.append(self.commonBoolSwitch)

        out.append('\n// Returns size of depth component in bits')
        out.append('\n// Returns zero if no depth component\n')
        out.append('uint32_t vkuFormatDepthSize(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        # sorts case statments together with same return value
        used = []
        for key, value in sorted(self.depthFormats.items()):
            if key not in used:
                for key_dup, value_dup in sorted(self.depthFormats.items()):
                    if value_dup.bits == value.bits:
                        used.append(key_dup)
                        out.append(f'        case {key_dup}:\n')
                out.append(f'            return {value.bits};\n')
        out.append('        default:\n')
        out.append('            return 0;\n')
        out.append('    }\n')
        out.append('}\n')

        out.append('\n// Returns size of stencil component in bits')
        out.append('\n// Returns zero if no stencil component\n')
        out.append('uint32_t vkuFormatStencilSize(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        # sorts case statments together with same return value
        used = []
        for key, value in sorted(self.stencilFormats.items()):
            if key not in used:
                for key_dup, value_dup in sorted(self.stencilFormats.items()):
                    if value_dup.bits == value.bits:
                        used.append(key_dup)
                        out.append(f'        case {key_dup}:\n')
                out.append(f'            return {value.bits};\n')
        out.append('        default:\n')
        out.append('            return 0;\n')
        out.append('    }\n')
        out.append('}\n')

        out.append('\n// Returns NONE if no depth component\n')
        out.append('enum VKU_FORMAT_NUMERICAL_TYPE vkuFormatDepthNumericalType(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        # sorts case statments together with same return value
        used = []
        for key, value in sorted(self.depthFormats.items()):
            if key not in used:
                for key_dup, value_dup in sorted(self.depthFormats.items()):
                    if value_dup.numericFormat == value.numericFormat:
                        used.append(key_dup)
                        out.append(f'        case {key_dup}:\n')
                out.append(f'            return VKU_FORMAT_NUMERICAL_TYPE_{value.numericFormat};\n')
        out.append('        default:\n')
        out.append('            return VKU_FORMAT_NUMERICAL_TYPE_NONE;\n')
        out.append('    }\n')
        out.append('}\n')

        out.append('\n// Returns NONE if no stencil component\n')
        out.append('enum VKU_FORMAT_NUMERICAL_TYPE vkuFormatStencilNumericalType(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        # sorts case statments together with same return value
        used = []
        for key, value in sorted(self.stencilFormats.items()):
            if key not in used:
                for key_dup, value_dup in sorted(self.stencilFormats.items()):
                    if value_dup.numericFormat == value.numericFormat:
                        used.append(key_dup)
                        out.append(f'        case {key_dup}:\n')
                out.append(f'            return VKU_FORMAT_NUMERICAL_TYPE_{value.numericFormat};\n')
        out.append('        default:\n')
        out.append('            return VKU_FORMAT_NUMERICAL_TYPE_NONE;\n')
        out.append('    }\n')
        out.append('}\n')

        out.append('\n// Return true if format is a packed format\n')
        out.append('bool vkuFormatIsPacked(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for name in [x.name for x in self.vk.formats.values() if x.packed]:
            out.append(f'        case {name}:\n')
        out.append(self.commonBoolSwitch)

        out.append('\n// Return true if format requires sampler YCBCR conversion\n')
        out.append('// for VK_IMAGE_ASPECT_COLOR_BIT image views\n')
        out.append('// Table found in spec\n')
        out.append('bool vkuFormatRequiresYcbcrConversion(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for name in [x.name for x in self.vk.formats.values() if x.chroma]:
            out.append(f'        case {name}:\n')
        out.append(self.commonBoolSwitch)

        out.append('\nbool vkuFormatIsXChromaSubsampled(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for name in [x.name for x in self.vk.formats.values() if x.chroma == '420' or x.chroma == '422']:
            out.append(f'        case {name}:\n')
        out.append(self.commonBoolSwitch)

        out.append('\nbool vkuFormatIsYChromaSubsampled(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for name in [x.name for x in self.vk.formats.values() if x.chroma == '420']:
                out.append(f'        case {name}:\n')
        out.append(self.commonBoolSwitch)

        out.append('\nbool vkuFormatIsSinglePlane_422(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        for name in [x.name for x in self.vk.formats.values() if x.chroma == '422' and not x.planes]:
            out.append(f'        case {name}:\n')
        out.append(self.commonBoolSwitch)

        out.append('\n// Returns number of planes in format (which is 1 by default)\n')
        out.append('uint32_t vkuFormatPlaneCount(VkFormat format) {\n')
        out.append('    switch (format) {\n')
        # Use range to sort formats together
        for i in range(2, self.maxPlaneCount + 1):
            out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if len(f.planes) == i])
            out.append(f'            return {i};\n')
        out.append('        default:\n')
        out.append('            return 1;\n')
        out.append('    }\n')
        out.append('}\n')
        out.append('''
// Will return VK_FORMAT_UNDEFINED if given a plane aspect that doesn't exist for the format
inline VkFormat vkuFindMultiplaneCompatibleFormat(VkFormat mp_fmt, VkImageAspectFlagBits plane_aspect) {
    const uint32_t plane_idx = vkuGetPlaneIndex(plane_aspect);
    const struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY multiplane_compatibility = vkuGetFormatCompatibility(mp_fmt);
    if ((multiplane_compatibility.per_plane[0].compatible_format == VK_FORMAT_UNDEFINED) || (plane_idx >= VKU_FORMAT_MAX_PLANES)) {
        return VK_FORMAT_UNDEFINED;
    }

    return multiplane_compatibility.per_plane[plane_idx].compatible_format;
}

inline VkExtent2D vkuFindMultiplaneExtentDivisors(VkFormat mp_fmt, VkImageAspectFlagBits plane_aspect) {
    VkExtent2D divisors = {1, 1};
    const uint32_t plane_idx = vkuGetPlaneIndex(plane_aspect);
    const struct VKU_FORMAT_MULTIPLANE_COMPATIBILITY multiplane_compatibility = vkuGetFormatCompatibility(mp_fmt);
    if ((multiplane_compatibility.per_plane[0].compatible_format == VK_FORMAT_UNDEFINED) || (plane_idx >= VKU_FORMAT_MAX_PLANES)) {
        return divisors;
    }

    divisors.width = multiplane_compatibility.per_plane[plane_idx].width_divisor;
    divisors.height = multiplane_compatibility.per_plane[plane_idx].height_divisor;
    return divisors;
}

// TODO - This should be generated, but will need updating the spec XML and table
// Some few case don't have an aspect mask, so might need to check both the Depth and Stencil possiblity
inline bool vkuFormatIsDepthStencilWithColorSizeCompatible(VkFormat color_format, VkFormat ds_format, VkImageAspectFlags aspect_mask) {
    bool valid = false;

    if (aspect_mask & VK_IMAGE_ASPECT_STENCIL_BIT) {
        if (ds_format == VK_FORMAT_S8_UINT || ds_format == VK_FORMAT_D16_UNORM_S8_UINT ||
            ds_format == VK_FORMAT_D24_UNORM_S8_UINT || ds_format == VK_FORMAT_D32_SFLOAT_S8_UINT) {
            valid |= (color_format == VK_FORMAT_R8_UINT || color_format == VK_FORMAT_R8_SINT ||
                      color_format == VK_FORMAT_R8_UNORM || color_format == VK_FORMAT_R8_SNORM);
        }
    }

    if (aspect_mask & VK_IMAGE_ASPECT_DEPTH_BIT) {
        if (ds_format == VK_FORMAT_D32_SFLOAT || ds_format == VK_FORMAT_D32_SFLOAT_S8_UINT ||
            ds_format == VK_FORMAT_X8_D24_UNORM_PACK32 || ds_format == VK_FORMAT_D24_UNORM_S8_UINT) {
            valid |= (color_format == VK_FORMAT_R32_SFLOAT || color_format == VK_FORMAT_R32_SINT || color_format == VK_FORMAT_R32_UINT);
        }
        if (ds_format == VK_FORMAT_D16_UNORM || ds_format == VK_FORMAT_D16_UNORM_S8_UINT) {
            valid |= (color_format == VK_FORMAT_R16_SFLOAT || color_format == VK_FORMAT_R16_UNORM ||
                      color_format == VK_FORMAT_R16_SNORM  || color_format == VK_FORMAT_R16_UINT || color_format == VK_FORMAT_R16_SINT);
        }
    }

    return valid;
}

inline uint32_t vkuFormatComponentCount(VkFormat format) { return vkuGetFormatInfo(format).component_count; }

inline VkExtent3D vkuFormatTexelBlockExtent(VkFormat format) { return vkuGetFormatInfo(format).block_extent; }

inline enum VKU_FORMAT_COMPATIBILITY_CLASS vkuFormatCompatibilityClass(VkFormat format) { return vkuGetFormatInfo(format).compatibility; }

inline uint32_t vkuFormatTexelsPerBlock(VkFormat format) { return vkuGetFormatInfo(format).texels_per_block; }

inline uint32_t vkuFormatTexelBlockSize(VkFormat format) { return vkuGetFormatInfo(format).texel_block_size; }

''')
        # Could loop the components, but faster to just list these
        for bits in ['8', '16', '32', '64']:
            out.append(f'inline bool vkuFormatIs{bits}bit(VkFormat format) {{\n')
            out.append('    switch (format) {\n')
            out.extend([f'        case {f.name}:\n' for f in self.vk.formats.values() if formatHasEqualBitsize(f, bits)])
            out.append(self.commonBoolSwitch)

        out.append('''
inline bool vkuFormatHasComponentSize(VkFormat format, uint32_t size) {
    const struct VKU_FORMAT_INFO format_info = vkuGetFormatInfo(format);
    bool equal_component_size = false;
    for (size_t i = 0; i < VKU_FORMAT_MAX_COMPONENTS; i++) {
        equal_component_size |= format_info.components[i].size == size;
    }
    return equal_component_size;
}

inline bool vkuFormatHasComponentType(VkFormat format, enum VKU_FORMAT_COMPONENT_TYPE component) {
    const struct VKU_FORMAT_INFO format_info = vkuGetFormatInfo(format);
    bool equal_component_type = false;
    for (size_t i = 0; i < VKU_FORMAT_MAX_COMPONENTS; i++) {
        equal_component_type |= format_info.components[i].type == component;
    }
    return equal_component_type;
}

inline bool vkuFormatHasRed(VkFormat format) { return vkuFormatHasComponentType(format, VKU_FORMAT_COMPONENT_TYPE_R); }

inline bool vkuFormatHasGreen(VkFormat format) { return vkuFormatHasComponentType(format, VKU_FORMAT_COMPONENT_TYPE_G); }

inline bool vkuFormatHasBlue(VkFormat format) { return vkuFormatHasComponentType(format, VKU_FORMAT_COMPONENT_TYPE_B); }

inline bool vkuFormatHasAlpha(VkFormat format) { return vkuFormatHasComponentType(format, VKU_FORMAT_COMPONENT_TYPE_A); }

inline uint32_t vkuGetPlaneIndex(VkImageAspectFlagBits aspect) {
    switch (aspect) {
        case VK_IMAGE_ASPECT_PLANE_0_BIT:
            return 0;
        case VK_IMAGE_ASPECT_PLANE_1_BIT:
            return 1;
        case VK_IMAGE_ASPECT_PLANE_2_BIT:
            return 2;
        default:
            return VKU_FORMAT_INVALID_INDEX;
    }
}

#ifdef __cplusplus
}
#endif

// clang-format off''')

        self.write("".join(out))

