#include "main.h"

/**
 * mem_cpy - copy memory area
 *
 * @destn: destination buffer
 * @srce: source buffer
 * @n: size
 *
 * Return: a pointer to @destn
 */
void *mem_cpy(void *destn, const void *srce, unsigned int n)
{
	unsigned int i = 0;
	char *temporal_destn = (char *) destn;
	const char *temp_srce = (const char *) srce;

	while (i < n)
	{
		temporal_destn[i] = temp_srce[i];
		i++;
	}
	return (destn);
}


/**
 * _realloc - function that reallocates a memory block
 *
 * @ptr: pointer to the memory allocated
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to newly allocated memory or NULL upon failure
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;
	unsigned int size;

	/* check if new size = old size and return ptr if so */
	if (new_size == old_size)
		return (ptr);

	/* handle the free() equivalent call of the _realloc function */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* initializing the new memory */
	new_memory = malloc(new_size);
	/* check if malloc failed */
	if (new_memory == NULL)
		return (NULL);

	/* copy data from old memory block to new memory block */
	if (ptr != NULL)
	{
		if (old_size < new_size)
			size = old_size;
		else
			size = new_size;

		mem_cpy(new_memory, ptr, size);
		free(ptr);
	}
	return (new_memory);
}
