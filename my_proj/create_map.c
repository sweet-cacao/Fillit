/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:38:58 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 21:06:31 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*create_map(int size)
{
	int		i;
	int		j;
	t_map	*map;

	i = 0;
	if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
		return (0);
	if (!(map->map = (char **)malloc(sizeof(char *) * size)))
		return (0);
	map->size = size;
	while (i < size)
	{
		j = 0;
		if (!(map->map[i] = ft_strnew(size + 1)))
			return (0);
		while (j < size)
		{
			map->map[i][j] = '.';
			j++;
		}
		map->map[i][size] = '\n';
		i++;
	}
	return (map);
}
