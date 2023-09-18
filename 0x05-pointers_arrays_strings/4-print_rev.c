#include "main.h"

/**
 * print_rev - main function
 *
 * @s: value to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int pointer = 0;
	int count;
	int length;

	while (s[pointer] != '\0')
	{
		pointer++;
	}
	
	length = pointer;

	for (count = length - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
