#include "fillit.h"

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