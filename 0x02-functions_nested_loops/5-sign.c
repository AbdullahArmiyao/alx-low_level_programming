#include "main.h"

/**
 * print_sign - functio that prints out if number is '+' or '-'
 *
 * @n: number
 *
 * Return (1): if '+'
 * Return (0): if '0'
 * Return (-1): if '-'
 *
 * Return: (0) success
 */


int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
