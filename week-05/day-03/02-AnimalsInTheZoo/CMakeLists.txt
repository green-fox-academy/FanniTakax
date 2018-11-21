cmake_minimum_required(VERSION 3.12)
project(02_AnimalsInTheZoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(02_AnimalsInTheZoo main.cpp animals.cpp animals.h raptile.cpp raptile.h mammal.cpp mammal.h bird.cpp bird.h)