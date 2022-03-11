#include <stdio.h>

/**
 * main - Prints the alphabet set except e and q in lowercase
 *
 * Return: 0 as success value
 */

int main(void)
{
	char l;

	while (l = 'a' && l != 'e' && l != 'q' && l <= 'z')
	{
		putchar(l);
		l++;
			
	}
	putchar('\n');
	return (0);
}

