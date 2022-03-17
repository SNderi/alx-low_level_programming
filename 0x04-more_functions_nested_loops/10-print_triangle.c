#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle using #
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
