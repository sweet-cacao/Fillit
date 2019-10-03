//
// Created by sweetcacao on 29.09.2019.
//

#include "header.h"

int get_struct(char *str, t_elist *arr, int i)
{
	int j;
	int count;

	count = 0;
	j = 0;
//	if (!(arr[CURRENT] = (t_elist )malloc(sizeof(t_elist))));
//		detect_error();
	while (str[j] != '\0')
	{
		if (str[j] == '#' && ++count == 1)
			arr[i].x1 = j;
		if (str[j] == '#' && ++count == 2)
			arr[i].x2 = j;
		if (str[j] == '#' && ++count == 3)
			arr[i].x3 = j;
		if (str[j] == '#' && ++count == 4)
		{
			printf("%d\n", j);
			arr[i].x4 = j;
		}
		j++;
	}
	check_form(arr[i]);
	return (1);
}
