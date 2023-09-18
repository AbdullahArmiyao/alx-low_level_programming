#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char arg
 * @src: char arg
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';
	return (dest);
}
