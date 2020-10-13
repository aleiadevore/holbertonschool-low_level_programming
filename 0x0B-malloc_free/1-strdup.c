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

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x <= length; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
