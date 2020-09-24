#include "holberton.h"

/**
 * _isupper - Checks if c is an uppercase letter
 * @c: Character to check
 * Return: 1 if true
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
