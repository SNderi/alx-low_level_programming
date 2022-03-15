#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the multiplication table
 */

void times_table(void)
{
	int i = 0;
	int sol;

	while (i < 10)
	{
		int j = 0;
		sol = i * j;

		while (j < 9)
		{
			if (len(sol) == 1)
			{
				printf("%d,  ", sol);
				j++;
			}
			else
			{
				printf("%d, ", sol);
				j++;
			}
		}
		printf("%d\n", i * 9);
		i++;
	}
}
