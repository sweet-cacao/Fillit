#include "fillit.h"

int     solve_map(t_term *term, t_map *map)
{
    if (term == NULL)
    {
        print_map(map);
        destroy_map(&map);
        return (1);
    }
    term->y = 0 - term->y0;
    while (term->y < map->size - term->y1)
    {
        term->x = 0 - term->x0;
        while (term->x < map->size - term->x1)
        {
            if (check_and_paint_map(term, map, term->letter))
            {
                if (solve_map(term->next, map))
                    return (1);
                check_and_paint_map(term, map, '.');
            }
            term->x++;
        }
        term->y++;
    }
    return (0);
}