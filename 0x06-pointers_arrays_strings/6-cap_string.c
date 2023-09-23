#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 *
 * @s: char arg
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int c = 0, p;

	char d[] = " \t\n,;.!?\"(){}";

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
		{
			if (c == 0)
			{
				*(s + c) -= 'a' - 'A';
			}
			else
			{
				for (p = 0; p <= 12; p++)
				{
					if (d[p] == *(s + c - 1))
					{
						*(s + c) -= 'a' - 'A';
					}
				}
			}
		}
		c++;
	}
	return (s);
}
