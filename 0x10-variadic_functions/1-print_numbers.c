#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: char to print between numbers
 * @n: parameter
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int seplen, j;

	for (seplen = 0; separator[seplen] != '\0'; seplen++)
		;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1) && separator != NULL)
		{
			for (j = 0; j < seplen; j++)
				printf("%c", separator[j]);
		}
	}
	printf("\n");
}
