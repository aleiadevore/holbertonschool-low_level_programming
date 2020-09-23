#include "holberton.h"

int _putchar(char c);
/**
 * times_table - Prints a times table by 9
 *
 * Description: Creates a table with each line ending in a multiple of 9
 *
 * Return: void
 */

void times_table(void)
{
/*for loop 10*/
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			d = c / 10;
			e = c % 10;
			c = a * (b + 1);

			if (d != 0)
				_putchar('0' + d);
			_putchar('0' + e);
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
					_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
