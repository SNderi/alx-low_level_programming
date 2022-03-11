#include <stdio.h>

/**
 * main - prints numbers in base 16
 *
 * Return: 0 as success value
 */

int main(void)
{
	int i;
	char c;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
