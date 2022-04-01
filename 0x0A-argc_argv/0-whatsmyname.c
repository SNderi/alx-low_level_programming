#include <stdio.h>

/**
 * main - prints its name
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
