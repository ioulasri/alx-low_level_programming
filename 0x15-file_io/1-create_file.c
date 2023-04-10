#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_write, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		n_write = write(fd, text_content, i);
		if (n_write == -1 || n_write != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
