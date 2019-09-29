/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 12:36:53 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 13:20:22 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*map_create(int size)
{
	char	*self;
	int		index;
	int		length;

	length = (size + 1) * size;
	self = ft_strnew(length);
	if (self)
	{
		index = 0;
		while (index < length)
		{
			if (index % (size + 1) == size)
				self[index] = '\n';
			else
				self[index] = '.';
			index++;
		}
	}
	return (self);
}

t_board			*board_create(int size)
{
	t_board		*self;
	int			index;
	int			length;

	self = (t_board *)ft_memalloc(sizeof(t_board));
	if (self)
	{
		self->map = map_create(size);
		if (self->map)
			return (self);
		board_destroy(&self);
	}
	return (NULL);
}
