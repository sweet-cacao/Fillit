/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:00:56 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 10:06:57 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	recursive(t_board *self, t_tetrim *tetrim, int index)
{
	int		x;
	int		y;

	if (tetrim == NULL)
		return (1);
	y = 0 - tetrim->y0;
	while (y < self->size - tetrim->y1)
	{
		x = 0 - tetrim->x0;
		while (x < self->size - tetrim->x1)
		{
			if (board_check(self, tetrim, x, y))
			{
				board_insert(self, tetrim, index);
				if (recursive(self, tetrim->next, index + 1))
					return (1);
				board_remove(self, tetrim);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int			board_solve(t_board *self, t_tetrim *tetrim)
{
	return (recursive(self, tetrim, 0));
}
