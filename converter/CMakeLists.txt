cmake_minimum_required(VERSION 3.26)
project(converter C)

set(CMAKE_C_STANDARD 11)

add_executable(converter main.c stdio.h)
include_directories(stdio.h)