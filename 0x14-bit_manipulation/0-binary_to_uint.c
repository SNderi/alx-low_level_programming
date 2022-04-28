#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned int
 * @b: String of 0 and 1
 *
 * Return: Converted number or 0 if b is null or
 *	theres any char thats not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = sum << 1;
		if (b[i] == '1')
			sum += 1;
		i++;
	}
	return (sum);
}
