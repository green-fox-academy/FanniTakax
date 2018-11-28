cmake_minimum_required(VERSION 3.12)
project(03_GardenApp_Rework)

set(CMAKE_CXX_STANDARD 14)

add_executable(03_GardenApp_Rework main.cpp garden.cpp garden.h plant.cpp plant.h flower.cpp flower.h tree.cpp tree.h)