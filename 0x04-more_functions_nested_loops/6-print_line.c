#include "main.h"

/**
 * print_line - main function
 *
 * @n: value to be checked
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
