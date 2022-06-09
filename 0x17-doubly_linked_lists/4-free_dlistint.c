#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head of list
 */

void free_dlistint(dlistint_t *head)
{
	while(head != NULL)
	{
		head->prev = NULL;
		head->n = NULL;
		head = head->next;
	}
	free(head);
}
