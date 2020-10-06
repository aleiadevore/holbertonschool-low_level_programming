#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: negative, zero, or positive value if s1 is greater than, equal to,
 * or less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (a == b)
	{
		c = 0;
	}
	else
	{
		c = s1 - s2;
	}
	return (c);
}
