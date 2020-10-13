#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to duplicate
 * Return: pointer or null if null
 */

char *_strdup(char *str)
{
	unsigned int x, length;
	char  *ptr;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(length + 1) * sizeof(x));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		*(ptr + x) = *(str + x);
	}
	*(ptr + x) = *(str + x);
	return (ptr);
}
