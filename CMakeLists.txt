cmake_minimum_required(VERSION 3.20)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(test main.cpp
        class.cpp functions.h tests.cpp)


# 'Google_test' is the subproject name
project(Google_tests)

#'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run task.h tests.cpp class.cpp functions.h)
target_link_libraries(Google_Tests_run gtest gtest_main)
