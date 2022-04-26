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
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	int i = 0;

	new_node->n = n;

	if (i == idx)
	{
		temp = head->next;
		free(temp);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
