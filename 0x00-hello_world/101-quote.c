#include <stdio.h>

/**
 * main - Prints statement to stderr using fwrite
 *
 * Return: 1 if program runs successfully
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(str , 1 , sizeof(str) , null);
	return (1);
}
