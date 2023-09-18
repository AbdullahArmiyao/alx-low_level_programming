#include <stdio.h>
#include "main.h"

/**
 * print_array - main function
 *
 * @a: Pointer to the integer array
 *
 * @n: Number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
	{
		return;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
