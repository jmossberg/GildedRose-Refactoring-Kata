# C++ version of Gilded Rose refactoring kata

## Introduction
The C++ version of the Gilded Rose refactoring kata is available in four versions using different test frameworks:

1. Traditional unit test with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `cpp_catch2/cpp_catch2_unittest` folder.
2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `cpp_catch2/cpp_catch2_approvaltest` folder.
3. Traditional unit test with the [Googletest](https://github.com/google/googletest) test framework in the `cpp_googletest/cpp_googletest_unittest` folder.
4. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Googletest](https://github.com/google/googletest) test framework in the `cpp_googletest/cpp_googletest_unittest` folder.

The `GildedRose.cc` file, i.e. the code under test, is identical in all four versions.

## Prerequisites

* CMake version >= 3.13
* C++ compiler that support C++17

## How to build and run tests in a terminal
All four versions are built and run in the same way using [CMake](https://cmake.org/) in a terminal.

The example below shows how to build and run an [approval test](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework:

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/
    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .
    $ ctest -V

The example below shows how to build and run a traditional unit test with the [Googletest](https://github.com/google/googletest) test framework:

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_googletest/cpp_googletest_unittest/
    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .
    $ ctest -V

## How to build and run tests using the [CLion IDE](https://www.jetbrains.com/clion/)
All four versions are built and run in similar way using the [CLion IDE](https://www.jetbrains.com/clion/).

The example below shows how to build and run an [approval test](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in the [CLion IDE](https://www.jetbrains.com/clion/):

1. Start CLion
2. Select menu `File - Open...`
3. Select folder `${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/`
4. Select menu `Run - 'GildedRoseCatch2ApprovalTests'`

The example below shows how to build and run a traditional unit test with the [Googletest](https://github.com/google/googletest) test framework in the [CLion IDE](https://www.jetbrains.com/clion/):

1. Start CLion
2. Select menu `File - Open...`
3. Select folder `${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_googletest/cpp_googletest_unittest/`
4. Select menu `Run - 'GildedRoseGoogletestUnitTests'`

## How to build and run tests using Visual Studio 2019 
All four versions are built and run in similar way using Visual Studio 2019. 

The example below shows how to build and run an [approval test](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in Visual Studio 2019:

1. Start Visual Studio 2019
2. Select `Open a local folder`
3. Select folder `${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/`
4. Wait for message `CMake generation finished.` in the CMake output window at the bottom
5. Select `GildedRoseCatch2ApprovalTests.exe` in the drop down menu for Startup Items
6. Select menu `Debug - Start``

