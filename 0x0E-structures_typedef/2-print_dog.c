#include "dog.h"
#include <stdlib>
#include <stdio.h>

/**
 * print_dog - prints the information about a given dog struct
 * @d: pointer to struct dog to initialize
 */

void print_dog(struct dog *d)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	printf("Name: %s\n", d->name);
	printf("Name: %e\n", d->age);
	printf("Name: %s\n", d->name);
}
