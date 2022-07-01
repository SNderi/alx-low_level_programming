#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key to search
 *
 * Return: The value associated with the element else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
