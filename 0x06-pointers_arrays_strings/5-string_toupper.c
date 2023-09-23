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

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
		count++;
	}
	return (s);
}
