#include "main.h"
#include <stdio.h>

/**
 *print_times_table - prints the multiplication table
 */

void print_times_table(int n)
{
	int i, j, res;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if ((n > 15) || (n < 0))
			{
				break;
			}
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if ((res >= 10) && (res < 100))
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if ((res < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
		}
		_putchar(' ');
		_putchar('\n');
	}
}
