//
// Created by Gynir Starvin on 09/10/2019.
//

#ifndef NEWPROJECT111_FILLIT_H
#define NEWPROJECT111_FILLIT_H

typedef struct          s_term
{
    char                buff[8];
    char                letter;
    int                 x;
    int                 y;
    int                 x0;
    int                 y0;
    int                 width;
    int                 hight;
    struct s_term       *next;
}                       t_term;

typedef struct          s_map
{
    char                **map;
    int                 size;
};

#endif //NEWPROJECT111_FILLIT_H
