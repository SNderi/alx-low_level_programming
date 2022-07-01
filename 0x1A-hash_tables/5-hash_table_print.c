#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the hash_node_t list to print
 */
void print_list(hash_node_t *h)
{
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
	}
}

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	char *prev_key = NULL;
	unsigned long int idx;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[i];
	}
	printf("{");

	if (node)
	{
		prev_key = node->key;
		idx = key_index((const unsigned char *)prev_key, ht->size);
		for (i = 0; i < ht->size; i++)
		{
			print_list(ht->array[i]);
			if (ht->array[i] && i < idx)
				printf(", ");
		}
	}

	printf("}\n");
}
