#include "fillit.h"

void    print_map(t_map *map)
{
    int i;

    i = 0;
    while (i < map->size)
    {
        write(1, &(map->map[i]), 1);
    }
}

