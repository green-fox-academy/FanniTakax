cmake_minimum_required(VERSION 3.12)
project(16_connect_the_dots)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(SDL2_PATH "C:/Users/malajabi/Documents/GitHub/Drawing/SDL2/SDL2-2.0.8/i686-w64-mingw32")
set(SDL2_IMAGE_PATH "C:/Users/malajabi/Documents/GitHub/Drawing/SDL2/SDL2_image-2.0.3/i686-w64-mingw32")
set(SDL2_TTF_PATH "C:/Users/malajabi/Documents/GitHub/Drawing/SDL2/SDL2_ttf-2.0.14/i686-w64-mingw32")
set(SDL2_GFX "C:/Users/malajabi/Documents/GitHub/SDL2/Drawing/SDL2_plugins/gfx")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})

include_directories(${SDL2_GFX}/inc)
file(GLOB gfx_inc "${SDL2_GFX}/inc/*.h")
file(GLOB gfx_src "${SDL2_GFX}/src/*.c")

add_executable(16_connect_the_dots main.cpp ${gfx_inc} ${gfx_src})

target_link_libraries(16_connect_the_dots ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})