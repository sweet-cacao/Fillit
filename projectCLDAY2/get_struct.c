//
// Created by sweetcacao on 29.09.2019.
//

#include "header.h"

int get_struct(char *str, t_elist *arr, int size)
{
	int i;
	int count;

	count = 0;
	i = 0;
//	if (!(arr[CURRENT] = (t_elist )malloc(sizeof(t_elist))));
//		detect_error();
	while (str[i] != '\0')
	{
		if (str[i] == '#' && count++ == 1)
			arr[CURRENT].x1 = i;
		if (str[i] == '#' && count++ == 2)
			arr[CURRENT].x2 = i;
		if (str[i] == '#' && count++ == 3)
			arr[CURRENT].x3 = i;
		if (str[i] == '#' && count++ == 4)
		{
			printf("%d\n", i);
			arr[CURRENT].x4 = i;
		}
		i++;
	}
	check_form(arr[CURRENT]);
	return (1);
}
