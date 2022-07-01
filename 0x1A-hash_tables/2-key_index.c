#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key to search
 * @size: Size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
