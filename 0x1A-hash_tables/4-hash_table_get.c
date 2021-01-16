#include "hash_tables.h"

/**
 * hash_table_get - gets value from key
 * @ht: hash table
 * @key: key
 * Return: key's value or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *node;

	hash_index = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[hash_index]; node != NULL; node = node->next)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
	}

	return (NULL);
}
