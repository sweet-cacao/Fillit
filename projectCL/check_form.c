#include "header.h"

void	check_form(t_list termino)
{
	unsigned int x;
	int arr[16];
	int valid;
	insigned int i;

	x = 1 << termino.x1 | 1 << termino.x2 | 1 << termino.x3 | 1 << termino.x4;
	i = 0;
	valid = 0;
	while (i++ < 16)
		arr[i] = (x >> i) % 2);
	i = 0;
	while (i < 16)
	{
		if (arr[i] != 0 && i < 12 && arr[i + 4] != 0)
			arr[i]++;
		if (arr[i] != 0 && i < 15 && arr[i + 1] != 0)
			arr[i]++;
		if (arr[i] != 0 && i > 3 && arr[i - 4] != 0)
			arr[i]++;
		if (arr[i] != 0 && i > 0 && arr[i - 1] != 0)
			arr[i]++;
		if (arr[i] != 0)
			valid += arr[i];
		i++;
	}
	if (valid != 12 && valid != 10)
		detect_error();
}