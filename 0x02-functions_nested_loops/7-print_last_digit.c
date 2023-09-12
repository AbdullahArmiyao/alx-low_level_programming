#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * Return: last digit of n
 */


int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
