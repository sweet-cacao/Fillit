/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 05:10:57 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 05:15:09 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <stdlib.h>
#include "libft.h"

typedef struct	s_tetrim
{
	int		block[4];
	int		x0;
	int		y0;
	int		x1;
	int		y1;
}				t_tetrim;

t_tetrim		*tetrim_create(char *text);

#endif
