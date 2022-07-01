#include "hash_tables."

/**
 * hash_table_set -  Adds an element to the hash table
 * @ht: Hash table to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hnode = NULL, *collnode = NULL;
	unsigned long int index;
	char *valuedup = NULL, *keydup = NULL;

	if (!ht || !(ht->array) || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hnode = ht->array[index];
	valuedup = strdup(value);
	if (!valuedup)
		return (0);

	while (hnode != NULL)
	{
		if (!strcmp(hnode->key, key))
		{
			free(hnode->value);
			hnode->value = valuedup;
			return (1);
		}
		hnode = hnode->next;
	}

	hnode = ht->array[index];

	collnode = malloc(sizeof(hash_node_t));
	if (collnode == NULL)
		return (free(valuedup), 0);

	keydup = strdup(key);
	if (!keydup)
		return (free(valuedup), free(collnode), 0);

	collnode->key = keydup;
	collnode->value = valuedup;
	collnode->next = hnode;
	ht->array[index] = collnode;

	return (1);
}
