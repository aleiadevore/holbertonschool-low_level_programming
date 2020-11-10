#include "holberton.h"

/**
 * closefd - closes files
 * @fd: file descriptor
 * @buff: buffer
 * Return: value of file descriptor
 */

int closefd(int fd, char *buff)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		free(buff);
		dprintf(2, "Error: Can't close fd %dn", f);
		exit(100);
	}
	return (f);
}

/**
 * checkfail - checks fails
 * @fd: file descriptor
 * @check: check value
 * @str: string to print
 * @buff: buffer
 * @av: command
 * Return: fd
 */

int checkfail(int fd, int check, char *str, char *buff, char *av)
{
	if (fd == -1 || check == -1)
	{
		free(buff);
		dprintf(2, "Error: Can't %s %s\n", str, av);
		exit(99);
	}
	return (fd);
}

/**
 * main - copies contents of one file to another
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 1 on success and -1 on failure
 */

int main(int ac, char **av)
{
	int fd1, fd2, f, check;
	char *buff;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(1024 * sizeof(char));
	if (!buff)
		return (-1);
	for (f = 0; f < 1024; f++)
		buff[f] = '\0';
	fd1 = open(av[1], O_RDWR, 0664);
	check = read(fd1, buff, 1024);
	checkfail(fd1, check, "read", buff, av[2]);
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	check = write(fd2, buff, 1024);
	checkfail(fd2, check, "write to", buff, av[2]);
	closefd(fd1, buff);
	closefd(fd2, buff);
	free(buff);
	return (1);
}
