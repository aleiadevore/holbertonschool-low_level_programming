#include "holberton.h"

/**
 * set_bit - sets bit
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, j, l, count = 0, val;
	char c, bit[32];

	if (index > 32)
		return (-1);
	l = *n;
	for (i = 0; i < 32; i++)
		bit[i] = 0;
	for (i = 31; l > 0; i--)
	{
		c = (l % 2) + '0';
		bit[i] = c;
		l /= 2;
	}
	j = 31 - index;
	bit[j] = '1';
	for (i = 0; bit[i] != '1'; i++)
		;
	for (; i < 32; i++)
	{
		if (bit[i] == 48)
			val = 0;
		else if (bit[i] == 49)
			val = 1;
		else
			return (-1);
		count = (count * 2) + val;
	}
	*n = count;
	return (1);
}
