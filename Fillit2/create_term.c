/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_term.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:36:21 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/05 18:36:21 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_term      *create_term(int a, int b, int c, int d)
{
    t_term *new;

    new = (t_term *)malloc(sizeof(t_term));
    new->a[0] = a;
    new->a[1] = b;
    new->a[2] = c;
    new->a[3] = d;
    new->next = NULL;
    return (new);
}

