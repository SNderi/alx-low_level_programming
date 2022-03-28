#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be checked
 * @c: character to find
 *
 * Return: Pointer to first occurence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return ('\0');
}
