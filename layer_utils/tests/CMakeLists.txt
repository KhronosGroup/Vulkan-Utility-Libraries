set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(test_libraries GTest::gtest GTest::gtest_main Vulkan::Headers VulkanLayerUtils)

function(add_unit_test_simple NAME)
    set(TEST_FILE ./${NAME}.cpp)
    set(TEST_NAME VulkanLayerUtils_${NAME})

    add_executable(${TEST_NAME} ${TEST_FILE})
    target_include_directories(${TEST_NAME} PUBLIC "${vulkan-headers_SOURCE_DIR}/include")
    target_link_libraries(${TEST_NAME} PRIVATE ${test_libraries})
    add_dependencies(${TEST_NAME} VulkanLayerUtils)
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME} --gtest_catch_exceptions=0)
    set_target_properties(${TEST_NAME} PROPERTIES FOLDER "VulkanLayerUtils-Tests")
endfunction(add_unit_test_simple)

add_unit_test_simple(test_util)
