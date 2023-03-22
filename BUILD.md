## Getting Started Build Instructions

```bash
cmake -S . -B build/ -D UPDATE_DEPS=ON -D CMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```

```bash
# Recommended setup for developers
cmake -S . -B build/ -D VUL_WERROR=ON -D VUL_BUILD_TESTS=ON -D CMAKE_BUILD_TYPE=Debug -D UPDATE_DEPS=ON

# TODO: Add CMakePresets.json to speed up workflow for developers.
```
