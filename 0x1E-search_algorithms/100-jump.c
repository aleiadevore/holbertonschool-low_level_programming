#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches sorted array by 'jumping'
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: pointer to value or -1
*/

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), p = 0, size_i = size, spot = size;

	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	if (step < spot)
		spot = step;
	while (array[spot - 2] < value)
	{
		p = step;
		step += sqrt(size_i);
		if (p >= size_i)
			return (-1);
		if (step < size_i)
			spot = step;
		else
			spot = size_i;
		printf("Value checked array[%d] = [%d]\n", spot, array[spot]);
	}
	printf("Value found between indexes [%d] and [%d]\n", p, p + step);
	while (array[p] < value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		p++;
		if (p == spot)
			return (-1);
	}
	if (array[p] == value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		return (p);
	}
	return (-1);

}
