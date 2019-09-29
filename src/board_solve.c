/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:00:56 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 15:32:28 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	recursive(t_board *self, t_tetrim *tetrim, int index)
{
	if (tetrim == NULL)
		return (1);
	tetrim->y = 0 - tetrim->y0;
	while (tetrim->y < self->size - tetrim->y1)
	{
		tetrim->x = 0 - tetrim->x0;
		while (tetrim->x < self->size - tetrim->x1)
		{
			if (board_check(self, tetrim))
			{
				board_paint(self, tetrim, 'A' + index);
				if (recursive(self, tetrim->next, index + 1))
					return (1);
				board_paint(self, tetrim, '.');
			}
			tetrim->x++;
		}
		tetrim->y++;
	}
	return (0);
}

int			board_solve(t_board *self, t_tetrim *tetrim)
{
	return (recursive(self, tetrim, 0));
}
