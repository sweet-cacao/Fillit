#include "fillit.h"

t_map   *create_map(int size)
{
    int i;
    int j;
    t_map *map;
    int length;

    i = 0;
    if (!(map = (t_map *)memalloc(sizeof (t_map *))))
        return (0);
    map->size = size;
    length = size + 1;
    while (i < size)
    {
        j = 0;
        while (j < length)
        {
            if ((j % size) == 0)
                map->map[i][j] = '\n';
            else
                map->map[i][j] = '.';
            j++;
        }
        i++;
    }
    return (map);
}
