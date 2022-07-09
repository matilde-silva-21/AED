cmake_minimum_required(VERSION 3.20)
project(AED)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(AED main.cpp tests/ClassName.h tests/test.cpp)

target_link_libraries(AED gtest gtest_main)
