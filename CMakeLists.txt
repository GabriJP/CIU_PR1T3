cmake_minimum_required(VERSION 3.6)
project(PR1T3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_VERBOSE_MAKEFILE ON)

set(SOURCE_FILES main.cpp)
add_executable(PR1T3 ${SOURCE_FILES})
target_link_libraries(PR1T3 GL glut)

## Compiler flags
if(CMAKE_COMPILER_IS_GNUXX)
    set(CMAKE_CXX_FLAGS "-O3")          ## Optimize
    set(CMAKE_EXE_LINKER_FLAGS "-s")    ## Strip binary
endif()