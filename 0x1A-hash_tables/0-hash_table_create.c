#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **newarray;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	newarray = malloc(sizeof(hash_node_t) * size);
	for (i = 0; i < size; i++)
		newarray[i] = NULL;
	table->array = newarray;
	return (table);
}
