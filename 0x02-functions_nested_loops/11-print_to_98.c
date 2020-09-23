#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints to 98
 * @n: Beginning number
 *
 * Description: Prints from number n to 98
 *
 * Return: String to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);
			if (n < 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n > 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	else
	{
		printf("%i", n);
	}
	putchar ('\n');
}
