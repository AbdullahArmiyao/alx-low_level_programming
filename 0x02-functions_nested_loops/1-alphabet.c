#include "main.h"

/**
 * print_alphabet - function responsible for printing the alphabets
 *
 *
 * Return void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
