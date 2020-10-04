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
	int srclength = 0, destlength = 0, i;

	while (src[srclength] != '\0')
		srclength++;
	while (dest[destlength] != '\0')
		destlength++;
	for (i = 0 ; i <= srclength && i < n; i++)
		dest[destlength + i] = src[i];
	dest[destlength + i] = '\0';

	return (dest);
}
