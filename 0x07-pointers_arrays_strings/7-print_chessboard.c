#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: row
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, n = 0;

	for (i = 0; a[i][0] != '\0';)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
		i++;
	}
}
