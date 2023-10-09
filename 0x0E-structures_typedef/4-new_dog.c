#include "dog.h"
#include <stdlib.h>

/**
 * str_len - string length function
 * @s: string
 * Return: len
 */

unsigned int str_len(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * str_cpy - string copy function
 * @destination: destination buffer
 * @source: source buffer
 * Return: new_string
 */

char *str_cpy(char *destination, const char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

/**
 * new_dog - function to define a new struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* allocate memory for dog_t struct */
	dog_t *dog = malloc(sizeof(dog_t));

	/* check if malloc failed */
	if (dog == NULL)
		return (NULL);

	/* allocate memory for name and owner */
	dog->name = malloc(sizeof(char) * (str_len(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));

	if (d->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
