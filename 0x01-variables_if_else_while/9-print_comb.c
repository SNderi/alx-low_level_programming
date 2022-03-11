#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 8 ; ++i)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	return (0);
}
