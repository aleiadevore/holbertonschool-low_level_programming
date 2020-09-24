#include "holberton.h"

/**
 * _isdigit - Checks if c is a numer
 * @c: Character to check
 * Return: Always 1 if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
