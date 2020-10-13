#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on fail, else pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, x = 0, y = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (x < len1)
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y <= len2)
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}

	return (ptr);
}
