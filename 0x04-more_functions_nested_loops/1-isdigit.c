#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: value to be checked
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (0);
}
