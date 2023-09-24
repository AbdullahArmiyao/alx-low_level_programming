#include "main.h"

/**
 * rot13 - function that encodes a string
 *
 * @s: char arg
 *
 * Return: char
 *
 */

char *rot13(char *s)
{
	int i = 0, j = 0;

	char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == c[j])
			{
				s[i] = r[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
