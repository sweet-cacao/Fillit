/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 23:31:59 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/26 07:37:14 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	map_destroy(t_map **amap)
{
	if (amap && *amap)
	{
		if ((*amap)->data)
			ft_memdel((void **)&((*amap)->data));
		ft_memdel((void **)amap);
	}
}
