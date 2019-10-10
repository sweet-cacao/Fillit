/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:38:06 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 18:52:21 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Checks if the tetromino is valid or not by counting the number of pairs
*/

static int		check_pair(t_coord first, t_coord second)
{
	if (first.x_init == second.x_init + 1 && second.x_init != 3)
		return (1);
	if (first.y_init == second.y_init + 1 && second.x_init != 3)
		return (1);
	if (first.x_init == second.x_init - 1 && second.x_init != 0)
		return (1);
	if (first.y_init == second.y_init - 1 && second.y_init != 0)
		return (1);
	else
		return (0);
}

int				check_struct(t_term *term)
{
	int count;

	count = 0;
	count += check_pair(term->buff[0], term->buff[1]);
	count += check_pair(term->buff[0], term->buff[2]);
	count += check_pair(term->buff[0], term->buff[3]);
	count += check_pair(term->buff[1], term->buff[2]);
	count += check_pair(term->buff[1], term->buff[3]);
	count += check_pair(term->buff[2], term->buff[3]);
	if (count > 2)
		return (1);
	else
		return (0);
}
