#include "lists.h"

/**
 * free_list - Frees a list
 * @head - Pointer to list's head
 */

void free_list(list_t *head)
{
	if (head != NULL)
		free_list(head->next);

	free(head->str);
	free(head);
}
