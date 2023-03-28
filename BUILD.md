# Build Instructions
This document contains the instructions for building this repository on Linux, macOS and Windows.

## Getting Started Build Instructions

### Build

```bash
git clone git@github.com:KhronosGroup/Vulkan-Profiles.git
cd Vulkan-Profiles
cmake -S . -B build/ -D CMAKE_BUILD_TYPE=Debug -D UPDATE_DEPS=ON
cmake --build build --config Debug
```

# Recommended setup for developers

cmake -S . -B build/ -D BUILD_WERROR=ON -D UTILITY_LIBRARIES_BUILD_TESTS=ON -D CMAKE_BUILD_TYPE=Debug -D UPDATE_DEPS=ON

### Unit Tests

```bash
cd build/
ctest -C Debug --parallel 8 --output-on-failure
```
