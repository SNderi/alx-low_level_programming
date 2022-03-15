#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: operand
 *
 * Return: 0 as success value
 */

int _isalpha(int c)
{
	if (isalpha(c))
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
	return (0);
}
