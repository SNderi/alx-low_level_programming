#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: size of array
 * @c: char to initialize the array
 *
 * Return: Null if size is O/if it fails else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * size_of(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
