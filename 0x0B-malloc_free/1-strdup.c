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

	ptr = malloc(sizeof(str) + 1);
	for (x = 0; x <= sizeof(str); x++)
	{
		ptr[x] = str[x];
	}
	ptr[x + 1] = '\0';
	return (ptr);
}
