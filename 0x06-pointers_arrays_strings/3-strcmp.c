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

	while (s1[a] == s2[b])
	{
		if (s1[a] == '\0' || s2[b] == '\0')
			break;
		a++, b++;
	}
	c = s1[a] - s2[b];
	return (c);
}
