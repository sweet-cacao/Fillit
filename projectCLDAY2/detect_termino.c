/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_termino.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:35:22 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/05 18:35:22 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	detect_termino(int fd, int *size, t_elist *arr)
{
	char buff[BUFF_SIZE];
	int ret;
    int i;

    i = 0;
    *size = 26;
	if (!(arr = (t_elist *)malloc(sizeof(t_elist) * (*size))))
		detect_error();
	printf("%s", "here");
	while ((ret = read(fd, buff, 20)) > 0)
	{
		buff[ret] = '\0';
		check_termino(buff);

		get_struct(buff, arr, i);
		ret = read(fd, buff, 1);
		if (buff[0] != '\n' || buff[0] != '\0')
			detect_error();
		i++;
	}
}