#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to list's first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = *head;
		*head = (*head)->next;
		next->next = prev;
		prev = next;
	}
	*head = next;
	return (*head);
}
