#include "lists.h"

/**
 * get_nodeint_at_index - Finds nth node of a linked list
 * @head: Pointer to list's head
 * @index: Index of node to be found
 *
 * Return: nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (0);
}
