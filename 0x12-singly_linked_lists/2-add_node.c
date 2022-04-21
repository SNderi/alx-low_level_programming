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
	list_t *new_node;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	new_node->str  = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	if (new_node == NULL)
	{
		return (NULL);
	}

	return (*head);
}
