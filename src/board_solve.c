/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:00:56 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 08:22:50 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	recursive(t_board *board, t_tetrim *tetrim, int index)
{
	int		x;
	int		y;

	if (tetrim == NULL)
		return (1);
	y = tetrim->y0;
	while (y < board->size - tetrim->y1)
	{
		x = tetrim->x0;
		while (x < board->size - tetrim->x1)
		{
			if (board_check(board, tetrim, x, y))
			{
				board_insert(board, tetrim, index);
				if (recursive(board, tetrim->next, index + 1))
					return (1);
				board_remove(board, tetrim);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int			board_solve(t_board *board, t_tetrim *tetrim)
{
	return (recursive(board, tetrim, 0));
}
