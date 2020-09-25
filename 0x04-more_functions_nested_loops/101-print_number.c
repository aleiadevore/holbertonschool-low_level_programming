#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * return: void
 */

void print_number(int n)
{
	int a;

	if (n < 10 && n > -10)
		_putchar('0' + n);
	if (n >= 10 && n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	if (n <= -10 && n > -100)
	{
		a = (n * -1);

		_putchar('-');
		_putchar('0' + a / 10);
		_putchar('0' + a % 10);
	}
}
