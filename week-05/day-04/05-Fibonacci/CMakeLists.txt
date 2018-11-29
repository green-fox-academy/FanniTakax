cmake_minimum_required(VERSION 3.12)
project(05-Fibonacci)

set(CMAKE_CXX_STANDARD 14)

add_executable(fibonacci_run main.cpp)

include_directories(fibonacci)
add_subdirectory(fibonacci)
add_subdirectory(fibonacci_test)

target_link_libraries(fibonacci_run fibonacci)