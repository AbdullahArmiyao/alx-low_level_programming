#include "main.h"


/**
 * print_times_table - prints out the time table
 *
 * @n: is the number
 *
 * Return: int
 *
 */

void print_times_table(int n)
{
	int i, m, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = n * m;

				if (p <= 9 && p <= 99)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
