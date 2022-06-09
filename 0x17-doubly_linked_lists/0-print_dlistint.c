#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 *
 * @h: Pointer to head of list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}
	return (count);
}
