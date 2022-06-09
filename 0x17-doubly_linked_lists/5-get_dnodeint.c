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
	size_t count;
	int i;

	count = dlistint_len(h);
	if (index >= count)
		return (NULL);
	i = 0;
	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (*head);
}
