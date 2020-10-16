#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory for string
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to string or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *new;

	if (old_size >= new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		exit(98);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	return (ptr);
}
