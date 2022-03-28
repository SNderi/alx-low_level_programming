#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be checked
 * @c: character to find
 *
 * Return: Pointer to first occurence of the character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
