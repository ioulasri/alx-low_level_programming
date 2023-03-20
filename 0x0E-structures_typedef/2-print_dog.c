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
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->name);
}
