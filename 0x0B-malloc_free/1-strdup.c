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
	int length = 0, i, j = 0;
	char *new_string;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; i < str[i]; i++)
	{
		length++;
	}

	new_string = malloc((length + 1) * sizeof(char));

	if (new_string == NULL)
		return (0);

	while (j < length - 1)
	{
		new_string[i] = str[i];
		j++;
	}

	new_string[length] = '\0';

	return (new_string);
}
