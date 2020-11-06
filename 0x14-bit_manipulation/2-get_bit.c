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
	char c, bit[32];

	if (n == 0 && index > 0)
		return (-1);
	for (i = 0; i < 32; i++)
		bit[i] = 0;
	for (i = 31; n > 0; i--)
	{
		c = (n % 2) + '0';
		bit[i] = c;
		n /= 2;
	}
	for (i = 0; bit[i] != '1'; i++)
		;
	for (j = 0; j < index; i++, j++)
	{
		if (bit[i] == '\0')
			return (-1);
	}
	if (bit[i] == 48)
		j = 0;
	else if (bit[i] == 49)
		j = 1;
	else
		return (-1);
	return (j);
}
