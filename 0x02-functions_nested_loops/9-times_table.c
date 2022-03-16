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

		while (j <= 9)
		{
			sol = i * j;

			if (j == 9)
				printf("%d", sol);
			else if (sol < 9)
				printf("%d,  ", sol);
			else
				printf("%d, ", sol);
			j++;
		}
		i++;
	}
	printf("\n");
}
