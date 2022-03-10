#include <stdio.h>

/**
 * main - Prints size of various datatypes
 *
 * Return: 0 if program runs successfully
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a double: %d byte(s)\n", sizeof(double));
	printf("Size of a short int: %d byte(s)\n", sizeof(short int));
	printf("Size of a long double: %d byte(s)\n", sizeof(long double));
	return (0);
}
