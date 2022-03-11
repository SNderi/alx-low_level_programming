#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Generates a random number and checks if the number is positive, negative or zero
 *@n: random number
 *
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n",n)
	if (n == 0)
                printf("%d is zero\n",n)
	else
		printf("%d is negative\n",n)

	return (0);
}
