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

		putchar('+');
		return (1);
	}
	else if (n == 0)
	{

		putchar('0');
		return (0);
	}
	else
	{

		putchar('-');
		return (-1);
	}
	return (0);
}
