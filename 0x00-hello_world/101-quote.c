#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints statement to stderr using fwrite
 *
 * Return: 1 if program runs successfully
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
