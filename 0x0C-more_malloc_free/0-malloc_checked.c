#include <stdlib.h>
#include <limits.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}