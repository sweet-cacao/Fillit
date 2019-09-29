#include "header.h"

void	detect_termino(int fd, int *size, t_list **arr)
{
	char buff[BUFF_SIZE];

	*size = 1;
	if (!(arr = (t_list **)malloc(sizeof(t_list) * size)))
		detect_error();
	while ((ret = read(df, buff, 20)) > 0)
	{
		buff[ret] = '\0';
		check_termino(buff);
		*size += get_struct(buff, &arr, *size);
	}
}