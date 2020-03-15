cmake_minimum_required(VERSION 3.10)
project(cpp_ci_pipeline)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(cpp_ci_pipeline main.cpp test/CalculadoraTesting.cpp test/CalculadoraTesting.h)
target_link_libraries(cpp_ci_pipeline gtest gtest_main)