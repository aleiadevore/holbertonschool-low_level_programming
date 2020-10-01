#include "holberton.h"

/**
 * _strncat - appends string to n
 * @dest: destination string
 * @src: source string
 * @n: length to copy
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclength = 0, i;

	while (src[srclength] != '\0')
		srclength++;
	srclength--;
	for (i = 0 ; i <= n && src[i] != '\0' ; i++)
		dest[srclength + i] = src[i];
	dest[srclength + i] = '\0';
	return (dest);
}
