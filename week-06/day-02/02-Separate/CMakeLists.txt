cmake_minimum_required(VERSION 3.12)
project(02_Separate C)

set(CMAKE_C_STANDARD 99)

add_executable(02_Separate main.c circle.h circle.cpp)