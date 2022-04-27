#include "lists.h"

/**
 * print_listint_safe - Prints all elements of a list
 * @head: Pointer to the list's head
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

/* (*h).n == h->n */
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		i++;
	}
	return (i);
}
