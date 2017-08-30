cmake_minimum_required(VERSION 3.8)
project(tp020172)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES matriz.c matriz.h mainMatriz.c)
add_executable(tp020172 ${SOURCE_FILES} matriz.c matriz.h mainMatriz.c)