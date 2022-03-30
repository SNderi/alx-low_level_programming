#include "main.h"

/**
 * _strlen - obtains length string
 * @a: string operand
 * @l: integer to store string length
 *
 * Return: length of string
 */
int _strlen(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (_strlen(a + 1, l + 1));
}
/**
 * str_compare - compares a string with its reverse
 * @a: string operand
 * @l: length
 *
 * Return: 1 if its similar 0 otherwise
 */

int str_compare(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (str_compare(a + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 if its a palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen(s, 0);
	return (str_compare(s, l));
}
