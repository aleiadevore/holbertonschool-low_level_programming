#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x] != 0)
	{
		while (needle[y] != 0)
		{
			if (haystack[x + y] != needle[y])
			    break;
			y++;
		}
		if (needle[y] == 0)
			return (haystack + x);
		x++;
	}
	return (0);
}
