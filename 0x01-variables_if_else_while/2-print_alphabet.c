#include <stdio.h>

/**
 * main - Prints the alphabet set in lowercase
 *
 * Return: 0 as success value
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
