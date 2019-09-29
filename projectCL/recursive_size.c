//
// Created by sweetcacao on 29.09.2019.
//

#include "header.h"

t_list go_lower(t_list term)
{
	t_list new;

	term.x1 += 4;
	term.x2 += 4;
	term.x3 += 4;
	term.x4 += 4;
	return (term);
}

t_list go_right(t_list term)
{
	term.x1++;
	term.x2++;
	term.x3++;
	term.x4++;
	return (term);
}

void	clear_two_prev_c(char *board, char c, char a)
{
	int i;

	i = 0;
	while (board[i])
	{
		if (board[i] == c || board[i] == a)
			board[i] = '.';
		i++;
	}
}

int place_board(char *board, t_list term, char c)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (board[i])
	{
		if (term.x1 == i || term.x2 == i|| term.x3 == i || term.x4 == i)
		{
			if (board[i] != '.')
			{
				return (0);
			}
			b++;
			board[i] = c;
		}
		i++;
	}
	if (b != 4)
	{
		clear_two_prev_c(borad, c, c - 1);
		return (-1);
	}
	return (1);
}

int 	recursive_board(char *board, char c, int size, t_list term)
{
	t_list new;

	new = term;
	if (place_board(board, new, c) == 1)
		return (1);
	if (place_board(board, new, c) == -1)
		return (-1);
	recursive_board(board, c, size, go_lower(new));
	recursive_board(board, c, size, go_right(new));
}

char *recursive_size(char *board, char c, int size, t_list *term)
{
	if (size == 0)
		return (board);
	if (!(term))
	{
		increase_board(board, square + 1);
		recursive_size(board, c++, size--, term++);
	}
	if (recursive_board(board, c, size, *term) == 1)
		recursive_size(board, c++, size--, term++);
	recursive_size(board, c--, size++, term--));
}