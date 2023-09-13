#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 *
 */

int main(void)
{
	int i;
	unsigned long f1 = 1, f2 = 2, n;

	printf("%lu, %lu", f1, f2);

	for (i = 3; i <= 98; i++)
	{
		n = f1 + f2;
		printf(", %lu", n);
		f1 = f2;
		f2 = n;
	}

	return (0);
}
