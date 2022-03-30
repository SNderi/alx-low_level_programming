#include "main.h"

/**
 * sqrt2 - Finds natural square root of a number using binary search
 *
 * @a: number to find square root for
 * @b: binary search iterator
 *
 * Return: Result or -1 if n doesn't have a natural square root
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - Finds natural square root of a number
 *
 * @n: operand
 *
 * Return: Result or -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
