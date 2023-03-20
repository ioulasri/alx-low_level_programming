#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intiliaze a variable of type dog
 * @d: the struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
