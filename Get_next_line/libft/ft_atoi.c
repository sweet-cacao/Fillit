/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:13:26 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/13 13:14:44 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long long	otv;
	int			otriz;

	i = 0;
	otv = 0;
	otriz = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		otriz = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		otv = 10 * otv + (str[i] - 48);
		if (otv < 0 && otriz == -1 && ft_strcmp(str, "-2147483648") != 0)
			return (0);
		if (otv < 0 && otriz == 1)
			return (-1);
		i++;
	}
	otv = otv * otriz;
	return (otv);
}
