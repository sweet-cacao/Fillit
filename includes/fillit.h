/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bconchit <bconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 05:10:57 by bconchit          #+#    #+#             */
/*   Updated: 2019/09/29 15:33:03 by bconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"

typedef struct	s_tetrim
{
	struct s_tetrim		*next;
	int					block[4];
	int					x0;
	int					y0;
	int					x1;
	int					y1;
	int					x;
	int					y;
}				t_tetrim;

typedef struct	s_board
{
	int					size;
	char				*map;
}				t_board;

t_tetrim		*tetrim_create(char *text);
void			tetrim_destroy(t_tetrim **addr);
int				tetrim_text(t_tetrim *self, char *text);
void			tetrim_area(t_tetrim *self);
int				tetrim_valid(t_tetrim *self);
t_tetrim		*tetrim_readfile(int fd);

t_board			*board_create(int size);
void			board_destroy(t_board **addr);
int				board_check(t_board *self, t_tetrim *tetrim);
void			board_paint(t_board *self, t_tetrim *tetrim, char value);
int				board_solve(t_board *self, t_tetrim *tetrim);
void			board_print(t_board *self);

#endif
