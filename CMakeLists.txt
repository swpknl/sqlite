cmake_minimum_required(VERSION 4.2)
project(sqlite C)

set(CMAKE_C_STANDARD 11)

add_executable(sqlite main.c
        definitions.h
        input_buffer.h
        input_buffer.c
        constants.h
)
