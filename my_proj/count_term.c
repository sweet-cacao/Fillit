#include "fillit.h"

int     count_term(t_term *term)
{
    int i;

    i = 0;
    while (term)
    {
        i++;
        term = term->next;
    }
    return (i);
}

void    destroy_map(t_map **map)
{
    int i;

    i = 0;
    while(i < (*map)->size)
    {
        free((*map)->map[i]);
        i++;
    }
    free(*map);
    *map = NULL;
}

