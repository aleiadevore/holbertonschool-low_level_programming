#include "holberton.h"

/**
 * set_bit - sets bit
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, j, l, res;
	char c, bit[32];

	l = *n;
	if (l == 0 && index > 0)
		return (-1);
	for (i = 0; i < 32; i++)
		bit[i] = 0;
	for (i = 31; l > 0; i--)
	{
		c = (l % 2) + '0';
		bit[i] = c;
		l /= 2;
	}
	for (j = 0, i = 31; j <= index; j++, i--)
		;
	for (res = 0, i = 0; bit[i] != '\0'; ++i)
		res = res * 10 + bit[i] + '0';
	*n = res;
	return (1);
}
