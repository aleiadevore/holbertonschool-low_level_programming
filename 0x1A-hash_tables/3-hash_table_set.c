#include "hash_tables.h"

/**
 * hash_table_set - sets a value in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *oldhead;
	unsigned long int hash_index;
	char *vcpy = NULL;

	if (key == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	vcpy = strdup((char *)value);
	node->value = vcpy;
	node->next = NULL;

	hash_index = key_index((const unsigned char *)key, ht->size);

	/* check if value is NULL. if not, make linked list */
	if (ht->array[hash_index] == NULL)
		ht->array[hash_index] = node;
	else
	{
		oldhead = ht->array[hash_index];
		node->next = oldhead;
		ht->array[hash_index] = node;
	}
	return (1);
}
