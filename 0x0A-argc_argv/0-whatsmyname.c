#include "holberton.h"
#include <stdio.h>
/**
 * main - gives name of function
 * @pointless: makes compiler happy
 * @argv: name of function
 * Return: 0
 */

int main(int pointless, char *argv[])
{
	pointless = 0;

	printf("%s\n", argv[0]);
	return (pointless);
}
