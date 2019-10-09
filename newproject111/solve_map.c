#include "fillit.h"

int     solve_map(t_term *term, t_map *map)
{
    if (term = NULL)
    {
        print_map(map);
        return (1);
    }
    term->y = 0 - term->y0;
    while (term->y < map->size - term->y1)
    {
        term->x = 0 - term->x0;
        while (term->x < map->size - term->x1)
        {
            if (check_and_paint_map(term, map, term->letter))
                solve_map(term++, map);
            check_and_paint_map(term, map, '.');
            term->x++;
        }
        term->y++;
    }
    return (0);
}

