cmake_minimum_required(VERSION 3.10)
project(T2_2013)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(T2_2013 main.cpp Tests/Test.cpp Tests/ClubeVideo.cpp)

target_link_libraries(T2_2013 gtest gtest_main)
