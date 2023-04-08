#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);
	
	mask = n >> index;
	return (mask & 1);
}
