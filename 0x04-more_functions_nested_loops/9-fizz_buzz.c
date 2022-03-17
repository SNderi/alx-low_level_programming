#include "main.h"
#include <stdlib.h>

/**
 * fizzbuzz - Prints 1 to 100 and incorporates fizzbuzz test
 */

int fizzbuzz(void)
{
	int i = 1;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
