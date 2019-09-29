/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:14:16 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/07 10:39:08 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *str;

	str = NULL;
	if (size)
	{
		if (!(str = (unsigned char *)malloc(sizeof(*str) * size)))
			return (NULL);
		ft_bzero(str, size);
	}
	return ((void *)str);
}
