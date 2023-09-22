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
	int c = 0, r = n - 1 temp;

	while (c < (n / 2))
	{
		temp = a[c];
		a[c] = a[r];
		a[r--] = temp;
		c++;
	}
}
