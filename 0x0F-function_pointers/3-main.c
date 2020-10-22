#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result or failing exit statement
 */

int main(int argc, char **argv)
{
	int x, y;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (y == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(argv[2]);
	printf("%d\n", res(x, y));
	return (0);
}
