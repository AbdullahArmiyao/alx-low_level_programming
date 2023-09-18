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
	int i;

	if (a == NULL || n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
