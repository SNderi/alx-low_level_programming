#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds integer arguments
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int count = 1;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
