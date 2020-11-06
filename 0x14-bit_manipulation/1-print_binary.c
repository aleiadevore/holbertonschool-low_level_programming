#include "holberton.h"

/**
 * print_binary - prints binary value of int
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int y;

	if (n > 1)
		print_binary(n >> 1);
	y = (n & 1);
	_putchar(y + '0');
}
