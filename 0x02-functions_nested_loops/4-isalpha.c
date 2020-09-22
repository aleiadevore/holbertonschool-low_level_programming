#include "holberton.h"

/**
 * _isalpha - Checks value of c
 * @c: Character that may be an alpha
 * Description: Outputs 1 if c is alpha and 1 if not
 *
 * Return: c
 */


int _isalpha(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
