#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to print
 * Return: 0 if empty, else pointer
 */

char *create_array(unsigned int size, char c)
{
	char  *ptr;
	unsigned int x;

	if (size == 0)
		return (0);
	ptr = malloc((size * 3) + 1);
	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
