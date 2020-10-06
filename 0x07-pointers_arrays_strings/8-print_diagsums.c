#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int r, c, tota = 0, totb = 0;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
/* left to right diags equal each other */
			if (r == c)
				tota += *((a + r * size) + c);
/* right to left equal size - 1 */
			if (r + c == size - 1)
				totb += *((a + r * size) + c);
		}
	}
	printf("%d, ", tota);
	printf("%d\n", totb);
}
