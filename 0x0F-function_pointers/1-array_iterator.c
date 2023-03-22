#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - exe function given as a parameter on each element in array.
 * @array: the array to print
 * @size: thr size of the array
 * @action: the pointer to function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
