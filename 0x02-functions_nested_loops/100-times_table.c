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
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				res = i * j;
				if (res < 100)
				{
					_putchar(' ');
				}
				if (res < 10)
				{
					_putchar(' ');
				}
				if ((res >= 10) && (res < 100))
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
