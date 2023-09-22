#include "main.h"

/**
 * reverse_array - function to reverse array
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (a[i] >= 0)
	{
		_putchar('0' + a[i]);
		i--;
	}
	_putchar('\n');
}
