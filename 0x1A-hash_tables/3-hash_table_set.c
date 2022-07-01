#include "hash_tables.h"

/**
 * replace - replaces the value at a pre-existing key
 * @ht: double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 */

void replace(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}


/**
 * validate - Checks if a key already exixts in a hash table
 * @ht: Pointer to the list
 * @key: Key to validate
 *
 * Return: 1 if key is found 0 otherwise
 */

int validate(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}
	return (0);
}


/**
 * add_node -  Adds a new node at the beginning of a linked list
 * @h: Pointer to the list
 * @key: key to add
 * @value: value associated with the key
 *
 * Return: address of new element if it succeeded, NULL otherwise
 */

hash_node_t *add_node(hash_node_t *h, const char *key, const char *value)
{
	hash_node_t *nod;

	nod = malloc(sizeof(hash_node_t));
	if (!nod)
		return (NULL);

	nod->key = strdup(key);
	nod->value = strdup(value);

	if (h == NULL)
	{
		h = nod;
		nod->next = NULL;
	}
	else
	{
		nod->next = h;
		h = nod;
	}

	return (h);
}

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
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (validate(ht->array[index], key))
	{
		replace(&ht->array[index], key, value);
		return (1);
	}
	add_node(ht->array[index], key, value);
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}
