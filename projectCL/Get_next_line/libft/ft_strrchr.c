/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:33:52 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/06 15:44:50 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*save;
	char			*p;
	unsigned char	ch;

	ch = c;
	save = NULL;
	p = (char *)s;
	while (*p)
	{
		if (*p == ch)
			save = p;
		p++;
	}
	if (*p == '\0' && save == NULL && ch == '\0')
	{
		save = p;
	}
	return (save);
}
