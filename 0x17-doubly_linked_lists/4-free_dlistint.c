#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	while(head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
