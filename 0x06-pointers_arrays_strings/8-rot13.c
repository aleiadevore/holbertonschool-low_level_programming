#include "holberton.h"

/**
 * rot13 - encrypts using rot13
 * @str: string to encrypt
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if ((str[c] >= 65 && str[c] <= 77) || (str[c] >= 97 && str[c]
						       <= 109))
			str[c] = str[c] + 13;
		else if ((str[c] >= 78 && str[c] <= 90) || (str[c] >= 110 &&
							    str[c] <= 122))
			str[c] = str[c] - 13;
		else
			str[c] = str[c];
	}
	return (str);
}
