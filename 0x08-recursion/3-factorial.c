#include "holberton.h"

/**
 * factorial - returns factorial
 * @n: number
 * Return: -1 for error, else factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
