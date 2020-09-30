#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints elements of array to n
 * @a: array
 * @n: element
 * Return: void
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (e != n - 1)
			printf("%d, ", a[e]);
		else
			printf("%d", a[e]);
	}
	putchar('\n');
}
