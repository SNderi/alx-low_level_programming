#include "main.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: Pointer to list's head
 * @n: Element to add
 *
 * Return: Address of new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (head->next = NULL)
		*head = new_node;

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
