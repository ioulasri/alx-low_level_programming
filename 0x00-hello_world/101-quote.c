#include <unistd.h>

/**
 * main - print a line using write
 * Description : looping through characters
 * and printing each one
 * Return: 0 if worked, non-zero otherwise
 */

int main(void)
{
    char line[65] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int i;
    
    i = 0;
    while (i < 65)
    {
        write(1, &line[i], 1);
        i++;
    }

    return (0);
}