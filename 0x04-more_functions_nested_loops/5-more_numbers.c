#include "holberton.h"

/**
 * more_numbers - prints numbers 0-9 ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int row, col, b, c;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			b = col / 10;
			c = col % 10;
/* Need to rewrite so it only uses three putchars */
			if (col > 9)
			{
				_putchar('0' + b);
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
