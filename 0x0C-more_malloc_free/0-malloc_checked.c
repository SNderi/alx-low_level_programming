#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size
 *
 * Return: Pointer to allocated memory or 98 on error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
