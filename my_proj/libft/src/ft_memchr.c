/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:05:49 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/06 13:28:01 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char *p;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == ((unsigned char)(c)))
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
