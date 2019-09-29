/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_area.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:52:42 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 09:30:35 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetrim_area(t_tetrim *self)
{
	int		x;
	int		y;
	int		index;

	self->x0 = 3;
	self->y0 = 3;
	self->x1 = 0;
	self->y1 = 0;
	index = 0;
	while (index < 4)
	{
		x = self->block[index] % 4;
		y = self->block[index] / 4;
		if (self->x0 > x)
			self->x0 = x;
		if (self->y0 > y)
			self->y0 = y;
		if (self->x1 < x)
			self->x1 = x;
		if (self->y0 < y)
			self->y0 = y;
		index++;
	}
}
