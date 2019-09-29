/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:31:49 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 09:26:07 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetrim_destroy(t_tetrim **addr)
{
	if (addr)
	{
		if (*addr)
			tetrim_destroy(&(*addr)->next);
		ft_memdel((void **)addr);
	}
}
