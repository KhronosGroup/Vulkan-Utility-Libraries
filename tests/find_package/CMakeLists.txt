cmake_minimum_required(VERSION 3.17)

project(TEST_FIND_PACKAGE LANGUAGES CXX)

add_library(find_package_example STATIC)

target_sources(find_package_example PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/../add_subdirectory/client.cpp
)

# NOTE: Because VulkanHeaders is a PUBLIC dependency it needs to be found prior to VulkanUtilityLibraries
find_package(VulkanHeaders REQUIRED CONFIG)

find_package(VulkanUtilityLibraries REQUIRED CONFIG)

if (NOT TARGET Vulkan::LayerUtils)
    message(FATAL_ERROR "Vulkan::LayerUtils target not defined!")
endif()

target_link_libraries(find_package_example PRIVATE Vulkan::LayerUtils)
