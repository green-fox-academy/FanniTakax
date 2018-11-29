cmake_minimum_required(VERSION 3.12)
project(09-CowsAndBulls)

set(CMAKE_CXX_STANDARD 14)

add_executable(cab_run main.cpp)

include_directories(cab)
add_subdirectory(cab)
add_subdirectory(cab_tests)

target_link_libraries(cab_run cab)