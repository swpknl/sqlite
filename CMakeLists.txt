cmake_minimum_required(VERSION 4.2)
project(sqlite C)

set(CMAKE_C_STANDARD 11)

add_executable(sqlite main.c
        headers/definitions.h
        headers/input_buffer.h
        impl/input_buffer.c
        headers/constants.h
        impl/constants.c
        headers/statement.h
        impl/statement.c
        impl/meta_command.c
        headers/meta_command.h
)
