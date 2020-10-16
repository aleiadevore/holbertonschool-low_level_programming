#include "holberton.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _realloc - reallocates memory for string
 * @ptr: old pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to string or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (old_size >= new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		free(ptr);
		return (new);
	}
	new = malloc(new_size);
	_memcpy(new, ptr, old_size);
	free(ptr);
	return (new);
}
