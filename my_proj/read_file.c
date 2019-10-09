#include "fillit.h"

int     read_file(int fd, t_term **term)
{
    char c;
    int ret;
    char buff[21];

    ret = 0;
    c = 'A';
    while ((ret = read(fd, buff, 21)) > 0)
    {
        buff[ret] = '\0';
        if (printf("valid of buff = %d\n", check_buff(buff, ret)))
        {
            if (!(get_struct(&(*term), buff, c)))
                return (0);
            printf("char = %c\n", (*term)->letter);

            c++;
        }
        else
            return (0);
    }

    return (1);
}

