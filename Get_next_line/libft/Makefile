# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 17:50:19 by gstarvin          #+#    #+#              #
#    Updated: 2019/09/24 15:52:31 by gstarvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = gcc -Wall -Wextra -Werror

SRC = ft_strcmp.c ft_atoi.c ft_isdigit.c ft_memset.c \
	  ft_strlcat.c ft_strstr.c ft_isprint.c ft_strcat.c \
	  ft_strlen.c ft_memccpy.c ft_strchr.c \
	  ft_strncat.c ft_bzero.c ft_memchr.c  \
	  ft_strcmp.c ft_strncmp.c ft_isalnum.c ft_memcmp.c \
	  ft_strcpy.c ft_strncpy.c ft_isalpha.c ft_memcpy.c \
	  ft_strnstr.c ft_isascii.c ft_memmove.c \
	  ft_strdup.c ft_strrchr.c ft_memalloc.c \
	  ft_memdel.c ft_putchar_fd.c ft_putendl.c ft_strclr.c \
	  ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
    ft_putchar.c ft_putstr.c ft_putstr_fd.c ft_strdel.c \
    ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
    ft_strmapi.c ft_strmap.c ft_strnequ.c ft_strnew.c \
    ft_strsub.c ft_strsplit.c ft_itoa.c ft_lstnew.c \
    ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstmap.c \
    ft_lstiter.c ft_isupper.c ft_islower.c\
    ft_islower.c ft_iswspace.c ft_strtrim.c ft_strjoin.c\

OBJ += $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
        $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
