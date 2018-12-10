#this line is only for windows users
add_compile_definitions(WINVER=0x0500)

#CHANGE THIS TO THE PATH WHERE YOU EXTRACTED GOOGLE TEST FILES TO
set(PATH_TO_GOOGLETEST "C:/Users/malajabi/Documents/GreenFox/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/include)

add_executable(tdd_tests tdd_tests.cpp)
target_link_libraries(tdd_tests gtest gtest_main)
target_link_libraries(tdd_tests tdd_lib)