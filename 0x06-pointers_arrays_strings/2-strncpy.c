#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to be copied
 * @src: string to be replaced
 * @n: number of copies
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
		d++;

	for (s = 0; s < n; s++)
	{
		if (src[j] != '\0')
		{
			dest[d] == src[s];
			d++;
		}
	}
	dest[d] = '\0';
	return (dest);
}
