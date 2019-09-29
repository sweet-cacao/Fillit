/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_paint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 10:11:24 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 12:33:19 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	board_paint(t_board *self, t_tetrim *tetrim, char value)
{
	int		n;
    int		x;
    int		y;
    int		i;

	n = 0;
	while (n < 4)
	{
        y = tetrim->y + (tetrim->block[n] / 4);
        x = tetrim->x + (tetrim->block[n] % 4);
        i = self->size * y + x;
		self->map[i] = value;
		n++;
	}
}
