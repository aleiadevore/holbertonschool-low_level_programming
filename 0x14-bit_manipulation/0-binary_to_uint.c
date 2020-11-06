#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0, val;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] == 48)
			val = 0;
		else if (b[i] == 49)
			val = 1;
		else
			return (0);
		count = (count * 2) + val;
	}
	return (count);
}
