#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, op;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || re != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
