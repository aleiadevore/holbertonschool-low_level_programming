#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int last = 0;

	while (s[last] != '\0')
	{
		last++;
	}
	last--;
	while (last >= 0)
	{
		_putchar(s[last]);
		last--;
	}
	_putchar('\n');
}
