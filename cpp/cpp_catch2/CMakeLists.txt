cmake_minimum_required(VERSION 3.13)
project(gilded-rose-refactoring-kata-cpp-catch2)

include(FetchContent)
FetchContent_Declare(
  approvaltests
  URL      https://github.com/approvals/ApprovalTests.cpp/releases/download/v.6.0.0/ApprovalTests.v.6.0.0.hpp
  URL_HASH MD5=fc9f4bb07a857a0a740e1a0dab6fe408
  DOWNLOAD_NO_EXTRACT true
  DOWNLOAD_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib
)
FetchContent_Declare(
  catch2
  URL      https://github.com/catchorg/Catch2/releases/download/v2.11.0/catch.hpp
  #URL_HASH MD5=fc9f4bb07a857a0a740e1a0dab6fe408
  DOWNLOAD_NO_EXTRACT true
  DOWNLOAD_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

FetchContent_Populate(approvaltests)
FetchContent_Populate(catch2)

enable_testing()
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
