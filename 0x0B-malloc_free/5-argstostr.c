#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all programs in directory
 * @ac: number of commands
 * @av: array of commands
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, buffer = 0, length = 0;
	char *ptr;

	if (ac == 0)
		return (NULL);
	else if (av == NULL)
		return (NULL);

	/*find length of every command*/
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
	}
	/*allocate size of char times length plus ac(for new lines) plus 1*/
	ptr = malloc(sizeof(char) * length + ac + 1);
	/*return null if no space*/
	if (!ptr)
		return (NULL);
	/*nested for loop to create array*/
	for (i = 0; av[i] != '\0'; i++, buffer++)
	{
		for (j = 0; av[i][j] != '\0'; j++, buffer++)
			ptr[buffer] = av[i][j];
/*each new command(buffer) means a new line*/
		ptr[buffer] = '\n';
}
	/*final pointer at buffer is a null byte*/
	ptr[buffer] = '\0';
	/*return pointer*/
	return (ptr);
}
