#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: size limit
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if (n < 0)
		{
			break;
		}
		for (j = 1; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n');
}
