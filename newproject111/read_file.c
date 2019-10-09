#include "fillit.h"

int     read_file(int fd, t_term **term)
{
    int ret;
    char buff[21];

    while ((ret = read(fd, buff, 20)) > 0)
    {
        if (check_buff(buff, ret))
        {
            if (!(get_struct(&term, buff)))
                return (0);
            fill_coordinates(&term);
        }
        else
            return (0);
    }
    return (1);
}

