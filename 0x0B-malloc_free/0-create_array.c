#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of memory to print
 * @c: character
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (0);
	}


	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (0);

	while (i < size)
	{
		array[i] = c;
	}

	return (array);
}
