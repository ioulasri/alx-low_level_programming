#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = 0;

	while (mask <= n)
	{
		mask <<= 1;
		size++;
	}

	if (size)
		mask >>= 1;

	while (mask)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
