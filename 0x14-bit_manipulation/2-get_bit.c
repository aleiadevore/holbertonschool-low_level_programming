#include "holberton.h"

/**
 * get_bit - gets bit at index
 * @n: integer
 * @index: index
 * Return: bit or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;
	char k, c, bit[64];

	if (index > 64)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);
	for (i = 0; i < 64; i++)
		bit[i] = 0;
	for (i = 63; n > 0; i--)
	{
		c = (n % 2) + '0';
		bit[i] = c;
		n /= 2;
	}
	for (j = 0, i = 63; j <= index; j++, i--)
		k = bit[i];
	if (k == 48)
		j = 0;
	else if (k == 49)
		j = 1;
	else
		return (-1);
	return (j);
}
