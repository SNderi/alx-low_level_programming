#include "main.h"

/**
 * print_most_numbers - Print set digit except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0, i < 0, i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			putchar(i + '0');
	}
	putchar('\n');
}