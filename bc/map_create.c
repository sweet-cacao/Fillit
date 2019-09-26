/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 23:30:32 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/26 05:06:01 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		map_create_brick(t_map *map)
{
	int		x;
	int		i;
	int		n;

	x = map->dimension;
	while (x < map->width * 4)
	{
		i = 0;
		while (i < map->width)
		{
			n = (x / 4) * map->width + i;
			map->data[n] |= (0xFF << (4 * (x % 4)));
			n = i * map->width + (x / 4);
			map->data[n] |= (0x1111 << (x % 4));
			i++;
		}
		x++;
	}
}

t_map			*map_create(int dimension)
{
	t_map	*map;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	if (map)
	{
		map->dimension = dimension;
		map->width = 1 + (dimension + 2) / 4;
		map->data = (unsigned short *)ft_memalloc(
			map->width * map->width * sizeof(unsigned short));
		map_create_brick(map);
	}
	return (map);
}
