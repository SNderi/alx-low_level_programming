#include "lists.h"

/**
 * add_node_end - Adds new node at end of list
 * @head: Pointer to list's head
 * @str: Element to add
 *
 * Return: Address of new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int i = 0;
	char *str_copy = strdup(str);

	while (str[i] != '\0')
		i++;

	list_t *last = *head;
	new_node->str  = str_copy;
	new_node->len  = i;
	new_node->next = NULL;

	if (new_node == NULL || str_copy == NULL)
	{
		free(new_node);
		return(NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	
	return (new_node);
}
