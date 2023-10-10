#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees memory occupied by dog
 * @d: dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* free the memory allocated for name and owner */
	free(d->name);
	free(d->owner);
	/* free the memory allocated for the dog struct itself */
	free(d);
}
