#include "main.h"

/**
 * _memset - function that fills a memory with a constant byte
 * @s: pointer of a string
 * @b: bytes
 * @n: number of bytes
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
