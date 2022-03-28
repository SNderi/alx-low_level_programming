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
	for (;*s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
