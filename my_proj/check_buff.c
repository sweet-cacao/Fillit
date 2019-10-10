/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_buff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:37:24 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 20:04:13 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** The initial check of the termino for right number of /n, . and #
*/

int		check_buff(char *buff, int ret)
{
	int i;
	int count;
	int k;

	count = 0;
	i = 0;
	k = 0;
	if (ret >= 20)
	{
		while (buff[i] != '\0')
		{
			if (((((i + 1) % 5) == 0) || i == 20) && buff[i] == '\n')
				count++;
			else if (buff[i] == '.' || buff[i] == '#')
				count++;
			if (buff[i] == '#')
				k++;
			i++;
		}
		if (buff[i] == '\0' && ret == 20)
			count++;
		if (count >= 20 && k == 4)
			return (1);
	}
	return (0);
}
