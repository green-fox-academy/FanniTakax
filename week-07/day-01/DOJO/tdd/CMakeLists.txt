cmake_minimum_required(VERSION 3.12)
project(TDD)

set(CMAKE_CXX_STANDARD 14)

add_executable(tdd_lib_run main.cpp)

include_directories(tdd_lib)
add_subdirectory(tdd_lib)
add_subdirectory(tdd_tests)

target_link_libraries(tdd_lib_run tdd_lib)