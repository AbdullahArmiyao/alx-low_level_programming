#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string to be appended
 * @src: string to append
 *
 * Return: answer
 */

char *_strcat(char *dest, char *src)
{
	/**
	 * Assigning a new pointer to the dest variable
	 * This directly changes the value of dest
	 */
	char *answer = dest;

	/**
	 * if the string != null terminator, increase the
	 * value of dest
	 */

	while (*dest != '\0')
	{
		dest++;
	}

	/**
	 * while the src string != null terminator
	 * assign *src to *dest
	 * and increment both
	 */

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/**
	 * Add a null terminator to *dest
	 */

	*dest = '\0';
	return (answer);
