#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to list's head
 *
 * Return: Head node's data or 0 if linked list is empty
 */

void free_listint(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		free(head->str);
		free(head);
		return (temp->n);
	}
	else
		return (0);
}
