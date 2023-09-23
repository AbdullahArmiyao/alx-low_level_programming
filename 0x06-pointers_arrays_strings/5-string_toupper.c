#include "main.h"

/**
 * string_toupper - function to change all lowercase to uppercase
 *
 * @s: string/char arg
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
