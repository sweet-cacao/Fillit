#include "fillit.h"

int     check_and_paint_map(t_term *term, t_map *map, char c)
{
    int i;
    int y;
    int x;

    i = 0;
    while (i < 4)
    {
        y = term->y + (term->buff[i].y_init);
        x = term->x + (term->buff[i].x_init);
        if (map->map[y][x] != '.')
            return (0);
        else
            map->map[y][x] = c;
        i++;
    }
    return (1);
}
