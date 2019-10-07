#include "fillit.h"

t_row   *create_row(int num, int ind)
{
    t_row *new;
    if (new = (t_row *)memalloc(sizeof(t_row *)))
    {
        new->num = num;
        new->ind = ind;
/*
       new->down  = NULL;
        new->l = NULL;
        new->r = NULL;
        new->up = NULL;
 */
    }
    return (new);
}

void    add_row(t_row *row, int num, int ind)
{
    t_row *new;

    while (row->r)
    {
        row = row->r;
    }
    new = create_row(num, ind);
    if (new)
    {
        row->r = new;
        new->l = row;
    }
}
void  add_one_tetr(t_board *self, t_row **row, t_tetrim *tetrim, int ind)
{
    int i;
    int n;
    int x;
    int y;

    n = 0;
    while (n < 4)
    {
        y = tetrim->y + (tetrim->block[n] / 4);
		x = tetrim->x + (tetrim->block[n] % 4);
		i = (self->size + 1) * y + x;
        if (!row)
            create_row(i, n);
        else
            add_row(row, i, n);
        n++;
    }
    return (0);
}

void    create_list(t_tetrim *tetrim, t_board *self, int ind)
{
    t_row *row;

    tetrim->y = 0 - tetrim->y0;
	while (tetrim->y < self->size - tetrim->y1)
	{
		tetrim->x = 0 - tetrim->x0;
		while (tetrim->x < self->size - tetrim->x1)
		{
            add_one_tetr(&row, tetrim->block, ind);
            tetrim->x++;
        }
        tetrim->y++;
    }
    return (0);
}