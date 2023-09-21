#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to be copied
 * @src: string to be replaced
 * @n: number of copies
 *
 * Return: char 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;

	while (src[d] != '\0' && d < n)
	{
		dest[d] = src[d];
		d++;

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
