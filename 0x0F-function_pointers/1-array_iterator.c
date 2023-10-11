#include "function_pointers.h"

/**
 * array_iterator - function to execute function on each element of an array
 *
 * @array: the array
 * @size: array size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	/* chaeck if pointer, size, and array are null */
	if (array == NULL || action == NULL)
		return;

	/* call the function to run on each element of the array */
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
