#include "holberton.h"

/**
 * _strpbrk - places pointer at first matching character
 * @s: string to be evaluated
 * @accept: string to match
 * Return: pointer s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n = 0;

	if (*accept != 0 && *s != 0)
	{
		for (i = 0; *s != '\0' && *s != accept[n]; i++)
		{
			for (n = 0; s[i] != accept[n] && accept[n] != '\0'; n++)
				;
			s++;
		}
		return (s);
	}
	else
	{
		return (0);
	}
}
