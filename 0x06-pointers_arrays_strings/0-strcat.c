#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len;
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	/**
	*dest[len] = ' ';
	*len++;
	*/

	for (i = 0; src[i] != '\0'; len++)
	{
		dest[len] = src[i];
		i++;
	}
	dest[len] = '\0';
	/*_putchar('\n');*/
	return (dest);
}
