/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:01:32 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/06 16:25:47 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *s2)
{
	int		a;
	char	*str;
	char	*to_find;

	a = 0;
	str = (char *)s;
	to_find = (char *)s2;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (*str != '\0')
		{
			if (*str == to_find[0])
			{
				a = 1;
				while (to_find[a] != '\0' && *(str + a) == to_find[a])
					a++;
				if (to_find[a] == '\0')
					return (str);
			}
			str++;
		}
	}
	return (0);
}
