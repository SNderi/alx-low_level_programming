#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps values of 2 ints using pointers
 *@a: Pointer to an int
 *@b: Pointer to an int
 */

void swap_int(int *a, int *b)
{
	int x;
	int *s = &x;
	*s = *a;
	*a = *b;
	*b = *s;
}
