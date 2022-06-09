#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: Pointer to head of list
 * @n: Data to add to list
 *
 * Return: Address of new element or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	/*free(new);*/
	return (*head);
}
