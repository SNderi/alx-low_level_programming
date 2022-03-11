#include <stdio.h>

/**
 * main - Prints the alphabet set except e and q in lowercase
 *
 * Return: 0 as success value
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		if (l = 'e' || l = 'q')
			continue;
		else
			putchar(l);
	}
	putchar('\n');
	return (0);
}

