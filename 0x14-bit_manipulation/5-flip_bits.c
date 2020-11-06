#include "holberton.h"

/**
 * flip_bits - gives number of bits that must be changed to change number
 * @n: first int
 * @m: second int
 * Return: bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count += 1;
	}
	return (count);
}
