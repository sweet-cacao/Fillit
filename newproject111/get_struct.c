#include "fillit.h"

static void     fill_block(t_term **new, char block[4])
{
    int         j;

    j = 0;
    while (j < 4)
    {
        (*new)->buff[j].y_init = block[j] / 4;
        (*new)->buff[j].x_init = block[j] % 4;
        j++;
    }

}

static t_term  *create_term(char *buff, char c)
{
    int         i;
    int         j;
    t_term      *new;
    char        block[4];

    k = 0;
    j = 0;
    i = 0;
    new = (t_term *)memalloc(sizeof(t_term *));
    while (buff[i])
    {
        if (buff[i] == '#')
        {
            block[j] = i;
            j++;
        }
        i++;
    }
    new->letter = c;
    fill_block(&new, block);
}

int    get_struct(t_term **term, char *buff, char c)
{
    if (!(*term))
        (*term) = create_term(buff);
    else
    {
        while (*term)
            (*term) = (*term)->next;
        (*term) =  create_term(buff);
    }
    if (!(check_struct(*term)))
        return (0);
    return (1);
}