# Build Instructions
This document contains the instructions for building this repository on Linux, macOS and Windows.

## Getting Started Build Instructions

### 64-bit Windows Build 
```
git clone git@github.com:KhronosGroup/Vulkan-Profiles.git
cd Vulkan-Profiles
cmake -S . -B build/ -D CMAKE_BUILD_TYPE=Debug -D UPDATE_DEPS=ON -A x64
cmake --build . --config Debug
```

### Windows Unit Tests

```
cd build/
ctest -C Debug --output-on-failure --parallel 16
```

### Linux and macOS Build
```
git clone git@github.com:KhronosGroup/Vulkan-Profiles.git
cd Vulkan-Profiles
cmake -S . -B build/ -D CMAKE_BUILD_TYPE=Debug -D UPDATE_DEPS=ON
cmake --build .
```

### Linux and macOS Unit Tests

```
cd build/
ctest --parallel 8 --output-on-failure
```
