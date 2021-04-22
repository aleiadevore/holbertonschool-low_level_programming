#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * real_binary - searches for int in array by dividing in half
 * @arr: array to search
 * @l: left side of array
 * @r: right side of array
 * @v: value to find
 * Return: index of value or -1
 */

int real_binary(int *arr, int l, int r, int v)
{
	int i;

	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", arr[i]);
		printf("%d\n", arr[r]);
		if (arr[mid] == v)
			return (mid);

		if (arr[mid] > v)
			return (real_binary(arr, l, mid - 1, v));

		return (real_binary(arr, mid + 1, r, v));
	}

	return (-1);
}

/**
 * advanced_binary - searches for int in array by dividing in half
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int right = size - 1;

	if (array == NULL)
		return (-1);
	return (real_binary(array, 0, right, value));
}
