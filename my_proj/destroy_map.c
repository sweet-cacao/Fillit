/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:39:09 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 18:41:09 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	destroy_map(t_map **map)
{
	int i;

	i = 0;
	while (i < (*map)->size)
	{
		free((*map)->map[i]);
		i++;
	}
	free(*map);
	*map = NULL;
}
