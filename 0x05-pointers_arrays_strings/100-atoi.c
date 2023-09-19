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

	while (s[i] != '\0')
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
		if (result > (INT_MAX-(*s - '0') / 10)
		{
			return sign == 1 ? INT_MAX : INT_MIN;
		}
		result *= 10 + (*s - '0';)
		s++;
	}

	result *= sign;
	return (result);
}
