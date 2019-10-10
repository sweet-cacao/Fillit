#include "fillit.h"

int     count_term(t_term *term)
{
    int i;

    i = 0;
    while (term)
    {
        i++;
        term = term->next;
    }
    return (i);
}




