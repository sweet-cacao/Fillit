#include "fillit.h"

static void     solver(t_term *term, int size)
{
    t_map *map;

    map = create_map(size);
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

    size = 1;
    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        printf("%s", "here");
        read_file(fd, &term);
        close(fd);
        printf("here");
        num = count_term(term);
        printf("%d", num);
    /*    while (size * size < num * 4)
            size++;
        solver(term, size);
*/
    }
    else
        write(1, "fillit file\n", 12);
}
