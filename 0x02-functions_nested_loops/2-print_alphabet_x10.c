#include "holberton.h"

int _putchar(char c);
/**
* print_alphabet_x10 - Prints the alphabet ten times
*
* Description: Uses putchar and a nested while loop to create a table
*
* Return: void
*/

/* use while loop to print 10 times */

void print_alphabet_x10(void)
{
	int b = '0';

	while (b <= '9')
	{
		int a = 'a';

		while (a <= 'z')
		{
			_putchar (a);
			a++;
		}
		_putchar ('\n');
		b++;
	}
}
