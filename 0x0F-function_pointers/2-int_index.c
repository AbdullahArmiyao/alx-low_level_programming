#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * 
 * @array: array
 * @size: array size
 * @cmp: pointer to function that compares values
 *
 * Return: -1 if size <= 0 or no element matches
 * and the index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	/* check if pointers are NULL */
	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
