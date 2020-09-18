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

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	{
		putchar('\n');
	}
	return (0);
}
