#include <stdio.h>
#include <unistd.h>

/**
 * main - prints string
 * Return: standard error
 *
 */

int main(void)
{
	/*find length of array*/
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		/*use write command like they use in putchar file*/
	write(2, str, sizeof(str) - 1);
	return (1);
}
