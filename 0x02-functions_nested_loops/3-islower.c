#include "holberton.h"

int _putchar(char c);
/**
 * _islower - Checks value of c
 * @c: Character that is either upper or lowercase
 * Description: Outputs 1 if c is lowercase and 1 if not
 *
 * Return: c
 */

/* Will need boolean since checking true or false */


int _islower(int c)
{
/* Use if statement to say if it is greater or less than 90 */
	if (c > 90)
	{
		return (1);
	}
	if (c <= 90)
	{
		return (0);
	}
	return (c);
}
