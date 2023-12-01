#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 * @key: The key to get the index of hash table
 * @size: The size of the array of the hashtable
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algo.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
