#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n: integer
 * @y: root
 * Return: natural square root or -1 if there is no square root
 */

int root(int n, int y);

int _sqrt_recursion(int n)
{
	int y;

	y = root(n, 1);
	if (n == 1)
		return (1);
	return (y);
}
/**
 * root - returns square root of n
 * @n: integer
 * @y: square root
 * Return: -1 if no square root, else returns square root
 */
int root(int n, int y)
{

	if (n == y * y)
		return (y);
	else if (y >= (n / 2) && y * y != 0)
		return (-1);
	else
		return (y = root(n, (y + 1)));
}
