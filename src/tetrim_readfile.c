/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_readfile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 10:19:56 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 13:20:52 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetrim		*recursive(int fd, int index)
{
	t_tetrim	*self;
	char		buff[20];
	int			ret;

	ret = read(fd, buff, 20);
	if (ret == 20)
	{
		self = tetrim_create(buff);
		if (self)
		{
			ret = read(fd, buff, 1);
			if (ret == 0)
				return (self);
			if (ret == 1 && buff[0] == '\n')
			{
				self->next = recursive(fd, index + 1);
				if (self->next)
					return (self);
			}
			tetrim_destroy(&self);
		}
	}
	return (NULL);
}

t_tetrim			*tetrim_readfile(int fd)
{
	return (recursive(fd, 0));
}
