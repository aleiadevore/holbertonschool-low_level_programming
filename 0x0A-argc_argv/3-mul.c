#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of two numbers
 * @argc: length of array
 * @argv: array of commands
 * Return: 0 if no errors, 1 if errors
 */

int main(int argc, char **argv)
{
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
