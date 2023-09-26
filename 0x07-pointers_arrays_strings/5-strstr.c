#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	int h = 0, n = 0;

	while (haystack[h] != '\0')
	{
		while (needle[n] != '\0')
		{
			if (haystack[h + n] != needle[n])
			{
				break;
			}
			n++;
		}
		if (!needle[n])
		{
			return (&haystack[h]);
		}
		h++;
	}
	return (0);
}
