#include <stdio.h>
#include "holberton.h"

/**
* main - Returns largest prime number
*
* description: retruns largest prime number
* return: 0
*/

int main(void)
{
	int b = 3, c = 4019, d = 50829599;

	if (b > c && b > d)
		printf("%d\n", b);
	if (c > b && c > d)
		printf("%d\n", c);
	if (d > b && d > c)
		printf("%d\n", d);
	return (0);
}
