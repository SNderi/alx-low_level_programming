#include "lists.h"

/**
 * listint_len - Finds number of elements in a list
 * @h: Pointer to list's head
 *
 * Return: Number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
