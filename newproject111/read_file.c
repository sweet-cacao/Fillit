#include "fillit.h"

int     read_file(int fd, t_term **term)
{
    char c;
    int ret;
    char buff[21];

    ret = 0;
    c = 'A';
    while ((ret = read(fd, buff, 20)) > 0)
    {
        if (check_buff(buff, ret))
        {
            if (!(get_struct(&(*term), buff, c)))
                return (0);
            fill_coordinates(&(*term));
            c++;
        }
        else
            return (0);
    }
    return (1);
}

