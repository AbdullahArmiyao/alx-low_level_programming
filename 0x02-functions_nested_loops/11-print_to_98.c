#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 *
 * @n: number to be checked
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i == 98; i++)
		{
			printf("%d, ", i);
		}
	}

	else if (n > 98)
	{
		int j;

		for (j = n; j == 98; j++)
		{
			printf("%d, ", j);
		}
	}

	printf("\n");
}
