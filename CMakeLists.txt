cmake_minimum_required(VERSION 3.17)
project(OpenCADD C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(OpenCADD
        gui.c
        gui.h
        main.c
        tbox.c
        tbox.h)

#if(WIN32)
#    set()
#elseif(APPLE)
#    set()
#else()
#    set()
#endif()
