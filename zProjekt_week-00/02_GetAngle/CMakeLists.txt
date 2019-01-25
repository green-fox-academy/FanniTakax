cmake_minimum_required(VERSION 3.12)
project(00)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
find_package(OpenCV REQUIRED)

add_executable(00 main.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(00 ${OpenCV_LIBS})