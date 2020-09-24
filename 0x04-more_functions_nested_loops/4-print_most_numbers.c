#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9 that are not 2 or 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar('0' + i);
	}
	_putchar('\n');
}
