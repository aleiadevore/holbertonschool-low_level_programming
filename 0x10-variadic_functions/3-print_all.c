#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format of input
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, bool;
	char *ptr;

	va_start(args, format);
	while (format[i] != '\0')
	{
		bool = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			bool += 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			bool += 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			bool += 1;
			break;
		case 's':
			ptr = va_arg(args, char *);
			bool += 1;
			if (!ptr)
			{
				printf("(nil)\n");
				break;
			}
			printf("%s", ptr);
			break;
		default:
			break;
		}
		if (format[i + 1] != '\0' && bool != 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
