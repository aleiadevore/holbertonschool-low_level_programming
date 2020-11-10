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
	int fd, j;
	char *buff;
	size_t i;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 2);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	j = read(fd, buff, letters);
		if (j == -1)
		{
			close(fd);
			return (0);
		}
	for (i = 0; i <= letters && buff[i] != '\0'; i++)
	{
		j = _putchar(buff[i]);
		if (j == -1)
		{
			close(fd);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (i);
}
