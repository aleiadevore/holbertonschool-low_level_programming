#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as element of array
 * @array: name of array
 * @size: size
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x <= size; x++)
	{
		action(array[x]);
	}
}
