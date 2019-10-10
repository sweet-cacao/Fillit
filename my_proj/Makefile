NAME = fillit

SRCS = count_term.c create_map.c main.c check_buff.c fill_coordinates.c print_map.c check_paint_map.c read_file.c check_struct.c get_struct.c solve_map.c destroy_map.c delete_struct.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	gcc -I./libft/includes -L libft/ -lft $^ -o $@

%.o: src/%.c
	gcc -Wall -Wextra -Werror -I./includes -I./libft/includes -c $< -o $@

clean:
	make -C libft/ clean
	rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
	make -C libft/ re

.PHONY: all clean fclean re
