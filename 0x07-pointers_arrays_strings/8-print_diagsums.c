#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: arg
 * @size: arg
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int count = 0, sum_right = 0, sum_left = 0;

	while (count < size)
	{
		sum_right += a[(size * count) + count];
		sum_left += a[(size * (count + 1)) - (count + 1)];
		count++;
	}
	printf("%d, %d\n", sum_right, sum_left);
}
