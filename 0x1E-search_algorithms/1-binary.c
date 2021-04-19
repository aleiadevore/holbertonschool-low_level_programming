#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for int in array by dividing in half
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, half, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		/* printing segment of array being checked */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		/* divide and check */
		half = left + (right - left) / 2;

		if (array[half] == value)
			return (half);
		if (array[half] < value)
			left = half + 1;
		else
			right = half - 1;
	}
	return (-1);
}
