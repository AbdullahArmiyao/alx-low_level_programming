#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: value to be checked
 *
 * Return: 1 if digit
 * Return: 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
