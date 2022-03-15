#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the multiplication table
 */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 9)
		{
			printf("%d, ", i * j);
			j++;
		}
		printf("%d\n", i * 9);
		i++;
	}
}
