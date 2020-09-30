#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0, half;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;
	while (half <= length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
