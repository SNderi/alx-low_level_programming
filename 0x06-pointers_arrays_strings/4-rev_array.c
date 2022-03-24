#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < (n / 2); b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
