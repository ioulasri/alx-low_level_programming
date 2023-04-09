#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * to flip to get from one number to another
 *
 * @n: first input unsigned long int
 * @m: second input unsigned long int
 *
 * Return: count of bits needed to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res != 0)
	{
		if (xor_res & 1)
			count++;
		xor_res >>= 1;
	}
	return (count);
}
