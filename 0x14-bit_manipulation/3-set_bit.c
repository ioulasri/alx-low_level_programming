#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64 || !n)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
