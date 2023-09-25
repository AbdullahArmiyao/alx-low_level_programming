#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: the prefix substring
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, inc = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				inc++;
				break;
			}
			j++;
		}
		i++;
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (inc);
}
