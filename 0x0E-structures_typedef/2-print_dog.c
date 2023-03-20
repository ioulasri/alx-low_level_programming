#include "dog.h"
#include <stdlib>
#include <stdio.h>

/**
 * print_dog - prints the information about a given dog struct
 * @d: pointer to struct dog to initialize
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
