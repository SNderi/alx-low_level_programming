#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 *
 * @head: Pointer to list's head
 * @index: Position to delete
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int count, i;
	dlistint_t *temp, *h, *del, *t;

	h = *head;
	count = dlistint_len(h);

	if (index >= count)
		return (-1);
	del = *head;
	i = 0;
	while (i != index)
	{
		del = *head->next;
		i++;
	}
	temp = del->prev;
	t = del->next;
	temp->next = t;
	t->prev = temp;
	del->next = NULL;
	del->prev = NULL;
	del->n = NULL;
	free(del);
	return (1);
}
