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
	char n = r;

	if (r < 0)
	{
		n  = (n * -1);
	}
	else
	{
		n = n;
	}
	n = (n % 10);
	return (n);
}
