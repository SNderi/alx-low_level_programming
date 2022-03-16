#include "main.h"
#include <stdio.h>

/**
 *print_times_table - prints the multiplication table
 *@n: operand limit
 */

void print_times_table(int n)
{
	int i, j, res;

	if ((n > 15) && (n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == n)
					printf("%d", res);
				if (res < 10)
					printf("%d,  ", res);
				else if (res >= 10 && res < 100)
					printf("%d,  ", res);
				else if (res >= 100)
					printf("%d ", res);
			}
			_putchar('\n');
		}
	}
}
