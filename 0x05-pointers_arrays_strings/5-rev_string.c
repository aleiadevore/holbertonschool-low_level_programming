#include "stdio.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: Void
 */

void rev_string(char *s)
{
	int begin, tmp, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	for (begin = 0; begin <= length; begin++, length--)
	{
		tmp = s[begin];
		s[begin] = s[length];
		s[length] = tmp;
	}
}
