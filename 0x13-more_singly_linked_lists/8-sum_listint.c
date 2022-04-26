#include "lists.h"

/**
 * sum_listint - Adds elements of a list
 * @head: Pointer to list's head
 *
 * Return: Sum total or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (*head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
