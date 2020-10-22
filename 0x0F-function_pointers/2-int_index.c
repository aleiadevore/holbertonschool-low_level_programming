#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search within
 * @size: size of array
 * @cmp: function to use
 * Return: -1 on failure, otherwise index of first matching int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, index = 0;

	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 0)
			index += 1;
		else
			break;
	}
	if (index == size)
		return (-1);
	return (index);
}
