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

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		n++;
		h = h->next;
	}
	return (n);
}
