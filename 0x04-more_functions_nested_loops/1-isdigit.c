#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Checks if value is a digit
 *@c: Value to be checked
 *
 * Return: Result
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

