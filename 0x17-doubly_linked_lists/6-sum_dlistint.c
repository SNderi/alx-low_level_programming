#include "lists.h"

/**
 * sum_dlistint - Sums all data in a doubly linked list
 *
 * @head: Pointer to head of list
 * Return: Sum total or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
