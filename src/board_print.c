/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 12:37:15 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 18:26:55 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	board_print(t_board *self)
{
	ft_putstr(self->map);
}
