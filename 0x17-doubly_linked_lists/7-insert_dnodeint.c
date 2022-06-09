#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Pointer to head of list
 * @idx: Position to add new node
 * @n: Data to add to list
 *
 * Return: Address of new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *head = *h;
	dlistint_t *tmp = *h;
	unsigned int count, i;

	if (!h)
		return (NULL);
	count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL || idx >= count)
		return (NULL);
	
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	i = 0;
	while (i != (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	temp = tmp->next;
	new->prev = tmp;
	new->next = temp;
	tmp->next = new;
	temp->prev = new;
	return (new);
}
