#include "fillit.h"

int     solve_map(t_term *term, t_map *map)
{
    int i;

    i = 0;
    if (term == NULL)
    {
        print_map(map);
        destroy_map(&map);
        return (1);
    }
//    printf("letter = %c\n", term->letter);
//    printf("y0 = %d. x0 = %d\n", term->y0, term->x0);
//    printf("y1 = %d. x1 = %d\n", term->y1, term->x1);
//    while (i < 4)
//    {
//        printf("y = %d, x = %d\n", (term)->buff[i].y_init, (term)->buff[i].x_init);
//        i++;
//    }
    term->y = 0 - term->y0;
    while (term->y < map->size - term->y1)
    {
        term->x = 0 - term->x0;
        while (term->x < map->size - term->x1)
        {
//            print_map((map));
            if (check_and_paint_map(term, map, term->letter))
            {

//                if (term->letter == 'C')
//              {
//                    print_map((map));
//                    return (1);
//                }
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

