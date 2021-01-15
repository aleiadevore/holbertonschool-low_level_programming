#include "hash_tables.h"

/**
 * key_index - returns index of key in hash table
 * @key: key to find
 * @size: size of array
 * Return: index of key in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;

	return (hash);
}
