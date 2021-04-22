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
	int stepa = sqrt(size - 1), p = 0, size_i = size, spot = size, stepb = 0;

	if (stepa < spot)
		spot = 0;
	while (array[spot] < value && spot < size_i - 1)
	{
		printf("Value checked array[%d] = [%d]\n", spot, array[spot]);
		p = spot;
		stepb += stepa;
		if (p >= size_i)
			return (-1);
		if (stepb < size_i)
			spot = stepb;
		else
			spot = size_i;
	}
	printf("Value found between indexes [%d] and [%d]\n", p, stepb);
	while (array[p] < value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (p == spot)
			return (-1);
		p++;
	}
	if (array[p] == value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		return (p);
	}
	return (-1);

}
