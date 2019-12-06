cmake_minimum_required(VERSION 3.13)
project(gilded-rose-refactoring-kata-cpp-googletest-unittest)

# Load FetchContent module.
include(FetchContent)

# Declare GoogleTest as the content to fetch
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.8.1
)

# Fetch GoogleTest amd make build scripts available
if (NOT googletest_POPULATED)
  FetchContent_Populate(googletest)

  # Bring the populated content into the build
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

  
    # Prevent overriding the parent project's compiler/linker
    # settings on Windows
    # https://github.com/google/googletest/blob/1110c471cadf9cf40cb735890d67f135d6313471/googletest/README.md#visual-studio-dynamic-vs-static-runtimes
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

enable_testing()
add_subdirectory(src)
add_subdirectory(test)
