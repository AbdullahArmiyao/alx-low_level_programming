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

	while (*haystack != '\0')
	{
		char *store_value = haystack;

		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (store_value);
		}
		haystack = store_value + 1;
		needle = store_value + 1;
	}
	return (0);
}
