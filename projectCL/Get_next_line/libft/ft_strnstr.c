/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:21:23 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/06 13:33:38 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < len && big[j])
	{
		while (little[i] != '\0' && little[i] == big[j + i] &&
				big[j] != '\0' && (i + j) < len)
		{
			i++;
		}
		if (little[i] == '\0')
			return ((char *)&big[j]);
		i = 0;
		j++;
	}
	if (!little[0])
		return ((char *)&big[j]);
	return (0);
}
