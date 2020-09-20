#include <stdio.h>
/**
 * main  - prints numbers
 *
 * Description: prints list of numbers with commas
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 99 ; a++)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');

		if (a < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
