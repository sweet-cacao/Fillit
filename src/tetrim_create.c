/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:30:32 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 08:46:47 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetrim	*tetrim_create(char *text)
{
	t_tetrim	*tetrim;

	tetrim = (t_tetrim *)ft_memalloc(sizeof(t_tetrim));
	if (tetrim)
	{
		if (tetrim_text(tetrim, text))
		{
			tetrim_area(tetrim);
			if (tetrim_valid(tetrim))
				return (tetrim);
		}
	}
	if (tetrim)
		tetrim_destroy(&tetrim);
	return (NULL);
}
