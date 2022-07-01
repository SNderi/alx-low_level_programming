#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsht;

	if (size == 0)
		return (NULL);

	hsht = malloc(sizeof(hash_table_t));
	if (!hsht)
		return (NULL);

	hsht->size = size;
	hsht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hsht->array))
	{
		free(hsht);
		return (NULL);
	}

	return (hsht);
}
