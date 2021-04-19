#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for value in array of ints
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i, size_i = size;

	for (i = 0; i < size_i; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
