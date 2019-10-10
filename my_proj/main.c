/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:40:57 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 19:33:59 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Recursive solver changes size of map until the solution is found
** Starting size of map for optimisation purposes is the smallest map to
** include all tetrominos
*/

static void		solver(t_term *term, int size)
{
	t_map	*map;

	map = create_map(size);
	while (!(solve_map(term, map)))
	{
		destroy_map(&map);
		solver(term, size++);
	}
}

int				main(int ac, char **av)
{
	int		fd;
	t_term	*term;
	int		size;
	int		num;
	int		i;

	term = NULL;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (!(read_file(fd, &term)))
		{
			ft_putendl("error");
			return (0);
		}
		close(fd);
		i = 0;
		num = count_term(term);
		size = 2;
		while (size * size < num * 4)
			size++;
		solver(term, size);
	}
	else
		write(1, "fillit file\n", 12);
}
