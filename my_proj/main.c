#include "fillit.h"

static void     solver(t_term *term, int size)
{
    t_map *map;

    map = create_map(size);
    printf("11\n");
    while (!(solve_map(term, map)))
    {
        destroy_map(&map);
        solver(term, size++);
    }
}

int     main(int ac, char **av)
{
    int fd;
    t_term *term;
    int size;
    int num;
    int i;

    term = NULL;
    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        read_file(fd, &term);
        close(fd);
        i = 0;
        num = count_term(term);
        size = 2;
        while (size * size < num * 4)
            size++;
        solver(term, size);
    }
    else
        write(1, "fillit file\n", 12);
}