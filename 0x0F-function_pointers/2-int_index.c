#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the pointer to function used to find the integer
 * Return: return -1 if size <= 0 or if array is NULL
 * or cmp is NULL, index of integer otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
