#include "main.h"

/**
 * _isalpha - function to check if alphabet or number
 *
 * @c: character to be checked
 *
 * Return (1): if 'c' is a letter
 * Return (0): if otherwise
 *
 * Return: (0) success
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
