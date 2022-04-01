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
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
