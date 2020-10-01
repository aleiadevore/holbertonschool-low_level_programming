#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, spot;

	while (src[length] != '\0')
	{
		length++;
	}
	for (spot = 0; spot <= n; spot++)
		dest[spot] = src[spot];
	return (dest);
}
