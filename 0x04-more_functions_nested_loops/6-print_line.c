#include "holberton.h"

/**
 * print_line - Prints a line
 * @n: length of line
 * Return: A line
 */

void print_line(int n)
{
	char a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
