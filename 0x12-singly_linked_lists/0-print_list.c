#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Traverses a list
 * @h: Head of list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	if (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	else
	{
		printf("[%d] (%s)", h->len, "nil");
	}
	return (n);
}
