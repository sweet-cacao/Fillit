/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:40:46 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 19:03:07 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Creating a new tetromino and pushing it in the list. Gets indexes from
** initial array, removes \n and turns them into x, y that are stored in
** array of structures buff[4]
*/

static void		fill_block(t_term **new, int *block)
{
	int			j;

	j = 0;
	while (j < 4)
	{
		(*new)->buff[j].y_init = block[j] / 4;
		(*new)->buff[j].x_init = block[j] % 4;
		j++;
	}
}

static t_term	*create_term(char *buff, char c)
{
	int			i;
	int			j;
	t_term		*new;
	int			block[4];

	j = 0;
	i = 0;
	new = (t_term *)malloc(sizeof(t_term));
	while (buff[i])
	{
		if (buff[i] == '#')
		{
			block[j] = i - (i / 5);
			j++;
		}
		i++;
	}
	new->letter = c;
	fill_block(&new, block);
	return (new);
}

int				get_struct(t_term **term, char *buff, char c)
{
	if (!(*term))
		(*term) = create_term(buff, c);
	else
	{
		while (*term)
			term = &(*term)->next;
		*term = create_term(buff, c);
	}
	fill_coordinates(*term);
	if (!(check_struct(*term)))
		return (0);
	return (1);
}
