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
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[counter]);
	}
	printf("\n");
}
