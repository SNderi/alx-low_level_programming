#include "lists.h"

/**
 * free_list - Frees a list
 * @head - Pointer to list's head
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
