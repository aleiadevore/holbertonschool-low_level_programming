#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	return (s);
}
