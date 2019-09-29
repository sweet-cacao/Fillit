//
// Created by sweetcacao on 30.09.2019.
//

#include "header.h"

char *king_size_func_fuck(int fd)
{
	int size;
	t_list *arr;
	int square;

	square = 4;
	size = 0;
	detect_termino(fd, &size, &arr);
	create_board(square);
	recursive_size(board, 'A', size, arr);
}