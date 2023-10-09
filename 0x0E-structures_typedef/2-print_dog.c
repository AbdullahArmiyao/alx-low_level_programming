#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints struct dog
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		return (nil);
	if (d->age == NULL)
		return (nil);
	if (d->owner == NULL)
		return (nil);

	return (d);
}
