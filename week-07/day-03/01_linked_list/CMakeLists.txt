cmake_minimum_required(VERSION 3.12)
project(01_linked_list C)

set(CMAKE_C_STANDARD 99)

add_executable(01_linked_list main.c linked_lst.c linked_list.h)