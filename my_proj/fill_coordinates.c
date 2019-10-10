/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_coordinates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:39:20 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 18:53:42 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Fills structure with tetromino with its top left and bottom right corners
*/

void	fill_coordinates(t_term *term)
{
	int i;

	i = 0;
	term->x0 = 3;
	term->y0 = 3;
	term->x1 = 0;
	term->y1 = 0;
	while (i < 4)
	{
		if (term->buff[i].x_init < term->x0)
			term->x0 = term->buff[i].x_init;
		if (term->buff[i].y_init < term->y0)
			term->y0 = term->buff[i].y_init;
		if (term->buff[i].x_init > term->x1)
			term->x1 = term->buff[i].x_init;
		if (term->buff[i].y_init > term->y1)
			term->y1 = term->buff[i].y_init;
		i++;
	}
}
