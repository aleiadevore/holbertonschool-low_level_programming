#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: full string
 * @accept: string within s
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, place, count = 0;

	for (place = 0; accept[place] != '\0'; place++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[place] == s[i])
				count++;
		}
	}
	return (count);
}
