cmake_minimum_required(VERSION 3.28)
project(Test C)

set(CMAKE_C_STANDARD 99)

add_executable(Test main.c
        hello.h
        point.h
        arr.h
)
