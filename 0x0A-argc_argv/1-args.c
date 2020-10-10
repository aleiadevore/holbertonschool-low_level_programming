#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int count = argc;

	if (argc != 0)
	count--;
	printf("%d\n", count);
	return (0);
}
