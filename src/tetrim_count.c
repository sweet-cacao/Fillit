/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrim_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:53:03 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 15:54:18 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetrim_count(t_tetrim *walk)
{
	int		count;

	count = 0;
	while (walk)
	{
		walk = walk->next;
		count++;
	}
	return (count);
}
