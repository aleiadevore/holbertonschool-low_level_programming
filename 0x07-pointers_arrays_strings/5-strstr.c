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

	while (*haystack != 0 && needle[y] != 0)
	{
		while (haystack[x] != needle[y])
			haystack++;
		x++;
		y++;
	}
	return (haystack);
}
