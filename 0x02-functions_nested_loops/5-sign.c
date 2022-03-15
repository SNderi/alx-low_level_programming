#include "main.h"
#include <stdio.h>

/**
 *print_sign - Print sign of a number
 *@n: number to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
}
