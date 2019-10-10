/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:41:25 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 20:11:07 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Reading a file and filling list
*/

int		read_file(int fd, t_term **term)
{
	char	c;
	int		ret;
	char	buff[21];
	int		preret;

	c = 'A';
	while ((ret = read(fd, buff, 21)) >= 0)
	{
		if (ret == 0 && preret == 20)
			return (1);
		else if (ret == 0 && preret != 20)
			return (0);
		buff[ret] = '\0';
		if (check_buff(buff, ret))
		{
			if (!(get_struct(&(*term), buff, c)))
				return (0);
			c++;
		}
		else
			return (0);
		preret = ret;
	}
	return (1);
}
