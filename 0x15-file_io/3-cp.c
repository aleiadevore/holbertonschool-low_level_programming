#include "holberton.h"

/**
 * main - copies contents of one file to another
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 1 on success and -1 on failure
 */

int main(int ac, char **av)
{
	int fd1, fd2, f, check;
	char buff[1024];

	for (f = 0; f <= 1024; f++)
		buff[f] = '\0';
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDWR, 0664);
	check = read(fd1, buff, 1024);
	if (fd1 == -1 || check == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	check = write(fd2, buff, 1024);
	if (fd2 == -1 || check == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	f = close(fd1);
	if (f == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", av[1]);
		exit(100);
	}
	f = close(fd2);
	if (f == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", av[2]);
		exit(100);
	}
	return (1);
}
