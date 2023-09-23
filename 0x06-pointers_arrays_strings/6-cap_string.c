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
	int count = 0, process;

	char sep[] = "\t\n,;.!?\"(){}";

	while (*(s + count))
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			if (count == 0)
			{
				*(s + count) -= 'a' - 'A';
			}
			else
			{
				for (process = 0; process <= 12; process++)
				{
					if (sep[process] == *(s + count - 1))
					{
						*(s + count) -= 'a' - 'A';
					}
				}
			}
		}
		count++;
	}
	return (s);
}
