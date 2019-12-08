# C++ version of Gilded Rose refactoring kata

## Introduction
The C++ version of the Gilded Rose refactoring kata is available in four variants using different test frameworks:

* Catch2 test framework
  1. Traditional unit test with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `test/cpp_catch2_unittest` folder.
  2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `test/cpp_catch2_approvaltest` folder.
* Google Test framework
  1. Traditional unit test with the [Googletest](https://github.com/google/googletest) test framework in the `test/cpp_googletest_unittest` folder.
  2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Googletest](https://github.com/google/googletest) test framework in the `test/cpp_googletest_unittest` folder.

The `GildedRose.cc` file, i.e. the code under test, is identical in all four versions.

## Prerequisites

* CMake version >= 3.13
* C++ compiler that support C++17

## How to build and run tests in a terminal

### Build tests

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/
    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .

### Show available tests

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/cpp_catch2/cpp_catch2_approvaltest/build
    $ ctest -N
    Test project ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/build
      Test #1: GildedRoseCatch2ApprovalTests
      Test #2: GildedRoseCatch2UnitTests
      Test #3: GildedRoseGoogletestApprovalTests
      Test #4: GildedRoseGoogletestUnitTests

### Run all tests

    $ ctest

### Run all tests with verbose output

    $ ctest -VV

### Run a specific test with verbose output

    $ ctest -VV --tests-regex Catch2Approval
    UpdateCTestConfiguration  from :/home/jmossberg/git/GildedRose-Refactoring-Kata/cpp/build/DartConfiguration.tcl
    UpdateCTestConfiguration  from :/home/jmossberg/git/GildedRose-Refactoring-Kata/cpp/build/DartConfiguration.tcl
    Test project /home/jmossberg/git/GildedRose-Refactoring-Kata/cpp/build
    Constructing a list of tests
    Done constructing a list of tests
    Updating test list for fixtures
    Added 0 tests to meet fixture requirements
    Checking test dependency graph...
    Checking test dependency graph end
    test 1
        Start 1: GildedRoseCatch2ApprovalTests
    
    1: Test command: /home/jmossberg/git/GildedRose-Refactoring-Kata/cpp/build/test/cpp_catch2_approvaltest/GildedRoseCatch2ApprovalTests
    1: Test timeout computed to be: 10000000
    1: ===============================================================================
    1: test cases: 1 | 1 passed
    1: assertions: - none -
    1: 
    1/1 Test #1: GildedRoseCatch2ApprovalTests ....   Passed    0.00 sec
    
    The following tests passed:
            GildedRoseCatch2ApprovalTests
    
    100% tests passed, 0 tests failed out of 1
    
    Total Test time (real) =   0.00 sec

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
6. Select menu `Debug - Start`

