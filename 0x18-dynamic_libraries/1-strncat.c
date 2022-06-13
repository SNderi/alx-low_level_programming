#include "main.h"

/**
 * _strncat - Concatenates two strings but limit length of string 2
 * @dest: First string
 * @src: Second string
 * @n: String 2 limit size
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; len++)
	{
		dest[len] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
