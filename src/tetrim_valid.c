/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:55:08 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 18:27:11 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	horz(int *arr, int a, int b)
{
	int		x1;
	int		y1;
	int		x2;
	int		y2;

	x1 = arr[a] % 4;
	y1 = arr[a] / 4;
	x2 = arr[b] % 4;
	y2 = arr[b] / 4;
	return (x1 + 1 == x2 && y1 == y2);
}

static int	vert(int *arr, int a, int b)
{
	int		x1;
	int		y1;
	int		x2;
	int		y2;

	x1 = arr[a] % 4;
	y1 = arr[a] / 4;
	x2 = arr[b] % 4;
	y2 = arr[b] / 4;
	return (x1 == x2 && y1 + 1 == y2);
}

int			tetrim_valid(t_tetrim *self)
{
	int		count;

	count = 0;
	count += horz(self->block, 0, 1);
	count += horz(self->block, 0, 2);
	count += horz(self->block, 0, 3);
	count += horz(self->block, 1, 2);
	count += horz(self->block, 1, 3);
	count += horz(self->block, 2, 3);
	count += vert(self->block, 0, 1);
	count += vert(self->block, 0, 2);
	count += vert(self->block, 0, 3);
	count += vert(self->block, 1, 2);
	count += vert(self->block, 1, 3);
	count += vert(self->block, 2, 3);
	return (count > 2);
}
