#include "holberton.h"

/**
 * _strncpy - copies string to n
 * @dest: destination
 * @src: source
 * @n: length
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, spot;

	while (src[length] != '\0')
	{
		length++;
	}
	for (spot = 0; spot <= n && spot <= length; spot++)
		dest[spot] = src[spot];
	return (dest);
}
