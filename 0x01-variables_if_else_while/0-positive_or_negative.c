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
	if( n > 0 ) {
		puts("$n is negative\n" );
	} else if( n == 0 ) {
		puts("$n is zero\n" );
	} else {
puts("$n is positive\n" );
	}
	return (0);
}
