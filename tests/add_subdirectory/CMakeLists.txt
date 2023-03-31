cmake_minimum_required(VERSION 3.17)

project(TEST_FIND_PACKAGE LANGUAGES CXX)

add_library(add_subdirectory_example STATIC)

target_sources(add_subdirectory_example PRIVATE client.cpp)

# NOTE: Because VulkanHeaders is a PUBLIC dependency it needs to be found prior to VulkanUtilityLibraries
add_subdirectory(${GITHUB_VULKAN_HEADER_SOURCE_DIR} ${PROJECT_BINARY_DIR}/headers)

add_subdirectory(${PROJECT_SOURCE_DIR}/../../ ${PROJECT_BINARY_DIR}/vul)

if (NOT TARGET Vulkan::LayerUtils)
    message(FATAL_ERROR "Vulkan::LayerUtils target not defined!")
endif()

target_link_libraries(add_subdirectory_example PRIVATE Vulkan::LayerUtils)
