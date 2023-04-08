#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int started = 0;

    while (mask)
    {
        if ((n & mask) || started || mask == 1)
        {
            _putchar((n & mask) ? '1' : '0');
            started = 1;
        }
        mask >>= 1;
    }
}
