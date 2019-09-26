/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 23:31:06 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/26 07:36:56 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef unsigned short	t_byte4;

typedef struct			s_map
{
	int				dimension;
	int				width;
	unsigned short	*data;
}						t_map;

t_map					*map_create(int size);
void					map_destroy(t_map **amap);
t_byte4					map_read(t_map *map, int x, int y);

#endif
