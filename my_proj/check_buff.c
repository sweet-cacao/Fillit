#include "fillit.h"

int     check_buff(char *buff, int ret)
{
    int i;
    int y;
    int count;

    count = 0;
    i = 0;
    if (ret >= 20)
    {
        while (buff[i] != '\0')
        {
            y = (i + 1) % 5;
            if (i == 19 && (buff[i] == '\0' || buff[i] == '\n'))
            {
                count++;
            }
            else if ((y == 0 || i == 20) && buff[i] == '\n')
                count++;
            else if (buff[i] == '.' || buff[i] == '#')
                count++;
            i++;
        }
        if (count >= 20)
            return (1);
    }
    return (0);
}