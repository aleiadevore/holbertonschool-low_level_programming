#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to duplicate
 * Return: pointer or null if null
 */

char *_strdup(char *str)
{
	unsigned int x;
	char  *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(str) + 1);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x <= sizeof(str); x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
