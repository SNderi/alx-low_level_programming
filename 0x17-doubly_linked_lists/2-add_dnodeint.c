#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 *
 * @head: Pointer to head of list
 * @n: Data to store in list
 *
 * Return: Address of the new element or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	free(new);
	return (*head);
}
