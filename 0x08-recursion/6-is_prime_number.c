#include "main.h"

/**
 * checker - Checks if a number is prime or not
 * @a: number to be checked
 * @b: iterator number
 *
 * Return: 1 if prime 0 if not
 */

int checker(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (checker(a, b + 1));
}

/**
 * is_prime_number - Returns if a number is prime or not
 * @n: operand
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, 2));
}
