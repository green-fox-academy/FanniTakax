cmake_minimum_required(VERSION 3.12)
project(03-Anagram)

set(CMAKE_CXX_STANDARD 14)

add_executable(anagram_run main.cpp)

include_directories(anagram)
add_subdirectory(anagram)
add_subdirectory(anagram_test)

target_link_libraries(anagram_run anagram)