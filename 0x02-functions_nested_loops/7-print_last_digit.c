#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @r: Integer
 * Description: Prints the last digit of a number
 *
 * Return: Last digit
 */

int print_last_digit(int r)
{
	r = (r % 10);
	if (r < 0)
	{
		r  = (r * -1);
	}
	_putchar ('0' + r);
	return (r);
}
