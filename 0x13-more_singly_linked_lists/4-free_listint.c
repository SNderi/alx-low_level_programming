#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to list's head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
