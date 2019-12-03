cmake_minimum_required(VERSION 3.13)
project(gilded-rose-refactoring-kata-cpp-googletest)

# Load FetchContent module.
include(FetchContent)

# Declare GoogleTest as the content to fetch
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.8.0
)

# Fetch GoogleTest amd make build scripts available
if (NOT googletest_POPULATED)
  FetchContent_Populate(googletest)

  # Bring the populated content into the build
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()


enable_testing()
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
