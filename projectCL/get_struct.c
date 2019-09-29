//
// Created by sweetcacao on 29.09.2019.
//

#include "header.h"

int 	get_struct(char *buff, t_list **arr, int size)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (!(arr[CURRENT] = (t_list *)malloc(sizeof(t_list))));
		detect_error;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && ++count == 1)
			arr[CURRENT]->x1 = i;
		if (str[i] == '#' && ++count == 2)
			arr[CURRENT]->x2 = i;
		if (str[i] == '#' && ++count == 3)
			arr[CURRENT]->x3 = i;
		if (str[i] == '#' && ++count == 4)
			arr[CURRENT]->x4 = i;
		i++;
	}
	check_form(arr[CURRENT]);
	return (1);
}