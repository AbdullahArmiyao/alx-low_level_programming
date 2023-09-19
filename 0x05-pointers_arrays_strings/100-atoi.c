#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * 
 * @s: string value
 *
 * Return: int result
 */

int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	while (s[i] != ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i]<= '9')
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}

	result *= sign;
	return (result);
}
