/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_term.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:34:30 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/05 18:50:15 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

t_term      *read_term(fd)
{
    t_term *new;
    char buff[21];
    int  ret;

    while ((ret = read(fd, buff, 21)) >= 20)
    {
        if (ret == 21 && buff[20] == '\n')
            buff[20] = '\0';
        if (ret == 20 && buff[19] == '\0')
            buff[19] = '\n';
        if (check_term(buff) == 0)
            return (0);
        if (get_struct(buff, new) == 0)
            return(0);
    }

}