#include "holberton.h"

/**
 * puts2 - prints every other line in a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
