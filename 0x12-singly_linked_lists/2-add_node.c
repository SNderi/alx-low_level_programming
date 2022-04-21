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
	unsigned int i = 0;
	char *str_copy = strdup(str);

	while (str[i] != '\0')
		i++;

	new_node->str  = str_copy;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	if (new_node == NULL || str_copy == NULL)
	{
		return (NULL);
	}
	return (new_node);
}
