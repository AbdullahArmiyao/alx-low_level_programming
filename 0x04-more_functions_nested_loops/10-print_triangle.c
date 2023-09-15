#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: value to  be checked
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
