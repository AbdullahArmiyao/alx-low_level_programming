#include "main.h"

/**
 * print_line - main function
 *
 * Return: void
 */


void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
