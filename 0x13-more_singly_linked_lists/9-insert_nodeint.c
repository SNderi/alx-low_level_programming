#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to list's head
 * @idx: Index position to add element
 * @n: Element to add
 *
 * Return: Address of new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (i < (idx - 1))
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
