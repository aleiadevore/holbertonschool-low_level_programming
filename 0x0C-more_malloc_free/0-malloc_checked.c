#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates space for pointer
 * @b: pointer needing memory
 * Return: pointer or 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = calloc(b, sizeof(unsigned int));
	if (!ptr)
	{
		exit(98);
	}
	return(ptr);
}
