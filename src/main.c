/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 12:36:38 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 13:57:05 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


static t_board	*solve(t_tetrim *tetrim)
{
	t_board		*board;

	board = board_create(10);

	return (board);
}

int				main(int argc, char **argv)
{
	t_board		*board;
	t_tetrim	*tetrim;
	int			fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		tetrim = tetrim_readfile(fd);
		close(fd);
		if (tetrim)
		{
			board = solve(tetrim);
			tetrim_destroy(&tetrim);
			if (board)
			{
				board_print(board);
				board_destroy(&board);
				return (0);
			}
		}
		ft_putstr("error\n");
	}
	else
		ft_putstr("usage: fillit file\n");
	return (0);
}
