#include "main.h"

/**
 * main - Print _putchar followed by newline
 *
 * Return: 0 as success value
 */

int main(void)
{
	char w[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(w[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
