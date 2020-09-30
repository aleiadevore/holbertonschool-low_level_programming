#include "holberton.h"

/**
 * _strcpy - copies string to buffer
 * @dest: destination
 * @src: source
 * Return: destination value
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, spot;

	while (src[length] != '\0')
	{
		length++;
	}
	for (spot = 0; spot < length; spot++)
		dest[spot] = src[spot];
        return (dest);
}
