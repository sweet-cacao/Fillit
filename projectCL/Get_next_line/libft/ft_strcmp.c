/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:31:07 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/10 19:58:34 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str == *str2) && (*str || *str2))
	{
		str++;
		str2++;
	}
	return (*str - *str2);
}
