#include <stdio.h>
#include "main.h"

/**
 * puts2 - Print every other character of a string
 *
 * @str: the string to be printed.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i % 2 == 0; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
