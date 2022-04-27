#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a given position
 * @head: Pointer to list's head
 * @index: Index position to add element
 *
 * Return: Address of new node or NULL on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *b;
	unsigned int i = 0;

	b = *head;
	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}

	while (i < (index - 1))
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	b = temp->next;
	temp->next = temp->next->next;
	b->next = NULL;
	free(b);
	return (1);
}
