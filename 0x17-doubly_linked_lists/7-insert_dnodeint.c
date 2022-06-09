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
		count++, head = head->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || idx >= count)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			temp = tmp->next;
			new->prev = tmp;
			new->next = temp;
			tmp->next = new;
			if (temp)
				temp->prev = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
