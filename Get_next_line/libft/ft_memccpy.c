/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:15:13 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/06 13:25:03 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int ch, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)dst)[i] = *(unsigned char *)src;
		i++;
		if (*((unsigned char *)src) == (unsigned char)ch)
			return (&((unsigned char *)dst)[i]);
		src++;
	}
	return (NULL);
}
