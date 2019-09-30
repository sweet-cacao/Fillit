#include "header.h"

void	detect_termino(int fd, int *size, t_elist *arr)
{
	char buff[BUFF_SIZE];
	int ret;

	*size = 26;
	if (!(arr = (t_elist *)malloc(sizeof(t_elist) * (*size))))
		detect_error();
	while ((ret = read(fd, buff, 20)) > 0)
	{
		buff[ret] = '\0';
		check_termino(buff);
		*size += get_struct(buff, arr, *size);
		ret = read(fd, buff, 1);
		if (buff[0] != '\n' || buff[0] != '\0')
			detect_error();
	}
}