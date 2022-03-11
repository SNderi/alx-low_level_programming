#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; ++i)
	{
		putchar(i+ '0');
		if (i != EOF)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n')
	return (0);
}
