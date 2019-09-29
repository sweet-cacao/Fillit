cmake_minimum_required(VERSION 3.14)
project(projectCL C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Get_next_line)
include_directories(Get_next_line/libft)

add_executable(projectCL
		Get_next_line/libft/ft_atoi.c
		Get_next_line/libft/ft_bzero.c
		Get_next_line/libft/ft_isalnum.c
		Get_next_line/libft/ft_isalpha.c
		Get_next_line/libft/ft_isascii.c
		Get_next_line/libft/ft_isdigit.c
		Get_next_line/libft/ft_isprint.c
		Get_next_line/libft/ft_iswspace.c
		Get_next_line/libft/ft_itoa.c
		Get_next_line/libft/ft_lstadd.c
		Get_next_line/libft/ft_lstdel.c
		Get_next_line/libft/ft_lstdelone.c
		Get_next_line/libft/ft_lstiter.c
		Get_next_line/libft/ft_lstmap.c
		Get_next_line/libft/ft_lstnew.c
		Get_next_line/libft/ft_memalloc.c
		Get_next_line/libft/ft_memccpy.c
		Get_next_line/libft/ft_memchr.c
		Get_next_line/libft/ft_memcmp.c
		Get_next_line/libft/ft_memcpy.c
		Get_next_line/libft/ft_memdel.c
		Get_next_line/libft/ft_memmove.c
		Get_next_line/libft/ft_memset.c
		Get_next_line/libft/ft_putchar.c
		Get_next_line/libft/ft_putchar_fd.c
		Get_next_line/libft/ft_putendl.c
		Get_next_line/libft/ft_putendl_fd.c
		Get_next_line/libft/ft_putnbr.c
		Get_next_line/libft/ft_putnbr_fd.c
		Get_next_line/libft/ft_putstr.c
		Get_next_line/libft/ft_putstr_fd.c
		Get_next_line/libft/ft_strcat.c
		Get_next_line/libft/ft_strchr.c
		Get_next_line/libft/ft_strclr.c
		Get_next_line/libft/ft_strcmp.c
		Get_next_line/libft/ft_strcpy.c
		Get_next_line/libft/ft_strdel.c
		Get_next_line/libft/ft_strdup.c
		Get_next_line/libft/ft_strequ.c
		Get_next_line/libft/ft_striter.c
		Get_next_line/libft/ft_striteri.c
		Get_next_line/libft/ft_strjoin.c
		Get_next_line/libft/ft_strlcat.c
		Get_next_line/libft/ft_strlen.c
		Get_next_line/libft/ft_strmap.c
		Get_next_line/libft/ft_strmapi.c
		Get_next_line/libft/ft_strncat.c
		Get_next_line/libft/ft_strncmp.c
		Get_next_line/libft/ft_strncpy.c
		Get_next_line/libft/ft_strnequ.c
		Get_next_line/libft/ft_strnew.c
		Get_next_line/libft/ft_strnstr.c
		Get_next_line/libft/ft_strrchr.c
		Get_next_line/libft/ft_strsplit.c
		Get_next_line/libft/ft_strstr.c
		Get_next_line/libft/ft_strsub.c
		Get_next_line/libft/ft_strtrim.c
		Get_next_line/libft/ft_tolower.c
		Get_next_line/libft/ft_toupper.c
		Get_next_line/libft/libft.h
		Get_next_line/get_next_line.c
		Get_next_line/get_next_line.h
		header.h main.c check_termino.c detect_termino.c detect_error.c get_struct.c check_form.c recursive_size.c king_size_func_fuck.c)
