#include "holberton.h"

int _putchar(char c);
/**
 * _abs - Checks absolute value
 * @r: Integer
 * Description: Checks absolute value of an integer
 *
 * Return: c
 */


int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	if (r < 0)
	{
		return (r * -1);
	}
	return (0);
}
