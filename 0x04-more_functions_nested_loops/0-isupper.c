#include "holberton.h"

/**
 * _isupper - Checks if c is an uppercase letter
 * @c: Character to check
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
