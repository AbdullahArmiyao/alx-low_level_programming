#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing dog structure
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		/* assign enough space to hold the dog data */
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
