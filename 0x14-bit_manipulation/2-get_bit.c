#include "main.h"

/**
 * get_bit - Finds value at a given index
 * @n: Binary to check
 * @index: Position of bit to check
 *
 * Return: Bit value at index or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
