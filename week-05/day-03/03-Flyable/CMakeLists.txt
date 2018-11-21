cmake_minimum_required(VERSION 3.12)
project(03_Flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(03_Flyable main.cpp flyable.cpp flyable.h vehicle.cpp vehicle.h helicopter.cpp helicopter.h animals.cpp animals.h bird.cpp bird.h)