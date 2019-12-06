set(TEST_NAME GildedRoseGoogletestApprovalTests)
add_executable(${TEST_NAME})
target_sources(${TEST_NAME} PRIVATE googletest_approval_main.cc GildedRoseGoogletestApprovalTests.cc)
target_link_libraries(${TEST_NAME} lib src gtest)
set_property(TARGET ${TEST_NAME} PROPERTY CXX_STANDARD 17)
if (MSVC)
    # https://docs.microsoft.com/en-us/cpp/build/reference/fc-full-path-of-source-code-file-in-diagnostics?view=vs-2019
    # Need /FC compiler option in Visual Studio to make sure __FILE__ macro return full path to file
    target_compile_options(${TEST_NAME} PRIVATE "/FC")
endif()

add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
