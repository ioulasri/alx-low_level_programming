#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_status, write_status;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_status = read(from_fd, buffer, 1024)) > 0)
	{
		write_status = write(to_fd, buffer, read_status);
		if (write_status == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (read_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
		exit(98);
	}
	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}
