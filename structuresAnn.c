/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structuresAnn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:34:29 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/25 17:34:32 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//наброски структуры

typedef struct        s_list
{
    int height;
    int width;
    char **tab;
}                    t_list;

struct        s_list
{
    t_list term;
    struct t_list* next;
    next = NULL;
}                    tlist_list;
