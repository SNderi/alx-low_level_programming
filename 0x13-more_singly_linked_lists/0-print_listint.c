#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the list's head
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

