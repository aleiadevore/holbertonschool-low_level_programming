#include "holberton.h"

int _putchar(char c);
/**
 * print_sign - Prints sign of number
 * @n: Number
 * Description: Checks 'n' and prints the sign
 *
 * Return: n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
