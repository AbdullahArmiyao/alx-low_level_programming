#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr_ran, i = 0, range;

	/* check if min > max and return null if so */
	if (min > max)
		return (NULL);

	/* calculate the range */
	range = max - min + 1;


	/* allocate memory to arr */
	arr_ran = malloc(sizeof(int) * range);

	/* check if malloc failed */
	if (arr_ran == NULL)
		return (NULL);

	/* containing all the values from min to max in that order */
	while (i < range)
	{
		arr_ran[i] = min + i;
		i++;
	}
	return (arr_ran);
}
