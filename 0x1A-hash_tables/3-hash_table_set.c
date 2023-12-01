#include "hash_tables.h"

/**
 * make_h_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_h_node(const char *key, const char *value)
{
	hash_node_t *Nw_node;

	Nw_node = malloc(sizeof(hash_node_t));
	if (Nw_node == NULL)
		return (NULL);
	Nw_node->key = strdup(key);
	if (Nw_node->key == NULL)
	{
		free(Nw_node);
		return (NULL);
	}
	Nw_node->value = strdup(value);
	if (Nw_node->value == NULL)
	{
		free(Nw_node->key);
		free(Nw_node);
		return (NULL);
	}
	Nw_node->next = NULL;
	return (Nw_node);
}


/**
 * hash_table_set - sets key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *new_Node;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_Node = ht->array[index];
	while (new_Node != NULL)
	{
		if (strcmp(new_Node->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(new_Node->value);
			new_Node->value = new_value;
			return (1);
		}
		new_Node = new_Node->next;
	}
	hash_node = make_h_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
