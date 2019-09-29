/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:21:13 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/11 16:11:52 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	str = NULL;
	if (!(s))
		return (str);
	while (s[i] && ft_iswspace(s[i]) == 1)
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[j] && ft_iswspace(s[j + i]) == 1)
	{
		j--;
	}
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
