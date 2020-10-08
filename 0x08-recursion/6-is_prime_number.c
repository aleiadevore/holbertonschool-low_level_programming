#include "holberton.h"

/**
 * is_prime_number - determines if integer is a prime number
 * @n: integer
 * @y: dividend
 * Return: 1 if prime number, 0 if not
 */

int prime(int n, int y);

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
		n = prime(n, 2);
		if (n > 0)
			return (1);
		else if (n == 0)
			return (0);
		else
			return (0);
}
/**
 * prime - returns lowest dividend of n
 * @n: number
 * @y: dividend
 * Return: lowest dividend
 */

int prime(int n, int y)
{
	if (y >= n)
		return (1);
	else if (n % y == 0)
		return (0);
	else if (y * y == n)
		return (0);
	else
		return (prime(n, y + 1));
}
