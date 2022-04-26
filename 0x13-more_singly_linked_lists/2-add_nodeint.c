#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to list's head
 * @n: Element to add
 *
 * Return: Address of added element or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);

	if (new_node == NULL)
		return (NULL);
}
