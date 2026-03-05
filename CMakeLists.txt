cmake_minimum_required(VERSION 4.1)
project(algdat C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(algdat
        binary_search.c
        binary_search.h
        main.c
        printArray.c
        printArray.h)
