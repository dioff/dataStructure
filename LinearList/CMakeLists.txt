cmake_minimum_required(VERSION 3.28)
project(LinearList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinearList main.c
        SqList.h
)
