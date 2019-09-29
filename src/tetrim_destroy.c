/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 08:31:49 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 17:30:23 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetrim_destroy(t_tetrim **addr)
{
	if (addr && *addr)
	{
		tetrim_destroy(&(*addr)->next);
		ft_memdel((void **)addr);
	}
}
