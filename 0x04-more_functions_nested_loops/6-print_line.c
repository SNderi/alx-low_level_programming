#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: size limit
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n < 1)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
