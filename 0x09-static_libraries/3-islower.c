#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_islower - Checks if a letter islower or not
 *@c: operand
 *
 *Return: result
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
