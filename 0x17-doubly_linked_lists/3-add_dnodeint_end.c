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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	while (*head->next != NULL)
		*head = *head->next;

	new->n = n;
	*head->next = new;
	new->prev = *head;
	new->next = NULL;
	*head = new;
	free(new);
	return (*head);
}
