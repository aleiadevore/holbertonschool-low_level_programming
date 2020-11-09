#include "holberton.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: NULL terminating string to write to file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	while (*text_content != '\0')
	{
		write(fd, text_content, 1);
		text_content++;
	}
	close(fd);
	return (1);
}
