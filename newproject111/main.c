#include "fillit.h"

static void     solver(t_term *term, int size)
{
    t_map *map;

    map = create_map(size);
    while (!(solve_map(term, map)))
    {
        destroy_map(map);
        solver(term, size++)
    }
}

int     main(int ac, char **av)
{
    int fd;
    t_term *term;
    int size;
    int num;

    size = 1;
    if (ac == 2)
    {
        fd = open(str, O_RDONLY);
        read_file(fd, &term);
        num = count_term(t_term);
        while (size * size < num * 4)
            size++;
        solver(term, size);
    }
    else
        putendl("fillit file");
}
