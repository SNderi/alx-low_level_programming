#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
