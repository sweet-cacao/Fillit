/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:05:52 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/14 14:23:22 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_letters(const char *str, char c)
{
	size_t i;

	i = 0;
	while (*str != c && *str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

static size_t		ft_count_words(const char *str, char c)
{
	size_t b;

	b = 0;
	while (*str != '\0')
	{
		if ((*str != c && *str != '\0') &&
				(*(str + 1) == c || *(str + 1) == '\0'))
		{
			b++;
		}
		str++;
	}
	return (b);
}

static char			*iter(char const *s, char c, size_t *k)
{
	size_t	j;
	char	*str;

	str = NULL;
	j = 0;
	while (s[*k] == c)
		*k += 1;
	if (!(str = (char *)malloc(sizeof(char) * (count_letters(&s[*k], c) + 1))))
		return (NULL);
	while (s[*k] != c && s[*k])
	{
		str[j] = s[*k];
		j++;
		*k += 1;
	}
	str[j] = '\0';
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	**tab;

	i = -1;
	k = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *)
					* (ft_count_words(s, c) + 1))))
		return (NULL);
	while (++i < ft_count_words(s, c))
	{
		if (!(tab[i] = (char *)malloc(sizeof(char)
					* (count_letters(&s[k], c) + 1))))
		{
			while (i)
				free(tab[i--]);
			return (NULL);
		}
		tab[i] = iter(s, c, &k);
	}
	tab[i] = NULL;
	return (tab);
}
