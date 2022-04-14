#include "variadic_functions.h"

/**
 *sum_them_all - Returns the sum of all its parameters
 *
 *@n: Number of arguments.
 *
 *Return: result.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  i = 0, sum = 0;
	va_list m;

	va_start(m, n);
	for (i = 0 ; i < n; i++)
		sum += va_arg(m, int);
	return (sum);
}
