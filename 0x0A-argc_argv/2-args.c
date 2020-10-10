#include "holberton.h"
#include <stdio.h>

/**
 * main - prints each command on a new line
 * @argc: number of commands
 * @argv: array of commands
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
