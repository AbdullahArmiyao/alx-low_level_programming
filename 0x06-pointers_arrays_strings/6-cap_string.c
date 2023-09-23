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

	char seperators[] = "\n\t,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 'a' - 'A';
			}
			else
			{
				for (process = 0; process <= 12; process++)
				{
					if a[process] == *(s + i - 1)
					{
						*(s + i) = 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
}
