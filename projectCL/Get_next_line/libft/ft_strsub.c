/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:26:25 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/13 11:14:01 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = NULL;
	if (len == __SIZE_MAX__)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s && s[start] && i < (unsigned int)len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
