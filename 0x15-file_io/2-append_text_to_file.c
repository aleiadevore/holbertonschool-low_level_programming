#include "holberton.h"

/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: content to append
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
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
