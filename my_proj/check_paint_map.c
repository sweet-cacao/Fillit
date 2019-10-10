/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_paint_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:37:46 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 19:33:08 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Works as well for dots and letters, checks if the spaace is free and
** draws letters or simply draws dots
*/

int		check_and_paint_map(t_term *term, t_map *map, char c)
{
	int i;
	int y;
	int x;

	if (c != '.')
	{
		i = 0;
		while (i < 4)
		{
			y = term->y + (term->buff[i].y_init);
			x = term->x + (term->buff[i].x_init);
			if (map->map[y][x] != '.')
				return (0);
			i++;
		}
	}
	i = 0;
	while (i < 4)
	{
		y = term->y + (term->buff[i].y_init);
		x = term->x + (term->buff[i].x_init);
		map->map[y][x] = c;
		i++;
	}
	return (1);
}
