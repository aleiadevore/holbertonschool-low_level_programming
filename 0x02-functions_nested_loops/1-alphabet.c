#include "holberton.h"

int _putchar(char c);
/**
* print_alphabet - Prints the alphabet
*
* Description: Uses _putchar to print the alphabet
*
* Return: Void
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
