#include "variadic_functions.h"

/**
 *print_strings - prints strings followed by a new line.
 *
 *@separator: string to be printed as separator.
 *@n: Number of paramaters.
 *
 *Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list m;
	char *str;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(m, char *);
		if (str)
			printf("%s", str);
		else
			printf("%p", str);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(m);
	printf("\n");
}
