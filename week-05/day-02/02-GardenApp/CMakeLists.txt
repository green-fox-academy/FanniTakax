cmake_minimum_required(VERSION 3.12)
project(02_GardenApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(02_GardenApp main.cpp garden.cpp garden.h plants.cpp plants.h flower.cpp flower.h tree.cpp tree.h)