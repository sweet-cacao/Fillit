/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:39:46 by gstarvin          #+#    #+#             */
/*   Updated: 2019/10/10 21:01:21 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/includes/libft.h"

typedef struct		s_coord
{
	int				x_init;
	int				y_init;
}					t_coord;

typedef struct		s_term
{
	t_coord			buff[4];
	char			letter;
	int				x;
	int				y;
	int				x0;
	int				y0;
	int				x1;
	int				y1;
	struct s_term	*next;
}					t_term;

typedef struct		s_map
{
	char			**map;
	int				size;
}					t_map;

t_map				*create_map(int size);
void				print_map(t_map *map);
int					check_and_paint_map(t_term *term, t_map *map, char c);
int					solve_map(t_term *term, t_map *map);
int					get_struct(t_term **term, char *buff, char c);
int					check_buff(char *buff, int ret);
int					check_struct(t_term *term);
int					read_file(int fd, t_term **term);
void				fill_coordinates(t_term *term);
void				destroy_map(t_map **map);
int					count_term(t_term *term);
void				delete_struct(t_term **term);

#endif
