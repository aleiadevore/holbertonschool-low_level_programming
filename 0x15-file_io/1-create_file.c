#include "holberton.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: NULL terminating string to write to file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			j = write(fd, text_content, 1);
			text_content++;
			if (j == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
