#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;
	int b = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (node = ht->array[i]; node != NULL; node = node->next)
			{
				if (node->key != NULL && node->value != NULL)
				{
					if (b == 0)
						printf("'%s': '%s'", node->key, node->value);
					else
						printf(", '%s': '%s'", node->key, node->value);
				}
				b++;
			}
		}
	}
	printf("}\n");
}
