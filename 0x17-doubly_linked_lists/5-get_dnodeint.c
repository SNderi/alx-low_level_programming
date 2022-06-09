#include "lists.h"

/**
 * get_dnodeint_at_index - Finds nth node of a doubly linked list
 *
 * @head: Head of list
 * @index: Index of node to find
 *
 * Return: nth node or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i, count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	if (index >= count)
		return (NULL);
	i = 0;
	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
