#include "fillit.h"

int     solve_map(t_term *term, t_map *map)
{
    if (term = NULL)
    {
        print_map(map);
        return (0);
    }
    term->y = term->y0;
    while (term->y < map->size - map->height)
    {
        term->x = term->y0;
        while (term->x < map->size - map->width)
        {
            if (check_and_paint_map(term, map, term->letter))
                solve_map(term++, map);
            check_and_paint_map(term, map, '.');
            term->x++;
        }
        term->y++;
    }
}

