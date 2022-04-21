#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Pointer to list's head
 * @str: Element to add
 *
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str  = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	if (new_node == 0)
	{
		free(new_node);
		return (NULL);
	}
	return (*head);
}
