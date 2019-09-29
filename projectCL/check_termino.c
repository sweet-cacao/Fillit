//
// Created by sweetcacao on 27.09.2019.
//

#include "header.h"

void 	check_termino(char *buff)
{
	int i;
	int hash;
	int dot;
	int line;

	i = 0;
	hash = 3;
	dot = 11;
	line = 2;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			line--;
		if (str[i] == '.')
			dot--;
		if (str[i] == '#')
			hash--;
		i++;
	}
	if (hash != 0 || dot != 0 && line != 0)
		detect_error();
}