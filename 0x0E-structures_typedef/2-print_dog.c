#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints struct dog
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	/* if d is empty, print nothing */
	if (d == NULL)
		return;

	/* print dog name but if null, print nil */
	printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));

	/* if the age is not less than 0, print it, else print nil */
	if (d->age >= 0.0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");

	/* print owner name but if null, print nil */
	printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
}
