#include "main.h"

/**
 * print_square - Prints a square using #
 * @size: Sides length
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size, i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		if (size < 1)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
