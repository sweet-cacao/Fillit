/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:17:44 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 18:26:49 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	board_destroy(t_board **addr)
{
	if (addr && *addr)
	{
		ft_memdel((void **)&(*addr)->map);
		ft_memdel((void **)addr);
	}
}
