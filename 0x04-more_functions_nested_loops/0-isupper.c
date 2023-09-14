#include "main.h"

/**
 * _isupper - function to check if c is uppercase
 *
 * @c: variable to be checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (0);
}
