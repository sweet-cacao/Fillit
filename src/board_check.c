/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 12:36:45 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 17:13:20 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "stdio.h"

int		board_check(t_board *self, t_tetrim *tetrim)
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
		if (x >= self->size || y >= self->size)
			printf("size = %d, x = %d, y = %d\n", self->size, x, y);
		i = (self->size + 1) * y + x;
		if (self->map[i] != '.')
			return (0);
		n++;
	}
	return (1);
}
