#include "fillit.h"

t_col   *make_col(int i, int size)
{
    t_col *new;
    if (!(new = (t_col *)memalloc(sizeof(t_col *))))
        return (0);
    new->col = i;
    new->size = size;
    return (new);
}

void    add_col(int i, t_col *col, int size)
{
    t_col *new;

    while (col->r)
    {
        col = col->r;
    }
    new = make_col(i, size);
    col->r = new;
    new->l = col;
}

void    create_col(int size)
{
    t_col *new;
    int i;

    i = 0;
    while (i < size)
    {
        add_col(i, new, size);
        i++;
    }
}
