#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all programs in directory
 * @ar:
 * @av:
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, buffer = 0; length = 0;
	char *ptr;

	if (ac == 0)
		return (NULL);
	else if (av == NULL)
		return (NULL);

	/*find length of every command*/
	/*allocate size of char times length plus ac(for new lines) plus 1*/
	/*return null if no space*/
	/*nested for loop to create array*/
	/*outer loop works with av[i]*/
	/*inner loop works with buffer*/
	/*each new command(buffer) means a new line*/
	/*final pointer at buffer is a null byte*/
	/*return pointer*/
}
