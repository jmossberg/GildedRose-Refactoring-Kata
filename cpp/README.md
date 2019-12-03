# C++ version of Gilded Rose refactoring kata

## Introduction
The C++ version of the Gilded Rose refactoring kata is available in four versions using different test frameworks:

1. Traditional unit test with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `cpp_catch2/cpp_catch2_unittest` folder.
2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `cpp_catch2/cpp_catch2_approvaltest` folder.
3. Traditional unit test with the [Googletest](https://github.com/google/googletest) test framework in the `cpp_googletest/cpp_googletest_unittest` folder.
4. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Googletest](https://github.com/google/googletest) test framework in the `cpp_googletest/cpp_googletest_unittest` folder.

## How to build and run tests using in a Terminal
All four versions are built and run in the same way using [CMake](https://cmake.org/).

The example below shows how to build [approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework:

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/
    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .
    $ ctest -V