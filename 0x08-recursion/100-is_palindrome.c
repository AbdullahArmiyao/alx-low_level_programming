#include "main.h"

/**
 * _string_length - function that returns string length
 * @s: string
 *
 * Return: int
 */

int _string_length(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _string_length(s + 1);
	}
	return (i);
}


/**
 * check_if_palindrome - function to check if string is a palindrome
 * @s: string
 * @i: arg
 * @j: arg
 *
 * Return: int
 */

int check_if_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (check_if_palindrome(s, i + 1, j - 1));
		}
	}
	else
		return (0);
}


/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	return (check_if_palindrome(s, 0, _string_length(s) - 1));
}
