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
	if (n / 10 != 0)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
}
