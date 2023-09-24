#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	int i = n / 10;
	int j = n % 10;

	if (i != 0)
	{
		_putchar(i + '0');
	}

	_putchar(j + '0');
}
