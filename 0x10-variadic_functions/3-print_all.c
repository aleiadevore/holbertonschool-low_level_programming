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
	unsigned int i = 0, b;
	char *ptr;

	while (format)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			b = 0;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				ptr = va_arg(args, char *);
				if (!ptr)
				{
					printf("(nil)\n");
					break;
				}
				printf("%s", ptr);
				break;
			default:
				b = 1;
				break;
			}
			if (b != 1 && format[i + 1] != '\0')
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
