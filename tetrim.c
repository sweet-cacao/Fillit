/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 05:09:30 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 06:30:28 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			tetrim_text(t_tetrim *self, char *text)
{
	int		count;
	int		index;

	count = 0;
	index = 0;
	while (index < 20)
	{
		if (index % 5 == 4)
		{
			if (text[index] != '\n')
				return (0);
		}
		else
		{
			if (text[index] != '#' && text[index] != '.')
				return (0);
			if (text[index] == '#' && count++ < 4)
				self->block[count - 1] = index - (index / 5);
		}
		index++;
	}
	return (count == 4);
}

static void			tetrim_area(t_tetrim *self)
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
		self->x0 = (self->x0 > x) ? x : self->x0;
		self->y0 = (self->y0 > y) ? y : self->y0;
		self->x1 = (self->x1 < x) ? x : self->x1;
		self->y1 = (self->y1 < y) ? y : self->y1;
		index++;
	}
}

static int			tetrim_valid(t_tetrim *self)
{
	// TODO
	return (0);
}

static t_tetrim		*tetrim_create(char *text)
{
	t_tetrim	*self;

	self = (t_tetrim *)ft_memalloc(sizeof(t_tetrim));
	if (self)
	{
		if (tetrim_text(self, text))
		{
			tetrim_area(self);
			if (tetrim_valid(self))
				return (self);
		}
	}
	if (self)
		ft_memdel((void **)&self);
	return (NULL);
}

t_tetrim			*tetrim_read(int fd)
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
				self->next = tetrim_read(fd);
				if (self->next)
					return (self);
			}
			ft_memdel((void **)&self);
		}
	}
	return (NULL);
}
