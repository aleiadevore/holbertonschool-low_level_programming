#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: string to print
 * @n: elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int begin, tmp;

	n--;
	for (begin = 0; begin < n; begin++, n--)
	{
		tmp = a[begin];
		a[begin] = a[n];
		a[n] = tmp;
	}
}
