#include "holberton.h"

/**
 * _strlen_recursion - returns string length using recursion
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);
	length = (_strlen_recursion(s + 1) + 1);
	return (length);
}
