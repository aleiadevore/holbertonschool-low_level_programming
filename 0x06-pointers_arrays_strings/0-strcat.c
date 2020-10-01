#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int srclength = 0, destlength = 0, i;

	while (src[srclength] != '\0')
		srclength++;
	while (dest[destlength] != '\0')
		destlength++;
	for (i = 0 ; i < srclength && src[i] != '\0' ; i++)
		dest[srclength + i] = src[i];
	dest[destlength + i] = '\0';

	return (dest);
}
