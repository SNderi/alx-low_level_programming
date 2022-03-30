#include "main.h"

/**
 * factorial - Returns factorial of a number, -1 if it's less than 0
 *
 * @n: operand
 *
 * Return: factorial, -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	return (-1);

}
