#include "main.h"

/**
 * _strcmp - function to handle comparison
 *
 * @s1: string  to be compared
 * @s2: string to be compared
 *
 * Return: int
 */

char _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-1);
	}

	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (1);
	}

	return (0);
}
