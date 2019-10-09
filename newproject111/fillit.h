//
// Created by Gynir Starvin on 09/10/2019.
//

#ifndef NEWPROJECT111_FILLIT_H
#define NEWPROJECT111_FILLIT_H

typedef struct          s_coord
{
    int                 x_init;
    int                 y_init;
}                       t_coord;

typedef struct          s_term
{
    t_coord             buff[4];
    char                letter;
    int                 x;
    int                 y;
    int                 x0;
    int                 y0;
    int                 x1;
    int                 y1;
    struct s_term       *next;
}                       t_term;

typedef struct          s_map
{
    char                **map;
    int                 size;
}                       t_map;

t_map   *create_map(int size);
void    print_map(t_map *map);
int     check_and_paint_map(t_term *term, t_map *map, char c);
int     solve_map(t_term *term, t_map *map);
int     get_struct(t_term **term, char *buff, char c);
int     check_buff(char *buff, int ret);
int     check_struct(t_term *term);
int     read_file(int fd, t_term **term);
void    fill_coordinates(t_term **term);
#endif //NEWPROJECT111_FILLIT_H
