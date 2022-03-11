#include <stdio.h>

/**
 * main - Prints the alphabet set except e and q in lowercase
 *
 * Return: 0 as success value
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ;)
	{
		while (l != 'e' && l != 'q')
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);
}

