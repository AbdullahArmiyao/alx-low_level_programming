#include "main.h"

/**
 * swap_int - main function
 *
 * @a: pointer to be swapped
 * @b: pointer value to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
