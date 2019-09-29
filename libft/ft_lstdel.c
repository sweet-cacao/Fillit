/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:35:06 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/13 13:15:28 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;
	size_t size;

	tmp = *alst;
	while (tmp)
	{
		next = tmp->next;
		size = tmp->content_size;
		del((tmp->content), size);
		free(tmp);
		tmp = next;
	}
	*alst = NULL;
}
