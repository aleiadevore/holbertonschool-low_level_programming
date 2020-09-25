#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: Size of square
 * Return: Void
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
