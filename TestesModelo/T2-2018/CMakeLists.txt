cmake_minimum_required(VERSION 3.20)
project(T2_2018)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(T2_2018 main.cpp Tests/Doctor.cpp Tests/Hospital.cpp Tests/Test.cpp)


target_link_libraries(T2_2018 gtest gtest_main)