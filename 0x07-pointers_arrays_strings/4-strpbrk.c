#include "main.h"

/**
 * _strpbrk - function that searches for a string of any set of bytes
 *
 * @s: string
 * @accept: substring
 *
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
