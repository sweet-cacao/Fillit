#include "fillit.h"

void    print_map(t_map *map)
{
    int i;
    int j

    i = 0;
    j = 0;
    while (i < map->size)
    {
        putstr(map->map[i]);
    }
}

