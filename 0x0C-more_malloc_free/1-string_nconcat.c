#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of string 2 to copy
 * Return: pointer to string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, x, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = (len2 + 1);
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		ptr[x] = s1[x];
	for (y = 0; y < n; y++, x++)
		ptr[x] = s2[y];
	ptr[x] = '\n';
	return (ptr);
}
