#include "fillit.h"

int     check_buff(char *buff, int ret)
{
    int i;

    i = 0;
    if (ret >= 20)
    {
        while (buff[i] != '\0')
        {
            if (i == 19 && (buff[i] != '\0' || buff[i] != '\n'))
                return (0);
            else if (((i + 1) % 5) == 0  && buff[i] != '\n')
                return (0);
            else if (buff[i] != '.' || buff[i] != '#')
                return (0);
            i++;
        }
        return (1);
    }
    else
        return (0);
}
