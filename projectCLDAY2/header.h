#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "Get_next_line/libft/libft.h"
# define BUFF_SIZE 21
# define CURRENT size - 1
typedef struct  s_elist
{
  int x1;
  int x2;
  int x3;
  int x4;
}               t_elist;

void	check_form(t_elist termino);
int 	get_struct(char *str, t_elist *arr, int size);
void	detect_termino(int fd, int *size, t_elist *arr);
t_elist	go_lower(t_elist term);
t_elist	go_right(t_elist term);
void	clear_two_prev_c(char *board, char c, char a);
int		place_board(char *board, t_elist term, char c);
int 	recursive_board(char *board, char c, int size, t_elist term);
char	*recursive_size(char *board, char c, int size, t_elist *term);
void	detect_error(void);
void 	check_termino(char *str);

#endif