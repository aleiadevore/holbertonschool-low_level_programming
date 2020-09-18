#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main  - Says if n is positive or negative
*
* Description: Creates random number n and says if it is positive or negative
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* check the boolean condition */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
