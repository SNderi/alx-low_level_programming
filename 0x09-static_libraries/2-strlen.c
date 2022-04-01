#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strlen - Returns length of a string
 *@s: Pointer to a string
 *
 *Return: result
 */

int _strlen(char *s)
{
	int i;
	int slen = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		slen++;
	}
	return (slen);
}
