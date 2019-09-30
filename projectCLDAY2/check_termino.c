//
// Created by sweetcacao on 27.09.2019.
//

#include "header.h"

void 	check_termino(char *str)
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
		if (str[i] == '\n' && (i == 4 || i == 9 || i == 14))
			line--;
		if (str[i] == '.')
			dot--;
		if (str[i] == '#')
			hash--;
		i++;
	}
	if (hash != 0 || dot != 0 || line != 0)
		detect_error();
}