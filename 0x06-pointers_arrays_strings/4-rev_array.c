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
	int count = 0, rev = n - 1, temp;

	while (count <= (rev / 2))
	{
		temp  = a[count];
		a[count] = a[rev];
		a[rev] = a[count];
		count++;
		rev--;
	}
}
