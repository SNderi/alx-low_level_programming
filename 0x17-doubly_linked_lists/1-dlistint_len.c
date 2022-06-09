#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list
 *
 * @h: Pointer to head of list
 * Return - Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
