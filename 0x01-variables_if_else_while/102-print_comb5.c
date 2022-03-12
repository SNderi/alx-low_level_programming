#include <stdio.h>

/**
 * main - prints a combination of two - two numbers
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k <= 9 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
					if (i + j + k + l == 0)
					{
						continue;
					}
					if (i < k || (i == k && j < l)
					{
							putchar(i + '0');
							putchar(j + '0');
							putchar(' ');
							putchar(k + '0');
							putchar(l + '0');
					}
					if (i + j + k + l != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
