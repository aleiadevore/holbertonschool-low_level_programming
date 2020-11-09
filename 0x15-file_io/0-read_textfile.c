#include "holberton.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file
 * @filename: file to open
 * @letters: number of letters to print
 * Return: letters printed or -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[2020];
	size_t i;

	if (filename == NULL)
		return (0);
	fd = open(filename, 010);
	if (fd == -1)
		return (0);
	read(fd, buff, letters);
	for (i = 0; i <= letters && buff[i] != '\0'; i++)
		putchar(buff[i]);
	close(fd);
	return (i);
}
