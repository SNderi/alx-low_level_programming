#include <stdio.h>

/**
 * main - Prints  3 combination decimal numbers
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			for (k = j + 1 ; k <= 9 ; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if  (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
