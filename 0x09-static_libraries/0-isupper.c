#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Checks if letter is uppercase
 * @c: Letter to be checked
 *
 * Return: Result
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
