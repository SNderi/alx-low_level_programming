#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
