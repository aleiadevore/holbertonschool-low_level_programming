#include "holberton.h"

/**
 * main - copies contents of one file to another
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 1 on success and -1 on failure
 */

int main(int ac, char **av)
{
	int fd1, fd2, f;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], 010);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[1], O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	dup2(fd1, fd2);
	f = close(fd1);
	if (f == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	f = close(fd2);
	if (f == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
