#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * return: void
 */

void print_triangle(int size)
{
	int row, spc, hash, columns;

	columns = size - 1;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (spc = 0; spc < columns; spc++)
			{
				_putchar(' ');
			}
			columns--;

			for (hash = 0; hash <= row; hash++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
