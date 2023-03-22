#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exe function given as a parameter on each element in array.
 * @array: the array to print
 * @size: thr size of the array
 * @action: the pointer to function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
