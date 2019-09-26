# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bconchit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 17:37:44 by bconchit          #+#    #+#              #
#    Updated: 2019/09/25 23:44:02 by bconchit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCS = ./includes
SRCS = ft_memset.c ft_bzero.c ft_memalloc.c ft_memdel.c

.PHONY: all clean fclean re

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -I$(INCS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
