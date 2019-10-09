#include "fillit.h"

static int check_pair(t_coord first, t_coord second)
{
    if (first.x_init == second.x_init + 1 && second.x_init != 3)
        return (1);
    if (first.y_init == second.y_init + 1 && second.x_init != 3)
        return (1);
    if (first.x_init == second.x_init - 1 && second.x_init != 0)
        return (1);
    if (first.y_init == second.y_init - 1 && second.y_init != 0)
        return (1);
}

int     check_struct(t_term *term)
{
    int count;

    count = 0;

    count += check_pair(term->buff[0], term->buff[1]);
    count += check_pair(term->buff[0], term->buff[2]);
    count += check_pair(term->buff[0], term->buff[3]);
    count += check_pair(term->buff[1], term->buff[2]);
    count += check_pair(term->buff[1], term->buff[3]);
    count += check_pair(term->buff[2], term->buff[3]);
    if (count > 2)
        return (1);
    else
        return (0);
    }
}