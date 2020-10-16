#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - allocates an array of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: pointer or NULL on failure
 */

int *array_range(int min, int max)
{
	int *ptr, x, len;

	if (min > max)
		return (NULL);
	for (x = min, len = 0; x <= max; x++)
		len++;
	ptr = malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);
	for (x = 0; x <= len; x++)
	{
		ptr[x] = min + x;
	}
	return (ptr);
}
