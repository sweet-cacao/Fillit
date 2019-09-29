/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:53:27 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 09:26:24 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetrim_text(t_tetrim *self, char *text)
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
