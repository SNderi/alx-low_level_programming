#include "main.h"

/**
 * _putchar - Print _putchar followed by newline
 *
 * Return: 0 as success value
 */

int _putchar(void)
{
	char w[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(w[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
