#include <stdio.h>

/**
 * main - Print combinations of two digits
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 && j != i ; j++)
		{
			putchar(j + '0');
			putchar(i + '0');
			if (j != 9 && i !=8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
