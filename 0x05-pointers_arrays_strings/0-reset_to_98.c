#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Takes pointer to an int and updates the value it points to to 98
 * *n: Pointer to an int
 */

void reset_to_98(int *n)
{
	*n = &n;
	*n = 98;
}
