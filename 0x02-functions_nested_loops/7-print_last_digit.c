#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - Returns last value of a digit
 *@n: operand
 *
 *Return: answer
 */

int print_last_digit(int n)
{
	_putchar(abs(n % 10) + '0');
	return (abs(n % 10));
}
