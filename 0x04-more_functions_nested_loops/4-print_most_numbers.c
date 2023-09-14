#include "main.h"

/**
 * print_most_numbers - main function
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i);
		i++;
	}
}
