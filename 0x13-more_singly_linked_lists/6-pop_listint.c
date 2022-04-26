#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to list's head
 *
 * Return: Head node's data or 0 if linked list is empty
 */

void pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
