#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev - Prints a string in reverse
 *@s: String to be printed
 */

void print_rev(char *s)
{
	int l;
	int i = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	for (i = l-1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
