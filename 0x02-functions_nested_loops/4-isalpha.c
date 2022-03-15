#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: operand
 *
 * Return: result
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return(1);
	else
		return(0);
}
