#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns sum of numbers given
 * @argc: number of commands
 * @argv: array of commands
 * Return: 0 if success 1 if error
 */

int main(int argc, char **argv)
{
	int count, sum = 0;

/*if no number print 0 and new line*/
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{

/*if symbol that not number print Error new line and return 1*/
		if ((*argv[count] < 48 || *argv[count] > 57)
		    && *argv[count] != 45)
		{
			printf("Error\n");
			return (1);
		}

/*else print sum and return 0*/
		else
		{
			sum += atoi(argv[count]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
