# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/29 14:08:58 by bconchit          #+#    #+#              #
#    Updated: 2019/09/29 16:00:53 by bconchit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = board_check.c board_create.c board_destroy.c board_paint.c \
		board_print.c board_solve.c main.c tetrim_area.c tetrim_count.c \
		tetrim_create.c tetrim_destroy.c tetrim_readfile.c tetrim_text.c \
		tetrim_valid.c \

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
