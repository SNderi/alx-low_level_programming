#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Pointer to head of list
 * @idx: Position to add new node
 * Return: Address of new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *head = *h;
	int count, i;

	count = dlistint_len(head);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL || idx >= count)
		return (NULL);
	i = 0;
	while (i != (idx - 1))
	{
		*h = *h->next;
		i++;
	}
	temp = *h->next;
	new->n = n;
	*h->next = new;
	new->prev = *h;
	temp->prev = new;
	new->next = temp;
	*h = new;
	free(new);
	return (*h);
}
