cmake_minimum_required(VERSION 3.14)
project(newproject111 C)

set(CMAKE_C_STANDARD 99)

add_library(newproject111 library.c library.h read_file.c fillit.h main.c solve_map.c check_buff.c get_struct.c check_struct.c fill_coordinates.c check_paint_map.c create_map.c print_map.c count_term.c)