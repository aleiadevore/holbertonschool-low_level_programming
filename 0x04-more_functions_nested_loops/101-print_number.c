#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * return: void
 */

void print_number(int n)
{
	int a = (n * -1), d = (n / 1000), e = ((n - (d * 1000)) % 100),
	b = (n / 100), c = (n % 100);

	if (n < 10 && n > -10)
		_putchar('0' + n);
	if (n >= 10 && n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	if (n <= -10 && n > -100)
	{
		_putchar('-');
		_putchar('0' + a / 10);
		_putchar('0' + a % 10);
	}
	if (n >= 100 && n < 1000)
	{
		_putchar('0' + b);
		_putchar('0' + c / 10);
		_putchar('0' + c % 10);
	}
	if (n <= -100 && n > -1000)
	{
		_putchar('-');
		_putchar('0' + -b);
		_putchar('0' + (-c) / 10);
		_putchar('0' + (-c) % 10);
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar('0' + d);
		_putchar('0' + e);
		_putchar('0' + c / 10);
		_putchar('0' + c % 10);
	}
}
