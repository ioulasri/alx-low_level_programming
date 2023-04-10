#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL) {
        return 0;
    }
    
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }
    char *buffer = malloc(letters);

    if (buffer == NULL) {
        close(fd);
        return 0;
    }

    ssize_t total_bytes_read = 0;
    ssize_t bytes_read;

    while (total_bytes_read < letters)
    {
        bytes_read = read(fd, buffer + total_bytes_read, letters - total_bytes_read);
        if (bytes_read == 0)
            break;
        else if (bytes_read == -1) 
        {
            free(buffer);
            close(fd);
            return 0;
		}
        else
            total_bytes_read += bytes_read;
    }

    if (write(STDOUT_FILENO, buffer, total_bytes_read) != total_bytes_read)
    {
        free(buffer);
        close(fd);
        return 0;
    }
    free(buffer);
    close(fd);
    return total_bytes_read;
}

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
