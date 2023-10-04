#include "main.h"
/**
 * str_len - string Length function
 * @string: string
 * Return: len
 */
int str_len(char *string)
{
	int len = 0;


	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_cpy - string copy function
 * @destination: destination
 * @source: string to be copied
 */

void str_cpy(char *destination, char *source)
{
	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
}

/**
 * argstostr - function that concatenates all arguments
 * in a program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, length = 0, t_length;
	char *new_string;

	/* check if ac = 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the length of the concatenated string */
	while (i < ac)
	{
		length += str_len(av[i]);
		i++;
	}
	t_length = length + ac + 1;

	/* allocate new memory */
	new_string = malloc(t_length);
	if (new_string == NULL)
		return (NULL);

	/* copy each argument and add a new line */
	while (i < ac)
	{
		str_cpy(new_string + j, av[i]);
		j += str_len(av[i]);
		new_string[j] = '\n';
		j++;
		i++;
	}

	/* add null terminators */
	new_string[t_length - 1] = '\0';

	return (new_string);
}
