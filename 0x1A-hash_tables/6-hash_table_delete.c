#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned int i;
	/**
	 * Go through each element of hash table.
	 * Free linked list
	 * Free array
	 * Free hash table
	 */

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (node = ht->array[i]; node != NULL;)
			{
				tmp = node->next;
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
