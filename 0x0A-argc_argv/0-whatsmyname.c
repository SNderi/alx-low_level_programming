#include <stdio.h>

/**
 * main - prints its name
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return - 0 on success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
