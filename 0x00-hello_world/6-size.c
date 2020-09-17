#include <stdio.h>
/**
* main - Lists sizes of ints
*
* Description: This will print the sizes of char, int, long, long long, and float
*
* Return: 0 at end
*/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %c byte(s)\n", sizeof(int));
	printf("Size of a long int: %c byte(s)\n", sizeof(long));
	printf("Size of a float: %c byte(s)\n", sizeof(long long));
	printf("Size of a char: %c byte(s)\n", sizeof(float));
	return (0);
}
