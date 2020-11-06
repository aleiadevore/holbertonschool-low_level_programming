#include "holberton.h"

/**
 * set_bit - sets bit
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == NULL)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
