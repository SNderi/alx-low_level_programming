#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Generates a rand number, checks if it is positive, negative or zero
 *
 *Return: 0 as success value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
