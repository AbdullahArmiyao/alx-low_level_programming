#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: NULL if size or nmemb is 0 and mat if successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *mat;
	unsigned int i = 0, t_size;

	/* check if nmemb or size is empty */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*calculate the total size to allocate */
	t_size = sizeof(unsigned char) * nmemb * size;

	/* allocate memory to mat */
	mat = malloc(t_size);

	/* check if memory allocation failed */
	if (mat == NULL)
		return (NULL);

	/* manually set the memory to 0 */
	while (i < t_size)
	{
		mat[i] = 0;
		i++;
	}

	return (mat);
}
