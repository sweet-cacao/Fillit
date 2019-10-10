/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:38:58 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 18:40:52 by gstarvin         ###   ########.fr       */
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
	map->map = (char **)malloc(sizeof(char *) * size);
	map->size = size;
	while (i < size)
	{
		j = 0;
		map->map[i] = ft_strnew(size + 1);
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
