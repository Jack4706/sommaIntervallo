cmake_minimum_required(VERSION 3.29)
project(sommaIntervallo C)

set(CMAKE_C_STANDARD 11)

add_executable(sommaIntervallo main.c
        funzioni.h
        funzioni.c)
