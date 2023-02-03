cmake_minimum_required(VERSION 3.10)
project(malloc-examples LANGUAGES C)

if (MSVC)
    set(CMAKE_C_FLAGS_DEBUG "/TC /Od /Z7")
    set(CMAKE_C_FLAGS_RELEASE "/TC /Os")
else()
    set(CMAKE_C_FLAGS_DEBUG "-g -Wall -O0")
    set(CMAKE_C_FLAGS_RELEASE "-Os")
endif()

add_executable(example_native "example_native.c")
add_executable(example_list "example_list.c")