/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 05:10:57 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 08:33:10 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include "libft.h"

typedef struct	s_board
{
	int					size;
}				t_board;

typedef struct	s_tetrim
{
	struct s_tetrim		*next;
	int					block[4];
	int					x0;
	int					y0;
	int					x1;
	int					y1;
}				t_tetrim;

t_board			*board_create(int size);
void			board_destroy(t_board **aboard);
int				board_check(t_board *board, t_tetrim *tetrim, int x, int y);
void			board_insert(t_board *board, t_tetrim *tetrim, int index);
void			board_remove(t_board *board, t_tetrim *tetrim);
int				board_solve(t_board *board, t_tetrim *tetrim);
void			board_print(t_board *board);

t_tetrim		*tetrim_read(int fd);

#endif
