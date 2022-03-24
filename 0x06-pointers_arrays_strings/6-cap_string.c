#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to transform
 *
 * Return: resulting string
 */

char *cap_string(char *s)
{
	int a, b, c;
	char sep[] = ",;.!?(){}\n\t\" ";

	for (a = 0, c = 0; s[a] != '\0'; a++)
	{
		if (s[0] > 96 && s[0] < 123)
			c = 1;
		for (b = 0; sep[b] != '\0'; b++)
		{
			if (sep[b] == s[a])
				c = 1;
		}

		if (c)
		{
			if (s[a] > 96 && s[a] < 123)
			{
				s[a] -= 32;
				c = 0;
			}
			else if (s[a] > 64 && s[a] < 91)
				c = 0;
			else if (s[a] > 47 && s[a] < 58)
				c = 0;
		}
	}
	return (s);
}
