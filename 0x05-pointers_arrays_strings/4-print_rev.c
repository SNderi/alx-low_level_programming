#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev - Prints a string in reverse
 *@s: String to be printed
 */

void print_rev(char *s)
{
	int l = _strlen(s);
	int i;

	for (i = l; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
