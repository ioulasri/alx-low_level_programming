#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read, write, open;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);

	if (open == -1 || read == -1 || write == -1 || read != write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open);
	return (write);
}
