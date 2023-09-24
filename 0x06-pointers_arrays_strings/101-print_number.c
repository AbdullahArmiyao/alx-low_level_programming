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
	int i = n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		//n = -n;
	}

	//if (n / 10 != 0)
	if (n / 10)
	{
		//_putchar(n / 10 + '0');
		print_number(n / 10);
	}

	//_putchar(n % 10 + '0');
	_putchar(i % 10 + '0');
}
