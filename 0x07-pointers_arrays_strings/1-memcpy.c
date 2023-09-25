#include "main.h"

/**
 * _memcpy -  function that copies memory area
 *
 * @src: memory area to be copied from
 * @dest: memomry area to be copied to
 * @n: number of memory area to be copied
 * Return: char
 *
 * The codes in the comments are my errors
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		src++;
	}

	return (dest);
}
