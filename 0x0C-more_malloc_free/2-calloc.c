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
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	return (ptr);
}
