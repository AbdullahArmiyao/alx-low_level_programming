#include "main.h"

/**
 * _strcmp - function to handle comparison
 *
 * @s1: string  to be compared
 * @s2: string to be compared
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
