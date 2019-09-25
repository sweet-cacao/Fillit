/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:53:57 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/25 15:47:15 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../Get_next_line/get_next_line.h"

//fills an array with termino
//вроде работает, но сегфолт дает в конце возможно из-за мэйна
int		get_numbers(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '#')
			s[i] = '0';
		i++;
	}
	return (i);
}
//заполняем массив нулями
char	**readtermino(int fd)
{
	char 	**termino;
	int		y;
	char 	*line;
	y = 0;
	termino = (char **)malloc((sizeof(char *) * 4));
	while (y < 4)
	{
		if (get_next_line(fd, &termino[y]) == -1)
			return (0);
		if (get_numbers(termino[y]) != 4)
			return (0);
		printf("%s\n", termino[y]);
		y++;
	}
	if (get_next_line(fd, &line) == -1 || (line[0] != '\n' && ft_strlen(line) == 1))
		termino = NULL;
	return (termino);
}
//заполняем массив цифрами и выводим их сумму
int		checktermino(char **tab)
{
	int y;
	int x;
	int valid;

	valid = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tab[y][x] != '.' && y < 3 && tab[y + 1][x] != '.')
				tab[y][x]++;
			if (tab[y][x] != '.' && y > 0 && tab[y - 1][x] != '.')
				tab[y][x]++;
			if (tab[y][x] != '.' && x < 3 && tab[y][x + 1] != '.')
				tab[y][x]++;
			if (tab[y][x] != '.' && x > 0 && tab[y][x - 1] != '.')
				tab[y][x]++;
			if (tab[y][x] != '.')
				valid += (tab[y][x] - 48);
			x++;
		}
		printf("%s\n", tab[y]);
		y++;
	}
	return (valid);
}

int		main(int ac, char **av)
{
	int fd;
	char **tab;
	fd = open(av[1], O_RDONLY);

	while ((tab = readtermino(fd)) != 0)
	{
		printf("valid = %d\n", checktermino(tab));
	}
		return (0);
//	printf("%s\n", tab[0]);
//	checktermino(tab);
}
