#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n:Length of line
 * Return: Void
 */

void print_diagonal(int n)
{
	int row;
	char s;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (s = 0; s <= row; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
