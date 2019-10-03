//
// Created by sweetcacao on 27.09.2019.
//

#include "header.h"
#include <stdio.h>

int 	main(void)
{
	t_elist		new;
	int size;
	int fd;
	t_elist *arr = NULL;

	fd = open("file.txt", O_RDONLY);
	detect_termino(fd, &size, arr);
	close(fd);
	new.x1 = 10;
	new.x2 = 11;
	new.x3 = 13;
	new.x4 = 14;
	check_form(new);
	printf("%s", "HELLO WORLD");
	return(0);
}