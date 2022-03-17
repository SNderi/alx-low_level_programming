#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle using #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		if (size < 1)
		{
			putchar('\n');
		}
		else
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
