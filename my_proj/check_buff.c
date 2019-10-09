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
     //   printf("ret = %d\n", ret);


        while (buff[i] != '\0')
        {
  //          printf ("string = %s\n", buff);
  //          printf("h = %c\n", buff[i]);
            y = (i + 1) % 5;
 //           printf("y = %d\n", y);
            if (i == 19 && (buff[i] == '\0' || buff[i] == '\n'))
            {
   //             printf("%c\n", buff[i]);
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
        else
            return (0);
    }
    else
        return (0);
}
