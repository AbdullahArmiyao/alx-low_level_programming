#include "main.h"

/**
 * _islower - checks if letter is lowercase
 *
 * @c:  alphabet to be checked
 *
 * Return (0) if it is uppercase
 * Return (1) if lowercase
 *
 * Return: (0) success
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
