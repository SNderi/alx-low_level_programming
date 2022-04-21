#include "lists.h"
#include <stdio.h>

/**
 * list_len - Counts number of elements in a list
 * @h: Pointer to list head
 *
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
