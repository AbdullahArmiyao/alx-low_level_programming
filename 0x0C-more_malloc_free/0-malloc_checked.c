#include "main.h"

/**
 * malloc_checked - function that allocates memory
 *
 * @b: size in bytes
 *
 * Return: pointer to allocated memory on success, and 98
 * on failure
 */

void *malloc_checked(unsigned int b)
{
	/* pointer to hold address of allocated memory */
	unsigned int *pnt;

	/* allocate memory size of b bytes and assign to the pnt variable */
	pnt = malloc(b);

	/* check if memory allocation failed */
	if (pnt == NULL)
		return ((void *)98);

	/* return pnt which holds allocated memory address */
	return (pnt);
}
