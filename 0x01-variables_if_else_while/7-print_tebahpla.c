#include <stdio.h>
/**
 * main  - prints alphabet
 *
 * Description: prints the alphabet backwards
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	{
		putchar('\n');
	}
	return (0);
}
