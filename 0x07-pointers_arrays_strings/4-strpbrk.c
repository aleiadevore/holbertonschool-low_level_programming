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

	for (i = 0; *s != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
			if (s[i] == accept[n])
				break;
		if (accept[n] != '\0')
			return (s);
		else if (accept[n] == '\0' && s[i + 1] == '\0')
			break;
		s++;
	}
	return (0);
}
