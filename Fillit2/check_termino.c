/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_termino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:53:07 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/05 18:53:19 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	check_term(char *str)
{
    int i;
    int hash;
    int dot;
    int line;

    i = 0;
    hash = 3;
    dot = 11;
    line = 3;
    while (str[i] != '\0')
    {
        if (str[i] == '\n' && (i == 4 || i == 9 || i == 14 || i == 19))
            line--;
        if (str[i] == '.')
            dot--;
        if (str[i] == '#')
            hash--;
        i++;
    }
    if (hash != 0 || dot != 0 || line != 0)
        return (0);
    else
        return (1);
}