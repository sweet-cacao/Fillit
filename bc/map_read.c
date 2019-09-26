/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 07:32:11 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/26 07:37:27 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_byte4	shift_vert(t_byte4 a, t_byte4 b, int shift)
{
	shift = shift % 4;
	if (shift == 1)
		return ((a & 0xFFF0) >> 4 | (b & 0x000F) << 12);
	else if (shift == 2)
		return ((a & 0xFF00) >> 8 | (b & 0x00FF) << 8);
	else if (shift == 3)
		return ((a & 0xF000) >> 12 | (b & 0x0FFF) << 4);
	return (a);
}

static t_byte4	shift_horz(t_byte4 a, t_byte4 b, int shift)
{
	shift = shift % 4;
	if (shift == 1)
		return ((a & 0xEEEE) >> 1 | (b & 0x1111) << 3);
	else if (shift == 2)
		return ((a & 0xCCCC) >> 2 | (b & 0x3333) << 2);
	else if (shift == 3)
		return ((a & 0x8888) >> 3 | (b & 0x7777) << 1);
	return (a);
}

t_byte4			map_read(t_map *map, int x, int y)
{
	t_byte4		ret;
	t_byte4		a;
	t_byte4		b;
	int			n;
	int			m;

	ret = 0xFFFF;
	if (map && x >= 0 && x < map->dimension && y >= 0 && y < map->dimension)
	{
		n = 0;
		m = 0;
		a = shift_vert(map->data[n], map->data[m], y);
		b = shift_vert(map->data[n + 1], map->data[m + 1], y);
		ret = shift_horz(a, b, x);
	}
	return (ret);
}
