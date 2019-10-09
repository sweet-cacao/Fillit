NAME = fillit

SRC = count_term.c create_map.c main.c check_buff.c fill_coordinates.c
		print_map.c check_paint_map.c read_file.c check_struct.c get_struct.c
		solve_map.c

all: $(NAME)



$(NAME): $(SRC)
     gcc -Wall -Wextra -Werror $(SRC)


clean:
	make -C libft/ clean
	rm -f $(NAME)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)


re: fclean all
