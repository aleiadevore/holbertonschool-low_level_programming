#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints numbers 1-100 with fizz and buzz replacing
 * multiples of 3 and 5
 *
 * Return: Void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", i);
	}

	putchar('\n');
	return (0);
}
