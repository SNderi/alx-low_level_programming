#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds integer arguments
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(*(argv[i]) >= '0' && *(argv[i]) <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
