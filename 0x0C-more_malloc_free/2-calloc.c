#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: bytes of each element
 * Return: pointer to array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size * sizeof(unsigned int));
	if (!ptr)
		return (NULL);
	for (x = 0; x < nmemb; x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}
