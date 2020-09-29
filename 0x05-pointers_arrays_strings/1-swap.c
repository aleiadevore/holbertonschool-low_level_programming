#include "holberton.h"

/**
 * swap_int - swaps values of integers
 * @a: points to first integer
 * @b: points to second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *c;
	int n = *a;

	c = &n;
	*a = *b;
	*b = *c;
}
