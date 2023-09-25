#include "main.h"

/**
 * _memcpy -  function that copies memory area
 *
 * @src: memory area to be copied from
 * @dest: memomry area to be copied to
 * @n: number of memory area to be copied
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest2 = dest;
	unsigned int i = 0;

	/**
	 * while (dest != '\0')
	 * {
	 *	dest++;
	 * }
	 */

	while (i < n)
	{
		dest[i] = src[i];
		src++;
	}
	return (*dest2);
}
