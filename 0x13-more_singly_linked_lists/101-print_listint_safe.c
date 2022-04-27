#include "lists.h"

/**
 * print_listint_safe - Prints all elements of a list
 * @head: Pointer to the list's head
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

/* (*h).n == h->n */
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		i++;
	}
	return (i);
}

int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
