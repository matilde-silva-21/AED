cmake_minimum_required(VERSION 3.10)
project(T2_2016)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(T2_2016 main.cpp Tests/AfterSalesService.cpp Tests/Article.cpp Tests/Purchase.cpp Tests/Test.cpp)

target_link_libraries(T2_2016 gtest gtest_main)
