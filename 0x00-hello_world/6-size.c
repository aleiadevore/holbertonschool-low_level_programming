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
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longsize = sizeof(long);
	int longlongsize = sizeof(long long);
	int floatsize = sizeof(float);

	printf("Size of a char: %c byte(s)\n", charsize);
	printf("Size of an int: %c byte(s)\n", intsize);
	printf("Size of a long int: %c byte(s)\n", longsize);
	printf("Size of a float: %c byte(s)\n", longlongsize);
	printf("Size of a char: %c byte(s)\n", floatsize);
	return (0);
}
