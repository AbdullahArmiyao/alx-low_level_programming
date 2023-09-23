#include "main.h"

/**
 * leet - function to encode string
 *
 * @s: char arg
 *
 * Return: char
 */

char *leet(char *s)
{
	int c = 0, lc = 0;

	char *n = "aAeEoOtTlL";
	char *l = "4433007711";

	while (s[c] != '\0')
	{
		while (lc < 10)
		{
			if (s[c] == n[lc])
			{
				s[c] = l[lc];
			}
			lc++;
		}
		c++;
	}
	return (s);
}
