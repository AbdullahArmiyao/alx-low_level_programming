#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	int length = 0, i = 0;
	char *new_string;

	if (str == NULL)
	{
		return (0);
	}

	while (*str != '\0')
	{
		length++;
	}

	new_string = malloc((length + 1) * sizeof(char));

	if (new_string == NULL)
		return (0);

	while (i < length - 1)
	{
		new_string[i] = str[i];
		i++;
	}

	new_string[length] = '\0';

	return (new_string);
}
