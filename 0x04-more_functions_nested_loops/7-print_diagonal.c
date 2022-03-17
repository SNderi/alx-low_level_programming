#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: size limit
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 1; j < n; j++)
		{
			putchar(' ');
		}
		putchar('\');
	}
	putchar('\n');
}
