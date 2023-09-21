#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: string to be appeneded
 * @src: string to append
 * @n: number of characters of src to append
 * Return: answer
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
