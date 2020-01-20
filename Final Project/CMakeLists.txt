cmake_minimum_required(VERSION 3.15)
project(Final_Project C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Final_Project
        cells.c
        cells.h
        main.c
        menus.c
        menus.h
        table.c
        table.h)
