#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: 0 as the success value
 */

int main(void)
{
	char l;

	for (l = 'z' ; l >= 'a' ; l--)
	{
		putchar(l);
	}
	return (0);
}
