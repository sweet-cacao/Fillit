#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//typedef struct s_
typedef struct	        s_tetrim
{
	struct s_tetrim		*next;
	int					block[4];
	int					x0;
	int					y0;
	int					x1;
	int					y1;
	int					x;
	int					y;
}				        t_tetrim;

typedef struct      s_row
{
    int             ind;
    int             num;
    struct s_list   *l;
    struct s_list   *r;
    struct s_list   *up;
    struct s_list   *down;
    struct s_list   *head;   
}                   t_row;

typedef struct		s_col
{
	int				size;
	int				col;
	struct s_list   *l;
    struct s_list   *r;
    struct s_list   *up;
    struct s_list   *down;
    struct s_list   *head;

}					t_col;

typedef struct	s_board
{
	int					size;
	char				*map;
}				t_board;


typedef struct s_map
{
	t_col		*first_col;
	t_numbers	*numbers;
}				t_map;

#endif