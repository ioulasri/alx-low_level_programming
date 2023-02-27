#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all elements of an array of integers
 * @a: the array
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
	while (a[n])
	{
		printf("%sd\n", a[n]);
		n++;
	}
}
