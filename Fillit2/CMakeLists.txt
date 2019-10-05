cmake_minimum_required(VERSION 3.14)
project(Fillit2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Fillit2 main.c fillit.h create_term.c read_term.c check_termino.c)