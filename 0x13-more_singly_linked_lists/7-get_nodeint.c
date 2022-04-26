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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = head->next;
		head = temp;
		i++;
	}
	return (temp);
}
