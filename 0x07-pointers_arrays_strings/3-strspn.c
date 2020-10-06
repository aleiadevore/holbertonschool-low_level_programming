#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: full string
 * @accept: string within s
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, place;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (place = 0; accept[place] != '\0'; place++)
		{
			if (accept[place] == s[i])
				break;
		}
		if (accept[place] == '\0')
			break;
	}
	return (i);
}
