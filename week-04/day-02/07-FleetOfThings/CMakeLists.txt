cmake_minimum_required(VERSION 3.12)
project(07_FleetOfThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(07_FleetOfThings main.cpp fleet.cpp fleet.h things.cpp things.h)